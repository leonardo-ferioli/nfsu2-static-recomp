#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_405(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x404,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x404,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_404(u8* __restrict R,Cpu& c);
u32 page_404(Cpu& c){return body_404(c.regs.data(),c);}
__attribute__((noinline)) u32 body_404(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x404002:goto L404002;
case 0x404004:goto L404004;
case 0x40400a:c.instructions+=2;goto B40400a;
case 0x404010:c.instructions+=1;goto B404010;
case 0x404015:goto L404015;
case 0x404017:goto L404017;
case 0x40401d:c.instructions+=2;goto B40401d;
case 0x404023:c.instructions+=1;goto B404023;
case 0x404028:goto L404028;
case 0x40402a:goto L40402a;
case 0x404030:c.instructions+=2;goto B404030;
case 0x404036:c.instructions+=1;goto B404036;
case 0x40403b:goto L40403b;
case 0x40403d:goto L40403d;
case 0x404043:c.instructions+=17;goto B404043;
case 0x404049:c.instructions+=16;goto B404049;
case 0x40404f:c.instructions+=15;goto B40404f;
case 0x404055:c.instructions+=14;goto B404055;
case 0x40405b:c.instructions+=13;goto B40405b;
case 0x404061:c.instructions+=12;goto B404061;
case 0x404067:c.instructions+=11;goto B404067;
case 0x40406d:c.instructions+=10;goto B40406d;
case 0x404073:c.instructions+=9;goto B404073;
case 0x404079:c.instructions+=8;goto B404079;
case 0x40407f:c.instructions+=7;goto B40407f;
case 0x404080:c.instructions+=6;goto B404080;
case 0x404086:c.instructions+=5;goto B404086;
case 0x40408c:c.instructions+=4;goto B40408c;
case 0x40408d:c.instructions+=3;goto B40408d;
case 0x404093:c.instructions+=2;goto B404093;
case 0x404094:c.instructions+=1;goto B404094;
case 0x4040a0:goto L4040a0;
case 0x4040a1:c.instructions+=35;goto B4040a1;
case 0x4040a3:c.instructions+=34;goto B4040a3;
case 0x4040a6:c.instructions+=33;goto B4040a6;
case 0x4040a9:c.instructions+=32;goto B4040a9;
case 0x4040ac:c.instructions+=31;goto B4040ac;
case 0x4040af:c.instructions+=30;goto B4040af;
case 0x4040b1:c.instructions+=29;goto B4040b1;
case 0x4040b3:c.instructions+=28;goto B4040b3;
case 0x4040b4:c.instructions+=27;goto B4040b4;
case 0x4040b5:c.instructions+=26;goto B4040b5;
case 0x4040b6:c.instructions+=25;goto B4040b6;
case 0x4040bc:c.instructions+=24;goto B4040bc;
case 0x4040c0:c.instructions+=23;goto B4040c0;
case 0x4040c8:c.instructions+=22;goto B4040c8;
case 0x4040ca:c.instructions+=21;goto B4040ca;
case 0x4040cd:c.instructions+=20;goto B4040cd;
case 0x4040d5:c.instructions+=19;goto B4040d5;
case 0x4040d9:c.instructions+=18;goto B4040d9;
case 0x4040dc:c.instructions+=17;goto B4040dc;
case 0x4040df:c.instructions+=16;goto B4040df;
case 0x4040e5:c.instructions+=15;goto B4040e5;
case 0x4040e7:c.instructions+=14;goto B4040e7;
case 0x4040ea:c.instructions+=13;goto B4040ea;
case 0x4040ee:c.instructions+=12;goto B4040ee;
case 0x4040f1:c.instructions+=11;goto B4040f1;
case 0x4040f4:c.instructions+=10;goto B4040f4;
case 0x4040f7:c.instructions+=9;goto B4040f7;
case 0x4040f8:c.instructions+=8;goto B4040f8;
case 0x4040fc:c.instructions+=7;goto B4040fc;
case 0x4040fd:c.instructions+=6;goto B4040fd;
case 0x404103:c.instructions+=5;goto B404103;
case 0x404104:c.instructions+=4;goto B404104;
case 0x404106:c.instructions+=3;goto B404106;
case 0x404109:c.instructions+=2;goto B404109;
case 0x40410d:c.instructions+=1;goto B40410d;
case 0x404112:goto L404112;
case 0x404115:c.instructions+=36;goto B404115;
case 0x404119:c.instructions+=35;goto B404119;
case 0x40411d:c.instructions+=34;goto B40411d;
case 0x40411f:c.instructions+=33;goto B40411f;
case 0x404123:c.instructions+=32;goto B404123;
case 0x404126:c.instructions+=31;goto B404126;
case 0x404129:c.instructions+=30;goto B404129;
case 0x40412d:c.instructions+=29;goto B40412d;
case 0x404130:c.instructions+=28;goto B404130;
case 0x404132:c.instructions+=27;goto B404132;
case 0x404135:c.instructions+=26;goto B404135;
case 0x404138:c.instructions+=25;goto B404138;
case 0x40413b:c.instructions+=24;goto B40413b;
case 0x40413f:c.instructions+=23;goto B40413f;
case 0x404142:c.instructions+=22;goto B404142;
case 0x404145:c.instructions+=21;goto B404145;
case 0x404148:c.instructions+=20;goto B404148;
case 0x40414b:c.instructions+=19;goto B40414b;
case 0x40414e:c.instructions+=18;goto B40414e;
case 0x404155:c.instructions+=17;goto B404155;
case 0x404158:c.instructions+=16;goto B404158;
case 0x40415b:c.instructions+=15;goto B40415b;
case 0x40415f:c.instructions+=14;goto B40415f;
case 0x404162:c.instructions+=13;goto B404162;
case 0x404165:c.instructions+=12;goto B404165;
case 0x404168:c.instructions+=11;goto B404168;
case 0x40416b:c.instructions+=10;goto B40416b;
case 0x40416e:c.instructions+=9;goto B40416e;
case 0x404170:c.instructions+=8;goto B404170;
case 0x404172:c.instructions+=7;goto B404172;
case 0x404175:c.instructions+=6;goto B404175;
case 0x404178:c.instructions+=5;goto B404178;
case 0x404180:c.instructions+=4;goto B404180;
case 0x404183:c.instructions+=3;goto B404183;
case 0x404185:c.instructions+=2;goto B404185;
case 0x404188:c.instructions+=1;goto B404188;
case 0x40418e:goto L40418e;
case 0x404191:c.instructions+=1;goto B404191;
case 0x404194:goto L404194;
case 0x404197:c.instructions+=10;goto B404197;
case 0x40419b:c.instructions+=9;goto B40419b;
case 0x40419e:c.instructions+=8;goto B40419e;
case 0x40419f:c.instructions+=7;goto B40419f;
case 0x4041a3:c.instructions+=6;goto B4041a3;
case 0x4041a7:c.instructions+=5;goto B4041a7;
case 0x4041aa:c.instructions+=4;goto B4041aa;
case 0x4041ab:c.instructions+=3;goto B4041ab;
case 0x4041ad:c.instructions+=2;goto B4041ad;
case 0x4041b1:c.instructions+=1;goto B4041b1;
case 0x4041b6:goto L4041b6;
case 0x4041ba:c.instructions+=39;goto B4041ba;
case 0x4041be:c.instructions+=38;goto B4041be;
case 0x4041c0:c.instructions+=37;goto B4041c0;
case 0x4041c4:c.instructions+=36;goto B4041c4;
case 0x4041c7:c.instructions+=35;goto B4041c7;
case 0x4041cb:c.instructions+=34;goto B4041cb;
case 0x4041ce:c.instructions+=33;goto B4041ce;
case 0x4041d0:c.instructions+=32;goto B4041d0;
case 0x4041d3:c.instructions+=31;goto B4041d3;
case 0x4041d6:c.instructions+=30;goto B4041d6;
case 0x4041d9:c.instructions+=29;goto B4041d9;
case 0x4041db:c.instructions+=28;goto B4041db;
case 0x4041df:c.instructions+=27;goto B4041df;
case 0x4041e2:c.instructions+=26;goto B4041e2;
case 0x4041e6:c.instructions+=25;goto B4041e6;
case 0x4041e9:c.instructions+=24;goto B4041e9;
case 0x4041ec:c.instructions+=23;goto B4041ec;
case 0x4041ef:c.instructions+=22;goto B4041ef;
case 0x4041f6:c.instructions+=21;goto B4041f6;
case 0x4041f9:c.instructions+=20;goto B4041f9;
case 0x4041fc:c.instructions+=19;goto B4041fc;
case 0x404200:c.instructions+=18;goto B404200;
case 0x404203:c.instructions+=17;goto B404203;
case 0x404206:c.instructions+=16;goto B404206;
case 0x404209:c.instructions+=15;goto B404209;
case 0x40420b:c.instructions+=14;goto B40420b;
case 0x40420e:c.instructions+=13;goto B40420e;
case 0x404211:c.instructions+=12;goto B404211;
case 0x404213:c.instructions+=11;goto B404213;
case 0x404216:c.instructions+=10;goto B404216;
case 0x404219:c.instructions+=9;goto B404219;
case 0x40421c:c.instructions+=8;goto B40421c;
case 0x40421d:c.instructions+=7;goto B40421d;
case 0x404220:c.instructions+=6;goto B404220;
case 0x404223:c.instructions+=5;goto B404223;
case 0x404226:c.instructions+=4;goto B404226;
case 0x404229:c.instructions+=3;goto B404229;
case 0x40422b:c.instructions+=2;goto B40422b;
case 0x40422f:c.instructions+=1;goto B40422f;
case 0x404235:goto L404235;
case 0x404236:c.instructions+=5;goto B404236;
case 0x404237:c.instructions+=4;goto B404237;
case 0x404238:c.instructions+=3;goto B404238;
case 0x40423a:c.instructions+=2;goto B40423a;
case 0x40423b:c.instructions+=1;goto B40423b;
case 0x404240:goto L404240;
case 0x404243:c.instructions+=12;goto B404243;
case 0x404247:c.instructions+=11;goto B404247;
case 0x40424b:c.instructions+=10;goto B40424b;
case 0x40424f:c.instructions+=9;goto B40424f;
case 0x404250:c.instructions+=8;goto B404250;
case 0x404254:c.instructions+=7;goto B404254;
case 0x404258:c.instructions+=6;goto B404258;
case 0x404259:c.instructions+=5;goto B404259;
case 0x40425d:c.instructions+=4;goto B40425d;
case 0x404261:c.instructions+=3;goto B404261;
case 0x404265:c.instructions+=2;goto B404265;
case 0x40426a:c.instructions+=1;goto B40426a;
case 0x404270:goto L404270;
case 0x404272:c.instructions+=2;goto B404272;
case 0x404275:c.instructions+=1;goto B404275;
case 0x40427b:goto L40427b;
case 0x404280:goto L404280;
case 0x404284:c.instructions+=4;goto B404284;
case 0x404288:c.instructions+=3;goto B404288;
case 0x40428a:c.instructions+=2;goto B40428a;
case 0x40428d:c.instructions+=1;goto B40428d;
case 0x40428f:goto L40428f;
case 0x404293:c.instructions+=8;goto B404293;
case 0x404297:c.instructions+=7;goto B404297;
case 0x404299:c.instructions+=6;goto B404299;
case 0x40429b:c.instructions+=5;goto B40429b;
case 0x40429f:c.instructions+=4;goto B40429f;
case 0x4042a1:c.instructions+=3;goto B4042a1;
case 0x4042a5:c.instructions+=2;goto B4042a5;
case 0x4042a9:c.instructions+=1;goto B4042a9;
case 0x4042ad:goto L4042ad;
case 0x4042b1:c.instructions+=4;goto B4042b1;
case 0x4042b5:c.instructions+=3;goto B4042b5;
case 0x4042b7:c.instructions+=2;goto B4042b7;
case 0x4042ba:c.instructions+=1;goto B4042ba;
case 0x4042bc:goto L4042bc;
case 0x4042c0:c.instructions+=8;goto B4042c0;
case 0x4042c4:c.instructions+=7;goto B4042c4;
case 0x4042c6:c.instructions+=6;goto B4042c6;
case 0x4042c8:c.instructions+=5;goto B4042c8;
case 0x4042cc:c.instructions+=4;goto B4042cc;
case 0x4042ce:c.instructions+=3;goto B4042ce;
case 0x4042d2:c.instructions+=2;goto B4042d2;
case 0x4042d6:c.instructions+=1;goto B4042d6;
case 0x4042da:goto L4042da;
case 0x4042de:c.instructions+=4;goto B4042de;
case 0x4042e2:c.instructions+=3;goto B4042e2;
case 0x4042e4:c.instructions+=2;goto B4042e4;
case 0x4042e7:c.instructions+=1;goto B4042e7;
case 0x4042e9:goto L4042e9;
case 0x4042ed:c.instructions+=8;goto B4042ed;
case 0x4042f1:c.instructions+=7;goto B4042f1;
case 0x4042f3:c.instructions+=6;goto B4042f3;
case 0x4042f5:c.instructions+=5;goto B4042f5;
case 0x4042f9:c.instructions+=4;goto B4042f9;
case 0x4042fb:c.instructions+=3;goto B4042fb;
case 0x4042ff:c.instructions+=2;goto B4042ff;
case 0x404303:c.instructions+=1;goto B404303;
case 0x404307:goto L404307;
case 0x40430b:c.instructions+=4;goto B40430b;
case 0x40430f:c.instructions+=3;goto B40430f;
case 0x404311:c.instructions+=2;goto B404311;
case 0x404314:c.instructions+=1;goto B404314;
case 0x404316:goto L404316;
case 0x40431a:c.instructions+=8;goto B40431a;
case 0x40431e:c.instructions+=7;goto B40431e;
case 0x404320:c.instructions+=6;goto B404320;
case 0x404322:c.instructions+=5;goto B404322;
case 0x404326:c.instructions+=4;goto B404326;
case 0x404328:c.instructions+=3;goto B404328;
case 0x40432c:c.instructions+=2;goto B40432c;
case 0x404330:c.instructions+=1;goto B404330;
case 0x404334:goto L404334;
case 0x404337:c.instructions+=3;goto B404337;
case 0x40433a:c.instructions+=2;goto B40433a;
case 0x40433c:c.instructions+=1;goto B40433c;
case 0x404342:goto L404342;
case 0x404344:c.instructions+=1;goto B404344;
case 0x404346:goto L404346;
case 0x40434a:c.instructions+=4;goto B40434a;
case 0x40434e:c.instructions+=3;goto B40434e;
case 0x404350:c.instructions+=2;goto B404350;
case 0x404353:c.instructions+=1;goto B404353;
case 0x404355:goto L404355;
case 0x404359:c.instructions+=8;goto B404359;
case 0x40435d:c.instructions+=7;goto B40435d;
case 0x40435f:c.instructions+=6;goto B40435f;
case 0x404361:c.instructions+=5;goto B404361;
case 0x404365:c.instructions+=4;goto B404365;
case 0x404367:c.instructions+=3;goto B404367;
case 0x40436b:c.instructions+=2;goto B40436b;
case 0x40436f:c.instructions+=1;goto B40436f;
case 0x404373:goto L404373;
case 0x404374:c.instructions+=2;goto B404374;
case 0x404376:c.instructions+=1;goto B404376;
case 0x404378:goto L404378;
case 0x404379:c.instructions+=2;goto B404379;
case 0x40437b:c.instructions+=1;goto B40437b;
case 0x404381:goto L404381;
case 0x404385:c.instructions+=6;goto B404385;
case 0x404386:c.instructions+=5;goto B404386;
case 0x40438a:c.instructions+=4;goto B40438a;
case 0x40438b:c.instructions+=3;goto B40438b;
case 0x40438d:c.instructions+=2;goto B40438d;
case 0x404390:c.instructions+=1;goto B404390;
case 0x404392:goto L404392;
case 0x404396:c.instructions+=4;goto B404396;
case 0x40439a:c.instructions+=3;goto B40439a;
case 0x40439c:c.instructions+=2;goto B40439c;
case 0x40439f:c.instructions+=1;goto B40439f;
case 0x4043a1:goto L4043a1;
case 0x4043a5:c.instructions+=4;goto B4043a5;
case 0x4043a9:c.instructions+=3;goto B4043a9;
case 0x4043ab:c.instructions+=2;goto B4043ab;
case 0x4043ae:c.instructions+=1;goto B4043ae;
case 0x4043b0:goto L4043b0;
case 0x4043b4:c.instructions+=4;goto B4043b4;
case 0x4043b8:c.instructions+=3;goto B4043b8;
case 0x4043ba:c.instructions+=2;goto B4043ba;
case 0x4043bd:c.instructions+=1;goto B4043bd;
case 0x4043bf:goto L4043bf;
case 0x4043c3:c.instructions+=8;goto B4043c3;
case 0x4043c7:c.instructions+=7;goto B4043c7;
case 0x4043cb:c.instructions+=6;goto B4043cb;
case 0x4043cd:c.instructions+=5;goto B4043cd;
case 0x4043d1:c.instructions+=4;goto B4043d1;
case 0x4043d6:c.instructions+=3;goto B4043d6;
case 0x4043d8:c.instructions+=2;goto B4043d8;
case 0x4043db:c.instructions+=1;goto B4043db;
case 0x4043dc:goto L4043dc;
case 0x4043de:c.instructions+=2;goto B4043de;
case 0x4043e1:c.instructions+=1;goto B4043e1;
case 0x4043f0:goto L4043f0;
case 0x4043f1:c.instructions+=10;goto B4043f1;
case 0x4043f5:c.instructions+=9;goto B4043f5;
case 0x4043f9:c.instructions+=8;goto B4043f9;
case 0x4043fe:c.instructions+=7;goto B4043fe;
case 0x404400:c.instructions+=6;goto B404400;
case 0x404404:c.instructions+=5;goto B404404;
case 0x404408:c.instructions+=4;goto B404408;
case 0x40440e:c.instructions+=3;goto B40440e;
case 0x404410:c.instructions+=2;goto B404410;
case 0x404413:c.instructions+=1;goto B404413;
case 0x404415:goto L404415;
case 0x404419:c.instructions+=9;goto B404419;
case 0x40441b:c.instructions+=8;goto B40441b;
case 0x40441d:c.instructions+=7;goto B40441d;
case 0x404421:c.instructions+=6;goto B404421;
case 0x404425:c.instructions+=5;goto B404425;
case 0x404429:c.instructions+=4;goto B404429;
case 0x40442d:c.instructions+=3;goto B40442d;
case 0x40442f:c.instructions+=2;goto B40442f;
case 0x404432:c.instructions+=1;goto B404432;
case 0x404434:goto L404434;
case 0x404438:c.instructions+=5;goto B404438;
case 0x40443c:c.instructions+=4;goto B40443c;
case 0x404442:c.instructions+=3;goto B404442;
case 0x404448:c.instructions+=2;goto B404448;
case 0x404449:c.instructions+=1;goto B404449;
case 0x40444a:goto L40444a;
case 0x40444e:c.instructions+=5;goto B40444e;
case 0x404452:c.instructions+=4;goto B404452;
case 0x404458:c.instructions+=3;goto B404458;
case 0x40445e:c.instructions+=2;goto B40445e;
case 0x40445f:c.instructions+=1;goto B40445f;
case 0x404460:goto L404460;
case 0x404466:c.instructions+=19;goto B404466;
case 0x40446a:c.instructions+=18;goto B40446a;
case 0x40446e:c.instructions+=17;goto B40446e;
case 0x40446f:c.instructions+=16;goto B40446f;
case 0x404473:c.instructions+=15;goto B404473;
case 0x404477:c.instructions+=14;goto B404477;
case 0x40447b:c.instructions+=13;goto B40447b;
case 0x40447d:c.instructions+=12;goto B40447d;
case 0x40447f:c.instructions+=11;goto B40447f;
case 0x404483:c.instructions+=10;goto B404483;
case 0x404487:c.instructions+=9;goto B404487;
case 0x404489:c.instructions+=8;goto B404489;
case 0x40448b:c.instructions+=7;goto B40448b;
case 0x40448d:c.instructions+=6;goto B40448d;
case 0x40448f:c.instructions+=5;goto B40448f;
case 0x404493:c.instructions+=4;goto B404493;
case 0x404499:c.instructions+=3;goto B404499;
case 0x40449b:c.instructions+=2;goto B40449b;
case 0x40449e:c.instructions+=1;goto B40449e;
case 0x4044a0:goto L4044a0;
case 0x4044a2:c.instructions+=8;goto B4044a2;
case 0x4044a4:c.instructions+=7;goto B4044a4;
case 0x4044a6:c.instructions+=6;goto B4044a6;
case 0x4044a8:c.instructions+=5;goto B4044a8;
case 0x4044ac:c.instructions+=4;goto B4044ac;
case 0x4044ae:c.instructions+=3;goto B4044ae;
case 0x4044b2:c.instructions+=2;goto B4044b2;
case 0x4044b4:c.instructions+=1;goto B4044b4;
case 0x4044b6:goto L4044b6;
case 0x4044b7:c.instructions+=2;goto B4044b7;
case 0x4044b8:c.instructions+=1;goto B4044b8;
case 0x4044c0:goto L4044c0;
case 0x4044c3:c.instructions+=116;goto B4044c3;
case 0x4044c4:c.instructions+=115;goto B4044c4;
case 0x4044c5:c.instructions+=114;goto B4044c5;
case 0x4044c6:c.instructions+=113;goto B4044c6;
case 0x4044ca:c.instructions+=112;goto B4044ca;
case 0x4044cd:c.instructions+=111;goto B4044cd;
case 0x4044ce:c.instructions+=110;goto B4044ce;
case 0x4044d2:c.instructions+=109;goto B4044d2;
case 0x4044d5:c.instructions+=108;goto B4044d5;
case 0x4044d8:c.instructions+=107;goto B4044d8;
case 0x4044db:c.instructions+=106;goto B4044db;
case 0x4044de:c.instructions+=105;goto B4044de;
case 0x4044e1:c.instructions+=104;goto B4044e1;
case 0x4044e5:c.instructions+=103;goto B4044e5;
case 0x4044e9:c.instructions+=102;goto B4044e9;
case 0x4044ee:c.instructions+=101;goto B4044ee;
case 0x4044f0:c.instructions+=100;goto B4044f0;
case 0x4044f4:c.instructions+=99;goto B4044f4;
case 0x4044f7:c.instructions+=98;goto B4044f7;
case 0x4044f9:c.instructions+=97;goto B4044f9;
case 0x4044fc:c.instructions+=96;goto B4044fc;
case 0x4044fe:c.instructions+=95;goto B4044fe;
case 0x404501:c.instructions+=94;goto B404501;
case 0x404505:c.instructions+=93;goto B404505;
case 0x404508:c.instructions+=92;goto B404508;
case 0x40450c:c.instructions+=91;goto B40450c;
case 0x40450e:c.instructions+=90;goto B40450e;
case 0x404511:c.instructions+=89;goto B404511;
case 0x404514:c.instructions+=88;goto B404514;
case 0x404517:c.instructions+=87;goto B404517;
case 0x40451a:c.instructions+=86;goto B40451a;
case 0x40451c:c.instructions+=85;goto B40451c;
case 0x404520:c.instructions+=84;goto B404520;
case 0x404523:c.instructions+=83;goto B404523;
case 0x404526:c.instructions+=82;goto B404526;
case 0x404529:c.instructions+=81;goto B404529;
case 0x40452c:c.instructions+=80;goto B40452c;
case 0x40452e:c.instructions+=79;goto B40452e;
case 0x404532:c.instructions+=78;goto B404532;
case 0x404535:c.instructions+=77;goto B404535;
case 0x404539:c.instructions+=76;goto B404539;
case 0x40453d:c.instructions+=75;goto B40453d;
case 0x40453f:c.instructions+=74;goto B40453f;
case 0x404541:c.instructions+=73;goto B404541;
case 0x404545:c.instructions+=72;goto B404545;
case 0x404548:c.instructions+=71;goto B404548;
case 0x40454c:c.instructions+=70;goto B40454c;
case 0x404550:c.instructions+=69;goto B404550;
case 0x404552:c.instructions+=68;goto B404552;
case 0x404554:c.instructions+=67;goto B404554;
case 0x404557:c.instructions+=66;goto B404557;
case 0x40455b:c.instructions+=65;goto B40455b;
case 0x40455e:c.instructions+=64;goto B40455e;
case 0x404562:c.instructions+=63;goto B404562;
case 0x404566:c.instructions+=62;goto B404566;
case 0x404568:c.instructions+=61;goto B404568;
case 0x40456c:c.instructions+=60;goto B40456c;
case 0x40456e:c.instructions+=59;goto B40456e;
case 0x404571:c.instructions+=58;goto B404571;
case 0x404573:c.instructions+=57;goto B404573;
case 0x404577:c.instructions+=56;goto B404577;
case 0x40457b:c.instructions+=55;goto B40457b;
case 0x40457f:c.instructions+=54;goto B40457f;
case 0x404583:c.instructions+=53;goto B404583;
case 0x404585:c.instructions+=52;goto B404585;
case 0x404588:c.instructions+=51;goto B404588;
case 0x40458a:c.instructions+=50;goto B40458a;
case 0x40458e:c.instructions+=49;goto B40458e;
case 0x404592:c.instructions+=48;goto B404592;
case 0x404596:c.instructions+=47;goto B404596;
case 0x404598:c.instructions+=46;goto B404598;
case 0x40459b:c.instructions+=45;goto B40459b;
case 0x40459f:c.instructions+=44;goto B40459f;
case 0x4045a2:c.instructions+=43;goto B4045a2;
case 0x4045a4:c.instructions+=42;goto B4045a4;
case 0x4045a8:c.instructions+=41;goto B4045a8;
case 0x4045ac:c.instructions+=40;goto B4045ac;
case 0x4045b0:c.instructions+=39;goto B4045b0;
case 0x4045b2:c.instructions+=38;goto B4045b2;
case 0x4045b4:c.instructions+=37;goto B4045b4;
case 0x4045b8:c.instructions+=36;goto B4045b8;
case 0x4045bc:c.instructions+=35;goto B4045bc;
case 0x4045bf:c.instructions+=34;goto B4045bf;
case 0x4045c3:c.instructions+=33;goto B4045c3;
case 0x4045c7:c.instructions+=32;goto B4045c7;
case 0x4045cb:c.instructions+=31;goto B4045cb;
case 0x4045cf:c.instructions+=30;goto B4045cf;
case 0x4045d3:c.instructions+=29;goto B4045d3;
case 0x4045d5:c.instructions+=28;goto B4045d5;
case 0x4045d8:c.instructions+=27;goto B4045d8;
case 0x4045dc:c.instructions+=26;goto B4045dc;
case 0x4045e0:c.instructions+=25;goto B4045e0;
case 0x4045e1:c.instructions+=24;goto B4045e1;
case 0x4045e5:c.instructions+=23;goto B4045e5;
case 0x4045e9:c.instructions+=22;goto B4045e9;
case 0x4045ed:c.instructions+=21;goto B4045ed;
case 0x4045f1:c.instructions+=20;goto B4045f1;
case 0x4045f3:c.instructions+=19;goto B4045f3;
case 0x4045f7:c.instructions+=18;goto B4045f7;
case 0x4045f8:c.instructions+=17;goto B4045f8;
case 0x4045fc:c.instructions+=16;goto B4045fc;
case 0x4045ff:c.instructions+=15;goto B4045ff;
case 0x404603:c.instructions+=14;goto B404603;
case 0x404607:c.instructions+=13;goto B404607;
case 0x40460a:c.instructions+=12;goto B40460a;
case 0x40460d:c.instructions+=11;goto B40460d;
case 0x40460f:c.instructions+=10;goto B40460f;
case 0x404612:c.instructions+=9;goto B404612;
case 0x404614:c.instructions+=8;goto B404614;
case 0x404618:c.instructions+=7;goto B404618;
case 0x40461b:c.instructions+=6;goto B40461b;
case 0x40461e:c.instructions+=5;goto B40461e;
case 0x404621:c.instructions+=4;goto B404621;
case 0x404624:c.instructions+=3;goto B404624;
case 0x404626:c.instructions+=2;goto B404626;
case 0x404629:c.instructions+=1;goto B404629;
case 0x40462e:goto L40462e;
case 0x404632:c.instructions+=22;goto B404632;
case 0x404635:c.instructions+=21;goto B404635;
case 0x404639:c.instructions+=20;goto B404639;
case 0x40463d:c.instructions+=19;goto B40463d;
case 0x40463e:c.instructions+=18;goto B40463e;
case 0x404642:c.instructions+=17;goto B404642;
case 0x404646:c.instructions+=16;goto B404646;
case 0x404647:c.instructions+=15;goto B404647;
case 0x40464a:c.instructions+=14;goto B40464a;
case 0x40464e:c.instructions+=13;goto B40464e;
case 0x404651:c.instructions+=12;goto B404651;
case 0x404654:c.instructions+=11;goto B404654;
case 0x404657:c.instructions+=10;goto B404657;
case 0x404659:c.instructions+=9;goto B404659;
case 0x40465b:c.instructions+=8;goto B40465b;
case 0x40465f:c.instructions+=7;goto B40465f;
case 0x404662:c.instructions+=6;goto B404662;
case 0x404665:c.instructions+=5;goto B404665;
case 0x404668:c.instructions+=4;goto B404668;
case 0x40466b:c.instructions+=3;goto B40466b;
case 0x40466d:c.instructions+=2;goto B40466d;
case 0x404670:c.instructions+=1;goto B404670;
case 0x404675:goto L404675;
case 0x404679:c.instructions+=22;goto B404679;
case 0x40467c:c.instructions+=21;goto B40467c;
case 0x404680:c.instructions+=20;goto B404680;
case 0x404684:c.instructions+=19;goto B404684;
case 0x404685:c.instructions+=18;goto B404685;
case 0x404689:c.instructions+=17;goto B404689;
case 0x40468d:c.instructions+=16;goto B40468d;
case 0x40468e:c.instructions+=15;goto B40468e;
case 0x404691:c.instructions+=14;goto B404691;
case 0x404695:c.instructions+=13;goto B404695;
case 0x404698:c.instructions+=12;goto B404698;
case 0x40469b:c.instructions+=11;goto B40469b;
case 0x40469e:c.instructions+=10;goto B40469e;
case 0x4046a0:c.instructions+=9;goto B4046a0;
case 0x4046a2:c.instructions+=8;goto B4046a2;
case 0x4046a6:c.instructions+=7;goto B4046a6;
case 0x4046a9:c.instructions+=6;goto B4046a9;
case 0x4046ac:c.instructions+=5;goto B4046ac;
case 0x4046af:c.instructions+=4;goto B4046af;
case 0x4046b2:c.instructions+=3;goto B4046b2;
case 0x4046b4:c.instructions+=2;goto B4046b4;
case 0x4046b7:c.instructions+=1;goto B4046b7;
case 0x4046bc:goto L4046bc;
case 0x4046c0:c.instructions+=22;goto B4046c0;
case 0x4046c3:c.instructions+=21;goto B4046c3;
case 0x4046c7:c.instructions+=20;goto B4046c7;
case 0x4046cb:c.instructions+=19;goto B4046cb;
case 0x4046cc:c.instructions+=18;goto B4046cc;
case 0x4046d0:c.instructions+=17;goto B4046d0;
case 0x4046d4:c.instructions+=16;goto B4046d4;
case 0x4046d5:c.instructions+=15;goto B4046d5;
case 0x4046d8:c.instructions+=14;goto B4046d8;
case 0x4046dc:c.instructions+=13;goto B4046dc;
case 0x4046df:c.instructions+=12;goto B4046df;
case 0x4046e2:c.instructions+=11;goto B4046e2;
case 0x4046e4:c.instructions+=10;goto B4046e4;
case 0x4046e7:c.instructions+=9;goto B4046e7;
case 0x4046e9:c.instructions+=8;goto B4046e9;
case 0x4046ed:c.instructions+=7;goto B4046ed;
case 0x4046f0:c.instructions+=6;goto B4046f0;
case 0x4046f3:c.instructions+=5;goto B4046f3;
case 0x4046f6:c.instructions+=4;goto B4046f6;
case 0x4046f9:c.instructions+=3;goto B4046f9;
case 0x4046fb:c.instructions+=2;goto B4046fb;
case 0x4046fe:c.instructions+=1;goto B4046fe;
case 0x404703:goto L404703;
case 0x404707:c.instructions+=12;goto B404707;
case 0x40470b:c.instructions+=11;goto B40470b;
case 0x40470c:c.instructions+=10;goto B40470c;
case 0x404710:c.instructions+=9;goto B404710;
case 0x404714:c.instructions+=8;goto B404714;
case 0x404715:c.instructions+=7;goto B404715;
case 0x404719:c.instructions+=6;goto B404719;
case 0x40471a:c.instructions+=5;goto B40471a;
case 0x40471e:c.instructions+=4;goto B40471e;
case 0x40471f:c.instructions+=3;goto B40471f;
case 0x404720:c.instructions+=2;goto B404720;
case 0x404721:c.instructions+=1;goto B404721;
case 0x404726:goto L404726;
case 0x404729:c.instructions+=6;goto B404729;
case 0x40472b:c.instructions+=5;goto B40472b;
case 0x40472c:c.instructions+=4;goto B40472c;
case 0x40472d:c.instructions+=3;goto B40472d;
case 0x40472e:c.instructions+=2;goto B40472e;
case 0x40472f:c.instructions+=1;goto B40472f;
case 0x404731:goto L404731;
case 0x404735:c.instructions+=12;goto B404735;
case 0x404739:c.instructions+=11;goto B404739;
case 0x40473a:c.instructions+=10;goto B40473a;
case 0x40473e:c.instructions+=9;goto B40473e;
case 0x404742:c.instructions+=8;goto B404742;
case 0x404743:c.instructions+=7;goto B404743;
case 0x404747:c.instructions+=6;goto B404747;
case 0x404748:c.instructions+=5;goto B404748;
case 0x40474c:c.instructions+=4;goto B40474c;
case 0x40474d:c.instructions+=3;goto B40474d;
case 0x40474e:c.instructions+=2;goto B40474e;
case 0x40474f:c.instructions+=1;goto B40474f;
case 0x404754:goto L404754;
case 0x404757:c.instructions+=2;goto B404757;
case 0x404759:c.instructions+=1;goto B404759;
case 0x40475b:goto L40475b;
case 0x40475f:c.instructions+=12;goto B40475f;
case 0x404763:c.instructions+=11;goto B404763;
case 0x404764:c.instructions+=10;goto B404764;
case 0x404768:c.instructions+=9;goto B404768;
case 0x40476c:c.instructions+=8;goto B40476c;
case 0x40476d:c.instructions+=7;goto B40476d;
case 0x404771:c.instructions+=6;goto B404771;
case 0x404772:c.instructions+=5;goto B404772;
case 0x404776:c.instructions+=4;goto B404776;
case 0x404777:c.instructions+=3;goto B404777;
case 0x404778:c.instructions+=2;goto B404778;
case 0x404779:c.instructions+=1;goto B404779;
case 0x40477e:goto L40477e;
case 0x404781:c.instructions+=2;goto B404781;
case 0x404783:c.instructions+=1;goto B404783;
case 0x404785:goto L404785;
case 0x40478b:c.instructions+=2;goto B40478b;
case 0x40478e:c.instructions+=1;goto B40478e;
case 0x40478f:goto L40478f;
case 0x404793:c.instructions+=4;goto B404793;
case 0x404799:c.instructions+=3;goto B404799;
case 0x40479b:c.instructions+=2;goto B40479b;
case 0x40479e:c.instructions+=1;goto B40479e;
case 0x4047a0:goto L4047a0;
case 0x4047a6:c.instructions+=3;goto B4047a6;
case 0x4047a8:c.instructions+=2;goto B4047a8;
case 0x4047ab:c.instructions+=1;goto B4047ab;
case 0x4047ad:goto L4047ad;
case 0x4047b1:c.instructions+=4;goto B4047b1;
case 0x4047b7:c.instructions+=3;goto B4047b7;
case 0x4047b9:c.instructions+=2;goto B4047b9;
case 0x4047bc:c.instructions+=1;goto B4047bc;
case 0x4047be:goto L4047be;
case 0x4047c4:c.instructions+=2;goto B4047c4;
case 0x4047c7:c.instructions+=1;goto B4047c7;
case 0x4047c8:goto L4047c8;
case 0x4047ce:goto L4047ce;
case 0x4047d1:c.instructions+=1;goto B4047d1;
case 0x4047e0:goto L4047e0;
case 0x4047e6:c.instructions+=1;goto B4047e6;
case 0x4047f0:goto L4047f0;
case 0x4047f4:c.instructions+=2;goto B4047f4;
case 0x4047f7:c.instructions+=1;goto B4047f7;
case 0x404800:goto L404800;
case 0x404802:c.instructions+=1;goto B404802;
case 0x404810:goto L404810;
case 0x404812:c.instructions+=1;goto B404812;
case 0x404820:goto L404820;
case 0x404821:c.instructions+=7;goto B404821;
case 0x404825:c.instructions+=6;goto B404825;
case 0x404826:c.instructions+=5;goto B404826;
case 0x40482b:c.instructions+=4;goto B40482b;
case 0x40482d:c.instructions+=3;goto B40482d;
case 0x40482f:c.instructions+=2;goto B40482f;
case 0x404831:c.instructions+=1;goto B404831;
case 0x404836:goto L404836;
case 0x40483b:c.instructions+=3;goto B40483b;
case 0x404840:c.instructions+=2;goto B404840;
case 0x404842:c.instructions+=1;goto B404842;
case 0x404847:goto L404847;
case 0x40484a:c.instructions+=3;goto B40484a;
case 0x40484c:c.instructions+=2;goto B40484c;
case 0x40484d:c.instructions+=1;goto B40484d;
case 0x404850:goto L404850;
case 0x404853:c.instructions+=4;goto B404853;
case 0x404854:c.instructions+=3;goto B404854;
case 0x404855:c.instructions+=2;goto B404855;
case 0x40485a:c.instructions+=1;goto B40485a;
case 0x40485f:goto L40485f;
case 0x404861:c.instructions+=6;goto B404861;
case 0x404863:c.instructions+=5;goto B404863;
case 0x404865:c.instructions+=4;goto B404865;
case 0x404868:c.instructions+=3;goto B404868;
case 0x404869:c.instructions+=2;goto B404869;
case 0x40486b:c.instructions+=1;goto B40486b;
case 0x404870:goto L404870;
case 0x404872:c.instructions+=6;goto B404872;
case 0x404874:c.instructions+=5;goto B404874;
case 0x404876:c.instructions+=4;goto B404876;
case 0x404879:c.instructions+=3;goto B404879;
case 0x40487a:c.instructions+=2;goto B40487a;
case 0x40487c:c.instructions+=1;goto B40487c;
case 0x404881:goto L404881;
case 0x404883:c.instructions+=1;goto B404883;
case 0x404888:goto L404888;
case 0x404889:c.instructions+=2;goto B404889;
case 0x40488a:c.instructions+=1;goto B40488a;
case 0x404890:goto L404890;
case 0x404893:c.instructions+=3;goto B404893;
case 0x404896:c.instructions+=2;goto B404896;
case 0x404899:c.instructions+=1;goto B404899;
case 0x40489b:goto L40489b;
case 0x40489e:c.instructions+=1;goto B40489e;
case 0x4048a0:goto L4048a0;
case 0x4048a3:c.instructions+=2;goto B4048a3;
case 0x4048a5:c.instructions+=1;goto B4048a5;
case 0x4048a7:goto L4048a7;
case 0x4048ab:c.instructions+=2;goto B4048ab;
case 0x4048ad:c.instructions+=1;goto B4048ad;
case 0x4048af:goto L4048af;
case 0x4048b1:c.instructions+=1;goto B4048b1;
case 0x4048b6:goto L4048b6;
case 0x4048b9:goto L4048b9;
case 0x4048bb:c.instructions+=1;goto B4048bb;
case 0x4048c0:goto L4048c0;
case 0x4048d0:goto L4048d0;
case 0x4048d3:c.instructions+=2;goto B4048d3;
case 0x4048d5:c.instructions+=1;goto B4048d5;
case 0x4048d7:goto L4048d7;
case 0x4048da:c.instructions+=2;goto B4048da;
case 0x4048dc:c.instructions+=1;goto B4048dc;
case 0x4048de:goto L4048de;
case 0x4048e2:c.instructions+=1;goto B4048e2;
case 0x4048e8:goto L4048e8;
case 0x4048f0:goto L4048f0;
case 0x4048f3:c.instructions+=2;goto B4048f3;
case 0x4048f5:c.instructions+=1;goto B4048f5;
case 0x4048f7:goto L4048f7;
case 0x4048fa:c.instructions+=2;goto B4048fa;
case 0x4048fc:c.instructions+=1;goto B4048fc;
case 0x4048fe:goto L4048fe;
case 0x404908:goto L404908;
case 0x404910:goto L404910;
case 0x404913:c.instructions+=7;goto B404913;
case 0x404916:c.instructions+=6;goto B404916;
case 0x40491c:c.instructions+=5;goto B40491c;
case 0x404921:c.instructions+=4;goto B404921;
case 0x404925:c.instructions+=3;goto B404925;
case 0x404927:c.instructions+=2;goto B404927;
case 0x40492b:c.instructions+=1;goto B40492b;
case 0x40492e:goto L40492e;
case 0x404932:c.instructions+=4;goto B404932;
case 0x404936:c.instructions+=3;goto B404936;
case 0x404938:c.instructions+=2;goto B404938;
case 0x40493b:c.instructions+=1;goto B40493b;
case 0x40493d:goto L40493d;
case 0x40493f:c.instructions+=1;goto B40493f;
case 0x404943:goto L404943;
case 0x404946:c.instructions+=1;goto B404946;
case 0x404950:goto L404950;
case 0x404953:c.instructions+=1;goto B404953;
case 0x404958:goto L404958;
case 0x40495b:c.instructions+=3;goto B40495b;
case 0x40495e:c.instructions+=2;goto B40495e;
case 0x40495f:c.instructions+=1;goto B40495f;
case 0x404961:goto L404961;
case 0x404970:goto L404970;
case 0x404973:c.instructions+=1;goto B404973;
case 0x404978:goto L404978;
case 0x40497b:c.instructions+=2;goto B40497b;
case 0x40497e:c.instructions+=1;goto B40497e;
case 0x404980:goto L404980;
case 0x404983:c.instructions+=1;goto B404983;
case 0x404986:goto L404986;
case 0x404988:c.instructions+=2;goto B404988;
case 0x40498b:c.instructions+=1;goto B40498b;
case 0x40498d:goto L40498d;
case 0x404990:c.instructions+=1;goto B404990;
case 0x404992:goto L404992;
case 0x404995:c.instructions+=2;goto B404995;
case 0x404998:c.instructions+=1;goto B404998;
case 0x40499a:goto L40499a;
case 0x40499d:c.instructions+=1;goto B40499d;
case 0x4049a0:goto L4049a0;
case 0x4049a3:c.instructions+=2;goto B4049a3;
case 0x4049a6:c.instructions+=1;goto B4049a6;
case 0x4049a8:goto L4049a8;
case 0x4049ab:c.instructions+=1;goto B4049ab;
case 0x4049ae:goto L4049ae;
case 0x4049b1:c.instructions+=2;goto B4049b1;
case 0x4049b4:c.instructions+=1;goto B4049b4;
case 0x4049b6:goto L4049b6;
case 0x4049b9:c.instructions+=1;goto B4049b9;
case 0x4049bc:goto L4049bc;
case 0x4049bf:c.instructions+=2;goto B4049bf;
case 0x4049c2:c.instructions+=1;goto B4049c2;
case 0x4049c4:goto L4049c4;
case 0x4049c7:c.instructions+=1;goto B4049c7;
case 0x4049ca:goto L4049ca;
case 0x4049cd:c.instructions+=2;goto B4049cd;
case 0x4049d0:c.instructions+=1;goto B4049d0;
case 0x4049d2:goto L4049d2;
case 0x4049d5:c.instructions+=1;goto B4049d5;
case 0x4049d8:goto L4049d8;
case 0x4049db:c.instructions+=2;goto B4049db;
case 0x4049de:c.instructions+=1;goto B4049de;
case 0x4049e0:goto L4049e0;
case 0x4049e3:c.instructions+=1;goto B4049e3;
case 0x4049e6:goto L4049e6;
case 0x4049e9:c.instructions+=2;goto B4049e9;
case 0x4049ea:c.instructions+=1;goto B4049ea;
case 0x4049ec:goto L4049ec;
case 0x4049f0:goto L4049f0;
case 0x4049f1:c.instructions+=8;goto B4049f1;
case 0x4049f2:c.instructions+=7;goto B4049f2;
case 0x4049f6:c.instructions+=6;goto B4049f6;
case 0x4049f7:c.instructions+=5;goto B4049f7;
case 0x4049fc:c.instructions+=4;goto B4049fc;
case 0x4049fe:c.instructions+=3;goto B4049fe;
case 0x404a00:c.instructions+=2;goto B404a00;
case 0x404a02:c.instructions+=1;goto B404a02;
case 0x404a07:goto L404a07;
case 0x404a08:c.instructions+=2;goto B404a08;
case 0x404a0a:c.instructions+=1;goto B404a0a;
case 0x404a0f:goto L404a0f;
case 0x404a15:c.instructions+=3;goto B404a15;
case 0x404a16:c.instructions+=2;goto B404a16;
case 0x404a18:c.instructions+=1;goto B404a18;
case 0x404a1d:goto L404a1d;
case 0x404a23:c.instructions+=3;goto B404a23;
case 0x404a24:c.instructions+=2;goto B404a24;
case 0x404a26:c.instructions+=1;goto B404a26;
case 0x404a2b:goto L404a2b;
case 0x404a31:c.instructions+=3;goto B404a31;
case 0x404a32:c.instructions+=2;goto B404a32;
case 0x404a34:c.instructions+=1;goto B404a34;
case 0x404a39:goto L404a39;
case 0x404a3f:c.instructions+=3;goto B404a3f;
case 0x404a40:c.instructions+=2;goto B404a40;
case 0x404a42:c.instructions+=1;goto B404a42;
case 0x404a47:goto L404a47;
case 0x404a4d:c.instructions+=3;goto B404a4d;
case 0x404a4e:c.instructions+=2;goto B404a4e;
case 0x404a50:c.instructions+=1;goto B404a50;
case 0x404a55:goto L404a55;
case 0x404a57:c.instructions+=6;goto B404a57;
case 0x404a59:c.instructions+=5;goto B404a59;
case 0x404a5b:c.instructions+=4;goto B404a5b;
case 0x404a61:c.instructions+=3;goto B404a61;
case 0x404a62:c.instructions+=2;goto B404a62;
case 0x404a64:c.instructions+=1;goto B404a64;
case 0x404a69:goto L404a69;
case 0x404a6b:c.instructions+=6;goto B404a6b;
case 0x404a6d:c.instructions+=5;goto B404a6d;
case 0x404a6f:c.instructions+=4;goto B404a6f;
case 0x404a75:c.instructions+=3;goto B404a75;
case 0x404a76:c.instructions+=2;goto B404a76;
case 0x404a78:c.instructions+=1;goto B404a78;
case 0x404a7d:goto L404a7d;
case 0x404a7f:c.instructions+=3;goto B404a7f;
case 0x404a81:c.instructions+=2;goto B404a81;
case 0x404a83:c.instructions+=1;goto B404a83;
case 0x404a85:goto L404a85;
case 0x404a88:c.instructions+=3;goto B404a88;
case 0x404a89:c.instructions+=2;goto B404a89;
case 0x404a8f:c.instructions+=1;goto B404a8f;
case 0x404a93:goto L404a93;
case 0x404a97:c.instructions+=6;goto B404a97;
case 0x404a99:c.instructions+=5;goto B404a99;
case 0x404a9b:c.instructions+=4;goto B404a9b;
case 0x404a9d:c.instructions+=3;goto B404a9d;
case 0x404a9e:c.instructions+=2;goto B404a9e;
case 0x404aa0:c.instructions+=1;goto B404aa0;
case 0x404aa5:goto L404aa5;
case 0x404aa8:c.instructions+=3;goto B404aa8;
case 0x404aa9:c.instructions+=2;goto B404aa9;
case 0x404aab:c.instructions+=1;goto B404aab;
case 0x404ab0:goto L404ab0;
case 0x404ab1:c.instructions+=2;goto B404ab1;
case 0x404ab3:c.instructions+=1;goto B404ab3;
case 0x404ab8:goto L404ab8;
case 0x404abf:c.instructions+=3;goto B404abf;
case 0x404ac0:c.instructions+=2;goto B404ac0;
case 0x404ac2:c.instructions+=1;goto B404ac2;
case 0x404ac7:goto L404ac7;
case 0x404acb:c.instructions+=7;goto B404acb;
case 0x404ace:c.instructions+=6;goto B404ace;
case 0x404acf:c.instructions+=5;goto B404acf;
case 0x404ad2:c.instructions+=4;goto B404ad2;
case 0x404ad5:c.instructions+=3;goto B404ad5;
case 0x404ad7:c.instructions+=2;goto B404ad7;
case 0x404adb:c.instructions+=1;goto B404adb;
case 0x404add:goto L404add;
case 0x404ade:goto L404ade;
case 0x404ae0:c.instructions+=1;goto B404ae0;
case 0x404ae5:goto L404ae5;
case 0x404ae6:c.instructions+=3;goto B404ae6;
case 0x404ae7:c.instructions+=2;goto B404ae7;
case 0x404ae8:c.instructions+=1;goto B404ae8;
case 0x404af0:goto L404af0;
case 0x404af1:c.instructions+=9;goto B404af1;
case 0x404af3:c.instructions+=8;goto B404af3;
case 0x404af6:c.instructions+=7;goto B404af6;
case 0x404af9:c.instructions+=6;goto B404af9;
case 0x404afa:c.instructions+=5;goto B404afa;
case 0x404afc:c.instructions+=4;goto B404afc;
case 0x404aff:c.instructions+=3;goto B404aff;
case 0x404b00:c.instructions+=2;goto B404b00;
case 0x404b01:c.instructions+=1;goto B404b01;
case 0x404b03:goto L404b03;
case 0x404b09:c.instructions+=6;goto B404b09;
case 0x404b0a:c.instructions+=5;goto B404b0a;
case 0x404b0b:c.instructions+=4;goto B404b0b;
case 0x404b0c:c.instructions+=3;goto B404b0c;
case 0x404b0e:c.instructions+=2;goto B404b0e;
case 0x404b0f:c.instructions+=1;goto B404b0f;
case 0x404b12:goto L404b12;
case 0x404b14:goto L404b14;
case 0x404b17:c.instructions+=24;goto B404b17;
case 0x404b19:c.instructions+=23;goto B404b19;
case 0x404b1c:c.instructions+=22;goto B404b1c;
case 0x404b1f:c.instructions+=21;goto B404b1f;
case 0x404b22:c.instructions+=20;goto B404b22;
case 0x404b25:c.instructions+=19;goto B404b25;
case 0x404b28:c.instructions+=18;goto B404b28;
case 0x404b2a:c.instructions+=17;goto B404b2a;
case 0x404b2c:c.instructions+=16;goto B404b2c;
case 0x404b2e:c.instructions+=15;goto B404b2e;
case 0x404b30:c.instructions+=14;goto B404b30;
case 0x404b32:c.instructions+=13;goto B404b32;
case 0x404b34:c.instructions+=12;goto B404b34;
case 0x404b36:c.instructions+=11;goto B404b36;
case 0x404b38:c.instructions+=10;goto B404b38;
case 0x404b3a:c.instructions+=9;goto B404b3a;
case 0x404b3c:c.instructions+=8;goto B404b3c;
case 0x404b3e:c.instructions+=7;goto B404b3e;
case 0x404b40:c.instructions+=6;goto B404b40;
case 0x404b41:c.instructions+=5;goto B404b41;
case 0x404b42:c.instructions+=4;goto B404b42;
case 0x404b43:c.instructions+=3;goto B404b43;
case 0x404b45:c.instructions+=2;goto B404b45;
case 0x404b46:c.instructions+=1;goto B404b46;
case 0x404b49:goto L404b49;
case 0x404b4c:c.instructions+=31;goto B404b4c;
case 0x404b4e:c.instructions+=30;goto B404b4e;
case 0x404b53:c.instructions+=29;goto B404b53;
case 0x404b56:c.instructions+=28;goto B404b56;
case 0x404b5a:c.instructions+=27;goto B404b5a;
case 0x404b5d:c.instructions+=26;goto B404b5d;
case 0x404b60:c.instructions+=25;goto B404b60;
case 0x404b64:c.instructions+=24;goto B404b64;
case 0x404b67:c.instructions+=23;goto B404b67;
case 0x404b6a:c.instructions+=22;goto B404b6a;
case 0x404b6e:c.instructions+=21;goto B404b6e;
case 0x404b71:c.instructions+=20;goto B404b71;
case 0x404b74:c.instructions+=19;goto B404b74;
case 0x404b78:c.instructions+=18;goto B404b78;
case 0x404b7b:c.instructions+=17;goto B404b7b;
case 0x404b7e:c.instructions+=16;goto B404b7e;
case 0x404b82:c.instructions+=15;goto B404b82;
case 0x404b85:c.instructions+=14;goto B404b85;
case 0x404b88:c.instructions+=13;goto B404b88;
case 0x404b8c:c.instructions+=12;goto B404b8c;
case 0x404b90:c.instructions+=11;goto B404b90;
case 0x404b94:c.instructions+=10;goto B404b94;
case 0x404b98:c.instructions+=9;goto B404b98;
case 0x404b9c:c.instructions+=8;goto B404b9c;
case 0x404b9e:c.instructions+=7;goto B404b9e;
case 0x404ba2:c.instructions+=6;goto B404ba2;
case 0x404ba6:c.instructions+=5;goto B404ba6;
case 0x404ba8:c.instructions+=4;goto B404ba8;
case 0x404bae:c.instructions+=3;goto B404bae;
case 0x404bb0:c.instructions+=2;goto B404bb0;
case 0x404bb3:c.instructions+=1;goto B404bb3;
case 0x404bb9:goto L404bb9;
case 0x404bbc:c.instructions+=2;goto B404bbc;
case 0x404bbf:c.instructions+=1;goto B404bbf;
case 0x404bc0:goto L404bc0;
case 0x404bc2:c.instructions+=1;goto B404bc2;
case 0x404bc8:goto L404bc8;
case 0x404bca:c.instructions+=28;goto B404bca;
case 0x404bcd:c.instructions+=27;goto B404bcd;
case 0x404bd1:c.instructions+=26;goto B404bd1;
case 0x404bd4:c.instructions+=25;goto B404bd4;
case 0x404bd7:c.instructions+=24;goto B404bd7;
case 0x404bdb:c.instructions+=23;goto B404bdb;
case 0x404bde:c.instructions+=22;goto B404bde;
case 0x404be1:c.instructions+=21;goto B404be1;
case 0x404be5:c.instructions+=20;goto B404be5;
case 0x404be8:c.instructions+=19;goto B404be8;
case 0x404beb:c.instructions+=18;goto B404beb;
case 0x404bef:c.instructions+=17;goto B404bef;
case 0x404bf2:c.instructions+=16;goto B404bf2;
case 0x404bf5:c.instructions+=15;goto B404bf5;
case 0x404bf9:c.instructions+=14;goto B404bf9;
case 0x404bfb:c.instructions+=13;goto B404bfb;
case 0x404bfe:c.instructions+=12;goto B404bfe;
case 0x404c02:c.instructions+=11;goto B404c02;
case 0x404c06:c.instructions+=10;goto B404c06;
case 0x404c0a:c.instructions+=9;goto B404c0a;
case 0x404c0e:c.instructions+=8;goto B404c0e;
case 0x404c10:c.instructions+=7;goto B404c10;
case 0x404c14:c.instructions+=6;goto B404c14;
case 0x404c18:c.instructions+=5;goto B404c18;
case 0x404c1a:c.instructions+=4;goto B404c1a;
case 0x404c20:c.instructions+=3;goto B404c20;
case 0x404c22:c.instructions+=2;goto B404c22;
case 0x404c25:c.instructions+=1;goto B404c25;
case 0x404c27:goto L404c27;
case 0x404c2b:c.instructions+=11;goto B404c2b;
case 0x404c2f:c.instructions+=10;goto B404c2f;
case 0x404c33:c.instructions+=9;goto B404c33;
case 0x404c37:c.instructions+=8;goto B404c37;
case 0x404c3b:c.instructions+=7;goto B404c3b;
case 0x404c3f:c.instructions+=6;goto B404c3f;
case 0x404c43:c.instructions+=5;goto B404c43;
case 0x404c47:c.instructions+=4;goto B404c47;
case 0x404c4b:c.instructions+=3;goto B404c4b;
case 0x404c4f:c.instructions+=2;goto B404c4f;
case 0x404c53:c.instructions+=1;goto B404c53;
case 0x404c57:goto L404c57;
case 0x404c5d:c.instructions+=5;goto B404c5d;
case 0x404c5e:c.instructions+=4;goto B404c5e;
case 0x404c61:c.instructions+=3;goto B404c61;
case 0x404c63:c.instructions+=2;goto B404c63;
case 0x404c66:c.instructions+=1;goto B404c66;
case 0x404c6c:goto L404c6c;
case 0x404c70:c.instructions+=9;goto B404c70;
case 0x404c71:c.instructions+=8;goto B404c71;
case 0x404c75:c.instructions+=7;goto B404c75;
case 0x404c76:c.instructions+=6;goto B404c76;
case 0x404c7a:c.instructions+=5;goto B404c7a;
case 0x404c7b:c.instructions+=4;goto B404c7b;
case 0x404c83:c.instructions+=3;goto B404c83;
case 0x404c8b:c.instructions+=2;goto B404c8b;
case 0x404c93:c.instructions+=1;goto B404c93;
case 0x404c98:goto L404c98;
case 0x404c9c:c.instructions+=4;goto B404c9c;
case 0x404c9d:c.instructions+=3;goto B404c9d;
case 0x404ca1:c.instructions+=2;goto B404ca1;
case 0x404ca2:c.instructions+=1;goto B404ca2;
case 0x404ca7:goto L404ca7;
case 0x404cab:c.instructions+=14;goto B404cab;
case 0x404caf:c.instructions+=13;goto B404caf;
case 0x404cb2:c.instructions+=12;goto B404cb2;
case 0x404cb6:c.instructions+=11;goto B404cb6;
case 0x404cb7:c.instructions+=10;goto B404cb7;
case 0x404cbb:c.instructions+=9;goto B404cbb;
case 0x404cbc:c.instructions+=8;goto B404cbc;
case 0x404cbd:c.instructions+=7;goto B404cbd;
case 0x404cbf:c.instructions+=6;goto B404cbf;
case 0x404cc3:c.instructions+=5;goto B404cc3;
case 0x404cc7:c.instructions+=4;goto B404cc7;
case 0x404cc9:c.instructions+=3;goto B404cc9;
case 0x404ccb:c.instructions+=2;goto B404ccb;
case 0x404ccc:c.instructions+=1;goto B404ccc;
case 0x404cd0:goto L404cd0;
case 0x404cd3:c.instructions+=9;goto B404cd3;
case 0x404cd8:c.instructions+=8;goto B404cd8;
case 0x404cd9:c.instructions+=7;goto B404cd9;
case 0x404cda:c.instructions+=6;goto B404cda;
case 0x404cdc:c.instructions+=5;goto B404cdc;
case 0x404cde:c.instructions+=4;goto B404cde;
case 0x404ce1:c.instructions+=3;goto B404ce1;
case 0x404ce3:c.instructions+=2;goto B404ce3;
case 0x404ce7:c.instructions+=1;goto B404ce7;
case 0x404ced:goto L404ced;
case 0x404cef:c.instructions+=4;goto B404cef;
case 0x404cf0:c.instructions+=3;goto B404cf0;
case 0x404cf1:c.instructions+=2;goto B404cf1;
case 0x404cf5:c.instructions+=1;goto B404cf5;
case 0x404cfb:goto L404cfb;
case 0x404cfd:c.instructions+=18;goto B404cfd;
case 0x404d00:c.instructions+=17;goto B404d00;
case 0x404d03:c.instructions+=16;goto B404d03;
case 0x404d06:c.instructions+=15;goto B404d06;
case 0x404d09:c.instructions+=14;goto B404d09;
case 0x404d0c:c.instructions+=13;goto B404d0c;
case 0x404d0f:c.instructions+=12;goto B404d0f;
case 0x404d11:c.instructions+=11;goto B404d11;
case 0x404d13:c.instructions+=10;goto B404d13;
case 0x404d15:c.instructions+=9;goto B404d15;
case 0x404d17:c.instructions+=8;goto B404d17;
case 0x404d19:c.instructions+=7;goto B404d19;
case 0x404d1b:c.instructions+=6;goto B404d1b;
case 0x404d1d:c.instructions+=5;goto B404d1d;
case 0x404d1f:c.instructions+=4;goto B404d1f;
case 0x404d25:c.instructions+=3;goto B404d25;
case 0x404d27:c.instructions+=2;goto B404d27;
case 0x404d2a:c.instructions+=1;goto B404d2a;
case 0x404d2c:goto L404d2c;
case 0x404d2e:goto L404d2e;
case 0x404d32:c.instructions+=2;goto B404d32;
case 0x404d34:c.instructions+=1;goto B404d34;
case 0x404d3a:goto L404d3a;
case 0x404d3c:c.instructions+=1;goto B404d3c;
case 0x404d42:goto L404d42;
case 0x404d48:c.instructions+=3;goto B404d48;
case 0x404d4a:c.instructions+=2;goto B404d4a;
case 0x404d4d:c.instructions+=1;goto B404d4d;
case 0x404d53:goto L404d53;
case 0x404d56:c.instructions+=1;goto B404d56;
case 0x404d58:goto L404d58;
case 0x404d5b:c.instructions+=1;goto B404d5b;
case 0x404d5d:goto L404d5d;
case 0x404d61:c.instructions+=2;goto B404d61;
case 0x404d63:c.instructions+=1;goto B404d63;
case 0x404d69:goto L404d69;
case 0x404d6c:goto L404d6c;
case 0x404d6e:c.instructions+=1;goto B404d6e;
case 0x404d74:goto L404d74;
case 0x404d75:c.instructions+=4;goto B404d75;
case 0x404d79:c.instructions+=3;goto B404d79;
case 0x404d7a:c.instructions+=2;goto B404d7a;
case 0x404d7b:c.instructions+=1;goto B404d7b;
case 0x404d80:goto L404d80;
case 0x404d81:c.instructions+=4;goto B404d81;
case 0x404d85:c.instructions+=3;goto B404d85;
case 0x404d86:c.instructions+=2;goto B404d86;
case 0x404d87:c.instructions+=1;goto B404d87;
case 0x404d8c:goto L404d8c;
case 0x404d90:c.instructions+=9;goto B404d90;
case 0x404d94:c.instructions+=8;goto B404d94;
case 0x404d97:c.instructions+=7;goto B404d97;
case 0x404d9b:c.instructions+=6;goto B404d9b;
case 0x404d9f:c.instructions+=5;goto B404d9f;
case 0x404da1:c.instructions+=4;goto B404da1;
case 0x404da7:c.instructions+=3;goto B404da7;
case 0x404da9:c.instructions+=2;goto B404da9;
case 0x404dac:c.instructions+=1;goto B404dac;
case 0x404dae:goto L404dae;
case 0x404db0:c.instructions+=1;goto B404db0;
case 0x404db5:goto L404db5;
case 0x404db6:c.instructions+=6;goto B404db6;
case 0x404db7:c.instructions+=5;goto B404db7;
case 0x404db8:c.instructions+=4;goto B404db8;
case 0x404dba:c.instructions+=3;goto B404dba;
case 0x404dbb:c.instructions+=2;goto B404dbb;
case 0x404dbe:c.instructions+=1;goto B404dbe;
case 0x404dc1:goto L404dc1;
case 0x404dc5:c.instructions+=2;goto B404dc5;
case 0x404dc7:c.instructions+=1;goto B404dc7;
case 0x404dc9:goto L404dc9;
case 0x404dcb:c.instructions+=15;goto B404dcb;
case 0x404dce:c.instructions+=14;goto B404dce;
case 0x404dd0:c.instructions+=13;goto B404dd0;
case 0x404dd3:c.instructions+=12;goto B404dd3;
case 0x404dd6:c.instructions+=11;goto B404dd6;
case 0x404dd9:c.instructions+=10;goto B404dd9;
case 0x404ddb:c.instructions+=9;goto B404ddb;
case 0x404ddd:c.instructions+=8;goto B404ddd;
case 0x404ddf:c.instructions+=7;goto B404ddf;
case 0x404de1:c.instructions+=6;goto B404de1;
case 0x404de3:c.instructions+=5;goto B404de3;
case 0x404de5:c.instructions+=4;goto B404de5;
case 0x404de7:c.instructions+=3;goto B404de7;
case 0x404de9:c.instructions+=2;goto B404de9;
case 0x404ded:c.instructions+=1;goto B404ded;
case 0x404def:goto L404def;
case 0x404df5:c.instructions+=1;goto B404df5;
case 0x404df9:goto L404df9;
case 0x404dff:c.instructions+=3;goto B404dff;
case 0x404e01:c.instructions+=2;goto B404e01;
case 0x404e04:c.instructions+=1;goto B404e04;
case 0x404e06:goto L404e06;
case 0x404e08:c.instructions+=3;goto B404e08;
case 0x404e09:c.instructions+=2;goto B404e09;
case 0x404e0a:c.instructions+=1;goto B404e0a;
case 0x404e0f:goto L404e0f;
case 0x404e12:c.instructions+=2;goto B404e12;
case 0x404e14:c.instructions+=1;goto B404e14;
case 0x404e16:goto L404e16;
case 0x404e1a:c.instructions+=4;goto B404e1a;
case 0x404e1e:c.instructions+=3;goto B404e1e;
case 0x404e20:c.instructions+=2;goto B404e20;
case 0x404e23:c.instructions+=1;goto B404e23;
case 0x404e25:goto L404e25;
case 0x404e27:c.instructions+=2;goto B404e27;
case 0x404e2b:c.instructions+=1;goto B404e2b;
case 0x404e2d:goto L404e2d;
case 0x404e2f:goto L404e2f;
case 0x404e33:c.instructions+=1;goto B404e33;
case 0x404e35:goto L404e35;
case 0x404e37:goto L404e37;
case 0x404e39:c.instructions+=1;goto B404e39;
case 0x404e3f:goto L404e3f;
case 0x404e42:c.instructions+=25;goto B404e42;
case 0x404e45:c.instructions+=24;goto B404e45;
case 0x404e48:c.instructions+=23;goto B404e48;
case 0x404e4a:c.instructions+=22;goto B404e4a;
case 0x404e4b:c.instructions+=21;goto B404e4b;
case 0x404e4d:c.instructions+=20;goto B404e4d;
case 0x404e50:c.instructions+=19;goto B404e50;
case 0x404e52:c.instructions+=18;goto B404e52;
case 0x404e54:c.instructions+=17;goto B404e54;
case 0x404e57:c.instructions+=16;goto B404e57;
case 0x404e5a:c.instructions+=15;goto B404e5a;
case 0x404e5d:c.instructions+=14;goto B404e5d;
case 0x404e62:c.instructions+=13;goto B404e62;
case 0x404e6a:c.instructions+=12;goto B404e6a;
case 0x404e6d:c.instructions+=11;goto B404e6d;
case 0x404e72:c.instructions+=10;goto B404e72;
case 0x404e7a:c.instructions+=9;goto B404e7a;
case 0x404e7d:c.instructions+=8;goto B404e7d;
case 0x404e81:c.instructions+=7;goto B404e81;
case 0x404e88:c.instructions+=6;goto B404e88;
case 0x404e8a:c.instructions+=5;goto B404e8a;
case 0x404e90:c.instructions+=4;goto B404e90;
case 0x404e96:c.instructions+=3;goto B404e96;
case 0x404e98:c.instructions+=2;goto B404e98;
case 0x404e9a:c.instructions+=1;goto B404e9a;
case 0x404e9c:goto L404e9c;
case 0x404e9f:c.instructions+=5;goto B404e9f;
case 0x404ea2:c.instructions+=4;goto B404ea2;
case 0x404ea4:c.instructions+=3;goto B404ea4;
case 0x404ea5:c.instructions+=2;goto B404ea5;
case 0x404ea6:c.instructions+=1;goto B404ea6;
case 0x404eab:goto L404eab;
case 0x404eae:c.instructions+=2;goto B404eae;
case 0x404eb4:c.instructions+=1;goto B404eb4;
case 0x404eba:goto L404eba;
case 0x404ebc:c.instructions+=9;goto B404ebc;
case 0x404ebd:c.instructions+=8;goto B404ebd;
case 0x404ebf:c.instructions+=7;goto B404ebf;
case 0x404ec0:c.instructions+=6;goto B404ec0;
case 0x404ec2:c.instructions+=5;goto B404ec2;
case 0x404ec3:c.instructions+=4;goto B404ec3;
case 0x404ec5:c.instructions+=3;goto B404ec5;
case 0x404ec6:c.instructions+=2;goto B404ec6;
case 0x404ec9:c.instructions+=1;goto B404ec9;
case 0x404ecc:goto L404ecc;
case 0x404ecd:c.instructions+=4;goto B404ecd;
case 0x404ecf:c.instructions+=3;goto B404ecf;
case 0x404ed0:c.instructions+=2;goto B404ed0;
case 0x404ed3:c.instructions+=1;goto B404ed3;
case 0x404ed6:goto L404ed6;
case 0x404ed8:goto L404ed8;
case 0x404ed9:c.instructions+=6;goto B404ed9;
case 0x404eda:c.instructions+=5;goto B404eda;
case 0x404edb:c.instructions+=4;goto B404edb;
case 0x404edd:c.instructions+=3;goto B404edd;
case 0x404ede:c.instructions+=2;goto B404ede;
case 0x404ee1:c.instructions+=1;goto B404ee1;
case 0x404ef0:goto L404ef0;
case 0x404ef1:c.instructions+=10;goto B404ef1;
case 0x404ef3:c.instructions+=9;goto B404ef3;
case 0x404ef6:c.instructions+=8;goto B404ef6;
case 0x404ef9:c.instructions+=7;goto B404ef9;
case 0x404efe:c.instructions+=6;goto B404efe;
case 0x404eff:c.instructions+=5;goto B404eff;
case 0x404f00:c.instructions+=4;goto B404f00;
case 0x404f02:c.instructions+=3;goto B404f02;
case 0x404f08:c.instructions+=2;goto B404f08;
case 0x404f09:c.instructions+=1;goto B404f09;
case 0x404f0f:goto L404f0f;
case 0x404f11:c.instructions+=3;goto B404f11;
case 0x404f13:c.instructions+=2;goto B404f13;
case 0x404f15:c.instructions+=1;goto B404f15;
case 0x404f1b:goto L404f1b;
case 0x404f1e:c.instructions+=7;goto B404f1e;
case 0x404f21:c.instructions+=6;goto B404f21;
case 0x404f27:c.instructions+=5;goto B404f27;
case 0x404f28:c.instructions+=4;goto B404f28;
case 0x404f2c:c.instructions+=3;goto B404f2c;
case 0x404f2e:c.instructions+=2;goto B404f2e;
case 0x404f31:c.instructions+=1;goto B404f31;
case 0x404f33:goto L404f33;
case 0x404f39:c.instructions+=2;goto B404f39;
case 0x404f3d:c.instructions+=1;goto B404f3d;
case 0x404f3f:goto L404f3f;
case 0x404f45:c.instructions+=1;goto B404f45;
case 0x404f49:goto L404f49;
case 0x404f4c:c.instructions+=4;goto B404f4c;
case 0x404f4d:c.instructions+=3;goto B404f4d;
case 0x404f51:c.instructions+=2;goto B404f51;
case 0x404f52:c.instructions+=1;goto B404f52;
case 0x404f57:goto L404f57;
case 0x404f59:c.instructions+=3;goto B404f59;
case 0x404f5c:c.instructions+=2;goto B404f5c;
case 0x404f5e:c.instructions+=1;goto B404f5e;
case 0x404f60:goto L404f60;
case 0x404f63:goto L404f63;
case 0x404f66:c.instructions+=12;goto B404f66;
case 0x404f68:c.instructions+=11;goto B404f68;
case 0x404f6a:c.instructions+=10;goto B404f6a;
case 0x404f6e:c.instructions+=9;goto B404f6e;
case 0x404f71:c.instructions+=8;goto B404f71;
case 0x404f72:c.instructions+=7;goto B404f72;
case 0x404f75:c.instructions+=6;goto B404f75;
case 0x404f77:c.instructions+=5;goto B404f77;
case 0x404f7b:c.instructions+=4;goto B404f7b;
case 0x404f7f:c.instructions+=3;goto B404f7f;
case 0x404f80:c.instructions+=2;goto B404f80;
case 0x404f84:c.instructions+=1;goto B404f84;
case 0x404f89:goto L404f89;
case 0x404f8d:c.instructions+=9;goto B404f8d;
case 0x404f91:c.instructions+=8;goto B404f91;
case 0x404f94:c.instructions+=7;goto B404f94;
case 0x404f98:c.instructions+=6;goto B404f98;
case 0x404f9c:c.instructions+=5;goto B404f9c;
case 0x404f9e:c.instructions+=4;goto B404f9e;
case 0x404fa2:c.instructions+=3;goto B404fa2;
case 0x404fa4:c.instructions+=2;goto B404fa4;
case 0x404fa7:c.instructions+=1;goto B404fa7;
case 0x404fa9:goto L404fa9;
case 0x404fad:c.instructions+=8;goto B404fad;
case 0x404fb1:c.instructions+=7;goto B404fb1;
case 0x404fb5:c.instructions+=6;goto B404fb5;
case 0x404fb9:c.instructions+=5;goto B404fb9;
case 0x404fbb:c.instructions+=4;goto B404fbb;
case 0x404fc1:c.instructions+=3;goto B404fc1;
case 0x404fc3:c.instructions+=2;goto B404fc3;
case 0x404fc6:c.instructions+=1;goto B404fc6;
case 0x404fc8:goto L404fc8;
case 0x404fcb:c.instructions+=4;goto B404fcb;
case 0x404fcc:c.instructions+=3;goto B404fcc;
case 0x404fcf:c.instructions+=2;goto B404fcf;
case 0x404fd1:c.instructions+=1;goto B404fd1;
case 0x404fd3:goto L404fd3;
case 0x404fd5:goto L404fd5;
case 0x404fd9:goto L404fd9;
case 0x404fdd:c.instructions+=10;goto B404fdd;
case 0x404fe3:c.instructions+=9;goto B404fe3;
case 0x404fe8:c.instructions+=8;goto B404fe8;
case 0x404fee:c.instructions+=7;goto B404fee;
case 0x404ff5:c.instructions+=6;goto B404ff5;
case 0x404ff6:c.instructions+=5;goto B404ff6;
case 0x404ff7:c.instructions+=4;goto B404ff7;
case 0x404ff8:c.instructions+=3;goto B404ff8;
case 0x404ffa:c.instructions+=2;goto B404ffa;
case 0x404ffb:c.instructions+=1;goto B404ffb;
case 0x404ffe:goto L404ffe;
default:missing_instruction(c.pc);}
B404002:L404002:{c.instructions+=1;NFSU2_TR(0x404002);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x403fe7u,403);}
}
B404004:L404004:{c.instructions+=3;NFSU2_TR(0x404004);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x150ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40400a:{NFSU2_TR(0x40400a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x150ull))));
__builtin_memmove((R+28),(U+0),4);
}
B404010:{NFSU2_TR(0x404010);
w4(R+4,u32(0xaull));
}
B404015:L404015:{c.instructions+=1;NFSU2_TR(0x404015);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L404017;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x404015u);}goto L404015;}
}
B404017:L404017:{c.instructions+=3;NFSU2_TR(0x404017);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x178ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40401d:{NFSU2_TR(0x40401d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x178ull))));
__builtin_memmove((R+28),(U+0),4);
}
B404023:{NFSU2_TR(0x404023);
w4(R+4,u32(0xaull));
}
B404028:L404028:{c.instructions+=1;NFSU2_TR(0x404028);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L40402a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x404028u);}goto L404028;}
}
B40402a:L40402a:{c.instructions+=3;NFSU2_TR(0x40402a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1a0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B404030:{NFSU2_TR(0x404030);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1a0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B404036:{NFSU2_TR(0x404036);
w4(R+4,u32(0x5ull));
}
B40403b:L40403b:{c.instructions+=1;NFSU2_TR(0x40403b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L40403d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40403bu);}goto L40403b;}
}
B40403d:L40403d:{c.instructions+=18;NFSU2_TR(0x40403d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B404043:{NFSU2_TR(0x404043);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B404049:{NFSU2_TR(0x404049);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40404f:{NFSU2_TR(0x40404f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404055:{NFSU2_TR(0x404055);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40405b:{NFSU2_TR(0x40405b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404061:{NFSU2_TR(0x404061);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B404067:{NFSU2_TR(0x404067);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40406d:{NFSU2_TR(0x40406d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B404073:{NFSU2_TR(0x404073);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404079:{NFSU2_TR(0x404079);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B40407f:{NFSU2_TR(0x40407f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B404080:{NFSU2_TR(0x404080);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B404086:{NFSU2_TR(0x404086);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1c9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B40408c:{NFSU2_TR(0x40408c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40408d:{NFSU2_TR(0x40408d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B404093:{NFSU2_TR(0x404093);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B404094:{NFSU2_TR(0x404094);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4040a0:L4040a0:{c.instructions+=36;NFSU2_TR(0x4040a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4040a1:{NFSU2_TR(0x4040a1);
__builtin_memmove((R+20),(R+16),4);
}
B4040a3:{NFSU2_TR(0x4040a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4040a6:{NFSU2_TR(0x4040a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4040a9:{NFSU2_TR(0x4040a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4040ac:{NFSU2_TR(0x4040ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4040af:{NFSU2_TR(0x4040af);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4040b1:{NFSU2_TR(0x4040b1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4040b3:{NFSU2_TR(0x4040b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4040b4:{NFSU2_TR(0x4040b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4040b5:{NFSU2_TR(0x4040b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4040b6:{NFSU2_TR(0x4040b6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4040bc:{NFSU2_TR(0x4040bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4040c0:{NFSU2_TR(0x4040c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4040c8:{NFSU2_TR(0x4040c8);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4040ca:{NFSU2_TR(0x4040ca);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4040cd:{NFSU2_TR(0x4040cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4040d5:{NFSU2_TR(0x4040d5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4040d9:{NFSU2_TR(0x4040d9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4040dc:{NFSU2_TR(0x4040dc);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4040df:{NFSU2_TR(0x4040df);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4040e5:{NFSU2_TR(0x4040e5);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4040e7:{NFSU2_TR(0x4040e7);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4040ea:{NFSU2_TR(0x4040ea);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4040ee:{NFSU2_TR(0x4040ee);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4040f1:{NFSU2_TR(0x4040f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4040f4:{NFSU2_TR(0x4040f4);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4040f7:{NFSU2_TR(0x4040f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4040f8:{NFSU2_TR(0x4040f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4040fc:{NFSU2_TR(0x4040fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4040fd:{NFSU2_TR(0x4040fd);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404103:{NFSU2_TR(0x404103);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404104:{NFSU2_TR(0x404104);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B404106:{NFSU2_TR(0x404106);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404109:{NFSU2_TR(0x404109);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40410d:{NFSU2_TR(0x40410d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404112ull));
TAIL_STATIC(0x43c390u,43c);
}
B404112:L404112:{c.instructions+=37;NFSU2_TR(0x404112);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404115:{NFSU2_TR(0x404115);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404119:{NFSU2_TR(0x404119);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40411d:{NFSU2_TR(0x40411d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B40411f:{NFSU2_TR(0x40411f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B404123:{NFSU2_TR(0x404123);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B404126:{NFSU2_TR(0x404126);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404129:{NFSU2_TR(0x404129);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40412d:{NFSU2_TR(0x40412d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404130:{NFSU2_TR(0x404130);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B404132:{NFSU2_TR(0x404132);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404135:{NFSU2_TR(0x404135);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404138:{NFSU2_TR(0x404138);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40413b:{NFSU2_TR(0x40413b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40413f:{NFSU2_TR(0x40413f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404142:{NFSU2_TR(0x404142);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404145:{NFSU2_TR(0x404145);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404148:{NFSU2_TR(0x404148);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40414b:{NFSU2_TR(0x40414b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40414e:{NFSU2_TR(0x40414e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B404155:{NFSU2_TR(0x404155);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404158:{NFSU2_TR(0x404158);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40415b:{NFSU2_TR(0x40415b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40415f:{NFSU2_TR(0x40415f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404162:{NFSU2_TR(0x404162);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404165:{NFSU2_TR(0x404165);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404168:{NFSU2_TR(0x404168);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40416b:{NFSU2_TR(0x40416b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40416e:{NFSU2_TR(0x40416e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B404170:{NFSU2_TR(0x404170);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B404172:{NFSU2_TR(0x404172);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404175:{NFSU2_TR(0x404175);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B404178:{NFSU2_TR(0x404178);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B404180:{NFSU2_TR(0x404180);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404183:{NFSU2_TR(0x404183);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B404185:{NFSU2_TR(0x404185);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
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
B404188:{NFSU2_TR(0x404188);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L404235;}}
}
B40418e:L40418e:{c.instructions+=2;NFSU2_TR(0x40418e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x24ull))));
}
B404191:{NFSU2_TR(0x404191);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((R+24),(U+0),4);
}
B404194:L404194:{c.instructions+=11;NFSU2_TR(0x404194);
{u32 ea_=u32(r4(R+28)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404197:{NFSU2_TR(0x404197);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B40419b:{NFSU2_TR(0x40419b);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40419e:{NFSU2_TR(0x40419e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40419f:{NFSU2_TR(0x40419f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4041a3:{NFSU2_TR(0x4041a3);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4041a7:{NFSU2_TR(0x4041a7);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4041aa:{NFSU2_TR(0x4041aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4041ab:{NFSU2_TR(0x4041ab);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4041ad:{NFSU2_TR(0x4041ad);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4041b1:{NFSU2_TR(0x4041b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4041b6ull));
TAIL_STATIC(0x43ce50u,43c);
}
B4041b6:L4041b6:{c.instructions+=40;NFSU2_TR(0x4041b6);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4041ba:{NFSU2_TR(0x4041ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4041be:{NFSU2_TR(0x4041be);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4041c0:{NFSU2_TR(0x4041c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4041c4:{NFSU2_TR(0x4041c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4041c7:{NFSU2_TR(0x4041c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4041cb:{NFSU2_TR(0x4041cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4041ce:{NFSU2_TR(0x4041ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4041d0:{NFSU2_TR(0x4041d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4041d3:{NFSU2_TR(0x4041d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4041d6:{NFSU2_TR(0x4041d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4041d9:{NFSU2_TR(0x4041d9);
__builtin_memmove((R+0),(R+4),4);
}
B4041db:{NFSU2_TR(0x4041db);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4041df:{NFSU2_TR(0x4041df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4041e2:{NFSU2_TR(0x4041e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4041e6:{NFSU2_TR(0x4041e6);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4041e9:{NFSU2_TR(0x4041e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4041ec:{NFSU2_TR(0x4041ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4041ef:{NFSU2_TR(0x4041ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4041f6:{NFSU2_TR(0x4041f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4041f9:{NFSU2_TR(0x4041f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4041fc:{NFSU2_TR(0x4041fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404200:{NFSU2_TR(0x404200);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404203:{NFSU2_TR(0x404203);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B404206:{NFSU2_TR(0x404206);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404209:{NFSU2_TR(0x404209);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40420b:{NFSU2_TR(0x40420b);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40420e:{NFSU2_TR(0x40420e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B404211:{NFSU2_TR(0x404211);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B404213:{NFSU2_TR(0x404213);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404216:{NFSU2_TR(0x404216);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404219:{NFSU2_TR(0x404219);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B40421c:{NFSU2_TR(0x40421c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B40421d:{NFSU2_TR(0x40421d);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404220:{NFSU2_TR(0x404220);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+4,u32(s32(s8(r1(U+0)))));
}
B404223:{NFSU2_TR(0x404223);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B404226:{NFSU2_TR(0x404226);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x50ull))));
}
B404229:{NFSU2_TR(0x404229);
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
B40422b:{NFSU2_TR(0x40422b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40422f:{NFSU2_TR(0x40422f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x404194u);}goto L404194;}}
}
B404235:L404235:{c.instructions+=6;NFSU2_TR(0x404235);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B404236:{NFSU2_TR(0x404236);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B404237:{NFSU2_TR(0x404237);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B404238:{NFSU2_TR(0x404238);
__builtin_memmove((R+16),(R+20),4);
}
B40423a:{NFSU2_TR(0x40423a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40423b:{NFSU2_TR(0x40423b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B404240:L404240:{c.instructions+=13;NFSU2_TR(0x404240);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B404243:{NFSU2_TR(0x404243);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404247:{NFSU2_TR(0x404247);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40424b:{NFSU2_TR(0x40424b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40424f:{NFSU2_TR(0x40424f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404250:{NFSU2_TR(0x404250);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404254:{NFSU2_TR(0x404254);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404258:{NFSU2_TR(0x404258);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404259:{NFSU2_TR(0x404259);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40425d:{NFSU2_TR(0x40425d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404261:{NFSU2_TR(0x404261);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404265:{NFSU2_TR(0x404265);
w4(R+28,u32(0x3ull));
}
B40426a:{NFSU2_TR(0x40426a);
__builtin_memmove((R+12),(R+12),4);
}
B404270:L404270:{c.instructions+=3;NFSU2_TR(0x404270);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B404272:{NFSU2_TR(0x404272);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B404275:{NFSU2_TR(0x404275);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L404342;}}
}
B40427b:L40427b:{c.instructions+=1;NFSU2_TR(0x40427b);
w4(R+24,u32(0x3ull));
}
B404280:L404280:{c.instructions+=5;NFSU2_TR(0x404280);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404284:{NFSU2_TR(0x404284);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B404288:{NFSU2_TR(0x404288);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40428a:{NFSU2_TR(0x40428a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40428d:{NFSU2_TR(0x40428d);
if(r1(R+514)){{goto L4042ad;}}
}
B40428f:L40428f:{c.instructions+=9;NFSU2_TR(0x40428f);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B404293:{NFSU2_TR(0x404293);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B404297:{NFSU2_TR(0x404297);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B404299:{NFSU2_TR(0x404299);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B40429b:{NFSU2_TR(0x40429b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40429f:{NFSU2_TR(0x40429f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B4042a1:{NFSU2_TR(0x4042a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4042a5:{NFSU2_TR(0x4042a5);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4042a9:{NFSU2_TR(0x4042a9);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4042ad:L4042ad:{c.instructions+=5;NFSU2_TR(0x4042ad);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4042b1:{NFSU2_TR(0x4042b1);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4042b5:{NFSU2_TR(0x4042b5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4042b7:{NFSU2_TR(0x4042b7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4042ba:{NFSU2_TR(0x4042ba);
if(r1(R+514)){{goto L4042da;}}
}
B4042bc:L4042bc:{c.instructions+=9;NFSU2_TR(0x4042bc);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4042c0:{NFSU2_TR(0x4042c0);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4042c4:{NFSU2_TR(0x4042c4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B4042c6:{NFSU2_TR(0x4042c6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B4042c8:{NFSU2_TR(0x4042c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4042cc:{NFSU2_TR(0x4042cc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B4042ce:{NFSU2_TR(0x4042ce);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4042d2:{NFSU2_TR(0x4042d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4042d6:{NFSU2_TR(0x4042d6);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4042da:L4042da:{c.instructions+=5;NFSU2_TR(0x4042da);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4042de:{NFSU2_TR(0x4042de);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4042e2:{NFSU2_TR(0x4042e2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4042e4:{NFSU2_TR(0x4042e4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4042e7:{NFSU2_TR(0x4042e7);
if(r1(R+514)){{goto L404307;}}
}
B4042e9:L4042e9:{c.instructions+=9;NFSU2_TR(0x4042e9);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4042ed:{NFSU2_TR(0x4042ed);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4042f1:{NFSU2_TR(0x4042f1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B4042f3:{NFSU2_TR(0x4042f3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B4042f5:{NFSU2_TR(0x4042f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4042f9:{NFSU2_TR(0x4042f9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B4042fb:{NFSU2_TR(0x4042fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4042ff:{NFSU2_TR(0x4042ff);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B404303:{NFSU2_TR(0x404303);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B404307:L404307:{c.instructions+=5;NFSU2_TR(0x404307);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40430b:{NFSU2_TR(0x40430b);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40430f:{NFSU2_TR(0x40430f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B404311:{NFSU2_TR(0x404311);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B404314:{NFSU2_TR(0x404314);
if(r1(R+514)){{goto L404334;}}
}
B404316:L404316:{c.instructions+=9;NFSU2_TR(0x404316);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B40431a:{NFSU2_TR(0x40431a);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B40431e:{NFSU2_TR(0x40431e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B404320:{NFSU2_TR(0x404320);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B404322:{NFSU2_TR(0x404322);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404326:{NFSU2_TR(0x404326);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B404328:{NFSU2_TR(0x404328);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B40432c:{NFSU2_TR(0x40432c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404330:{NFSU2_TR(0x404330);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B404334:L404334:{c.instructions+=4;NFSU2_TR(0x404334);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B404337:{NFSU2_TR(0x404337);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B40433a:{NFSU2_TR(0x40433a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40433c:{NFSU2_TR(0x40433c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x404280u);}goto L404280;}}
}
B404342:L404342:{c.instructions+=2;NFSU2_TR(0x404342);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B404344:{NFSU2_TR(0x404344);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L404378;}}
}
B404346:L404346:{c.instructions+=5;NFSU2_TR(0x404346);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40434a:{NFSU2_TR(0x40434a);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40434e:{NFSU2_TR(0x40434e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B404350:{NFSU2_TR(0x404350);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B404353:{NFSU2_TR(0x404353);
if(r1(R+514)){{goto L404373;}}
}
B404355:L404355:{c.instructions+=9;NFSU2_TR(0x404355);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B404359:{NFSU2_TR(0x404359);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B40435d:{NFSU2_TR(0x40435d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B40435f:{NFSU2_TR(0x40435f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B404361:{NFSU2_TR(0x404361);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404365:{NFSU2_TR(0x404365);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B404367:{NFSU2_TR(0x404367);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40436b:{NFSU2_TR(0x40436b);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B40436f:{NFSU2_TR(0x40436f);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B404373:L404373:{c.instructions+=3;NFSU2_TR(0x404373);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B404374:{NFSU2_TR(0x404374);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B404376:{NFSU2_TR(0x404376);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x404346u);}goto L404346;}}
}
B404378:L404378:{c.instructions+=3;NFSU2_TR(0x404378);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B404379:{NFSU2_TR(0x404379);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40437b:{NFSU2_TR(0x40437b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x404270u);}goto L404270;}}
}
B404381:L404381:{c.instructions+=7;NFSU2_TR(0x404381);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404385:{NFSU2_TR(0x404385);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B404386:{NFSU2_TR(0x404386);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40438a:{NFSU2_TR(0x40438a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40438b:{NFSU2_TR(0x40438b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40438d:{NFSU2_TR(0x40438d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B404390:{NFSU2_TR(0x404390);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4043dc;}}
}
B404392:L404392:{c.instructions+=5;NFSU2_TR(0x404392);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404396:{NFSU2_TR(0x404396);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40439a:{NFSU2_TR(0x40439a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40439c:{NFSU2_TR(0x40439c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40439f:{NFSU2_TR(0x40439f);
if(r1(R+514)){{goto L4043dc;}}
}
B4043a1:L4043a1:{c.instructions+=5;NFSU2_TR(0x4043a1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4043a5:{NFSU2_TR(0x4043a5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4043a9:{NFSU2_TR(0x4043a9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4043ab:{NFSU2_TR(0x4043ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4043ae:{NFSU2_TR(0x4043ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4043dc;}}
}
B4043b0:L4043b0:{c.instructions+=5;NFSU2_TR(0x4043b0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4043b4:{NFSU2_TR(0x4043b4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4043b8:{NFSU2_TR(0x4043b8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4043ba:{NFSU2_TR(0x4043ba);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4043bd:{NFSU2_TR(0x4043bd);
if(r1(R+514)){{goto L4043dc;}}
}
B4043bf:L4043bf:{c.instructions+=9;NFSU2_TR(0x4043bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4043c3:{NFSU2_TR(0x4043c3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4043c7:{NFSU2_TR(0x4043c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4043cb:{NFSU2_TR(0x4043cb);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4043cd:{NFSU2_TR(0x4043cd);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4043d1:{NFSU2_TR(0x4043d1);
w4(R+0,u32(0x1ull));
}
B4043d6:{NFSU2_TR(0x4043d6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4043d8:{NFSU2_TR(0x4043d8);
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
B4043db:{NFSU2_TR(0x4043db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4043dc:L4043dc:{c.instructions+=3;NFSU2_TR(0x4043dc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4043de:{NFSU2_TR(0x4043de);
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
B4043e1:{NFSU2_TR(0x4043e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4043f0:L4043f0:{c.instructions+=11;NFSU2_TR(0x4043f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4043f1:{NFSU2_TR(0x4043f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4043f5:{NFSU2_TR(0x4043f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4043f9:{NFSU2_TR(0x4043f9);
w4(R+4,u32(0x7fffffffull));
}
B4043fe:{NFSU2_TR(0x4043fe);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B404400:{NFSU2_TR(0x404400);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B404404:{NFSU2_TR(0x404404);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404408:{NFSU2_TR(0x404408);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40440e:{NFSU2_TR(0x40440e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B404410:{NFSU2_TR(0x404410);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B404413:{NFSU2_TR(0x404413);
if(r1(R+514)){{goto L404460;}}
}
B404415:L404415:{c.instructions+=10;NFSU2_TR(0x404415);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B404419:{NFSU2_TR(0x404419);
__builtin_memmove((R+0),(R+8),4);
}
B40441b:{NFSU2_TR(0x40441b);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B40441d:{NFSU2_TR(0x40441d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404421:{NFSU2_TR(0x404421);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404425:{NFSU2_TR(0x404425);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404429:{NFSU2_TR(0x404429);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40442d:{NFSU2_TR(0x40442d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40442f:{NFSU2_TR(0x40442f);
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
B404432:{NFSU2_TR(0x404432);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40444a;}}
}
B404434:L404434:{c.instructions+=6;NFSU2_TR(0x404434);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404438:{NFSU2_TR(0x404438);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40443c:{NFSU2_TR(0x40443c);
u8 U[4];
w4(U+0,u32(0x461c3c00ull));
s4(u32(r4(R+0)),r4(U+0));
}
B404442:{NFSU2_TR(0x404442);
u8 U[4];
w4(U+0,u32(0x461c3c00ull));
s4(u32(r4(R+4)),r4(U+0));
}
B404448:{NFSU2_TR(0x404448);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B404449:{NFSU2_TR(0x404449);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40444a:L40444a:{c.instructions+=6;NFSU2_TR(0x40444a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40444e:{NFSU2_TR(0x40444e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404452:{NFSU2_TR(0x404452);
u8 U[4];
w4(U+0,u32(0xc61c3c00ull));
s4(u32(r4(R+8)),r4(U+0));
}
B404458:{NFSU2_TR(0x404458);
u8 U[4];
w4(U+0,u32(0x461c3c00ull));
s4(u32(r4(R+0)),r4(U+0));
}
B40445e:{NFSU2_TR(0x40445e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40445f:{NFSU2_TR(0x40445f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B404460:L404460:{c.instructions+=20;NFSU2_TR(0x404460);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404466:{NFSU2_TR(0x404466);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40446a:{NFSU2_TR(0x40446a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B40446e:{NFSU2_TR(0x40446e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40446f:{NFSU2_TR(0x40446f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B404473:{NFSU2_TR(0x404473);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404477:{NFSU2_TR(0x404477);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40447b:{NFSU2_TR(0x40447b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40447d:{NFSU2_TR(0x40447d);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40447f:{NFSU2_TR(0x40447f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404483:{NFSU2_TR(0x404483);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B404487:{NFSU2_TR(0x404487);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B404489:{NFSU2_TR(0x404489);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B40448b:{NFSU2_TR(0x40448b);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40448d:{NFSU2_TR(0x40448d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40448f:{NFSU2_TR(0x40448f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404493:{NFSU2_TR(0x404493);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B404499:{NFSU2_TR(0x404499);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40449b:{NFSU2_TR(0x40449b);
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
B40449e:{NFSU2_TR(0x40449e);
if(r1(R+514)){{goto L4044b6;}}
}
B4044a0:L4044a0:{c.instructions+=9;NFSU2_TR(0x4044a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4044a2:{NFSU2_TR(0x4044a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4044a4:{NFSU2_TR(0x4044a4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B4044a6:{NFSU2_TR(0x4044a6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B4044a8:{NFSU2_TR(0x4044a8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4044ac:{NFSU2_TR(0x4044ac);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4044ae:{NFSU2_TR(0x4044ae);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4044b2:{NFSU2_TR(0x4044b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4044b4:{NFSU2_TR(0x4044b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4044b6:L4044b6:{c.instructions+=3;NFSU2_TR(0x4044b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4044b7:{NFSU2_TR(0x4044b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4044b8:{NFSU2_TR(0x4044b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4044c0:L4044c0:{c.instructions+=117;NFSU2_TR(0x4044c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B4044c3:{NFSU2_TR(0x4044c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4044c4:{NFSU2_TR(0x4044c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4044c5:{NFSU2_TR(0x4044c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4044c6:{NFSU2_TR(0x4044c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4044ca:{NFSU2_TR(0x4044ca);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4044cd:{NFSU2_TR(0x4044cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4044ce:{NFSU2_TR(0x4044ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4044d2:{NFSU2_TR(0x4044d2);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4044d5:{NFSU2_TR(0x4044d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4044d8:{NFSU2_TR(0x4044d8);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4044db:{NFSU2_TR(0x4044db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4044de:{NFSU2_TR(0x4044de);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4044e1:{NFSU2_TR(0x4044e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4044e5:{NFSU2_TR(0x4044e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4044e9:{NFSU2_TR(0x4044e9);
w4(R+0,u32(0x7fffffffull));
}
B4044ee:{NFSU2_TR(0x4044ee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4044f0:{NFSU2_TR(0x4044f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4044f4:{NFSU2_TR(0x4044f4);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4044f7:{NFSU2_TR(0x4044f7);
w4(R+20,u32(u32(r4(R+20))&u32(r4(R+0))));
}
B4044f9:{NFSU2_TR(0x4044f9);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4044fc:{NFSU2_TR(0x4044fc);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B4044fe:{NFSU2_TR(0x4044fe);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404501:{NFSU2_TR(0x404501);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404505:{NFSU2_TR(0x404505);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404508:{NFSU2_TR(0x404508);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40450c:{NFSU2_TR(0x40450c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40450e:{NFSU2_TR(0x40450e);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404511:{NFSU2_TR(0x404511);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404514:{NFSU2_TR(0x404514);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404517:{NFSU2_TR(0x404517);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40451a:{NFSU2_TR(0x40451a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40451c:{NFSU2_TR(0x40451c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404520:{NFSU2_TR(0x404520);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404523:{NFSU2_TR(0x404523);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404526:{NFSU2_TR(0x404526);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404529:{NFSU2_TR(0x404529);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40452c:{NFSU2_TR(0x40452c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40452e:{NFSU2_TR(0x40452e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404532:{NFSU2_TR(0x404532);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404535:{NFSU2_TR(0x404535);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404539:{NFSU2_TR(0x404539);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B40453d:{NFSU2_TR(0x40453d);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+0))));
}
B40453f:{NFSU2_TR(0x40453f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B404541:{NFSU2_TR(0x404541);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404545:{NFSU2_TR(0x404545);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404548:{NFSU2_TR(0x404548);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40454c:{NFSU2_TR(0x40454c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B404550:{NFSU2_TR(0x404550);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B404552:{NFSU2_TR(0x404552);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B404554:{NFSU2_TR(0x404554);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404557:{NFSU2_TR(0x404557);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40455b:{NFSU2_TR(0x40455b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40455e:{NFSU2_TR(0x40455e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404562:{NFSU2_TR(0x404562);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404566:{NFSU2_TR(0x404566);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B404568:{NFSU2_TR(0x404568);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B40456c:{NFSU2_TR(0x40456c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B40456e:{NFSU2_TR(0x40456e);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404571:{NFSU2_TR(0x404571);
w4(R+20,u32(u32(r4(R+20))&u32(r4(R+0))));
}
B404573:{NFSU2_TR(0x404573);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404577:{NFSU2_TR(0x404577);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40457b:{NFSU2_TR(0x40457b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40457f:{NFSU2_TR(0x40457f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B404583:{NFSU2_TR(0x404583);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B404585:{NFSU2_TR(0x404585);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404588:{NFSU2_TR(0x404588);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+0))));
}
B40458a:{NFSU2_TR(0x40458a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40458e:{NFSU2_TR(0x40458e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404592:{NFSU2_TR(0x404592);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B404596:{NFSU2_TR(0x404596);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B404598:{NFSU2_TR(0x404598);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40459b:{NFSU2_TR(0x40459b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40459f:{NFSU2_TR(0x40459f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4045a2:{NFSU2_TR(0x4045a2);
__builtin_memmove((R+12),(R+4),4);
}
B4045a4:{NFSU2_TR(0x4045a4);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4045a8:{NFSU2_TR(0x4045a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4045ac:{NFSU2_TR(0x4045ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4045b0:{NFSU2_TR(0x4045b0);
w4(R+20,u32(u32(r4(R+20))&u32(r4(R+0))));
}
B4045b2:{NFSU2_TR(0x4045b2);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+0))));
}
B4045b4:{NFSU2_TR(0x4045b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4045b8:{NFSU2_TR(0x4045b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4045bc:{NFSU2_TR(0x4045bc);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4045bf:{NFSU2_TR(0x4045bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4045c3:{NFSU2_TR(0x4045c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4045c7:{NFSU2_TR(0x4045c7);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4045cb:{NFSU2_TR(0x4045cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4045cf:{NFSU2_TR(0x4045cf);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4045d3:{NFSU2_TR(0x4045d3);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B4045d5:{NFSU2_TR(0x4045d5);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4045d8:{NFSU2_TR(0x4045d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4045dc:{NFSU2_TR(0x4045dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4045e0:{NFSU2_TR(0x4045e0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4045e1:{NFSU2_TR(0x4045e1);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4045e5:{NFSU2_TR(0x4045e5);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4045e9:{NFSU2_TR(0x4045e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4045ed:{NFSU2_TR(0x4045ed);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4045f1:{NFSU2_TR(0x4045f1);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B4045f3:{NFSU2_TR(0x4045f3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4045f7:{NFSU2_TR(0x4045f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4045f8:{NFSU2_TR(0x4045f8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4045fc:{NFSU2_TR(0x4045fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4045ff:{NFSU2_TR(0x4045ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404603:{NFSU2_TR(0x404603);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404607:{NFSU2_TR(0x404607);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40460a:{NFSU2_TR(0x40460a);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40460d:{NFSU2_TR(0x40460d);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40460f:{NFSU2_TR(0x40460f);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404612:{NFSU2_TR(0x404612);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B404614:{NFSU2_TR(0x404614);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404618:{NFSU2_TR(0x404618);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40461b:{NFSU2_TR(0x40461b);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40461e:{NFSU2_TR(0x40461e);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404621:{NFSU2_TR(0x404621);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404624:{NFSU2_TR(0x404624);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B404626:{NFSU2_TR(0x404626);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404629:{NFSU2_TR(0x404629);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40462eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4043f0u);}goto L4043f0;}
}
B40462e:L40462e:{c.instructions+=23;NFSU2_TR(0x40462e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404632:{NFSU2_TR(0x404632);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B404635:{NFSU2_TR(0x404635);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B404639:{NFSU2_TR(0x404639);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40463d:{NFSU2_TR(0x40463d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40463e:{NFSU2_TR(0x40463e);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B404642:{NFSU2_TR(0x404642);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B404646:{NFSU2_TR(0x404646);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404647:{NFSU2_TR(0x404647);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B40464a:{NFSU2_TR(0x40464a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40464e:{NFSU2_TR(0x40464e);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404651:{NFSU2_TR(0x404651);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404654:{NFSU2_TR(0x404654);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404657:{NFSU2_TR(0x404657);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404659:{NFSU2_TR(0x404659);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40465b:{NFSU2_TR(0x40465b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40465f:{NFSU2_TR(0x40465f);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404662:{NFSU2_TR(0x404662);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404665:{NFSU2_TR(0x404665);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404668:{NFSU2_TR(0x404668);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40466b:{NFSU2_TR(0x40466b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40466d:{NFSU2_TR(0x40466d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404670:{NFSU2_TR(0x404670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404675ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4043f0u);}goto L4043f0;}
}
B404675:L404675:{c.instructions+=23;NFSU2_TR(0x404675);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404679:{NFSU2_TR(0x404679);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B40467c:{NFSU2_TR(0x40467c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B404680:{NFSU2_TR(0x404680);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B404684:{NFSU2_TR(0x404684);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404685:{NFSU2_TR(0x404685);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B404689:{NFSU2_TR(0x404689);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40468d:{NFSU2_TR(0x40468d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40468e:{NFSU2_TR(0x40468e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B404691:{NFSU2_TR(0x404691);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404695:{NFSU2_TR(0x404695);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404698:{NFSU2_TR(0x404698);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40469b:{NFSU2_TR(0x40469b);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40469e:{NFSU2_TR(0x40469e);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4046a0:{NFSU2_TR(0x4046a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4046a2:{NFSU2_TR(0x4046a2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4046a6:{NFSU2_TR(0x4046a6);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4046a9:{NFSU2_TR(0x4046a9);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4046ac:{NFSU2_TR(0x4046ac);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4046af:{NFSU2_TR(0x4046af);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4046b2:{NFSU2_TR(0x4046b2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4046b4:{NFSU2_TR(0x4046b4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4046b7:{NFSU2_TR(0x4046b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4046bcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4043f0u);}goto L4043f0;}
}
B4046bc:L4046bc:{c.instructions+=23;NFSU2_TR(0x4046bc);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4046c0:{NFSU2_TR(0x4046c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4046c3:{NFSU2_TR(0x4046c3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4046c7:{NFSU2_TR(0x4046c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4046cb:{NFSU2_TR(0x4046cb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4046cc:{NFSU2_TR(0x4046cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4046d0:{NFSU2_TR(0x4046d0);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4046d4:{NFSU2_TR(0x4046d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4046d5:{NFSU2_TR(0x4046d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4046d8:{NFSU2_TR(0x4046d8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4046dc:{NFSU2_TR(0x4046dc);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4046df:{NFSU2_TR(0x4046df);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4046e2:{NFSU2_TR(0x4046e2);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4046e4:{NFSU2_TR(0x4046e4);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4046e7:{NFSU2_TR(0x4046e7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4046e9:{NFSU2_TR(0x4046e9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4046ed:{NFSU2_TR(0x4046ed);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4046f0:{NFSU2_TR(0x4046f0);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4046f3:{NFSU2_TR(0x4046f3);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4046f6:{NFSU2_TR(0x4046f6);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4046f9:{NFSU2_TR(0x4046f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4046fb:{NFSU2_TR(0x4046fb);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4046fe:{NFSU2_TR(0x4046fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404703ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4043f0u);}goto L4043f0;}
}
B404703:L404703:{c.instructions+=13;NFSU2_TR(0x404703);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404707:{NFSU2_TR(0x404707);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40470b:{NFSU2_TR(0x40470b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40470c:{NFSU2_TR(0x40470c);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B404710:{NFSU2_TR(0x404710);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B404714:{NFSU2_TR(0x404714);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404715:{NFSU2_TR(0x404715);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B404719:{NFSU2_TR(0x404719);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40471a:{NFSU2_TR(0x40471a);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40471e:{NFSU2_TR(0x40471e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40471f:{NFSU2_TR(0x40471f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404720:{NFSU2_TR(0x404720);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404721:{NFSU2_TR(0x404721);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404726ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x404240u);}goto L404240;}
}
B404726:L404726:{c.instructions+=7;NFSU2_TR(0x404726);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B404729:{NFSU2_TR(0x404729);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40472b:{NFSU2_TR(0x40472b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40472c:{NFSU2_TR(0x40472c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40472d:{NFSU2_TR(0x40472d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40472e:{NFSU2_TR(0x40472e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40472f:{NFSU2_TR(0x40472f);
if(r1(R+518)){{goto L404785;}}
}
B404731:L404731:{c.instructions+=13;NFSU2_TR(0x404731);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404735:{NFSU2_TR(0x404735);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B404739:{NFSU2_TR(0x404739);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40473a:{NFSU2_TR(0x40473a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40473e:{NFSU2_TR(0x40473e);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B404742:{NFSU2_TR(0x404742);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404743:{NFSU2_TR(0x404743);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B404747:{NFSU2_TR(0x404747);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404748:{NFSU2_TR(0x404748);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40474c:{NFSU2_TR(0x40474c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40474d:{NFSU2_TR(0x40474d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40474e:{NFSU2_TR(0x40474e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40474f:{NFSU2_TR(0x40474f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404754ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x404240u);}goto L404240;}
}
B404754:L404754:{c.instructions+=3;NFSU2_TR(0x404754);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B404757:{NFSU2_TR(0x404757);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B404759:{NFSU2_TR(0x404759);
if(r1(R+518)){{goto L404785;}}
}
B40475b:L40475b:{c.instructions+=13;NFSU2_TR(0x40475b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40475f:{NFSU2_TR(0x40475f);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B404763:{NFSU2_TR(0x404763);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404764:{NFSU2_TR(0x404764);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B404768:{NFSU2_TR(0x404768);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B40476c:{NFSU2_TR(0x40476c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40476d:{NFSU2_TR(0x40476d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B404771:{NFSU2_TR(0x404771);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404772:{NFSU2_TR(0x404772);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404776:{NFSU2_TR(0x404776);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404777:{NFSU2_TR(0x404777);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404778:{NFSU2_TR(0x404778);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404779:{NFSU2_TR(0x404779);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40477eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x404240u);}goto L404240;}
}
B40477e:L40477e:{c.instructions+=3;NFSU2_TR(0x40477e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B404781:{NFSU2_TR(0x404781);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B404783:{NFSU2_TR(0x404783);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40478f;}}
}
B404785:L404785:{c.instructions+=3;NFSU2_TR(0x404785);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40478b:{NFSU2_TR(0x40478b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40478e:{NFSU2_TR(0x40478e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40478f:L40478f:{c.instructions+=5;NFSU2_TR(0x40478f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404793:{NFSU2_TR(0x404793);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B404799:{NFSU2_TR(0x404799);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40479b:{NFSU2_TR(0x40479b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40479e:{NFSU2_TR(0x40479e);
if(r1(R+518)){{goto L4047ce;}}
}
B4047a0:L4047a0:{c.instructions+=4;NFSU2_TR(0x4047a0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4047a6:{NFSU2_TR(0x4047a6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4047a8:{NFSU2_TR(0x4047a8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4047ab:{NFSU2_TR(0x4047ab);
if(r1(R+514)){{goto L4047c8;}}
}
B4047ad:L4047ad:{c.instructions+=5;NFSU2_TR(0x4047ad);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4047b1:{NFSU2_TR(0x4047b1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4047b7:{NFSU2_TR(0x4047b7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4047b9:{NFSU2_TR(0x4047b9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4047bc:{NFSU2_TR(0x4047bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4047c8;}}
}
B4047be:L4047be:{c.instructions+=3;NFSU2_TR(0x4047be);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4047c4:{NFSU2_TR(0x4047c4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4047c7:{NFSU2_TR(0x4047c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4047c8:L4047c8:{c.instructions+=1;NFSU2_TR(0x4047c8);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4047ce:L4047ce:{c.instructions+=2;NFSU2_TR(0x4047ce);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4047d1:{NFSU2_TR(0x4047d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4047e0:L4047e0:{c.instructions+=2;NFSU2_TR(0x4047e0);
u8 U[4];
w4(U+0,u32(0x7843f0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4047e6:{NFSU2_TR(0x4047e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4047f0:L4047f0:{c.instructions+=3;NFSU2_TR(0x4047f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4047f4:{NFSU2_TR(0x4047f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4047f7:{NFSU2_TR(0x4047f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B404800:L404800:{c.instructions+=2;NFSU2_TR(0x404800);
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
B404802:{NFSU2_TR(0x404802);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B404810:L404810:{c.instructions+=2;NFSU2_TR(0x404810);
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
B404812:{NFSU2_TR(0x404812);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B404820:L404820:{c.instructions+=8;NFSU2_TR(0x404820);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404821:{NFSU2_TR(0x404821);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B404825:{NFSU2_TR(0x404825);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404826:{NFSU2_TR(0x404826);
u8 U[4];
w4(U+0,u32(0x78445cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40482b:{NFSU2_TR(0x40482b);
__builtin_memmove((R+28),(R+4),4);
}
B40482d:{NFSU2_TR(0x40482d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40482f:{NFSU2_TR(0x40482f);
__builtin_memmove((R+4),(R+24),4);
}
B404831:{NFSU2_TR(0x404831);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404836ull));
TAIL_STATIC(0x578ce0u,578);
}
B404836:L404836:{c.instructions+=4;NFSU2_TR(0x404836);
u8 U[4];
w4(U+0,u32(0x784458ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40483b:{NFSU2_TR(0x40483b);
u8 U[4];
w4(U+0,u32(0x78445cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404840:{NFSU2_TR(0x404840);
__builtin_memmove((R+4),(R+24),4);
}
B404842:{NFSU2_TR(0x404842);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404847ull));
TAIL_STATIC(0x402350u,402);
}
B404847:L404847:{c.instructions+=4;NFSU2_TR(0x404847);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40484a:{NFSU2_TR(0x40484a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40484c:{NFSU2_TR(0x40484c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40484d:{NFSU2_TR(0x40484d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404850ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B404850:L404850:{c.instructions+=5;NFSU2_TR(0x404850);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B404853:{NFSU2_TR(0x404853);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404854:{NFSU2_TR(0x404854);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404855:{NFSU2_TR(0x404855);
w4(R+4,u32(0x88a320ull));
}
B40485a:{NFSU2_TR(0x40485a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40485full));
TAIL_STATIC(0x5d9530u,5d9);
}
B40485f:L40485f:{c.instructions+=7;NFSU2_TR(0x40485f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404861:{NFSU2_TR(0x404861);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404863:{NFSU2_TR(0x404863);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404865:{NFSU2_TR(0x404865);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+8),(U+0),4);
}
B404868:{NFSU2_TR(0x404868);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404869:{NFSU2_TR(0x404869);
__builtin_memmove((R+4),(R+24),4);
}
B40486b:{NFSU2_TR(0x40486b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404870ull));
TAIL_STATIC(0x571640u,571);
}
B404870:L404870:{c.instructions+=7;NFSU2_TR(0x404870);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404872:{NFSU2_TR(0x404872);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404874:{NFSU2_TR(0x404874);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404876:{NFSU2_TR(0x404876);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B404879:{NFSU2_TR(0x404879);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40487a:{NFSU2_TR(0x40487a);
__builtin_memmove((R+4),(R+24),4);
}
B40487c:{NFSU2_TR(0x40487c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404881ull));
TAIL_STATIC(0x571640u,571);
}
B404881:L404881:{c.instructions+=2;NFSU2_TR(0x404881);
__builtin_memmove((R+4),(R+24),4);
}
B404883:{NFSU2_TR(0x404883);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404888ull));
TAIL_STATIC(0x578d90u,578);
}
B404888:L404888:{c.instructions+=3;NFSU2_TR(0x404888);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B404889:{NFSU2_TR(0x404889);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40488a:{NFSU2_TR(0x40488a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B404890:L404890:{c.instructions+=4;NFSU2_TR(0x404890);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B404893:{NFSU2_TR(0x404893);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404896:{NFSU2_TR(0x404896);
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
B404899:{NFSU2_TR(0x404899);
if(r1(R+518)){{goto L4048c0;}}
}
B40489b:L40489b:{c.instructions+=2;NFSU2_TR(0x40489b);
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
B40489e:{NFSU2_TR(0x40489e);
if(r1(R+518)){{goto L4048c0;}}
}
B4048a0:L4048a0:{c.instructions+=3;NFSU2_TR(0x4048a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4048a3:{NFSU2_TR(0x4048a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4048a5:{NFSU2_TR(0x4048a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4048b9;}}
}
B4048a7:L4048a7:{c.instructions+=3;NFSU2_TR(0x4048a7);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4048ab:{NFSU2_TR(0x4048ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4048ad:{NFSU2_TR(0x4048ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4048b9;}}
}
B4048af:L4048af:{c.instructions+=2;NFSU2_TR(0x4048af);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4048b1:{NFSU2_TR(0x4048b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4048b6ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B4048b6:L4048b6:{c.instructions+=1;NFSU2_TR(0x4048b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4048b9:L4048b9:{c.instructions+=2;NFSU2_TR(0x4048b9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4048bb:{NFSU2_TR(0x4048bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4048c0ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B4048c0:L4048c0:{c.instructions+=1;NFSU2_TR(0x4048c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4048d0:L4048d0:{c.instructions+=3;NFSU2_TR(0x4048d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4048d3:{NFSU2_TR(0x4048d3);
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
B4048d5:{NFSU2_TR(0x4048d5);
if(r1(R+518)){{goto L4048e8;}}
}
B4048d7:L4048d7:{c.instructions+=3;NFSU2_TR(0x4048d7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B4048da:{NFSU2_TR(0x4048da);
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
B4048dc:{NFSU2_TR(0x4048dc);
if(r1(R+518)){{goto L4048e8;}}
}
B4048de:L4048de:{c.instructions+=2;NFSU2_TR(0x4048de);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4048e2:{NFSU2_TR(0x4048e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x428ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4048e8:L4048e8:{c.instructions+=1;NFSU2_TR(0x4048e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4048f0:L4048f0:{c.instructions+=3;NFSU2_TR(0x4048f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4048f3:{NFSU2_TR(0x4048f3);
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
B4048f5:{NFSU2_TR(0x4048f5);
if(r1(R+518)){{goto L404908;}}
}
B4048f7:L4048f7:{c.instructions+=3;NFSU2_TR(0x4048f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B4048fa:{NFSU2_TR(0x4048fa);
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
B4048fc:{NFSU2_TR(0x4048fc);
if(r1(R+518)){{goto L404908;}}
}
B4048fe:L4048fe:{c.instructions+=1;NFSU2_TR(0x4048fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x428ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B404908:L404908:{c.instructions+=1;NFSU2_TR(0x404908);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B404910:L404910:{c.instructions+=8;NFSU2_TR(0x404910);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B404913:{NFSU2_TR(0x404913);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404916:{NFSU2_TR(0x404916);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40491c:{NFSU2_TR(0x40491c);
__builtin_memmove((R+0),gp(0x7e8e60),4);
}
B404921:{NFSU2_TR(0x404921);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404925:{NFSU2_TR(0x404925);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B404927:{NFSU2_TR(0x404927);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B40492b:{NFSU2_TR(0x40492b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40492eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40492e:L40492e:{c.instructions+=5;NFSU2_TR(0x40492e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404932:{NFSU2_TR(0x404932);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B404936:{NFSU2_TR(0x404936);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B404938:{NFSU2_TR(0x404938);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40493b:{NFSU2_TR(0x40493b);
if(r1(R+518)){{goto L404943;}}
}
B40493d:L40493d:{c.instructions+=2;NFSU2_TR(0x40493d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40493f:{NFSU2_TR(0x40493f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404943:L404943:{c.instructions+=2;NFSU2_TR(0x404943);
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
B404946:{NFSU2_TR(0x404946);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B404950:L404950:{c.instructions+=2;NFSU2_TR(0x404950);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B404953:{NFSU2_TR(0x404953);
w4(R+4,u32(0x10ull));
}
B404958:L404958:{c.instructions+=4;NFSU2_TR(0x404958);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffffcull))));
s4(u32(r4(R+0)),r4(U+0));
}
B40495b:{NFSU2_TR(0x40495b);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B40495e:{NFSU2_TR(0x40495e);
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
B40495f:{NFSU2_TR(0x40495f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x404958u);}goto L404958;}}
}
B404961:L404961:{c.instructions+=1;NFSU2_TR(0x404961);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B404970:L404970:{c.instructions+=2;NFSU2_TR(0x404970);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B404973:{NFSU2_TR(0x404973);
w4(R+8,u32(0x2ull));
}
B404978:L404978:{c.instructions+=3;NFSU2_TR(0x404978);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40497b:{NFSU2_TR(0x40497b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40497e:{NFSU2_TR(0x40497e);
if(r1(R+518)){{goto L404986;}}
}
B404980:L404980:{c.instructions+=2;NFSU2_TR(0x404980);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff8ull))));
}
B404983:{NFSU2_TR(0x404983);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404986:L404986:{c.instructions+=3;NFSU2_TR(0x404986);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B404988:{NFSU2_TR(0x404988);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40498b:{NFSU2_TR(0x40498b);
if(r1(R+518)){{goto L404992;}}
}
B40498d:L40498d:{c.instructions+=2;NFSU2_TR(0x40498d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff8ull))));
}
B404990:{NFSU2_TR(0x404990);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B404992:L404992:{c.instructions+=3;NFSU2_TR(0x404992);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B404995:{NFSU2_TR(0x404995);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B404998:{NFSU2_TR(0x404998);
if(r1(R+518)){{goto L4049a0;}}
}
B40499a:L40499a:{c.instructions+=2;NFSU2_TR(0x40499a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff8ull))));
}
B40499d:{NFSU2_TR(0x40499d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4049a0:L4049a0:{c.instructions+=3;NFSU2_TR(0x4049a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4049a3:{NFSU2_TR(0x4049a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4049a6:{NFSU2_TR(0x4049a6);
if(r1(R+518)){{goto L4049ae;}}
}
B4049a8:L4049a8:{c.instructions+=2;NFSU2_TR(0x4049a8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff8ull))));
}
B4049ab:{NFSU2_TR(0x4049ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4049ae:L4049ae:{c.instructions+=3;NFSU2_TR(0x4049ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4049b1:{NFSU2_TR(0x4049b1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4049b4:{NFSU2_TR(0x4049b4);
if(r1(R+518)){{goto L4049bc;}}
}
B4049b6:L4049b6:{c.instructions+=2;NFSU2_TR(0x4049b6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff8ull))));
}
B4049b9:{NFSU2_TR(0x4049b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4049bc:L4049bc:{c.instructions+=3;NFSU2_TR(0x4049bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4049bf:{NFSU2_TR(0x4049bf);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4049c2:{NFSU2_TR(0x4049c2);
if(r1(R+518)){{goto L4049ca;}}
}
B4049c4:L4049c4:{c.instructions+=2;NFSU2_TR(0x4049c4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff8ull))));
}
B4049c7:{NFSU2_TR(0x4049c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4049ca:L4049ca:{c.instructions+=3;NFSU2_TR(0x4049ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4049cd:{NFSU2_TR(0x4049cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4049d0:{NFSU2_TR(0x4049d0);
if(r1(R+518)){{goto L4049d8;}}
}
B4049d2:L4049d2:{c.instructions+=2;NFSU2_TR(0x4049d2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff8ull))));
}
B4049d5:{NFSU2_TR(0x4049d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4049d8:L4049d8:{c.instructions+=3;NFSU2_TR(0x4049d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4049db:{NFSU2_TR(0x4049db);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4049de:{NFSU2_TR(0x4049de);
if(r1(R+518)){{goto L4049e6;}}
}
B4049e0:L4049e0:{c.instructions+=2;NFSU2_TR(0x4049e0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff8ull))));
}
B4049e3:{NFSU2_TR(0x4049e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4049e6:L4049e6:{c.instructions+=3;NFSU2_TR(0x4049e6);
w1(R+512,carry<u32>(r4(R+0),u32(0x20ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B4049e9:{NFSU2_TR(0x4049e9);
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
B4049ea:{NFSU2_TR(0x4049ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x404978u);}goto L404978;}}
}
B4049ec:L4049ec:{c.instructions+=1;NFSU2_TR(0x4049ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4049f0:L4049f0:{c.instructions+=9;NFSU2_TR(0x4049f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4049f1:{NFSU2_TR(0x4049f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4049f2:{NFSU2_TR(0x4049f2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4049f6:{NFSU2_TR(0x4049f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4049f7:{NFSU2_TR(0x4049f7);
u8 U[4];
w4(U+0,u32(0x78446cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4049fc:{NFSU2_TR(0x4049fc);
__builtin_memmove((R+28),(R+4),4);
}
B4049fe:{NFSU2_TR(0x4049fe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404a00:{NFSU2_TR(0x404a00);
__builtin_memmove((R+4),(R+24),4);
}
B404a02:{NFSU2_TR(0x404a02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404a07ull));
TAIL_STATIC(0x578ce0u,578);
}
B404a07:L404a07:{c.instructions+=3;NFSU2_TR(0x404a07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404a08:{NFSU2_TR(0x404a08);
__builtin_memmove((R+4),(R+24),4);
}
B404a0a:{NFSU2_TR(0x404a0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404a0full));
TAIL_STATIC(0x5716c0u,571);
}
B404a0f:L404a0f:{c.instructions+=4;NFSU2_TR(0x404a0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1b4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B404a15:{NFSU2_TR(0x404a15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404a16:{NFSU2_TR(0x404a16);
__builtin_memmove((R+4),(R+24),4);
}
B404a18:{NFSU2_TR(0x404a18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404a1dull));
TAIL_STATIC(0x5716c0u,571);
}
B404a1d:L404a1d:{c.instructions+=4;NFSU2_TR(0x404a1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1b8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B404a23:{NFSU2_TR(0x404a23);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404a24:{NFSU2_TR(0x404a24);
__builtin_memmove((R+4),(R+24),4);
}
B404a26:{NFSU2_TR(0x404a26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404a2bull));
TAIL_STATIC(0x571770u,571);
}
B404a2b:L404a2b:{c.instructions+=4;NFSU2_TR(0x404a2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1bcull))));
__builtin_memmove((R+8),(U+0),4);
}
B404a31:{NFSU2_TR(0x404a31);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404a32:{NFSU2_TR(0x404a32);
__builtin_memmove((R+4),(R+24),4);
}
B404a34:{NFSU2_TR(0x404a34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404a39ull));
TAIL_STATIC(0x571770u,571);
}
B404a39:L404a39:{c.instructions+=4;NFSU2_TR(0x404a39);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B404a3f:{NFSU2_TR(0x404a3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404a40:{NFSU2_TR(0x404a40);
__builtin_memmove((R+4),(R+24),4);
}
B404a42:{NFSU2_TR(0x404a42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404a47ull));
TAIL_STATIC(0x571770u,571);
}
B404a47:L404a47:{c.instructions+=4;NFSU2_TR(0x404a47);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B404a4d:{NFSU2_TR(0x404a4d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404a4e:{NFSU2_TR(0x404a4e);
__builtin_memmove((R+4),(R+24),4);
}
B404a50:{NFSU2_TR(0x404a50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404a55ull));
TAIL_STATIC(0x571770u,571);
}
B404a55:L404a55:{c.instructions+=7;NFSU2_TR(0x404a55);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404a57:{NFSU2_TR(0x404a57);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404a59:{NFSU2_TR(0x404a59);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404a5b:{NFSU2_TR(0x404a5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B404a61:{NFSU2_TR(0x404a61);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404a62:{NFSU2_TR(0x404a62);
__builtin_memmove((R+4),(R+24),4);
}
B404a64:{NFSU2_TR(0x404a64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404a69ull));
TAIL_STATIC(0x571640u,571);
}
B404a69:L404a69:{c.instructions+=7;NFSU2_TR(0x404a69);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404a6b:{NFSU2_TR(0x404a6b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404a6d:{NFSU2_TR(0x404a6d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404a6f:{NFSU2_TR(0x404a6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c9ull))));
__builtin_memmove((R+0),(U+0),4);
}
B404a75:{NFSU2_TR(0x404a75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404a76:{NFSU2_TR(0x404a76);
__builtin_memmove((R+4),(R+24),4);
}
B404a78:{NFSU2_TR(0x404a78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404a7dull));
TAIL_STATIC(0x571640u,571);
}
B404a7d:L404a7d:{c.instructions+=4;NFSU2_TR(0x404a7d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B404a7f:{NFSU2_TR(0x404a7f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B404a81:{NFSU2_TR(0x404a81);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B404a83:{NFSU2_TR(0x404a83);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L404ade;}}
}
B404a85:L404a85:{c.instructions+=4;NFSU2_TR(0x404a85);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B404a88:{NFSU2_TR(0x404a88);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404a89:{NFSU2_TR(0x404a89);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
__builtin_memmove((R+20),(U+0),4);
}
B404a8f:{NFSU2_TR(0x404a8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404a93:L404a93:{c.instructions+=7;NFSU2_TR(0x404a93);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B404a97:{NFSU2_TR(0x404a97);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404a99:{NFSU2_TR(0x404a99);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404a9b:{NFSU2_TR(0x404a9b);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404a9d:{NFSU2_TR(0x404a9d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404a9e:{NFSU2_TR(0x404a9e);
__builtin_memmove((R+4),(R+24),4);
}
B404aa0:{NFSU2_TR(0x404aa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404aa5ull));
TAIL_STATIC(0x571640u,571);
}
B404aa5:L404aa5:{c.instructions+=4;NFSU2_TR(0x404aa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B404aa8:{NFSU2_TR(0x404aa8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404aa9:{NFSU2_TR(0x404aa9);
__builtin_memmove((R+4),(R+24),4);
}
B404aab:{NFSU2_TR(0x404aab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404ab0ull));
TAIL_STATIC(0x571710u,571);
}
B404ab0:L404ab0:{c.instructions+=3;NFSU2_TR(0x404ab0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404ab1:{NFSU2_TR(0x404ab1);
__builtin_memmove((R+4),(R+24),4);
}
B404ab3:{NFSU2_TR(0x404ab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404ab8ull));
TAIL_STATIC(0x571710u,571);
}
B404ab8:L404ab8:{c.instructions+=4;NFSU2_TR(0x404ab8);
u8 U[12];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B404abf:{NFSU2_TR(0x404abf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404ac0:{NFSU2_TR(0x404ac0);
__builtin_memmove((R+4),(R+24),4);
}
B404ac2:{NFSU2_TR(0x404ac2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404ac7ull));
TAIL_STATIC(0x5716c0u,571);
}
B404ac7:L404ac7:{c.instructions+=8;NFSU2_TR(0x404ac7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B404acb:{NFSU2_TR(0x404acb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+8,u32(s32(s8(r1(U+0)))));
}
B404ace:{NFSU2_TR(0x404ace);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B404acf:{NFSU2_TR(0x404acf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B404ad2:{NFSU2_TR(0x404ad2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x2ull))));
}
B404ad5:{NFSU2_TR(0x404ad5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B404ad7:{NFSU2_TR(0x404ad7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404adb:{NFSU2_TR(0x404adb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x404a93u);}goto L404a93;}}
}
B404add:L404add:{c.instructions+=1;NFSU2_TR(0x404add);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B404ade:L404ade:{c.instructions+=2;NFSU2_TR(0x404ade);
__builtin_memmove((R+4),(R+24),4);
}
B404ae0:{NFSU2_TR(0x404ae0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404ae5ull));
TAIL_STATIC(0x578d90u,578);
}
B404ae5:L404ae5:{c.instructions+=4;NFSU2_TR(0x404ae5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B404ae6:{NFSU2_TR(0x404ae6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B404ae7:{NFSU2_TR(0x404ae7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B404ae8:{NFSU2_TR(0x404ae8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B404af0:L404af0:{c.instructions+=10;NFSU2_TR(0x404af0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404af1:{NFSU2_TR(0x404af1);
__builtin_memmove((R+20),(R+16),4);
}
B404af3:{NFSU2_TR(0x404af3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B404af6:{NFSU2_TR(0x404af6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B404af9:{NFSU2_TR(0x404af9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404afa:{NFSU2_TR(0x404afa);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+12),(U+0),1);
}
B404afc:{NFSU2_TR(0x404afc);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
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
B404aff:{NFSU2_TR(0x404aff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404b00:{NFSU2_TR(0x404b00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404b01:{NFSU2_TR(0x404b01);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L404b12;}}
}
B404b03:L404b03:{c.instructions+=7;NFSU2_TR(0x404b03);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404b09:{NFSU2_TR(0x404b09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B404b0a:{NFSU2_TR(0x404b0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B404b0b:{NFSU2_TR(0x404b0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B404b0c:{NFSU2_TR(0x404b0c);
__builtin_memmove((R+16),(R+20),4);
}
B404b0e:{NFSU2_TR(0x404b0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B404b0f:{NFSU2_TR(0x404b0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B404b12:L404b12:{c.instructions+=1;NFSU2_TR(0x404b12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L404b49;}}
}
B404b14:L404b14:{c.instructions+=25;NFSU2_TR(0x404b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404b17:{NFSU2_TR(0x404b17);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404b19:{NFSU2_TR(0x404b19);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B404b1c:{NFSU2_TR(0x404b1c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404b1f:{NFSU2_TR(0x404b1f);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B404b22:{NFSU2_TR(0x404b22);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404b25:{NFSU2_TR(0x404b25);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B404b28:{NFSU2_TR(0x404b28);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B404b2a:{NFSU2_TR(0x404b2a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B404b2c:{NFSU2_TR(0x404b2c);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B404b2e:{NFSU2_TR(0x404b2e);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B404b30:{NFSU2_TR(0x404b30);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B404b32:{NFSU2_TR(0x404b32);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B404b34:{NFSU2_TR(0x404b34);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B404b36:{NFSU2_TR(0x404b36);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B404b38:{NFSU2_TR(0x404b38);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B404b3a:{NFSU2_TR(0x404b3a);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B404b3c:{NFSU2_TR(0x404b3c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B404b3e:{NFSU2_TR(0x404b3e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B404b40:{NFSU2_TR(0x404b40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B404b41:{NFSU2_TR(0x404b41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B404b42:{NFSU2_TR(0x404b42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B404b43:{NFSU2_TR(0x404b43);
__builtin_memmove((R+16),(R+20),4);
}
B404b45:{NFSU2_TR(0x404b45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B404b46:{NFSU2_TR(0x404b46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B404b49:L404b49:{c.instructions+=32;NFSU2_TR(0x404b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B404b4c:{NFSU2_TR(0x404b4c);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404b4e:{NFSU2_TR(0x404b4e);
w4(R+24,u32(0x2ull));
}
B404b53:{NFSU2_TR(0x404b53);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B404b56:{NFSU2_TR(0x404b56);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404b5a:{NFSU2_TR(0x404b5a);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404b5d:{NFSU2_TR(0x404b5d);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B404b60:{NFSU2_TR(0x404b60);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404b64:{NFSU2_TR(0x404b64);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404b67:{NFSU2_TR(0x404b67);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B404b6a:{NFSU2_TR(0x404b6a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404b6e:{NFSU2_TR(0x404b6e);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404b71:{NFSU2_TR(0x404b71);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B404b74:{NFSU2_TR(0x404b74);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404b78:{NFSU2_TR(0x404b78);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404b7b:{NFSU2_TR(0x404b7b);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B404b7e:{NFSU2_TR(0x404b7e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404b82:{NFSU2_TR(0x404b82);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404b85:{NFSU2_TR(0x404b85);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B404b88:{NFSU2_TR(0x404b88);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404b8c:{NFSU2_TR(0x404b8c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404b90:{NFSU2_TR(0x404b90);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404b94:{NFSU2_TR(0x404b94);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404b98:{NFSU2_TR(0x404b98);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404b9c:{NFSU2_TR(0x404b9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B404b9e:{NFSU2_TR(0x404b9e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404ba2:{NFSU2_TR(0x404ba2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404ba6:{NFSU2_TR(0x404ba6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B404ba8:{NFSU2_TR(0x404ba8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B404bae:{NFSU2_TR(0x404bae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B404bb0:{NFSU2_TR(0x404bb0);
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
B404bb3:{NFSU2_TR(0x404bb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L404c6c;}}
}
B404bb9:L404bb9:{c.instructions+=3;NFSU2_TR(0x404bb9);
w4(R+28,u32(s32(s8(r1(R+12)))));
}
B404bbc:{NFSU2_TR(0x404bbc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x38ull))));
}
B404bbf:{NFSU2_TR(0x404bbf);
}
B404bc0:L404bc0:{c.instructions+=2;NFSU2_TR(0x404bc0);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B404bc2:{NFSU2_TR(0x404bc2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L404c6c;}}
}
B404bc8:L404bc8:{c.instructions+=29;NFSU2_TR(0x404bc8);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404bca:{NFSU2_TR(0x404bca);
{u32 ea_=u32(r4(R+4)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B404bcd:{NFSU2_TR(0x404bcd);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404bd1:{NFSU2_TR(0x404bd1);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404bd4:{NFSU2_TR(0x404bd4);
{u32 ea_=u32(r4(R+4)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B404bd7:{NFSU2_TR(0x404bd7);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404bdb:{NFSU2_TR(0x404bdb);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404bde:{NFSU2_TR(0x404bde);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B404be1:{NFSU2_TR(0x404be1);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404be5:{NFSU2_TR(0x404be5);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404be8:{NFSU2_TR(0x404be8);
{u32 ea_=u32(r4(R+4)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B404beb:{NFSU2_TR(0x404beb);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404bef:{NFSU2_TR(0x404bef);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404bf2:{NFSU2_TR(0x404bf2);
{u32 ea_=u32(r4(R+4)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B404bf5:{NFSU2_TR(0x404bf5);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404bf9:{NFSU2_TR(0x404bf9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404bfb:{NFSU2_TR(0x404bfb);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B404bfe:{NFSU2_TR(0x404bfe);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B404c02:{NFSU2_TR(0x404c02);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404c06:{NFSU2_TR(0x404c06);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404c0a:{NFSU2_TR(0x404c0a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404c0e:{NFSU2_TR(0x404c0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B404c10:{NFSU2_TR(0x404c10);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404c14:{NFSU2_TR(0x404c14);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404c18:{NFSU2_TR(0x404c18);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B404c1a:{NFSU2_TR(0x404c1a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B404c20:{NFSU2_TR(0x404c20);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B404c22:{NFSU2_TR(0x404c22);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B404c25:{NFSU2_TR(0x404c25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L404c57;}}
}
B404c27:L404c27:{c.instructions+=12;NFSU2_TR(0x404c27);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404c2b:{NFSU2_TR(0x404c2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404c2f:{NFSU2_TR(0x404c2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404c33:{NFSU2_TR(0x404c33);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404c37:{NFSU2_TR(0x404c37);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404c3b:{NFSU2_TR(0x404c3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404c3f:{NFSU2_TR(0x404c3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404c43:{NFSU2_TR(0x404c43);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404c47:{NFSU2_TR(0x404c47);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404c4b:{NFSU2_TR(0x404c4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404c4f:{NFSU2_TR(0x404c4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404c53:{NFSU2_TR(0x404c53);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404c57:L404c57:{c.instructions+=6;NFSU2_TR(0x404c57);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B404c5d:{NFSU2_TR(0x404c5d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B404c5e:{NFSU2_TR(0x404c5e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B404c61:{NFSU2_TR(0x404c61);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B404c63:{NFSU2_TR(0x404c63);
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
B404c66:{NFSU2_TR(0x404c66);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x404bc0u);}goto L404bc0;}}
}
B404c6c:L404c6c:{c.instructions+=10;NFSU2_TR(0x404c6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B404c70:{NFSU2_TR(0x404c70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404c71:{NFSU2_TR(0x404c71);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B404c75:{NFSU2_TR(0x404c75);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404c76:{NFSU2_TR(0x404c76);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B404c7a:{NFSU2_TR(0x404c7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404c7b:{NFSU2_TR(0x404c7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B404c83:{NFSU2_TR(0x404c83);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B404c8b:{NFSU2_TR(0x404c8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B404c93:{NFSU2_TR(0x404c93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404c98ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B404c98:L404c98:{c.instructions+=5;NFSU2_TR(0x404c98);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B404c9c:{NFSU2_TR(0x404c9c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404c9d:{NFSU2_TR(0x404c9d);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B404ca1:{NFSU2_TR(0x404ca1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404ca2:{NFSU2_TR(0x404ca2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404ca7ull));
TAIL_STATIC(0x43cf10u,43c);
}
B404ca7:L404ca7:{c.instructions+=15;NFSU2_TR(0x404ca7);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404cab:{NFSU2_TR(0x404cab);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404caf:{NFSU2_TR(0x404caf);
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
B404cb2:{NFSU2_TR(0x404cb2);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404cb6:{NFSU2_TR(0x404cb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B404cb7:{NFSU2_TR(0x404cb7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404cbb:{NFSU2_TR(0x404cbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B404cbc:{NFSU2_TR(0x404cbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B404cbd:{NFSU2_TR(0x404cbd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B404cbf:{NFSU2_TR(0x404cbf);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404cc3:{NFSU2_TR(0x404cc3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404cc7:{NFSU2_TR(0x404cc7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B404cc9:{NFSU2_TR(0x404cc9);
__builtin_memmove((R+16),(R+20),4);
}
B404ccb:{NFSU2_TR(0x404ccb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B404ccc:{NFSU2_TR(0x404ccc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B404cd0:L404cd0:{c.instructions+=10;NFSU2_TR(0x404cd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B404cd3:{NFSU2_TR(0x404cd3);
__builtin_memmove((R+0),gp(0x7837bc),4);
}
B404cd8:{NFSU2_TR(0x404cd8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404cd9:{NFSU2_TR(0x404cd9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404cda:{NFSU2_TR(0x404cda);
__builtin_memmove((R+24),(R+4),4);
}
B404cdc:{NFSU2_TR(0x404cdc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B404cde:{NFSU2_TR(0x404cde);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x14ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x14ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B404ce1:{NFSU2_TR(0x404ce1);
w1(R+12,u8(0x1ull));
}
B404ce3:{NFSU2_TR(0x404ce3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404ce7:{NFSU2_TR(0x404ce7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L404ecc;}}
}
B404ced:L404ced:{c.instructions+=5;NFSU2_TR(0x404ced);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(R+4),r1(U+0)));
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B404cef:{NFSU2_TR(0x404cef);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404cf0:{NFSU2_TR(0x404cf0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404cf1:{NFSU2_TR(0x404cf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B404cf5:{NFSU2_TR(0x404cf5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L404dc1;}}
}
B404cfb:L404cfb:{c.instructions+=19;NFSU2_TR(0x404cfb);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404cfd:{NFSU2_TR(0x404cfd);
w4(R+8,u32(s32(s8(r1(R+4)))));
}
B404d00:{NFSU2_TR(0x404d00);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B404d03:{NFSU2_TR(0x404d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B404d06:{NFSU2_TR(0x404d06);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B404d09:{NFSU2_TR(0x404d09);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404d0c:{NFSU2_TR(0x404d0c);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B404d0f:{NFSU2_TR(0x404d0f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B404d11:{NFSU2_TR(0x404d11);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B404d13:{NFSU2_TR(0x404d13);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B404d15:{NFSU2_TR(0x404d15);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B404d17:{NFSU2_TR(0x404d17);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B404d19:{NFSU2_TR(0x404d19);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B404d1b:{NFSU2_TR(0x404d1b);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B404d1d:{NFSU2_TR(0x404d1d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B404d1f:{NFSU2_TR(0x404d1f);
{u32 ea_=u32(u32(7878584u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B404d25:{NFSU2_TR(0x404d25);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B404d27:{NFSU2_TR(0x404d27);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B404d2a:{NFSU2_TR(0x404d2a);
if(r1(R+514)){{goto L404d2e;}}
}
B404d2c:L404d2c:{c.instructions+=1;NFSU2_TR(0x404d2c);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B404d2e:L404d2e:{c.instructions+=3;NFSU2_TR(0x404d2e);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B404d32:{NFSU2_TR(0x404d32);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B404d34:{NFSU2_TR(0x404d34);
if(r1(R+518)){{goto L404e35;}}
}
B404d3a:L404d3a:{c.instructions+=2;NFSU2_TR(0x404d3a);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B404d3c:{NFSU2_TR(0x404d3c);
if(r1(R+518)){{goto L404ed6;}}
}
B404d42:L404d42:{c.instructions+=4;NFSU2_TR(0x404d42);
{u32 ea_=u32(u32(7878588u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B404d48:{NFSU2_TR(0x404d48);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B404d4a:{NFSU2_TR(0x404d4a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B404d4d:{NFSU2_TR(0x404d4d);
if(r1(R+514)){{goto L404e37;}}
}
B404d53:L404d53:{c.instructions+=2;NFSU2_TR(0x404d53);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x2ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B404d56:{NFSU2_TR(0x404d56);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L404d5d;}}
}
B404d58:L404d58:{c.instructions+=2;NFSU2_TR(0x404d58);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B404d5b:{NFSU2_TR(0x404d5b);
{goto L404d6c;}
}
B404d5d:L404d5d:{c.instructions+=3;NFSU2_TR(0x404d5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404d61:{NFSU2_TR(0x404d61);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B404d63:{NFSU2_TR(0x404d63);
if(r1(R+518)){{goto L404e37;}}
}
B404d69:L404d69:{c.instructions+=1;NFSU2_TR(0x404d69);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B404d6c:L404d6c:{c.instructions+=2;NFSU2_TR(0x404d6c);
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
B404d6e:{NFSU2_TR(0x404d6e);
if(r1(R+518)){{goto L404e37;}}
}
B404d74:L404d74:{c.instructions+=5;NFSU2_TR(0x404d74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404d75:{NFSU2_TR(0x404d75);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B404d79:{NFSU2_TR(0x404d79);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404d7a:{NFSU2_TR(0x404d7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404d7b:{NFSU2_TR(0x404d7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404d80ull));
TAIL_STATIC(0x401120u,401);
}
B404d80:L404d80:{c.instructions+=5;NFSU2_TR(0x404d80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404d81:{NFSU2_TR(0x404d81);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B404d85:{NFSU2_TR(0x404d85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404d86:{NFSU2_TR(0x404d86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404d87:{NFSU2_TR(0x404d87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404d8cull));
TAIL_STATIC(0x401120u,401);
}
B404d8c:L404d8c:{c.instructions+=10;NFSU2_TR(0x404d8c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404d90:{NFSU2_TR(0x404d90);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404d94:{NFSU2_TR(0x404d94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B404d97:{NFSU2_TR(0x404d97);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404d9b:{NFSU2_TR(0x404d9b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404d9f:{NFSU2_TR(0x404d9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B404da1:{NFSU2_TR(0x404da1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B404da7:{NFSU2_TR(0x404da7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B404da9:{NFSU2_TR(0x404da9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B404dac:{NFSU2_TR(0x404dac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L404db5;}}
}
B404dae:L404dae:{c.instructions+=2;NFSU2_TR(0x404dae);
w1(R+12,u8(0x1ull));
}
B404db0:{NFSU2_TR(0x404db0);
{goto L404e3f;}
}
B404db5:L404db5:{c.instructions+=7;NFSU2_TR(0x404db5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B404db6:{NFSU2_TR(0x404db6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B404db7:{NFSU2_TR(0x404db7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B404db8:{NFSU2_TR(0x404db8);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B404dba:{NFSU2_TR(0x404dba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B404dbb:{NFSU2_TR(0x404dbb);
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
B404dbe:{NFSU2_TR(0x404dbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B404dc1:L404dc1:{c.instructions+=3;NFSU2_TR(0x404dc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B404dc5:{NFSU2_TR(0x404dc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B404dc7:{NFSU2_TR(0x404dc7);
if(r1(R+518)){{goto L404e2f;}}
}
B404dc9:L404dc9:{c.instructions+=16;NFSU2_TR(0x404dc9);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404dcb:{NFSU2_TR(0x404dcb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B404dce:{NFSU2_TR(0x404dce);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B404dd0:{NFSU2_TR(0x404dd0);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B404dd3:{NFSU2_TR(0x404dd3);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404dd6:{NFSU2_TR(0x404dd6);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B404dd9:{NFSU2_TR(0x404dd9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B404ddb:{NFSU2_TR(0x404ddb);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B404ddd:{NFSU2_TR(0x404ddd);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B404ddf:{NFSU2_TR(0x404ddf);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B404de1:{NFSU2_TR(0x404de1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B404de3:{NFSU2_TR(0x404de3);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B404de5:{NFSU2_TR(0x404de5);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B404de7:{NFSU2_TR(0x404de7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B404de9:{NFSU2_TR(0x404de9);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B404ded:{NFSU2_TR(0x404ded);
if(r1(R+518)){{goto L404df9;}}
}
B404def:L404def:{c.instructions+=2;NFSU2_TR(0x404def);
__builtin_memmove((R+8),gp(0x7837c0),4);
}
B404df5:{NFSU2_TR(0x404df5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404df9:L404df9:{c.instructions+=4;NFSU2_TR(0x404df9);
{u32 ea_=u32(u32(7878584u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B404dff:{NFSU2_TR(0x404dff);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B404e01:{NFSU2_TR(0x404e01);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B404e04:{NFSU2_TR(0x404e04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L404e2d;}}
}
B404e06:L404e06:{c.instructions+=4;NFSU2_TR(0x404e06);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404e08:{NFSU2_TR(0x404e08);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404e09:{NFSU2_TR(0x404e09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404e0a:{NFSU2_TR(0x404e0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404e0full));
TAIL_STATIC(0x4036e0u,403);
}
B404e0f:L404e0f:{c.instructions+=3;NFSU2_TR(0x404e0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B404e12:{NFSU2_TR(0x404e12);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B404e14:{NFSU2_TR(0x404e14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L404e25;}}
}
B404e16:L404e16:{c.instructions+=5;NFSU2_TR(0x404e16);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404e1a:{NFSU2_TR(0x404e1a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B404e1e:{NFSU2_TR(0x404e1e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B404e20:{NFSU2_TR(0x404e20);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B404e23:{NFSU2_TR(0x404e23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L404e2d;}}
}
B404e25:L404e25:{c.instructions+=3;NFSU2_TR(0x404e25);
w1(R+12,u8(0x1ull));
}
B404e27:{NFSU2_TR(0x404e27);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B404e2b:{NFSU2_TR(0x404e2b);
{goto L404e37;}
}
B404e2d:L404e2d:{c.instructions+=1;NFSU2_TR(0x404e2d);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B404e2f:L404e2f:{c.instructions+=2;NFSU2_TR(0x404e2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B404e33:{NFSU2_TR(0x404e33);
{goto L404e37;}
}
B404e35:L404e35:{c.instructions+=1;NFSU2_TR(0x404e35);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B404e37:L404e37:{c.instructions+=2;NFSU2_TR(0x404e37);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B404e39:{NFSU2_TR(0x404e39);
if(r1(R+518)){{goto L404ed8;}}
}
B404e3f:L404e3f:{c.instructions+=26;NFSU2_TR(0x404e3f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B404e42:{NFSU2_TR(0x404e42);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404e45:{NFSU2_TR(0x404e45);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404e48:{NFSU2_TR(0x404e48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B404e4a:{NFSU2_TR(0x404e4a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B404e4b:{NFSU2_TR(0x404e4b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B404e4d:{NFSU2_TR(0x404e4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B404e50:{NFSU2_TR(0x404e50);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B404e52:{NFSU2_TR(0x404e52);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B404e54:{NFSU2_TR(0x404e54);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404e57:{NFSU2_TR(0x404e57);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404e5a:{NFSU2_TR(0x404e5a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+8,u32(s32(s8(r1(U+0)))));
}
B404e5d:{NFSU2_TR(0x404e5d);
u8 U[6];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B404e62:{NFSU2_TR(0x404e62);
u8 U[14];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B404e6a:{NFSU2_TR(0x404e6a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+4,u32(s32(s8(r1(U+0)))));
}
B404e6d:{NFSU2_TR(0x404e6d);
u8 U[6];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B404e72:{NFSU2_TR(0x404e72);
u8 U[14];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B404e7a:{NFSU2_TR(0x404e7a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B404e7d:{NFSU2_TR(0x404e7d);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B404e81:{NFSU2_TR(0x404e81);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B404e88:{NFSU2_TR(0x404e88);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B404e8a:{NFSU2_TR(0x404e8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404e90:{NFSU2_TR(0x404e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404e96:{NFSU2_TR(0x404e96);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B404e98:{NFSU2_TR(0x404e98);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B404e9a:{NFSU2_TR(0x404e9a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L404eba;}}
}
B404e9c:L404e9c:{c.instructions+=6;NFSU2_TR(0x404e9c);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B404e9f:{NFSU2_TR(0x404e9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B404ea2:{NFSU2_TR(0x404ea2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+24)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B404ea4:{NFSU2_TR(0x404ea4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404ea5:{NFSU2_TR(0x404ea5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404ea6:{NFSU2_TR(0x404ea6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404eabull));
TAIL_STATIC(0x43ce10u,43c);
}
B404eab:L404eab:{c.instructions+=3;NFSU2_TR(0x404eab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B404eae:{NFSU2_TR(0x404eae);
{u32 ea_=u32(r4(R+24)+u32(452u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B404eb4:{NFSU2_TR(0x404eb4);
{u32 ea_=u32(r4(R+24)+u32(452u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404eba:L404eba:{c.instructions+=10;NFSU2_TR(0x404eba);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B404ebc:{NFSU2_TR(0x404ebc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B404ebd:{NFSU2_TR(0x404ebd);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B404ebf:{NFSU2_TR(0x404ebf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B404ec0:{NFSU2_TR(0x404ec0);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B404ec2:{NFSU2_TR(0x404ec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B404ec3:{NFSU2_TR(0x404ec3);
__builtin_memmove((R+0),(R+12),1);
}
B404ec5:{NFSU2_TR(0x404ec5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B404ec6:{NFSU2_TR(0x404ec6);
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
B404ec9:{NFSU2_TR(0x404ec9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B404ecc:L404ecc:{c.instructions+=5;NFSU2_TR(0x404ecc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B404ecd:{NFSU2_TR(0x404ecd);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B404ecf:{NFSU2_TR(0x404ecf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B404ed0:{NFSU2_TR(0x404ed0);
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
B404ed3:{NFSU2_TR(0x404ed3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B404ed6:L404ed6:{c.instructions+=1;NFSU2_TR(0x404ed6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B404ed8:L404ed8:{c.instructions+=7;NFSU2_TR(0x404ed8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B404ed9:{NFSU2_TR(0x404ed9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B404eda:{NFSU2_TR(0x404eda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B404edb:{NFSU2_TR(0x404edb);
__builtin_memmove((R+0),(R+12),1);
}
B404edd:{NFSU2_TR(0x404edd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B404ede:{NFSU2_TR(0x404ede);
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
B404ee1:{NFSU2_TR(0x404ee1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B404ef0:L404ef0:{c.instructions+=11;NFSU2_TR(0x404ef0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404ef1:{NFSU2_TR(0x404ef1);
__builtin_memmove((R+20),(R+16),4);
}
B404ef3:{NFSU2_TR(0x404ef3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B404ef6:{NFSU2_TR(0x404ef6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B404ef9:{NFSU2_TR(0x404ef9);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B404efe:{NFSU2_TR(0x404efe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404eff:{NFSU2_TR(0x404eff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404f00:{NFSU2_TR(0x404f00);
__builtin_memmove((R+24),(R+4),4);
}
B404f02:{NFSU2_TR(0x404f02);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
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
B404f08:{NFSU2_TR(0x404f08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404f09:{NFSU2_TR(0x404f09);
if(r1(R+518)){TAIL_STATIC(0x40500au,405);}
}
B404f0f:L404f0f:{c.instructions+=4;NFSU2_TR(0x404f0f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B404f11:{NFSU2_TR(0x404f11);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B404f13:{NFSU2_TR(0x404f13);
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
B404f15:{NFSU2_TR(0x404f15);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L404ffe;}}
}
B404f1b:L404f1b:{c.instructions+=8;NFSU2_TR(0x404f1b);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404f1e:{NFSU2_TR(0x404f1e);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B404f21:{NFSU2_TR(0x404f21);
{u32 ea_=u32(u32(7881848u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B404f27:{NFSU2_TR(0x404f27);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B404f28:{NFSU2_TR(0x404f28);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404f2c:{NFSU2_TR(0x404f2c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B404f2e:{NFSU2_TR(0x404f2e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B404f31:{NFSU2_TR(0x404f31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L404f3f;}}
}
B404f33:L404f33:{c.instructions+=3;NFSU2_TR(0x404f33);
__builtin_memmove((R+4),gp(0x7837c4),4);
}
B404f39:{NFSU2_TR(0x404f39);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404f3d:{NFSU2_TR(0x404f3d);
{goto L404f49;}
}
B404f3f:L404f3f:{c.instructions+=2;NFSU2_TR(0x404f3f);
__builtin_memmove((R+8),gp(0x7837c8),4);
}
B404f45:{NFSU2_TR(0x404f45);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404f49:L404f49:{c.instructions+=5;NFSU2_TR(0x404f49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404f4c:{NFSU2_TR(0x404f4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404f4d:{NFSU2_TR(0x404f4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B404f51:{NFSU2_TR(0x404f51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404f52:{NFSU2_TR(0x404f52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404f57ull));
TAIL_STATIC(0x43ce50u,43c);
}
B404f57:L404f57:{c.instructions+=4;NFSU2_TR(0x404f57);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B404f59:{NFSU2_TR(0x404f59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B404f5c:{NFSU2_TR(0x404f5c);
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
B404f5e:{NFSU2_TR(0x404f5e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L404fd9;}}
}
B404f60:L404f60:{c.instructions+=1;NFSU2_TR(0x404f60);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B404f63:L404f63:{c.instructions+=13;NFSU2_TR(0x404f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B404f66:{NFSU2_TR(0x404f66);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404f68:{NFSU2_TR(0x404f68);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B404f6a:{NFSU2_TR(0x404f6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B404f6e:{NFSU2_TR(0x404f6e);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404f71:{NFSU2_TR(0x404f71);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404f72:{NFSU2_TR(0x404f72);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B404f75:{NFSU2_TR(0x404f75);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B404f77:{NFSU2_TR(0x404f77);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B404f7b:{NFSU2_TR(0x404f7b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404f7f:{NFSU2_TR(0x404f7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B404f80:{NFSU2_TR(0x404f80);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B404f84:{NFSU2_TR(0x404f84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x404f89ull));
TAIL_STATIC(0x43ce50u,43c);
}
B404f89:L404f89:{c.instructions+=10;NFSU2_TR(0x404f89);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404f8d:{NFSU2_TR(0x404f8d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404f91:{NFSU2_TR(0x404f91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B404f94:{NFSU2_TR(0x404f94);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404f98:{NFSU2_TR(0x404f98);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404f9c:{NFSU2_TR(0x404f9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B404f9e:{NFSU2_TR(0x404f9e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B404fa2:{NFSU2_TR(0x404fa2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B404fa4:{NFSU2_TR(0x404fa4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B404fa7:{NFSU2_TR(0x404fa7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L404fc8;}}
}
B404fa9:L404fa9:{c.instructions+=9;NFSU2_TR(0x404fa9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404fad:{NFSU2_TR(0x404fad);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404fb1:{NFSU2_TR(0x404fb1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B404fb5:{NFSU2_TR(0x404fb5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B404fb9:{NFSU2_TR(0x404fb9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B404fbb:{NFSU2_TR(0x404fbb);
{u32 ea_=u32(u32(8550944u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B404fc1:{NFSU2_TR(0x404fc1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B404fc3:{NFSU2_TR(0x404fc3);
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
B404fc6:{NFSU2_TR(0x404fc6);
if(r1(R+518)){{goto L404fd5;}}
}
B404fc8:L404fc8:{c.instructions+=5;NFSU2_TR(0x404fc8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+4,u32(s32(s8(r1(U+0)))));
}
B404fcb:{NFSU2_TR(0x404fcb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B404fcc:{NFSU2_TR(0x404fcc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B404fcf:{NFSU2_TR(0x404fcf);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B404fd1:{NFSU2_TR(0x404fd1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x404f63u);}goto L404f63;}}
}
B404fd3:L404fd3:{c.instructions+=1;NFSU2_TR(0x404fd3);
{goto L404fd9;}
}
B404fd5:L404fd5:{c.instructions+=1;NFSU2_TR(0x404fd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404fd9:L404fd9:{c.instructions+=11;NFSU2_TR(0x404fd9);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B404fdd:{NFSU2_TR(0x404fdd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B404fe3:{NFSU2_TR(0x404fe3);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B404fe8:{NFSU2_TR(0x404fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B404fee:{NFSU2_TR(0x404fee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B404ff5:{NFSU2_TR(0x404ff5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B404ff6:{NFSU2_TR(0x404ff6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B404ff7:{NFSU2_TR(0x404ff7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B404ff8:{NFSU2_TR(0x404ff8);
__builtin_memmove((R+16),(R+20),4);
}
B404ffa:{NFSU2_TR(0x404ffa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B404ffb:{NFSU2_TR(0x404ffb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B404ffe:L404ffe:{c.instructions+=1;NFSU2_TR(0x404ffe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
TAIL_STATIC(0x405004u,405);
}
XIT:NFSU2_TR_EXIT(0x404,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
