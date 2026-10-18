#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4a5(u8* __restrict R,Cpu& c);
u32 body_4c1(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_53a(u8* __restrict R,Cpu& c);
u32 body_547(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_556(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55a(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x559,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x559,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_559(u8* __restrict R,Cpu& c);
u32 page_559(Cpu& c){return body_559(c.regs.data(),c);}
__attribute__((noinline)) u32 body_559(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x559004:goto L559004;
case 0x559009:c.instructions+=1;goto B559009;
case 0x55900e:goto L55900e;
case 0x559013:c.instructions+=1;goto B559013;
case 0x559018:goto L559018;
case 0x55901b:c.instructions+=2;goto B55901b;
case 0x55901d:c.instructions+=1;goto B55901d;
case 0x55901f:goto L55901f;
case 0x559024:c.instructions+=2;goto B559024;
case 0x559026:c.instructions+=1;goto B559026;
case 0x55902b:goto L55902b;
case 0x55902d:c.instructions+=1;goto B55902d;
case 0x55902f:goto L55902f;
case 0x559034:c.instructions+=2;goto B559034;
case 0x559036:c.instructions+=1;goto B559036;
case 0x559038:goto L559038;
case 0x55903b:c.instructions+=3;goto B55903b;
case 0x559040:c.instructions+=2;goto B559040;
case 0x559045:c.instructions+=1;goto B559045;
case 0x55904a:goto L55904a;
case 0x55904c:c.instructions+=2;goto B55904c;
case 0x55904e:c.instructions+=1;goto B55904e;
case 0x559050:goto L559050;
case 0x559051:c.instructions+=3;goto B559051;
case 0x559054:c.instructions+=2;goto B559054;
case 0x559056:c.instructions+=1;goto B559056;
case 0x559058:goto L559058;
case 0x559060:goto L559060;
case 0x559065:c.instructions+=1;goto B559065;
case 0x55906a:goto L55906a;
case 0x55906d:c.instructions+=3;goto B55906d;
case 0x559070:c.instructions+=2;goto B559070;
case 0x559072:c.instructions+=1;goto B559072;
case 0x559074:goto L559074;
case 0x559077:c.instructions+=2;goto B559077;
case 0x559079:c.instructions+=1;goto B559079;
case 0x55907b:goto L55907b;
case 0x55907d:goto L55907d;
case 0x55907f:c.instructions+=1;goto B55907f;
case 0x559081:goto L559081;
case 0x559084:c.instructions+=1;goto B559084;
case 0x559086:goto L559086;
case 0x559088:c.instructions+=2;goto B559088;
case 0x55908b:c.instructions+=1;goto B55908b;
case 0x559090:goto L559090;
case 0x559093:c.instructions+=1;goto B559093;
case 0x559096:goto L559096;
case 0x559099:goto L559099;
case 0x55909a:goto L55909a;
case 0x55909d:c.instructions+=3;goto B55909d;
case 0x5590a2:c.instructions+=2;goto B5590a2;
case 0x5590a3:c.instructions+=1;goto B5590a3;
case 0x5590a5:goto L5590a5;
case 0x5590aa:c.instructions+=1;goto B5590aa;
case 0x5590af:goto L5590af;
case 0x5590b1:c.instructions+=1;goto B5590b1;
case 0x5590b3:goto L5590b3;
case 0x5590b8:c.instructions+=1;goto B5590b8;
case 0x5590bd:goto L5590bd;
case 0x5590be:c.instructions+=6;goto B5590be;
case 0x5590c0:c.instructions+=5;goto B5590c0;
case 0x5590c2:c.instructions+=4;goto B5590c2;
case 0x5590c7:c.instructions+=3;goto B5590c7;
case 0x5590cc:c.instructions+=2;goto B5590cc;
case 0x5590d1:c.instructions+=1;goto B5590d1;
case 0x5590d6:goto L5590d6;
case 0x5590d9:c.instructions+=1;goto B5590d9;
case 0x5590de:goto L5590de;
case 0x5590e3:c.instructions+=1;goto B5590e3;
case 0x5590e5:goto L5590e5;
case 0x5590ea:c.instructions+=1;goto B5590ea;
case 0x5590ef:goto L5590ef;
case 0x5590f1:c.instructions+=1;goto B5590f1;
case 0x5590f3:goto L5590f3;
case 0x5590f8:c.instructions+=1;goto B5590f8;
case 0x5590fd:goto L5590fd;
case 0x5590fe:c.instructions+=6;goto B5590fe;
case 0x559100:c.instructions+=5;goto B559100;
case 0x559102:c.instructions+=4;goto B559102;
case 0x559107:c.instructions+=3;goto B559107;
case 0x55910c:c.instructions+=2;goto B55910c;
case 0x559111:c.instructions+=1;goto B559111;
case 0x559116:goto L559116;
case 0x559119:c.instructions+=1;goto B559119;
case 0x55911e:goto L55911e;
case 0x559123:c.instructions+=1;goto B559123;
case 0x559125:goto L559125;
case 0x55912a:c.instructions+=1;goto B55912a;
case 0x55912f:goto L55912f;
case 0x559131:c.instructions+=1;goto B559131;
case 0x559133:goto L559133;
case 0x559138:c.instructions+=1;goto B559138;
case 0x55913d:goto L55913d;
case 0x55913e:c.instructions+=6;goto B55913e;
case 0x559140:c.instructions+=5;goto B559140;
case 0x559142:c.instructions+=4;goto B559142;
case 0x559147:c.instructions+=3;goto B559147;
case 0x55914c:c.instructions+=2;goto B55914c;
case 0x559151:c.instructions+=1;goto B559151;
case 0x559156:goto L559156;
case 0x559159:c.instructions+=1;goto B559159;
case 0x55915b:goto L55915b;
case 0x559160:c.instructions+=1;goto B559160;
case 0x559162:goto L559162;
case 0x559167:c.instructions+=1;goto B559167;
case 0x559169:goto L559169;
case 0x55916e:c.instructions+=1;goto B55916e;
case 0x559170:goto L559170;
case 0x559175:c.instructions+=1;goto B559175;
case 0x55917a:goto L55917a;
case 0x55917b:c.instructions+=5;goto B55917b;
case 0x55917d:c.instructions+=4;goto B55917d;
case 0x559182:c.instructions+=3;goto B559182;
case 0x559187:c.instructions+=2;goto B559187;
case 0x55918c:c.instructions+=1;goto B55918c;
case 0x559191:goto L559191;
case 0x559194:c.instructions+=1;goto B559194;
case 0x559196:goto L559196;
case 0x55919b:goto L55919b;
case 0x5591a0:goto L5591a0;
case 0x5591a1:c.instructions+=6;goto B5591a1;
case 0x5591a3:c.instructions+=5;goto B5591a3;
case 0x5591a5:c.instructions+=4;goto B5591a5;
case 0x5591aa:c.instructions+=3;goto B5591aa;
case 0x5591af:c.instructions+=2;goto B5591af;
case 0x5591b4:c.instructions+=1;goto B5591b4;
case 0x5591b9:goto L5591b9;
case 0x5591bc:goto L5591bc;
case 0x5591c2:c.instructions+=6;goto B5591c2;
case 0x5591c3:c.instructions+=5;goto B5591c3;
case 0x5591c9:c.instructions+=4;goto B5591c9;
case 0x5591cf:c.instructions+=3;goto B5591cf;
case 0x5591d9:c.instructions+=2;goto B5591d9;
case 0x5591da:c.instructions+=1;goto B5591da;
case 0x5591e0:goto L5591e0;
case 0x5591e2:c.instructions+=7;goto B5591e2;
case 0x5591e7:c.instructions+=6;goto B5591e7;
case 0x5591ed:c.instructions+=5;goto B5591ed;
case 0x5591ee:c.instructions+=4;goto B5591ee;
case 0x5591f5:c.instructions+=3;goto B5591f5;
case 0x5591f6:c.instructions+=2;goto B5591f6;
case 0x5591fb:c.instructions+=1;goto B5591fb;
case 0x559200:goto L559200;
case 0x559203:c.instructions+=4;goto B559203;
case 0x559207:c.instructions+=3;goto B559207;
case 0x559209:c.instructions+=2;goto B559209;
case 0x559211:c.instructions+=1;goto B559211;
case 0x559213:goto L559213;
case 0x559217:c.instructions+=3;goto B559217;
case 0x559218:c.instructions+=2;goto B559218;
case 0x55921a:c.instructions+=1;goto B55921a;
case 0x55921f:goto L55921f;
case 0x559223:c.instructions+=3;goto B559223;
case 0x55922a:c.instructions+=2;goto B55922a;
case 0x55922d:c.instructions+=1;goto B55922d;
case 0x55922e:goto L55922e;
case 0x559232:c.instructions+=4;goto B559232;
case 0x559234:c.instructions+=3;goto B559234;
case 0x55923b:c.instructions+=2;goto B55923b;
case 0x55923e:c.instructions+=1;goto B55923e;
case 0x559240:goto L559240;
case 0x559241:c.instructions+=9;goto B559241;
case 0x559242:c.instructions+=8;goto B559242;
case 0x559244:c.instructions+=7;goto B559244;
case 0x55924a:c.instructions+=6;goto B55924a;
case 0x559250:c.instructions+=5;goto B559250;
case 0x559252:c.instructions+=4;goto B559252;
case 0x559253:c.instructions+=3;goto B559253;
case 0x559254:c.instructions+=2;goto B559254;
case 0x559258:c.instructions+=1;goto B559258;
case 0x55925a:goto L55925a;
case 0x55925c:c.instructions+=1;goto B55925c;
case 0x55925e:goto L55925e;
case 0x559264:goto L559264;
case 0x559267:c.instructions+=5;goto B559267;
case 0x55926c:c.instructions+=4;goto B55926c;
case 0x55926d:c.instructions+=3;goto B55926d;
case 0x55926e:c.instructions+=2;goto B55926e;
case 0x559273:c.instructions+=1;goto B559273;
case 0x559278:goto L559278;
case 0x55927d:c.instructions+=2;goto B55927d;
case 0x55927f:c.instructions+=1;goto B55927f;
case 0x559284:goto L559284;
case 0x559286:c.instructions+=2;goto B559286;
case 0x55928d:c.instructions+=1;goto B55928d;
case 0x55928f:goto L55928f;
case 0x559295:c.instructions+=1;goto B559295;
case 0x559297:goto L559297;
case 0x55929d:c.instructions+=2;goto B55929d;
case 0x55929e:c.instructions+=1;goto B55929e;
case 0x5592a3:goto L5592a3;
case 0x5592a5:c.instructions+=3;goto B5592a5;
case 0x5592a8:c.instructions+=2;goto B5592a8;
case 0x5592aa:c.instructions+=1;goto B5592aa;
case 0x5592ac:goto L5592ac;
case 0x5592af:c.instructions+=3;goto B5592af;
case 0x5592b2:c.instructions+=2;goto B5592b2;
case 0x5592b5:c.instructions+=1;goto B5592b5;
case 0x5592b8:goto L5592b8;
case 0x5592bb:c.instructions+=4;goto B5592bb;
case 0x5592c0:c.instructions+=3;goto B5592c0;
case 0x5592c5:c.instructions+=2;goto B5592c5;
case 0x5592c6:c.instructions+=1;goto B5592c6;
case 0x5592cb:goto L5592cb;
case 0x5592ce:c.instructions+=6;goto B5592ce;
case 0x5592cf:c.instructions+=5;goto B5592cf;
case 0x5592d0:c.instructions+=4;goto B5592d0;
case 0x5592da:c.instructions+=3;goto B5592da;
case 0x5592db:c.instructions+=2;goto B5592db;
case 0x5592dc:c.instructions+=1;goto B5592dc;
case 0x5592dd:goto L5592dd;
case 0x5592e2:c.instructions+=2;goto B5592e2;
case 0x5592e4:c.instructions+=1;goto B5592e4;
case 0x5592e9:goto L5592e9;
case 0x5592eb:c.instructions+=1;goto B5592eb;
case 0x5592ed:goto L5592ed;
case 0x5592f3:c.instructions+=1;goto B5592f3;
case 0x5592f8:goto L5592f8;
case 0x5592fe:c.instructions+=1;goto B5592fe;
case 0x559300:goto L559300;
case 0x559302:c.instructions+=2;goto B559302;
case 0x559307:c.instructions+=1;goto B559307;
case 0x559309:goto L559309;
case 0x559310:goto L559310;
case 0x559313:c.instructions+=2;goto B559313;
case 0x559316:c.instructions+=1;goto B559316;
case 0x559318:goto L559318;
case 0x55931b:c.instructions+=1;goto B55931b;
case 0x55931d:goto L55931d;
case 0x55931f:c.instructions+=1;goto B55931f;
case 0x559321:goto L559321;
case 0x559324:c.instructions+=2;goto B559324;
case 0x559326:c.instructions+=1;goto B559326;
case 0x559328:goto L559328;
case 0x55932a:c.instructions+=2;goto B55932a;
case 0x55932f:c.instructions+=1;goto B55932f;
case 0x559331:goto L559331;
case 0x559332:c.instructions+=2;goto B559332;
case 0x559335:c.instructions+=1;goto B559335;
case 0x559337:goto L559337;
case 0x559339:goto L559339;
case 0x55933b:goto L55933b;
case 0x55933d:c.instructions+=2;goto B55933d;
case 0x559342:c.instructions+=1;goto B559342;
case 0x559344:goto L559344;
case 0x559346:c.instructions+=3;goto B559346;
case 0x55934b:c.instructions+=2;goto B55934b;
case 0x55934d:c.instructions+=1;goto B55934d;
case 0x559352:goto L559352;
case 0x559355:c.instructions+=1;goto B559355;
case 0x559357:goto L559357;
case 0x559359:c.instructions+=1;goto B559359;
case 0x55935b:goto L55935b;
case 0x559360:goto L559360;
case 0x559365:c.instructions+=2;goto B559365;
case 0x559366:c.instructions+=1;goto B559366;
case 0x55936b:goto L55936b;
case 0x55936d:c.instructions+=3;goto B55936d;
case 0x559370:c.instructions+=2;goto B559370;
case 0x559372:c.instructions+=1;goto B559372;
case 0x559374:goto L559374;
case 0x559377:c.instructions+=3;goto B559377;
case 0x55937a:c.instructions+=2;goto B55937a;
case 0x55937d:c.instructions+=1;goto B55937d;
case 0x559380:goto L559380;
case 0x559384:c.instructions+=11;goto B559384;
case 0x559387:c.instructions+=10;goto B559387;
case 0x559388:c.instructions+=9;goto B559388;
case 0x55938a:c.instructions+=8;goto B55938a;
case 0x55938f:c.instructions+=7;goto B55938f;
case 0x559394:c.instructions+=6;goto B559394;
case 0x559399:c.instructions+=5;goto B559399;
case 0x55939e:c.instructions+=4;goto B55939e;
case 0x5593a3:c.instructions+=3;goto B5593a3;
case 0x5593a8:c.instructions+=2;goto B5593a8;
case 0x5593a9:c.instructions+=1;goto B5593a9;
case 0x5593ae:goto L5593ae;
case 0x5593b5:c.instructions+=4;goto B5593b5;
case 0x5593b8:c.instructions+=3;goto B5593b8;
case 0x5593bb:c.instructions+=2;goto B5593bb;
case 0x5593c5:c.instructions+=1;goto B5593c5;
case 0x5593c7:goto L5593c7;
case 0x5593cd:c.instructions+=2;goto B5593cd;
case 0x5593ce:c.instructions+=1;goto B5593ce;
case 0x5593d3:goto L5593d3;
case 0x5593d4:c.instructions+=4;goto B5593d4;
case 0x5593d5:c.instructions+=3;goto B5593d5;
case 0x5593d6:c.instructions+=2;goto B5593d6;
case 0x5593d7:c.instructions+=1;goto B5593d7;
case 0x5593e0:goto L5593e0;
case 0x5593e2:c.instructions+=12;goto B5593e2;
case 0x5593e7:c.instructions+=11;goto B5593e7;
case 0x5593ed:c.instructions+=10;goto B5593ed;
case 0x5593ee:c.instructions+=9;goto B5593ee;
case 0x5593f5:c.instructions+=8;goto B5593f5;
case 0x5593f6:c.instructions+=7;goto B5593f6;
case 0x5593f7:c.instructions+=6;goto B5593f7;
case 0x5593f9:c.instructions+=5;goto B5593f9;
case 0x5593fc:c.instructions+=4;goto B5593fc;
case 0x559401:c.instructions+=3;goto B559401;
case 0x559406:c.instructions+=2;goto B559406;
case 0x559407:c.instructions+=1;goto B559407;
case 0x55940c:goto L55940c;
case 0x559411:c.instructions+=3;goto B559411;
case 0x559414:c.instructions+=2;goto B559414;
case 0x559417:c.instructions+=1;goto B559417;
case 0x55941d:goto L55941d;
case 0x55941e:c.instructions+=2;goto B55941e;
case 0x55941f:c.instructions+=1;goto B55941f;
case 0x559426:goto L559426;
case 0x559429:c.instructions+=3;goto B559429;
case 0x55942e:c.instructions+=2;goto B55942e;
case 0x55942f:c.instructions+=1;goto B55942f;
case 0x559434:goto L559434;
case 0x559437:c.instructions+=3;goto B559437;
case 0x55943c:c.instructions+=2;goto B55943c;
case 0x55943d:c.instructions+=1;goto B55943d;
case 0x559442:goto L559442;
case 0x559445:c.instructions+=4;goto B559445;
case 0x55944a:c.instructions+=3;goto B55944a;
case 0x55944f:c.instructions+=2;goto B55944f;
case 0x559450:c.instructions+=1;goto B559450;
case 0x559455:goto L559455;
case 0x55945b:c.instructions+=3;goto B55945b;
case 0x55945d:c.instructions+=2;goto B55945d;
case 0x559460:c.instructions+=1;goto B559460;
case 0x559463:goto L559463;
case 0x559464:c.instructions+=1;goto B559464;
case 0x559469:goto L559469;
case 0x55946c:c.instructions+=2;goto B55946c;
case 0x55946e:c.instructions+=1;goto B55946e;
case 0x559470:goto L559470;
case 0x559475:c.instructions+=3;goto B559475;
case 0x559477:c.instructions+=2;goto B559477;
case 0x559479:c.instructions+=1;goto B559479;
case 0x55947e:goto L55947e;
case 0x559481:goto L559481;
case 0x559483:c.instructions+=3;goto B559483;
case 0x55948a:c.instructions+=2;goto B55948a;
case 0x559491:c.instructions+=1;goto B559491;
case 0x559496:goto L559496;
case 0x559499:c.instructions+=4;goto B559499;
case 0x55949d:c.instructions+=3;goto B55949d;
case 0x55949f:c.instructions+=2;goto B55949f;
case 0x5594a7:c.instructions+=1;goto B5594a7;
case 0x5594a9:goto L5594a9;
case 0x5594af:c.instructions+=8;goto B5594af;
case 0x5594b0:c.instructions+=7;goto B5594b0;
case 0x5594b2:c.instructions+=6;goto B5594b2;
case 0x5594b4:c.instructions+=5;goto B5594b4;
case 0x5594b9:c.instructions+=4;goto B5594b9;
case 0x5594be:c.instructions+=3;goto B5594be;
case 0x5594c0:c.instructions+=2;goto B5594c0;
case 0x5594c2:c.instructions+=1;goto B5594c2;
case 0x5594c7:goto L5594c7;
case 0x5594c9:goto L5594c9;
case 0x5594cb:goto L5594cb;
case 0x5594ce:c.instructions+=6;goto B5594ce;
case 0x5594d1:c.instructions+=5;goto B5594d1;
case 0x5594d3:c.instructions+=4;goto B5594d3;
case 0x5594d7:c.instructions+=3;goto B5594d7;
case 0x5594d8:c.instructions+=2;goto B5594d8;
case 0x5594da:c.instructions+=1;goto B5594da;
case 0x5594dd:goto L5594dd;
case 0x5594df:c.instructions+=1;goto B5594df;
case 0x5594e4:goto L5594e4;
case 0x5594e9:goto L5594e9;
case 0x5594ec:c.instructions+=4;goto B5594ec;
case 0x5594f1:c.instructions+=3;goto B5594f1;
case 0x5594f6:c.instructions+=2;goto B5594f6;
case 0x5594f7:c.instructions+=1;goto B5594f7;
case 0x5594fc:goto L5594fc;
case 0x5594ff:c.instructions+=3;goto B5594ff;
case 0x559504:c.instructions+=2;goto B559504;
case 0x559505:c.instructions+=1;goto B559505;
case 0x55950a:goto L55950a;
case 0x55950d:c.instructions+=3;goto B55950d;
case 0x559512:c.instructions+=2;goto B559512;
case 0x559513:c.instructions+=1;goto B559513;
case 0x559518:goto L559518;
case 0x55951e:c.instructions+=3;goto B55951e;
case 0x559520:c.instructions+=2;goto B559520;
case 0x559523:c.instructions+=1;goto B559523;
case 0x559526:goto L559526;
case 0x559527:c.instructions+=1;goto B559527;
case 0x55952c:goto L55952c;
case 0x55952f:c.instructions+=2;goto B55952f;
case 0x559531:c.instructions+=1;goto B559531;
case 0x559533:goto L559533;
case 0x559538:c.instructions+=3;goto B559538;
case 0x55953a:c.instructions+=2;goto B55953a;
case 0x55953c:c.instructions+=1;goto B55953c;
case 0x559541:goto L559541;
case 0x559544:goto L559544;
case 0x559546:c.instructions+=3;goto B559546;
case 0x55954d:c.instructions+=2;goto B55954d;
case 0x559554:c.instructions+=1;goto B559554;
case 0x559559:goto L559559;
case 0x55955c:c.instructions+=4;goto B55955c;
case 0x559560:c.instructions+=3;goto B559560;
case 0x559562:c.instructions+=2;goto B559562;
case 0x55956a:c.instructions+=1;goto B55956a;
case 0x55956c:goto L55956c;
case 0x559571:c.instructions+=5;goto B559571;
case 0x559576:c.instructions+=4;goto B559576;
case 0x559578:c.instructions+=3;goto B559578;
case 0x55957a:c.instructions+=2;goto B55957a;
case 0x55957c:c.instructions+=1;goto B55957c;
case 0x559581:goto L559581;
case 0x559583:goto L559583;
case 0x559585:goto L559585;
case 0x559587:c.instructions+=5;goto B559587;
case 0x55958a:c.instructions+=4;goto B55958a;
case 0x55958b:c.instructions+=3;goto B55958b;
case 0x55958d:c.instructions+=2;goto B55958d;
case 0x559591:c.instructions+=1;goto B559591;
case 0x559594:goto L559594;
case 0x559596:c.instructions+=1;goto B559596;
case 0x55959b:goto L55959b;
case 0x55959e:c.instructions+=4;goto B55959e;
case 0x5595a2:c.instructions+=3;goto B5595a2;
case 0x5595a4:c.instructions+=2;goto B5595a4;
case 0x5595ac:c.instructions+=1;goto B5595ac;
case 0x5595ae:goto L5595ae;
case 0x5595b4:c.instructions+=8;goto B5595b4;
case 0x5595b5:c.instructions+=7;goto B5595b5;
case 0x5595b7:c.instructions+=6;goto B5595b7;
case 0x5595b9:c.instructions+=5;goto B5595b9;
case 0x5595be:c.instructions+=4;goto B5595be;
case 0x5595c3:c.instructions+=3;goto B5595c3;
case 0x5595c5:c.instructions+=2;goto B5595c5;
case 0x5595c7:c.instructions+=1;goto B5595c7;
case 0x5595cc:goto L5595cc;
case 0x5595cf:c.instructions+=5;goto B5595cf;
case 0x5595d1:c.instructions+=4;goto B5595d1;
case 0x5595d2:c.instructions+=3;goto B5595d2;
case 0x5595d4:c.instructions+=2;goto B5595d4;
case 0x5595d8:c.instructions+=1;goto B5595d8;
case 0x5595db:goto L5595db;
case 0x5595e0:goto L5595e0;
case 0x5595e2:c.instructions+=6;goto B5595e2;
case 0x5595e5:c.instructions+=5;goto B5595e5;
case 0x5595e7:c.instructions+=4;goto B5595e7;
case 0x5595e8:c.instructions+=3;goto B5595e8;
case 0x5595ea:c.instructions+=2;goto B5595ea;
case 0x5595ee:c.instructions+=1;goto B5595ee;
case 0x5595f1:goto L5595f1;
case 0x5595f6:goto L5595f6;
case 0x5595f9:c.instructions+=3;goto B5595f9;
case 0x5595fe:c.instructions+=2;goto B5595fe;
case 0x5595ff:c.instructions+=1;goto B5595ff;
case 0x559604:goto L559604;
case 0x559607:c.instructions+=3;goto B559607;
case 0x55960c:c.instructions+=2;goto B55960c;
case 0x55960d:c.instructions+=1;goto B55960d;
case 0x559612:goto L559612;
case 0x559615:c.instructions+=4;goto B559615;
case 0x55961a:c.instructions+=3;goto B55961a;
case 0x55961f:c.instructions+=2;goto B55961f;
case 0x559620:c.instructions+=1;goto B559620;
case 0x559625:goto L559625;
case 0x55962b:c.instructions+=3;goto B55962b;
case 0x55962d:c.instructions+=2;goto B55962d;
case 0x559630:c.instructions+=1;goto B559630;
case 0x559633:goto L559633;
case 0x559634:c.instructions+=1;goto B559634;
case 0x559639:goto L559639;
case 0x55963c:c.instructions+=2;goto B55963c;
case 0x55963e:c.instructions+=1;goto B55963e;
case 0x559640:goto L559640;
case 0x559645:c.instructions+=3;goto B559645;
case 0x559647:c.instructions+=2;goto B559647;
case 0x559649:c.instructions+=1;goto B559649;
case 0x55964e:goto L55964e;
case 0x559651:goto L559651;
case 0x559658:c.instructions+=4;goto B559658;
case 0x55965f:c.instructions+=3;goto B55965f;
case 0x559664:c.instructions+=2;goto B559664;
case 0x559669:c.instructions+=1;goto B559669;
case 0x559670:goto L559670;
case 0x559671:c.instructions+=2;goto B559671;
case 0x559676:c.instructions+=1;goto B559676;
case 0x55967b:goto L55967b;
case 0x55967d:c.instructions+=1;goto B55967d;
case 0x55967f:goto L55967f;
case 0x559681:c.instructions+=1;goto B559681;
case 0x559686:goto L559686;
case 0x559689:c.instructions+=4;goto B559689;
case 0x55968d:c.instructions+=3;goto B55968d;
case 0x55968f:c.instructions+=2;goto B55968f;
case 0x559693:c.instructions+=1;goto B559693;
case 0x559695:goto L559695;
case 0x55969b:c.instructions+=8;goto B55969b;
case 0x55969c:c.instructions+=7;goto B55969c;
case 0x55969e:c.instructions+=6;goto B55969e;
case 0x5596a0:c.instructions+=5;goto B5596a0;
case 0x5596a5:c.instructions+=4;goto B5596a5;
case 0x5596aa:c.instructions+=3;goto B5596aa;
case 0x5596ab:c.instructions+=2;goto B5596ab;
case 0x5596ad:c.instructions+=1;goto B5596ad;
case 0x5596b2:goto L5596b2;
case 0x5596b4:goto L5596b4;
case 0x5596b6:goto L5596b6;
case 0x5596b9:c.instructions+=6;goto B5596b9;
case 0x5596bc:c.instructions+=5;goto B5596bc;
case 0x5596be:c.instructions+=4;goto B5596be;
case 0x5596c2:c.instructions+=3;goto B5596c2;
case 0x5596c3:c.instructions+=2;goto B5596c3;
case 0x5596c5:c.instructions+=1;goto B5596c5;
case 0x5596c8:goto L5596c8;
case 0x5596c9:c.instructions+=2;goto B5596c9;
case 0x5596cc:c.instructions+=1;goto B5596cc;
case 0x5596ce:goto L5596ce;
case 0x5596d3:goto L5596d3;
case 0x5596d9:c.instructions+=2;goto B5596d9;
case 0x5596db:c.instructions+=1;goto B5596db;
case 0x5596de:goto L5596de;
case 0x5596df:c.instructions+=1;goto B5596df;
case 0x5596e4:goto L5596e4;
case 0x5596e7:c.instructions+=2;goto B5596e7;
case 0x5596e9:c.instructions+=1;goto B5596e9;
case 0x5596eb:goto L5596eb;
case 0x5596ed:c.instructions+=1;goto B5596ed;
case 0x5596f2:goto L5596f2;
case 0x5596f5:c.instructions+=2;goto B5596f5;
case 0x5596f7:c.instructions+=1;goto B5596f7;
case 0x5596f9:goto L5596f9;
case 0x5596fe:c.instructions+=3;goto B5596fe;
case 0x5596ff:c.instructions+=2;goto B5596ff;
case 0x559701:c.instructions+=1;goto B559701;
case 0x559703:goto L559703;
case 0x559705:c.instructions+=1;goto B559705;
case 0x55970a:goto L55970a;
case 0x55970d:c.instructions+=2;goto B55970d;
case 0x55970f:c.instructions+=1;goto B55970f;
case 0x559711:goto L559711;
case 0x559716:c.instructions+=2;goto B559716;
case 0x559717:c.instructions+=1;goto B559717;
case 0x559718:goto L559718;
case 0x55971d:goto L55971d;
case 0x559720:goto L559720;
case 0x559727:c.instructions+=4;goto B559727;
case 0x55972c:c.instructions+=3;goto B55972c;
case 0x55972f:c.instructions+=2;goto B55972f;
case 0x559732:c.instructions+=1;goto B559732;
case 0x559734:goto L559734;
case 0x559739:c.instructions+=6;goto B559739;
case 0x55973a:c.instructions+=5;goto B55973a;
case 0x55973f:c.instructions+=4;goto B55973f;
case 0x559744:c.instructions+=3;goto B559744;
case 0x559749:c.instructions+=2;goto B559749;
case 0x55974b:c.instructions+=1;goto B55974b;
case 0x559750:goto L559750;
case 0x559752:c.instructions+=1;goto B559752;
case 0x559757:goto L559757;
case 0x55975a:c.instructions+=4;goto B55975a;
case 0x55975e:c.instructions+=3;goto B55975e;
case 0x559760:c.instructions+=2;goto B559760;
case 0x559768:c.instructions+=1;goto B559768;
case 0x55976a:goto L55976a;
case 0x55976f:c.instructions+=5;goto B55976f;
case 0x559774:c.instructions+=4;goto B559774;
case 0x559779:c.instructions+=3;goto B559779;
case 0x55977b:c.instructions+=2;goto B55977b;
case 0x55977d:c.instructions+=1;goto B55977d;
case 0x559782:goto L559782;
case 0x559784:c.instructions+=1;goto B559784;
case 0x559786:goto L559786;
case 0x559788:goto L559788;
case 0x55978c:c.instructions+=1;goto B55978c;
case 0x559791:goto L559791;
case 0x559794:c.instructions+=5;goto B559794;
case 0x559798:c.instructions+=4;goto B559798;
case 0x55979a:c.instructions+=3;goto B55979a;
case 0x55979b:c.instructions+=2;goto B55979b;
case 0x55979d:c.instructions+=1;goto B55979d;
case 0x5597a0:goto L5597a0;
case 0x5597a2:c.instructions+=1;goto B5597a2;
case 0x5597a7:goto L5597a7;
case 0x5597aa:c.instructions+=4;goto B5597aa;
case 0x5597ae:c.instructions+=3;goto B5597ae;
case 0x5597b0:c.instructions+=2;goto B5597b0;
case 0x5597b8:c.instructions+=1;goto B5597b8;
case 0x5597ba:goto L5597ba;
case 0x5597c0:c.instructions+=8;goto B5597c0;
case 0x5597c1:c.instructions+=7;goto B5597c1;
case 0x5597c3:c.instructions+=6;goto B5597c3;
case 0x5597c5:c.instructions+=5;goto B5597c5;
case 0x5597ca:c.instructions+=4;goto B5597ca;
case 0x5597cf:c.instructions+=3;goto B5597cf;
case 0x5597d4:c.instructions+=2;goto B5597d4;
case 0x5597d6:c.instructions+=1;goto B5597d6;
case 0x5597db:goto L5597db;
case 0x5597dd:goto L5597dd;
case 0x5597df:goto L5597df;
case 0x5597e2:c.instructions+=5;goto B5597e2;
case 0x5597e4:c.instructions+=4;goto B5597e4;
case 0x5597e5:c.instructions+=3;goto B5597e5;
case 0x5597e7:c.instructions+=2;goto B5597e7;
case 0x5597eb:c.instructions+=1;goto B5597eb;
case 0x5597ee:goto L5597ee;
case 0x5597f0:c.instructions+=1;goto B5597f0;
case 0x5597f5:goto L5597f5;
case 0x5597f8:c.instructions+=4;goto B5597f8;
case 0x5597fc:c.instructions+=3;goto B5597fc;
case 0x5597fe:c.instructions+=2;goto B5597fe;
case 0x559806:c.instructions+=1;goto B559806;
case 0x559808:goto L559808;
case 0x55980e:c.instructions+=8;goto B55980e;
case 0x55980f:c.instructions+=7;goto B55980f;
case 0x559811:c.instructions+=6;goto B559811;
case 0x559813:c.instructions+=5;goto B559813;
case 0x559818:c.instructions+=4;goto B559818;
case 0x55981d:c.instructions+=3;goto B55981d;
case 0x559822:c.instructions+=2;goto B559822;
case 0x559824:c.instructions+=1;goto B559824;
case 0x559829:goto L559829;
case 0x55982b:goto L55982b;
case 0x55982d:goto L55982d;
case 0x559830:c.instructions+=5;goto B559830;
case 0x559832:c.instructions+=4;goto B559832;
case 0x559833:c.instructions+=3;goto B559833;
case 0x559835:c.instructions+=2;goto B559835;
case 0x559839:c.instructions+=1;goto B559839;
case 0x55983c:goto L55983c;
case 0x55983e:c.instructions+=1;goto B55983e;
case 0x559843:goto L559843;
case 0x559846:c.instructions+=4;goto B559846;
case 0x55984a:c.instructions+=3;goto B55984a;
case 0x55984c:c.instructions+=2;goto B55984c;
case 0x559854:c.instructions+=1;goto B559854;
case 0x559856:goto L559856;
case 0x55985c:c.instructions+=8;goto B55985c;
case 0x55985d:c.instructions+=7;goto B55985d;
case 0x55985f:c.instructions+=6;goto B55985f;
case 0x559861:c.instructions+=5;goto B559861;
case 0x559866:c.instructions+=4;goto B559866;
case 0x55986b:c.instructions+=3;goto B55986b;
case 0x559870:c.instructions+=2;goto B559870;
case 0x559872:c.instructions+=1;goto B559872;
case 0x559877:goto L559877;
case 0x559879:goto L559879;
case 0x55987b:goto L55987b;
case 0x55987e:c.instructions+=5;goto B55987e;
case 0x559880:c.instructions+=4;goto B559880;
case 0x559881:c.instructions+=3;goto B559881;
case 0x559883:c.instructions+=2;goto B559883;
case 0x559887:c.instructions+=1;goto B559887;
case 0x55988a:goto L55988a;
case 0x55988c:c.instructions+=1;goto B55988c;
case 0x559891:goto L559891;
case 0x559894:c.instructions+=4;goto B559894;
case 0x559898:c.instructions+=3;goto B559898;
case 0x55989a:c.instructions+=2;goto B55989a;
case 0x5598a2:c.instructions+=1;goto B5598a2;
case 0x5598a4:goto L5598a4;
case 0x5598aa:c.instructions+=8;goto B5598aa;
case 0x5598ab:c.instructions+=7;goto B5598ab;
case 0x5598ad:c.instructions+=6;goto B5598ad;
case 0x5598af:c.instructions+=5;goto B5598af;
case 0x5598b4:c.instructions+=4;goto B5598b4;
case 0x5598b9:c.instructions+=3;goto B5598b9;
case 0x5598be:c.instructions+=2;goto B5598be;
case 0x5598c0:c.instructions+=1;goto B5598c0;
case 0x5598c5:goto L5598c5;
case 0x5598c7:goto L5598c7;
case 0x5598c9:goto L5598c9;
case 0x5598cc:c.instructions+=5;goto B5598cc;
case 0x5598ce:c.instructions+=4;goto B5598ce;
case 0x5598cf:c.instructions+=3;goto B5598cf;
case 0x5598d1:c.instructions+=2;goto B5598d1;
case 0x5598d5:c.instructions+=1;goto B5598d5;
case 0x5598d8:goto L5598d8;
case 0x5598da:c.instructions+=1;goto B5598da;
case 0x5598df:goto L5598df;
case 0x5598e2:c.instructions+=4;goto B5598e2;
case 0x5598e6:c.instructions+=3;goto B5598e6;
case 0x5598e8:c.instructions+=2;goto B5598e8;
case 0x5598f0:c.instructions+=1;goto B5598f0;
case 0x5598f2:goto L5598f2;
case 0x5598f4:c.instructions+=1;goto B5598f4;
case 0x5598f9:goto L5598f9;
case 0x5598fb:goto L5598fb;
case 0x5598fd:goto L5598fd;
case 0x5598ff:c.instructions+=4;goto B5598ff;
case 0x559900:c.instructions+=3;goto B559900;
case 0x559902:c.instructions+=2;goto B559902;
case 0x559906:c.instructions+=1;goto B559906;
case 0x559909:goto L559909;
case 0x55990b:c.instructions+=1;goto B55990b;
case 0x559910:goto L559910;
case 0x559913:c.instructions+=4;goto B559913;
case 0x559917:c.instructions+=3;goto B559917;
case 0x559919:c.instructions+=2;goto B559919;
case 0x559921:c.instructions+=1;goto B559921;
case 0x559923:goto L559923;
case 0x559929:c.instructions+=8;goto B559929;
case 0x55992a:c.instructions+=7;goto B55992a;
case 0x55992c:c.instructions+=6;goto B55992c;
case 0x55992e:c.instructions+=5;goto B55992e;
case 0x559933:c.instructions+=4;goto B559933;
case 0x559938:c.instructions+=3;goto B559938;
case 0x55993a:c.instructions+=2;goto B55993a;
case 0x55993c:c.instructions+=1;goto B55993c;
case 0x559941:goto L559941;
case 0x559943:goto L559943;
case 0x559945:goto L559945;
case 0x559948:c.instructions+=5;goto B559948;
case 0x55994a:c.instructions+=4;goto B55994a;
case 0x55994b:c.instructions+=3;goto B55994b;
case 0x55994d:c.instructions+=2;goto B55994d;
case 0x559951:c.instructions+=1;goto B559951;
case 0x559954:goto L559954;
case 0x559956:c.instructions+=1;goto B559956;
case 0x55995b:goto L55995b;
case 0x55995e:c.instructions+=4;goto B55995e;
case 0x559962:c.instructions+=3;goto B559962;
case 0x559964:c.instructions+=2;goto B559964;
case 0x55996c:c.instructions+=1;goto B55996c;
case 0x55996e:goto L55996e;
case 0x559974:c.instructions+=8;goto B559974;
case 0x559975:c.instructions+=7;goto B559975;
case 0x559977:c.instructions+=6;goto B559977;
case 0x559979:c.instructions+=5;goto B559979;
case 0x55997e:c.instructions+=4;goto B55997e;
case 0x559983:c.instructions+=3;goto B559983;
case 0x559985:c.instructions+=2;goto B559985;
case 0x559987:c.instructions+=1;goto B559987;
case 0x55998c:goto L55998c;
case 0x55998e:goto L55998e;
case 0x559990:goto L559990;
case 0x559997:c.instructions+=5;goto B559997;
case 0x559999:c.instructions+=4;goto B559999;
case 0x55999a:c.instructions+=3;goto B55999a;
case 0x55999c:c.instructions+=2;goto B55999c;
case 0x5599a0:c.instructions+=1;goto B5599a0;
case 0x5599a3:goto L5599a3;
case 0x5599a5:c.instructions+=1;goto B5599a5;
case 0x5599aa:goto L5599aa;
case 0x5599ad:c.instructions+=4;goto B5599ad;
case 0x5599b1:c.instructions+=3;goto B5599b1;
case 0x5599b3:c.instructions+=2;goto B5599b3;
case 0x5599bb:c.instructions+=1;goto B5599bb;
case 0x5599bd:goto L5599bd;
case 0x5599c3:c.instructions+=8;goto B5599c3;
case 0x5599c4:c.instructions+=7;goto B5599c4;
case 0x5599c6:c.instructions+=6;goto B5599c6;
case 0x5599c8:c.instructions+=5;goto B5599c8;
case 0x5599cd:c.instructions+=4;goto B5599cd;
case 0x5599d2:c.instructions+=3;goto B5599d2;
case 0x5599d7:c.instructions+=2;goto B5599d7;
case 0x5599d9:c.instructions+=1;goto B5599d9;
case 0x5599de:goto L5599de;
case 0x5599e0:goto L5599e0;
case 0x5599e2:goto L5599e2;
case 0x5599e9:c.instructions+=5;goto B5599e9;
case 0x5599eb:c.instructions+=4;goto B5599eb;
case 0x5599ec:c.instructions+=3;goto B5599ec;
case 0x5599ee:c.instructions+=2;goto B5599ee;
case 0x5599f2:c.instructions+=1;goto B5599f2;
case 0x5599f5:goto L5599f5;
case 0x5599f8:c.instructions+=3;goto B5599f8;
case 0x5599fd:c.instructions+=2;goto B5599fd;
case 0x5599fe:c.instructions+=1;goto B5599fe;
case 0x559a03:goto L559a03;
case 0x559a06:c.instructions+=3;goto B559a06;
case 0x559a0b:c.instructions+=2;goto B559a0b;
case 0x559a0c:c.instructions+=1;goto B559a0c;
case 0x559a11:goto L559a11;
case 0x559a14:goto L559a14;
case 0x559a15:c.instructions+=1;goto B559a15;
case 0x559a16:goto L559a16;
case 0x559a19:c.instructions+=3;goto B559a19;
case 0x559a1c:c.instructions+=2;goto B559a1c;
case 0x559a1e:c.instructions+=1;goto B559a1e;
case 0x559a20:goto L559a20;
case 0x559a22:c.instructions+=2;goto B559a22;
case 0x559a24:c.instructions+=1;goto B559a24;
case 0x559a26:goto L559a26;
case 0x559a29:c.instructions+=2;goto B559a29;
case 0x559a2b:c.instructions+=1;goto B559a2b;
case 0x559a2d:goto L559a2d;
case 0x559a2f:c.instructions+=1;goto B559a2f;
case 0x559a31:goto L559a31;
case 0x559a33:goto L559a33;
case 0x559a36:c.instructions+=5;goto B559a36;
case 0x559a38:c.instructions+=4;goto B559a38;
case 0x559a3b:c.instructions+=3;goto B559a3b;
case 0x559a3c:c.instructions+=2;goto B559a3c;
case 0x559a3e:c.instructions+=1;goto B559a3e;
case 0x559a40:goto L559a40;
case 0x559a41:c.instructions+=1;goto B559a41;
case 0x559a46:goto L559a46;
case 0x559a49:c.instructions+=2;goto B559a49;
case 0x559a4b:c.instructions+=1;goto B559a4b;
case 0x559a4d:goto L559a4d;
case 0x559a50:c.instructions+=1;goto B559a50;
case 0x559a52:goto L559a52;
case 0x559a54:goto L559a54;
case 0x559a57:c.instructions+=3;goto B559a57;
case 0x559a5a:c.instructions+=2;goto B559a5a;
case 0x559a5b:c.instructions+=1;goto B559a5b;
case 0x559a5e:goto L559a5e;
case 0x559a63:c.instructions+=3;goto B559a63;
case 0x559a68:c.instructions+=2;goto B559a68;
case 0x559a69:c.instructions+=1;goto B559a69;
case 0x559a6e:goto L559a6e;
case 0x559a74:c.instructions+=3;goto B559a74;
case 0x559a79:c.instructions+=2;goto B559a79;
case 0x559a7a:c.instructions+=1;goto B559a7a;
case 0x559a7f:goto L559a7f;
case 0x559a83:c.instructions+=5;goto B559a83;
case 0x559a86:c.instructions+=4;goto B559a86;
case 0x559a87:c.instructions+=3;goto B559a87;
case 0x559a8e:c.instructions+=2;goto B559a8e;
case 0x559a91:c.instructions+=1;goto B559a91;
case 0x559ab0:goto L559ab0;
case 0x559ab1:c.instructions+=8;goto B559ab1;
case 0x559ab2:c.instructions+=7;goto B559ab2;
case 0x559ab4:c.instructions+=6;goto B559ab4;
case 0x559aba:c.instructions+=5;goto B559aba;
case 0x559abb:c.instructions+=4;goto B559abb;
case 0x559abe:c.instructions+=3;goto B559abe;
case 0x559ac0:c.instructions+=2;goto B559ac0;
case 0x559ac5:c.instructions+=1;goto B559ac5;
case 0x559aca:goto L559aca;
case 0x559acc:c.instructions+=1;goto B559acc;
case 0x559ace:goto L559ace;
case 0x559ad1:c.instructions+=4;goto B559ad1;
case 0x559ad6:c.instructions+=3;goto B559ad6;
case 0x559adb:c.instructions+=2;goto B559adb;
case 0x559adc:c.instructions+=1;goto B559adc;
case 0x559ae1:goto L559ae1;
case 0x559ae4:c.instructions+=2;goto B559ae4;
case 0x559aee:c.instructions+=1;goto B559aee;
case 0x559af3:goto L559af3;
case 0x559afa:c.instructions+=2;goto B559afa;
case 0x559afb:c.instructions+=1;goto B559afb;
case 0x559b01:goto L559b01;
case 0x559b07:c.instructions+=3;goto B559b07;
case 0x559b08:c.instructions+=2;goto B559b08;
case 0x559b0d:c.instructions+=1;goto B559b0d;
case 0x559b12:goto L559b12;
case 0x559b14:c.instructions+=1;goto B559b14;
case 0x559b16:goto L559b16;
case 0x559b1a:c.instructions+=6;goto B559b1a;
case 0x559b1b:c.instructions+=5;goto B559b1b;
case 0x559b1c:c.instructions+=4;goto B559b1c;
case 0x559b1e:c.instructions+=3;goto B559b1e;
case 0x559b24:c.instructions+=2;goto B559b24;
case 0x559b2c:c.instructions+=1;goto B559b2c;
case 0x559b31:goto L559b31;
case 0x559b35:c.instructions+=7;goto B559b35;
case 0x559b37:c.instructions+=6;goto B559b37;
case 0x559b3c:c.instructions+=5;goto B559b3c;
case 0x559b3e:c.instructions+=4;goto B559b3e;
case 0x559b40:c.instructions+=3;goto B559b40;
case 0x559b43:c.instructions+=2;goto B559b43;
case 0x559b45:c.instructions+=1;goto B559b45;
case 0x559b47:goto L559b47;
case 0x559b4b:c.instructions+=1;goto B559b4b;
case 0x559b4d:goto L559b4d;
case 0x559b53:c.instructions+=4;goto B559b53;
case 0x559b54:c.instructions+=3;goto B559b54;
case 0x559b56:c.instructions+=2;goto B559b56;
case 0x559b5b:c.instructions+=1;goto B559b5b;
case 0x559b60:goto L559b60;
case 0x559b62:c.instructions+=1;goto B559b62;
case 0x559b64:goto L559b64;
case 0x559b67:c.instructions+=4;goto B559b67;
case 0x559b6c:c.instructions+=3;goto B559b6c;
case 0x559b71:c.instructions+=2;goto B559b71;
case 0x559b72:c.instructions+=1;goto B559b72;
case 0x559b77:goto L559b77;
case 0x559b7a:c.instructions+=2;goto B559b7a;
case 0x559b84:c.instructions+=1;goto B559b84;
case 0x559b86:goto L559b86;
case 0x559b89:c.instructions+=10;goto B559b89;
case 0x559b8e:c.instructions+=9;goto B559b8e;
case 0x559b90:c.instructions+=8;goto B559b90;
case 0x559b95:c.instructions+=7;goto B559b95;
case 0x559b9a:c.instructions+=6;goto B559b9a;
case 0x559b9f:c.instructions+=5;goto B559b9f;
case 0x559ba4:c.instructions+=4;goto B559ba4;
case 0x559ba9:c.instructions+=3;goto B559ba9;
case 0x559bae:c.instructions+=2;goto B559bae;
case 0x559baf:c.instructions+=1;goto B559baf;
case 0x559bb1:goto L559bb1;
case 0x559bb4:c.instructions+=9;goto B559bb4;
case 0x559bb9:c.instructions+=8;goto B559bb9;
case 0x559bbb:c.instructions+=7;goto B559bbb;
case 0x559bc0:c.instructions+=6;goto B559bc0;
case 0x559bc5:c.instructions+=5;goto B559bc5;
case 0x559bca:c.instructions+=4;goto B559bca;
case 0x559bcf:c.instructions+=3;goto B559bcf;
case 0x559bd4:c.instructions+=2;goto B559bd4;
case 0x559bd9:c.instructions+=1;goto B559bd9;
case 0x559bda:goto L559bda;
case 0x559bdf:goto L559bdf;
case 0x559be2:c.instructions+=1;goto B559be2;
case 0x559bec:goto L559bec;
case 0x559bed:goto L559bed;
case 0x559bf3:c.instructions+=3;goto B559bf3;
case 0x559bf5:c.instructions+=2;goto B559bf5;
case 0x559bf9:c.instructions+=1;goto B559bf9;
case 0x559bfe:goto L559bfe;
case 0x559c00:c.instructions+=1;goto B559c00;
case 0x559c05:goto L559c05;
case 0x559c08:c.instructions+=5;goto B559c08;
case 0x559c0f:c.instructions+=4;goto B559c0f;
case 0x559c12:c.instructions+=3;goto B559c12;
case 0x559c13:c.instructions+=2;goto B559c13;
case 0x559c14:c.instructions+=1;goto B559c14;
case 0x559c16:goto L559c16;
case 0x559c1c:c.instructions+=2;goto B559c1c;
case 0x559c1d:c.instructions+=1;goto B559c1d;
case 0x559c22:goto L559c22;
case 0x559c23:c.instructions+=1;goto B559c23;
case 0x559c30:goto L559c30;
case 0x559c32:c.instructions+=7;goto B559c32;
case 0x559c37:c.instructions+=6;goto B559c37;
case 0x559c3d:c.instructions+=5;goto B559c3d;
case 0x559c3e:c.instructions+=4;goto B559c3e;
case 0x559c45:c.instructions+=3;goto B559c45;
case 0x559c46:c.instructions+=2;goto B559c46;
case 0x559c4b:c.instructions+=1;goto B559c4b;
case 0x559c50:goto L559c50;
case 0x559c53:c.instructions+=4;goto B559c53;
case 0x559c57:c.instructions+=3;goto B559c57;
case 0x559c59:c.instructions+=2;goto B559c59;
case 0x559c61:c.instructions+=1;goto B559c61;
case 0x559c63:goto L559c63;
case 0x559c67:c.instructions+=3;goto B559c67;
case 0x559c68:c.instructions+=2;goto B559c68;
case 0x559c6a:c.instructions+=1;goto B559c6a;
case 0x559c6f:goto L559c6f;
case 0x559c73:c.instructions+=3;goto B559c73;
case 0x559c7a:c.instructions+=2;goto B559c7a;
case 0x559c7d:c.instructions+=1;goto B559c7d;
case 0x559c7e:goto L559c7e;
case 0x559c82:c.instructions+=4;goto B559c82;
case 0x559c84:c.instructions+=3;goto B559c84;
case 0x559c8b:c.instructions+=2;goto B559c8b;
case 0x559c8e:c.instructions+=1;goto B559c8e;
case 0x559c90:goto L559c90;
case 0x559c92:c.instructions+=13;goto B559c92;
case 0x559c97:c.instructions+=12;goto B559c97;
case 0x559c9d:c.instructions+=11;goto B559c9d;
case 0x559c9e:c.instructions+=10;goto B559c9e;
case 0x559ca5:c.instructions+=9;goto B559ca5;
case 0x559ca6:c.instructions+=8;goto B559ca6;
case 0x559caa:c.instructions+=7;goto B559caa;
case 0x559cab:c.instructions+=6;goto B559cab;
case 0x559cac:c.instructions+=5;goto B559cac;
case 0x559cad:c.instructions+=4;goto B559cad;
case 0x559caf:c.instructions+=3;goto B559caf;
case 0x559cb0:c.instructions+=2;goto B559cb0;
case 0x559cb4:c.instructions+=1;goto B559cb4;
case 0x559cb9:goto L559cb9;
case 0x559cbf:c.instructions+=73;goto B559cbf;
case 0x559cc1:c.instructions+=72;goto B559cc1;
case 0x559cc7:c.instructions+=71;goto B559cc7;
case 0x559ccb:c.instructions+=70;goto B559ccb;
case 0x559ccd:c.instructions+=69;goto B559ccd;
case 0x559cd0:c.instructions+=68;goto B559cd0;
case 0x559cd6:c.instructions+=67;goto B559cd6;
case 0x559cdc:c.instructions+=66;goto B559cdc;
case 0x559ce2:c.instructions+=65;goto B559ce2;
case 0x559ce8:c.instructions+=64;goto B559ce8;
case 0x559cee:c.instructions+=63;goto B559cee;
case 0x559cf3:c.instructions+=62;goto B559cf3;
case 0x559cf8:c.instructions+=61;goto B559cf8;
case 0x559cfd:c.instructions+=60;goto B559cfd;
case 0x559d03:c.instructions+=59;goto B559d03;
case 0x559d09:c.instructions+=58;goto B559d09;
case 0x559d0f:c.instructions+=57;goto B559d0f;
case 0x559d15:c.instructions+=56;goto B559d15;
case 0x559d1b:c.instructions+=55;goto B559d1b;
case 0x559d21:c.instructions+=54;goto B559d21;
case 0x559d27:c.instructions+=53;goto B559d27;
case 0x559d2d:c.instructions+=52;goto B559d2d;
case 0x559d33:c.instructions+=51;goto B559d33;
case 0x559d39:c.instructions+=50;goto B559d39;
case 0x559d3f:c.instructions+=49;goto B559d3f;
case 0x559d45:c.instructions+=48;goto B559d45;
case 0x559d4b:c.instructions+=47;goto B559d4b;
case 0x559d51:c.instructions+=46;goto B559d51;
case 0x559d57:c.instructions+=45;goto B559d57;
case 0x559d5d:c.instructions+=44;goto B559d5d;
case 0x559d63:c.instructions+=43;goto B559d63;
case 0x559d69:c.instructions+=42;goto B559d69;
case 0x559d6f:c.instructions+=41;goto B559d6f;
case 0x559d75:c.instructions+=40;goto B559d75;
case 0x559d7b:c.instructions+=39;goto B559d7b;
case 0x559d81:c.instructions+=38;goto B559d81;
case 0x559d87:c.instructions+=37;goto B559d87;
case 0x559d8d:c.instructions+=36;goto B559d8d;
case 0x559d93:c.instructions+=35;goto B559d93;
case 0x559d99:c.instructions+=34;goto B559d99;
case 0x559d9f:c.instructions+=33;goto B559d9f;
case 0x559da5:c.instructions+=32;goto B559da5;
case 0x559dab:c.instructions+=31;goto B559dab;
case 0x559db1:c.instructions+=30;goto B559db1;
case 0x559db7:c.instructions+=29;goto B559db7;
case 0x559dbd:c.instructions+=28;goto B559dbd;
case 0x559dc3:c.instructions+=27;goto B559dc3;
case 0x559dc9:c.instructions+=26;goto B559dc9;
case 0x559dcf:c.instructions+=25;goto B559dcf;
case 0x559dd5:c.instructions+=24;goto B559dd5;
case 0x559ddb:c.instructions+=23;goto B559ddb;
case 0x559de1:c.instructions+=22;goto B559de1;
case 0x559de7:c.instructions+=21;goto B559de7;
case 0x559ded:c.instructions+=20;goto B559ded;
case 0x559df3:c.instructions+=19;goto B559df3;
case 0x559df9:c.instructions+=18;goto B559df9;
case 0x559dff:c.instructions+=17;goto B559dff;
case 0x559e05:c.instructions+=16;goto B559e05;
case 0x559e0b:c.instructions+=15;goto B559e0b;
case 0x559e11:c.instructions+=14;goto B559e11;
case 0x559e17:c.instructions+=13;goto B559e17;
case 0x559e1d:c.instructions+=12;goto B559e1d;
case 0x559e23:c.instructions+=11;goto B559e23;
case 0x559e29:c.instructions+=10;goto B559e29;
case 0x559e2f:c.instructions+=9;goto B559e2f;
case 0x559e35:c.instructions+=8;goto B559e35;
case 0x559e3b:c.instructions+=7;goto B559e3b;
case 0x559e41:c.instructions+=6;goto B559e41;
case 0x559e47:c.instructions+=5;goto B559e47;
case 0x559e4d:c.instructions+=4;goto B559e4d;
case 0x559e4f:c.instructions+=3;goto B559e4f;
case 0x559e54:c.instructions+=2;goto B559e54;
case 0x559e5a:c.instructions+=1;goto B559e5a;
case 0x559e5f:goto L559e5f;
case 0x559e62:c.instructions+=2;goto B559e62;
case 0x559e64:c.instructions+=1;goto B559e64;
case 0x559e66:goto L559e66;
case 0x559e67:c.instructions+=1;goto B559e67;
case 0x559e6c:goto L559e6c;
case 0x559e6f:c.instructions+=2;goto B559e6f;
case 0x559e71:c.instructions+=1;goto B559e71;
case 0x559e73:goto L559e73;
case 0x559e78:c.instructions+=2;goto B559e78;
case 0x559e7a:c.instructions+=1;goto B559e7a;
case 0x559e7f:goto L559e7f;
case 0x559e81:c.instructions+=1;goto B559e81;
case 0x559e83:goto L559e83;
case 0x559e88:c.instructions+=2;goto B559e88;
case 0x559e8a:c.instructions+=1;goto B559e8a;
case 0x559e8c:goto L559e8c;
case 0x559e8f:c.instructions+=3;goto B559e8f;
case 0x559e90:c.instructions+=2;goto B559e90;
case 0x559e95:c.instructions+=1;goto B559e95;
case 0x559e9a:goto L559e9a;
case 0x559e9c:c.instructions+=1;goto B559e9c;
case 0x559e9e:goto L559e9e;
case 0x559ea2:c.instructions+=1;goto B559ea2;
case 0x559ea4:goto L559ea4;
case 0x559ea6:goto L559ea6;
case 0x559ea8:c.instructions+=2;goto B559ea8;
case 0x559eae:c.instructions+=1;goto B559eae;
case 0x559eb3:goto L559eb3;
case 0x559eba:c.instructions+=3;goto B559eba;
case 0x559ec0:c.instructions+=2;goto B559ec0;
case 0x559ec1:c.instructions+=1;goto B559ec1;
case 0x559ec6:goto L559ec6;
case 0x559ec9:c.instructions+=2;goto B559ec9;
case 0x559ecb:c.instructions+=1;goto B559ecb;
case 0x559ecd:goto L559ecd;
case 0x559ed0:c.instructions+=3;goto B559ed0;
case 0x559ed3:c.instructions+=2;goto B559ed3;
case 0x559ed6:c.instructions+=1;goto B559ed6;
case 0x559ed9:goto L559ed9;
case 0x559edd:c.instructions+=7;goto B559edd;
case 0x559ede:c.instructions+=6;goto B559ede;
case 0x559ee0:c.instructions+=5;goto B559ee0;
case 0x559ee1:c.instructions+=4;goto B559ee1;
case 0x559ee2:c.instructions+=3;goto B559ee2;
case 0x559ee9:c.instructions+=2;goto B559ee9;
case 0x559eec:c.instructions+=1;goto B559eec;
case 0x559ef0:goto L559ef0;
case 0x559ef1:c.instructions+=2;goto B559ef1;
case 0x559ef3:c.instructions+=1;goto B559ef3;
case 0x559ef8:goto L559ef8;
case 0x559efd:c.instructions+=1;goto B559efd;
case 0x559eff:goto L559eff;
case 0x559f00:c.instructions+=1;goto B559f00;
case 0x559f05:goto L559f05;
case 0x559f08:goto L559f08;
case 0x559f0a:c.instructions+=2;goto B559f0a;
case 0x559f0b:c.instructions+=1;goto B559f0b;
case 0x559f10:goto L559f10;
case 0x559f12:c.instructions+=16;goto B559f12;
case 0x559f17:c.instructions+=15;goto B559f17;
case 0x559f1d:c.instructions+=14;goto B559f1d;
case 0x559f1e:c.instructions+=13;goto B559f1e;
case 0x559f25:c.instructions+=12;goto B559f25;
case 0x559f26:c.instructions+=11;goto B559f26;
case 0x559f27:c.instructions+=10;goto B559f27;
case 0x559f29:c.instructions+=9;goto B559f29;
case 0x559f2d:c.instructions+=8;goto B559f2d;
case 0x559f33:c.instructions+=7;goto B559f33;
case 0x559f38:c.instructions+=6;goto B559f38;
case 0x559f3e:c.instructions+=5;goto B559f3e;
case 0x559f44:c.instructions+=4;goto B559f44;
case 0x559f4a:c.instructions+=3;goto B559f4a;
case 0x559f52:c.instructions+=2;goto B559f52;
case 0x559f58:c.instructions+=1;goto B559f58;
case 0x559f5d:goto L559f5d;
case 0x559f5f:c.instructions+=2;goto B559f5f;
case 0x559f67:c.instructions+=1;goto B559f67;
case 0x559f6c:goto L559f6c;
case 0x559f70:c.instructions+=4;goto B559f70;
case 0x559f71:c.instructions+=3;goto B559f71;
case 0x559f78:c.instructions+=2;goto B559f78;
case 0x559f7b:c.instructions+=1;goto B559f7b;
case 0x559f80:goto L559f80;
case 0x559f81:c.instructions+=7;goto B559f81;
case 0x559f83:c.instructions+=6;goto B559f83;
case 0x559f84:c.instructions+=5;goto B559f84;
case 0x559f87:c.instructions+=4;goto B559f87;
case 0x559f8c:c.instructions+=3;goto B559f8c;
case 0x559f8d:c.instructions+=2;goto B559f8d;
case 0x559f8f:c.instructions+=1;goto B559f8f;
case 0x559f91:goto L559f91;
case 0x559f98:c.instructions+=4;goto B559f98;
case 0x559f99:c.instructions+=3;goto B559f99;
case 0x559f9b:c.instructions+=2;goto B559f9b;
case 0x559f9c:c.instructions+=1;goto B559f9c;
case 0x559f9f:goto L559f9f;
case 0x559fa4:c.instructions+=1;goto B559fa4;
case 0x559faa:goto L559faa;
case 0x559fab:c.instructions+=5;goto B559fab;
case 0x559fae:c.instructions+=4;goto B559fae;
case 0x559faf:c.instructions+=3;goto B559faf;
case 0x559fb0:c.instructions+=2;goto B559fb0;
case 0x559fb5:c.instructions+=1;goto B559fb5;
case 0x559fba:goto L559fba;
case 0x559fbc:c.instructions+=2;goto B559fbc;
case 0x559fbe:c.instructions+=1;goto B559fbe;
case 0x559fc0:goto L559fc0;
case 0x559fc3:c.instructions+=3;goto B559fc3;
case 0x559fc5:c.instructions+=2;goto B559fc5;
case 0x559fc8:c.instructions+=1;goto B559fc8;
case 0x559fca:goto L559fca;
case 0x559fd0:c.instructions+=2;goto B559fd0;
case 0x559fd2:c.instructions+=1;goto B559fd2;
case 0x559fd4:goto L559fd4;
case 0x559fd9:c.instructions+=2;goto B559fd9;
case 0x559fdb:c.instructions+=1;goto B559fdb;
case 0x559fe1:goto L559fe1;
case 0x559fe4:c.instructions+=3;goto B559fe4;
case 0x559fe5:c.instructions+=2;goto B559fe5;
case 0x559fea:c.instructions+=1;goto B559fea;
case 0x559fef:goto L559fef;
case 0x559ff1:c.instructions+=1;goto B559ff1;
case 0x559ff3:goto L559ff3;
case 0x559ff9:c.instructions+=2;goto B559ff9;
case 0x559ffa:c.instructions+=1;goto B559ffa;
case 0x559fff:goto L559fff;
default:missing_instruction(c.pc);}
B559004:L559004:{c.instructions+=2;NFSU2_TR(0x559004);
u8 U[4];
w4(U+0,u32(0x79d18cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559009:{NFSU2_TR(0x559009);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55900eull));
TAIL_STATIC(0x50d510u,50d);
}
B55900e:L55900e:{c.instructions+=2;NFSU2_TR(0x55900e);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559013:{NFSU2_TR(0x559013);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559018ull));
TAIL_STATIC(0x52cef0u,52c);
}
B559018:L559018:{c.instructions+=3;NFSU2_TR(0x559018);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55901b:{NFSU2_TR(0x55901b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55901d:{NFSU2_TR(0x55901d);
if(r1(R+518)){{goto L55902f;}}
}
B55901f:L55901f:{c.instructions+=3;NFSU2_TR(0x55901f);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559024:{NFSU2_TR(0x559024);
__builtin_memmove((R+4),(R+0),4);
}
B559026:{NFSU2_TR(0x559026);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55902bull));
TAIL_STATIC(0x517f80u,517);
}
B55902b:L55902b:{c.instructions+=2;NFSU2_TR(0x55902b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55902d:{NFSU2_TR(0x55902d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55904a;}}
}
B55902f:L55902f:{c.instructions+=3;NFSU2_TR(0x55902f);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B559034:{NFSU2_TR(0x559034);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B559036:{NFSU2_TR(0x559036);
if(r1(R+518)){{goto L55909a;}}
}
B559038:L559038:{c.instructions+=4;NFSU2_TR(0x559038);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55903b:{NFSU2_TR(0x55903b);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559040:{NFSU2_TR(0x559040);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559045:{NFSU2_TR(0x559045);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55904aull));
TAIL_STATIC(0x52c570u,52c);
}
B55904a:L55904a:{c.instructions+=3;NFSU2_TR(0x55904a);
__builtin_memmove((R+28),(R+0),4);
}
B55904c:{NFSU2_TR(0x55904c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55904e:{NFSU2_TR(0x55904e);
if(r1(R+518)){{goto L55909a;}}
}
B559050:L559050:{c.instructions+=4;NFSU2_TR(0x559050);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559051:{NFSU2_TR(0x559051);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B559054:{NFSU2_TR(0x559054);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B559056:{NFSU2_TR(0x559056);
if(r1(R+518)){{goto L559099;}}
}
B559058:L559058:{c.instructions+=1;NFSU2_TR(0x559058);
{goto L559060;}
}
B559060:L559060:{c.instructions+=2;NFSU2_TR(0x559060);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559065:{NFSU2_TR(0x559065);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55906aull));
TAIL_STATIC(0x505450u,505);
}
B55906a:L55906a:{c.instructions+=4;NFSU2_TR(0x55906a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55906d:{NFSU2_TR(0x55906d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B559070:{NFSU2_TR(0x559070);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B559072:{NFSU2_TR(0x559072);
if(r1(R+518)){{goto L55907d;}}
}
B559074:L559074:{c.instructions+=3;NFSU2_TR(0x559074);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B559077:{NFSU2_TR(0x559077);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B559079:{NFSU2_TR(0x559079);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x559060u);}goto L559060;}}
}
B55907b:L55907b:{c.instructions+=1;NFSU2_TR(0x55907b);
{goto L559099;}
}
B55907d:L55907d:{c.instructions+=2;NFSU2_TR(0x55907d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55907f:{NFSU2_TR(0x55907f);
if(r1(R+518)){{goto L559099;}}
}
B559081:L559081:{c.instructions+=2;NFSU2_TR(0x559081);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B559084:{NFSU2_TR(0x559084);
if(r1(R+518)){{goto L559096;}}
}
B559086:L559086:{c.instructions+=3;NFSU2_TR(0x559086);
__builtin_memmove((R+4),(R+28),4);
}
B559088:{NFSU2_TR(0x559088);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55908b:{NFSU2_TR(0x55908b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559090ull));
TAIL_STATIC(0x517720u,517);
}
B559090:L559090:{c.instructions+=2;NFSU2_TR(0x559090);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B559093:{NFSU2_TR(0x559093);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559096:L559096:{c.instructions+=1;NFSU2_TR(0x559096);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559099:L559099:{c.instructions+=1;NFSU2_TR(0x559099);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55909a:L55909a:{c.instructions+=4;NFSU2_TR(0x55909a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55909d:{NFSU2_TR(0x55909d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7567616dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5590a2:{NFSU2_TR(0x5590a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5590a3:{NFSU2_TR(0x5590a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5590de;}}
}
B5590a5:L5590a5:{c.instructions+=2;NFSU2_TR(0x5590a5);
w4(R+8,u32(0x331f4f58ull));
}
B5590aa:{NFSU2_TR(0x5590aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5590afull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5590af:L5590af:{c.instructions+=2;NFSU2_TR(0x5590af);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5590b1:{NFSU2_TR(0x5590b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5590bd;}}
}
B5590b3:L5590b3:{c.instructions+=2;NFSU2_TR(0x5590b3);
w4(R+8,u32(0xc01a6f63ull));
}
B5590b8:{NFSU2_TR(0x5590b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5590bdull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5590bd:L5590bd:{c.instructions+=7;NFSU2_TR(0x5590bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5590be:{NFSU2_TR(0x5590be);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5590c0:{NFSU2_TR(0x5590c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5590c2:{NFSU2_TR(0x5590c2);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5590c7:{NFSU2_TR(0x5590c7);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5590cc:{NFSU2_TR(0x5590cc);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5590d1:{NFSU2_TR(0x5590d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5590d6ull));
TAIL_STATIC(0x558540u,558);
}
B5590d6:L5590d6:{c.instructions+=2;NFSU2_TR(0x5590d6);
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
B5590d9:{NFSU2_TR(0x5590d9);
{goto L5591bc;}
}
B5590de:L5590de:{c.instructions+=2;NFSU2_TR(0x5590de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x66756c6cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5590e3:{NFSU2_TR(0x5590e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55911e;}}
}
B5590e5:L5590e5:{c.instructions+=2;NFSU2_TR(0x5590e5);
w4(R+8,u32(0xd155595aull));
}
B5590ea:{NFSU2_TR(0x5590ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5590efull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5590ef:L5590ef:{c.instructions+=2;NFSU2_TR(0x5590ef);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5590f1:{NFSU2_TR(0x5590f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5590fd;}}
}
B5590f3:L5590f3:{c.instructions+=2;NFSU2_TR(0x5590f3);
w4(R+8,u32(0xc01a6f63ull));
}
B5590f8:{NFSU2_TR(0x5590f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5590fdull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5590fd:L5590fd:{c.instructions+=7;NFSU2_TR(0x5590fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5590fe:{NFSU2_TR(0x5590fe);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559100:{NFSU2_TR(0x559100);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559102:{NFSU2_TR(0x559102);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559107:{NFSU2_TR(0x559107);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55910c:{NFSU2_TR(0x55910c);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559111:{NFSU2_TR(0x559111);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559116ull));
TAIL_STATIC(0x558540u,558);
}
B559116:L559116:{c.instructions+=2;NFSU2_TR(0x559116);
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
B559119:{NFSU2_TR(0x559119);
{goto L5591bc;}
}
B55911e:L55911e:{c.instructions+=2;NFSU2_TR(0x55911e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70617373ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B559123:{NFSU2_TR(0x559123);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55915b;}}
}
B559125:L559125:{c.instructions+=2;NFSU2_TR(0x559125);
w4(R+8,u32(0xb5eaa702ull));
}
B55912a:{NFSU2_TR(0x55912a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55912full));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B55912f:L55912f:{c.instructions+=2;NFSU2_TR(0x55912f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B559131:{NFSU2_TR(0x559131);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55913d;}}
}
B559133:L559133:{c.instructions+=2;NFSU2_TR(0x559133);
w4(R+8,u32(0xc01a6f63ull));
}
B559138:{NFSU2_TR(0x559138);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55913dull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B55913d:L55913d:{c.instructions+=7;NFSU2_TR(0x55913d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55913e:{NFSU2_TR(0x55913e);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559140:{NFSU2_TR(0x559140);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559142:{NFSU2_TR(0x559142);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559147:{NFSU2_TR(0x559147);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55914c:{NFSU2_TR(0x55914c);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559151:{NFSU2_TR(0x559151);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559156ull));
TAIL_STATIC(0x558540u,558);
}
B559156:L559156:{c.instructions+=2;NFSU2_TR(0x559156);
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
B559159:{NFSU2_TR(0x559159);
{goto L5591bc;}
}
B55915b:L55915b:{c.instructions+=2;NFSU2_TR(0x55915b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61737461ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B559160:{NFSU2_TR(0x559160);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L559169;}}
}
B559162:L559162:{c.instructions+=2;NFSU2_TR(0x559162);
u8 U[4];
w4(U+0,u32(0x1c098ddfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559167:{NFSU2_TR(0x559167);
{goto L55919b;}
}
B559169:L559169:{c.instructions+=2;NFSU2_TR(0x559169);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x696e7670ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55916e:{NFSU2_TR(0x55916e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L559196;}}
}
B559170:L559170:{c.instructions+=2;NFSU2_TR(0x559170);
u8 U[4];
w4(U+0,u32(0x4ad41e75ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559175:{NFSU2_TR(0x559175);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55917aull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B55917a:L55917a:{c.instructions+=6;NFSU2_TR(0x55917a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55917b:{NFSU2_TR(0x55917b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55917d:{NFSU2_TR(0x55917d);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559182:{NFSU2_TR(0x559182);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559187:{NFSU2_TR(0x559187);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55918c:{NFSU2_TR(0x55918c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559191ull));
TAIL_STATIC(0x5585e0u,558);
}
B559191:L559191:{c.instructions+=2;NFSU2_TR(0x559191);
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
B559194:{NFSU2_TR(0x559194);
{goto L5591bc;}
}
B559196:L559196:{c.instructions+=1;NFSU2_TR(0x559196);
u8 U[4];
w4(U+0,u32(0x7aa591ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55919b:L55919b:{c.instructions+=1;NFSU2_TR(0x55919b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5591a0ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B5591a0:L5591a0:{c.instructions+=7;NFSU2_TR(0x5591a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5591a1:{NFSU2_TR(0x5591a1);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5591a3:{NFSU2_TR(0x5591a3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5591a5:{NFSU2_TR(0x5591a5);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5591aa:{NFSU2_TR(0x5591aa);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5591af:{NFSU2_TR(0x5591af);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5591b4:{NFSU2_TR(0x5591b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5591b9ull));
TAIL_STATIC(0x558540u,558);
}
B5591b9:L5591b9:{c.instructions+=1;NFSU2_TR(0x5591b9);
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
B5591bc:L5591bc:{c.instructions+=7;NFSU2_TR(0x5591bc);
__builtin_memmove((R+4),gp(0x8500d0),4);
}
B5591c2:{NFSU2_TR(0x5591c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5591c3:{NFSU2_TR(0x5591c3);
__builtin_memmove(gp(0x8500cc),(R+12),1);
}
B5591c9:{NFSU2_TR(0x5591c9);
__builtin_memmove(gp(0x8500d4),(R+4),4);
}
B5591cf:{NFSU2_TR(0x5591cf);
s4(0x8500d0,u32(0x11ull));
}
B5591d9:{NFSU2_TR(0x5591d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5591da:{NFSU2_TR(0x5591da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5591e0:L5591e0:{c.instructions+=8;NFSU2_TR(0x5591e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5591e2:{NFSU2_TR(0x5591e2);
u8 U[4];
w4(U+0,u32(0x778174ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5591e7:{NFSU2_TR(0x5591e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5591ed:{NFSU2_TR(0x5591ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5591ee:{NFSU2_TR(0x5591ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5591f5:{NFSU2_TR(0x5591f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5591f6:{NFSU2_TR(0x5591f6);
u8 U[4];
w4(U+0,u32(0x170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5591fb:{NFSU2_TR(0x5591fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559200ull));
TAIL_STATIC(0x575620u,575);
}
B559200:L559200:{c.instructions+=5;NFSU2_TR(0x559200);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B559203:{NFSU2_TR(0x559203);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B559207:{NFSU2_TR(0x559207);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B559209:{NFSU2_TR(0x559209);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B559211:{NFSU2_TR(0x559211);
if(r1(R+518)){{goto L55922e;}}
}
B559213:L559213:{c.instructions+=4;NFSU2_TR(0x559213);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B559217:{NFSU2_TR(0x559217);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559218:{NFSU2_TR(0x559218);
__builtin_memmove((R+4),(R+0),4);
}
B55921a:{NFSU2_TR(0x55921a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55921full));
TAIL_STATIC(0x556640u,556);
}
B55921f:L55921f:{c.instructions+=4;NFSU2_TR(0x55921f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B559223:{NFSU2_TR(0x559223);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55922a:{NFSU2_TR(0x55922a);
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
B55922d:{NFSU2_TR(0x55922d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55922e:L55922e:{c.instructions+=5;NFSU2_TR(0x55922e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B559232:{NFSU2_TR(0x559232);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B559234:{NFSU2_TR(0x559234);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55923b:{NFSU2_TR(0x55923b);
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
B55923e:{NFSU2_TR(0x55923e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B559240:L559240:{c.instructions+=10;NFSU2_TR(0x559240);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559241:{NFSU2_TR(0x559241);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559242:{NFSU2_TR(0x559242);
__builtin_memmove((R+12),(R+4),4);
}
B559244:{NFSU2_TR(0x559244);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55924a:{NFSU2_TR(0x55924a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B559250:{NFSU2_TR(0x559250);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B559252:{NFSU2_TR(0x559252);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559253:{NFSU2_TR(0x559253);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559254:{NFSU2_TR(0x559254);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559258:{NFSU2_TR(0x559258);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55925e;}}
}
B55925a:L55925a:{c.instructions+=2;NFSU2_TR(0x55925a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55925c:{NFSU2_TR(0x55925c);
{goto L559264;}
}
B55925e:L55925e:{c.instructions+=1;NFSU2_TR(0x55925e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B559264:L559264:{c.instructions+=6;NFSU2_TR(0x559264);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B559267:{NFSU2_TR(0x559267);
__builtin_memmove((R+0),gp(0x8389a8),4);
}
B55926c:{NFSU2_TR(0x55926c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55926d:{NFSU2_TR(0x55926d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55926e:{NFSU2_TR(0x55926e);
w4(R+4,u32(0x85ad40ull));
}
B559273:{NFSU2_TR(0x559273);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559278ull));
TAIL_STATIC(0x514280u,514);
}
B559278:L559278:{c.instructions+=3;NFSU2_TR(0x559278);
w4(R+4,u32(0x838980ull));
}
B55927d:{NFSU2_TR(0x55927d);
__builtin_memmove((R+24),(R+0),4);
}
B55927f:{NFSU2_TR(0x55927f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559284ull));
TAIL_STATIC(0x521530u,521);
}
B559284:L559284:{c.instructions+=3;NFSU2_TR(0x559284);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B559286:{NFSU2_TR(0x559286);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55928d:{NFSU2_TR(0x55928d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5592dd;}}
}
B55928f:L55928f:{c.instructions+=2;NFSU2_TR(0x55928f);
u8 U[8];
__builtin_memmove((U+0),gp(0x861e74),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+24)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B559295:{NFSU2_TR(0x559295);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5592dd;}}
}
B559297:L559297:{c.instructions+=3;NFSU2_TR(0x559297);
__builtin_memmove((R+4),gp(0x7fa1b8),4);
}
B55929d:{NFSU2_TR(0x55929d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55929e:{NFSU2_TR(0x55929e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5592a3ull));
TAIL_STATIC(0x52cef0u,52c);
}
B5592a3:L5592a3:{c.instructions+=4;NFSU2_TR(0x5592a3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5592a5:{NFSU2_TR(0x5592a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5592a8:{NFSU2_TR(0x5592a8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5592aa:{NFSU2_TR(0x5592aa);
if(r1(R+518)){{goto L5592b8;}}
}
B5592ac:L5592ac:{c.instructions+=4;NFSU2_TR(0x5592ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5592af:{NFSU2_TR(0x5592af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5592b2:{NFSU2_TR(0x5592b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5592b5:{NFSU2_TR(0x5592b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5592b8:L5592b8:{c.instructions+=5;NFSU2_TR(0x5592b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5592bb:{NFSU2_TR(0x5592bb);
u8 U[4];
w4(U+0,u32(0xd1ac60beull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5592c0:{NFSU2_TR(0x5592c0);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5592c5:{NFSU2_TR(0x5592c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5592c6:{NFSU2_TR(0x5592c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5592cbull));
TAIL_STATIC(0x558430u,558);
}
B5592cb:L5592cb:{c.instructions+=7;NFSU2_TR(0x5592cb);
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
B5592ce:{NFSU2_TR(0x5592ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5592cf:{NFSU2_TR(0x5592cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5592d0:{NFSU2_TR(0x5592d0);
s4(0x838970,u32(0x34dc1becull));
}
B5592da:{NFSU2_TR(0x5592da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5592db:{NFSU2_TR(0x5592db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5592dc:{NFSU2_TR(0x5592dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5592dd:L5592dd:{c.instructions+=3;NFSU2_TR(0x5592dd);
w4(R+4,u32(0x838980ull));
}
B5592e2:{NFSU2_TR(0x5592e2);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5592e4:{NFSU2_TR(0x5592e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5592e9ull));
TAIL_STATIC(0x5215d0u,521);
}
B5592e9:L5592e9:{c.instructions+=2;NFSU2_TR(0x5592e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5592eb:{NFSU2_TR(0x5592eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L559339;}}
}
B5592ed:L5592ed:{c.instructions+=2;NFSU2_TR(0x5592ed);
__builtin_memmove((R+24),gp(0x8389c8),4);
}
B5592f3:{NFSU2_TR(0x5592f3);
w4(R+8,u32(0x40ull));
}
B5592f8:L5592f8:{c.instructions+=2;NFSU2_TR(0x5592f8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8389c8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5592fe:{NFSU2_TR(0x5592fe);
if(r1(R+518)){{goto L559331;}}
}
B559300:L559300:{c.instructions+=3;NFSU2_TR(0x559300);
__builtin_memmove((R+0),(R+24),4);
}
B559302:{NFSU2_TR(0x559302);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8389c8ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B559307:{NFSU2_TR(0x559307);
if(r1(R+518)){{goto L559331;}}
}
B559309:L559309:{c.instructions+=1;NFSU2_TR(0x559309);
__builtin_memmove((R+16),(R+16),4);
}
B559310:L559310:{c.instructions+=3;NFSU2_TR(0x559310);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B559313:{NFSU2_TR(0x559313);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B559316:{NFSU2_TR(0x559316);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L559328;}}
}
B559318:L559318:{c.instructions+=2;NFSU2_TR(0x559318);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55931b:{NFSU2_TR(0x55931b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L559328;}}
}
B55931d:L55931d:{c.instructions+=2;NFSU2_TR(0x55931d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55931f:{NFSU2_TR(0x55931f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L559328;}}
}
B559321:L559321:{c.instructions+=3;NFSU2_TR(0x559321);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B559324:{NFSU2_TR(0x559324);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B559326:{NFSU2_TR(0x559326);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L559339;}}
}
B559328:L559328:{c.instructions+=3;NFSU2_TR(0x559328);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55932a:{NFSU2_TR(0x55932a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8389c8ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55932f:{NFSU2_TR(0x55932f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x559310u);}goto L559310;}}
}
B559331:L559331:{c.instructions+=3;NFSU2_TR(0x559331);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B559332:{NFSU2_TR(0x559332);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B559335:{NFSU2_TR(0x559335);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5592f8u);}goto L5592f8;}}
}
B559337:L559337:{c.instructions+=1;NFSU2_TR(0x559337);
{goto L55933b;}
}
B559339:L559339:{c.instructions+=1;NFSU2_TR(0x559339);
w1(R+12,u8(0x1ull));
}
B55933b:L55933b:{c.instructions+=3;NFSU2_TR(0x55933b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55933d:{NFSU2_TR(0x55933d);
w4(R+24,u32(0x31fbc167ull));
}
B559342:{NFSU2_TR(0x559342);
if(r1(R+518)){{goto L559360;}}
}
B559344:L559344:{c.instructions+=4;NFSU2_TR(0x559344);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559346:{NFSU2_TR(0x559346);
u8 U[4];
w4(U+0,u32(0x564b8cb6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55934b:{NFSU2_TR(0x55934b);
__builtin_memmove((R+4),(R+28),4);
}
B55934d:{NFSU2_TR(0x55934d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559352ull));
TAIL_STATIC(0x61b500u,61b);
}
B559352:L559352:{c.instructions+=2;NFSU2_TR(0x559352);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B559355:{NFSU2_TR(0x559355);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L559360;}}
}
B559357:L559357:{c.instructions+=2;NFSU2_TR(0x559357);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B559359:{NFSU2_TR(0x559359);
if(r1(R+518)){{goto L559360;}}
}
B55935b:L55935b:{c.instructions+=1;NFSU2_TR(0x55935b);
w4(R+24,u32(0xec8616fdull));
}
B559360:L559360:{c.instructions+=3;NFSU2_TR(0x559360);
__builtin_memmove((R+0),gp(0x7fa1b8),4);
}
B559365:{NFSU2_TR(0x559365);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559366:{NFSU2_TR(0x559366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55936bull));
TAIL_STATIC(0x52cef0u,52c);
}
B55936b:L55936b:{c.instructions+=4;NFSU2_TR(0x55936b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B55936d:{NFSU2_TR(0x55936d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B559370:{NFSU2_TR(0x559370);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B559372:{NFSU2_TR(0x559372);
if(r1(R+518)){{goto L559380;}}
}
B559374:L559374:{c.instructions+=4;NFSU2_TR(0x559374);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559377:{NFSU2_TR(0x559377);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55937a:{NFSU2_TR(0x55937a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55937d:{NFSU2_TR(0x55937d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559380:L559380:{c.instructions+=12;NFSU2_TR(0x559380);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B559384:{NFSU2_TR(0x559384);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B559387:{NFSU2_TR(0x559387);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559388:{NFSU2_TR(0x559388);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55938a:{NFSU2_TR(0x55938a);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55938f:{NFSU2_TR(0x55938f);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559394:{NFSU2_TR(0x559394);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559399:{NFSU2_TR(0x559399);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55939e:{NFSU2_TR(0x55939e);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5593a3:{NFSU2_TR(0x5593a3);
u8 U[4];
w4(U+0,u32(0x78f2f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5593a8:{NFSU2_TR(0x5593a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5593a9:{NFSU2_TR(0x5593a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5593aeull));
TAIL_STATIC(0x558790u,558);
}
B5593ae:L5593ae:{c.instructions+=5;NFSU2_TR(0x5593ae);
w4(R+0,u32(s32(s8(m1(0x8380b8)))));
}
B5593b5:{NFSU2_TR(0x5593b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B5593b8:{NFSU2_TR(0x5593b8);
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
B5593bb:{NFSU2_TR(0x5593bb);
s4(0x838970,u32(0x34dc1bcfull));
}
B5593c5:{NFSU2_TR(0x5593c5);
if(r1(R+518)){{goto L5593d3;}}
}
B5593c7:L5593c7:{c.instructions+=3;NFSU2_TR(0x5593c7);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B5593cd:{NFSU2_TR(0x5593cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5593ce:{NFSU2_TR(0x5593ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5593d3ull));
TAIL_STATIC(0x458520u,458);
}
B5593d3:L5593d3:{c.instructions+=5;NFSU2_TR(0x5593d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5593d4:{NFSU2_TR(0x5593d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5593d5:{NFSU2_TR(0x5593d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5593d6:{NFSU2_TR(0x5593d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5593d7:{NFSU2_TR(0x5593d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5593e0:L5593e0:{c.instructions+=13;NFSU2_TR(0x5593e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5593e2:{NFSU2_TR(0x5593e2);
u8 U[4];
w4(U+0,u32(0x778284ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5593e7:{NFSU2_TR(0x5593e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5593ed:{NFSU2_TR(0x5593ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5593ee:{NFSU2_TR(0x5593ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5593f5:{NFSU2_TR(0x5593f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5593f6:{NFSU2_TR(0x5593f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5593f7:{NFSU2_TR(0x5593f7);
__builtin_memmove((R+24),(R+4),4);
}
B5593f9:{NFSU2_TR(0x5593f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5593fc:{NFSU2_TR(0x5593fc);
u8 U[4];
w4(U+0,u32(0xdf86227aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559401:{NFSU2_TR(0x559401);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559406:{NFSU2_TR(0x559406);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559407:{NFSU2_TR(0x559407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55940cull));
TAIL_STATIC(0x495460u,495);
}
B55940c:L55940c:{c.instructions+=4;NFSU2_TR(0x55940c);
__builtin_memmove((R+0),gp(0x838998),4);
}
B559411:{NFSU2_TR(0x559411);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B559414:{NFSU2_TR(0x559414);
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
B559417:{NFSU2_TR(0x559417);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L559a16;}}
}
B55941d:L55941d:{c.instructions+=3;NFSU2_TR(0x55941d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55941e:{NFSU2_TR(0x55941e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55941f:{NFSU2_TR(0x55941f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x559a94ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B559426:L559426:{c.instructions+=4;NFSU2_TR(0x559426);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B559429:{NFSU2_TR(0x559429);
u8 U[4];
w4(U+0,u32(0xa2285688ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55942e:{NFSU2_TR(0x55942e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55942f:{NFSU2_TR(0x55942f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559434ull));
TAIL_STATIC(0x495520u,495);
}
B559434:L559434:{c.instructions+=4;NFSU2_TR(0x559434);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B559437:{NFSU2_TR(0x559437);
u8 U[4];
w4(U+0,u32(0xc318ff76ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55943c:{NFSU2_TR(0x55943c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55943d:{NFSU2_TR(0x55943d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559442ull));
TAIL_STATIC(0x495520u,495);
}
B559442:L559442:{c.instructions+=5;NFSU2_TR(0x559442);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B559445:{NFSU2_TR(0x559445);
u8 U[4];
w4(U+0,u32(0x2aadac5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55944a:{NFSU2_TR(0x55944a);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55944f:{NFSU2_TR(0x55944f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559450:{NFSU2_TR(0x559450);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559455ull));
TAIL_STATIC(0x495460u,495);
}
B559455:L559455:{c.instructions+=4;NFSU2_TR(0x559455);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B55945b:{NFSU2_TR(0x55945b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55945d:{NFSU2_TR(0x55945d);
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
B559460:{NFSU2_TR(0x559460);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559463ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B559463:L559463:{c.instructions+=2;NFSU2_TR(0x559463);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559464:{NFSU2_TR(0x559464);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559469ull));
TAIL_STATIC(0x4a5b10u,4a5);
}
B559469:L559469:{c.instructions+=3;NFSU2_TR(0x559469);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55946c:{NFSU2_TR(0x55946c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55946e:{NFSU2_TR(0x55946e);
if(r1(R+518)){{goto L559481;}}
}
B559470:L559470:{c.instructions+=4;NFSU2_TR(0x559470);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559475:{NFSU2_TR(0x559475);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559477:{NFSU2_TR(0x559477);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559479:{NFSU2_TR(0x559479);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55947eull));
TAIL_STATIC(0x4c1860u,4c1);
}
B55947e:L55947e:{c.instructions+=1;NFSU2_TR(0x55947e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B559481:L559481:{c.instructions+=4;NFSU2_TR(0x559481);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559483:{NFSU2_TR(0x559483);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55948a:{NFSU2_TR(0x55948a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x6c4bf67cull));
s4(u32(r4(U+0)),r4(U+4));
}
B559491:{NFSU2_TR(0x559491);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559496ull));
TAIL_STATIC(0x575620u,575);
}
B559496:L559496:{c.instructions+=5;NFSU2_TR(0x559496);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B559499:{NFSU2_TR(0x559499);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55949d:{NFSU2_TR(0x55949d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55949f:{NFSU2_TR(0x55949f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5594a7:{NFSU2_TR(0x5594a7);
if(r1(R+518)){{goto L5594c9;}}
}
B5594a9:L5594a9:{c.instructions+=9;NFSU2_TR(0x5594a9);
__builtin_memmove((R+4),gp(0x7fa204),4);
}
B5594af:{NFSU2_TR(0x5594af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5594b0:{NFSU2_TR(0x5594b0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5594b2:{NFSU2_TR(0x5594b2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5594b4:{NFSU2_TR(0x5594b4);
u8 U[4];
w4(U+0,u32(0xc8d23393ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5594b9:{NFSU2_TR(0x5594b9);
u8 U[4];
w4(U+0,u32(0xf7e5b04aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5594be:{NFSU2_TR(0x5594be);
u8 U[4];
w4(U+0,u32(0x22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5594c0:{NFSU2_TR(0x5594c0);
__builtin_memmove((R+4),(R+0),4);
}
B5594c2:{NFSU2_TR(0x5594c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5594c7ull));
TAIL_STATIC(0x53a9d0u,53a);
}
B5594c7:L5594c7:{c.instructions+=1;NFSU2_TR(0x5594c7);
{goto L5594cb;}
}
B5594c9:L5594c9:{c.instructions+=1;NFSU2_TR(0x5594c9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5594cb:L5594cb:{c.instructions+=7;NFSU2_TR(0x5594cb);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5594ce:{NFSU2_TR(0x5594ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5594d1:{NFSU2_TR(0x5594d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5594d3:{NFSU2_TR(0x5594d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5594d7:{NFSU2_TR(0x5594d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5594d8:{NFSU2_TR(0x5594d8);
__builtin_memmove((R+4),(R+24),4);
}
B5594da:{NFSU2_TR(0x5594da);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5594ddull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5594dd:L5594dd:{c.instructions+=2;NFSU2_TR(0x5594dd);
__builtin_memmove((R+4),(R+24),4);
}
B5594df:{NFSU2_TR(0x5594df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5594e4ull));
TAIL_STATIC(0x556930u,556);
}
B5594e4:L5594e4:{c.instructions+=1;NFSU2_TR(0x5594e4);
{goto L559a14;}
}
B5594e9:L5594e9:{c.instructions+=5;NFSU2_TR(0x5594e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5594ec:{NFSU2_TR(0x5594ec);
u8 U[4];
w4(U+0,u32(0x2aadac5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5594f1:{NFSU2_TR(0x5594f1);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5594f6:{NFSU2_TR(0x5594f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5594f7:{NFSU2_TR(0x5594f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5594fcull));
TAIL_STATIC(0x495460u,495);
}
B5594fc:L5594fc:{c.instructions+=4;NFSU2_TR(0x5594fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5594ff:{NFSU2_TR(0x5594ff);
u8 U[4];
w4(U+0,u32(0xa2285688ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559504:{NFSU2_TR(0x559504);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559505:{NFSU2_TR(0x559505);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55950aull));
TAIL_STATIC(0x4954e0u,495);
}
B55950a:L55950a:{c.instructions+=4;NFSU2_TR(0x55950a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55950d:{NFSU2_TR(0x55950d);
u8 U[4];
w4(U+0,u32(0xc318ff76ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559512:{NFSU2_TR(0x559512);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559513:{NFSU2_TR(0x559513);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559518ull));
TAIL_STATIC(0x4954e0u,495);
}
B559518:L559518:{c.instructions+=4;NFSU2_TR(0x559518);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B55951e:{NFSU2_TR(0x55951e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B559520:{NFSU2_TR(0x559520);
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
B559523:{NFSU2_TR(0x559523);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559526ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B559526:L559526:{c.instructions+=2;NFSU2_TR(0x559526);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559527:{NFSU2_TR(0x559527);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55952cull));
TAIL_STATIC(0x4a5b10u,4a5);
}
B55952c:L55952c:{c.instructions+=3;NFSU2_TR(0x55952c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55952f:{NFSU2_TR(0x55952f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B559531:{NFSU2_TR(0x559531);
if(r1(R+518)){{goto L559544;}}
}
B559533:L559533:{c.instructions+=4;NFSU2_TR(0x559533);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559538:{NFSU2_TR(0x559538);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55953a:{NFSU2_TR(0x55953a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55953c:{NFSU2_TR(0x55953c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559541ull));
TAIL_STATIC(0x4c1860u,4c1);
}
B559541:L559541:{c.instructions+=1;NFSU2_TR(0x559541);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B559544:L559544:{c.instructions+=4;NFSU2_TR(0x559544);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559546:{NFSU2_TR(0x559546);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55954d:{NFSU2_TR(0x55954d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xfd036061ull));
s4(u32(r4(U+0)),r4(U+4));
}
B559554:{NFSU2_TR(0x559554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559559ull));
TAIL_STATIC(0x575620u,575);
}
B559559:L559559:{c.instructions+=5;NFSU2_TR(0x559559);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55955c:{NFSU2_TR(0x55955c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559560:{NFSU2_TR(0x559560);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B559562:{NFSU2_TR(0x559562);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55956a:{NFSU2_TR(0x55956a);
if(r1(R+518)){{goto L559583;}}
}
B55956c:L55956c:{c.instructions+=6;NFSU2_TR(0x55956c);
u8 U[4];
w4(U+0,u32(0x28bf66f6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559571:{NFSU2_TR(0x559571);
u8 U[4];
w4(U+0,u32(0x76167b7eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559576:{NFSU2_TR(0x559576);
u8 U[4];
w4(U+0,u32(0x23ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559578:{NFSU2_TR(0x559578);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55957a:{NFSU2_TR(0x55957a);
__builtin_memmove((R+4),(R+0),4);
}
B55957c:{NFSU2_TR(0x55957c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559581ull));
TAIL_STATIC(0x53aa80u,53a);
}
B559581:L559581:{c.instructions+=1;NFSU2_TR(0x559581);
{goto L559585;}
}
B559583:L559583:{c.instructions+=1;NFSU2_TR(0x559583);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B559585:L559585:{c.instructions+=6;NFSU2_TR(0x559585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B559587:{NFSU2_TR(0x559587);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55958a:{NFSU2_TR(0x55958a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55958b:{NFSU2_TR(0x55958b);
__builtin_memmove((R+4),(R+24),4);
}
B55958d:{NFSU2_TR(0x55958d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559591:{NFSU2_TR(0x559591);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559594ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B559594:L559594:{c.instructions+=2;NFSU2_TR(0x559594);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559596:{NFSU2_TR(0x559596);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55959bull));
TAIL_STATIC(0x575620u,575);
}
B55959b:L55959b:{c.instructions+=5;NFSU2_TR(0x55959b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55959e:{NFSU2_TR(0x55959e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5595a2:{NFSU2_TR(0x5595a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5595a4:{NFSU2_TR(0x5595a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5595ac:{NFSU2_TR(0x5595ac);
if(r1(R+518)){{goto L5595e0;}}
}
B5595ae:L5595ae:{c.instructions+=9;NFSU2_TR(0x5595ae);
__builtin_memmove((R+4),gp(0x7fa204),4);
}
B5595b4:{NFSU2_TR(0x5595b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5595b5:{NFSU2_TR(0x5595b5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5595b7:{NFSU2_TR(0x5595b7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5595b9:{NFSU2_TR(0x5595b9);
u8 U[4];
w4(U+0,u32(0xc8d23393ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5595be:{NFSU2_TR(0x5595be);
u8 U[4];
w4(U+0,u32(0xf7e5b04aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5595c3:{NFSU2_TR(0x5595c3);
u8 U[4];
w4(U+0,u32(0x22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5595c5:{NFSU2_TR(0x5595c5);
__builtin_memmove((R+4),(R+0),4);
}
B5595c7:{NFSU2_TR(0x5595c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5595ccull));
TAIL_STATIC(0x53a9d0u,53a);
}
B5595cc:L5595cc:{c.instructions+=6;NFSU2_TR(0x5595cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5595cf:{NFSU2_TR(0x5595cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5595d1:{NFSU2_TR(0x5595d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5595d2:{NFSU2_TR(0x5595d2);
__builtin_memmove((R+4),(R+24),4);
}
B5595d4:{NFSU2_TR(0x5595d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5595d8:{NFSU2_TR(0x5595d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5595dbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5595db:L5595db:{c.instructions+=1;NFSU2_TR(0x5595db);
{goto L559a14;}
}
B5595e0:L5595e0:{c.instructions+=7;NFSU2_TR(0x5595e0);
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
B5595e2:{NFSU2_TR(0x5595e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5595e5:{NFSU2_TR(0x5595e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5595e7:{NFSU2_TR(0x5595e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5595e8:{NFSU2_TR(0x5595e8);
__builtin_memmove((R+4),(R+24),4);
}
B5595ea:{NFSU2_TR(0x5595ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5595ee:{NFSU2_TR(0x5595ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5595f1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5595f1:L5595f1:{c.instructions+=1;NFSU2_TR(0x5595f1);
{goto L559a14;}
}
B5595f6:L5595f6:{c.instructions+=4;NFSU2_TR(0x5595f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5595f9:{NFSU2_TR(0x5595f9);
u8 U[4];
w4(U+0,u32(0xa2285688ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5595fe:{NFSU2_TR(0x5595fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5595ff:{NFSU2_TR(0x5595ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559604ull));
TAIL_STATIC(0x4954e0u,495);
}
B559604:L559604:{c.instructions+=4;NFSU2_TR(0x559604);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B559607:{NFSU2_TR(0x559607);
u8 U[4];
w4(U+0,u32(0xc318ff76ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55960c:{NFSU2_TR(0x55960c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55960d:{NFSU2_TR(0x55960d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559612ull));
TAIL_STATIC(0x4954e0u,495);
}
B559612:L559612:{c.instructions+=5;NFSU2_TR(0x559612);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B559615:{NFSU2_TR(0x559615);
u8 U[4];
w4(U+0,u32(0x2aadac5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55961a:{NFSU2_TR(0x55961a);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55961f:{NFSU2_TR(0x55961f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559620:{NFSU2_TR(0x559620);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559625ull));
TAIL_STATIC(0x495460u,495);
}
B559625:L559625:{c.instructions+=4;NFSU2_TR(0x559625);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B55962b:{NFSU2_TR(0x55962b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55962d:{NFSU2_TR(0x55962d);
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
B559630:{NFSU2_TR(0x559630);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559633ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B559633:L559633:{c.instructions+=2;NFSU2_TR(0x559633);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559634:{NFSU2_TR(0x559634);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559639ull));
TAIL_STATIC(0x4a5b10u,4a5);
}
B559639:L559639:{c.instructions+=3;NFSU2_TR(0x559639);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55963c:{NFSU2_TR(0x55963c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55963e:{NFSU2_TR(0x55963e);
if(r1(R+518)){{goto L559651;}}
}
B559640:L559640:{c.instructions+=4;NFSU2_TR(0x559640);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559645:{NFSU2_TR(0x559645);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559647:{NFSU2_TR(0x559647);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559649:{NFSU2_TR(0x559649);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55964eull));
TAIL_STATIC(0x4c1860u,4c1);
}
B55964e:L55964e:{c.instructions+=1;NFSU2_TR(0x55964e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B559651:L559651:{c.instructions+=5;NFSU2_TR(0x559651);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B559658:{NFSU2_TR(0x559658);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xde7acec2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55965f:{NFSU2_TR(0x55965f);
w4(R+28,u32(0x23ull));
}
B559664:{NFSU2_TR(0x559664);
w4(R+12,u32(0x6ull));
}
B559669:{NFSU2_TR(0x559669);
__builtin_memmove((R+16),(R+16),4);
}
B559670:L559670:{c.instructions+=3;NFSU2_TR(0x559670);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559671:{NFSU2_TR(0x559671);
w4(R+4,u32(0x8392c0ull));
}
B559676:{NFSU2_TR(0x559676);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55967bull));
TAIL_STATIC(0x6103f0u,610);
}
B55967b:L55967b:{c.instructions+=2;NFSU2_TR(0x55967b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55967d:{NFSU2_TR(0x55967d);
if(r1(R+518)){{goto L5596c8;}}
}
B55967f:L55967f:{c.instructions+=2;NFSU2_TR(0x55967f);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559681:{NFSU2_TR(0x559681);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559686ull));
TAIL_STATIC(0x575620u,575);
}
B559686:L559686:{c.instructions+=5;NFSU2_TR(0x559686);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B559689:{NFSU2_TR(0x559689);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55968d:{NFSU2_TR(0x55968d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55968f:{NFSU2_TR(0x55968f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559693:{NFSU2_TR(0x559693);
if(r1(R+518)){{goto L5596b4;}}
}
B559695:L559695:{c.instructions+=9;NFSU2_TR(0x559695);
__builtin_memmove((R+4),gp(0x7fa204),4);
}
B55969b:{NFSU2_TR(0x55969b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55969c:{NFSU2_TR(0x55969c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55969e:{NFSU2_TR(0x55969e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5596a0:{NFSU2_TR(0x5596a0);
u8 U[4];
w4(U+0,u32(0x3f4b9e43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5596a5:{NFSU2_TR(0x5596a5);
u8 U[4];
w4(U+0,u32(0xe803e1cdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5596aa:{NFSU2_TR(0x5596aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5596ab:{NFSU2_TR(0x5596ab);
__builtin_memmove((R+4),(R+0),4);
}
B5596ad:{NFSU2_TR(0x5596ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5596b2ull));
TAIL_STATIC(0x53a9d0u,53a);
}
B5596b2:L5596b2:{c.instructions+=1;NFSU2_TR(0x5596b2);
{goto L5596b6;}
}
B5596b4:L5596b4:{c.instructions+=1;NFSU2_TR(0x5596b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5596b6:L5596b6:{c.instructions+=7;NFSU2_TR(0x5596b6);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5596b9:{NFSU2_TR(0x5596b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5596bc:{NFSU2_TR(0x5596bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5596be:{NFSU2_TR(0x5596be);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5596c2:{NFSU2_TR(0x5596c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5596c3:{NFSU2_TR(0x5596c3);
__builtin_memmove((R+4),(R+24),4);
}
B5596c5:{NFSU2_TR(0x5596c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5596c8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5596c8:L5596c8:{c.instructions+=3;NFSU2_TR(0x5596c8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5596c9:{NFSU2_TR(0x5596c9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x2eull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5596cc:{NFSU2_TR(0x5596cc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x559670u);}goto L559670;}}
}
B5596ce:L5596ce:{c.instructions+=1;NFSU2_TR(0x5596ce);
{goto L559a14;}
}
B5596d3:L5596d3:{c.instructions+=3;NFSU2_TR(0x5596d3);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B5596d9:{NFSU2_TR(0x5596d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5596db:{NFSU2_TR(0x5596db);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5596deull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5596de:L5596de:{c.instructions+=2;NFSU2_TR(0x5596de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5596df:{NFSU2_TR(0x5596df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5596e4ull));
TAIL_STATIC(0x4a5b10u,4a5);
}
B5596e4:L5596e4:{c.instructions+=3;NFSU2_TR(0x5596e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5596e7:{NFSU2_TR(0x5596e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5596e9:{NFSU2_TR(0x5596e9);
if(r1(R+518)){{goto L559720;}}
}
B5596eb:L5596eb:{c.instructions+=2;NFSU2_TR(0x5596eb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5596ed:{NFSU2_TR(0x5596ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5596f2ull));
TAIL_STATIC(0x4c18b0u,4c1);
}
B5596f2:L5596f2:{c.instructions+=3;NFSU2_TR(0x5596f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5596f5:{NFSU2_TR(0x5596f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5596f7:{NFSU2_TR(0x5596f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L559703;}}
}
B5596f9:L5596f9:{c.instructions+=4;NFSU2_TR(0x5596f9);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5596fe:{NFSU2_TR(0x5596fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5596ff:{NFSU2_TR(0x5596ff);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559701:{NFSU2_TR(0x559701);
{goto L559718;}
}
B559703:L559703:{c.instructions+=2;NFSU2_TR(0x559703);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559705:{NFSU2_TR(0x559705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55970aull));
TAIL_STATIC(0x4c18b0u,4c1);
}
B55970a:L55970a:{c.instructions+=3;NFSU2_TR(0x55970a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55970d:{NFSU2_TR(0x55970d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55970f:{NFSU2_TR(0x55970f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L559720;}}
}
B559711:L559711:{c.instructions+=3;NFSU2_TR(0x559711);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559716:{NFSU2_TR(0x559716);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559717:{NFSU2_TR(0x559717);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559718:L559718:{c.instructions+=1;NFSU2_TR(0x559718);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55971dull));
TAIL_STATIC(0x4c1860u,4c1);
}
B55971d:L55971d:{c.instructions+=1;NFSU2_TR(0x55971d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B559720:L559720:{c.instructions+=5;NFSU2_TR(0x559720);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x264a5f10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B559727:{NFSU2_TR(0x559727);
__builtin_memmove((R+0),gp(0x83898c),4);
}
B55972c:{NFSU2_TR(0x55972c);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B55972f:{NFSU2_TR(0x55972f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B559732:{NFSU2_TR(0x559732);
if(r1(R+518)){{goto L559750;}}
}
B559734:L559734:{c.instructions+=7;NFSU2_TR(0x559734);
u8 U[4];
w4(U+0,u32(0x799a58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559739:{NFSU2_TR(0x559739);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55973a:{NFSU2_TR(0x55973a);
u8 U[4];
w4(U+0,u32(0x1eb104c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55973f:{NFSU2_TR(0x55973f);
u8 U[4];
w4(U+0,u32(0xc591c4b6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559744:{NFSU2_TR(0x559744);
u8 U[4];
w4(U+0,u32(0xa3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559749:{NFSU2_TR(0x559749);
__builtin_memmove((R+4),(R+24),4);
}
B55974b:{NFSU2_TR(0x55974b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559750ull));
TAIL_STATIC(0x53ab30u,53a);
}
B559750:L559750:{c.instructions+=2;NFSU2_TR(0x559750);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559752:{NFSU2_TR(0x559752);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559757ull));
TAIL_STATIC(0x575620u,575);
}
B559757:L559757:{c.instructions+=5;NFSU2_TR(0x559757);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55975a:{NFSU2_TR(0x55975a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55975e:{NFSU2_TR(0x55975e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B559760:{NFSU2_TR(0x559760);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B559768:{NFSU2_TR(0x559768);
if(r1(R+518)){{goto L559786;}}
}
B55976a:L55976a:{c.instructions+=6;NFSU2_TR(0x55976a);
u8 U[4];
w4(U+0,u32(0xa420be7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55976f:{NFSU2_TR(0x55976f);
u8 U[4];
w4(U+0,u32(0x2929058ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559774:{NFSU2_TR(0x559774);
u8 U[4];
w4(U+0,u32(0x9eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559779:{NFSU2_TR(0x559779);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55977b:{NFSU2_TR(0x55977b);
__builtin_memmove((R+4),(R+0),4);
}
B55977d:{NFSU2_TR(0x55977d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559782ull));
TAIL_STATIC(0x53aa80u,53a);
}
B559782:L559782:{c.instructions+=2;NFSU2_TR(0x559782);
__builtin_memmove((R+28),(R+0),4);
}
B559784:{NFSU2_TR(0x559784);
{goto L559788;}
}
B559786:L559786:{c.instructions+=1;NFSU2_TR(0x559786);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B559788:L559788:{c.instructions+=2;NFSU2_TR(0x559788);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55978c:{NFSU2_TR(0x55978c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559791ull));
TAIL_STATIC(0x539fb0u,539);
}
B559791:L559791:{c.instructions+=6;NFSU2_TR(0x559791);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B559794:{NFSU2_TR(0x559794);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x23ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B559798:{NFSU2_TR(0x559798);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B55979a:{NFSU2_TR(0x55979a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55979b:{NFSU2_TR(0x55979b);
__builtin_memmove((R+4),(R+24),4);
}
B55979d:{NFSU2_TR(0x55979d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5597a0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5597a0:L5597a0:{c.instructions+=2;NFSU2_TR(0x5597a0);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5597a2:{NFSU2_TR(0x5597a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5597a7ull));
TAIL_STATIC(0x575620u,575);
}
B5597a7:L5597a7:{c.instructions+=5;NFSU2_TR(0x5597a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5597aa:{NFSU2_TR(0x5597aa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5597ae:{NFSU2_TR(0x5597ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5597b0:{NFSU2_TR(0x5597b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5597b8:{NFSU2_TR(0x5597b8);
if(r1(R+518)){{goto L5597dd;}}
}
B5597ba:L5597ba:{c.instructions+=9;NFSU2_TR(0x5597ba);
__builtin_memmove((R+4),gp(0x7fa204),4);
}
B5597c0:{NFSU2_TR(0x5597c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5597c1:{NFSU2_TR(0x5597c1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5597c3:{NFSU2_TR(0x5597c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5597c5:{NFSU2_TR(0x5597c5);
u8 U[4];
w4(U+0,u32(0xa42419abull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5597ca:{NFSU2_TR(0x5597ca);
u8 U[4];
w4(U+0,u32(0x3f23165cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5597cf:{NFSU2_TR(0x5597cf);
u8 U[4];
w4(U+0,u32(0x99ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5597d4:{NFSU2_TR(0x5597d4);
__builtin_memmove((R+4),(R+0),4);
}
B5597d6:{NFSU2_TR(0x5597d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5597dbull));
TAIL_STATIC(0x53a9d0u,53a);
}
B5597db:L5597db:{c.instructions+=1;NFSU2_TR(0x5597db);
{goto L5597df;}
}
B5597dd:L5597dd:{c.instructions+=1;NFSU2_TR(0x5597dd);
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
B5597df:L5597df:{c.instructions+=6;NFSU2_TR(0x5597df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5597e2:{NFSU2_TR(0x5597e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5597e4:{NFSU2_TR(0x5597e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5597e5:{NFSU2_TR(0x5597e5);
__builtin_memmove((R+4),(R+24),4);
}
B5597e7:{NFSU2_TR(0x5597e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5597eb:{NFSU2_TR(0x5597eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5597eeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5597ee:L5597ee:{c.instructions+=2;NFSU2_TR(0x5597ee);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5597f0:{NFSU2_TR(0x5597f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5597f5ull));
TAIL_STATIC(0x575620u,575);
}
B5597f5:L5597f5:{c.instructions+=5;NFSU2_TR(0x5597f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5597f8:{NFSU2_TR(0x5597f8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5597fc:{NFSU2_TR(0x5597fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5597fe:{NFSU2_TR(0x5597fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B559806:{NFSU2_TR(0x559806);
if(r1(R+518)){{goto L55982b;}}
}
B559808:L559808:{c.instructions+=9;NFSU2_TR(0x559808);
__builtin_memmove((R+4),gp(0x7fa204),4);
}
B55980e:{NFSU2_TR(0x55980e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55980f:{NFSU2_TR(0x55980f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559811:{NFSU2_TR(0x559811);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559813:{NFSU2_TR(0x559813);
u8 U[4];
w4(U+0,u32(0xef6679c9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559818:{NFSU2_TR(0x559818);
u8 U[4];
w4(U+0,u32(0x599c870full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55981d:{NFSU2_TR(0x55981d);
u8 U[4];
w4(U+0,u32(0x9full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559822:{NFSU2_TR(0x559822);
__builtin_memmove((R+4),(R+0),4);
}
B559824:{NFSU2_TR(0x559824);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559829ull));
TAIL_STATIC(0x53a9d0u,53a);
}
B559829:L559829:{c.instructions+=1;NFSU2_TR(0x559829);
{goto L55982d;}
}
B55982b:L55982b:{c.instructions+=1;NFSU2_TR(0x55982b);
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
B55982d:L55982d:{c.instructions+=6;NFSU2_TR(0x55982d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559830:{NFSU2_TR(0x559830);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B559832:{NFSU2_TR(0x559832);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559833:{NFSU2_TR(0x559833);
__builtin_memmove((R+4),(R+24),4);
}
B559835:{NFSU2_TR(0x559835);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559839:{NFSU2_TR(0x559839);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55983cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55983c:L55983c:{c.instructions+=2;NFSU2_TR(0x55983c);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55983e:{NFSU2_TR(0x55983e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559843ull));
TAIL_STATIC(0x575620u,575);
}
B559843:L559843:{c.instructions+=5;NFSU2_TR(0x559843);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B559846:{NFSU2_TR(0x559846);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55984a:{NFSU2_TR(0x55984a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55984c:{NFSU2_TR(0x55984c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xdull));
s4(u32(r4(U+0)),r4(U+4));
}
B559854:{NFSU2_TR(0x559854);
if(r1(R+518)){{goto L559879;}}
}
B559856:L559856:{c.instructions+=9;NFSU2_TR(0x559856);
__builtin_memmove((R+4),gp(0x7fa204),4);
}
B55985c:{NFSU2_TR(0x55985c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55985d:{NFSU2_TR(0x55985d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55985f:{NFSU2_TR(0x55985f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559861:{NFSU2_TR(0x559861);
u8 U[4];
w4(U+0,u32(0x2981cd3eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559866:{NFSU2_TR(0x559866);
u8 U[4];
w4(U+0,u32(0xbded289aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55986b:{NFSU2_TR(0x55986b);
u8 U[4];
w4(U+0,u32(0xa2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559870:{NFSU2_TR(0x559870);
__builtin_memmove((R+4),(R+0),4);
}
B559872:{NFSU2_TR(0x559872);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559877ull));
TAIL_STATIC(0x53a9d0u,53a);
}
B559877:L559877:{c.instructions+=1;NFSU2_TR(0x559877);
{goto L55987b;}
}
B559879:L559879:{c.instructions+=1;NFSU2_TR(0x559879);
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
B55987b:L55987b:{c.instructions+=6;NFSU2_TR(0x55987b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55987e:{NFSU2_TR(0x55987e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B559880:{NFSU2_TR(0x559880);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559881:{NFSU2_TR(0x559881);
__builtin_memmove((R+4),(R+24),4);
}
B559883:{NFSU2_TR(0x559883);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559887:{NFSU2_TR(0x559887);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55988aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55988a:L55988a:{c.instructions+=2;NFSU2_TR(0x55988a);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55988c:{NFSU2_TR(0x55988c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559891ull));
TAIL_STATIC(0x575620u,575);
}
B559891:L559891:{c.instructions+=5;NFSU2_TR(0x559891);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B559894:{NFSU2_TR(0x559894);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559898:{NFSU2_TR(0x559898);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55989a:{NFSU2_TR(0x55989a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B5598a2:{NFSU2_TR(0x5598a2);
if(r1(R+518)){{goto L5598c7;}}
}
B5598a4:L5598a4:{c.instructions+=9;NFSU2_TR(0x5598a4);
__builtin_memmove((R+4),gp(0x7fa204),4);
}
B5598aa:{NFSU2_TR(0x5598aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5598ab:{NFSU2_TR(0x5598ab);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5598ad:{NFSU2_TR(0x5598ad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5598af:{NFSU2_TR(0x5598af);
u8 U[4];
w4(U+0,u32(0xeac74624ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5598b4:{NFSU2_TR(0x5598b4);
u8 U[4];
w4(U+0,u32(0xc9e0d00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5598b9:{NFSU2_TR(0x5598b9);
u8 U[4];
w4(U+0,u32(0xa1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5598be:{NFSU2_TR(0x5598be);
__builtin_memmove((R+4),(R+0),4);
}
B5598c0:{NFSU2_TR(0x5598c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5598c5ull));
TAIL_STATIC(0x53a9d0u,53a);
}
B5598c5:L5598c5:{c.instructions+=1;NFSU2_TR(0x5598c5);
{goto L5598c9;}
}
B5598c7:L5598c7:{c.instructions+=1;NFSU2_TR(0x5598c7);
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
B5598c9:L5598c9:{c.instructions+=6;NFSU2_TR(0x5598c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5598cc:{NFSU2_TR(0x5598cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5598ce:{NFSU2_TR(0x5598ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5598cf:{NFSU2_TR(0x5598cf);
__builtin_memmove((R+4),(R+24),4);
}
B5598d1:{NFSU2_TR(0x5598d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5598d5:{NFSU2_TR(0x5598d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5598d8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5598d8:L5598d8:{c.instructions+=2;NFSU2_TR(0x5598d8);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5598da:{NFSU2_TR(0x5598da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5598dfull));
TAIL_STATIC(0x575620u,575);
}
B5598df:L5598df:{c.instructions+=5;NFSU2_TR(0x5598df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5598e2:{NFSU2_TR(0x5598e2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5598e6:{NFSU2_TR(0x5598e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5598e8:{NFSU2_TR(0x5598e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5598f0:{NFSU2_TR(0x5598f0);
if(r1(R+518)){{goto L5598fb;}}
}
B5598f2:L5598f2:{c.instructions+=2;NFSU2_TR(0x5598f2);
__builtin_memmove((R+4),(R+0),4);
}
B5598f4:{NFSU2_TR(0x5598f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5598f9ull));
TAIL_STATIC(0x53aac0u,53a);
}
B5598f9:L5598f9:{c.instructions+=1;NFSU2_TR(0x5598f9);
{goto L5598fd;}
}
B5598fb:L5598fb:{c.instructions+=1;NFSU2_TR(0x5598fb);
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
B5598fd:L5598fd:{c.instructions+=5;NFSU2_TR(0x5598fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5598ff:{NFSU2_TR(0x5598ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559900:{NFSU2_TR(0x559900);
__builtin_memmove((R+4),(R+24),4);
}
B559902:{NFSU2_TR(0x559902);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559906:{NFSU2_TR(0x559906);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559909ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B559909:L559909:{c.instructions+=2;NFSU2_TR(0x559909);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55990b:{NFSU2_TR(0x55990b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559910ull));
TAIL_STATIC(0x575620u,575);
}
B559910:L559910:{c.instructions+=5;NFSU2_TR(0x559910);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B559913:{NFSU2_TR(0x559913);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559917:{NFSU2_TR(0x559917);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B559919:{NFSU2_TR(0x559919);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B559921:{NFSU2_TR(0x559921);
if(r1(R+518)){{goto L559943;}}
}
B559923:L559923:{c.instructions+=9;NFSU2_TR(0x559923);
__builtin_memmove((R+4),gp(0x7fa204),4);
}
B559929:{NFSU2_TR(0x559929);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55992a:{NFSU2_TR(0x55992a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55992c:{NFSU2_TR(0x55992c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55992e:{NFSU2_TR(0x55992e);
u8 U[4];
w4(U+0,u32(0x94a635eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559933:{NFSU2_TR(0x559933);
u8 U[4];
w4(U+0,u32(0xdc9c33aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559938:{NFSU2_TR(0x559938);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55993a:{NFSU2_TR(0x55993a);
__builtin_memmove((R+4),(R+0),4);
}
B55993c:{NFSU2_TR(0x55993c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559941ull));
TAIL_STATIC(0x53a9d0u,53a);
}
B559941:L559941:{c.instructions+=1;NFSU2_TR(0x559941);
{goto L559945;}
}
B559943:L559943:{c.instructions+=1;NFSU2_TR(0x559943);
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
B559945:L559945:{c.instructions+=6;NFSU2_TR(0x559945);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559948:{NFSU2_TR(0x559948);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B55994a:{NFSU2_TR(0x55994a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55994b:{NFSU2_TR(0x55994b);
__builtin_memmove((R+4),(R+24),4);
}
B55994d:{NFSU2_TR(0x55994d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559951:{NFSU2_TR(0x559951);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559954ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B559954:L559954:{c.instructions+=2;NFSU2_TR(0x559954);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559956:{NFSU2_TR(0x559956);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55995bull));
TAIL_STATIC(0x575620u,575);
}
B55995b:L55995b:{c.instructions+=5;NFSU2_TR(0x55995b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55995e:{NFSU2_TR(0x55995e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559962:{NFSU2_TR(0x559962);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B559964:{NFSU2_TR(0x559964);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55996c:{NFSU2_TR(0x55996c);
if(r1(R+518)){{goto L55998e;}}
}
B55996e:L55996e:{c.instructions+=9;NFSU2_TR(0x55996e);
__builtin_memmove((R+4),gp(0x7fa204),4);
}
B559974:{NFSU2_TR(0x559974);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559975:{NFSU2_TR(0x559975);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559977:{NFSU2_TR(0x559977);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559979:{NFSU2_TR(0x559979);
u8 U[4];
w4(U+0,u32(0xa41d9eb6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55997e:{NFSU2_TR(0x55997e);
u8 U[4];
w4(U+0,u32(0x5a309b10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559983:{NFSU2_TR(0x559983);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559985:{NFSU2_TR(0x559985);
__builtin_memmove((R+4),(R+0),4);
}
B559987:{NFSU2_TR(0x559987);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55998cull));
TAIL_STATIC(0x53a9d0u,53a);
}
B55998c:L55998c:{c.instructions+=1;NFSU2_TR(0x55998c);
{goto L559990;}
}
B55998e:L55998e:{c.instructions+=1;NFSU2_TR(0x55998e);
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
B559990:L559990:{c.instructions+=6;NFSU2_TR(0x559990);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B559997:{NFSU2_TR(0x559997);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B559999:{NFSU2_TR(0x559999);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55999a:{NFSU2_TR(0x55999a);
__builtin_memmove((R+4),(R+24),4);
}
B55999c:{NFSU2_TR(0x55999c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5599a0:{NFSU2_TR(0x5599a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5599a3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5599a3:L5599a3:{c.instructions+=2;NFSU2_TR(0x5599a3);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5599a5:{NFSU2_TR(0x5599a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5599aaull));
TAIL_STATIC(0x575620u,575);
}
B5599aa:L5599aa:{c.instructions+=5;NFSU2_TR(0x5599aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5599ad:{NFSU2_TR(0x5599ad);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5599b1:{NFSU2_TR(0x5599b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5599b3:{NFSU2_TR(0x5599b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x16ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5599bb:{NFSU2_TR(0x5599bb);
if(r1(R+518)){{goto L5599e0;}}
}
B5599bd:L5599bd:{c.instructions+=9;NFSU2_TR(0x5599bd);
__builtin_memmove((R+4),gp(0x7fa204),4);
}
B5599c3:{NFSU2_TR(0x5599c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5599c4:{NFSU2_TR(0x5599c4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5599c6:{NFSU2_TR(0x5599c6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5599c8:{NFSU2_TR(0x5599c8);
u8 U[4];
w4(U+0,u32(0x27891593ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5599cd:{NFSU2_TR(0x5599cd);
u8 U[4];
w4(U+0,u32(0xb2798bb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5599d2:{NFSU2_TR(0x5599d2);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5599d7:{NFSU2_TR(0x5599d7);
__builtin_memmove((R+4),(R+0),4);
}
B5599d9:{NFSU2_TR(0x5599d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5599deull));
TAIL_STATIC(0x53a9d0u,53a);
}
B5599de:L5599de:{c.instructions+=1;NFSU2_TR(0x5599de);
{goto L5599e2;}
}
B5599e0:L5599e0:{c.instructions+=1;NFSU2_TR(0x5599e0);
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
B5599e2:L5599e2:{c.instructions+=6;NFSU2_TR(0x5599e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5599e9:{NFSU2_TR(0x5599e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5599eb:{NFSU2_TR(0x5599eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5599ec:{NFSU2_TR(0x5599ec);
__builtin_memmove((R+4),(R+24),4);
}
B5599ee:{NFSU2_TR(0x5599ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5599f2:{NFSU2_TR(0x5599f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5599f5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5599f5:L5599f5:{c.instructions+=4;NFSU2_TR(0x5599f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5599f8:{NFSU2_TR(0x5599f8);
u8 U[4];
w4(U+0,u32(0xa2285688ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5599fd:{NFSU2_TR(0x5599fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5599fe:{NFSU2_TR(0x5599fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559a03ull));
TAIL_STATIC(0x4954e0u,495);
}
B559a03:L559a03:{c.instructions+=4;NFSU2_TR(0x559a03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B559a06:{NFSU2_TR(0x559a06);
u8 U[4];
w4(U+0,u32(0xc318ff76ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559a0b:{NFSU2_TR(0x559a0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559a0c:{NFSU2_TR(0x559a0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559a11ull));
TAIL_STATIC(0x4954e0u,495);
}
B559a11:L559a11:{c.instructions+=1;NFSU2_TR(0x559a11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B559a14:L559a14:{c.instructions+=2;NFSU2_TR(0x559a14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B559a15:{NFSU2_TR(0x559a15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B559a16:L559a16:{c.instructions+=4;NFSU2_TR(0x559a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B559a19:{NFSU2_TR(0x559a19);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B559a1c:{NFSU2_TR(0x559a1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B559a1e:{NFSU2_TR(0x559a1e);
if(r1(R+518)){{goto L559a40;}}
}
B559a20:L559a20:{c.instructions+=3;NFSU2_TR(0x559a20);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B559a22:{NFSU2_TR(0x559a22);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B559a24:{NFSU2_TR(0x559a24);
if(r1(R+518)){{goto L559a40;}}
}
B559a26:L559a26:{c.instructions+=3;NFSU2_TR(0x559a26);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B559a29:{NFSU2_TR(0x559a29);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B559a2b:{NFSU2_TR(0x559a2b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L559a33;}}
}
B559a2d:L559a2d:{c.instructions+=2;NFSU2_TR(0x559a2d);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B559a2f:{NFSU2_TR(0x559a2f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L559a33;}}
}
B559a31:L559a31:{c.instructions+=1;NFSU2_TR(0x559a31);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B559a33:L559a33:{c.instructions+=6;NFSU2_TR(0x559a33);
w4(R+0,u32(r1(R+0)));
}
B559a36:{NFSU2_TR(0x559a36);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B559a38:{NFSU2_TR(0x559a38);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B559a3b:{NFSU2_TR(0x559a3b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B559a3c:{NFSU2_TR(0x559a3c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B559a3e:{NFSU2_TR(0x559a3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x559a26u);}goto L559a26;}}
}
B559a40:L559a40:{c.instructions+=2;NFSU2_TR(0x559a40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559a41:{NFSU2_TR(0x559a41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559a46ull));
TAIL_STATIC(0x50b840u,50b);
}
B559a46:L559a46:{c.instructions+=3;NFSU2_TR(0x559a46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B559a49:{NFSU2_TR(0x559a49);
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
B559a4b:{NFSU2_TR(0x559a4b);
if(r1(R+518)){{goto L559a52;}}
}
B559a4d:L559a4d:{c.instructions+=2;NFSU2_TR(0x559a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B559a50:{NFSU2_TR(0x559a50);
{goto L559a54;}
}
B559a52:L559a52:{c.instructions+=1;NFSU2_TR(0x559a52);
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
B559a54:L559a54:{c.instructions+=4;NFSU2_TR(0x559a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B559a57:{NFSU2_TR(0x559a57);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B559a5a:{NFSU2_TR(0x559a5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559a5b:{NFSU2_TR(0x559a5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559a5eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B559a5e:L559a5e:{c.instructions+=4;NFSU2_TR(0x559a5e);
__builtin_memmove((R+0),gp(0x7fa1c0),4);
}
B559a63:{NFSU2_TR(0x559a63);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559a68:{NFSU2_TR(0x559a68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559a69:{NFSU2_TR(0x559a69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559a6eull));
TAIL_STATIC(0x4954e0u,495);
}
B559a6e:L559a6e:{c.instructions+=4;NFSU2_TR(0x559a6e);
__builtin_memmove((R+4),gp(0x7fa1c0),4);
}
B559a74:{NFSU2_TR(0x559a74);
u8 U[4];
w4(U+0,u32(0x89782734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559a79:{NFSU2_TR(0x559a79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559a7a:{NFSU2_TR(0x559a7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559a7full));
TAIL_STATIC(0x4954e0u,495);
}
B559a7f:L559a7f:{c.instructions+=6;NFSU2_TR(0x559a7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B559a83:{NFSU2_TR(0x559a83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B559a86:{NFSU2_TR(0x559a86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B559a87:{NFSU2_TR(0x559a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559a8e:{NFSU2_TR(0x559a8e);
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
B559a91:{NFSU2_TR(0x559a91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B559ab0:L559ab0:{c.instructions+=9;NFSU2_TR(0x559ab0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559ab1:{NFSU2_TR(0x559ab1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559ab2:{NFSU2_TR(0x559ab2);
__builtin_memmove((R+24),(R+4),4);
}
B559ab4:{NFSU2_TR(0x559ab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B559aba:{NFSU2_TR(0x559aba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559abb:{NFSU2_TR(0x559abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B559abe:{NFSU2_TR(0x559abe);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559ac0:{NFSU2_TR(0x559ac0);
w4(R+4,u32(0x8392c0ull));
}
B559ac5:{NFSU2_TR(0x559ac5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559acaull));
TAIL_STATIC(0x6102f0u,610);
}
B559aca:L559aca:{c.instructions+=2;NFSU2_TR(0x559aca);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B559acc:{NFSU2_TR(0x559acc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L559af3;}}
}
B559ace:L559ace:{c.instructions+=5;NFSU2_TR(0x559ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B559ad1:{NFSU2_TR(0x559ad1);
u8 U[4];
w4(U+0,u32(0xda15d7e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559ad6:{NFSU2_TR(0x559ad6);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559adb:{NFSU2_TR(0x559adb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559adc:{NFSU2_TR(0x559adc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559ae1ull));
TAIL_STATIC(0x558430u,558);
}
B559ae1:L559ae1:{c.instructions+=3;NFSU2_TR(0x559ae1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B559ae4:{NFSU2_TR(0x559ae4);
s4(0x838970,u32(0x34dc1becull));
}
B559aee:{NFSU2_TR(0x559aee);
{goto L559bed;}
}
B559af3:L559af3:{c.instructions+=3;NFSU2_TR(0x559af3);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B559afa:{NFSU2_TR(0x559afa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559afb:{NFSU2_TR(0x559afb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L559bb1;}}
}
B559b01:L559b01:{c.instructions+=4;NFSU2_TR(0x559b01);
__builtin_memmove((R+8),gp(0x863480),4);
}
B559b07:{NFSU2_TR(0x559b07);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559b08:{NFSU2_TR(0x559b08);
w4(R+4,u32(0x83ad90ull));
}
B559b0d:{NFSU2_TR(0x559b0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559b12ull));
TAIL_STATIC(0x503680u,503);
}
B559b12:L559b12:{c.instructions+=2;NFSU2_TR(0x559b12);
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
B559b14:{NFSU2_TR(0x559b14);
if(r1(R+518)){{goto L559b47;}}
}
B559b16:L559b16:{c.instructions+=7;NFSU2_TR(0x559b16);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B559b1a:{NFSU2_TR(0x559b1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559b1b:{NFSU2_TR(0x559b1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559b1c:{NFSU2_TR(0x559b1c);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559b1e:{NFSU2_TR(0x559b1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x434ull))));
__builtin_memmove((R+4),(U+0),4);
}
B559b24:{NFSU2_TR(0x559b24);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B559b2c:{NFSU2_TR(0x559b2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559b31ull));
TAIL_STATIC(0x503b10u,503);
}
B559b31:L559b31:{c.instructions+=8;NFSU2_TR(0x559b31);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B559b35:{NFSU2_TR(0x559b35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B559b37:{NFSU2_TR(0x559b37);
w4(R+8,u32(0x1ull));
}
B559b3c:{NFSU2_TR(0x559b3c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B559b3e:{NFSU2_TR(0x559b3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B559b40:{NFSU2_TR(0x559b40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B559b43:{NFSU2_TR(0x559b43);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B559b45:{NFSU2_TR(0x559b45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L559bb1;}}
}
B559b47:L559b47:{c.instructions+=2;NFSU2_TR(0x559b47);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xe0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B559b4b:{NFSU2_TR(0x559b4b);
if(r1(R+518)){{goto L559bb1;}}
}
B559b4d:L559b4d:{c.instructions+=5;NFSU2_TR(0x559b4d);
__builtin_memmove((R+12),gp(0x861e74),4);
}
B559b53:{NFSU2_TR(0x559b53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559b54:{NFSU2_TR(0x559b54);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559b56:{NFSU2_TR(0x559b56);
w4(R+4,u32(0x85ad40ull));
}
B559b5b:{NFSU2_TR(0x559b5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559b60ull));
TAIL_STATIC(0x514280u,514);
}
B559b60:L559b60:{c.instructions+=2;NFSU2_TR(0x559b60);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B559b62:{NFSU2_TR(0x559b62);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L559b86;}}
}
B559b64:L559b64:{c.instructions+=5;NFSU2_TR(0x559b64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B559b67:{NFSU2_TR(0x559b67);
u8 U[4];
w4(U+0,u32(0xd1ac60beull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559b6c:{NFSU2_TR(0x559b6c);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559b71:{NFSU2_TR(0x559b71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559b72:{NFSU2_TR(0x559b72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559b77ull));
TAIL_STATIC(0x558430u,558);
}
B559b77:L559b77:{c.instructions+=3;NFSU2_TR(0x559b77);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B559b7a:{NFSU2_TR(0x559b7a);
s4(0x838970,u32(0x34dc1becull));
}
B559b84:{NFSU2_TR(0x559b84);
{goto L559bec;}
}
B559b86:L559b86:{c.instructions+=11;NFSU2_TR(0x559b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B559b89:{NFSU2_TR(0x559b89);
u8 U[4];
w4(U+0,u32(0x44b7167full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559b8e:{NFSU2_TR(0x559b8e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559b90:{NFSU2_TR(0x559b90);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559b95:{NFSU2_TR(0x559b95);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559b9a:{NFSU2_TR(0x559b9a);
u8 U[4];
w4(U+0,u32(0x9f00f07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559b9f:{NFSU2_TR(0x559b9f);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559ba4:{NFSU2_TR(0x559ba4);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559ba9:{NFSU2_TR(0x559ba9);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559bae:{NFSU2_TR(0x559bae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559baf:{NFSU2_TR(0x559baf);
{goto L559bda;}
}
B559bb1:L559bb1:{c.instructions+=10;NFSU2_TR(0x559bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B559bb4:{NFSU2_TR(0x559bb4);
u8 U[4];
w4(U+0,u32(0xf5ac2b2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559bb9:{NFSU2_TR(0x559bb9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559bbb:{NFSU2_TR(0x559bbb);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559bc0:{NFSU2_TR(0x559bc0);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559bc5:{NFSU2_TR(0x559bc5);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559bca:{NFSU2_TR(0x559bca);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559bcf:{NFSU2_TR(0x559bcf);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559bd4:{NFSU2_TR(0x559bd4);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559bd9:{NFSU2_TR(0x559bd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559bda:L559bda:{c.instructions+=1;NFSU2_TR(0x559bda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559bdfull));
TAIL_STATIC(0x558790u,558);
}
B559bdf:L559bdf:{c.instructions+=2;NFSU2_TR(0x559bdf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B559be2:{NFSU2_TR(0x559be2);
s4(0x838970,u32(0x1fab5998ull));
}
B559bec:L559bec:{c.instructions+=1;NFSU2_TR(0x559bec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B559bed:L559bed:{c.instructions+=4;NFSU2_TR(0x559bed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B559bf3:{NFSU2_TR(0x559bf3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559bf5:{NFSU2_TR(0x559bf5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B559bf9:{NFSU2_TR(0x559bf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559bfeull));
TAIL_STATIC(0x52eb90u,52e);
}
B559bfe:L559bfe:{c.instructions+=2;NFSU2_TR(0x559bfe);
__builtin_memmove((R+4),(R+24),4);
}
B559c00:{NFSU2_TR(0x559c00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559c05ull));
TAIL_STATIC(0x538c00u,538);
}
B559c05:L559c05:{c.instructions+=6;NFSU2_TR(0x559c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B559c08:{NFSU2_TR(0x559c08);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8380b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B559c0f:{NFSU2_TR(0x559c0f);
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
B559c12:{NFSU2_TR(0x559c12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B559c13:{NFSU2_TR(0x559c13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B559c14:{NFSU2_TR(0x559c14);
if(r1(R+518)){{goto L559c22;}}
}
B559c16:L559c16:{c.instructions+=3;NFSU2_TR(0x559c16);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B559c1c:{NFSU2_TR(0x559c1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559c1d:{NFSU2_TR(0x559c1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559c22ull));
TAIL_STATIC(0x458520u,458);
}
B559c22:L559c22:{c.instructions+=2;NFSU2_TR(0x559c22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B559c23:{NFSU2_TR(0x559c23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B559c30:L559c30:{c.instructions+=8;NFSU2_TR(0x559c30);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559c32:{NFSU2_TR(0x559c32);
u8 U[4];
w4(U+0,u32(0x7782a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559c37:{NFSU2_TR(0x559c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B559c3d:{NFSU2_TR(0x559c3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559c3e:{NFSU2_TR(0x559c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559c45:{NFSU2_TR(0x559c45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559c46:{NFSU2_TR(0x559c46);
u8 U[4];
w4(U+0,u32(0x154ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559c4b:{NFSU2_TR(0x559c4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559c50ull));
TAIL_STATIC(0x575620u,575);
}
B559c50:L559c50:{c.instructions+=5;NFSU2_TR(0x559c50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B559c53:{NFSU2_TR(0x559c53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B559c57:{NFSU2_TR(0x559c57);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B559c59:{NFSU2_TR(0x559c59);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B559c61:{NFSU2_TR(0x559c61);
if(r1(R+518)){{goto L559c7e;}}
}
B559c63:L559c63:{c.instructions+=4;NFSU2_TR(0x559c63);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B559c67:{NFSU2_TR(0x559c67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559c68:{NFSU2_TR(0x559c68);
__builtin_memmove((R+4),(R+0),4);
}
B559c6a:{NFSU2_TR(0x559c6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559c6full));
TAIL_STATIC(0x556c80u,556);
}
B559c6f:L559c6f:{c.instructions+=4;NFSU2_TR(0x559c6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B559c73:{NFSU2_TR(0x559c73);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559c7a:{NFSU2_TR(0x559c7a);
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
B559c7d:{NFSU2_TR(0x559c7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B559c7e:L559c7e:{c.instructions+=5;NFSU2_TR(0x559c7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B559c82:{NFSU2_TR(0x559c82);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B559c84:{NFSU2_TR(0x559c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559c8b:{NFSU2_TR(0x559c8b);
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
B559c8e:{NFSU2_TR(0x559c8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B559c90:L559c90:{c.instructions+=14;NFSU2_TR(0x559c90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559c92:{NFSU2_TR(0x559c92);
u8 U[4];
w4(U+0,u32(0x7782f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559c97:{NFSU2_TR(0x559c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B559c9d:{NFSU2_TR(0x559c9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559c9e:{NFSU2_TR(0x559c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559ca5:{NFSU2_TR(0x559ca5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559ca6:{NFSU2_TR(0x559ca6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B559caa:{NFSU2_TR(0x559caa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559cab:{NFSU2_TR(0x559cab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559cac:{NFSU2_TR(0x559cac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559cad:{NFSU2_TR(0x559cad);
__builtin_memmove((R+24),(R+4),4);
}
B559caf:{NFSU2_TR(0x559caf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559cb0:{NFSU2_TR(0x559cb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559cb4:{NFSU2_TR(0x559cb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559cb9ull));
TAIL_STATIC(0x552330u,552);
}
B559cb9:L559cb9:{c.instructions+=74;NFSU2_TR(0x559cb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B559cbf:{NFSU2_TR(0x559cbf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B559cc1:{NFSU2_TR(0x559cc1);
u8 U[4];
w4(U+0,u32(0x79d2d0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B559cc7:{NFSU2_TR(0x559cc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559ccb:{NFSU2_TR(0x559ccb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B559ccd:{NFSU2_TR(0x559ccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559cd0:{NFSU2_TR(0x559cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559cd6:{NFSU2_TR(0x559cd6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B559cdc:{NFSU2_TR(0x559cdc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x161ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B559ce2:{NFSU2_TR(0x559ce2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x162ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B559ce8:{NFSU2_TR(0x559ce8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x163ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B559cee:{NFSU2_TR(0x559cee);
w4(R+8,u32(0x783fe5ull));
}
B559cf3:{NFSU2_TR(0x559cf3);
w4(R+4,u32(0x42380000ull));
}
B559cf8:{NFSU2_TR(0x559cf8);
w4(R+0,u32(0x79ae30ull));
}
B559cfd:{NFSU2_TR(0x559cfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d03:{NFSU2_TR(0x559d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d09:{NFSU2_TR(0x559d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d0f:{NFSU2_TR(0x559d0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d15:{NFSU2_TR(0x559d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d1b:{NFSU2_TR(0x559d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d21:{NFSU2_TR(0x559d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d27:{NFSU2_TR(0x559d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d2d:{NFSU2_TR(0x559d2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d33:{NFSU2_TR(0x559d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d39:{NFSU2_TR(0x559d39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d3f:{NFSU2_TR(0x559d3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d45:{NFSU2_TR(0x559d45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d4b:{NFSU2_TR(0x559d4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d51:{NFSU2_TR(0x559d51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d57:{NFSU2_TR(0x559d57);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B559d5d:{NFSU2_TR(0x559d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d63:{NFSU2_TR(0x559d63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d69:{NFSU2_TR(0x559d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d6f:{NFSU2_TR(0x559d6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d75:{NFSU2_TR(0x559d75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d7b:{NFSU2_TR(0x559d7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d81:{NFSU2_TR(0x559d81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d87:{NFSU2_TR(0x559d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d8d:{NFSU2_TR(0x559d8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d93:{NFSU2_TR(0x559d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d99:{NFSU2_TR(0x559d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559d9f:{NFSU2_TR(0x559d9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559da5:{NFSU2_TR(0x559da5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559dab:{NFSU2_TR(0x559dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559db1:{NFSU2_TR(0x559db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559db7:{NFSU2_TR(0x559db7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559dbd:{NFSU2_TR(0x559dbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559dc3:{NFSU2_TR(0x559dc3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B559dc9:{NFSU2_TR(0x559dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559dcf:{NFSU2_TR(0x559dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559dd5:{NFSU2_TR(0x559dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x204ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559ddb:{NFSU2_TR(0x559ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559de1:{NFSU2_TR(0x559de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559de7:{NFSU2_TR(0x559de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559ded:{NFSU2_TR(0x559ded);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559df3:{NFSU2_TR(0x559df3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559df9:{NFSU2_TR(0x559df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559dff:{NFSU2_TR(0x559dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559e05:{NFSU2_TR(0x559e05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559e0b:{NFSU2_TR(0x559e0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559e11:{NFSU2_TR(0x559e11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559e17:{NFSU2_TR(0x559e17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559e1d:{NFSU2_TR(0x559e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559e23:{NFSU2_TR(0x559e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559e29:{NFSU2_TR(0x559e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559e2f:{NFSU2_TR(0x559e2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B559e35:{NFSU2_TR(0x559e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559e3b:{NFSU2_TR(0x559e3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559e41:{NFSU2_TR(0x559e41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559e47:{NFSU2_TR(0x559e47);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B559e4d:{NFSU2_TR(0x559e4d);
__builtin_memmove((R+4),(R+24),4);
}
B559e4f:{NFSU2_TR(0x559e4f);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B559e54:{NFSU2_TR(0x559e54);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B559e5a:{NFSU2_TR(0x559e5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559e5full));
TAIL_STATIC(0x547a00u,547);
}
B559e5f:L559e5f:{c.instructions+=3;NFSU2_TR(0x559e5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B559e62:{NFSU2_TR(0x559e62);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B559e64:{NFSU2_TR(0x559e64);
if(r1(R+518)){{goto L559e83;}}
}
B559e66:L559e66:{c.instructions+=2;NFSU2_TR(0x559e66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559e67:{NFSU2_TR(0x559e67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559e6cull));
TAIL_STATIC(0x52cef0u,52c);
}
B559e6c:L559e6c:{c.instructions+=3;NFSU2_TR(0x559e6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B559e6f:{NFSU2_TR(0x559e6f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B559e71:{NFSU2_TR(0x559e71);
if(r1(R+518)){{goto L559e83;}}
}
B559e73:L559e73:{c.instructions+=3;NFSU2_TR(0x559e73);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559e78:{NFSU2_TR(0x559e78);
__builtin_memmove((R+4),(R+0),4);
}
B559e7a:{NFSU2_TR(0x559e7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559e7full));
TAIL_STATIC(0x517f80u,517);
}
B559e7f:L559e7f:{c.instructions+=2;NFSU2_TR(0x559e7f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B559e81:{NFSU2_TR(0x559e81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L559e9e;}}
}
B559e83:L559e83:{c.instructions+=3;NFSU2_TR(0x559e83);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B559e88:{NFSU2_TR(0x559e88);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B559e8a:{NFSU2_TR(0x559e8a);
if(r1(R+518)){{goto L559ea4;}}
}
B559e8c:L559e8c:{c.instructions+=4;NFSU2_TR(0x559e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B559e8f:{NFSU2_TR(0x559e8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559e90:{NFSU2_TR(0x559e90);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559e95:{NFSU2_TR(0x559e95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559e9aull));
TAIL_STATIC(0x52c570u,52c);
}
B559e9a:L559e9a:{c.instructions+=2;NFSU2_TR(0x559e9a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B559e9c:{NFSU2_TR(0x559e9c);
if(r1(R+518)){{goto L559ea4;}}
}
B559e9e:L559e9e:{c.instructions+=2;NFSU2_TR(0x559e9e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B559ea2:{NFSU2_TR(0x559ea2);
if(r1(R+518)){{goto L559ea6;}}
}
B559ea4:L559ea4:{c.instructions+=1;NFSU2_TR(0x559ea4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B559ea6:L559ea6:{c.instructions+=3;NFSU2_TR(0x559ea6);
__builtin_memmove((R+4),(R+24),4);
}
B559ea8:{NFSU2_TR(0x559ea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559eae:{NFSU2_TR(0x559eae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559eb3ull));
TAIL_STATIC(0x556e60u,556);
}
B559eb3:L559eb3:{c.instructions+=4;NFSU2_TR(0x559eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x8109153dull));
s4(u32(r4(U+0)),r4(U+4));
}
B559eba:{NFSU2_TR(0x559eba);
__builtin_memmove((R+4),gp(0x7fa1c8),4);
}
B559ec0:{NFSU2_TR(0x559ec0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559ec1:{NFSU2_TR(0x559ec1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559ec6ull));
TAIL_STATIC(0x52cef0u,52c);
}
B559ec6:L559ec6:{c.instructions+=3;NFSU2_TR(0x559ec6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B559ec9:{NFSU2_TR(0x559ec9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B559ecb:{NFSU2_TR(0x559ecb);
if(r1(R+518)){{goto L559ed9;}}
}
B559ecd:L559ecd:{c.instructions+=4;NFSU2_TR(0x559ecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559ed0:{NFSU2_TR(0x559ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559ed3:{NFSU2_TR(0x559ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559ed6:{NFSU2_TR(0x559ed6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559ed9:L559ed9:{c.instructions+=8;NFSU2_TR(0x559ed9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B559edd:{NFSU2_TR(0x559edd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B559ede:{NFSU2_TR(0x559ede);
__builtin_memmove((R+0),(R+24),4);
}
B559ee0:{NFSU2_TR(0x559ee0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B559ee1:{NFSU2_TR(0x559ee1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B559ee2:{NFSU2_TR(0x559ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559ee9:{NFSU2_TR(0x559ee9);
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
B559eec:{NFSU2_TR(0x559eec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B559ef0:L559ef0:{c.instructions+=3;NFSU2_TR(0x559ef0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559ef1:{NFSU2_TR(0x559ef1);
__builtin_memmove((R+24),(R+4),4);
}
B559ef3:{NFSU2_TR(0x559ef3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559ef8ull));
{goto L559f10;}
}
B559ef8:L559ef8:{c.instructions+=2;NFSU2_TR(0x559ef8);
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
B559efd:{NFSU2_TR(0x559efd);
if(r1(R+518)){{goto L559f08;}}
}
B559eff:L559eff:{c.instructions+=2;NFSU2_TR(0x559eff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559f00:{NFSU2_TR(0x559f00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559f05ull));
TAIL_STATIC(0x575630u,575);
}
B559f05:L559f05:{c.instructions+=1;NFSU2_TR(0x559f05);
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
B559f08:L559f08:{c.instructions+=3;NFSU2_TR(0x559f08);
__builtin_memmove((R+0),(R+24),4);
}
B559f0a:{NFSU2_TR(0x559f0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B559f0b:{NFSU2_TR(0x559f0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B559f10:L559f10:{c.instructions+=17;NFSU2_TR(0x559f10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559f12:{NFSU2_TR(0x559f12);
u8 U[4];
w4(U+0,u32(0x777d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559f17:{NFSU2_TR(0x559f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B559f1d:{NFSU2_TR(0x559f1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559f1e:{NFSU2_TR(0x559f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559f25:{NFSU2_TR(0x559f25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559f26:{NFSU2_TR(0x559f26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559f27:{NFSU2_TR(0x559f27);
__builtin_memmove((R+24),(R+4),4);
}
B559f29:{NFSU2_TR(0x559f29);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559f2d:{NFSU2_TR(0x559f2d);
u8 U[4];
w4(U+0,u32(0x79d2d0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B559f33:{NFSU2_TR(0x559f33);
w4(R+0,u32(0x78f544ull));
}
B559f38:{NFSU2_TR(0x559f38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559f3e:{NFSU2_TR(0x559f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559f44:{NFSU2_TR(0x559f44);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B559f4a:{NFSU2_TR(0x559f4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B559f52:{NFSU2_TR(0x559f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559f58:{NFSU2_TR(0x559f58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559f5dull));
TAIL_STATIC(0x4358e0u,435);
}
B559f5d:L559f5d:{c.instructions+=3;NFSU2_TR(0x559f5d);
__builtin_memmove((R+4),(R+24),4);
}
B559f5f:{NFSU2_TR(0x559f5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B559f67:{NFSU2_TR(0x559f67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559f6cull));
TAIL_STATIC(0x4defb0u,4de);
}
B559f6c:L559f6c:{c.instructions+=5;NFSU2_TR(0x559f6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B559f70:{NFSU2_TR(0x559f70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B559f71:{NFSU2_TR(0x559f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559f78:{NFSU2_TR(0x559f78);
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
B559f7b:{NFSU2_TR(0x559f7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B559f80:L559f80:{c.instructions+=8;NFSU2_TR(0x559f80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559f81:{NFSU2_TR(0x559f81);
__builtin_memmove((R+20),(R+16),4);
}
B559f83:{NFSU2_TR(0x559f83);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559f84:{NFSU2_TR(0x559f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B559f87:{NFSU2_TR(0x559f87);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B559f8c:{NFSU2_TR(0x559f8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559f8d:{NFSU2_TR(0x559f8d);
__builtin_memmove((R+28),(R+4),4);
}
B559f8f:{NFSU2_TR(0x559f8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L559f9f;}}
}
B559f91:L559f91:{c.instructions+=5;NFSU2_TR(0x559f91);
s1(0x83855b,u8(0x1ull));
}
B559f98:{NFSU2_TR(0x559f98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B559f99:{NFSU2_TR(0x559f99);
__builtin_memmove((R+16),(R+20),4);
}
B559f9b:{NFSU2_TR(0x559f9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B559f9c:{NFSU2_TR(0x559f9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B559f9f:L559f9f:{c.instructions+=2;NFSU2_TR(0x559f9f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B559fa4:{NFSU2_TR(0x559fa4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x55a130u,55a);}
}
B559faa:L559faa:{c.instructions+=6;NFSU2_TR(0x559faa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559fab:{NFSU2_TR(0x559fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B559fae:{NFSU2_TR(0x559fae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559faf:{NFSU2_TR(0x559faf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559fb0:{NFSU2_TR(0x559fb0);
w4(R+4,u32(0x8637b0ull));
}
B559fb5:{NFSU2_TR(0x559fb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559fbaull));
TAIL_STATIC(0x51bb70u,51b);
}
B559fba:L559fba:{c.instructions+=3;NFSU2_TR(0x559fba);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B559fbc:{NFSU2_TR(0x559fbc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B559fbe:{NFSU2_TR(0x559fbe);
if(r1(R+518)){TAIL_STATIC(0x55a02au,55a);}
}
B559fc0:L559fc0:{c.instructions+=4;NFSU2_TR(0x559fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B559fc3:{NFSU2_TR(0x559fc3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B559fc5:{NFSU2_TR(0x559fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B559fc8:{NFSU2_TR(0x559fc8);
if(r1(R+518)){{goto L559fe1;}}
}
B559fca:L559fca:{c.instructions+=3;NFSU2_TR(0x559fca);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x163ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B559fd0:{NFSU2_TR(0x559fd0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B559fd2:{NFSU2_TR(0x559fd2);
if(r1(R+518)){{goto L559fe1;}}
}
B559fd4:L559fd4:{c.instructions+=3;NFSU2_TR(0x559fd4);
__builtin_memmove((R+0),gp(0x83855d),1);
}
B559fd9:{NFSU2_TR(0x559fd9);
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
B559fdb:{NFSU2_TR(0x559fdb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x55a12eu,55a);}
}
B559fe1:L559fe1:{c.instructions+=4;NFSU2_TR(0x559fe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B559fe4:{NFSU2_TR(0x559fe4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559fe5:{NFSU2_TR(0x559fe5);
w4(R+4,u32(0x838980ull));
}
B559fea:{NFSU2_TR(0x559fea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559fefull));
TAIL_STATIC(0x521b90u,521);
}
B559fef:L559fef:{c.instructions+=2;NFSU2_TR(0x559fef);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B559ff1:{NFSU2_TR(0x559ff1);
if(r1(R+518)){TAIL_STATIC(0x55a02fu,55a);}
}
B559ff3:L559ff3:{c.instructions+=3;NFSU2_TR(0x559ff3);
__builtin_memmove((R+4),gp(0x7fa1c8),4);
}
B559ff9:{NFSU2_TR(0x559ff9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B559ffa:{NFSU2_TR(0x559ffa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x559fffull));
TAIL_STATIC(0x52cef0u,52c);
}
B559fff:L559fff:{c.instructions+=1;NFSU2_TR(0x559fff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
TAIL_STATIC(0x55a002u,55a);
}
XIT:NFSU2_TR_EXIT(0x559,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
