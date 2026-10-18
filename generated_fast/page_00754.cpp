#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_753(u8* __restrict R,Cpu& c);
u32 body_755(u8* __restrict R,Cpu& c);
u32 body_759(u8* __restrict R,Cpu& c);
u32 body_75a(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x754,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x754,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_754(u8* __restrict R,Cpu& c);
u32 page_754(Cpu& c){return body_754(c.regs.data(),c);}
__attribute__((noinline)) u32 body_754(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x754000:goto L754000;
case 0x754001:c.instructions+=2;goto B754001;
case 0x754006:c.instructions+=1;goto B754006;
case 0x75400b:goto L75400b;
case 0x75400d:c.instructions+=4;goto B75400d;
case 0x754010:c.instructions+=3;goto B754010;
case 0x754012:c.instructions+=2;goto B754012;
case 0x754014:c.instructions+=1;goto B754014;
case 0x75401a:goto L75401a;
case 0x75401b:c.instructions+=2;goto B75401b;
case 0x754020:c.instructions+=1;goto B754020;
case 0x754022:goto L754022;
case 0x754024:goto L754024;
case 0x75402a:c.instructions+=21;goto B75402a;
case 0x754031:c.instructions+=20;goto B754031;
case 0x754038:c.instructions+=19;goto B754038;
case 0x75403f:c.instructions+=18;goto B75403f;
case 0x754046:c.instructions+=17;goto B754046;
case 0x75404d:c.instructions+=16;goto B75404d;
case 0x754054:c.instructions+=15;goto B754054;
case 0x75405b:c.instructions+=14;goto B75405b;
case 0x754062:c.instructions+=13;goto B754062;
case 0x754069:c.instructions+=12;goto B754069;
case 0x754070:c.instructions+=11;goto B754070;
case 0x754077:c.instructions+=10;goto B754077;
case 0x75407e:c.instructions+=9;goto B75407e;
case 0x754085:c.instructions+=8;goto B754085;
case 0x75408b:c.instructions+=7;goto B75408b;
case 0x75408e:c.instructions+=6;goto B75408e;
case 0x754090:c.instructions+=5;goto B754090;
case 0x754096:c.instructions+=4;goto B754096;
case 0x754099:c.instructions+=3;goto B754099;
case 0x75409f:c.instructions+=2;goto B75409f;
case 0x7540a0:c.instructions+=1;goto B7540a0;
case 0x7540a5:goto L7540a5;
case 0x7540a9:c.instructions+=8;goto B7540a9;
case 0x7540ac:c.instructions+=7;goto B7540ac;
case 0x7540b2:c.instructions+=6;goto B7540b2;
case 0x7540b4:c.instructions+=5;goto B7540b4;
case 0x7540b9:c.instructions+=4;goto B7540b9;
case 0x7540ba:c.instructions+=3;goto B7540ba;
case 0x7540c0:c.instructions+=2;goto B7540c0;
case 0x7540c6:c.instructions+=1;goto B7540c6;
case 0x7540cb:goto L7540cb;
case 0x7540d1:c.instructions+=5;goto B7540d1;
case 0x7540d6:c.instructions+=4;goto B7540d6;
case 0x7540d7:c.instructions+=3;goto B7540d7;
case 0x7540dd:c.instructions+=2;goto B7540dd;
case 0x7540e3:c.instructions+=1;goto B7540e3;
case 0x7540e8:goto L7540e8;
case 0x7540ee:c.instructions+=11;goto B7540ee;
case 0x7540f5:c.instructions+=10;goto B7540f5;
case 0x7540f7:c.instructions+=9;goto B7540f7;
case 0x7540fa:c.instructions+=8;goto B7540fa;
case 0x7540fc:c.instructions+=7;goto B7540fc;
case 0x7540ff:c.instructions+=6;goto B7540ff;
case 0x754102:c.instructions+=5;goto B754102;
case 0x754105:c.instructions+=4;goto B754105;
case 0x754108:c.instructions+=3;goto B754108;
case 0x754112:c.instructions+=2;goto B754112;
case 0x754118:c.instructions+=1;goto B754118;
case 0x75411d:goto L75411d;
case 0x75411f:c.instructions+=1;goto B75411f;
case 0x754120:goto L754120;
case 0x754121:c.instructions+=1;goto B754121;
case 0x754130:goto L754130;
case 0x754131:c.instructions+=4;goto B754131;
case 0x754134:c.instructions+=3;goto B754134;
case 0x754136:c.instructions+=2;goto B754136;
case 0x754138:c.instructions+=1;goto B754138;
case 0x75413a:goto L75413a;
case 0x75413d:c.instructions+=5;goto B75413d;
case 0x754140:c.instructions+=4;goto B754140;
case 0x754144:c.instructions+=3;goto B754144;
case 0x754145:c.instructions+=2;goto B754145;
case 0x754148:c.instructions+=1;goto B754148;
case 0x75414d:goto L75414d;
case 0x754150:c.instructions+=6;goto B754150;
case 0x754153:c.instructions+=5;goto B754153;
case 0x754156:c.instructions+=4;goto B754156;
case 0x754159:c.instructions+=3;goto B754159;
case 0x75415b:c.instructions+=2;goto B75415b;
case 0x75415c:c.instructions+=1;goto B75415c;
case 0x75415d:goto L75415d;
case 0x75415e:c.instructions+=5;goto B75415e;
case 0x754161:c.instructions+=4;goto B754161;
case 0x754163:c.instructions+=3;goto B754163;
case 0x754165:c.instructions+=2;goto B754165;
case 0x754166:c.instructions+=1;goto B754166;
case 0x754168:goto L754168;
case 0x75416a:c.instructions+=1;goto B75416a;
case 0x754170:goto L754170;
case 0x754175:c.instructions+=11;goto B754175;
case 0x754177:c.instructions+=10;goto B754177;
case 0x75417b:c.instructions+=9;goto B75417b;
case 0x75417f:c.instructions+=8;goto B75417f;
case 0x754182:c.instructions+=7;goto B754182;
case 0x754184:c.instructions+=6;goto B754184;
case 0x754189:c.instructions+=5;goto B754189;
case 0x75418c:c.instructions+=4;goto B75418c;
case 0x75418e:c.instructions+=3;goto B75418e;
case 0x754190:c.instructions+=2;goto B754190;
case 0x754192:c.instructions+=1;goto B754192;
case 0x754194:goto L754194;
case 0x754196:goto L754196;
case 0x754198:goto L754198;
case 0x75419a:goto L75419a;
case 0x75419c:c.instructions+=1;goto B75419c;
case 0x75419e:goto L75419e;
case 0x7541a1:c.instructions+=4;goto B7541a1;
case 0x7541a3:c.instructions+=3;goto B7541a3;
case 0x7541a5:c.instructions+=2;goto B7541a5;
case 0x7541a8:c.instructions+=1;goto B7541a8;
case 0x7541ab:goto L7541ab;
case 0x7541ad:goto L7541ad;
case 0x7541af:c.instructions+=1;goto B7541af;
case 0x7541b2:goto L7541b2;
case 0x7541b4:goto L7541b4;
case 0x7541b7:c.instructions+=5;goto B7541b7;
case 0x7541ba:c.instructions+=4;goto B7541ba;
case 0x7541bc:c.instructions+=3;goto B7541bc;
case 0x7541be:c.instructions+=2;goto B7541be;
case 0x7541c1:c.instructions+=1;goto B7541c1;
case 0x7541c4:goto L7541c4;
case 0x7541c7:c.instructions+=5;goto B7541c7;
case 0x7541ca:c.instructions+=4;goto B7541ca;
case 0x7541ce:c.instructions+=3;goto B7541ce;
case 0x7541d0:c.instructions+=2;goto B7541d0;
case 0x7541d2:c.instructions+=1;goto B7541d2;
case 0x7541d4:goto L7541d4;
case 0x7541d8:c.instructions+=4;goto B7541d8;
case 0x7541da:c.instructions+=3;goto B7541da;
case 0x7541dc:c.instructions+=2;goto B7541dc;
case 0x7541dd:c.instructions+=1;goto B7541dd;
case 0x7541e2:goto L7541e2;
case 0x7541e4:c.instructions+=3;goto B7541e4;
case 0x7541e7:c.instructions+=2;goto B7541e7;
case 0x7541e9:c.instructions+=1;goto B7541e9;
case 0x7541eb:goto L7541eb;
case 0x7541ec:c.instructions+=3;goto B7541ec;
case 0x7541ed:c.instructions+=2;goto B7541ed;
case 0x7541ee:c.instructions+=1;goto B7541ee;
case 0x7541ef:goto L7541ef;
case 0x7541f2:c.instructions+=4;goto B7541f2;
case 0x7541f5:c.instructions+=3;goto B7541f5;
case 0x7541f7:c.instructions+=2;goto B7541f7;
case 0x7541fa:c.instructions+=1;goto B7541fa;
case 0x7541fc:goto L7541fc;
case 0x7541fe:goto L7541fe;
case 0x754200:c.instructions+=1;goto B754200;
case 0x754203:goto L754203;
case 0x754205:goto L754205;
case 0x754208:c.instructions+=2;goto B754208;
case 0x754209:c.instructions+=1;goto B754209;
case 0x75420e:goto L75420e;
case 0x754212:c.instructions+=7;goto B754212;
case 0x754215:c.instructions+=6;goto B754215;
case 0x754218:c.instructions+=5;goto B754218;
case 0x75421c:c.instructions+=4;goto B75421c;
case 0x75421f:c.instructions+=3;goto B75421f;
case 0x754221:c.instructions+=2;goto B754221;
case 0x754224:c.instructions+=1;goto B754224;
case 0x754227:goto L754227;
case 0x75422a:c.instructions+=5;goto B75422a;
case 0x75422b:c.instructions+=4;goto B75422b;
case 0x75422c:c.instructions+=3;goto B75422c;
case 0x75422e:c.instructions+=2;goto B75422e;
case 0x75422f:c.instructions+=1;goto B75422f;
case 0x754230:goto L754230;
case 0x754236:c.instructions+=6;goto B754236;
case 0x75423b:c.instructions+=5;goto B75423b;
case 0x754242:c.instructions+=4;goto B754242;
case 0x754245:c.instructions+=3;goto B754245;
case 0x754246:c.instructions+=2;goto B754246;
case 0x754248:c.instructions+=1;goto B754248;
case 0x75424d:goto L75424d;
case 0x75424f:c.instructions+=1;goto B75424f;
case 0x754251:goto L754251;
case 0x754253:c.instructions+=2;goto B754253;
case 0x75425a:c.instructions+=1;goto B75425a;
case 0x75425f:goto L75425f;
case 0x754265:c.instructions+=1;goto B754265;
case 0x754266:goto L754266;
case 0x75426b:c.instructions+=2;goto B75426b;
case 0x75426d:c.instructions+=1;goto B75426d;
case 0x75426f:goto L75426f;
case 0x754274:goto L754274;
case 0x754279:goto L754279;
case 0x75427e:c.instructions+=1;goto B75427e;
case 0x754283:goto L754283;
case 0x754285:c.instructions+=3;goto B754285;
case 0x754288:c.instructions+=2;goto B754288;
case 0x75428a:c.instructions+=1;goto B75428a;
case 0x75428c:goto L75428c;
case 0x75428d:c.instructions+=3;goto B75428d;
case 0x75428f:c.instructions+=2;goto B75428f;
case 0x754294:c.instructions+=1;goto B754294;
case 0x754296:goto L754296;
case 0x754298:goto L754298;
case 0x75429a:c.instructions+=3;goto B75429a;
case 0x75429d:c.instructions+=2;goto B75429d;
case 0x7542a4:c.instructions+=1;goto B7542a4;
case 0x7542a5:goto L7542a5;
case 0x7542ac:c.instructions+=2;goto B7542ac;
case 0x7542ae:c.instructions+=1;goto B7542ae;
case 0x7542b3:goto L7542b3;
case 0x7542b9:c.instructions+=1;goto B7542b9;
case 0x7542c0:goto L7542c0;
case 0x7542c1:c.instructions+=4;goto B7542c1;
case 0x7542c5:c.instructions+=3;goto B7542c5;
case 0x7542c7:c.instructions+=2;goto B7542c7;
case 0x7542c9:c.instructions+=1;goto B7542c9;
case 0x7542cb:goto L7542cb;
case 0x7542cc:c.instructions+=1;goto B7542cc;
case 0x7542d1:goto L7542d1;
case 0x7542d4:goto L7542d4;
case 0x7542d6:c.instructions+=1;goto B7542d6;
case 0x7542dc:goto L7542dc;
case 0x7542e1:goto L7542e1;
case 0x7542e4:c.instructions+=2;goto B7542e4;
case 0x7542e6:c.instructions+=1;goto B7542e6;
case 0x7542e8:goto L7542e8;
case 0x7542e9:c.instructions+=1;goto B7542e9;
case 0x7542ee:goto L7542ee;
case 0x7542f1:goto L7542f1;
case 0x7542f4:c.instructions+=2;goto B7542f4;
case 0x7542f6:c.instructions+=1;goto B7542f6;
case 0x7542f8:goto L7542f8;
case 0x7542f9:c.instructions+=1;goto B7542f9;
case 0x7542fe:goto L7542fe;
case 0x754301:goto L754301;
case 0x754302:c.instructions+=1;goto B754302;
case 0x754307:goto L754307;
case 0x75430a:c.instructions+=2;goto B75430a;
case 0x75430b:c.instructions+=1;goto B75430b;
case 0x754310:goto L754310;
case 0x754314:c.instructions+=2;goto B754314;
case 0x754319:c.instructions+=1;goto B754319;
case 0x75431b:goto L75431b;
case 0x75431f:c.instructions+=4;goto B75431f;
case 0x754321:c.instructions+=3;goto B754321;
case 0x754325:c.instructions+=2;goto B754325;
case 0x754326:c.instructions+=1;goto B754326;
case 0x75432b:goto L75432b;
case 0x75432e:c.instructions+=2;goto B75432e;
case 0x754331:c.instructions+=1;goto B754331;
case 0x754332:goto L754332;
case 0x754337:c.instructions+=1;goto B754337;
case 0x754339:goto L754339;
case 0x75433d:c.instructions+=3;goto B75433d;
case 0x754340:c.instructions+=2;goto B754340;
case 0x754341:c.instructions+=1;goto B754341;
case 0x754346:goto L754346;
case 0x754349:c.instructions+=1;goto B754349;
case 0x75434a:goto L75434a;
case 0x75434f:c.instructions+=1;goto B75434f;
case 0x754351:goto L754351;
case 0x754355:c.instructions+=2;goto B754355;
case 0x754358:c.instructions+=1;goto B754358;
case 0x754359:goto L754359;
case 0x75435e:c.instructions+=1;goto B75435e;
case 0x754360:goto L754360;
case 0x754364:c.instructions+=2;goto B754364;
case 0x754367:c.instructions+=1;goto B754367;
case 0x754368:goto L754368;
case 0x75436d:c.instructions+=1;goto B75436d;
case 0x75436f:goto L75436f;
case 0x754373:c.instructions+=3;goto B754373;
case 0x754376:c.instructions+=2;goto B754376;
case 0x754379:c.instructions+=1;goto B754379;
case 0x75437a:goto L75437a;
case 0x75437f:c.instructions+=1;goto B75437f;
case 0x754381:goto L754381;
case 0x754385:c.instructions+=3;goto B754385;
case 0x754388:c.instructions+=2;goto B754388;
case 0x75438a:c.instructions+=1;goto B75438a;
case 0x75438c:goto L75438c;
case 0x75438f:c.instructions+=2;goto B75438f;
case 0x754392:c.instructions+=1;goto B754392;
case 0x754393:goto L754393;
case 0x754398:c.instructions+=1;goto B754398;
case 0x75439a:goto L75439a;
case 0x75439e:c.instructions+=2;goto B75439e;
case 0x7543a1:c.instructions+=1;goto B7543a1;
case 0x7543a2:goto L7543a2;
case 0x7543a7:c.instructions+=1;goto B7543a7;
case 0x7543a9:goto L7543a9;
case 0x7543ad:c.instructions+=2;goto B7543ad;
case 0x7543b4:c.instructions+=1;goto B7543b4;
case 0x7543b5:goto L7543b5;
case 0x7543ba:c.instructions+=1;goto B7543ba;
case 0x7543bc:goto L7543bc;
case 0x7543c0:c.instructions+=2;goto B7543c0;
case 0x7543c6:c.instructions+=1;goto B7543c6;
case 0x7543c7:goto L7543c7;
case 0x7543c9:c.instructions+=1;goto B7543c9;
case 0x7543d0:goto L7543d0;
case 0x7543d1:c.instructions+=4;goto B7543d1;
case 0x7543d5:c.instructions+=3;goto B7543d5;
case 0x7543d7:c.instructions+=2;goto B7543d7;
case 0x7543d9:c.instructions+=1;goto B7543d9;
case 0x7543db:goto L7543db;
case 0x7543dc:c.instructions+=1;goto B7543dc;
case 0x7543e1:goto L7543e1;
case 0x7543e4:c.instructions+=1;goto B7543e4;
case 0x7543ea:goto L7543ea;
case 0x7543ed:c.instructions+=2;goto B7543ed;
case 0x7543ef:c.instructions+=1;goto B7543ef;
case 0x7543f1:goto L7543f1;
case 0x7543f2:c.instructions+=1;goto B7543f2;
case 0x7543f7:goto L7543f7;
case 0x7543fa:c.instructions+=1;goto B7543fa;
case 0x754401:goto L754401;
case 0x754408:c.instructions+=3;goto B754408;
case 0x75440a:c.instructions+=2;goto B75440a;
case 0x75440b:c.instructions+=1;goto B75440b;
case 0x754410:goto L754410;
case 0x754414:c.instructions+=6;goto B754414;
case 0x754416:c.instructions+=5;goto B754416;
case 0x754419:c.instructions+=4;goto B754419;
case 0x75441d:c.instructions+=3;goto B75441d;
case 0x754420:c.instructions+=2;goto B754420;
case 0x754427:c.instructions+=1;goto B754427;
case 0x754430:goto L754430;
case 0x754431:c.instructions+=3;goto B754431;
case 0x754435:c.instructions+=2;goto B754435;
case 0x754437:c.instructions+=1;goto B754437;
case 0x754439:goto L754439;
case 0x75443d:c.instructions+=2;goto B75443d;
case 0x75443f:c.instructions+=1;goto B75443f;
case 0x754441:goto L754441;
case 0x754444:c.instructions+=1;goto B754444;
case 0x754446:goto L754446;
case 0x75444a:c.instructions+=4;goto B75444a;
case 0x75444b:c.instructions+=3;goto B75444b;
case 0x754451:c.instructions+=2;goto B754451;
case 0x754456:c.instructions+=1;goto B754456;
case 0x75445f:goto L75445f;
case 0x754461:goto L754461;
case 0x754462:c.instructions+=2;goto B754462;
case 0x754463:c.instructions+=1;goto B754463;
case 0x754464:goto L754464;
case 0x754468:c.instructions+=5;goto B754468;
case 0x754471:c.instructions+=4;goto B754471;
case 0x754476:c.instructions+=3;goto B754476;
case 0x754478:c.instructions+=2;goto B754478;
case 0x754479:c.instructions+=1;goto B754479;
case 0x75447e:goto L75447e;
case 0x754481:c.instructions+=2;goto B754481;
case 0x754482:c.instructions+=1;goto B754482;
case 0x754490:goto L754490;
case 0x754493:c.instructions+=11;goto B754493;
case 0x754498:c.instructions+=10;goto B754498;
case 0x754499:c.instructions+=9;goto B754499;
case 0x75449a:c.instructions+=8;goto B75449a;
case 0x75449e:c.instructions+=7;goto B75449e;
case 0x7544a2:c.instructions+=6;goto B7544a2;
case 0x7544a6:c.instructions+=5;goto B7544a6;
case 0x7544a7:c.instructions+=4;goto B7544a7;
case 0x7544a8:c.instructions+=3;goto B7544a8;
case 0x7544aa:c.instructions+=2;goto B7544aa;
case 0x7544af:c.instructions+=1;goto B7544af;
case 0x7544b1:goto L7544b1;
case 0x7544b5:c.instructions+=1;goto B7544b5;
case 0x7544b7:goto L7544b7;
case 0x7544ba:c.instructions+=2;goto B7544ba;
case 0x7544bc:c.instructions+=1;goto B7544bc;
case 0x7544be:goto L7544be;
case 0x7544bf:c.instructions+=1;goto B7544bf;
case 0x7544c4:goto L7544c4;
case 0x7544c7:goto L7544c7;
case 0x7544cc:c.instructions+=4;goto B7544cc;
case 0x7544ce:c.instructions+=3;goto B7544ce;
case 0x7544d1:c.instructions+=2;goto B7544d1;
case 0x7544d4:c.instructions+=1;goto B7544d4;
case 0x7544d9:goto L7544d9;
case 0x7544dc:c.instructions+=15;goto B7544dc;
case 0x7544de:c.instructions+=14;goto B7544de;
case 0x7544e1:c.instructions+=13;goto B7544e1;
case 0x7544e4:c.instructions+=12;goto B7544e4;
case 0x7544e7:c.instructions+=11;goto B7544e7;
case 0x7544e9:c.instructions+=10;goto B7544e9;
case 0x7544ec:c.instructions+=9;goto B7544ec;
case 0x7544ef:c.instructions+=8;goto B7544ef;
case 0x7544f2:c.instructions+=7;goto B7544f2;
case 0x7544f5:c.instructions+=6;goto B7544f5;
case 0x7544f9:c.instructions+=5;goto B7544f9;
case 0x7544fd:c.instructions+=4;goto B7544fd;
case 0x754501:c.instructions+=3;goto B754501;
case 0x754505:c.instructions+=2;goto B754505;
case 0x754508:c.instructions+=1;goto B754508;
case 0x75450b:goto L75450b;
case 0x75450e:c.instructions+=2;goto B75450e;
case 0x754513:c.instructions+=1;goto B754513;
case 0x754515:goto L754515;
case 0x754518:c.instructions+=2;goto B754518;
case 0x75451a:c.instructions+=1;goto B75451a;
case 0x75451c:goto L75451c;
case 0x75451f:c.instructions+=1;goto B75451f;
case 0x754526:goto L754526;
case 0x75452a:c.instructions+=1;goto B75452a;
case 0x754530:goto L754530;
case 0x754533:c.instructions+=8;goto B754533;
case 0x754537:c.instructions+=7;goto B754537;
case 0x754538:c.instructions+=6;goto B754538;
case 0x75453c:c.instructions+=5;goto B75453c;
case 0x75453d:c.instructions+=4;goto B75453d;
case 0x75453f:c.instructions+=3;goto B75453f;
case 0x754540:c.instructions+=2;goto B754540;
case 0x754548:c.instructions+=1;goto B754548;
case 0x75454d:goto L75454d;
case 0x75454f:c.instructions+=3;goto B75454f;
case 0x754552:c.instructions+=2;goto B754552;
case 0x754554:c.instructions+=1;goto B754554;
case 0x75455a:goto L75455a;
case 0x75455d:c.instructions+=2;goto B75455d;
case 0x75455e:c.instructions+=1;goto B75455e;
case 0x754563:goto L754563;
case 0x754566:c.instructions+=6;goto B754566;
case 0x754569:c.instructions+=5;goto B754569;
case 0x75456b:c.instructions+=4;goto B75456b;
case 0x75456e:c.instructions+=3;goto B75456e;
case 0x754575:c.instructions+=2;goto B754575;
case 0x75457c:c.instructions+=1;goto B75457c;
case 0x75457e:goto L75457e;
case 0x75457f:c.instructions+=1;goto B75457f;
case 0x754584:goto L754584;
case 0x754587:goto L754587;
case 0x75458c:c.instructions+=4;goto B75458c;
case 0x75458e:c.instructions+=3;goto B75458e;
case 0x754591:c.instructions+=2;goto B754591;
case 0x754594:c.instructions+=1;goto B754594;
case 0x754599:goto L754599;
case 0x75459c:c.instructions+=14;goto B75459c;
case 0x75459f:c.instructions+=13;goto B75459f;
case 0x7545a2:c.instructions+=12;goto B7545a2;
case 0x7545a5:c.instructions+=11;goto B7545a5;
case 0x7545a8:c.instructions+=10;goto B7545a8;
case 0x7545aa:c.instructions+=9;goto B7545aa;
case 0x7545ad:c.instructions+=8;goto B7545ad;
case 0x7545b0:c.instructions+=7;goto B7545b0;
case 0x7545b3:c.instructions+=6;goto B7545b3;
case 0x7545b6:c.instructions+=5;goto B7545b6;
case 0x7545ba:c.instructions+=4;goto B7545ba;
case 0x7545be:c.instructions+=3;goto B7545be;
case 0x7545c2:c.instructions+=2;goto B7545c2;
case 0x7545c6:c.instructions+=1;goto B7545c6;
case 0x7545c8:goto L7545c8;
case 0x7545cd:goto L7545cd;
case 0x7545d0:c.instructions+=1;goto B7545d0;
case 0x7545d6:goto L7545d6;
case 0x7545db:goto L7545db;
case 0x7545de:c.instructions+=1;goto B7545de;
case 0x7545e4:goto L7545e4;
case 0x7545e7:c.instructions+=2;goto B7545e7;
case 0x7545e9:c.instructions+=1;goto B7545e9;
case 0x7545eb:goto L7545eb;
case 0x7545ec:c.instructions+=1;goto B7545ec;
case 0x7545f1:goto L7545f1;
case 0x7545f4:goto L7545f4;
case 0x7545f9:goto L7545f9;
case 0x7545fb:c.instructions+=2;goto B7545fb;
case 0x7545fe:c.instructions+=1;goto B7545fe;
case 0x754604:goto L754604;
case 0x754606:c.instructions+=3;goto B754606;
case 0x75460a:c.instructions+=2;goto B75460a;
case 0x75460b:c.instructions+=1;goto B75460b;
case 0x754610:goto L754610;
case 0x754613:c.instructions+=5;goto B754613;
case 0x754616:c.instructions+=4;goto B754616;
case 0x754619:c.instructions+=3;goto B754619;
case 0x75461a:c.instructions+=2;goto B75461a;
case 0x75461b:c.instructions+=1;goto B75461b;
case 0x754620:goto L754620;
case 0x754623:c.instructions+=10;goto B754623;
case 0x754625:c.instructions+=9;goto B754625;
case 0x75462c:c.instructions+=8;goto B75462c;
case 0x75462d:c.instructions+=7;goto B75462d;
case 0x754630:c.instructions+=6;goto B754630;
case 0x754633:c.instructions+=5;goto B754633;
case 0x754636:c.instructions+=4;goto B754636;
case 0x754637:c.instructions+=3;goto B754637;
case 0x754638:c.instructions+=2;goto B754638;
case 0x754639:c.instructions+=1;goto B754639;
case 0x75463e:goto L75463e;
case 0x754641:c.instructions+=2;goto B754641;
case 0x754643:c.instructions+=1;goto B754643;
case 0x754649:goto L754649;
case 0x75464e:goto L75464e;
case 0x754654:c.instructions+=5;goto B754654;
case 0x754659:c.instructions+=4;goto B754659;
case 0x75465b:c.instructions+=3;goto B75465b;
case 0x75465c:c.instructions+=2;goto B75465c;
case 0x75465f:c.instructions+=1;goto B75465f;
case 0x754664:goto L754664;
case 0x754667:goto L754667;
case 0x75466a:c.instructions+=2;goto B75466a;
case 0x75466c:c.instructions+=1;goto B75466c;
case 0x754672:goto L754672;
case 0x754673:c.instructions+=1;goto B754673;
case 0x754678:goto L754678;
case 0x75467b:c.instructions+=5;goto B75467b;
case 0x75467d:c.instructions+=4;goto B75467d;
case 0x75467f:c.instructions+=3;goto B75467f;
case 0x754684:c.instructions+=2;goto B754684;
case 0x754685:c.instructions+=1;goto B754685;
case 0x75468a:goto L75468a;
case 0x75468d:c.instructions+=2;goto B75468d;
case 0x75468f:c.instructions+=1;goto B75468f;
case 0x754695:goto L754695;
case 0x754698:c.instructions+=2;goto B754698;
case 0x75469a:c.instructions+=1;goto B75469a;
case 0x75469c:goto L75469c;
case 0x75469f:c.instructions+=6;goto B75469f;
case 0x7546a1:c.instructions+=5;goto B7546a1;
case 0x7546a4:c.instructions+=4;goto B7546a4;
case 0x7546a5:c.instructions+=3;goto B7546a5;
case 0x7546aa:c.instructions+=2;goto B7546aa;
case 0x7546ab:c.instructions+=1;goto B7546ab;
case 0x7546b0:goto L7546b0;
case 0x7546b3:goto L7546b3;
case 0x7546b6:c.instructions+=6;goto B7546b6;
case 0x7546b8:c.instructions+=5;goto B7546b8;
case 0x7546bc:c.instructions+=4;goto B7546bc;
case 0x7546bd:c.instructions+=3;goto B7546bd;
case 0x7546c2:c.instructions+=2;goto B7546c2;
case 0x7546c3:c.instructions+=1;goto B7546c3;
case 0x7546c8:goto L7546c8;
case 0x7546cb:c.instructions+=2;goto B7546cb;
case 0x7546cd:c.instructions+=1;goto B7546cd;
case 0x7546cf:goto L7546cf;
case 0x7546d3:c.instructions+=2;goto B7546d3;
case 0x7546d4:c.instructions+=1;goto B7546d4;
case 0x7546d9:goto L7546d9;
case 0x7546dd:c.instructions+=3;goto B7546dd;
case 0x7546de:c.instructions+=2;goto B7546de;
case 0x7546e1:c.instructions+=1;goto B7546e1;
case 0x7546e6:goto L7546e6;
case 0x7546e9:c.instructions+=2;goto B7546e9;
case 0x7546ec:c.instructions+=1;goto B7546ec;
case 0x7546ef:goto L7546ef;
case 0x7546f2:c.instructions+=4;goto B7546f2;
case 0x7546f4:c.instructions+=3;goto B7546f4;
case 0x7546fb:c.instructions+=2;goto B7546fb;
case 0x754702:c.instructions+=1;goto B754702;
case 0x754704:goto L754704;
case 0x754705:c.instructions+=1;goto B754705;
case 0x75470a:goto L75470a;
case 0x75470d:goto L75470d;
case 0x75470f:c.instructions+=3;goto B75470f;
case 0x754712:c.instructions+=2;goto B754712;
case 0x754715:c.instructions+=1;goto B754715;
case 0x75471a:goto L75471a;
case 0x75471d:c.instructions+=13;goto B75471d;
case 0x754720:c.instructions+=12;goto B754720;
case 0x754723:c.instructions+=11;goto B754723;
case 0x754726:c.instructions+=10;goto B754726;
case 0x754729:c.instructions+=9;goto B754729;
case 0x75472b:c.instructions+=8;goto B75472b;
case 0x75472e:c.instructions+=7;goto B75472e;
case 0x754731:c.instructions+=6;goto B754731;
case 0x754734:c.instructions+=5;goto B754734;
case 0x754737:c.instructions+=4;goto B754737;
case 0x75473b:c.instructions+=3;goto B75473b;
case 0x75473f:c.instructions+=2;goto B75473f;
case 0x754743:c.instructions+=1;goto B754743;
case 0x754747:goto L754747;
case 0x75474a:c.instructions+=2;goto B75474a;
case 0x75474c:c.instructions+=1;goto B75474c;
case 0x754752:goto L754752;
case 0x754753:c.instructions+=1;goto B754753;
case 0x754758:goto L754758;
case 0x75475b:c.instructions+=4;goto B75475b;
case 0x75475d:c.instructions+=3;goto B75475d;
case 0x754760:c.instructions+=2;goto B754760;
case 0x754762:c.instructions+=1;goto B754762;
case 0x754764:goto L754764;
case 0x754767:c.instructions+=3;goto B754767;
case 0x75476a:c.instructions+=2;goto B75476a;
case 0x75476c:c.instructions+=1;goto B75476c;
case 0x75476e:goto L75476e;
case 0x754770:c.instructions+=6;goto B754770;
case 0x754771:c.instructions+=5;goto B754771;
case 0x754773:c.instructions+=4;goto B754773;
case 0x754774:c.instructions+=3;goto B754774;
case 0x754777:c.instructions+=2;goto B754777;
case 0x754778:c.instructions+=1;goto B754778;
case 0x75477d:goto L75477d;
case 0x754780:c.instructions+=3;goto B754780;
case 0x754782:c.instructions+=2;goto B754782;
case 0x754786:c.instructions+=1;goto B754786;
case 0x75478c:goto L75478c;
case 0x75478e:goto L75478e;
case 0x754791:goto L754791;
case 0x754794:c.instructions+=2;goto B754794;
case 0x754797:c.instructions+=1;goto B754797;
case 0x754799:goto L754799;
case 0x75479c:c.instructions+=2;goto B75479c;
case 0x75479d:c.instructions+=1;goto B75479d;
case 0x7547a2:goto L7547a2;
case 0x7547a5:c.instructions+=1;goto B7547a5;
case 0x7547a8:goto L7547a8;
case 0x7547ab:c.instructions+=1;goto B7547ab;
case 0x7547b1:goto L7547b1;
case 0x7547b4:c.instructions+=2;goto B7547b4;
case 0x7547b7:c.instructions+=1;goto B7547b7;
case 0x7547b9:goto L7547b9;
case 0x7547bc:c.instructions+=1;goto B7547bc;
case 0x7547bf:goto L7547bf;
case 0x7547c2:c.instructions+=8;goto B7547c2;
case 0x7547c5:c.instructions+=7;goto B7547c5;
case 0x7547c7:c.instructions+=6;goto B7547c7;
case 0x7547c8:c.instructions+=5;goto B7547c8;
case 0x7547cf:c.instructions+=4;goto B7547cf;
case 0x7547d2:c.instructions+=3;goto B7547d2;
case 0x7547d3:c.instructions+=2;goto B7547d3;
case 0x7547d4:c.instructions+=1;goto B7547d4;
case 0x7547d9:goto L7547d9;
case 0x7547dc:c.instructions+=3;goto B7547dc;
case 0x7547de:c.instructions+=2;goto B7547de;
case 0x7547e2:c.instructions+=1;goto B7547e2;
case 0x7547e4:goto L7547e4;
case 0x7547e7:c.instructions+=2;goto B7547e7;
case 0x7547e8:c.instructions+=1;goto B7547e8;
case 0x7547ed:goto L7547ed;
case 0x7547f0:c.instructions+=7;goto B7547f0;
case 0x7547f3:c.instructions+=6;goto B7547f3;
case 0x7547f4:c.instructions+=5;goto B7547f4;
case 0x7547f5:c.instructions+=4;goto B7547f5;
case 0x7547f6:c.instructions+=3;goto B7547f6;
case 0x7547f7:c.instructions+=2;goto B7547f7;
case 0x7547fb:c.instructions+=1;goto B7547fb;
case 0x754800:goto L754800;
case 0x754803:c.instructions+=1;goto B754803;
case 0x754804:goto L754804;
case 0x754806:goto L754806;
case 0x754809:goto L754809;
case 0x75480c:c.instructions+=2;goto B75480c;
case 0x75480f:c.instructions+=1;goto B75480f;
case 0x754815:goto L754815;
case 0x754817:c.instructions+=5;goto B754817;
case 0x75481d:c.instructions+=4;goto B75481d;
case 0x754823:c.instructions+=3;goto B754823;
case 0x754824:c.instructions+=2;goto B754824;
case 0x754825:c.instructions+=1;goto B754825;
case 0x75482a:goto L75482a;
case 0x75482e:c.instructions+=12;goto B75482e;
case 0x754832:c.instructions+=11;goto B754832;
case 0x754834:c.instructions+=10;goto B754834;
case 0x754837:c.instructions+=9;goto B754837;
case 0x75483a:c.instructions+=8;goto B75483a;
case 0x75483d:c.instructions+=7;goto B75483d;
case 0x754840:c.instructions+=6;goto B754840;
case 0x754842:c.instructions+=5;goto B754842;
case 0x754845:c.instructions+=4;goto B754845;
case 0x754847:c.instructions+=3;goto B754847;
case 0x75484a:c.instructions+=2;goto B75484a;
case 0x75484d:c.instructions+=1;goto B75484d;
case 0x754853:goto L754853;
case 0x754858:c.instructions+=1;goto B754858;
case 0x75485e:goto L75485e;
case 0x75485f:c.instructions+=2;goto B75485f;
case 0x754860:c.instructions+=1;goto B754860;
case 0x754865:goto L754865;
case 0x754868:c.instructions+=3;goto B754868;
case 0x75486a:c.instructions+=2;goto B75486a;
case 0x75486d:c.instructions+=1;goto B75486d;
case 0x75486f:goto L75486f;
case 0x754872:c.instructions+=2;goto B754872;
case 0x754873:c.instructions+=1;goto B754873;
case 0x754878:goto L754878;
case 0x75487b:c.instructions+=7;goto B75487b;
case 0x75487e:c.instructions+=6;goto B75487e;
case 0x75487f:c.instructions+=5;goto B75487f;
case 0x754880:c.instructions+=4;goto B754880;
case 0x754881:c.instructions+=3;goto B754881;
case 0x754882:c.instructions+=2;goto B754882;
case 0x754886:c.instructions+=1;goto B754886;
case 0x75488b:goto L75488b;
case 0x75488e:c.instructions+=1;goto B75488e;
case 0x75488f:goto L75488f;
case 0x754892:c.instructions+=3;goto B754892;
case 0x754894:c.instructions+=2;goto B754894;
case 0x754897:c.instructions+=1;goto B754897;
case 0x754899:goto L754899;
case 0x75489b:goto L75489b;
case 0x75489d:c.instructions+=1;goto B75489d;
case 0x7548a0:goto L7548a0;
case 0x7548a2:goto L7548a2;
case 0x7548a5:c.instructions+=2;goto B7548a5;
case 0x7548a8:c.instructions+=1;goto B7548a8;
case 0x7548aa:goto L7548aa;
case 0x7548ad:c.instructions+=2;goto B7548ad;
case 0x7548af:c.instructions+=1;goto B7548af;
case 0x7548b1:goto L7548b1;
case 0x7548b4:c.instructions+=2;goto B7548b4;
case 0x7548b7:c.instructions+=1;goto B7548b7;
case 0x7548b9:goto L7548b9;
case 0x7548ba:c.instructions+=1;goto B7548ba;
case 0x7548bf:goto L7548bf;
case 0x7548c2:c.instructions+=1;goto B7548c2;
case 0x7548c9:goto L7548c9;
case 0x7548cc:c.instructions+=2;goto B7548cc;
case 0x7548ce:c.instructions+=1;goto B7548ce;
case 0x7548d4:goto L7548d4;
case 0x7548d7:c.instructions+=3;goto B7548d7;
case 0x7548da:c.instructions+=2;goto B7548da;
case 0x7548dc:c.instructions+=1;goto B7548dc;
case 0x7548e2:goto L7548e2;
case 0x7548e4:c.instructions+=6;goto B7548e4;
case 0x7548e5:c.instructions+=5;goto B7548e5;
case 0x7548e8:c.instructions+=4;goto B7548e8;
case 0x7548ea:c.instructions+=3;goto B7548ea;
case 0x7548eb:c.instructions+=2;goto B7548eb;
case 0x7548ec:c.instructions+=1;goto B7548ec;
case 0x7548f1:goto L7548f1;
case 0x7548f4:c.instructions+=3;goto B7548f4;
case 0x7548f6:c.instructions+=2;goto B7548f6;
case 0x7548fa:c.instructions+=1;goto B7548fa;
case 0x7548fc:goto L7548fc;
case 0x7548ff:c.instructions+=2;goto B7548ff;
case 0x754900:c.instructions+=1;goto B754900;
case 0x754905:goto L754905;
case 0x754908:c.instructions+=7;goto B754908;
case 0x754909:c.instructions+=6;goto B754909;
case 0x75490a:c.instructions+=5;goto B75490a;
case 0x754911:c.instructions+=4;goto B754911;
case 0x754912:c.instructions+=3;goto B754912;
case 0x754913:c.instructions+=2;goto B754913;
case 0x754917:c.instructions+=1;goto B754917;
case 0x75491c:goto L75491c;
case 0x75491f:c.instructions+=1;goto B75491f;
case 0x754920:goto L754920;
case 0x754923:c.instructions+=2;goto B754923;
case 0x754924:c.instructions+=1;goto B754924;
case 0x754929:goto L754929;
case 0x75492c:c.instructions+=7;goto B75492c;
case 0x75492f:c.instructions+=6;goto B75492f;
case 0x754930:c.instructions+=5;goto B754930;
case 0x754931:c.instructions+=4;goto B754931;
case 0x754932:c.instructions+=3;goto B754932;
case 0x754933:c.instructions+=2;goto B754933;
case 0x754937:c.instructions+=1;goto B754937;
case 0x75493c:goto L75493c;
case 0x75493f:c.instructions+=1;goto B75493f;
case 0x754940:goto L754940;
case 0x754942:goto L754942;
case 0x754945:goto L754945;
case 0x754948:c.instructions+=2;goto B754948;
case 0x75494b:c.instructions+=1;goto B75494b;
case 0x75494d:goto L75494d;
case 0x754950:c.instructions+=7;goto B754950;
case 0x754953:c.instructions+=6;goto B754953;
case 0x754954:c.instructions+=5;goto B754954;
case 0x754957:c.instructions+=4;goto B754957;
case 0x754958:c.instructions+=3;goto B754958;
case 0x75495e:c.instructions+=2;goto B75495e;
case 0x75495f:c.instructions+=1;goto B75495f;
case 0x754964:goto L754964;
case 0x754967:c.instructions+=5;goto B754967;
case 0x75496a:c.instructions+=4;goto B75496a;
case 0x75496b:c.instructions+=3;goto B75496b;
case 0x75496c:c.instructions+=2;goto B75496c;
case 0x75496d:c.instructions+=1;goto B75496d;
case 0x754972:goto L754972;
case 0x754975:c.instructions+=2;goto B754975;
case 0x754977:c.instructions+=1;goto B754977;
case 0x754979:goto L754979;
case 0x75497c:c.instructions+=2;goto B75497c;
case 0x75497d:c.instructions+=1;goto B75497d;
case 0x754982:goto L754982;
case 0x754985:c.instructions+=7;goto B754985;
case 0x754986:c.instructions+=6;goto B754986;
case 0x754987:c.instructions+=5;goto B754987;
case 0x75498e:c.instructions+=4;goto B75498e;
case 0x75498f:c.instructions+=3;goto B75498f;
case 0x754990:c.instructions+=2;goto B754990;
case 0x754994:c.instructions+=1;goto B754994;
case 0x754999:goto L754999;
case 0x75499c:c.instructions+=1;goto B75499c;
case 0x75499d:goto L75499d;
case 0x7549a0:c.instructions+=3;goto B7549a0;
case 0x7549a1:c.instructions+=2;goto B7549a1;
case 0x7549a2:c.instructions+=1;goto B7549a2;
case 0x7549a7:goto L7549a7;
case 0x7549aa:c.instructions+=2;goto B7549aa;
case 0x7549ad:c.instructions+=1;goto B7549ad;
case 0x7549b0:goto L7549b0;
case 0x7549b3:c.instructions+=2;goto B7549b3;
case 0x7549b6:c.instructions+=1;goto B7549b6;
case 0x7549b8:goto L7549b8;
case 0x7549bb:c.instructions+=2;goto B7549bb;
case 0x7549bd:c.instructions+=1;goto B7549bd;
case 0x7549bf:goto L7549bf;
case 0x7549c2:c.instructions+=2;goto B7549c2;
case 0x7549c5:c.instructions+=1;goto B7549c5;
case 0x7549c7:goto L7549c7;
case 0x7549c8:c.instructions+=1;goto B7549c8;
case 0x7549cd:goto L7549cd;
case 0x7549d4:c.instructions+=1;goto B7549d4;
case 0x7549d7:goto L7549d7;
case 0x7549db:c.instructions+=5;goto B7549db;
case 0x7549dc:c.instructions+=4;goto B7549dc;
case 0x7549dd:c.instructions+=3;goto B7549dd;
case 0x7549de:c.instructions+=2;goto B7549de;
case 0x7549df:c.instructions+=1;goto B7549df;
case 0x7549e4:goto L7549e4;
case 0x7549e7:c.instructions+=1;goto B7549e7;
case 0x7549f0:goto L7549f0;
case 0x7549f1:c.instructions+=5;goto B7549f1;
case 0x7549f2:c.instructions+=4;goto B7549f2;
case 0x7549f3:c.instructions+=3;goto B7549f3;
case 0x7549f7:c.instructions+=2;goto B7549f7;
case 0x7549f8:c.instructions+=1;goto B7549f8;
case 0x7549fd:goto L7549fd;
case 0x754a01:c.instructions+=3;goto B754a01;
case 0x754a04:c.instructions+=2;goto B754a04;
case 0x754a06:c.instructions+=1;goto B754a06;
case 0x754a08:goto L754a08;
case 0x754a0c:c.instructions+=2;goto B754a0c;
case 0x754a0f:c.instructions+=1;goto B754a0f;
case 0x754a10:goto L754a10;
case 0x754a12:c.instructions+=3;goto B754a12;
case 0x754a13:c.instructions+=2;goto B754a13;
case 0x754a15:c.instructions+=1;goto B754a15;
case 0x754a17:goto L754a17;
case 0x754a19:c.instructions+=1;goto B754a19;
case 0x754a1c:goto L754a1c;
case 0x754a1f:c.instructions+=4;goto B754a1f;
case 0x754a25:c.instructions+=3;goto B754a25;
case 0x754a26:c.instructions+=2;goto B754a26;
case 0x754a27:c.instructions+=1;goto B754a27;
case 0x754a2c:goto L754a2c;
case 0x754a31:c.instructions+=4;goto B754a31;
case 0x754a32:c.instructions+=3;goto B754a32;
case 0x754a34:c.instructions+=2;goto B754a34;
case 0x754a38:c.instructions+=1;goto B754a38;
case 0x754a3d:goto L754a3d;
case 0x754a41:c.instructions+=3;goto B754a41;
case 0x754a44:c.instructions+=2;goto B754a44;
case 0x754a46:c.instructions+=1;goto B754a46;
case 0x754a48:goto L754a48;
case 0x754a49:c.instructions+=4;goto B754a49;
case 0x754a4a:c.instructions+=3;goto B754a4a;
case 0x754a4d:c.instructions+=2;goto B754a4d;
case 0x754a4e:c.instructions+=1;goto B754a4e;
case 0x754a4f:goto L754a4f;
case 0x754a52:c.instructions+=5;goto B754a52;
case 0x754a53:c.instructions+=4;goto B754a53;
case 0x754a56:c.instructions+=3;goto B754a56;
case 0x754a58:c.instructions+=2;goto B754a58;
case 0x754a5a:c.instructions+=1;goto B754a5a;
case 0x754a5c:goto L754a5c;
case 0x754a5e:c.instructions+=4;goto B754a5e;
case 0x754a62:c.instructions+=3;goto B754a62;
case 0x754a64:c.instructions+=2;goto B754a64;
case 0x754a67:c.instructions+=1;goto B754a67;
case 0x754a6a:goto L754a6a;
case 0x754a6c:goto L754a6c;
case 0x754a6e:c.instructions+=1;goto B754a6e;
case 0x754a71:goto L754a71;
case 0x754a73:goto L754a73;
case 0x754a77:goto L754a77;
case 0x754a7a:c.instructions+=37;goto B754a7a;
case 0x754a7c:c.instructions+=36;goto B754a7c;
case 0x754a7f:c.instructions+=35;goto B754a7f;
case 0x754a82:c.instructions+=34;goto B754a82;
case 0x754a86:c.instructions+=33;goto B754a86;
case 0x754a88:c.instructions+=32;goto B754a88;
case 0x754a8b:c.instructions+=31;goto B754a8b;
case 0x754a8e:c.instructions+=30;goto B754a8e;
case 0x754a90:c.instructions+=29;goto B754a90;
case 0x754a93:c.instructions+=28;goto B754a93;
case 0x754a96:c.instructions+=27;goto B754a96;
case 0x754a98:c.instructions+=26;goto B754a98;
case 0x754a9b:c.instructions+=25;goto B754a9b;
case 0x754a9e:c.instructions+=24;goto B754a9e;
case 0x754aa0:c.instructions+=23;goto B754aa0;
case 0x754aa3:c.instructions+=22;goto B754aa3;
case 0x754aa6:c.instructions+=21;goto B754aa6;
case 0x754aa8:c.instructions+=20;goto B754aa8;
case 0x754aab:c.instructions+=19;goto B754aab;
case 0x754aaf:c.instructions+=18;goto B754aaf;
case 0x754ab2:c.instructions+=17;goto B754ab2;
case 0x754ab4:c.instructions+=16;goto B754ab4;
case 0x754ab7:c.instructions+=15;goto B754ab7;
case 0x754aba:c.instructions+=14;goto B754aba;
case 0x754abd:c.instructions+=13;goto B754abd;
case 0x754abe:c.instructions+=12;goto B754abe;
case 0x754ac0:c.instructions+=11;goto B754ac0;
case 0x754ac2:c.instructions+=10;goto B754ac2;
case 0x754ac5:c.instructions+=9;goto B754ac5;
case 0x754ac8:c.instructions+=8;goto B754ac8;
case 0x754ac9:c.instructions+=7;goto B754ac9;
case 0x754acf:c.instructions+=6;goto B754acf;
case 0x754ad0:c.instructions+=5;goto B754ad0;
case 0x754ad3:c.instructions+=4;goto B754ad3;
case 0x754ad6:c.instructions+=3;goto B754ad6;
case 0x754ad9:c.instructions+=2;goto B754ad9;
case 0x754adc:c.instructions+=1;goto B754adc;
case 0x754ae1:goto L754ae1;
case 0x754ae2:c.instructions+=3;goto B754ae2;
case 0x754ae3:c.instructions+=2;goto B754ae3;
case 0x754ae4:c.instructions+=1;goto B754ae4;
case 0x754ae9:goto L754ae9;
case 0x754aed:c.instructions+=4;goto B754aed;
case 0x754af0:c.instructions+=3;goto B754af0;
case 0x754af5:c.instructions+=2;goto B754af5;
case 0x754af6:c.instructions+=1;goto B754af6;
case 0x754af8:goto L754af8;
case 0x754b01:goto L754b01;
case 0x754b02:c.instructions+=1;goto B754b02;
case 0x754b07:goto L754b07;
case 0x754b0a:c.instructions+=5;goto B754b0a;
case 0x754b0b:c.instructions+=4;goto B754b0b;
case 0x754b0c:c.instructions+=3;goto B754b0c;
case 0x754b0e:c.instructions+=2;goto B754b0e;
case 0x754b0f:c.instructions+=1;goto B754b0f;
case 0x754b10:goto L754b10;
case 0x754b11:c.instructions+=10;goto B754b11;
case 0x754b15:c.instructions+=9;goto B754b15;
case 0x754b16:c.instructions+=8;goto B754b16;
case 0x754b1a:c.instructions+=7;goto B754b1a;
case 0x754b1b:c.instructions+=6;goto B754b1b;
case 0x754b1f:c.instructions+=5;goto B754b1f;
case 0x754b22:c.instructions+=4;goto B754b22;
case 0x754b24:c.instructions+=3;goto B754b24;
case 0x754b25:c.instructions+=2;goto B754b25;
case 0x754b29:c.instructions+=1;goto B754b29;
case 0x754b2b:goto L754b2b;
case 0x754b2e:c.instructions+=2;goto B754b2e;
case 0x754b31:c.instructions+=1;goto B754b31;
case 0x754b33:goto L754b33;
case 0x754b35:c.instructions+=1;goto B754b35;
case 0x754b37:goto L754b37;
case 0x754b39:c.instructions+=1;goto B754b39;
case 0x754b3b:goto L754b3b;
case 0x754b3d:c.instructions+=1;goto B754b3d;
case 0x754b43:goto L754b43;
case 0x754b44:c.instructions+=1;goto B754b44;
case 0x754b49:goto L754b49;
case 0x754b4c:c.instructions+=3;goto B754b4c;
case 0x754b4f:c.instructions+=2;goto B754b4f;
case 0x754b51:c.instructions+=1;goto B754b51;
case 0x754b53:goto L754b53;
case 0x754b56:c.instructions+=2;goto B754b56;
case 0x754b59:c.instructions+=1;goto B754b59;
case 0x754b5b:goto L754b5b;
case 0x754b5e:c.instructions+=4;goto B754b5e;
case 0x754b61:c.instructions+=3;goto B754b61;
case 0x754b64:c.instructions+=2;goto B754b64;
case 0x754b67:c.instructions+=1;goto B754b67;
case 0x754b69:goto L754b69;
case 0x754b6e:c.instructions+=1;goto B754b6e;
case 0x754b70:goto L754b70;
case 0x754b74:goto L754b74;
case 0x754b76:c.instructions+=1;goto B754b76;
case 0x754b78:goto L754b78;
case 0x754b7c:c.instructions+=10;goto B754b7c;
case 0x754b7e:c.instructions+=9;goto B754b7e;
case 0x754b80:c.instructions+=8;goto B754b80;
case 0x754b83:c.instructions+=7;goto B754b83;
case 0x754b86:c.instructions+=6;goto B754b86;
case 0x754b88:c.instructions+=5;goto B754b88;
case 0x754b8c:c.instructions+=4;goto B754b8c;
case 0x754b8f:c.instructions+=3;goto B754b8f;
case 0x754b91:c.instructions+=2;goto B754b91;
case 0x754b95:c.instructions+=1;goto B754b95;
case 0x754b97:goto L754b97;
case 0x754b99:c.instructions+=1;goto B754b99;
case 0x754b9b:goto L754b9b;
case 0x754b9f:c.instructions+=9;goto B754b9f;
case 0x754ba1:c.instructions+=8;goto B754ba1;
case 0x754ba4:c.instructions+=7;goto B754ba4;
case 0x754ba7:c.instructions+=6;goto B754ba7;
case 0x754bab:c.instructions+=5;goto B754bab;
case 0x754bae:c.instructions+=4;goto B754bae;
case 0x754bb0:c.instructions+=3;goto B754bb0;
case 0x754bb3:c.instructions+=2;goto B754bb3;
case 0x754bb5:c.instructions+=1;goto B754bb5;
case 0x754bb8:goto L754bb8;
case 0x754bba:c.instructions+=1;goto B754bba;
case 0x754bbc:goto L754bbc;
case 0x754bbd:c.instructions+=5;goto B754bbd;
case 0x754bbf:c.instructions+=4;goto B754bbf;
case 0x754bc0:c.instructions+=3;goto B754bc0;
case 0x754bc1:c.instructions+=2;goto B754bc1;
case 0x754bc2:c.instructions+=1;goto B754bc2;
case 0x754bc3:goto L754bc3;
case 0x754bc6:goto L754bc6;
case 0x754bc7:c.instructions+=4;goto B754bc7;
case 0x754bc8:c.instructions+=3;goto B754bc8;
case 0x754bc9:c.instructions+=2;goto B754bc9;
case 0x754bca:c.instructions+=1;goto B754bca;
case 0x754bd0:goto L754bd0;
case 0x754bd4:c.instructions+=9;goto B754bd4;
case 0x754bd8:c.instructions+=8;goto B754bd8;
case 0x754bd9:c.instructions+=7;goto B754bd9;
case 0x754bda:c.instructions+=6;goto B754bda;
case 0x754bde:c.instructions+=5;goto B754bde;
case 0x754be0:c.instructions+=4;goto B754be0;
case 0x754be1:c.instructions+=3;goto B754be1;
case 0x754be2:c.instructions+=2;goto B754be2;
case 0x754be3:c.instructions+=1;goto B754be3;
case 0x754be8:goto L754be8;
case 0x754bea:c.instructions+=3;goto B754bea;
case 0x754bed:c.instructions+=2;goto B754bed;
case 0x754bef:c.instructions+=1;goto B754bef;
case 0x754bf1:goto L754bf1;
case 0x754bf5:c.instructions+=2;goto B754bf5;
case 0x754bf7:c.instructions+=1;goto B754bf7;
case 0x754bf9:goto L754bf9;
case 0x754bfb:goto L754bfb;
case 0x754bfc:c.instructions+=3;goto B754bfc;
case 0x754c00:c.instructions+=2;goto B754c00;
case 0x754c02:c.instructions+=1;goto B754c02;
case 0x754c04:goto L754c04;
case 0x754c05:c.instructions+=4;goto B754c05;
case 0x754c08:c.instructions+=3;goto B754c08;
case 0x754c0a:c.instructions+=2;goto B754c0a;
case 0x754c0d:c.instructions+=1;goto B754c0d;
case 0x754c10:goto L754c10;
case 0x754c12:goto L754c12;
case 0x754c14:c.instructions+=1;goto B754c14;
case 0x754c17:goto L754c17;
case 0x754c19:goto L754c19;
case 0x754c1a:goto L754c1a;
case 0x754c1d:c.instructions+=2;goto B754c1d;
case 0x754c1e:c.instructions+=1;goto B754c1e;
case 0x754c23:goto L754c23;
case 0x754c26:c.instructions+=2;goto B754c26;
case 0x754c2d:c.instructions+=1;goto B754c2d;
case 0x754c2e:goto L754c2e;
case 0x754c2f:c.instructions+=3;goto B754c2f;
case 0x754c31:c.instructions+=2;goto B754c31;
case 0x754c32:c.instructions+=1;goto B754c32;
case 0x754c40:goto L754c40;
case 0x754c50:goto L754c50;
case 0x754c53:c.instructions+=9;goto B754c53;
case 0x754c58:c.instructions+=8;goto B754c58;
case 0x754c59:c.instructions+=7;goto B754c59;
case 0x754c5a:c.instructions+=6;goto B754c5a;
case 0x754c5e:c.instructions+=5;goto B754c5e;
case 0x754c62:c.instructions+=4;goto B754c62;
case 0x754c64:c.instructions+=3;goto B754c64;
case 0x754c66:c.instructions+=2;goto B754c66;
case 0x754c68:c.instructions+=1;goto B754c68;
case 0x754c6a:goto L754c6a;
case 0x754c6b:c.instructions+=4;goto B754c6b;
case 0x754c6e:c.instructions+=3;goto B754c6e;
case 0x754c6f:c.instructions+=2;goto B754c6f;
case 0x754c73:c.instructions+=1;goto B754c73;
case 0x754c78:goto L754c78;
case 0x754c7b:c.instructions+=1;goto B754c7b;
case 0x754c7c:goto L754c7c;
case 0x754c7f:c.instructions+=2;goto B754c7f;
case 0x754c81:c.instructions+=1;goto B754c81;
case 0x754c83:goto L754c83;
case 0x754c84:c.instructions+=1;goto B754c84;
case 0x754c89:goto L754c89;
case 0x754c8c:c.instructions+=1;goto B754c8c;
case 0x754c8f:goto L754c8f;
case 0x754c92:c.instructions+=10;goto B754c92;
case 0x754c94:c.instructions+=9;goto B754c94;
case 0x754c96:c.instructions+=8;goto B754c96;
case 0x754c98:c.instructions+=7;goto B754c98;
case 0x754c9b:c.instructions+=6;goto B754c9b;
case 0x754c9e:c.instructions+=5;goto B754c9e;
case 0x754ca1:c.instructions+=4;goto B754ca1;
case 0x754ca6:c.instructions+=3;goto B754ca6;
case 0x754caa:c.instructions+=2;goto B754caa;
case 0x754cab:c.instructions+=1;goto B754cab;
case 0x754cb0:goto L754cb0;
case 0x754cb4:c.instructions+=3;goto B754cb4;
case 0x754cb5:c.instructions+=2;goto B754cb5;
case 0x754cb8:c.instructions+=1;goto B754cb8;
case 0x754cbd:goto L754cbd;
case 0x754cc1:c.instructions+=4;goto B754cc1;
case 0x754cc5:c.instructions+=3;goto B754cc5;
case 0x754cc8:c.instructions+=2;goto B754cc8;
case 0x754cca:c.instructions+=1;goto B754cca;
case 0x754ccc:goto L754ccc;
case 0x754cce:c.instructions+=4;goto B754cce;
case 0x754ccf:c.instructions+=3;goto B754ccf;
case 0x754cd2:c.instructions+=2;goto B754cd2;
case 0x754cd3:c.instructions+=1;goto B754cd3;
case 0x754cd8:goto L754cd8;
case 0x754cdb:c.instructions+=1;goto B754cdb;
case 0x754cde:goto L754cde;
case 0x754ce5:c.instructions+=4;goto B754ce5;
case 0x754cec:c.instructions+=3;goto B754cec;
case 0x754cef:c.instructions+=2;goto B754cef;
case 0x754cf6:c.instructions+=1;goto B754cf6;
case 0x754cf8:goto L754cf8;
case 0x754cfc:c.instructions+=6;goto B754cfc;
case 0x754cfd:c.instructions+=5;goto B754cfd;
case 0x754d01:c.instructions+=4;goto B754d01;
case 0x754d02:c.instructions+=3;goto B754d02;
case 0x754d08:c.instructions+=2;goto B754d08;
case 0x754d09:c.instructions+=1;goto B754d09;
case 0x754d0e:goto L754d0e;
case 0x754d11:c.instructions+=2;goto B754d11;
case 0x754d13:c.instructions+=1;goto B754d13;
case 0x754d15:goto L754d15;
case 0x754d17:c.instructions+=6;goto B754d17;
case 0x754d1b:c.instructions+=5;goto B754d1b;
case 0x754d1c:c.instructions+=4;goto B754d1c;
case 0x754d1d:c.instructions+=3;goto B754d1d;
case 0x754d22:c.instructions+=2;goto B754d22;
case 0x754d23:c.instructions+=1;goto B754d23;
case 0x754d28:goto L754d28;
case 0x754d2c:c.instructions+=4;goto B754d2c;
case 0x754d2d:c.instructions+=3;goto B754d2d;
case 0x754d33:c.instructions+=2;goto B754d33;
case 0x754d34:c.instructions+=1;goto B754d34;
case 0x754d39:goto L754d39;
case 0x754d3c:c.instructions+=5;goto B754d3c;
case 0x754d3d:c.instructions+=4;goto B754d3d;
case 0x754d3f:c.instructions+=3;goto B754d3f;
case 0x754d40:c.instructions+=2;goto B754d40;
case 0x754d44:c.instructions+=1;goto B754d44;
case 0x754d49:goto L754d49;
case 0x754d4c:c.instructions+=1;goto B754d4c;
case 0x754d4d:goto L754d4d;
case 0x754d54:goto L754d54;
case 0x754d58:c.instructions+=4;goto B754d58;
case 0x754d59:c.instructions+=3;goto B754d59;
case 0x754d5b:c.instructions+=2;goto B754d5b;
case 0x754d5c:c.instructions+=1;goto B754d5c;
case 0x754d61:goto L754d61;
case 0x754d64:c.instructions+=1;goto B754d64;
case 0x754d70:goto L754d70;
case 0x754d71:c.instructions+=4;goto B754d71;
case 0x754d75:c.instructions+=3;goto B754d75;
case 0x754d78:c.instructions+=2;goto B754d78;
case 0x754d7a:c.instructions+=1;goto B754d7a;
case 0x754d7c:goto L754d7c;
case 0x754d80:goto L754d80;
case 0x754d83:c.instructions+=4;goto B754d83;
case 0x754d85:c.instructions+=3;goto B754d85;
case 0x754d86:c.instructions+=2;goto B754d86;
case 0x754d89:c.instructions+=1;goto B754d89;
case 0x754d8e:goto L754d8e;
case 0x754d91:c.instructions+=3;goto B754d91;
case 0x754d94:c.instructions+=2;goto B754d94;
case 0x754d96:c.instructions+=1;goto B754d96;
case 0x754d98:goto L754d98;
case 0x754d9b:c.instructions+=2;goto B754d9b;
case 0x754d9c:c.instructions+=1;goto B754d9c;
case 0x754da1:goto L754da1;
case 0x754da2:c.instructions+=1;goto B754da2;
case 0x754da7:goto L754da7;
case 0x754daa:c.instructions+=2;goto B754daa;
case 0x754dab:c.instructions+=1;goto B754dab;
case 0x754db0:goto L754db0;
case 0x754db1:c.instructions+=4;goto B754db1;
case 0x754db2:c.instructions+=3;goto B754db2;
case 0x754db6:c.instructions+=2;goto B754db6;
case 0x754db9:c.instructions+=1;goto B754db9;
case 0x754dbb:goto L754dbb;
case 0x754dc0:goto L754dc0;
case 0x754dc1:c.instructions+=4;goto B754dc1;
case 0x754dc4:c.instructions+=3;goto B754dc4;
case 0x754dc7:c.instructions+=2;goto B754dc7;
case 0x754dc8:c.instructions+=1;goto B754dc8;
case 0x754dcd:goto L754dcd;
case 0x754dd0:c.instructions+=2;goto B754dd0;
case 0x754dd2:c.instructions+=1;goto B754dd2;
case 0x754dd4:goto L754dd4;
case 0x754dd5:c.instructions+=3;goto B754dd5;
case 0x754dd8:c.instructions+=2;goto B754dd8;
case 0x754dd9:c.instructions+=1;goto B754dd9;
case 0x754dda:goto L754dda;
case 0x754dde:c.instructions+=7;goto B754dde;
case 0x754de1:c.instructions+=6;goto B754de1;
case 0x754de3:c.instructions+=5;goto B754de3;
case 0x754de6:c.instructions+=4;goto B754de6;
case 0x754de9:c.instructions+=3;goto B754de9;
case 0x754deb:c.instructions+=2;goto B754deb;
case 0x754ded:c.instructions+=1;goto B754ded;
case 0x754def:goto L754def;
case 0x754df0:goto L754df0;
case 0x754df3:c.instructions+=5;goto B754df3;
case 0x754df5:c.instructions+=4;goto B754df5;
case 0x754df8:c.instructions+=3;goto B754df8;
case 0x754dfb:c.instructions+=2;goto B754dfb;
case 0x754dfd:c.instructions+=1;goto B754dfd;
case 0x754dff:goto L754dff;
case 0x754e02:c.instructions+=3;goto B754e02;
case 0x754e03:c.instructions+=2;goto B754e03;
case 0x754e04:c.instructions+=1;goto B754e04;
case 0x754e10:goto L754e10;
case 0x754e14:c.instructions+=2;goto B754e14;
case 0x754e17:c.instructions+=1;goto B754e17;
case 0x754e19:goto L754e19;
case 0x754e1b:c.instructions+=1;goto B754e1b;
case 0x754e1c:goto L754e1c;
case 0x754e1f:c.instructions+=5;goto B754e1f;
case 0x754e20:c.instructions+=4;goto B754e20;
case 0x754e21:c.instructions+=3;goto B754e21;
case 0x754e24:c.instructions+=2;goto B754e24;
case 0x754e28:c.instructions+=1;goto B754e28;
case 0x754e2a:goto L754e2a;
case 0x754e2d:c.instructions+=1;goto B754e2d;
case 0x754e30:goto L754e30;
case 0x754e33:c.instructions+=7;goto B754e33;
case 0x754e34:c.instructions+=6;goto B754e34;
case 0x754e35:c.instructions+=5;goto B754e35;
case 0x754e37:c.instructions+=4;goto B754e37;
case 0x754e3a:c.instructions+=3;goto B754e3a;
case 0x754e3d:c.instructions+=2;goto B754e3d;
case 0x754e41:c.instructions+=1;goto B754e41;
case 0x754e43:goto L754e43;
case 0x754e46:c.instructions+=14;goto B754e46;
case 0x754e49:c.instructions+=13;goto B754e49;
case 0x754e4b:c.instructions+=12;goto B754e4b;
case 0x754e4e:c.instructions+=11;goto B754e4e;
case 0x754e50:c.instructions+=10;goto B754e50;
case 0x754e53:c.instructions+=9;goto B754e53;
case 0x754e55:c.instructions+=8;goto B754e55;
case 0x754e57:c.instructions+=7;goto B754e57;
case 0x754e58:c.instructions+=6;goto B754e58;
case 0x754e59:c.instructions+=5;goto B754e59;
case 0x754e5c:c.instructions+=4;goto B754e5c;
case 0x754e5e:c.instructions+=3;goto B754e5e;
case 0x754e61:c.instructions+=2;goto B754e61;
case 0x754e62:c.instructions+=1;goto B754e62;
case 0x754e70:goto L754e70;
case 0x754e72:c.instructions+=4;goto B754e72;
case 0x754e74:c.instructions+=3;goto B754e74;
case 0x754e76:c.instructions+=2;goto B754e76;
case 0x754e78:c.instructions+=1;goto B754e78;
case 0x754e7a:goto L754e7a;
case 0x754e80:goto L754e80;
case 0x754e83:c.instructions+=1;goto B754e83;
case 0x754e85:goto L754e85;
case 0x754e8b:c.instructions+=3;goto B754e8b;
case 0x754e8e:c.instructions+=2;goto B754e8e;
case 0x754e90:c.instructions+=1;goto B754e90;
case 0x754e92:goto L754e92;
case 0x754e95:c.instructions+=3;goto B754e95;
case 0x754e96:c.instructions+=2;goto B754e96;
case 0x754e98:c.instructions+=1;goto B754e98;
case 0x754e9a:goto L754e9a;
case 0x754e9e:c.instructions+=5;goto B754e9e;
case 0x754ea3:c.instructions+=4;goto B754ea3;
case 0x754ea4:c.instructions+=3;goto B754ea4;
case 0x754ea7:c.instructions+=2;goto B754ea7;
case 0x754ea9:c.instructions+=1;goto B754ea9;
case 0x754eb0:goto L754eb0;
case 0x754eb4:c.instructions+=4;goto B754eb4;
case 0x754eb5:c.instructions+=3;goto B754eb5;
case 0x754eb9:c.instructions+=2;goto B754eb9;
case 0x754eba:c.instructions+=1;goto B754eba;
case 0x754ec0:goto L754ec0;
case 0x754ec3:c.instructions+=4;goto B754ec3;
case 0x754ec9:c.instructions+=3;goto B754ec9;
case 0x754eca:c.instructions+=2;goto B754eca;
case 0x754ecd:c.instructions+=1;goto B754ecd;
case 0x754ecf:goto L754ecf;
case 0x754ed0:goto L754ed0;
case 0x754ed3:c.instructions+=4;goto B754ed3;
case 0x754ed9:c.instructions+=3;goto B754ed9;
case 0x754eda:c.instructions+=2;goto B754eda;
case 0x754edc:c.instructions+=1;goto B754edc;
case 0x754ede:goto L754ede;
case 0x754ee1:c.instructions+=3;goto B754ee1;
case 0x754ee4:c.instructions+=2;goto B754ee4;
case 0x754ee6:c.instructions+=1;goto B754ee6;
case 0x754ee8:goto L754ee8;
case 0x754eea:c.instructions+=1;goto B754eea;
case 0x754eec:goto L754eec;
case 0x754eee:goto L754eee;
case 0x754eef:c.instructions+=2;goto B754eef;
case 0x754ef0:c.instructions+=1;goto B754ef0;
case 0x754f00:goto L754f00;
case 0x754f01:c.instructions+=7;goto B754f01;
case 0x754f05:c.instructions+=6;goto B754f05;
case 0x754f06:c.instructions+=5;goto B754f06;
case 0x754f0a:c.instructions+=4;goto B754f0a;
case 0x754f0b:c.instructions+=3;goto B754f0b;
case 0x754f0c:c.instructions+=2;goto B754f0c;
case 0x754f0e:c.instructions+=1;goto B754f0e;
case 0x754f13:goto L754f13;
case 0x754f15:c.instructions+=4;goto B754f15;
case 0x754f18:c.instructions+=3;goto B754f18;
case 0x754f1b:c.instructions+=2;goto B754f1b;
case 0x754f1d:c.instructions+=1;goto B754f1d;
case 0x754f1f:goto L754f1f;
case 0x754f21:c.instructions+=7;goto B754f21;
case 0x754f25:c.instructions+=6;goto B754f25;
case 0x754f26:c.instructions+=5;goto B754f26;
case 0x754f28:c.instructions+=4;goto B754f28;
case 0x754f2a:c.instructions+=3;goto B754f2a;
case 0x754f2b:c.instructions+=2;goto B754f2b;
case 0x754f2c:c.instructions+=1;goto B754f2c;
case 0x754f31:goto L754f31;
case 0x754f34:c.instructions+=2;goto B754f34;
case 0x754f36:c.instructions+=1;goto B754f36;
case 0x754f38:goto L754f38;
case 0x754f39:c.instructions+=4;goto B754f39;
case 0x754f3a:c.instructions+=3;goto B754f3a;
case 0x754f3d:c.instructions+=2;goto B754f3d;
case 0x754f3e:c.instructions+=1;goto B754f3e;
case 0x754f3f:goto L754f3f;
case 0x754f42:c.instructions+=18;goto B754f42;
case 0x754f44:c.instructions+=17;goto B754f44;
case 0x754f48:c.instructions+=16;goto B754f48;
case 0x754f4b:c.instructions+=15;goto B754f4b;
case 0x754f4e:c.instructions+=14;goto B754f4e;
case 0x754f51:c.instructions+=13;goto B754f51;
case 0x754f54:c.instructions+=12;goto B754f54;
case 0x754f57:c.instructions+=11;goto B754f57;
case 0x754f59:c.instructions+=10;goto B754f59;
case 0x754f5c:c.instructions+=9;goto B754f5c;
case 0x754f5f:c.instructions+=8;goto B754f5f;
case 0x754f61:c.instructions+=7;goto B754f61;
case 0x754f62:c.instructions+=6;goto B754f62;
case 0x754f63:c.instructions+=5;goto B754f63;
case 0x754f65:c.instructions+=4;goto B754f65;
case 0x754f66:c.instructions+=3;goto B754f66;
case 0x754f6b:c.instructions+=2;goto B754f6b;
case 0x754f6c:c.instructions+=1;goto B754f6c;
case 0x754f70:goto L754f70;
case 0x754f71:c.instructions+=7;goto B754f71;
case 0x754f75:c.instructions+=6;goto B754f75;
case 0x754f76:c.instructions+=5;goto B754f76;
case 0x754f77:c.instructions+=4;goto B754f77;
case 0x754f7b:c.instructions+=3;goto B754f7b;
case 0x754f7c:c.instructions+=2;goto B754f7c;
case 0x754f7e:c.instructions+=1;goto B754f7e;
case 0x754f83:goto L754f83;
case 0x754f86:c.instructions+=4;goto B754f86;
case 0x754f89:c.instructions+=3;goto B754f89;
case 0x754f8c:c.instructions+=2;goto B754f8c;
case 0x754f8e:c.instructions+=1;goto B754f8e;
case 0x754f90:goto L754f90;
case 0x754f93:c.instructions+=3;goto B754f93;
case 0x754f94:c.instructions+=2;goto B754f94;
case 0x754f95:c.instructions+=1;goto B754f95;
case 0x754f98:goto L754f98;
case 0x754f9b:c.instructions+=2;goto B754f9b;
case 0x754f9d:c.instructions+=1;goto B754f9d;
case 0x754f9f:goto L754f9f;
case 0x754fa1:c.instructions+=2;goto B754fa1;
case 0x754fa3:c.instructions+=1;goto B754fa3;
case 0x754fa5:goto L754fa5;
case 0x754fa6:c.instructions+=4;goto B754fa6;
case 0x754fa7:c.instructions+=3;goto B754fa7;
case 0x754fa9:c.instructions+=2;goto B754fa9;
case 0x754faa:c.instructions+=1;goto B754faa;
case 0x754fab:goto L754fab;
case 0x754fae:c.instructions+=4;goto B754fae;
case 0x754faf:c.instructions+=3;goto B754faf;
case 0x754fb0:c.instructions+=2;goto B754fb0;
case 0x754fb1:c.instructions+=1;goto B754fb1;
case 0x754fc0:goto L754fc0;
case 0x754fc1:c.instructions+=8;goto B754fc1;
case 0x754fc5:c.instructions+=7;goto B754fc5;
case 0x754fc6:c.instructions+=6;goto B754fc6;
case 0x754fca:c.instructions+=5;goto B754fca;
case 0x754fcb:c.instructions+=4;goto B754fcb;
case 0x754fcc:c.instructions+=3;goto B754fcc;
case 0x754fcd:c.instructions+=2;goto B754fcd;
case 0x754fcf:c.instructions+=1;goto B754fcf;
case 0x754fd4:goto L754fd4;
case 0x754fd7:c.instructions+=5;goto B754fd7;
case 0x754fda:c.instructions+=4;goto B754fda;
case 0x754fdd:c.instructions+=3;goto B754fdd;
case 0x754fe0:c.instructions+=2;goto B754fe0;
case 0x754fe2:c.instructions+=1;goto B754fe2;
case 0x754fe4:goto L754fe4;
case 0x754fe6:c.instructions+=4;goto B754fe6;
case 0x754fe9:c.instructions+=3;goto B754fe9;
case 0x754fea:c.instructions+=2;goto B754fea;
case 0x754feb:c.instructions+=1;goto B754feb;
case 0x754fee:goto L754fee;
case 0x754ff1:c.instructions+=2;goto B754ff1;
case 0x754ff3:c.instructions+=1;goto B754ff3;
case 0x754ff5:goto L754ff5;
case 0x754ff7:c.instructions+=3;goto B754ff7;
case 0x754ff9:c.instructions+=2;goto B754ff9;
case 0x754ffb:c.instructions+=1;goto B754ffb;
case 0x754ffd:goto L754ffd;
case 0x754ffe:c.instructions+=2;goto B754ffe;
case 0x754fff:c.instructions+=1;goto B754fff;
default:missing_instruction(c.pc);}
B754000:L754000:{c.instructions+=3;NFSU2_TR(0x754000);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754001:{NFSU2_TR(0x754001);
u8 U[4];
w4(U+0,u32(0x220ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754006:{NFSU2_TR(0x754006);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75400bull));
TAIL_STATIC(0x5832f0u,583);
}
B75400b:L75400b:{c.instructions+=5;NFSU2_TR(0x75400b);
__builtin_memmove((R+24),(R+0),4);
}
B75400d:{NFSU2_TR(0x75400d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754010:{NFSU2_TR(0x754010);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B754012:{NFSU2_TR(0x754012);
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
B754014:{NFSU2_TR(0x754014);
if(r1(R+518)){{goto L754120;}}
}
B75401a:L75401a:{c.instructions+=3;NFSU2_TR(0x75401a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75401b:{NFSU2_TR(0x75401b);
w4(R+4,u32(0x88ull));
}
B754020:{NFSU2_TR(0x754020);
__builtin_memmove((R+28),(R+24),4);
}
B754022:L754022:{c.instructions+=1;NFSU2_TR(0x754022);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L754024;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754022u);}goto L754022;}
}
B754024:L754024:{c.instructions+=22;NFSU2_TR(0x754024);
u8 U[4];
w4(U+0,u32(0x754000ull));
s4(u32(r4(R+24)),r4(U+0));
}
B75402a:{NFSU2_TR(0x75402a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x753800ull));
s4(u32(r4(U+0)),r4(U+4));
}
B754031:{NFSU2_TR(0x754031);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x752200ull));
s4(u32(r4(U+0)),r4(U+4));
}
B754038:{NFSU2_TR(0x754038);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x757900ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75403f:{NFSU2_TR(0x75403f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x753d50ull));
s4(u32(r4(U+0)),r4(U+4));
}
B754046:{NFSU2_TR(0x754046);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x753a60ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75404d:{NFSU2_TR(0x75404d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x753e80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B754054:{NFSU2_TR(0x754054);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x753a60ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75405b:{NFSU2_TR(0x75405b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x753880ull));
s4(u32(r4(U+0)),r4(U+4));
}
B754062:{NFSU2_TR(0x754062);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x753ab0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B754069:{NFSU2_TR(0x754069);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x754c40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B754070:{NFSU2_TR(0x754070);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x753af0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B754077:{NFSU2_TR(0x754077);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w4(U+4,u32(0x753c80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75407e:{NFSU2_TR(0x75407e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w4(U+4,u32(0x753d00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B754085:{NFSU2_TR(0x754085);
__builtin_memmove((R+4),gp(0x7d2fd8),4);
}
B75408b:{NFSU2_TR(0x75408b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75408e:{NFSU2_TR(0x75408e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B754090:{NFSU2_TR(0x754090);
__builtin_memmove((R+8),gp(0x7d2fdc),1);
}
B754096:{NFSU2_TR(0x754096);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B754099:{NFSU2_TR(0x754099);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75409f:{NFSU2_TR(0x75409f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7540a0:{NFSU2_TR(0x7540a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7540a5ull));
TAIL_STATIC(0x74b740u,74b);
}
B7540a5:L7540a5:{c.instructions+=9;NFSU2_TR(0x7540a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7540a9:{NFSU2_TR(0x7540a9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x13ull))));
}
B7540ac:{NFSU2_TR(0x7540ac);
u8 U[6];
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x7ffcull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7540b2:{NFSU2_TR(0x7540b2);
__builtin_memmove((R+0),(R+28),4);
}
B7540b4:{NFSU2_TR(0x7540b4);
u8 U[40];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B7540b9:{NFSU2_TR(0x7540b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7540ba:{NFSU2_TR(0x7540ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7540c0:{NFSU2_TR(0x7540c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7540c6:{NFSU2_TR(0x7540c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7540cbull));
TAIL_STATIC(0x5832f0u,583);
}
B7540cb:L7540cb:{c.instructions+=6;NFSU2_TR(0x7540cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7540d1:{NFSU2_TR(0x7540d1);
u8 U[40];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w8(U+16,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+28,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+28)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B7540d6:{NFSU2_TR(0x7540d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7540d7:{NFSU2_TR(0x7540d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7540dd:{NFSU2_TR(0x7540dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7540e3:{NFSU2_TR(0x7540e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7540e8ull));
TAIL_STATIC(0x5832f0u,583);
}
B7540e8:L7540e8:{c.instructions+=12;NFSU2_TR(0x7540e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7540ee:{NFSU2_TR(0x7540ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7540f5:{NFSU2_TR(0x7540f5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7540f7:{NFSU2_TR(0x7540f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+8),(U+0),4);
}
B7540fa:{NFSU2_TR(0x7540fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B7540fc:{NFSU2_TR(0x7540fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7540ff:{NFSU2_TR(0x7540ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754102:{NFSU2_TR(0x754102);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754105:{NFSU2_TR(0x754105);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B754108:{NFSU2_TR(0x754108);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B754112:{NFSU2_TR(0x754112);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754118:{NFSU2_TR(0x754118);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75411dull));
TAIL_STATIC(0x753760u,753);
}
B75411d:L75411d:{c.instructions+=2;NFSU2_TR(0x75411d);
__builtin_memmove((R+0),(R+24),4);
}
B75411f:{NFSU2_TR(0x75411f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B754120:L754120:{c.instructions+=2;NFSU2_TR(0x754120);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754121:{NFSU2_TR(0x754121);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754130:L754130:{c.instructions+=5;NFSU2_TR(0x754130);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754131:{NFSU2_TR(0x754131);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B754134:{NFSU2_TR(0x754134);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B754136:{NFSU2_TR(0x754136);
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
B754138:{NFSU2_TR(0x754138);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75415d;}}
}
B75413a:L75413a:{c.instructions+=6;NFSU2_TR(0x75413a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75413d:{NFSU2_TR(0x75413d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754140:{NFSU2_TR(0x754140);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754144:{NFSU2_TR(0x754144);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754145:{NFSU2_TR(0x754145);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754148:{NFSU2_TR(0x754148);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75414dull));
TAIL_STATIC(0x5832f0u,583);
}
B75414d:L75414d:{c.instructions+=7;NFSU2_TR(0x75414d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754150:{NFSU2_TR(0x754150);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754153:{NFSU2_TR(0x754153);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754156:{NFSU2_TR(0x754156);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754159:{NFSU2_TR(0x754159);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75415b:{NFSU2_TR(0x75415b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75415c:{NFSU2_TR(0x75415c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75415d:L75415d:{c.instructions+=6;NFSU2_TR(0x75415d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75415e:{NFSU2_TR(0x75415e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B754161:{NFSU2_TR(0x754161);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B754163:{NFSU2_TR(0x754163);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B754165:{NFSU2_TR(0x754165);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754166:{NFSU2_TR(0x754166);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L754196;}}
}
B754168:L754168:{c.instructions+=2;NFSU2_TR(0x754168);
__builtin_memmove((R+24),(R+20),4);
}
B75416a:{NFSU2_TR(0x75416a);
__builtin_memmove((R+12),(R+12),4);
}
B754170:L754170:{c.instructions+=12;NFSU2_TR(0x754170);
u8 U[13];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B754175:{NFSU2_TR(0x754175);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B754177:{NFSU2_TR(0x754177);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+5),(U+12),1);
}
B75417b:{NFSU2_TR(0x75417b);
u8 U[13];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B75417f:{NFSU2_TR(0x75417f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B754182:{NFSU2_TR(0x754182);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B754184:{NFSU2_TR(0x754184);
u8 U[13];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B754189:{NFSU2_TR(0x754189);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B75418c:{NFSU2_TR(0x75418c);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B75418e:{NFSU2_TR(0x75418e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B754190:{NFSU2_TR(0x754190);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B754192:{NFSU2_TR(0x754192);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754170u);}goto L754170;}}
}
B754194:L754194:{c.instructions+=1;NFSU2_TR(0x754194);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B754196:L754196:{c.instructions+=1;NFSU2_TR(0x754196);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75419a;}}
}
B754198:L754198:{c.instructions+=1;NFSU2_TR(0x754198);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B75419a:L75419a:{c.instructions+=2;NFSU2_TR(0x75419a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75419c:{NFSU2_TR(0x75419c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7541c4;}}
}
B75419e:L75419e:{c.instructions+=5;NFSU2_TR(0x75419e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7541a1:{NFSU2_TR(0x7541a1);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B7541a3:{NFSU2_TR(0x7541a3);
__builtin_memmove((R+8),(R+4),4);
}
B7541a5:{NFSU2_TR(0x7541a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7541a8:{NFSU2_TR(0x7541a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7541ab:L7541ab:{c.instructions+=1;NFSU2_TR(0x7541ab);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7541ad;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7541abu);}goto L7541ab;}
}
B7541ad:L7541ad:{c.instructions+=2;NFSU2_TR(0x7541ad);
__builtin_memmove((R+4),(R+8),4);
}
B7541af:{NFSU2_TR(0x7541af);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7541b2:L7541b2:{c.instructions+=1;NFSU2_TR(0x7541b2);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7541b4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7541b2u);}goto L7541b2;}
}
B7541b4:L7541b4:{c.instructions+=6;NFSU2_TR(0x7541b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7541b7:{NFSU2_TR(0x7541b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7541ba:{NFSU2_TR(0x7541ba);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B7541bc:{NFSU2_TR(0x7541bc);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B7541be:{NFSU2_TR(0x7541be);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7541c1:{NFSU2_TR(0x7541c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7541c4:L7541c4:{c.instructions+=6;NFSU2_TR(0x7541c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7541c7:{NFSU2_TR(0x7541c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7541ca:{NFSU2_TR(0x7541ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7541ce:{NFSU2_TR(0x7541ce);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B7541d0:{NFSU2_TR(0x7541d0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7541d2:{NFSU2_TR(0x7541d2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L754227;}}
}
B7541d4:L7541d4:{c.instructions+=5;NFSU2_TR(0x7541d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7541d8:{NFSU2_TR(0x7541d8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B7541da:{NFSU2_TR(0x7541da);
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
B7541dc:{NFSU2_TR(0x7541dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7541dd:{NFSU2_TR(0x7541dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7541e2ull));
TAIL_STATIC(0x5832f0u,583);
}
B7541e2:L7541e2:{c.instructions+=4;NFSU2_TR(0x7541e2);
__builtin_memmove((R+20),(R+0),4);
}
B7541e4:{NFSU2_TR(0x7541e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7541e7:{NFSU2_TR(0x7541e7);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7541e9:{NFSU2_TR(0x7541e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7541ef;}}
}
B7541eb:L7541eb:{c.instructions+=4;NFSU2_TR(0x7541eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7541ec:{NFSU2_TR(0x7541ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7541ed:{NFSU2_TR(0x7541ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7541ee:{NFSU2_TR(0x7541ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7541ef:L7541ef:{c.instructions+=5;NFSU2_TR(0x7541ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7541f2:{NFSU2_TR(0x7541f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7541f5:{NFSU2_TR(0x7541f5);
__builtin_memmove((R+0),(R+4),4);
}
B7541f7:{NFSU2_TR(0x7541f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7541fa:{NFSU2_TR(0x7541fa);
__builtin_memmove((R+28),(R+20),4);
}
B7541fc:L7541fc:{c.instructions+=1;NFSU2_TR(0x7541fc);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7541fe;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7541fcu);}goto L7541fc;}
}
B7541fe:L7541fe:{c.instructions+=2;NFSU2_TR(0x7541fe);
__builtin_memmove((R+4),(R+0),4);
}
B754200:{NFSU2_TR(0x754200);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B754203:L754203:{c.instructions+=1;NFSU2_TR(0x754203);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L754205;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754203u);}goto L754203;}
}
B754205:L754205:{c.instructions+=3;NFSU2_TR(0x754205);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754208:{NFSU2_TR(0x754208);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754209:{NFSU2_TR(0x754209);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75420eull));
TAIL_STATIC(0x598ec0u,598);
}
B75420e:L75420e:{c.instructions+=8;NFSU2_TR(0x75420e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B754212:{NFSU2_TR(0x754212);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754215:{NFSU2_TR(0x754215);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B754218:{NFSU2_TR(0x754218);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75421c:{NFSU2_TR(0x75421c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75421f:{NFSU2_TR(0x75421f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B754221:{NFSU2_TR(0x754221);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754224:{NFSU2_TR(0x754224);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754227:L754227:{c.instructions+=6;NFSU2_TR(0x754227);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75422a:{NFSU2_TR(0x75422a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75422b:{NFSU2_TR(0x75422b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75422c:{NFSU2_TR(0x75422c);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75422e:{NFSU2_TR(0x75422e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75422f:{NFSU2_TR(0x75422f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754230:L754230:{c.instructions+=7;NFSU2_TR(0x754230);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x194ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x194ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x194ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B754236:{NFSU2_TR(0x754236);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B75423b:{NFSU2_TR(0x75423b);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754242:{NFSU2_TR(0x754242);
__builtin_memmove((R+0),(R+16),4);
}
B754245:{NFSU2_TR(0x754245);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754246:{NFSU2_TR(0x754246);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754248:{NFSU2_TR(0x754248);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75424dull));
TAIL_STATIC(0x75bc00u,75b);
}
B75424d:L75424d:{c.instructions+=2;NFSU2_TR(0x75424d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75424f:{NFSU2_TR(0x75424f);
if(r1(R+518)){{goto L754266;}}
}
B754251:L754251:{c.instructions+=3;NFSU2_TR(0x754251);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B754253:{NFSU2_TR(0x754253);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75425a:{NFSU2_TR(0x75425a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75425full));
TAIL_STATIC(0x76115eu,761);
}
B75425f:L75425f:{c.instructions+=2;NFSU2_TR(0x75425f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x194ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x194ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x194ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B754265:{NFSU2_TR(0x754265);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754266:L754266:{c.instructions+=3;NFSU2_TR(0x754266);
__builtin_memmove((R+0),gp(0x8b82b0),4);
}
B75426b:{NFSU2_TR(0x75426b);
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
B75426d:{NFSU2_TR(0x75426d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L754279;}}
}
B75426f:L75426f:{c.instructions+=1;NFSU2_TR(0x75426f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754274ull));
TAIL_STATIC(0x74b730u,74b);
}
B754274:L754274:{c.instructions+=1;NFSU2_TR(0x754274);
__builtin_memmove(gp(0x8b82b0),(R+0),4);
}
B754279:L754279:{c.instructions+=2;NFSU2_TR(0x754279);
u8 U[4];
w4(U+0,u32(0x2f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75427e:{NFSU2_TR(0x75427e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754283ull));
TAIL_STATIC(0x5832f0u,583);
}
B754283:L754283:{c.instructions+=4;NFSU2_TR(0x754283);
__builtin_memmove((R+8),(R+0),4);
}
B754285:{NFSU2_TR(0x754285);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754288:{NFSU2_TR(0x754288);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75428a:{NFSU2_TR(0x75428a);
if(r1(R+518)){{goto L7542a5;}}
}
B75428c:L75428c:{c.instructions+=4;NFSU2_TR(0x75428c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75428d:{NFSU2_TR(0x75428d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75428f:{NFSU2_TR(0x75428f);
w4(R+4,u32(0xbcull));
}
B754294:{NFSU2_TR(0x754294);
__builtin_memmove((R+28),(R+8),4);
}
B754296:L754296:{c.instructions+=1;NFSU2_TR(0x754296);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L754298;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754296u);}goto L754296;}
}
B754298:L754298:{c.instructions+=4;NFSU2_TR(0x754298);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B75429a:{NFSU2_TR(0x75429a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75429d:{NFSU2_TR(0x75429d);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7542a4:{NFSU2_TR(0x7542a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7542a5:L7542a5:{c.instructions+=3;NFSU2_TR(0x7542a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7542ac:{NFSU2_TR(0x7542ac);
__builtin_memmove((R+0),(R+8),4);
}
B7542ae:{NFSU2_TR(0x7542ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7542b3ull));
TAIL_STATIC(0x76115eu,761);
}
B7542b3:L7542b3:{c.instructions+=2;NFSU2_TR(0x7542b3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x194ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x194ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x194ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7542b9:{NFSU2_TR(0x7542b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7542c0:L7542c0:{c.instructions+=5;NFSU2_TR(0x7542c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7542c1:{NFSU2_TR(0x7542c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7542c5:{NFSU2_TR(0x7542c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7542c7:{NFSU2_TR(0x7542c7);
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
B7542c9:{NFSU2_TR(0x7542c9);
if(r1(R+518)){{goto L7542d4;}}
}
B7542cb:L7542cb:{c.instructions+=2;NFSU2_TR(0x7542cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7542cc:{NFSU2_TR(0x7542cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7542d1ull));
TAIL_STATIC(0x7596a0u,759);
}
B7542d1:L7542d1:{c.instructions+=1;NFSU2_TR(0x7542d1);
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
B7542d4:L7542d4:{c.instructions+=2;NFSU2_TR(0x7542d4);
u8 U[4];
w4(U+0,u32(0x32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7542d6:{NFSU2_TR(0x7542d6);
u8 U[4];
__builtin_memmove((U+0),gp(0x783150),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7542dcull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7542dc:L7542dc:{c.instructions+=1;NFSU2_TR(0x7542dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7542e1ull));
TAIL_STATIC(0x75bc78u,75b);
}
B7542e1:L7542e1:{c.instructions+=3;NFSU2_TR(0x7542e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7542e4:{NFSU2_TR(0x7542e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7542e6:{NFSU2_TR(0x7542e6);
if(r1(R+518)){{goto L7542f1;}}
}
B7542e8:L7542e8:{c.instructions+=2;NFSU2_TR(0x7542e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7542e9:{NFSU2_TR(0x7542e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7542eeull));
TAIL_STATIC(0x598ec0u,598);
}
B7542ee:L7542ee:{c.instructions+=1;NFSU2_TR(0x7542ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7542f1:L7542f1:{c.instructions+=3;NFSU2_TR(0x7542f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7542f4:{NFSU2_TR(0x7542f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7542f6:{NFSU2_TR(0x7542f6);
if(r1(R+518)){{goto L754301;}}
}
B7542f8:L7542f8:{c.instructions+=2;NFSU2_TR(0x7542f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7542f9:{NFSU2_TR(0x7542f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7542feull));
TAIL_STATIC(0x598ec0u,598);
}
B7542fe:L7542fe:{c.instructions+=1;NFSU2_TR(0x7542fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754301:L754301:{c.instructions+=2;NFSU2_TR(0x754301);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754302:{NFSU2_TR(0x754302);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754307ull));
TAIL_STATIC(0x598ec0u,598);
}
B754307:L754307:{c.instructions+=3;NFSU2_TR(0x754307);
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
B75430a:{NFSU2_TR(0x75430a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75430b:{NFSU2_TR(0x75430b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754310:L754310:{c.instructions+=3;NFSU2_TR(0x754310);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754314:{NFSU2_TR(0x754314);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x706f7274ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754319:{NFSU2_TR(0x754319);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L754332;}}
}
B75431b:L75431b:{c.instructions+=5;NFSU2_TR(0x75431b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75431f:{NFSU2_TR(0x75431f);
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
B754321:{NFSU2_TR(0x754321);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B754325:{NFSU2_TR(0x754325);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754326:{NFSU2_TR(0x754326);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75432bull));
TAIL_STATIC(0x7430f0u,743);
}
B75432b:L75432b:{c.instructions+=3;NFSU2_TR(0x75432b);
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
B75432e:{NFSU2_TR(0x75432e);
w4(R+0,u32(r2(R+0)));
}
B754331:{NFSU2_TR(0x754331);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754332:L754332:{c.instructions+=2;NFSU2_TR(0x754332);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x61646472ull))));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x61646472ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B754337:{NFSU2_TR(0x754337);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75434a;}}
}
B754339:L754339:{c.instructions+=4;NFSU2_TR(0x754339);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75433d:{NFSU2_TR(0x75433d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754340:{NFSU2_TR(0x754340);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754341:{NFSU2_TR(0x754341);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754346ull));
TAIL_STATIC(0x743110u,743);
}
B754346:L754346:{c.instructions+=2;NFSU2_TR(0x754346);
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
B754349:{NFSU2_TR(0x754349);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75434a:L75434a:{c.instructions+=2;NFSU2_TR(0x75434a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x6c616472ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6c616472ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x6c616472ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75434f:{NFSU2_TR(0x75434f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L754359;}}
}
B754351:L754351:{c.instructions+=3;NFSU2_TR(0x754351);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754355:{NFSU2_TR(0x754355);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754358:{NFSU2_TR(0x754358);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754359:L754359:{c.instructions+=2;NFSU2_TR(0x754359);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x6c707274ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6c707274ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x6c707274ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75435e:{NFSU2_TR(0x75435e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L754368;}}
}
B754360:L754360:{c.instructions+=3;NFSU2_TR(0x754360);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B754364:{NFSU2_TR(0x754364);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754367:{NFSU2_TR(0x754367);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754368:L754368:{c.instructions+=2;NFSU2_TR(0x754368);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6f627566ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75436d:{NFSU2_TR(0x75436d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75437a;}}
}
B75436f:L75436f:{c.instructions+=4;NFSU2_TR(0x75436f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754373:{NFSU2_TR(0x754373);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754376:{NFSU2_TR(0x754376);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B754379:{NFSU2_TR(0x754379);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75437a:L75437a:{c.instructions+=2;NFSU2_TR(0x75437a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x69627566ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75437f:{NFSU2_TR(0x75437f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L754393;}}
}
B754381:L754381:{c.instructions+=4;NFSU2_TR(0x754381);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754385:{NFSU2_TR(0x754385);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754388:{NFSU2_TR(0x754388);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75438a:{NFSU2_TR(0x75438a);
if(r1(R+518)){{goto L7543c7;}}
}
B75438c:L75438c:{c.instructions+=3;NFSU2_TR(0x75438c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75438f:{NFSU2_TR(0x75438f);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B754392:{NFSU2_TR(0x754392);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754393:L754393:{c.instructions+=2;NFSU2_TR(0x754393);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x73746174ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x73746174ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x73746174ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B754398:{NFSU2_TR(0x754398);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7543a2;}}
}
B75439a:L75439a:{c.instructions+=3;NFSU2_TR(0x75439a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75439e:{NFSU2_TR(0x75439e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7543a1:{NFSU2_TR(0x7543a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7543a2:L7543a2:{c.instructions+=2;NFSU2_TR(0x7543a2);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x73656375ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x73656375ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x73656375ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7543a7:{NFSU2_TR(0x7543a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7543b5;}}
}
B7543a9:L7543a9:{c.instructions+=3;NFSU2_TR(0x7543a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7543ad:{NFSU2_TR(0x7543ad);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B7543b4:{NFSU2_TR(0x7543b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7543b5:L7543b5:{c.instructions+=2;NFSU2_TR(0x7543b5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x63727970ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x63727970ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x63727970ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7543ba:{NFSU2_TR(0x7543ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7543c7;}}
}
B7543bc:L7543bc:{c.instructions+=3;NFSU2_TR(0x7543bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7543c0:{NFSU2_TR(0x7543c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7543c6:{NFSU2_TR(0x7543c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7543c7:L7543c7:{c.instructions+=2;NFSU2_TR(0x7543c7);
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
B7543c9:{NFSU2_TR(0x7543c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7543d0:L7543d0:{c.instructions+=5;NFSU2_TR(0x7543d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7543d1:{NFSU2_TR(0x7543d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7543d5:{NFSU2_TR(0x7543d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7543d7:{NFSU2_TR(0x7543d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7543d9:{NFSU2_TR(0x7543d9);
if(r1(R+518)){{goto L7543ea;}}
}
B7543db:L7543db:{c.instructions+=2;NFSU2_TR(0x7543db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7543dc:{NFSU2_TR(0x7543dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7543e1ull));
TAIL_STATIC(0x7596a0u,759);
}
B7543e1:L7543e1:{c.instructions+=2;NFSU2_TR(0x7543e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7543e4:{NFSU2_TR(0x7543e4);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B7543ea:L7543ea:{c.instructions+=3;NFSU2_TR(0x7543ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7543ed:{NFSU2_TR(0x7543ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7543ef:{NFSU2_TR(0x7543ef);
if(r1(R+518)){{goto L754401;}}
}
B7543f1:L7543f1:{c.instructions+=2;NFSU2_TR(0x7543f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7543f2:{NFSU2_TR(0x7543f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7543f7ull));
TAIL_STATIC(0x598ec0u,598);
}
B7543f7:L7543f7:{c.instructions+=2;NFSU2_TR(0x7543f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7543fa:{NFSU2_TR(0x7543fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B754401:L754401:{c.instructions+=4;NFSU2_TR(0x754401);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B754408:{NFSU2_TR(0x754408);
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
B75440a:{NFSU2_TR(0x75440a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75440b:{NFSU2_TR(0x75440b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754410:L754410:{c.instructions+=7;NFSU2_TR(0x754410);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754414:{NFSU2_TR(0x754414);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B754416:{NFSU2_TR(0x754416);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B754419:{NFSU2_TR(0x754419);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75441d:{NFSU2_TR(0x75441d);
__builtin_memmove((R+0),(R+518),1);
}
B754420:{NFSU2_TR(0x754420);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B754427:{NFSU2_TR(0x754427);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754430:L754430:{c.instructions+=4;NFSU2_TR(0x754430);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754431:{NFSU2_TR(0x754431);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B754435:{NFSU2_TR(0x754435);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754437:{NFSU2_TR(0x754437);
if(r1(R+518)){{goto L754464;}}
}
B754439:L754439:{c.instructions+=3;NFSU2_TR(0x754439);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75443d:{NFSU2_TR(0x75443d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75443f:{NFSU2_TR(0x75443f);
if(r1(R+518)){{goto L754464;}}
}
B754441:L754441:{c.instructions+=2;NFSU2_TR(0x754441);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x54ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x54ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x54ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B754444:{NFSU2_TR(0x754444);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L754464;}}
}
B754446:L754446:{c.instructions+=5;NFSU2_TR(0x754446);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75444a:{NFSU2_TR(0x75444a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75444b:{NFSU2_TR(0x75444b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B754451:{NFSU2_TR(0x754451);
w4(R+4,u32(0x15ull));
}
B754456:{NFSU2_TR(0x754456);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8eull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B75445f:L75445f:{c.instructions+=1;NFSU2_TR(0x75445f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L754461;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75445fu);}goto L75445f;}
}
B754461:L754461:{c.instructions+=3;NFSU2_TR(0x754461);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B754462:{NFSU2_TR(0x754462);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754463:{NFSU2_TR(0x754463);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754464:L754464:{c.instructions+=6;NFSU2_TR(0x754464);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754468:{NFSU2_TR(0x754468);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8eull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B754471:{NFSU2_TR(0x754471);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xe4ull))));
}
B754476:{NFSU2_TR(0x754476);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754478:{NFSU2_TR(0x754478);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754479:{NFSU2_TR(0x754479);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75447eull));
TAIL_STATIC(0x75a210u,75a);
}
B75447e:L75447e:{c.instructions+=3;NFSU2_TR(0x75447e);
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
B754481:{NFSU2_TR(0x754481);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754482:{NFSU2_TR(0x754482);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754490:L754490:{c.instructions+=12;NFSU2_TR(0x754490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B754493:{NFSU2_TR(0x754493);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B754498:{NFSU2_TR(0x754498);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754499:{NFSU2_TR(0x754499);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75449a:{NFSU2_TR(0x75449a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75449e:{NFSU2_TR(0x75449e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7544a2:{NFSU2_TR(0x7544a2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7544a6:{NFSU2_TR(0x7544a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7544a7:{NFSU2_TR(0x7544a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7544a8:{NFSU2_TR(0x7544a8);
w1(R+12,u8(0xffull));
}
B7544aa:{NFSU2_TR(0x7544aa);
w4(R+24,u32(0x4ull));
}
B7544af:{NFSU2_TR(0x7544af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75450b;}}
}
B7544b1:L7544b1:{c.instructions+=2;NFSU2_TR(0x7544b1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B7544b5:{NFSU2_TR(0x7544b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75450b;}}
}
B7544b7:L7544b7:{c.instructions+=3;NFSU2_TR(0x7544b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7544ba:{NFSU2_TR(0x7544ba);
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
B7544bc:{NFSU2_TR(0x7544bc);
if(r1(R+518)){{goto L7544c7;}}
}
B7544be:L7544be:{c.instructions+=2;NFSU2_TR(0x7544be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7544bf:{NFSU2_TR(0x7544bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7544c4ull));
TAIL_STATIC(0x598ec0u,598);
}
B7544c4:L7544c4:{c.instructions+=1;NFSU2_TR(0x7544c4);
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
B7544c7:L7544c7:{c.instructions+=5;NFSU2_TR(0x7544c7);
w4(R+0,u32(0xcull));
}
B7544cc:{NFSU2_TR(0x7544cc);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7544ce:{NFSU2_TR(0x7544ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7544d1:{NFSU2_TR(0x7544d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7544d4:{NFSU2_TR(0x7544d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7544d9ull));
TAIL_STATIC(0x5832f0u,583);
}
B7544d9:L7544d9:{c.instructions+=16;NFSU2_TR(0x7544d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7544dc:{NFSU2_TR(0x7544dc);
w1(R+4,u8(0xfeull));
}
B7544de:{NFSU2_TR(0x7544de);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7544e1:{NFSU2_TR(0x7544e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7544e4:{NFSU2_TR(0x7544e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7544e7:{NFSU2_TR(0x7544e7);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B7544e9:{NFSU2_TR(0x7544e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7544ec:{NFSU2_TR(0x7544ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7544ef:{NFSU2_TR(0x7544ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7544f2:{NFSU2_TR(0x7544f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7544f5:{NFSU2_TR(0x7544f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7544f9:{NFSU2_TR(0x7544f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7544fd:{NFSU2_TR(0x7544fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B754501:{NFSU2_TR(0x754501);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
w1(U+4,u8(0xcull));
s1(u32(r4(U+0)),r1(U+4));
}
B754505:{NFSU2_TR(0x754505);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754508:{NFSU2_TR(0x754508);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75450b:L75450b:{c.instructions+=3;NFSU2_TR(0x75450b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75450e:{NFSU2_TR(0x75450e);
w4(R+28,u32(0x2ull));
}
B754513:{NFSU2_TR(0x754513);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L754526;}}
}
B754515:L754515:{c.instructions+=3;NFSU2_TR(0x754515);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754518:{NFSU2_TR(0x754518);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75451a:{NFSU2_TR(0x75451a);
if(r1(R+518)){{goto L754526;}}
}
B75451c:L75451c:{c.instructions+=2;NFSU2_TR(0x75451c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75451f:{NFSU2_TR(0x75451f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B754526:L754526:{c.instructions+=2;NFSU2_TR(0x754526);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75452a:{NFSU2_TR(0x75452a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7545c8;}}
}
B754530:L754530:{c.instructions+=9;NFSU2_TR(0x754530);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B754533:{NFSU2_TR(0x754533);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B754537:{NFSU2_TR(0x754537);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754538:{NFSU2_TR(0x754538);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75453c:{NFSU2_TR(0x75453c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75453d:{NFSU2_TR(0x75453d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75453f:{NFSU2_TR(0x75453f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754540:{NFSU2_TR(0x754540);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B754548:{NFSU2_TR(0x754548);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75454dull));
TAIL_STATIC(0x7596c0u,759);
}
B75454d:L75454d:{c.instructions+=4;NFSU2_TR(0x75454d);
__builtin_memmove((R+24),(R+0),4);
}
B75454f:{NFSU2_TR(0x75454f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B754552:{NFSU2_TR(0x754552);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754554:{NFSU2_TR(0x754554);
if(r1(R+518)){{goto L7549d7;}}
}
B75455a:L75455a:{c.instructions+=3;NFSU2_TR(0x75455a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75455d:{NFSU2_TR(0x75455d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75455e:{NFSU2_TR(0x75455e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754563ull));
TAIL_STATIC(0x7596a0u,759);
}
B754563:L754563:{c.instructions+=7;NFSU2_TR(0x754563);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754566:{NFSU2_TR(0x754566);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754569:{NFSU2_TR(0x754569);
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
B75456b:{NFSU2_TR(0x75456b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+20)),r4(U+0));
}
B75456e:{NFSU2_TR(0x75456e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B754575:{NFSU2_TR(0x754575);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75457c:{NFSU2_TR(0x75457c);
if(r1(R+518)){{goto L754587;}}
}
B75457e:L75457e:{c.instructions+=2;NFSU2_TR(0x75457e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75457f:{NFSU2_TR(0x75457f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754584ull));
TAIL_STATIC(0x598ec0u,598);
}
B754584:L754584:{c.instructions+=1;NFSU2_TR(0x754584);
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
B754587:L754587:{c.instructions+=5;NFSU2_TR(0x754587);
w4(R+24,u32(0xcull));
}
B75458c:{NFSU2_TR(0x75458c);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75458e:{NFSU2_TR(0x75458e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754591:{NFSU2_TR(0x754591);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754594:{NFSU2_TR(0x754594);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754599ull));
TAIL_STATIC(0x5832f0u,583);
}
B754599:L754599:{c.instructions+=15;NFSU2_TR(0x754599);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75459c:{NFSU2_TR(0x75459c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75459f:{NFSU2_TR(0x75459f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7545a2:{NFSU2_TR(0x7545a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7545a5:{NFSU2_TR(0x7545a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7545a8:{NFSU2_TR(0x7545a8);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B7545aa:{NFSU2_TR(0x7545aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7545ad:{NFSU2_TR(0x7545ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7545b0:{NFSU2_TR(0x7545b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7545b3:{NFSU2_TR(0x7545b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7545b6:{NFSU2_TR(0x7545b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7545ba:{NFSU2_TR(0x7545ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7545be:{NFSU2_TR(0x7545be);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7545c2:{NFSU2_TR(0x7545c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
w1(U+4,u8(0xcull));
s1(u32(r4(U+0)),r1(U+4));
}
B7545c6:{NFSU2_TR(0x7545c6);
{goto L7545cd;}
}
B7545c8:L7545c8:{c.instructions+=1;NFSU2_TR(0x7545c8);
w4(R+24,u32(0xcull));
}
B7545cd:L7545cd:{c.instructions+=2;NFSU2_TR(0x7545cd);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7545d0:{NFSU2_TR(0x7545d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L754747;}}
}
B7545d6:L7545d6:{c.instructions+=1;NFSU2_TR(0x7545d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7545dbull));
TAIL_STATIC(0x74b730u,74b);
}
B7545db:L7545db:{c.instructions+=2;NFSU2_TR(0x7545db);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7545de:{NFSU2_TR(0x7545de);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L754667;}}
}
B7545e4:L7545e4:{c.instructions+=3;NFSU2_TR(0x7545e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7545e7:{NFSU2_TR(0x7545e7);
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
B7545e9:{NFSU2_TR(0x7545e9);
if(r1(R+518)){{goto L7545f4;}}
}
B7545eb:L7545eb:{c.instructions+=2;NFSU2_TR(0x7545eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7545ec:{NFSU2_TR(0x7545ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7545f1ull));
TAIL_STATIC(0x7596a0u,759);
}
B7545f1:L7545f1:{c.instructions+=1;NFSU2_TR(0x7545f1);
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
B7545f4:L7545f4:{c.instructions+=1;NFSU2_TR(0x7545f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7545f9ull));
TAIL_STATIC(0x759670u,759);
}
B7545f9:L7545f9:{c.instructions+=3;NFSU2_TR(0x7545f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7545fb:{NFSU2_TR(0x7545fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B7545fe:{NFSU2_TR(0x7545fe);
if(r1(R+518)){{goto L7549d7;}}
}
B754604:L754604:{c.instructions+=4;NFSU2_TR(0x754604);
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
B754606:{NFSU2_TR(0x754606);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B75460a:{NFSU2_TR(0x75460a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75460b:{NFSU2_TR(0x75460b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754610ull));
TAIL_STATIC(0x7430f0u,743);
}
B754610:L754610:{c.instructions+=6;NFSU2_TR(0x754610);
w4(R+8,u32(r2(R+0)));
}
B754613:{NFSU2_TR(0x754613);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754616:{NFSU2_TR(0x754616);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B754619:{NFSU2_TR(0x754619);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75461a:{NFSU2_TR(0x75461a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75461b:{NFSU2_TR(0x75461b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754620ull));
TAIL_STATIC(0x743110u,743);
}
B754620:L754620:{c.instructions+=11;NFSU2_TR(0x754620);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754623:{NFSU2_TR(0x754623);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B754625:{NFSU2_TR(0x754625);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B75462c:{NFSU2_TR(0x75462c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75462d:{NFSU2_TR(0x75462d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B754630:{NFSU2_TR(0x754630);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B754633:{NFSU2_TR(0x754633);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B754636:{NFSU2_TR(0x754636);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754637:{NFSU2_TR(0x754637);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754638:{NFSU2_TR(0x754638);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754639:{NFSU2_TR(0x754639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75463eull));
TAIL_STATIC(0x759750u,759);
}
B75463e:L75463e:{c.instructions+=3;NFSU2_TR(0x75463e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B754641:{NFSU2_TR(0x754641);
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
B754643:{NFSU2_TR(0x754643);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7549d7;}}
}
B754649:L754649:{c.instructions+=1;NFSU2_TR(0x754649);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75464eull));
TAIL_STATIC(0x74b730u,74b);
}
B75464e:L75464e:{c.instructions+=6;NFSU2_TR(0x75464e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B754654:{NFSU2_TR(0x754654);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7530ull))));
}
B754659:{NFSU2_TR(0x754659);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75465b:{NFSU2_TR(0x75465b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75465c:{NFSU2_TR(0x75465c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75465f:{NFSU2_TR(0x75465f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754664ull));
TAIL_STATIC(0x75a210u,75a);
}
B754664:L754664:{c.instructions+=1;NFSU2_TR(0x754664);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B754667:L754667:{c.instructions+=3;NFSU2_TR(0x754667);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75466a:{NFSU2_TR(0x75466a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75466c:{NFSU2_TR(0x75466c);
if(r1(R+518)){{goto L7549d7;}}
}
B754672:L754672:{c.instructions+=2;NFSU2_TR(0x754672);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754673:{NFSU2_TR(0x754673);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754678ull));
TAIL_STATIC(0x759910u,759);
}
B754678:L754678:{c.instructions+=6;NFSU2_TR(0x754678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B75467b:{NFSU2_TR(0x75467b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75467d:{NFSU2_TR(0x75467d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75467f:{NFSU2_TR(0x75467f);
u8 U[4];
w4(U+0,u32(0x73746174ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754684:{NFSU2_TR(0x754684);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754685:{NFSU2_TR(0x754685);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75468aull));
TAIL_STATIC(0x75a180u,75a);
}
B75468a:L75468a:{c.instructions+=3;NFSU2_TR(0x75468a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B75468d:{NFSU2_TR(0x75468d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75468f:{NFSU2_TR(0x75468f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7549d7;}}
}
B754695:L754695:{c.instructions+=3;NFSU2_TR(0x754695);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754698:{NFSU2_TR(0x754698);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75469a:{NFSU2_TR(0x75469a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7546b3;}}
}
B75469c:L75469c:{c.instructions+=7;NFSU2_TR(0x75469c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B75469f:{NFSU2_TR(0x75469f);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7546a1:{NFSU2_TR(0x7546a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7546a4:{NFSU2_TR(0x7546a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7546a5:{NFSU2_TR(0x7546a5);
u8 U[4];
w4(U+0,u32(0x70656572ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7546aa:{NFSU2_TR(0x7546aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7546ab:{NFSU2_TR(0x7546ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7546b0ull));
TAIL_STATIC(0x75a180u,75a);
}
B7546b0:L7546b0:{c.instructions+=1;NFSU2_TR(0x7546b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7546b3:L7546b3:{c.instructions+=7;NFSU2_TR(0x7546b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7546b6:{NFSU2_TR(0x7546b6);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7546b8:{NFSU2_TR(0x7546b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7546bc:{NFSU2_TR(0x7546bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7546bd:{NFSU2_TR(0x7546bd);
u8 U[4];
w4(U+0,u32(0x62696e64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7546c2:{NFSU2_TR(0x7546c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7546c3:{NFSU2_TR(0x7546c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7546c8ull));
TAIL_STATIC(0x75a180u,75a);
}
B7546c8:L7546c8:{c.instructions+=3;NFSU2_TR(0x7546c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7546cb:{NFSU2_TR(0x7546cb);
u8 U[10];
w1(R+512,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7546cd:{NFSU2_TR(0x7546cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7546ef;}}
}
B7546cf:L7546cf:{c.instructions+=3;NFSU2_TR(0x7546cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7546d3:{NFSU2_TR(0x7546d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7546d4:{NFSU2_TR(0x7546d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7546d9ull));
TAIL_STATIC(0x743110u,743);
}
B7546d9:L7546d9:{c.instructions+=4;NFSU2_TR(0x7546d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7546dd:{NFSU2_TR(0x7546dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7546de:{NFSU2_TR(0x7546de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7546e1:{NFSU2_TR(0x7546e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7546e6ull));
TAIL_STATIC(0x7430f0u,743);
}
B7546e6:L7546e6:{c.instructions+=3;NFSU2_TR(0x7546e6);
w4(R+0,u32(r2(R+0)));
}
B7546e9:{NFSU2_TR(0x7546e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7546ec:{NFSU2_TR(0x7546ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7546ef:L7546ef:{c.instructions+=5;NFSU2_TR(0x7546ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7546f2:{NFSU2_TR(0x7546f2);
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
B7546f4:{NFSU2_TR(0x7546f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7546fb:{NFSU2_TR(0x7546fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B754702:{NFSU2_TR(0x754702);
if(r1(R+518)){{goto L75470d;}}
}
B754704:L754704:{c.instructions+=2;NFSU2_TR(0x754704);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754705:{NFSU2_TR(0x754705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75470aull));
TAIL_STATIC(0x598ec0u,598);
}
B75470a:L75470a:{c.instructions+=1;NFSU2_TR(0x75470a);
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
B75470d:L75470d:{c.instructions+=4;NFSU2_TR(0x75470d);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75470f:{NFSU2_TR(0x75470f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754712:{NFSU2_TR(0x754712);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754715:{NFSU2_TR(0x754715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75471aull));
TAIL_STATIC(0x5832f0u,583);
}
B75471a:L75471a:{c.instructions+=14;NFSU2_TR(0x75471a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75471d:{NFSU2_TR(0x75471d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754720:{NFSU2_TR(0x754720);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B754723:{NFSU2_TR(0x754723);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B754726:{NFSU2_TR(0x754726);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B754729:{NFSU2_TR(0x754729);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B75472b:{NFSU2_TR(0x75472b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75472e:{NFSU2_TR(0x75472e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B754731:{NFSU2_TR(0x754731);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B754734:{NFSU2_TR(0x754734);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B754737:{NFSU2_TR(0x754737);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B75473b:{NFSU2_TR(0x75473b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B75473f:{NFSU2_TR(0x75473f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B754743:{NFSU2_TR(0x754743);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
w1(U+4,u8(0xcull));
s1(u32(r4(U+0)),r1(U+4));
}
B754747:L754747:{c.instructions+=3;NFSU2_TR(0x754747);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75474a:{NFSU2_TR(0x75474a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75474c:{NFSU2_TR(0x75474c);
if(r1(R+518)){{goto L7549d7;}}
}
B754752:L754752:{c.instructions+=2;NFSU2_TR(0x754752);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754753:{NFSU2_TR(0x754753);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754758ull));
TAIL_STATIC(0x759910u,759);
}
B754758:L754758:{c.instructions+=5;NFSU2_TR(0x754758);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75475b:{NFSU2_TR(0x75475b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B75475d:{NFSU2_TR(0x75475d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754760:{NFSU2_TR(0x754760);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B754762:{NFSU2_TR(0x754762);
if(r1(R+518)){{goto L7547a8;}}
}
B754764:L754764:{c.instructions+=4;NFSU2_TR(0x754764);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754767:{NFSU2_TR(0x754767);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75476a:{NFSU2_TR(0x75476a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75476c:{NFSU2_TR(0x75476c);
if(r1(R+518)){{goto L7547a8;}}
}
B75476e:L75476e:{c.instructions+=7;NFSU2_TR(0x75476e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B754770:{NFSU2_TR(0x754770);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754771:{NFSU2_TR(0x754771);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B754773:{NFSU2_TR(0x754773);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754774:{NFSU2_TR(0x754774);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B754777:{NFSU2_TR(0x754777);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754778:{NFSU2_TR(0x754778);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75477dull));
TAIL_STATIC(0x759fe0u,759);
}
B75477d:L75477d:{c.instructions+=4;NFSU2_TR(0x75477d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B754780:{NFSU2_TR(0x754780);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B754782:{NFSU2_TR(0x754782);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754786:{NFSU2_TR(0x754786);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L754920;}}
}
B75478c:L75478c:{c.instructions+=1;NFSU2_TR(0x75478c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L754791;}}
}
B75478e:L75478e:{c.instructions+=1;NFSU2_TR(0x75478e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B754791:L754791:{c.instructions+=3;NFSU2_TR(0x754791);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754794:{NFSU2_TR(0x754794);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B754797:{NFSU2_TR(0x754797);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7547a8;}}
}
B754799:L754799:{c.instructions+=3;NFSU2_TR(0x754799);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75479c:{NFSU2_TR(0x75479c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75479d:{NFSU2_TR(0x75479d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7547a2ull));
TAIL_STATIC(0x598ec0u,598);
}
B7547a2:L7547a2:{c.instructions+=2;NFSU2_TR(0x7547a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7547a5:{NFSU2_TR(0x7547a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7547a8:L7547a8:{c.instructions+=2;NFSU2_TR(0x7547a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7547ab:{NFSU2_TR(0x7547ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7548c9;}}
}
B7547b1:L7547b1:{c.instructions+=3;NFSU2_TR(0x7547b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7547b4:{NFSU2_TR(0x7547b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7547b7:{NFSU2_TR(0x7547b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7547bf;}}
}
B7547b9:L7547b9:{c.instructions+=2;NFSU2_TR(0x7547b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7547bc:{NFSU2_TR(0x7547bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7547bf:L7547bf:{c.instructions+=9;NFSU2_TR(0x7547bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7547c2:{NFSU2_TR(0x7547c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7547c5:{NFSU2_TR(0x7547c5);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B7547c7:{NFSU2_TR(0x7547c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7547c8:{NFSU2_TR(0x7547c8);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B7547cf:{NFSU2_TR(0x7547cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7547d2:{NFSU2_TR(0x7547d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7547d3:{NFSU2_TR(0x7547d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7547d4:{NFSU2_TR(0x7547d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7547d9ull));
TAIL_STATIC(0x75a060u,75a);
}
B7547d9:L7547d9:{c.instructions+=4;NFSU2_TR(0x7547d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7547dc:{NFSU2_TR(0x7547dc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7547de:{NFSU2_TR(0x7547de);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7547e2:{NFSU2_TR(0x7547e2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L754804;}}
}
B7547e4:L7547e4:{c.instructions+=3;NFSU2_TR(0x7547e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7547e7:{NFSU2_TR(0x7547e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7547e8:{NFSU2_TR(0x7547e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7547edull));
TAIL_STATIC(0x7596a0u,759);
}
B7547ed:L7547ed:{c.instructions+=8;NFSU2_TR(0x7547ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7547f0:{NFSU2_TR(0x7547f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+20)),r4(U+0));
}
B7547f3:{NFSU2_TR(0x7547f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7547f4:{NFSU2_TR(0x7547f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7547f5:{NFSU2_TR(0x7547f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7547f6:{NFSU2_TR(0x7547f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7547f7:{NFSU2_TR(0x7547f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7547fb:{NFSU2_TR(0x7547fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754800ull));
TAIL_STATIC(0x76115eu,761);
}
B754800:L754800:{c.instructions+=2;NFSU2_TR(0x754800);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B754803:{NFSU2_TR(0x754803);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754804:L754804:{c.instructions+=1;NFSU2_TR(0x754804);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L754809;}}
}
B754806:L754806:{c.instructions+=1;NFSU2_TR(0x754806);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B754809:L754809:{c.instructions+=3;NFSU2_TR(0x754809);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75480c:{NFSU2_TR(0x75480c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75480f:{NFSU2_TR(0x75480f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7548c9;}}
}
B754815:L754815:{c.instructions+=6;NFSU2_TR(0x754815);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754817:{NFSU2_TR(0x754817);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x80ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75481d:{NFSU2_TR(0x75481d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B754823:{NFSU2_TR(0x754823);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754824:{NFSU2_TR(0x754824);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754825:{NFSU2_TR(0x754825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75482aull));
TAIL_STATIC(0x75a260u,75a);
}
B75482a:L75482a:{c.instructions+=13;NFSU2_TR(0x75482a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B75482e:{NFSU2_TR(0x75482e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B754832:{NFSU2_TR(0x754832);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B754834:{NFSU2_TR(0x754834);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+1),(U+4),1);
}
B754837:{NFSU2_TR(0x754837);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75483a:{NFSU2_TR(0x75483a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75483d:{NFSU2_TR(0x75483d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B754840:{NFSU2_TR(0x754840);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B754842:{NFSU2_TR(0x754842);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B754845:{NFSU2_TR(0x754845);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B754847:{NFSU2_TR(0x754847);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75484a:{NFSU2_TR(0x75484a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75484d:{NFSU2_TR(0x75484d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L754920;}}
}
B754853:L754853:{c.instructions+=2;NFSU2_TR(0x754853);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x8000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754858:{NFSU2_TR(0x754858);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L754920;}}
}
B75485e:L75485e:{c.instructions+=3;NFSU2_TR(0x75485e);
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
B75485f:{NFSU2_TR(0x75485f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754860:{NFSU2_TR(0x754860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754865ull));
TAIL_STATIC(0x5832f0u,583);
}
B754865:L754865:{c.instructions+=4;NFSU2_TR(0x754865);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754868:{NFSU2_TR(0x754868);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75486a:{NFSU2_TR(0x75486a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75486d:{NFSU2_TR(0x75486d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75488f;}}
}
B75486f:L75486f:{c.instructions+=3;NFSU2_TR(0x75486f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B754872:{NFSU2_TR(0x754872);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754873:{NFSU2_TR(0x754873);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754878ull));
TAIL_STATIC(0x7596a0u,759);
}
B754878:L754878:{c.instructions+=8;NFSU2_TR(0x754878);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75487b:{NFSU2_TR(0x75487b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+20)),r4(U+0));
}
B75487e:{NFSU2_TR(0x75487e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75487f:{NFSU2_TR(0x75487f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754880:{NFSU2_TR(0x754880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B754881:{NFSU2_TR(0x754881);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B754882:{NFSU2_TR(0x754882);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754886:{NFSU2_TR(0x754886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75488bull));
TAIL_STATIC(0x76115eu,761);
}
B75488b:L75488b:{c.instructions+=2;NFSU2_TR(0x75488b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75488e:{NFSU2_TR(0x75488e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75488f:L75488f:{c.instructions+=4;NFSU2_TR(0x75488f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754892:{NFSU2_TR(0x754892);
__builtin_memmove((R+8),(R+4),4);
}
B754894:{NFSU2_TR(0x754894);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B754897:{NFSU2_TR(0x754897);
__builtin_memmove((R+28),(R+0),4);
}
B754899:L754899:{c.instructions+=1;NFSU2_TR(0x754899);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75489b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754899u);}goto L754899;}
}
B75489b:L75489b:{c.instructions+=2;NFSU2_TR(0x75489b);
__builtin_memmove((R+4),(R+8),4);
}
B75489d:{NFSU2_TR(0x75489d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7548a0:L7548a0:{c.instructions+=1;NFSU2_TR(0x7548a0);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7548a2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7548a0u);}goto L7548a0;}
}
B7548a2:L7548a2:{c.instructions+=3;NFSU2_TR(0x7548a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7548a5:{NFSU2_TR(0x7548a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7548a8:{NFSU2_TR(0x7548a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7548c9;}}
}
B7548aa:L7548aa:{c.instructions+=3;NFSU2_TR(0x7548aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7548ad:{NFSU2_TR(0x7548ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7548af:{NFSU2_TR(0x7548af);
if(r1(R+518)){{goto L7548c9;}}
}
B7548b1:L7548b1:{c.instructions+=3;NFSU2_TR(0x7548b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7548b4:{NFSU2_TR(0x7548b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7548b7:{NFSU2_TR(0x7548b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7548c9;}}
}
B7548b9:L7548b9:{c.instructions+=2;NFSU2_TR(0x7548b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7548ba:{NFSU2_TR(0x7548ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7548bfull));
TAIL_STATIC(0x598ec0u,598);
}
B7548bf:L7548bf:{c.instructions+=2;NFSU2_TR(0x7548bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7548c2:{NFSU2_TR(0x7548c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7548c9:L7548c9:{c.instructions+=3;NFSU2_TR(0x7548c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7548cc:{NFSU2_TR(0x7548cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7548ce:{NFSU2_TR(0x7548ce);
if(r1(R+518)){{goto L7549d7;}}
}
B7548d4:L7548d4:{c.instructions+=4;NFSU2_TR(0x7548d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7548d7:{NFSU2_TR(0x7548d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7548da:{NFSU2_TR(0x7548da);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7548dc:{NFSU2_TR(0x7548dc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7549d7;}}
}
B7548e2:L7548e2:{c.instructions+=7;NFSU2_TR(0x7548e2);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B7548e4:{NFSU2_TR(0x7548e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7548e5:{NFSU2_TR(0x7548e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7548e8:{NFSU2_TR(0x7548e8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B7548ea:{NFSU2_TR(0x7548ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7548eb:{NFSU2_TR(0x7548eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7548ec:{NFSU2_TR(0x7548ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7548f1ull));
TAIL_STATIC(0x75a060u,75a);
}
B7548f1:L7548f1:{c.instructions+=4;NFSU2_TR(0x7548f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7548f4:{NFSU2_TR(0x7548f4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7548f6:{NFSU2_TR(0x7548f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7548fa:{NFSU2_TR(0x7548fa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L754940;}}
}
B7548fc:L7548fc:{c.instructions+=3;NFSU2_TR(0x7548fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7548ff:{NFSU2_TR(0x7548ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754900:{NFSU2_TR(0x754900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754905ull));
TAIL_STATIC(0x7596a0u,759);
}
B754905:L754905:{c.instructions+=8;NFSU2_TR(0x754905);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754908:{NFSU2_TR(0x754908);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B754909:{NFSU2_TR(0x754909);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75490a:{NFSU2_TR(0x75490a);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+20)),r4(U+0));
}
B754911:{NFSU2_TR(0x754911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B754912:{NFSU2_TR(0x754912);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B754913:{NFSU2_TR(0x754913);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754917:{NFSU2_TR(0x754917);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75491cull));
TAIL_STATIC(0x76115eu,761);
}
B75491c:L75491c:{c.instructions+=2;NFSU2_TR(0x75491c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75491f:{NFSU2_TR(0x75491f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754920:L754920:{c.instructions+=3;NFSU2_TR(0x754920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B754923:{NFSU2_TR(0x754923);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754924:{NFSU2_TR(0x754924);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754929ull));
TAIL_STATIC(0x7596a0u,759);
}
B754929:L754929:{c.instructions+=8;NFSU2_TR(0x754929);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75492c:{NFSU2_TR(0x75492c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+20)),r4(U+0));
}
B75492f:{NFSU2_TR(0x75492f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B754930:{NFSU2_TR(0x754930);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754931:{NFSU2_TR(0x754931);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B754932:{NFSU2_TR(0x754932);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B754933:{NFSU2_TR(0x754933);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754937:{NFSU2_TR(0x754937);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75493cull));
TAIL_STATIC(0x76115eu,761);
}
B75493c:L75493c:{c.instructions+=2;NFSU2_TR(0x75493c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75493f:{NFSU2_TR(0x75493f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754940:L754940:{c.instructions+=1;NFSU2_TR(0x754940);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L754945;}}
}
B754942:L754942:{c.instructions+=1;NFSU2_TR(0x754942);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B754945:L754945:{c.instructions+=3;NFSU2_TR(0x754945);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754948:{NFSU2_TR(0x754948);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75494b:{NFSU2_TR(0x75494b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7549b0;}}
}
B75494d:L75494d:{c.instructions+=8;NFSU2_TR(0x75494d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B754950:{NFSU2_TR(0x754950);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff4ull))));
}
B754953:{NFSU2_TR(0x754953);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754954:{NFSU2_TR(0x754954);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B754957:{NFSU2_TR(0x754957);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754958:{NFSU2_TR(0x754958);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75495e:{NFSU2_TR(0x75495e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75495f:{NFSU2_TR(0x75495f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754964ull));
TAIL_STATIC(0x75a260u,75a);
}
B754964:L754964:{c.instructions+=6;NFSU2_TR(0x754964);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754967:{NFSU2_TR(0x754967);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75496a:{NFSU2_TR(0x75496a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75496b:{NFSU2_TR(0x75496b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75496c:{NFSU2_TR(0x75496c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75496d:{NFSU2_TR(0x75496d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754972ull));
TAIL_STATIC(0x75a290u,75a);
}
B754972:L754972:{c.instructions+=3;NFSU2_TR(0x754972);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B754975:{NFSU2_TR(0x754975);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B754977:{NFSU2_TR(0x754977);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75499d;}}
}
B754979:L754979:{c.instructions+=3;NFSU2_TR(0x754979);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B75497c:{NFSU2_TR(0x75497c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75497d:{NFSU2_TR(0x75497d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754982ull));
TAIL_STATIC(0x7596a0u,759);
}
B754982:L754982:{c.instructions+=8;NFSU2_TR(0x754982);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754985:{NFSU2_TR(0x754985);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B754986:{NFSU2_TR(0x754986);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754987:{NFSU2_TR(0x754987);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+20)),r4(U+0));
}
B75498e:{NFSU2_TR(0x75498e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75498f:{NFSU2_TR(0x75498f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B754990:{NFSU2_TR(0x754990);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754994:{NFSU2_TR(0x754994);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754999ull));
TAIL_STATIC(0x76115eu,761);
}
B754999:L754999:{c.instructions+=2;NFSU2_TR(0x754999);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75499c:{NFSU2_TR(0x75499c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75499d:L75499d:{c.instructions+=4;NFSU2_TR(0x75499d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7549a0:{NFSU2_TR(0x7549a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7549a1:{NFSU2_TR(0x7549a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7549a2:{NFSU2_TR(0x7549a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7549a7ull));
TAIL_STATIC(0x75a340u,75a);
}
B7549a7:L7549a7:{c.instructions+=3;NFSU2_TR(0x7549a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7549aa:{NFSU2_TR(0x7549aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7549ad:{NFSU2_TR(0x7549ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7549b0:L7549b0:{c.instructions+=3;NFSU2_TR(0x7549b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7549b3:{NFSU2_TR(0x7549b3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7549b6:{NFSU2_TR(0x7549b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7549d7;}}
}
B7549b8:L7549b8:{c.instructions+=3;NFSU2_TR(0x7549b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7549bb:{NFSU2_TR(0x7549bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7549bd:{NFSU2_TR(0x7549bd);
if(r1(R+518)){{goto L7549d7;}}
}
B7549bf:L7549bf:{c.instructions+=3;NFSU2_TR(0x7549bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7549c2:{NFSU2_TR(0x7549c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7549c5:{NFSU2_TR(0x7549c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7549d7;}}
}
B7549c7:L7549c7:{c.instructions+=2;NFSU2_TR(0x7549c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7549c8:{NFSU2_TR(0x7549c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7549cdull));
TAIL_STATIC(0x598ec0u,598);
}
B7549cd:L7549cd:{c.instructions+=2;NFSU2_TR(0x7549cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7549d4:{NFSU2_TR(0x7549d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7549d7:L7549d7:{c.instructions+=6;NFSU2_TR(0x7549d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7549db:{NFSU2_TR(0x7549db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7549dc:{NFSU2_TR(0x7549dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7549dd:{NFSU2_TR(0x7549dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7549de:{NFSU2_TR(0x7549de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7549df:{NFSU2_TR(0x7549df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7549e4ull));
TAIL_STATIC(0x76115eu,761);
}
B7549e4:L7549e4:{c.instructions+=2;NFSU2_TR(0x7549e4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7549e7:{NFSU2_TR(0x7549e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7549f0:L7549f0:{c.instructions+=6;NFSU2_TR(0x7549f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7549f1:{NFSU2_TR(0x7549f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7549f2:{NFSU2_TR(0x7549f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7549f3:{NFSU2_TR(0x7549f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7549f7:{NFSU2_TR(0x7549f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7549f8:{NFSU2_TR(0x7549f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7549fdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754490u);}goto L754490;}
}
B7549fd:L7549fd:{c.instructions+=4;NFSU2_TR(0x7549fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B754a01:{NFSU2_TR(0x754a01);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754a04:{NFSU2_TR(0x754a04);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B754a06:{NFSU2_TR(0x754a06);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L754a1c;}}
}
B754a08:L754a08:{c.instructions+=3;NFSU2_TR(0x754a08);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754a0c:{NFSU2_TR(0x754a0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B754a0f:{NFSU2_TR(0x754a0f);
}
B754a10:L754a10:{c.instructions+=4;NFSU2_TR(0x754a10);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B754a12:{NFSU2_TR(0x754a12);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B754a13:{NFSU2_TR(0x754a13);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B754a15:{NFSU2_TR(0x754a15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754a10u);}goto L754a10;}}
}
B754a17:L754a17:{c.instructions+=2;NFSU2_TR(0x754a17);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B754a19:{NFSU2_TR(0x754a19);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754a1c:L754a1c:{c.instructions+=5;NFSU2_TR(0x754a1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B754a1f:{NFSU2_TR(0x754a1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B754a25:{NFSU2_TR(0x754a25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754a26:{NFSU2_TR(0x754a26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754a27:{NFSU2_TR(0x754a27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754a2cull));
TAIL_STATIC(0x75a370u,75a);
}
B754a2c:L754a2c:{c.instructions+=5;NFSU2_TR(0x754a2c);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754a31:{NFSU2_TR(0x754a31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754a32:{NFSU2_TR(0x754a32);
__builtin_memmove((R+12),(R+28),4);
}
B754a34:{NFSU2_TR(0x754a34);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754a38:{NFSU2_TR(0x754a38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754a3dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754130u);}goto L754130;}
}
B754a3d:L754a3d:{c.instructions+=4;NFSU2_TR(0x754a3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B754a41:{NFSU2_TR(0x754a41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B754a44:{NFSU2_TR(0x754a44);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B754a46:{NFSU2_TR(0x754a46);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L754a4f;}}
}
B754a48:L754a48:{c.instructions+=5;NFSU2_TR(0x754a48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B754a49:{NFSU2_TR(0x754a49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754a4a:{NFSU2_TR(0x754a4a);
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
B754a4d:{NFSU2_TR(0x754a4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B754a4e:{NFSU2_TR(0x754a4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754a4f:L754a4f:{c.instructions+=6;NFSU2_TR(0x754a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754a52:{NFSU2_TR(0x754a52);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754a53:{NFSU2_TR(0x754a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B754a56:{NFSU2_TR(0x754a56);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+4))));
}
B754a58:{NFSU2_TR(0x754a58);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754a5a:{NFSU2_TR(0x754a5a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L754a77;}}
}
B754a5c:L754a5c:{c.instructions+=5;NFSU2_TR(0x754a5c);
__builtin_memmove((R+4),(R+24),4);
}
B754a5e:{NFSU2_TR(0x754a5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B754a62:{NFSU2_TR(0x754a62);
__builtin_memmove((R+8),(R+4),4);
}
B754a64:{NFSU2_TR(0x754a64);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B754a67:{NFSU2_TR(0x754a67);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B754a6a:L754a6a:{c.instructions+=1;NFSU2_TR(0x754a6a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L754a6c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754a6au);}goto L754a6a;}
}
B754a6c:L754a6c:{c.instructions+=2;NFSU2_TR(0x754a6c);
__builtin_memmove((R+4),(R+8),4);
}
B754a6e:{NFSU2_TR(0x754a6e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B754a71:L754a71:{c.instructions+=1;NFSU2_TR(0x754a71);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L754a73;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754a71u);}goto L754a71;}
}
B754a73:L754a73:{c.instructions+=1;NFSU2_TR(0x754a73);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B754a77:L754a77:{c.instructions+=38;NFSU2_TR(0x754a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B754a7a:{NFSU2_TR(0x754a7a);
__builtin_memmove((R+0),(R+12),4);
}
B754a7c:{NFSU2_TR(0x754a7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B754a7f:{NFSU2_TR(0x754a7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B754a82:{NFSU2_TR(0x754a82);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754a86:{NFSU2_TR(0x754a86);
__builtin_memmove((R+4),(R+12),4);
}
B754a88:{NFSU2_TR(0x754a88);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B754a8b:{NFSU2_TR(0x754a8b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B754a8e:{NFSU2_TR(0x754a8e);
__builtin_memmove((R+8),(R+12),4);
}
B754a90:{NFSU2_TR(0x754a90);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B754a93:{NFSU2_TR(0x754a93);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B754a96:{NFSU2_TR(0x754a96);
__builtin_memmove((R+4),(R+0),4);
}
B754a98:{NFSU2_TR(0x754a98);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B754a9b:{NFSU2_TR(0x754a9b);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+20)),r1(U+0));
}
B754a9e:{NFSU2_TR(0x754a9e);
__builtin_memmove((R+8),(R+0),4);
}
B754aa0:{NFSU2_TR(0x754aa0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B754aa3:{NFSU2_TR(0x754aa3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B754aa6:{NFSU2_TR(0x754aa6);
__builtin_memmove((R+4),(R+0),4);
}
B754aa8:{NFSU2_TR(0x754aa8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B754aab:{NFSU2_TR(0x754aab);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754aaf:{NFSU2_TR(0x754aaf);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B754ab2:{NFSU2_TR(0x754ab2);
__builtin_memmove((R+8),(R+0),4);
}
B754ab4:{NFSU2_TR(0x754ab4);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B754ab7:{NFSU2_TR(0x754ab7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B754aba:{NFSU2_TR(0x754aba);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B754abd:{NFSU2_TR(0x754abd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754abe:{NFSU2_TR(0x754abe);
__builtin_memmove((R+4),(R+0),4);
}
B754ac0:{NFSU2_TR(0x754ac0);
__builtin_memmove((R+8),(R+0),4);
}
B754ac2:{NFSU2_TR(0x754ac2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B754ac5:{NFSU2_TR(0x754ac5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B754ac8:{NFSU2_TR(0x754ac8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754ac9:{NFSU2_TR(0x754ac9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754acf:{NFSU2_TR(0x754acf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754ad0:{NFSU2_TR(0x754ad0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B754ad3:{NFSU2_TR(0x754ad3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B754ad6:{NFSU2_TR(0x754ad6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B754ad9:{NFSU2_TR(0x754ad9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B754adc:{NFSU2_TR(0x754adc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754ae1ull));
TAIL_STATIC(0x75a390u,75a);
}
B754ae1:L754ae1:{c.instructions+=4;NFSU2_TR(0x754ae1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754ae2:{NFSU2_TR(0x754ae2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754ae3:{NFSU2_TR(0x754ae3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754ae4:{NFSU2_TR(0x754ae4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754ae9ull));
TAIL_STATIC(0x75a410u,75a);
}
B754ae9:L754ae9:{c.instructions+=5;NFSU2_TR(0x754ae9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754aed:{NFSU2_TR(0x754aed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B754af0:{NFSU2_TR(0x754af0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x40746963ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754af5:{NFSU2_TR(0x754af5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B754af6:{NFSU2_TR(0x754af6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L754b01;}}
}
B754af8:L754af8:{c.instructions+=1;NFSU2_TR(0x754af8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8eull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B754b01:L754b01:{c.instructions+=2;NFSU2_TR(0x754b01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754b02:{NFSU2_TR(0x754b02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754b07ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754490u);}goto L754490;}
}
B754b07:L754b07:{c.instructions+=6;NFSU2_TR(0x754b07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754b0a:{NFSU2_TR(0x754b0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B754b0b:{NFSU2_TR(0x754b0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754b0c:{NFSU2_TR(0x754b0c);
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
B754b0e:{NFSU2_TR(0x754b0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B754b0f:{NFSU2_TR(0x754b0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754b10:L754b10:{c.instructions+=11;NFSU2_TR(0x754b10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754b11:{NFSU2_TR(0x754b11);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B754b15:{NFSU2_TR(0x754b15);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754b16:{NFSU2_TR(0x754b16);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B754b1a:{NFSU2_TR(0x754b1a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754b1b:{NFSU2_TR(0x754b1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B754b1f:{NFSU2_TR(0x754b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754b22:{NFSU2_TR(0x754b22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754b24:{NFSU2_TR(0x754b24);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754b25:{NFSU2_TR(0x754b25);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B754b29:{NFSU2_TR(0x754b29);
if(r1(R+518)){{goto L754b33;}}
}
B754b2b:L754b2b:{c.instructions+=3;NFSU2_TR(0x754b2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754b2e:{NFSU2_TR(0x754b2e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B754b31:{NFSU2_TR(0x754b31);
if(r1(R+518)){{goto L754b5b;}}
}
B754b33:L754b33:{c.instructions+=2;NFSU2_TR(0x754b33);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754b35:{NFSU2_TR(0x754b35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L754b43;}}
}
B754b37:L754b37:{c.instructions+=2;NFSU2_TR(0x754b37);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754b39:{NFSU2_TR(0x754b39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L754b43;}}
}
B754b3b:L754b3b:{c.instructions+=2;NFSU2_TR(0x754b3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754b3d:{NFSU2_TR(0x754b3d);
if(r1(R+518)){{goto L754bc3;}}
}
B754b43:L754b43:{c.instructions+=2;NFSU2_TR(0x754b43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754b44:{NFSU2_TR(0x754b44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754b49ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754490u);}goto L754490;}
}
B754b49:L754b49:{c.instructions+=4;NFSU2_TR(0x754b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754b4c:{NFSU2_TR(0x754b4c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754b4f:{NFSU2_TR(0x754b4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754b51:{NFSU2_TR(0x754b51);
if(r1(R+518)){{goto L754bc3;}}
}
B754b53:L754b53:{c.instructions+=3;NFSU2_TR(0x754b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754b56:{NFSU2_TR(0x754b56);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B754b59:{NFSU2_TR(0x754b59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L754bc3;}}
}
B754b5b:L754b5b:{c.instructions+=5;NFSU2_TR(0x754b5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754b5e:{NFSU2_TR(0x754b5e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff4ull))));
}
B754b61:{NFSU2_TR(0x754b61);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B754b64:{NFSU2_TR(0x754b64);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B754b67:{NFSU2_TR(0x754b67);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L754b70;}}
}
B754b69:L754b69:{c.instructions+=2;NFSU2_TR(0x754b69);
w4(R+24,u32(0x783fe5ull));
}
B754b6e:{NFSU2_TR(0x754b6e);
{goto L754b74;}
}
B754b70:L754b70:{c.instructions+=1;NFSU2_TR(0x754b70);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B754b74:L754b74:{c.instructions+=2;NFSU2_TR(0x754b74);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754b76:{NFSU2_TR(0x754b76);
if(r1(R+518)){{goto L754b97;}}
}
B754b78:L754b78:{c.instructions+=11;NFSU2_TR(0x754b78);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B754b7c:{NFSU2_TR(0x754b7c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B754b7e:{NFSU2_TR(0x754b7e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+9),(U+0),1);
}
B754b80:{NFSU2_TR(0x754b80);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B754b83:{NFSU2_TR(0x754b83);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B754b86:{NFSU2_TR(0x754b86);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+12))));
}
B754b88:{NFSU2_TR(0x754b88);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B754b8c:{NFSU2_TR(0x754b8c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B754b8f:{NFSU2_TR(0x754b8f);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+12))));
}
B754b91:{NFSU2_TR(0x754b91);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B754b95:{NFSU2_TR(0x754b95);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B754b97:L754b97:{c.instructions+=2;NFSU2_TR(0x754b97);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754b99:{NFSU2_TR(0x754b99);
if(r1(R+518)){{goto L754bb8;}}
}
B754b9b:L754b9b:{c.instructions+=10;NFSU2_TR(0x754b9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B754b9f:{NFSU2_TR(0x754b9f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B754ba1:{NFSU2_TR(0x754ba1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+9),(U+4),1);
}
B754ba4:{NFSU2_TR(0x754ba4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B754ba7:{NFSU2_TR(0x754ba7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B754bab:{NFSU2_TR(0x754bab);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B754bae:{NFSU2_TR(0x754bae);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B754bb0:{NFSU2_TR(0x754bb0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B754bb3:{NFSU2_TR(0x754bb3);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B754bb5:{NFSU2_TR(0x754bb5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+20)),r4(U+0));
}
B754bb8:L754bb8:{c.instructions+=2;NFSU2_TR(0x754bb8);
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
B754bba:{NFSU2_TR(0x754bba);
if(r1(R+518)){{goto L754bc6;}}
}
B754bbc:L754bbc:{c.instructions+=6;NFSU2_TR(0x754bbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B754bbd:{NFSU2_TR(0x754bbd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B754bbf:{NFSU2_TR(0x754bbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754bc0:{NFSU2_TR(0x754bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B754bc1:{NFSU2_TR(0x754bc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B754bc2:{NFSU2_TR(0x754bc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754bc3:L754bc3:{c.instructions+=1;NFSU2_TR(0x754bc3);
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
B754bc6:L754bc6:{c.instructions+=5;NFSU2_TR(0x754bc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B754bc7:{NFSU2_TR(0x754bc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754bc8:{NFSU2_TR(0x754bc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B754bc9:{NFSU2_TR(0x754bc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B754bca:{NFSU2_TR(0x754bca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754bd0:L754bd0:{c.instructions+=10;NFSU2_TR(0x754bd0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754bd4:{NFSU2_TR(0x754bd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754bd8:{NFSU2_TR(0x754bd8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754bd9:{NFSU2_TR(0x754bd9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754bda:{NFSU2_TR(0x754bda);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B754bde:{NFSU2_TR(0x754bde);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754be0:{NFSU2_TR(0x754be0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754be1:{NFSU2_TR(0x754be1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754be2:{NFSU2_TR(0x754be2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754be3:{NFSU2_TR(0x754be3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754be8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754b10u);}goto L754b10;}
}
B754be8:L754be8:{c.instructions+=4;NFSU2_TR(0x754be8);
__builtin_memmove((R+12),(R+0),4);
}
B754bea:{NFSU2_TR(0x754bea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B754bed:{NFSU2_TR(0x754bed);
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
B754bef:{NFSU2_TR(0x754bef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L754c2e;}}
}
B754bf1:L754bf1:{c.instructions+=3;NFSU2_TR(0x754bf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754bf5:{NFSU2_TR(0x754bf5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B754bf7:{NFSU2_TR(0x754bf7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L754bfb;}}
}
B754bf9:L754bf9:{c.instructions+=1;NFSU2_TR(0x754bf9);
__builtin_memmove((R+4),(R+12),4);
}
B754bfb:L754bfb:{c.instructions+=4;NFSU2_TR(0x754bfb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754bfc:{NFSU2_TR(0x754bfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B754c00:{NFSU2_TR(0x754c00);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754c02:{NFSU2_TR(0x754c02);
if(r1(R+518)){{goto L754c1a;}}
}
B754c04:L754c04:{c.instructions+=5;NFSU2_TR(0x754c04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754c05:{NFSU2_TR(0x754c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B754c08:{NFSU2_TR(0x754c08);
__builtin_memmove((R+8),(R+4),4);
}
B754c0a:{NFSU2_TR(0x754c0a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B754c0d:{NFSU2_TR(0x754c0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B754c10:L754c10:{c.instructions+=1;NFSU2_TR(0x754c10);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L754c12;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754c10u);}goto L754c10;}
}
B754c12:L754c12:{c.instructions+=2;NFSU2_TR(0x754c12);
__builtin_memmove((R+4),(R+8),4);
}
B754c14:{NFSU2_TR(0x754c14);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B754c17:L754c17:{c.instructions+=1;NFSU2_TR(0x754c17);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L754c19;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754c17u);}goto L754c17;}
}
B754c19:L754c19:{c.instructions+=1;NFSU2_TR(0x754c19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754c1a:L754c1a:{c.instructions+=3;NFSU2_TR(0x754c1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754c1d:{NFSU2_TR(0x754c1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754c1e:{NFSU2_TR(0x754c1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754c23ull));
TAIL_STATIC(0x598ec0u,598);
}
B754c23:L754c23:{c.instructions+=3;NFSU2_TR(0x754c23);
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
B754c26:{NFSU2_TR(0x754c26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B754c2d:{NFSU2_TR(0x754c2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B754c2e:L754c2e:{c.instructions+=4;NFSU2_TR(0x754c2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B754c2f:{NFSU2_TR(0x754c2f);
__builtin_memmove((R+0),(R+12),4);
}
B754c31:{NFSU2_TR(0x754c31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B754c32:{NFSU2_TR(0x754c32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754c40:L754c40:{c.instructions+=1;NFSU2_TR(0x754c40);
TAIL_STATIC(0x74b730u,74b);
}
B754c50:L754c50:{c.instructions+=10;NFSU2_TR(0x754c50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x58ull))));
}
B754c53:{NFSU2_TR(0x754c53);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B754c58:{NFSU2_TR(0x754c58);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754c59:{NFSU2_TR(0x754c59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754c5a:{NFSU2_TR(0x754c5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B754c5e:{NFSU2_TR(0x754c5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754c62:{NFSU2_TR(0x754c62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B754c64:{NFSU2_TR(0x754c64);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B754c66:{NFSU2_TR(0x754c66);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B754c68:{NFSU2_TR(0x754c68);
if(r1(R+518)){{goto L754c7c;}}
}
B754c6a:L754c6a:{c.instructions+=5;NFSU2_TR(0x754c6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754c6b:{NFSU2_TR(0x754c6b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B754c6e:{NFSU2_TR(0x754c6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B754c6f:{NFSU2_TR(0x754c6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754c73:{NFSU2_TR(0x754c73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754c78ull));
TAIL_STATIC(0x76115eu,761);
}
B754c78:L754c78:{c.instructions+=2;NFSU2_TR(0x754c78);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B754c7b:{NFSU2_TR(0x754c7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754c7c:L754c7c:{c.instructions+=3;NFSU2_TR(0x754c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754c7f:{NFSU2_TR(0x754c7f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B754c81:{NFSU2_TR(0x754c81);
if(r1(R+518)){{goto L754c8f;}}
}
B754c83:L754c83:{c.instructions+=2;NFSU2_TR(0x754c83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754c84:{NFSU2_TR(0x754c84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754c89ull));
TAIL_STATIC(0x598ec0u,598);
}
B754c89:L754c89:{c.instructions+=2;NFSU2_TR(0x754c89);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754c8c:{NFSU2_TR(0x754c8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754c8f:L754c8f:{c.instructions+=11;NFSU2_TR(0x754c8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B754c92:{NFSU2_TR(0x754c92);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B754c94:{NFSU2_TR(0x754c94);
__builtin_memmove((R+8),(R+0),4);
}
B754c96:{NFSU2_TR(0x754c96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B754c98:{NFSU2_TR(0x754c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754c9b:{NFSU2_TR(0x754c9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754c9e:{NFSU2_TR(0x754c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754ca1:{NFSU2_TR(0x754ca1);
u8 U[2];
w2(U+0,u16(0x2ull));
s2(u32(r4(R+0)),r2(U+0));
}
B754ca6:{NFSU2_TR(0x754ca6);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754caa:{NFSU2_TR(0x754caa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754cab:{NFSU2_TR(0x754cab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754cb0ull));
TAIL_STATIC(0x7430c0u,743);
}
B754cb0:L754cb0:{c.instructions+=4;NFSU2_TR(0x754cb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754cb4:{NFSU2_TR(0x754cb4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754cb5:{NFSU2_TR(0x754cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754cb8:{NFSU2_TR(0x754cb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754cbdull));
TAIL_STATIC(0x7430a0u,743);
}
B754cbd:L754cbd:{c.instructions+=5;NFSU2_TR(0x754cbd);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B754cc1:{NFSU2_TR(0x754cc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754cc5:{NFSU2_TR(0x754cc5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B754cc8:{NFSU2_TR(0x754cc8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B754cca:{NFSU2_TR(0x754cca);
if(r1(R+518)){{goto L754cde;}}
}
B754ccc:L754ccc:{c.instructions+=5;NFSU2_TR(0x754ccc);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754cce:{NFSU2_TR(0x754cce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754ccf:{NFSU2_TR(0x754ccf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+8),(U+0),4);
}
B754cd2:{NFSU2_TR(0x754cd2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754cd3:{NFSU2_TR(0x754cd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754cd8ull));
TAIL_STATIC(0x75c840u,75c);
}
B754cd8:L754cd8:{c.instructions+=2;NFSU2_TR(0x754cd8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B754cdb:{NFSU2_TR(0x754cdb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5bull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B754cde:L754cde:{c.instructions+=5;NFSU2_TR(0x754cde);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B754ce5:{NFSU2_TR(0x754ce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B754cec:{NFSU2_TR(0x754cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754cef:{NFSU2_TR(0x754cef);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B754cf6:{NFSU2_TR(0x754cf6);
if(r1(R+518)){{goto L754d54;}}
}
B754cf8:L754cf8:{c.instructions+=7;NFSU2_TR(0x754cf8);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B754cfc:{NFSU2_TR(0x754cfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754cfd:{NFSU2_TR(0x754cfd);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B754d01:{NFSU2_TR(0x754d01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754d02:{NFSU2_TR(0x754d02);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+8),(U+0),4);
}
B754d08:{NFSU2_TR(0x754d08);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754d09:{NFSU2_TR(0x754d09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754d0eull));
TAIL_STATIC(0x75a1d0u,75a);
}
B754d0e:L754d0e:{c.instructions+=3;NFSU2_TR(0x754d0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B754d11:{NFSU2_TR(0x754d11);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754d13:{NFSU2_TR(0x754d13);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L754d4d;}}
}
B754d15:L754d15:{c.instructions+=7;NFSU2_TR(0x754d15);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754d17:{NFSU2_TR(0x754d17);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B754d1b:{NFSU2_TR(0x754d1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754d1c:{NFSU2_TR(0x754d1c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754d1d:{NFSU2_TR(0x754d1d);
u8 U[4];
w4(U+0,u32(0x3f746963ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754d22:{NFSU2_TR(0x754d22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754d23:{NFSU2_TR(0x754d23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754d28ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7549f0u);}goto L7549f0;}
}
B754d28:L754d28:{c.instructions+=5;NFSU2_TR(0x754d28);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B754d2c:{NFSU2_TR(0x754d2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754d2d:{NFSU2_TR(0x754d2d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
}
B754d33:{NFSU2_TR(0x754d33);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754d34:{NFSU2_TR(0x754d34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754d39ull));
TAIL_STATIC(0x75a210u,75a);
}
B754d39:L754d39:{c.instructions+=6;NFSU2_TR(0x754d39);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B754d3c:{NFSU2_TR(0x754d3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754d3d:{NFSU2_TR(0x754d3d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B754d3f:{NFSU2_TR(0x754d3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B754d40:{NFSU2_TR(0x754d40);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754d44:{NFSU2_TR(0x754d44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754d49ull));
TAIL_STATIC(0x76115eu,761);
}
B754d49:L754d49:{c.instructions+=2;NFSU2_TR(0x754d49);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B754d4c:{NFSU2_TR(0x754d4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754d4d:L754d4d:{c.instructions+=1;NFSU2_TR(0x754d4d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8eull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B754d54:L754d54:{c.instructions+=5;NFSU2_TR(0x754d54);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754d58:{NFSU2_TR(0x754d58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754d59:{NFSU2_TR(0x754d59);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B754d5b:{NFSU2_TR(0x754d5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B754d5c:{NFSU2_TR(0x754d5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754d61ull));
TAIL_STATIC(0x76115eu,761);
}
B754d61:L754d61:{c.instructions+=2;NFSU2_TR(0x754d61);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B754d64:{NFSU2_TR(0x754d64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754d70:L754d70:{c.instructions+=5;NFSU2_TR(0x754d70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754d71:{NFSU2_TR(0x754d71);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B754d75:{NFSU2_TR(0x754d75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754d78:{NFSU2_TR(0x754d78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754d7a:{NFSU2_TR(0x754d7a);
if(r1(R+518)){{goto L754d98;}}
}
B754d7c:L754d7c:{c.instructions+=1;NFSU2_TR(0x754d7c);
__builtin_memmove((R+16),(R+16),4);
}
B754d80:L754d80:{c.instructions+=5;NFSU2_TR(0x754d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754d83:{NFSU2_TR(0x754d83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B754d85:{NFSU2_TR(0x754d85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754d86:{NFSU2_TR(0x754d86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754d89:{NFSU2_TR(0x754d89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754d8eull));
TAIL_STATIC(0x598ec0u,598);
}
B754d8e:L754d8e:{c.instructions+=4;NFSU2_TR(0x754d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754d91:{NFSU2_TR(0x754d91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754d94:{NFSU2_TR(0x754d94);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754d96:{NFSU2_TR(0x754d96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754d80u);}goto L754d80;}}
}
B754d98:L754d98:{c.instructions+=3;NFSU2_TR(0x754d98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B754d9b:{NFSU2_TR(0x754d9b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754d9c:{NFSU2_TR(0x754d9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754da1ull));
TAIL_STATIC(0x598ec0u,598);
}
B754da1:L754da1:{c.instructions+=2;NFSU2_TR(0x754da1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754da2:{NFSU2_TR(0x754da2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754da7ull));
TAIL_STATIC(0x598ec0u,598);
}
B754da7:L754da7:{c.instructions+=3;NFSU2_TR(0x754da7);
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
B754daa:{NFSU2_TR(0x754daa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754dab:{NFSU2_TR(0x754dab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754db0:L754db0:{c.instructions+=5;NFSU2_TR(0x754db0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754db1:{NFSU2_TR(0x754db1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754db2:{NFSU2_TR(0x754db2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B754db6:{NFSU2_TR(0x754db6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B754db9:{NFSU2_TR(0x754db9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L754dc0;}}
}
B754dbb:L754dbb:{c.instructions+=1;NFSU2_TR(0x754dbb);
w4(R+28,u32(0x1ull));
}
B754dc0:L754dc0:{c.instructions+=5;NFSU2_TR(0x754dc0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B754dc1:{NFSU2_TR(0x754dc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B754dc4:{NFSU2_TR(0x754dc4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B754dc7:{NFSU2_TR(0x754dc7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754dc8:{NFSU2_TR(0x754dc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754dcdull));
TAIL_STATIC(0x5836d0u,583);
}
B754dcd:L754dcd:{c.instructions+=3;NFSU2_TR(0x754dcd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754dd0:{NFSU2_TR(0x754dd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754dd2:{NFSU2_TR(0x754dd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L754dda;}}
}
B754dd4:L754dd4:{c.instructions+=4;NFSU2_TR(0x754dd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B754dd5:{NFSU2_TR(0x754dd5);
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
B754dd8:{NFSU2_TR(0x754dd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754dd9:{NFSU2_TR(0x754dd9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754dda:L754dda:{c.instructions+=8;NFSU2_TR(0x754dda);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B754dde:{NFSU2_TR(0x754dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754de1:{NFSU2_TR(0x754de1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B754de3:{NFSU2_TR(0x754de3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B754de6:{NFSU2_TR(0x754de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754de9:{NFSU2_TR(0x754de9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B754deb:{NFSU2_TR(0x754deb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B754ded:{NFSU2_TR(0x754ded);
if(r1(R+518)){{goto L754dff;}}
}
B754def:L754def:{c.instructions+=1;NFSU2_TR(0x754def);
}
B754df0:L754df0:{c.instructions+=6;NFSU2_TR(0x754df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B754df3:{NFSU2_TR(0x754df3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B754df5:{NFSU2_TR(0x754df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754df8:{NFSU2_TR(0x754df8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B754dfb:{NFSU2_TR(0x754dfb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B754dfd:{NFSU2_TR(0x754dfd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754df0u);}goto L754df0;}}
}
B754dff:L754dff:{c.instructions+=4;NFSU2_TR(0x754dff);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B754e02:{NFSU2_TR(0x754e02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B754e03:{NFSU2_TR(0x754e03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754e04:{NFSU2_TR(0x754e04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754e10:L754e10:{c.instructions+=3;NFSU2_TR(0x754e10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754e14:{NFSU2_TR(0x754e14);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B754e17:{NFSU2_TR(0x754e17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L754e1c;}}
}
B754e19:L754e19:{c.instructions+=2;NFSU2_TR(0x754e19);
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
B754e1b:{NFSU2_TR(0x754e1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754e1c:L754e1c:{c.instructions+=6;NFSU2_TR(0x754e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754e1f:{NFSU2_TR(0x754e1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754e20:{NFSU2_TR(0x754e20);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754e21:{NFSU2_TR(0x754e21);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B754e24:{NFSU2_TR(0x754e24);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+512,u8((r4(U+12))<(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B754e28:{NFSU2_TR(0x754e28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L754e43;}}
}
B754e2a:L754e2a:{c.instructions+=2;NFSU2_TR(0x754e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B754e2d:{NFSU2_TR(0x754e2d);
__builtin_memmove((R+4),(R+4),4);
}
B754e30:L754e30:{c.instructions+=8;NFSU2_TR(0x754e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754e33:{NFSU2_TR(0x754e33);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B754e34:{NFSU2_TR(0x754e34);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B754e35:{NFSU2_TR(0x754e35);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x754e35);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x754e35);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B754e37:{NFSU2_TR(0x754e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754e3a:{NFSU2_TR(0x754e3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754e3d:{NFSU2_TR(0x754e3d);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+512,u8((r4(U+12))<(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B754e41:{NFSU2_TR(0x754e41);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754e30u);}goto L754e30;}}
}
B754e43:L754e43:{c.instructions+=15;NFSU2_TR(0x754e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B754e46:{NFSU2_TR(0x754e46);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B754e49:{NFSU2_TR(0x754e49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B754e4b:{NFSU2_TR(0x754e4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B754e4e:{NFSU2_TR(0x754e4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B754e50:{NFSU2_TR(0x754e50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B754e53:{NFSU2_TR(0x754e53);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B754e55:{NFSU2_TR(0x754e55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B754e57:{NFSU2_TR(0x754e57);
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
B754e58:{NFSU2_TR(0x754e58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B754e59:{NFSU2_TR(0x754e59);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754e5c:{NFSU2_TR(0x754e5c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B754e5e:{NFSU2_TR(0x754e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754e61:{NFSU2_TR(0x754e61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754e62:{NFSU2_TR(0x754e62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754e70:L754e70:{c.instructions+=5;NFSU2_TR(0x754e70);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B754e72:{NFSU2_TR(0x754e72);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B754e74:{NFSU2_TR(0x754e74);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B754e76:{NFSU2_TR(0x754e76);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B754e78:{NFSU2_TR(0x754e78);
if(r1(R+518)){{goto L754e9a;}}
}
B754e7a:L754e7a:{c.instructions+=1;NFSU2_TR(0x754e7a);
__builtin_memmove((R+12),(R+12),4);
}
B754e80:L754e80:{c.instructions+=2;NFSU2_TR(0x754e80);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B754e83:{NFSU2_TR(0x754e83);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L754e92;}}
}
B754e85:L754e85:{c.instructions+=4;NFSU2_TR(0x754e85);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x83ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B754e8b:{NFSU2_TR(0x754e8b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x5full))));
}
B754e8e:{NFSU2_TR(0x754e8e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B754e90:{NFSU2_TR(0x754e90);
__builtin_memmove((R+0),(R+4),4);
}
B754e92:L754e92:{c.instructions+=4;NFSU2_TR(0x754e92);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B754e95:{NFSU2_TR(0x754e95);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B754e96:{NFSU2_TR(0x754e96);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B754e98:{NFSU2_TR(0x754e98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754e80u);}goto L754e80;}}
}
B754e9a:L754e9a:{c.instructions+=6;NFSU2_TR(0x754e9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754e9e:{NFSU2_TR(0x754e9e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B754ea3:{NFSU2_TR(0x754ea3);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B754ea4:{NFSU2_TR(0x754ea4);
u8 U[64];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x754ea4);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x754ea4);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B754ea7:{NFSU2_TR(0x754ea7);
__builtin_memmove((R+0),(R+8),4);
}
B754ea9:{NFSU2_TR(0x754ea9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754eb0:L754eb0:{c.instructions+=5;NFSU2_TR(0x754eb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B754eb4:{NFSU2_TR(0x754eb4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754eb5:{NFSU2_TR(0x754eb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B754eb9:{NFSU2_TR(0x754eb9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754eba:{NFSU2_TR(0x754eba);
__builtin_memmove((R+12),(R+12),4);
}
B754ec0:L754ec0:{c.instructions+=5;NFSU2_TR(0x754ec0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B754ec3:{NFSU2_TR(0x754ec3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d2fe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B754ec9:{NFSU2_TR(0x754ec9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B754eca:{NFSU2_TR(0x754eca);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B754ecd:{NFSU2_TR(0x754ecd);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754ec0u);}goto L754ec0;}}
}
B754ecf:L754ecf:{c.instructions+=1;NFSU2_TR(0x754ecf);
}
B754ed0:L754ed0:{c.instructions+=5;NFSU2_TR(0x754ed0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(r1(U+0)));
}
B754ed3:{NFSU2_TR(0x754ed3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d2fe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B754ed9:{NFSU2_TR(0x754ed9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B754eda:{NFSU2_TR(0x754eda);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B754edc:{NFSU2_TR(0x754edc);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754ed0u);}goto L754ed0;}}
}
B754ede:L754ede:{c.instructions+=4;NFSU2_TR(0x754ede);
w4(R+28,u32(r1(R+0)));
}
B754ee1:{NFSU2_TR(0x754ee1);
w4(R+0,u32(r1(R+4)));
}
B754ee4:{NFSU2_TR(0x754ee4);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B754ee6:{NFSU2_TR(0x754ee6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L754eee;}}
}
B754ee8:L754ee8:{c.instructions+=2;NFSU2_TR(0x754ee8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B754eea:{NFSU2_TR(0x754eea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754ec0u);}goto L754ec0;}}
}
B754eec:L754eec:{c.instructions+=1;NFSU2_TR(0x754eec);
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
B754eee:L754eee:{c.instructions+=3;NFSU2_TR(0x754eee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B754eef:{NFSU2_TR(0x754eef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754ef0:{NFSU2_TR(0x754ef0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754f00:L754f00:{c.instructions+=8;NFSU2_TR(0x754f00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754f01:{NFSU2_TR(0x754f01);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B754f05:{NFSU2_TR(0x754f05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754f06:{NFSU2_TR(0x754f06);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B754f0a:{NFSU2_TR(0x754f0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754f0b:{NFSU2_TR(0x754f0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754f0c:{NFSU2_TR(0x754f0c);
__builtin_memmove((R+8),(R+12),4);
}
B754f0e:{NFSU2_TR(0x754f0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754f13ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754e70u);}goto L754e70;}
}
B754f13:L754f13:{c.instructions+=5;NFSU2_TR(0x754f13);
__builtin_memmove((R+28),(R+0),4);
}
B754f15:{NFSU2_TR(0x754f15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754f18:{NFSU2_TR(0x754f18);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754f1b:{NFSU2_TR(0x754f1b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754f1d:{NFSU2_TR(0x754f1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L754f3f;}}
}
B754f1f:L754f1f:{c.instructions+=8;NFSU2_TR(0x754f1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B754f21:{NFSU2_TR(0x754f21);
u8 U[12];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B754f25:{NFSU2_TR(0x754f25);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B754f26:{NFSU2_TR(0x754f26);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B754f28:{NFSU2_TR(0x754f28);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B754f2a:{NFSU2_TR(0x754f2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754f2b:{NFSU2_TR(0x754f2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754f2c:{NFSU2_TR(0x754f2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754f31ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754db0u);}goto L754db0;}
}
B754f31:L754f31:{c.instructions+=3;NFSU2_TR(0x754f31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B754f34:{NFSU2_TR(0x754f34);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754f36:{NFSU2_TR(0x754f36);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L754f3f;}}
}
B754f38:L754f38:{c.instructions+=5;NFSU2_TR(0x754f38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B754f39:{NFSU2_TR(0x754f39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754f3a:{NFSU2_TR(0x754f3a);
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
B754f3d:{NFSU2_TR(0x754f3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B754f3e:{NFSU2_TR(0x754f3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754f3f:L754f3f:{c.instructions+=19;NFSU2_TR(0x754f3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754f42:{NFSU2_TR(0x754f42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B754f44:{NFSU2_TR(0x754f44);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B754f48:{NFSU2_TR(0x754f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754f4b:{NFSU2_TR(0x754f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754f4e:{NFSU2_TR(0x754f4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B754f51:{NFSU2_TR(0x754f51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754f54:{NFSU2_TR(0x754f54);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B754f57:{NFSU2_TR(0x754f57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B754f59:{NFSU2_TR(0x754f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754f5c:{NFSU2_TR(0x754f5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B754f5f:{NFSU2_TR(0x754f5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B754f61:{NFSU2_TR(0x754f61);
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
B754f62:{NFSU2_TR(0x754f62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B754f63:{NFSU2_TR(0x754f63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B754f65:{NFSU2_TR(0x754f65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754f66:{NFSU2_TR(0x754f66);
w4(R+0,u32(0x1ull));
}
B754f6b:{NFSU2_TR(0x754f6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B754f6c:{NFSU2_TR(0x754f6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754f70:L754f70:{c.instructions+=8;NFSU2_TR(0x754f70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754f71:{NFSU2_TR(0x754f71);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B754f75:{NFSU2_TR(0x754f75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754f76:{NFSU2_TR(0x754f76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754f77:{NFSU2_TR(0x754f77);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B754f7b:{NFSU2_TR(0x754f7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754f7c:{NFSU2_TR(0x754f7c);
__builtin_memmove((R+8),(R+12),4);
}
B754f7e:{NFSU2_TR(0x754f7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754f83ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754e70u);}goto L754e70;}
}
B754f83:L754f83:{c.instructions+=5;NFSU2_TR(0x754f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754f86:{NFSU2_TR(0x754f86);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B754f89:{NFSU2_TR(0x754f89);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754f8c:{NFSU2_TR(0x754f8c);
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
B754f8e:{NFSU2_TR(0x754f8e);
if(r1(R+518)){{goto L754fa5;}}
}
B754f90:L754f90:{c.instructions+=4;NFSU2_TR(0x754f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B754f93:{NFSU2_TR(0x754f93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754f94:{NFSU2_TR(0x754f94);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754f95:{NFSU2_TR(0x754f95);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754f98ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B754f98:L754f98:{c.instructions+=3;NFSU2_TR(0x754f98);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B754f9b:{NFSU2_TR(0x754f9b);
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
B754f9d:{NFSU2_TR(0x754f9d);
if(r1(R+518)){{goto L754fab;}}
}
B754f9f:L754f9f:{c.instructions+=3;NFSU2_TR(0x754f9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B754fa1:{NFSU2_TR(0x754fa1);
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
B754fa3:{NFSU2_TR(0x754fa3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754f90u);}goto L754f90;}}
}
B754fa5:L754fa5:{c.instructions+=5;NFSU2_TR(0x754fa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B754fa6:{NFSU2_TR(0x754fa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754fa7:{NFSU2_TR(0x754fa7);
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
B754fa9:{NFSU2_TR(0x754fa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B754faa:{NFSU2_TR(0x754faa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754fab:L754fab:{c.instructions+=5;NFSU2_TR(0x754fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754fae:{NFSU2_TR(0x754fae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B754faf:{NFSU2_TR(0x754faf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754fb0:{NFSU2_TR(0x754fb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B754fb1:{NFSU2_TR(0x754fb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B754fc0:L754fc0:{c.instructions+=9;NFSU2_TR(0x754fc0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754fc1:{NFSU2_TR(0x754fc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B754fc5:{NFSU2_TR(0x754fc5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754fc6:{NFSU2_TR(0x754fc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B754fca:{NFSU2_TR(0x754fca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754fcb:{NFSU2_TR(0x754fcb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754fcc:{NFSU2_TR(0x754fcc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754fcd:{NFSU2_TR(0x754fcd);
__builtin_memmove((R+8),(R+20),4);
}
B754fcf:{NFSU2_TR(0x754fcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754fd4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754e70u);}goto L754e70;}
}
B754fd4:L754fd4:{c.instructions+=6;NFSU2_TR(0x754fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B754fd7:{NFSU2_TR(0x754fd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B754fda:{NFSU2_TR(0x754fda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B754fdd:{NFSU2_TR(0x754fdd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B754fe0:{NFSU2_TR(0x754fe0);
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
B754fe2:{NFSU2_TR(0x754fe2);
if(r1(R+518)){{goto L754ffd;}}
}
B754fe4:L754fe4:{c.instructions+=5;NFSU2_TR(0x754fe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B754fe6:{NFSU2_TR(0x754fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B754fe9:{NFSU2_TR(0x754fe9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754fea:{NFSU2_TR(0x754fea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B754feb:{NFSU2_TR(0x754feb);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x754feeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B754fee:L754fee:{c.instructions+=3;NFSU2_TR(0x754fee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B754ff1:{NFSU2_TR(0x754ff1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B754ff3:{NFSU2_TR(0x754ff3);
if(r1(R+518)){TAIL_STATIC(0x755004u,755);}
}
B754ff5:L754ff5:{c.instructions+=4;NFSU2_TR(0x754ff5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B754ff7:{NFSU2_TR(0x754ff7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B754ff9:{NFSU2_TR(0x754ff9);
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
B754ffb:{NFSU2_TR(0x754ffb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x754fe4u);}goto L754fe4;}}
}
B754ffd:L754ffd:{c.instructions+=3;NFSU2_TR(0x754ffd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B754ffe:{NFSU2_TR(0x754ffe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B754fff:{NFSU2_TR(0x754fff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
TAIL_STATIC(0x755000u,755);
}
XIT:NFSU2_TR_EXIT(0x754,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
