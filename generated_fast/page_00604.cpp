#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_4a4(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5a9(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5da(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_5f5(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_5fb(u8* __restrict R,Cpu& c);
u32 body_5fc(u8* __restrict R,Cpu& c);
u32 body_5ff(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_603(u8* __restrict R,Cpu& c);
u32 body_605(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_63b(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x604,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x604,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_604(u8* __restrict R,Cpu& c);
u32 page_604(Cpu& c){return body_604(c.regs.data(),c);}
__attribute__((noinline)) u32 body_604(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x604002:goto L604002;
case 0x604005:c.instructions+=2;goto B604005;
case 0x604007:c.instructions+=1;goto B604007;
case 0x604009:goto L604009;
case 0x604010:goto L604010;
case 0x604017:c.instructions+=4;goto B604017;
case 0x60401a:c.instructions+=3;goto B60401a;
case 0x60401b:c.instructions+=2;goto B60401b;
case 0x604021:c.instructions+=1;goto B604021;
case 0x604026:goto L604026;
case 0x604028:c.instructions+=2;goto B604028;
case 0x60402a:c.instructions+=1;goto B60402a;
case 0x60402c:goto L60402c;
case 0x60402f:c.instructions+=2;goto B60402f;
case 0x604033:c.instructions+=1;goto B604033;
case 0x604035:goto L604035;
case 0x604037:c.instructions+=1;goto B604037;
case 0x60403c:goto L60403c;
case 0x60403d:c.instructions+=2;goto B60403d;
case 0x60403f:c.instructions+=1;goto B60403f;
case 0x604041:goto L604041;
case 0x604046:c.instructions+=6;goto B604046;
case 0x604047:c.instructions+=5;goto B604047;
case 0x604048:c.instructions+=4;goto B604048;
case 0x604049:c.instructions+=3;goto B604049;
case 0x60404b:c.instructions+=2;goto B60404b;
case 0x60404c:c.instructions+=1;goto B60404c;
case 0x60404f:goto L60404f;
case 0x604053:c.instructions+=7;goto B604053;
case 0x604055:c.instructions+=6;goto B604055;
case 0x604056:c.instructions+=5;goto B604056;
case 0x604058:c.instructions+=4;goto B604058;
case 0x60405c:c.instructions+=3;goto B60405c;
case 0x60405d:c.instructions+=2;goto B60405d;
case 0x60405f:c.instructions+=1;goto B60405f;
case 0x604064:goto L604064;
case 0x604067:c.instructions+=2;goto B604067;
case 0x604069:c.instructions+=1;goto B604069;
case 0x60406b:goto L60406b;
case 0x60406d:c.instructions+=1;goto B60406d;
case 0x604072:goto L604072;
case 0x604077:c.instructions+=6;goto B604077;
case 0x604078:c.instructions+=5;goto B604078;
case 0x604079:c.instructions+=4;goto B604079;
case 0x60407a:c.instructions+=3;goto B60407a;
case 0x60407c:c.instructions+=2;goto B60407c;
case 0x60407d:c.instructions+=1;goto B60407d;
case 0x604080:goto L604080;
case 0x604083:c.instructions+=3;goto B604083;
case 0x604088:c.instructions+=2;goto B604088;
case 0x60408a:c.instructions+=1;goto B60408a;
case 0x60408c:goto L60408c;
case 0x604091:c.instructions+=1;goto B604091;
case 0x604096:goto L604096;
case 0x60409b:goto L60409b;
case 0x60409d:c.instructions+=1;goto B60409d;
case 0x60409f:goto L60409f;
case 0x6040a2:c.instructions+=1;goto B6040a2;
case 0x6040a7:goto L6040a7;
case 0x6040aa:c.instructions+=1;goto B6040aa;
case 0x6040ac:goto L6040ac;
case 0x6040b1:goto L6040b1;
case 0x6040b6:c.instructions+=6;goto B6040b6;
case 0x6040b7:c.instructions+=5;goto B6040b7;
case 0x6040b8:c.instructions+=4;goto B6040b8;
case 0x6040b9:c.instructions+=3;goto B6040b9;
case 0x6040bb:c.instructions+=2;goto B6040bb;
case 0x6040bc:c.instructions+=1;goto B6040bc;
case 0x6040bf:goto L6040bf;
case 0x6040c3:c.instructions+=1;goto B6040c3;
case 0x6040c5:goto L6040c5;
case 0x6040cc:c.instructions+=1;goto B6040cc;
case 0x6040ce:goto L6040ce;
case 0x6040d3:c.instructions+=1;goto B6040d3;
case 0x6040d8:goto L6040d8;
case 0x6040da:c.instructions+=1;goto B6040da;
case 0x6040dc:goto L6040dc;
case 0x6040de:c.instructions+=2;goto B6040de;
case 0x6040e0:c.instructions+=1;goto B6040e0;
case 0x6040e5:goto L6040e5;
case 0x6040e7:c.instructions+=3;goto B6040e7;
case 0x6040e9:c.instructions+=2;goto B6040e9;
case 0x6040eb:c.instructions+=1;goto B6040eb;
case 0x6040f0:goto L6040f0;
case 0x6040f5:c.instructions+=6;goto B6040f5;
case 0x6040f6:c.instructions+=5;goto B6040f6;
case 0x6040f7:c.instructions+=4;goto B6040f7;
case 0x6040f8:c.instructions+=3;goto B6040f8;
case 0x6040fa:c.instructions+=2;goto B6040fa;
case 0x6040fb:c.instructions+=1;goto B6040fb;
case 0x6040fe:goto L6040fe;
case 0x604100:c.instructions+=2;goto B604100;
case 0x604102:c.instructions+=1;goto B604102;
case 0x604107:goto L604107;
case 0x60410c:c.instructions+=6;goto B60410c;
case 0x60410d:c.instructions+=5;goto B60410d;
case 0x60410e:c.instructions+=4;goto B60410e;
case 0x60410f:c.instructions+=3;goto B60410f;
case 0x604111:c.instructions+=2;goto B604111;
case 0x604112:c.instructions+=1;goto B604112;
case 0x604115:goto L604115;
case 0x60411a:c.instructions+=1;goto B60411a;
case 0x60411f:goto L60411f;
case 0x604121:c.instructions+=1;goto B604121;
case 0x604126:goto L604126;
case 0x60412b:c.instructions+=6;goto B60412b;
case 0x60412c:c.instructions+=5;goto B60412c;
case 0x60412d:c.instructions+=4;goto B60412d;
case 0x60412e:c.instructions+=3;goto B60412e;
case 0x604130:c.instructions+=2;goto B604130;
case 0x604131:c.instructions+=1;goto B604131;
case 0x604134:goto L604134;
case 0x604139:c.instructions+=1;goto B604139;
case 0x60413e:goto L60413e;
case 0x604140:c.instructions+=2;goto B604140;
case 0x604142:c.instructions+=1;goto B604142;
case 0x604147:goto L604147;
case 0x604149:c.instructions+=3;goto B604149;
case 0x60414b:c.instructions+=2;goto B60414b;
case 0x60414d:c.instructions+=1;goto B60414d;
case 0x604152:goto L604152;
case 0x604157:c.instructions+=6;goto B604157;
case 0x604158:c.instructions+=5;goto B604158;
case 0x604159:c.instructions+=4;goto B604159;
case 0x60415a:c.instructions+=3;goto B60415a;
case 0x60415c:c.instructions+=2;goto B60415c;
case 0x60415d:c.instructions+=1;goto B60415d;
case 0x604160:goto L604160;
case 0x604165:c.instructions+=1;goto B604165;
case 0x60416a:goto L60416a;
case 0x60416c:c.instructions+=2;goto B60416c;
case 0x60416e:c.instructions+=1;goto B60416e;
case 0x604173:goto L604173;
case 0x604176:c.instructions+=4;goto B604176;
case 0x604177:c.instructions+=3;goto B604177;
case 0x604179:c.instructions+=2;goto B604179;
case 0x60417b:c.instructions+=1;goto B60417b;
case 0x604180:goto L604180;
case 0x604185:c.instructions+=6;goto B604185;
case 0x604186:c.instructions+=5;goto B604186;
case 0x604187:c.instructions+=4;goto B604187;
case 0x604188:c.instructions+=3;goto B604188;
case 0x60418a:c.instructions+=2;goto B60418a;
case 0x60418b:c.instructions+=1;goto B60418b;
case 0x60418e:goto L60418e;
case 0x604193:c.instructions+=1;goto B604193;
case 0x604198:goto L604198;
case 0x60419a:c.instructions+=2;goto B60419a;
case 0x60419c:c.instructions+=1;goto B60419c;
case 0x6041a1:goto L6041a1;
case 0x6041a4:c.instructions+=2;goto B6041a4;
case 0x6041a6:c.instructions+=1;goto B6041a6;
case 0x6041a8:goto L6041a8;
case 0x6041ab:c.instructions+=3;goto B6041ab;
case 0x6041ac:c.instructions+=2;goto B6041ac;
case 0x6041ae:c.instructions+=1;goto B6041ae;
case 0x6041b3:goto L6041b3;
case 0x6041b8:c.instructions+=6;goto B6041b8;
case 0x6041b9:c.instructions+=5;goto B6041b9;
case 0x6041ba:c.instructions+=4;goto B6041ba;
case 0x6041bb:c.instructions+=3;goto B6041bb;
case 0x6041bd:c.instructions+=2;goto B6041bd;
case 0x6041be:c.instructions+=1;goto B6041be;
case 0x6041c1:goto L6041c1;
case 0x6041c3:c.instructions+=2;goto B6041c3;
case 0x6041c5:c.instructions+=1;goto B6041c5;
case 0x6041ca:goto L6041ca;
case 0x6041cf:c.instructions+=6;goto B6041cf;
case 0x6041d0:c.instructions+=5;goto B6041d0;
case 0x6041d1:c.instructions+=4;goto B6041d1;
case 0x6041d2:c.instructions+=3;goto B6041d2;
case 0x6041d4:c.instructions+=2;goto B6041d4;
case 0x6041d5:c.instructions+=1;goto B6041d5;
case 0x6041d8:goto L6041d8;
case 0x6041dd:c.instructions+=1;goto B6041dd;
case 0x6041e2:goto L6041e2;
case 0x6041e4:c.instructions+=2;goto B6041e4;
case 0x6041e9:c.instructions+=1;goto B6041e9;
case 0x6041ee:goto L6041ee;
case 0x6041f3:c.instructions+=1;goto B6041f3;
case 0x6041f8:goto L6041f8;
case 0x6041fd:c.instructions+=6;goto B6041fd;
case 0x6041fe:c.instructions+=5;goto B6041fe;
case 0x6041ff:c.instructions+=4;goto B6041ff;
case 0x604200:c.instructions+=3;goto B604200;
case 0x604202:c.instructions+=2;goto B604202;
case 0x604203:c.instructions+=1;goto B604203;
case 0x604206:goto L604206;
case 0x604207:c.instructions+=6;goto B604207;
case 0x604208:c.instructions+=5;goto B604208;
case 0x60420a:c.instructions+=4;goto B60420a;
case 0x60420b:c.instructions+=3;goto B60420b;
case 0x60420d:c.instructions+=2;goto B60420d;
case 0x60420e:c.instructions+=1;goto B60420e;
case 0x604260:goto L604260;
case 0x604261:c.instructions+=19;goto B604261;
case 0x604263:c.instructions+=18;goto B604263;
case 0x604266:c.instructions+=17;goto B604266;
case 0x604268:c.instructions+=16;goto B604268;
case 0x60426d:c.instructions+=15;goto B60426d;
case 0x604273:c.instructions+=14;goto B604273;
case 0x604274:c.instructions+=13;goto B604274;
case 0x60427b:c.instructions+=12;goto B60427b;
case 0x60427e:c.instructions+=11;goto B60427e;
case 0x60427f:c.instructions+=10;goto B60427f;
case 0x604280:c.instructions+=9;goto B604280;
case 0x604282:c.instructions+=8;goto B604282;
case 0x604285:c.instructions+=7;goto B604285;
case 0x604286:c.instructions+=6;goto B604286;
case 0x604288:c.instructions+=5;goto B604288;
case 0x60428b:c.instructions+=4;goto B60428b;
case 0x60428f:c.instructions+=3;goto B60428f;
case 0x604295:c.instructions+=2;goto B604295;
case 0x604298:c.instructions+=1;goto B604298;
case 0x60429d:goto L60429d;
case 0x60429e:c.instructions+=3;goto B60429e;
case 0x60429f:c.instructions+=2;goto B60429f;
case 0x6042a1:c.instructions+=1;goto B6042a1;
case 0x6042a6:goto L6042a6;
case 0x6042a8:c.instructions+=6;goto B6042a8;
case 0x6042ae:c.instructions+=5;goto B6042ae;
case 0x6042b0:c.instructions+=4;goto B6042b0;
case 0x6042b6:c.instructions+=3;goto B6042b6;
case 0x6042c0:c.instructions+=2;goto B6042c0;
case 0x6042c6:c.instructions+=1;goto B6042c6;
case 0x6042cb:goto L6042cb;
case 0x6042d1:c.instructions+=3;goto B6042d1;
case 0x6042d3:c.instructions+=2;goto B6042d3;
case 0x6042d7:c.instructions+=1;goto B6042d7;
case 0x6042dc:goto L6042dc;
case 0x6042df:c.instructions+=24;goto B6042df;
case 0x6042e5:c.instructions+=23;goto B6042e5;
case 0x6042eb:c.instructions+=22;goto B6042eb;
case 0x6042f1:c.instructions+=21;goto B6042f1;
case 0x6042f7:c.instructions+=20;goto B6042f7;
case 0x6042fd:c.instructions+=19;goto B6042fd;
case 0x604303:c.instructions+=18;goto B604303;
case 0x604309:c.instructions+=17;goto B604309;
case 0x60430c:c.instructions+=16;goto B60430c;
case 0x60430f:c.instructions+=15;goto B60430f;
case 0x604311:c.instructions+=14;goto B604311;
case 0x604317:c.instructions+=13;goto B604317;
case 0x60431d:c.instructions+=12;goto B60431d;
case 0x604323:c.instructions+=11;goto B604323;
case 0x604329:c.instructions+=10;goto B604329;
case 0x60432f:c.instructions+=9;goto B60432f;
case 0x604335:c.instructions+=8;goto B604335;
case 0x60433a:c.instructions+=7;goto B60433a;
case 0x60433e:c.instructions+=6;goto B60433e;
case 0x604342:c.instructions+=5;goto B604342;
case 0x604346:c.instructions+=4;goto B604346;
case 0x60434c:c.instructions+=3;goto B60434c;
case 0x604352:c.instructions+=2;goto B604352;
case 0x604358:c.instructions+=1;goto B604358;
case 0x60435a:goto L60435a;
case 0x60435c:c.instructions+=16;goto B60435c;
case 0x60435f:c.instructions+=15;goto B60435f;
case 0x604362:c.instructions+=14;goto B604362;
case 0x604364:c.instructions+=13;goto B604364;
case 0x604366:c.instructions+=12;goto B604366;
case 0x60436a:c.instructions+=11;goto B60436a;
case 0x60436e:c.instructions+=10;goto B60436e;
case 0x604372:c.instructions+=9;goto B604372;
case 0x604376:c.instructions+=8;goto B604376;
case 0x604378:c.instructions+=7;goto B604378;
case 0x60437b:c.instructions+=6;goto B60437b;
case 0x60437d:c.instructions+=5;goto B60437d;
case 0x60437f:c.instructions+=4;goto B60437f;
case 0x604383:c.instructions+=3;goto B604383;
case 0x604389:c.instructions+=2;goto B604389;
case 0x60438f:c.instructions+=1;goto B60438f;
case 0x604395:goto L604395;
case 0x604398:c.instructions+=4;goto B604398;
case 0x60439e:c.instructions+=3;goto B60439e;
case 0x6043a0:c.instructions+=2;goto B6043a0;
case 0x6043a3:c.instructions+=1;goto B6043a3;
case 0x6043a5:goto L6043a5;
case 0x6043a9:c.instructions+=3;goto B6043a9;
case 0x6043aa:c.instructions+=2;goto B6043aa;
case 0x6043ac:c.instructions+=1;goto B6043ac;
case 0x6043b1:goto L6043b1;
case 0x6043b3:goto L6043b3;
case 0x6043b6:c.instructions+=6;goto B6043b6;
case 0x6043b7:c.instructions+=5;goto B6043b7;
case 0x6043b8:c.instructions+=4;goto B6043b8;
case 0x6043bc:c.instructions+=3;goto B6043bc;
case 0x6043bd:c.instructions+=2;goto B6043bd;
case 0x6043bf:c.instructions+=1;goto B6043bf;
case 0x6043c4:goto L6043c4;
case 0x6043c7:c.instructions+=2;goto B6043c7;
case 0x6043cb:c.instructions+=1;goto B6043cb;
case 0x6043cd:goto L6043cd;
case 0x6043d7:goto L6043d7;
case 0x6043db:c.instructions+=26;goto B6043db;
case 0x6043df:c.instructions+=25;goto B6043df;
case 0x6043e3:c.instructions+=24;goto B6043e3;
case 0x6043e6:c.instructions+=23;goto B6043e6;
case 0x6043ea:c.instructions+=22;goto B6043ea;
case 0x6043ed:c.instructions+=21;goto B6043ed;
case 0x6043f0:c.instructions+=20;goto B6043f0;
case 0x6043f3:c.instructions+=19;goto B6043f3;
case 0x6043f6:c.instructions+=18;goto B6043f6;
case 0x6043fd:c.instructions+=17;goto B6043fd;
case 0x604403:c.instructions+=16;goto B604403;
case 0x604409:c.instructions+=15;goto B604409;
case 0x604413:c.instructions+=14;goto B604413;
case 0x604419:c.instructions+=13;goto B604419;
case 0x60441f:c.instructions+=12;goto B60441f;
case 0x604425:c.instructions+=11;goto B604425;
case 0x60442b:c.instructions+=10;goto B60442b;
case 0x604430:c.instructions+=9;goto B604430;
case 0x604432:c.instructions+=8;goto B604432;
case 0x604436:c.instructions+=7;goto B604436;
case 0x60443a:c.instructions+=6;goto B60443a;
case 0x60443d:c.instructions+=5;goto B60443d;
case 0x604440:c.instructions+=4;goto B604440;
case 0x604443:c.instructions+=3;goto B604443;
case 0x604446:c.instructions+=2;goto B604446;
case 0x604449:c.instructions+=1;goto B604449;
case 0x60444e:goto L60444e;
case 0x604451:c.instructions+=4;goto B604451;
case 0x604455:c.instructions+=3;goto B604455;
case 0x604457:c.instructions+=2;goto B604457;
case 0x60445c:c.instructions+=1;goto B60445c;
case 0x60445e:goto L60445e;
case 0x60445f:c.instructions+=2;goto B60445f;
case 0x604461:c.instructions+=1;goto B604461;
case 0x604466:goto L604466;
case 0x604468:goto L604468;
case 0x60446a:goto L60446a;
case 0x60446d:c.instructions+=6;goto B60446d;
case 0x604470:c.instructions+=5;goto B604470;
case 0x604473:c.instructions+=4;goto B604473;
case 0x604479:c.instructions+=3;goto B604479;
case 0x60447a:c.instructions+=2;goto B60447a;
case 0x60447f:c.instructions+=1;goto B60447f;
case 0x604484:goto L604484;
case 0x604487:c.instructions+=2;goto B604487;
case 0x604489:c.instructions+=1;goto B604489;
case 0x60448b:goto L60448b;
case 0x60448e:c.instructions+=4;goto B60448e;
case 0x604491:c.instructions+=3;goto B604491;
case 0x604497:c.instructions+=2;goto B604497;
case 0x60449a:c.instructions+=1;goto B60449a;
case 0x60449c:goto L60449c;
case 0x60449e:goto L60449e;
case 0x6044a0:c.instructions+=2;goto B6044a0;
case 0x6044a3:c.instructions+=1;goto B6044a3;
case 0x6044a8:goto L6044a8;
case 0x6044ab:c.instructions+=4;goto B6044ab;
case 0x6044af:c.instructions+=3;goto B6044af;
case 0x6044b1:c.instructions+=2;goto B6044b1;
case 0x6044b6:c.instructions+=1;goto B6044b6;
case 0x6044b8:goto L6044b8;
case 0x6044ba:c.instructions+=1;goto B6044ba;
case 0x6044bf:goto L6044bf;
case 0x6044c1:goto L6044c1;
case 0x6044c3:goto L6044c3;
case 0x6044c9:c.instructions+=10;goto B6044c9;
case 0x6044ca:c.instructions+=9;goto B6044ca;
case 0x6044d0:c.instructions+=8;goto B6044d0;
case 0x6044d1:c.instructions+=7;goto B6044d1;
case 0x6044d4:c.instructions+=6;goto B6044d4;
case 0x6044d5:c.instructions+=5;goto B6044d5;
case 0x6044d6:c.instructions+=4;goto B6044d6;
case 0x6044d8:c.instructions+=3;goto B6044d8;
case 0x6044dd:c.instructions+=2;goto B6044dd;
case 0x6044e3:c.instructions+=1;goto B6044e3;
case 0x6044e8:goto L6044e8;
case 0x6044ee:c.instructions+=27;goto B6044ee;
case 0x6044f1:c.instructions+=26;goto B6044f1;
case 0x6044f6:c.instructions+=25;goto B6044f6;
case 0x6044f9:c.instructions+=24;goto B6044f9;
case 0x6044fc:c.instructions+=23;goto B6044fc;
case 0x6044ff:c.instructions+=22;goto B6044ff;
case 0x604502:c.instructions+=21;goto B604502;
case 0x604508:c.instructions+=20;goto B604508;
case 0x60450e:c.instructions+=19;goto B60450e;
case 0x604514:c.instructions+=18;goto B604514;
case 0x60451a:c.instructions+=17;goto B60451a;
case 0x604520:c.instructions+=16;goto B604520;
case 0x604526:c.instructions+=15;goto B604526;
case 0x60452c:c.instructions+=14;goto B60452c;
case 0x604532:c.instructions+=13;goto B604532;
case 0x604538:c.instructions+=12;goto B604538;
case 0x60453e:c.instructions+=11;goto B60453e;
case 0x604544:c.instructions+=10;goto B604544;
case 0x60454a:c.instructions+=9;goto B60454a;
case 0x60454d:c.instructions+=8;goto B60454d;
case 0x60454f:c.instructions+=7;goto B60454f;
case 0x604554:c.instructions+=6;goto B604554;
case 0x60455a:c.instructions+=5;goto B60455a;
case 0x60455f:c.instructions+=4;goto B60455f;
case 0x604565:c.instructions+=3;goto B604565;
case 0x60456b:c.instructions+=2;goto B60456b;
case 0x604571:c.instructions+=1;goto B604571;
case 0x604576:goto L604576;
case 0x60457c:c.instructions+=47;goto B60457c;
case 0x604582:c.instructions+=46;goto B604582;
case 0x604588:c.instructions+=45;goto B604588;
case 0x60458e:c.instructions+=44;goto B60458e;
case 0x604594:c.instructions+=43;goto B604594;
case 0x60459a:c.instructions+=42;goto B60459a;
case 0x6045a0:c.instructions+=41;goto B6045a0;
case 0x6045a7:c.instructions+=40;goto B6045a7;
case 0x6045ad:c.instructions+=39;goto B6045ad;
case 0x6045b3:c.instructions+=38;goto B6045b3;
case 0x6045b9:c.instructions+=37;goto B6045b9;
case 0x6045bf:c.instructions+=36;goto B6045bf;
case 0x6045c5:c.instructions+=35;goto B6045c5;
case 0x6045cb:c.instructions+=34;goto B6045cb;
case 0x6045d1:c.instructions+=33;goto B6045d1;
case 0x6045d7:c.instructions+=32;goto B6045d7;
case 0x6045dd:c.instructions+=31;goto B6045dd;
case 0x6045e3:c.instructions+=30;goto B6045e3;
case 0x6045e8:c.instructions+=29;goto B6045e8;
case 0x6045ee:c.instructions+=28;goto B6045ee;
case 0x6045f4:c.instructions+=27;goto B6045f4;
case 0x6045fa:c.instructions+=26;goto B6045fa;
case 0x6045ff:c.instructions+=25;goto B6045ff;
case 0x604605:c.instructions+=24;goto B604605;
case 0x60460b:c.instructions+=23;goto B60460b;
case 0x604611:c.instructions+=22;goto B604611;
case 0x604617:c.instructions+=21;goto B604617;
case 0x60461e:c.instructions+=20;goto B60461e;
case 0x604621:c.instructions+=19;goto B604621;
case 0x604623:c.instructions+=18;goto B604623;
case 0x604629:c.instructions+=17;goto B604629;
case 0x60462b:c.instructions+=16;goto B60462b;
case 0x60462e:c.instructions+=15;goto B60462e;
case 0x604631:c.instructions+=14;goto B604631;
case 0x604634:c.instructions+=13;goto B604634;
case 0x60463a:c.instructions+=12;goto B60463a;
case 0x604640:c.instructions+=11;goto B604640;
case 0x604647:c.instructions+=10;goto B604647;
case 0x60464d:c.instructions+=9;goto B60464d;
case 0x604653:c.instructions+=8;goto B604653;
case 0x604659:c.instructions+=7;goto B604659;
case 0x60465f:c.instructions+=6;goto B60465f;
case 0x604665:c.instructions+=5;goto B604665;
case 0x604667:c.instructions+=4;goto B604667;
case 0x60466d:c.instructions+=3;goto B60466d;
case 0x604673:c.instructions+=2;goto B604673;
case 0x604679:c.instructions+=1;goto B604679;
case 0x60467e:goto L60467e;
case 0x604684:c.instructions+=2;goto B604684;
case 0x604689:c.instructions+=1;goto B604689;
case 0x604690:goto L604690;
case 0x604693:c.instructions+=4;goto B604693;
case 0x604695:c.instructions+=3;goto B604695;
case 0x604698:c.instructions+=2;goto B604698;
case 0x604699:c.instructions+=1;goto B604699;
case 0x60469b:goto L60469b;
case 0x60469e:c.instructions+=5;goto B60469e;
case 0x6046a1:c.instructions+=4;goto B6046a1;
case 0x6046a2:c.instructions+=3;goto B6046a2;
case 0x6046a4:c.instructions+=2;goto B6046a4;
case 0x6046aa:c.instructions+=1;goto B6046aa;
case 0x6046af:goto L6046af;
case 0x6046b5:c.instructions+=2;goto B6046b5;
case 0x6046bb:c.instructions+=1;goto B6046bb;
case 0x6046bd:goto L6046bd;
case 0x6046c3:c.instructions+=1;goto B6046c3;
case 0x6046c5:goto L6046c5;
case 0x6046cb:c.instructions+=1;goto B6046cb;
case 0x6046cd:goto L6046cd;
case 0x6046d2:c.instructions+=1;goto B6046d2;
case 0x6046d7:goto L6046d7;
case 0x6046da:c.instructions+=4;goto B6046da;
case 0x6046de:c.instructions+=3;goto B6046de;
case 0x6046e0:c.instructions+=2;goto B6046e0;
case 0x6046e5:c.instructions+=1;goto B6046e5;
case 0x6046e7:goto L6046e7;
case 0x6046e8:c.instructions+=2;goto B6046e8;
case 0x6046ea:c.instructions+=1;goto B6046ea;
case 0x6046ef:goto L6046ef;
case 0x6046f1:goto L6046f1;
case 0x6046f3:goto L6046f3;
case 0x6046f8:c.instructions+=1;goto B6046f8;
case 0x6046fe:goto L6046fe;
case 0x604704:c.instructions+=2;goto B604704;
case 0x60470a:c.instructions+=1;goto B60470a;
case 0x60470c:goto L60470c;
case 0x604712:c.instructions+=2;goto B604712;
case 0x604713:c.instructions+=1;goto B604713;
case 0x604718:goto L604718;
case 0x60471e:goto L60471e;
case 0x604720:c.instructions+=1;goto B604720;
case 0x604725:goto L604725;
case 0x604729:c.instructions+=8;goto B604729;
case 0x60472a:c.instructions+=7;goto B60472a;
case 0x60472c:c.instructions+=6;goto B60472c;
case 0x60472d:c.instructions+=5;goto B60472d;
case 0x604734:c.instructions+=4;goto B604734;
case 0x604735:c.instructions+=3;goto B604735;
case 0x604737:c.instructions+=2;goto B604737;
case 0x604738:c.instructions+=1;goto B604738;
case 0x604740:goto L604740;
case 0x604741:c.instructions+=13;goto B604741;
case 0x604743:c.instructions+=12;goto B604743;
case 0x604746:c.instructions+=11;goto B604746;
case 0x604749:c.instructions+=10;goto B604749;
case 0x60474c:c.instructions+=9;goto B60474c;
case 0x60474d:c.instructions+=8;goto B60474d;
case 0x604753:c.instructions+=7;goto B604753;
case 0x604754:c.instructions+=6;goto B604754;
case 0x604755:c.instructions+=5;goto B604755;
case 0x604757:c.instructions+=4;goto B604757;
case 0x60475b:c.instructions+=3;goto B60475b;
case 0x60475d:c.instructions+=2;goto B60475d;
case 0x604760:c.instructions+=1;goto B604760;
case 0x604766:goto L604766;
case 0x60476c:c.instructions+=45;goto B60476c;
case 0x60476f:c.instructions+=44;goto B60476f;
case 0x604772:c.instructions+=43;goto B604772;
case 0x604778:c.instructions+=42;goto B604778;
case 0x60477b:c.instructions+=41;goto B60477b;
case 0x604781:c.instructions+=40;goto B604781;
case 0x604785:c.instructions+=39;goto B604785;
case 0x604788:c.instructions+=38;goto B604788;
case 0x60478e:c.instructions+=37;goto B60478e;
case 0x604792:c.instructions+=36;goto B604792;
case 0x604798:c.instructions+=35;goto B604798;
case 0x60479e:c.instructions+=34;goto B60479e;
case 0x6047a2:c.instructions+=33;goto B6047a2;
case 0x6047a8:c.instructions+=32;goto B6047a8;
case 0x6047ae:c.instructions+=31;goto B6047ae;
case 0x6047b2:c.instructions+=30;goto B6047b2;
case 0x6047b8:c.instructions+=29;goto B6047b8;
case 0x6047be:c.instructions+=28;goto B6047be;
case 0x6047c2:c.instructions+=27;goto B6047c2;
case 0x6047c4:c.instructions+=26;goto B6047c4;
case 0x6047c8:c.instructions+=25;goto B6047c8;
case 0x6047ca:c.instructions+=24;goto B6047ca;
case 0x6047ce:c.instructions+=23;goto B6047ce;
case 0x6047d0:c.instructions+=22;goto B6047d0;
case 0x6047d4:c.instructions+=21;goto B6047d4;
case 0x6047d8:c.instructions+=20;goto B6047d8;
case 0x6047dc:c.instructions+=19;goto B6047dc;
case 0x6047e2:c.instructions+=18;goto B6047e2;
case 0x6047e4:c.instructions+=17;goto B6047e4;
case 0x6047e8:c.instructions+=16;goto B6047e8;
case 0x6047ec:c.instructions+=15;goto B6047ec;
case 0x6047f0:c.instructions+=14;goto B6047f0;
case 0x6047f2:c.instructions+=13;goto B6047f2;
case 0x6047f6:c.instructions+=12;goto B6047f6;
case 0x6047fa:c.instructions+=11;goto B6047fa;
case 0x6047fe:c.instructions+=10;goto B6047fe;
case 0x604800:c.instructions+=9;goto B604800;
case 0x604804:c.instructions+=8;goto B604804;
case 0x604808:c.instructions+=7;goto B604808;
case 0x60480a:c.instructions+=6;goto B60480a;
case 0x604810:c.instructions+=5;goto B604810;
case 0x604816:c.instructions+=4;goto B604816;
case 0x60481c:c.instructions+=3;goto B60481c;
case 0x604822:c.instructions+=2;goto B604822;
case 0x604824:c.instructions+=1;goto B604824;
case 0x60482a:goto L60482a;
case 0x604830:c.instructions+=3;goto B604830;
case 0x604836:c.instructions+=2;goto B604836;
case 0x604839:c.instructions+=1;goto B604839;
case 0x60483b:goto L60483b;
case 0x604841:c.instructions+=3;goto B604841;
case 0x604843:c.instructions+=2;goto B604843;
case 0x604846:c.instructions+=1;goto B604846;
case 0x604848:goto L604848;
case 0x60484e:c.instructions+=3;goto B60484e;
case 0x604850:c.instructions+=2;goto B604850;
case 0x604853:c.instructions+=1;goto B604853;
case 0x604855:goto L604855;
case 0x604858:c.instructions+=4;goto B604858;
case 0x60485e:c.instructions+=3;goto B60485e;
case 0x604864:c.instructions+=2;goto B604864;
case 0x60486a:c.instructions+=1;goto B60486a;
case 0x60486c:goto L60486c;
case 0x60486e:goto L60486e;
case 0x604871:c.instructions+=4;goto B604871;
case 0x604872:c.instructions+=3;goto B604872;
case 0x604878:c.instructions+=2;goto B604878;
case 0x604879:c.instructions+=1;goto B604879;
case 0x60487e:goto L60487e;
case 0x604884:c.instructions+=3;goto B604884;
case 0x604887:c.instructions+=2;goto B604887;
case 0x60488d:c.instructions+=1;goto B60488d;
case 0x60488f:goto L60488f;
case 0x604891:goto L604891;
case 0x604894:c.instructions+=3;goto B604894;
case 0x60489a:c.instructions+=2;goto B60489a;
case 0x60489b:c.instructions+=1;goto B60489b;
case 0x6048a0:goto L6048a0;
case 0x6048a6:c.instructions+=3;goto B6048a6;
case 0x6048a9:c.instructions+=2;goto B6048a9;
case 0x6048af:c.instructions+=1;goto B6048af;
case 0x6048b1:goto L6048b1;
case 0x6048b2:c.instructions+=2;goto B6048b2;
case 0x6048b5:c.instructions+=1;goto B6048b5;
case 0x6048b6:goto L6048b6;
case 0x6048b8:goto L6048b8;
case 0x6048bb:c.instructions+=2;goto B6048bb;
case 0x6048bd:c.instructions+=1;goto B6048bd;
case 0x6048bf:goto L6048bf;
case 0x6048c1:c.instructions+=4;goto B6048c1;
case 0x6048c7:c.instructions+=3;goto B6048c7;
case 0x6048c8:c.instructions+=2;goto B6048c8;
case 0x6048ca:c.instructions+=1;goto B6048ca;
case 0x6048cf:goto L6048cf;
case 0x6048d2:c.instructions+=2;goto B6048d2;
case 0x6048d4:c.instructions+=1;goto B6048d4;
case 0x6048d6:goto L6048d6;
case 0x6048d7:c.instructions+=2;goto B6048d7;
case 0x6048d9:c.instructions+=1;goto B6048d9;
case 0x6048de:goto L6048de;
case 0x6048e0:c.instructions+=1;goto B6048e0;
case 0x6048e2:goto L6048e2;
case 0x6048e4:c.instructions+=8;goto B6048e4;
case 0x6048e7:c.instructions+=7;goto B6048e7;
case 0x6048ed:c.instructions+=6;goto B6048ed;
case 0x6048f1:c.instructions+=5;goto B6048f1;
case 0x6048f2:c.instructions+=4;goto B6048f2;
case 0x6048f4:c.instructions+=3;goto B6048f4;
case 0x6048f8:c.instructions+=2;goto B6048f8;
case 0x6048fc:c.instructions+=1;goto B6048fc;
case 0x604901:goto L604901;
case 0x604903:c.instructions+=1;goto B604903;
case 0x604905:goto L604905;
case 0x604908:c.instructions+=8;goto B604908;
case 0x60490a:c.instructions+=7;goto B60490a;
case 0x604910:c.instructions+=6;goto B604910;
case 0x604914:c.instructions+=5;goto B604914;
case 0x604918:c.instructions+=4;goto B604918;
case 0x604919:c.instructions+=3;goto B604919;
case 0x60491d:c.instructions+=2;goto B60491d;
case 0x60491f:c.instructions+=1;goto B60491f;
case 0x604924:goto L604924;
case 0x604926:c.instructions+=1;goto B604926;
case 0x604928:goto L604928;
case 0x604932:goto L604932;
case 0x604938:c.instructions+=16;goto B604938;
case 0x60493e:c.instructions+=15;goto B60493e;
case 0x604941:c.instructions+=14;goto B604941;
case 0x604944:c.instructions+=13;goto B604944;
case 0x604947:c.instructions+=12;goto B604947;
case 0x604949:c.instructions+=11;goto B604949;
case 0x60494b:c.instructions+=10;goto B60494b;
case 0x60494d:c.instructions+=9;goto B60494d;
case 0x60494f:c.instructions+=8;goto B60494f;
case 0x604951:c.instructions+=7;goto B604951;
case 0x604953:c.instructions+=6;goto B604953;
case 0x604955:c.instructions+=5;goto B604955;
case 0x604957:c.instructions+=4;goto B604957;
case 0x60495d:c.instructions+=3;goto B60495d;
case 0x60495f:c.instructions+=2;goto B60495f;
case 0x604962:c.instructions+=1;goto B604962;
case 0x604964:goto L604964;
case 0x604969:c.instructions+=2;goto B604969;
case 0x60496b:c.instructions+=1;goto B60496b;
case 0x60496d:goto L60496d;
case 0x604977:c.instructions+=1;goto B604977;
case 0x604979:goto L604979;
case 0x60497c:c.instructions+=15;goto B60497c;
case 0x60497f:c.instructions+=14;goto B60497f;
case 0x604982:c.instructions+=13;goto B604982;
case 0x604985:c.instructions+=12;goto B604985;
case 0x604987:c.instructions+=11;goto B604987;
case 0x604989:c.instructions+=10;goto B604989;
case 0x60498b:c.instructions+=9;goto B60498b;
case 0x60498d:c.instructions+=8;goto B60498d;
case 0x60498f:c.instructions+=7;goto B60498f;
case 0x604991:c.instructions+=6;goto B604991;
case 0x604993:c.instructions+=5;goto B604993;
case 0x604995:c.instructions+=4;goto B604995;
case 0x60499b:c.instructions+=3;goto B60499b;
case 0x60499d:c.instructions+=2;goto B60499d;
case 0x6049a0:c.instructions+=1;goto B6049a0;
case 0x6049a2:goto L6049a2;
case 0x6049a7:c.instructions+=5;goto B6049a7;
case 0x6049a8:c.instructions+=4;goto B6049a8;
case 0x6049ad:c.instructions+=3;goto B6049ad;
case 0x6049af:c.instructions+=2;goto B6049af;
case 0x6049b1:c.instructions+=1;goto B6049b1;
case 0x6049b3:goto L6049b3;
case 0x6049b6:c.instructions+=2;goto B6049b6;
case 0x6049b8:c.instructions+=1;goto B6049b8;
case 0x6049ba:goto L6049ba;
case 0x6049bb:c.instructions+=1;goto B6049bb;
case 0x6049c0:goto L6049c0;
case 0x6049c2:c.instructions+=1;goto B6049c2;
case 0x6049c7:goto L6049c7;
case 0x6049c9:c.instructions+=1;goto B6049c9;
case 0x6049ce:goto L6049ce;
case 0x6049d1:c.instructions+=2;goto B6049d1;
case 0x6049d3:c.instructions+=1;goto B6049d3;
case 0x6049d9:goto L6049d9;
case 0x6049dc:c.instructions+=4;goto B6049dc;
case 0x6049df:c.instructions+=3;goto B6049df;
case 0x6049e5:c.instructions+=2;goto B6049e5;
case 0x6049e9:c.instructions+=1;goto B6049e9;
case 0x6049eb:goto L6049eb;
case 0x6049ee:c.instructions+=1;goto B6049ee;
case 0x6049f0:goto L6049f0;
case 0x6049f4:c.instructions+=1;goto B6049f4;
case 0x6049f6:goto L6049f6;
case 0x6049f9:c.instructions+=1;goto B6049f9;
case 0x6049fb:goto L6049fb;
case 0x604a00:c.instructions+=8;goto B604a00;
case 0x604a06:c.instructions+=7;goto B604a06;
case 0x604a0a:c.instructions+=6;goto B604a0a;
case 0x604a0e:c.instructions+=5;goto B604a0e;
case 0x604a14:c.instructions+=4;goto B604a14;
case 0x604a1a:c.instructions+=3;goto B604a1a;
case 0x604a1c:c.instructions+=2;goto B604a1c;
case 0x604a1f:c.instructions+=1;goto B604a1f;
case 0x604a21:goto L604a21;
case 0x604a23:goto L604a23;
case 0x604a25:c.instructions+=1;goto B604a25;
case 0x604a27:goto L604a27;
case 0x604a29:c.instructions+=2;goto B604a29;
case 0x604a2b:c.instructions+=1;goto B604a2b;
case 0x604a30:goto L604a30;
case 0x604a36:c.instructions+=3;goto B604a36;
case 0x604a39:c.instructions+=2;goto B604a39;
case 0x604a3f:c.instructions+=1;goto B604a3f;
case 0x604a41:goto L604a41;
case 0x604a42:c.instructions+=2;goto B604a42;
case 0x604a45:c.instructions+=1;goto B604a45;
case 0x604a46:goto L604a46;
case 0x604a4c:goto L604a4c;
case 0x604a52:c.instructions+=3;goto B604a52;
case 0x604a55:c.instructions+=2;goto B604a55;
case 0x604a59:c.instructions+=1;goto B604a59;
case 0x604a5e:goto L604a5e;
case 0x604a61:c.instructions+=7;goto B604a61;
case 0x604a65:c.instructions+=6;goto B604a65;
case 0x604a6a:c.instructions+=5;goto B604a6a;
case 0x604a6e:c.instructions+=4;goto B604a6e;
case 0x604a72:c.instructions+=3;goto B604a72;
case 0x604a76:c.instructions+=2;goto B604a76;
case 0x604a77:c.instructions+=1;goto B604a77;
case 0x604a7c:goto L604a7c;
case 0x604a80:c.instructions+=3;goto B604a80;
case 0x604a82:c.instructions+=2;goto B604a82;
case 0x604a85:c.instructions+=1;goto B604a85;
case 0x604a87:goto L604a87;
case 0x604a8c:c.instructions+=1;goto B604a8c;
case 0x604a8e:goto L604a8e;
case 0x604a91:c.instructions+=1;goto B604a91;
case 0x604a96:goto L604a96;
case 0x604a98:c.instructions+=4;goto B604a98;
case 0x604a9e:c.instructions+=3;goto B604a9e;
case 0x604aa0:c.instructions+=2;goto B604aa0;
case 0x604aa3:c.instructions+=1;goto B604aa3;
case 0x604aa5:goto L604aa5;
case 0x604aab:c.instructions+=4;goto B604aab;
case 0x604ab0:c.instructions+=3;goto B604ab0;
case 0x604ab1:c.instructions+=2;goto B604ab1;
case 0x604ab7:c.instructions+=1;goto B604ab7;
case 0x604abc:goto L604abc;
case 0x604abf:c.instructions+=2;goto B604abf;
case 0x604ac2:c.instructions+=1;goto B604ac2;
case 0x604ac8:goto L604ac8;
case 0x604acb:c.instructions+=1;goto B604acb;
case 0x604ad1:goto L604ad1;
case 0x604ad5:c.instructions+=2;goto B604ad5;
case 0x604ad7:c.instructions+=1;goto B604ad7;
case 0x604add:goto L604add;
case 0x604ae0:c.instructions+=3;goto B604ae0;
case 0x604ae6:c.instructions+=2;goto B604ae6;
case 0x604ae8:c.instructions+=1;goto B604ae8;
case 0x604aee:goto L604aee;
case 0x604aef:c.instructions+=2;goto B604aef;
case 0x604af4:c.instructions+=1;goto B604af4;
case 0x604af9:goto L604af9;
case 0x604afd:c.instructions+=3;goto B604afd;
case 0x604aff:c.instructions+=2;goto B604aff;
case 0x604b02:c.instructions+=1;goto B604b02;
case 0x604b08:goto L604b08;
case 0x604b09:c.instructions+=2;goto B604b09;
case 0x604b0e:c.instructions+=1;goto B604b0e;
case 0x604b13:goto L604b13;
case 0x604b17:c.instructions+=10;goto B604b17;
case 0x604b1b:c.instructions+=9;goto B604b1b;
case 0x604b1d:c.instructions+=8;goto B604b1d;
case 0x604b21:c.instructions+=7;goto B604b21;
case 0x604b22:c.instructions+=6;goto B604b22;
case 0x604b26:c.instructions+=5;goto B604b26;
case 0x604b27:c.instructions+=4;goto B604b27;
case 0x604b28:c.instructions+=3;goto B604b28;
case 0x604b2a:c.instructions+=2;goto B604b2a;
case 0x604b32:c.instructions+=1;goto B604b32;
case 0x604b37:goto L604b37;
case 0x604b39:c.instructions+=7;goto B604b39;
case 0x604b3d:c.instructions+=6;goto B604b3d;
case 0x604b43:c.instructions+=5;goto B604b43;
case 0x604b49:c.instructions+=4;goto B604b49;
case 0x604b4b:c.instructions+=3;goto B604b4b;
case 0x604b51:c.instructions+=2;goto B604b51;
case 0x604b54:c.instructions+=1;goto B604b54;
case 0x604b56:goto L604b56;
case 0x604b5c:c.instructions+=1;goto B604b5c;
case 0x604b5e:goto L604b5e;
case 0x604b64:c.instructions+=2;goto B604b64;
case 0x604b68:c.instructions+=1;goto B604b68;
case 0x604b6a:goto L604b6a;
case 0x604b6b:c.instructions+=3;goto B604b6b;
case 0x604b71:c.instructions+=2;goto B604b71;
case 0x604b76:c.instructions+=1;goto B604b76;
case 0x604b7b:goto L604b7b;
case 0x604b7f:c.instructions+=3;goto B604b7f;
case 0x604b81:c.instructions+=2;goto B604b81;
case 0x604b84:c.instructions+=1;goto B604b84;
case 0x604b8a:goto L604b8a;
case 0x604b8b:c.instructions+=2;goto B604b8b;
case 0x604b90:c.instructions+=1;goto B604b90;
case 0x604b95:goto L604b95;
case 0x604b99:c.instructions+=3;goto B604b99;
case 0x604b9b:c.instructions+=2;goto B604b9b;
case 0x604b9e:c.instructions+=1;goto B604b9e;
case 0x604ba4:goto L604ba4;
case 0x604ba6:c.instructions+=1;goto B604ba6;
case 0x604bab:goto L604bab;
case 0x604bad:c.instructions+=1;goto B604bad;
case 0x604bb3:goto L604bb3;
case 0x604bb8:c.instructions+=2;goto B604bb8;
case 0x604bba:c.instructions+=1;goto B604bba;
case 0x604bc0:goto L604bc0;
case 0x604bc5:c.instructions+=2;goto B604bc5;
case 0x604bc7:c.instructions+=1;goto B604bc7;
case 0x604bcd:goto L604bcd;
case 0x604bd3:c.instructions+=2;goto B604bd3;
case 0x604bd5:c.instructions+=1;goto B604bd5;
case 0x604bd7:goto L604bd7;
case 0x604bdc:c.instructions+=1;goto B604bdc;
case 0x604bde:goto L604bde;
case 0x604be3:c.instructions+=8;goto B604be3;
case 0x604be9:c.instructions+=7;goto B604be9;
case 0x604bed:c.instructions+=6;goto B604bed;
case 0x604bf1:c.instructions+=5;goto B604bf1;
case 0x604bf7:c.instructions+=4;goto B604bf7;
case 0x604bfd:c.instructions+=3;goto B604bfd;
case 0x604bff:c.instructions+=2;goto B604bff;
case 0x604c02:c.instructions+=1;goto B604c02;
case 0x604c08:goto L604c08;
case 0x604c0e:c.instructions+=2;goto B604c0e;
case 0x604c11:c.instructions+=1;goto B604c11;
case 0x604c17:goto L604c17;
case 0x604c1d:c.instructions+=2;goto B604c1d;
case 0x604c20:c.instructions+=1;goto B604c20;
case 0x604c26:goto L604c26;
case 0x604c29:c.instructions+=4;goto B604c29;
case 0x604c2f:c.instructions+=3;goto B604c2f;
case 0x604c31:c.instructions+=2;goto B604c31;
case 0x604c34:c.instructions+=1;goto B604c34;
case 0x604c3a:goto L604c3a;
case 0x604c3d:c.instructions+=3;goto B604c3d;
case 0x604c43:c.instructions+=2;goto B604c43;
case 0x604c45:c.instructions+=1;goto B604c45;
case 0x604c47:goto L604c47;
case 0x604c49:c.instructions+=2;goto B604c49;
case 0x604c4b:c.instructions+=1;goto B604c4b;
case 0x604c50:goto L604c50;
case 0x604c56:goto L604c56;
case 0x604c58:c.instructions+=2;goto B604c58;
case 0x604c5a:c.instructions+=1;goto B604c5a;
case 0x604c5c:goto L604c5c;
case 0x604c60:goto L604c60;
case 0x604c67:c.instructions+=4;goto B604c67;
case 0x604c6a:c.instructions+=3;goto B604c6a;
case 0x604c70:c.instructions+=2;goto B604c70;
case 0x604c72:c.instructions+=1;goto B604c72;
case 0x604c78:goto L604c78;
case 0x604c79:c.instructions+=2;goto B604c79;
case 0x604c7b:c.instructions+=1;goto B604c7b;
case 0x604c7d:goto L604c7d;
case 0x604c82:c.instructions+=11;goto B604c82;
case 0x604c88:c.instructions+=10;goto B604c88;
case 0x604c89:c.instructions+=9;goto B604c89;
case 0x604c8f:c.instructions+=8;goto B604c8f;
case 0x604c95:c.instructions+=7;goto B604c95;
case 0x604c9a:c.instructions+=6;goto B604c9a;
case 0x604c9f:c.instructions+=5;goto B604c9f;
case 0x604ca0:c.instructions+=4;goto B604ca0;
case 0x604ca6:c.instructions+=3;goto B604ca6;
case 0x604cac:c.instructions+=2;goto B604cac;
case 0x604cad:c.instructions+=1;goto B604cad;
case 0x604cb2:goto L604cb2;
case 0x604cb8:c.instructions+=2;goto B604cb8;
case 0x604cbb:c.instructions+=1;goto B604cbb;
case 0x604cbd:goto L604cbd;
case 0x604cbf:c.instructions+=3;goto B604cbf;
case 0x604cc1:c.instructions+=2;goto B604cc1;
case 0x604cc3:c.instructions+=1;goto B604cc3;
case 0x604cc8:goto L604cc8;
case 0x604ccb:c.instructions+=5;goto B604ccb;
case 0x604cce:c.instructions+=4;goto B604cce;
case 0x604ccf:c.instructions+=3;goto B604ccf;
case 0x604cd5:c.instructions+=2;goto B604cd5;
case 0x604cdb:c.instructions+=1;goto B604cdb;
case 0x604ce0:goto L604ce0;
case 0x604ce3:c.instructions+=5;goto B604ce3;
case 0x604cea:c.instructions+=4;goto B604cea;
case 0x604cf1:c.instructions+=3;goto B604cf1;
case 0x604cf8:c.instructions+=2;goto B604cf8;
case 0x604d02:c.instructions+=1;goto B604d02;
case 0x604d04:goto L604d04;
case 0x604d07:c.instructions+=2;goto B604d07;
case 0x604d0d:c.instructions+=1;goto B604d0d;
case 0x604d13:goto L604d13;
case 0x604d16:c.instructions+=2;goto B604d16;
case 0x604d19:c.instructions+=1;goto B604d19;
case 0x604d1f:goto L604d1f;
case 0x604d22:c.instructions+=4;goto B604d22;
case 0x604d28:c.instructions+=3;goto B604d28;
case 0x604d2a:c.instructions+=2;goto B604d2a;
case 0x604d2d:c.instructions+=1;goto B604d2d;
case 0x604d2f:goto L604d2f;
case 0x604d35:c.instructions+=4;goto B604d35;
case 0x604d38:c.instructions+=3;goto B604d38;
case 0x604d3a:c.instructions+=2;goto B604d3a;
case 0x604d3d:c.instructions+=1;goto B604d3d;
case 0x604d3f:goto L604d3f;
case 0x604d42:c.instructions+=1;goto B604d42;
case 0x604d48:goto L604d48;
case 0x604d4b:c.instructions+=1;goto B604d4b;
case 0x604d51:goto L604d51;
case 0x604d55:c.instructions+=1;goto B604d55;
case 0x604d5b:goto L604d5b;
case 0x604d61:c.instructions+=9;goto B604d61;
case 0x604d67:c.instructions+=8;goto B604d67;
case 0x604d69:c.instructions+=7;goto B604d69;
case 0x604d6d:c.instructions+=6;goto B604d6d;
case 0x604d71:c.instructions+=5;goto B604d71;
case 0x604d77:c.instructions+=4;goto B604d77;
case 0x604d7d:c.instructions+=3;goto B604d7d;
case 0x604d7f:c.instructions+=2;goto B604d7f;
case 0x604d82:c.instructions+=1;goto B604d82;
case 0x604d88:goto L604d88;
case 0x604d8a:c.instructions+=2;goto B604d8a;
case 0x604d8c:c.instructions+=1;goto B604d8c;
case 0x604d91:goto L604d91;
case 0x604d96:c.instructions+=2;goto B604d96;
case 0x604d98:c.instructions+=1;goto B604d98;
case 0x604d9e:goto L604d9e;
case 0x604da3:c.instructions+=2;goto B604da3;
case 0x604da5:c.instructions+=1;goto B604da5;
case 0x604dab:goto L604dab;
case 0x604db1:c.instructions+=2;goto B604db1;
case 0x604db3:c.instructions+=1;goto B604db3;
case 0x604db5:goto L604db5;
case 0x604dba:c.instructions+=1;goto B604dba;
case 0x604dbc:goto L604dbc;
case 0x604dc2:c.instructions+=8;goto B604dc2;
case 0x604dc4:c.instructions+=7;goto B604dc4;
case 0x604dc8:c.instructions+=6;goto B604dc8;
case 0x604dcc:c.instructions+=5;goto B604dcc;
case 0x604dd2:c.instructions+=4;goto B604dd2;
case 0x604dd8:c.instructions+=3;goto B604dd8;
case 0x604dda:c.instructions+=2;goto B604dda;
case 0x604ddd:c.instructions+=1;goto B604ddd;
case 0x604de3:goto L604de3;
case 0x604de8:c.instructions+=2;goto B604de8;
case 0x604deb:c.instructions+=1;goto B604deb;
case 0x604df1:goto L604df1;
case 0x604df7:c.instructions+=2;goto B604df7;
case 0x604dfa:c.instructions+=1;goto B604dfa;
case 0x604e00:goto L604e00;
case 0x604e03:c.instructions+=4;goto B604e03;
case 0x604e09:c.instructions+=3;goto B604e09;
case 0x604e0b:c.instructions+=2;goto B604e0b;
case 0x604e0e:c.instructions+=1;goto B604e0e;
case 0x604e14:goto L604e14;
case 0x604e17:c.instructions+=3;goto B604e17;
case 0x604e1d:c.instructions+=2;goto B604e1d;
case 0x604e1f:c.instructions+=1;goto B604e1f;
case 0x604e21:goto L604e21;
case 0x604e23:c.instructions+=2;goto B604e23;
case 0x604e25:c.instructions+=1;goto B604e25;
case 0x604e2a:goto L604e2a;
case 0x604e30:goto L604e30;
case 0x604e32:c.instructions+=2;goto B604e32;
case 0x604e34:c.instructions+=1;goto B604e34;
case 0x604e3a:goto L604e3a;
case 0x604e40:goto L604e40;
case 0x604e47:c.instructions+=4;goto B604e47;
case 0x604e4a:c.instructions+=3;goto B604e4a;
case 0x604e50:c.instructions+=2;goto B604e50;
case 0x604e52:c.instructions+=1;goto B604e52;
case 0x604e58:goto L604e58;
case 0x604e59:c.instructions+=2;goto B604e59;
case 0x604e5b:c.instructions+=1;goto B604e5b;
case 0x604e5d:goto L604e5d;
case 0x604e62:goto L604e62;
case 0x604e68:c.instructions+=5;goto B604e68;
case 0x604e6e:c.instructions+=4;goto B604e6e;
case 0x604e74:c.instructions+=3;goto B604e74;
case 0x604e76:c.instructions+=2;goto B604e76;
case 0x604e79:c.instructions+=1;goto B604e79;
case 0x604e7f:goto L604e7f;
case 0x604e81:c.instructions+=2;goto B604e81;
case 0x604e83:c.instructions+=1;goto B604e83;
case 0x604e88:goto L604e88;
case 0x604e8a:c.instructions+=7;goto B604e8a;
case 0x604e8e:c.instructions+=6;goto B604e8e;
case 0x604e8f:c.instructions+=5;goto B604e8f;
case 0x604e93:c.instructions+=4;goto B604e93;
case 0x604e94:c.instructions+=3;goto B604e94;
case 0x604e99:c.instructions+=2;goto B604e99;
case 0x604e9b:c.instructions+=1;goto B604e9b;
case 0x604ea0:goto L604ea0;
case 0x604ea2:c.instructions+=5;goto B604ea2;
case 0x604ea6:c.instructions+=4;goto B604ea6;
case 0x604eac:c.instructions+=3;goto B604eac;
case 0x604eae:c.instructions+=2;goto B604eae;
case 0x604eb1:c.instructions+=1;goto B604eb1;
case 0x604eb7:goto L604eb7;
case 0x604ebc:c.instructions+=2;goto B604ebc;
case 0x604ebe:c.instructions+=1;goto B604ebe;
case 0x604ec4:goto L604ec4;
case 0x604ec9:c.instructions+=2;goto B604ec9;
case 0x604ecb:c.instructions+=1;goto B604ecb;
case 0x604ed1:goto L604ed1;
case 0x604ed7:c.instructions+=2;goto B604ed7;
case 0x604ed9:c.instructions+=1;goto B604ed9;
case 0x604edb:goto L604edb;
case 0x604ee0:c.instructions+=1;goto B604ee0;
case 0x604ee2:goto L604ee2;
case 0x604ee8:c.instructions+=8;goto B604ee8;
case 0x604eea:c.instructions+=7;goto B604eea;
case 0x604eee:c.instructions+=6;goto B604eee;
case 0x604ef2:c.instructions+=5;goto B604ef2;
case 0x604ef8:c.instructions+=4;goto B604ef8;
case 0x604efe:c.instructions+=3;goto B604efe;
case 0x604f00:c.instructions+=2;goto B604f00;
case 0x604f03:c.instructions+=1;goto B604f03;
case 0x604f09:goto L604f09;
case 0x604f0e:c.instructions+=2;goto B604f0e;
case 0x604f11:c.instructions+=1;goto B604f11;
case 0x604f17:goto L604f17;
case 0x604f1d:c.instructions+=2;goto B604f1d;
case 0x604f20:c.instructions+=1;goto B604f20;
case 0x604f26:goto L604f26;
case 0x604f29:c.instructions+=4;goto B604f29;
case 0x604f2f:c.instructions+=3;goto B604f2f;
case 0x604f31:c.instructions+=2;goto B604f31;
case 0x604f34:c.instructions+=1;goto B604f34;
case 0x604f3a:goto L604f3a;
case 0x604f3d:c.instructions+=3;goto B604f3d;
case 0x604f43:c.instructions+=2;goto B604f43;
case 0x604f45:c.instructions+=1;goto B604f45;
case 0x604f47:goto L604f47;
case 0x604f49:c.instructions+=2;goto B604f49;
case 0x604f4b:c.instructions+=1;goto B604f4b;
case 0x604f50:goto L604f50;
case 0x604f56:goto L604f56;
case 0x604f58:c.instructions+=2;goto B604f58;
case 0x604f5a:c.instructions+=1;goto B604f5a;
case 0x604f5c:goto L604f5c;
case 0x604f60:goto L604f60;
case 0x604f67:c.instructions+=4;goto B604f67;
case 0x604f6a:c.instructions+=3;goto B604f6a;
case 0x604f70:c.instructions+=2;goto B604f70;
case 0x604f72:c.instructions+=1;goto B604f72;
case 0x604f78:goto L604f78;
case 0x604f79:c.instructions+=2;goto B604f79;
case 0x604f7b:c.instructions+=1;goto B604f7b;
case 0x604f7d:goto L604f7d;
case 0x604f82:c.instructions+=11;goto B604f82;
case 0x604f88:c.instructions+=10;goto B604f88;
case 0x604f89:c.instructions+=9;goto B604f89;
case 0x604f8f:c.instructions+=8;goto B604f8f;
case 0x604f95:c.instructions+=7;goto B604f95;
case 0x604f9a:c.instructions+=6;goto B604f9a;
case 0x604f9f:c.instructions+=5;goto B604f9f;
case 0x604fa0:c.instructions+=4;goto B604fa0;
case 0x604fa6:c.instructions+=3;goto B604fa6;
case 0x604fac:c.instructions+=2;goto B604fac;
case 0x604fad:c.instructions+=1;goto B604fad;
case 0x604fb2:goto L604fb2;
case 0x604fb8:c.instructions+=2;goto B604fb8;
case 0x604fbb:c.instructions+=1;goto B604fbb;
case 0x604fbd:goto L604fbd;
case 0x604fbf:c.instructions+=3;goto B604fbf;
case 0x604fc1:c.instructions+=2;goto B604fc1;
case 0x604fc3:c.instructions+=1;goto B604fc3;
case 0x604fc8:goto L604fc8;
case 0x604fcb:c.instructions+=2;goto B604fcb;
case 0x604fcc:c.instructions+=1;goto B604fcc;
case 0x604fd1:goto L604fd1;
case 0x604fd4:c.instructions+=4;goto B604fd4;
case 0x604fdb:c.instructions+=3;goto B604fdb;
case 0x604fe2:c.instructions+=2;goto B604fe2;
case 0x604fe9:c.instructions+=1;goto B604fe9;
case 0x604ff3:goto L604ff3;
case 0x604ff7:c.instructions+=3;goto B604ff7;
case 0x604ffd:c.instructions+=2;goto B604ffd;
case 0x604fff:c.instructions+=1;goto B604fff;
default:missing_instruction(c.pc);}
B604002:L604002:{c.instructions+=3;NFSU2_TR(0x604002);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B604005:{NFSU2_TR(0x604005);
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
B604007:{NFSU2_TR(0x604007);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L604072;}}
}
B604009:L604009:{c.instructions+=1;NFSU2_TR(0x604009);
__builtin_memmove((R+16),(R+16),4);
}
B604010:L604010:{c.instructions+=5;NFSU2_TR(0x604010);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x851044ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B604017:{NFSU2_TR(0x604017);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60401a:{NFSU2_TR(0x60401a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60401b:{NFSU2_TR(0x60401b);
__builtin_memmove((R+4),gp(0x890080),4);
}
B604021:{NFSU2_TR(0x604021);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604026ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B604026:L604026:{c.instructions+=3;NFSU2_TR(0x604026);
__builtin_memmove((R+24),(R+0),4);
}
B604028:{NFSU2_TR(0x604028);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60402a:{NFSU2_TR(0x60402a);
if(r1(R+518)){{goto L60403c;}}
}
B60402c:L60402c:{c.instructions+=3;NFSU2_TR(0x60402c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60402f:{NFSU2_TR(0x60402f);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B604033:{NFSU2_TR(0x604033);
if(r1(R+518)){{goto L60404f;}}
}
B604035:L604035:{c.instructions+=2;NFSU2_TR(0x604035);
__builtin_memmove((R+4),(R+24),4);
}
B604037:{NFSU2_TR(0x604037);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60403cull));
TAIL_STATIC(0x5f6e20u,5f6);
}
B60403c:L60403c:{c.instructions+=3;NFSU2_TR(0x60403c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B60403d:{NFSU2_TR(0x60403d);
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
B60403f:{NFSU2_TR(0x60403f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x604010u);}goto L604010;}}
}
B604041:L604041:{c.instructions+=7;NFSU2_TR(0x604041);
w4(R+0,u32(0x1ull));
}
B604046:{NFSU2_TR(0x604046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B604047:{NFSU2_TR(0x604047);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B604048:{NFSU2_TR(0x604048);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B604049:{NFSU2_TR(0x604049);
__builtin_memmove((R+16),(R+20),4);
}
B60404b:{NFSU2_TR(0x60404b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60404c:{NFSU2_TR(0x60404c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60404f:L60404f:{c.instructions+=8;NFSU2_TR(0x60404f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B604053:{NFSU2_TR(0x604053);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604055:{NFSU2_TR(0x604055);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604056:{NFSU2_TR(0x604056);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604058:{NFSU2_TR(0x604058);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60405c:{NFSU2_TR(0x60405c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60405d:{NFSU2_TR(0x60405d);
__builtin_memmove((R+4),(R+24),4);
}
B60405f:{NFSU2_TR(0x60405f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604064ull));
TAIL_STATIC(0x5fbd60u,5fb);
}
B604064:L604064:{c.instructions+=3;NFSU2_TR(0x604064);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B604067:{NFSU2_TR(0x604067);
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
B604069:{NFSU2_TR(0x604069);
if(r1(R+518)){{goto L604072;}}
}
B60406b:L60406b:{c.instructions+=2;NFSU2_TR(0x60406b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60406d:{NFSU2_TR(0x60406d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604072ull));
TAIL_STATIC(0x5fa820u,5fa);
}
B604072:L604072:{c.instructions+=7;NFSU2_TR(0x604072);
w4(R+0,u32(0x1ull));
}
B604077:{NFSU2_TR(0x604077);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B604078:{NFSU2_TR(0x604078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B604079:{NFSU2_TR(0x604079);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60407a:{NFSU2_TR(0x60407a);
__builtin_memmove((R+16),(R+20),4);
}
B60407c:{NFSU2_TR(0x60407c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60407d:{NFSU2_TR(0x60407d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B604080:L604080:{c.instructions+=4;NFSU2_TR(0x604080);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B604083:{NFSU2_TR(0x604083);
w4(R+28,u32(0x5ull));
}
B604088:{NFSU2_TR(0x604088);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60408a:{NFSU2_TR(0x60408a);
if(r1(R+518)){{goto L604096;}}
}
B60408c:L60408c:{c.instructions+=2;NFSU2_TR(0x60408c);
w4(R+4,u32(0x827e88ull));
}
B604091:{NFSU2_TR(0x604091);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604096ull));
TAIL_STATIC(0x43b640u,43b);
}
B604096:L604096:{c.instructions+=1;NFSU2_TR(0x604096);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60409bull));
TAIL_STATIC(0x4a4b60u,4a4);
}
B60409b:L60409b:{c.instructions+=2;NFSU2_TR(0x60409b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60409d:{NFSU2_TR(0x60409d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6040a7;}}
}
B60409f:L60409f:{c.instructions+=2;NFSU2_TR(0x60409f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6040a2:{NFSU2_TR(0x6040a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6040a7ull));
TAIL_STATIC(0x4a46b0u,4a4);
}
B6040a7:L6040a7:{c.instructions+=2;NFSU2_TR(0x6040a7);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B6040aa:{NFSU2_TR(0x6040aa);
if(r1(R+518)){{goto L6040b1;}}
}
B6040ac:L6040ac:{c.instructions+=1;NFSU2_TR(0x6040ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6040b1ull));
TAIL_STATIC(0x57c390u,57c);
}
B6040b1:L6040b1:{c.instructions+=7;NFSU2_TR(0x6040b1);
w4(R+0,u32(0x1ull));
}
B6040b6:{NFSU2_TR(0x6040b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6040b7:{NFSU2_TR(0x6040b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6040b8:{NFSU2_TR(0x6040b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6040b9:{NFSU2_TR(0x6040b9);
__builtin_memmove((R+16),(R+20),4);
}
B6040bb:{NFSU2_TR(0x6040bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6040bc:{NFSU2_TR(0x6040bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6040bf:L6040bf:{c.instructions+=2;NFSU2_TR(0x6040bf);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B6040c3:{NFSU2_TR(0x6040c3);
if(r1(R+518)){{goto L6040f0;}}
}
B6040c5:L6040c5:{c.instructions+=2;NFSU2_TR(0x6040c5);
u8 U[14];
__builtin_memmove((U+6),gp(0x89e7b0),4);
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
B6040cc:{NFSU2_TR(0x6040cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6040f0;}}
}
B6040ce:L6040ce:{c.instructions+=2;NFSU2_TR(0x6040ce);
w4(R+4,u32(0x827e88ull));
}
B6040d3:{NFSU2_TR(0x6040d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6040d8ull));
TAIL_STATIC(0x435950u,435);
}
B6040d8:L6040d8:{c.instructions+=2;NFSU2_TR(0x6040d8);
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
B6040da:{NFSU2_TR(0x6040da);
if(r1(R+518)){{goto L6040f0;}}
}
B6040dc:L6040dc:{c.instructions+=3;NFSU2_TR(0x6040dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6040de:{NFSU2_TR(0x6040de);
__builtin_memmove((R+4),(R+24),4);
}
B6040e0:{NFSU2_TR(0x6040e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6040e5ull));
TAIL_STATIC(0x603630u,603);
}
B6040e5:L6040e5:{c.instructions+=4;NFSU2_TR(0x6040e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6040e7:{NFSU2_TR(0x6040e7);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6040e9:{NFSU2_TR(0x6040e9);
__builtin_memmove((R+4),(R+24),4);
}
B6040eb:{NFSU2_TR(0x6040eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6040f0ull));
TAIL_STATIC(0x601020u,601);
}
B6040f0:L6040f0:{c.instructions+=7;NFSU2_TR(0x6040f0);
w4(R+0,u32(0x1ull));
}
B6040f5:{NFSU2_TR(0x6040f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6040f6:{NFSU2_TR(0x6040f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6040f7:{NFSU2_TR(0x6040f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6040f8:{NFSU2_TR(0x6040f8);
__builtin_memmove((R+16),(R+20),4);
}
B6040fa:{NFSU2_TR(0x6040fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6040fb:{NFSU2_TR(0x6040fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6040fe:L6040fe:{c.instructions+=3;NFSU2_TR(0x6040fe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604100:{NFSU2_TR(0x604100);
__builtin_memmove((R+4),(R+24),4);
}
B604102:{NFSU2_TR(0x604102);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604107ull));
TAIL_STATIC(0x603630u,603);
}
B604107:L604107:{c.instructions+=7;NFSU2_TR(0x604107);
w4(R+0,u32(0x1ull));
}
B60410c:{NFSU2_TR(0x60410c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60410d:{NFSU2_TR(0x60410d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60410e:{NFSU2_TR(0x60410e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60410f:{NFSU2_TR(0x60410f);
__builtin_memmove((R+16),(R+20),4);
}
B604111:{NFSU2_TR(0x604111);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B604112:{NFSU2_TR(0x604112);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B604115:L604115:{c.instructions+=2;NFSU2_TR(0x604115);
w4(R+4,u32(0x827e88ull));
}
B60411a:{NFSU2_TR(0x60411a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60411full));
TAIL_STATIC(0x43b640u,43b);
}
B60411f:L60411f:{c.instructions+=2;NFSU2_TR(0x60411f);
__builtin_memmove((R+4),(R+24),4);
}
B604121:{NFSU2_TR(0x604121);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604126ull));
TAIL_STATIC(0x603de0u,603);
}
B604126:L604126:{c.instructions+=7;NFSU2_TR(0x604126);
w4(R+0,u32(0x1ull));
}
B60412b:{NFSU2_TR(0x60412b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60412c:{NFSU2_TR(0x60412c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60412d:{NFSU2_TR(0x60412d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60412e:{NFSU2_TR(0x60412e);
__builtin_memmove((R+16),(R+20),4);
}
B604130:{NFSU2_TR(0x604130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B604131:{NFSU2_TR(0x604131);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B604134:L604134:{c.instructions+=2;NFSU2_TR(0x604134);
w4(R+4,u32(0x827e88ull));
}
B604139:{NFSU2_TR(0x604139);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60413eull));
TAIL_STATIC(0x43b640u,43b);
}
B60413e:L60413e:{c.instructions+=3;NFSU2_TR(0x60413e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604140:{NFSU2_TR(0x604140);
__builtin_memmove((R+4),(R+24),4);
}
B604142:{NFSU2_TR(0x604142);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604147ull));
TAIL_STATIC(0x603630u,603);
}
B604147:L604147:{c.instructions+=4;NFSU2_TR(0x604147);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604149:{NFSU2_TR(0x604149);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60414b:{NFSU2_TR(0x60414b);
__builtin_memmove((R+4),(R+24),4);
}
B60414d:{NFSU2_TR(0x60414d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604152ull));
TAIL_STATIC(0x601020u,601);
}
B604152:L604152:{c.instructions+=7;NFSU2_TR(0x604152);
w4(R+0,u32(0x1ull));
}
B604157:{NFSU2_TR(0x604157);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B604158:{NFSU2_TR(0x604158);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B604159:{NFSU2_TR(0x604159);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60415a:{NFSU2_TR(0x60415a);
__builtin_memmove((R+16),(R+20),4);
}
B60415c:{NFSU2_TR(0x60415c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60415d:{NFSU2_TR(0x60415d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B604160:L604160:{c.instructions+=2;NFSU2_TR(0x604160);
w4(R+4,u32(0x827e88ull));
}
B604165:{NFSU2_TR(0x604165);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60416aull));
TAIL_STATIC(0x43b640u,43b);
}
B60416a:L60416a:{c.instructions+=3;NFSU2_TR(0x60416a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60416c:{NFSU2_TR(0x60416c);
__builtin_memmove((R+4),(R+24),4);
}
B60416e:{NFSU2_TR(0x60416e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604173ull));
TAIL_STATIC(0x603630u,603);
}
B604173:L604173:{c.instructions+=5;NFSU2_TR(0x604173);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B604176:{NFSU2_TR(0x604176);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604177:{NFSU2_TR(0x604177);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604179:{NFSU2_TR(0x604179);
__builtin_memmove((R+4),(R+24),4);
}
B60417b:{NFSU2_TR(0x60417b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604180ull));
TAIL_STATIC(0x601020u,601);
}
B604180:L604180:{c.instructions+=7;NFSU2_TR(0x604180);
w4(R+0,u32(0x1ull));
}
B604185:{NFSU2_TR(0x604185);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B604186:{NFSU2_TR(0x604186);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B604187:{NFSU2_TR(0x604187);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B604188:{NFSU2_TR(0x604188);
__builtin_memmove((R+16),(R+20),4);
}
B60418a:{NFSU2_TR(0x60418a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60418b:{NFSU2_TR(0x60418b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60418e:L60418e:{c.instructions+=2;NFSU2_TR(0x60418e);
w4(R+4,u32(0x827e88ull));
}
B604193:{NFSU2_TR(0x604193);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604198ull));
TAIL_STATIC(0x43b640u,43b);
}
B604198:L604198:{c.instructions+=3;NFSU2_TR(0x604198);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60419a:{NFSU2_TR(0x60419a);
__builtin_memmove((R+4),(R+24),4);
}
B60419c:{NFSU2_TR(0x60419c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6041a1ull));
TAIL_STATIC(0x603630u,603);
}
B6041a1:L6041a1:{c.instructions+=3;NFSU2_TR(0x6041a1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6041a4:{NFSU2_TR(0x6041a4);
__builtin_memmove((R+4),(R+24),4);
}
B6041a6:{NFSU2_TR(0x6041a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6041c1;}}
}
B6041a8:L6041a8:{c.instructions+=4;NFSU2_TR(0x6041a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6041ab:{NFSU2_TR(0x6041ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6041ac:{NFSU2_TR(0x6041ac);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6041ae:{NFSU2_TR(0x6041ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6041b3ull));
TAIL_STATIC(0x601020u,601);
}
B6041b3:L6041b3:{c.instructions+=7;NFSU2_TR(0x6041b3);
w4(R+0,u32(0x1ull));
}
B6041b8:{NFSU2_TR(0x6041b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6041b9:{NFSU2_TR(0x6041b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6041ba:{NFSU2_TR(0x6041ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6041bb:{NFSU2_TR(0x6041bb);
__builtin_memmove((R+16),(R+20),4);
}
B6041bd:{NFSU2_TR(0x6041bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6041be:{NFSU2_TR(0x6041be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6041c1:L6041c1:{c.instructions+=3;NFSU2_TR(0x6041c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6041c3:{NFSU2_TR(0x6041c3);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6041c5:{NFSU2_TR(0x6041c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6041caull));
TAIL_STATIC(0x601020u,601);
}
B6041ca:L6041ca:{c.instructions+=7;NFSU2_TR(0x6041ca);
w4(R+0,u32(0x1ull));
}
B6041cf:{NFSU2_TR(0x6041cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6041d0:{NFSU2_TR(0x6041d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6041d1:{NFSU2_TR(0x6041d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6041d2:{NFSU2_TR(0x6041d2);
__builtin_memmove((R+16),(R+20),4);
}
B6041d4:{NFSU2_TR(0x6041d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6041d5:{NFSU2_TR(0x6041d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6041d8:L6041d8:{c.instructions+=2;NFSU2_TR(0x6041d8);
w4(R+4,u32(0x827e88ull));
}
B6041dd:{NFSU2_TR(0x6041dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6041e2ull));
TAIL_STATIC(0x43b640u,43b);
}
B6041e2:L6041e2:{c.instructions+=3;NFSU2_TR(0x6041e2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6041e4:{NFSU2_TR(0x6041e4);
w4(R+4,u32(0x83a9d0ull));
}
B6041e9:{NFSU2_TR(0x6041e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6041eeull));
TAIL_STATIC(0x503040u,503);
}
B6041ee:L6041ee:{c.instructions+=2;NFSU2_TR(0x6041ee);
w4(R+4,u32(0x865480ull));
}
B6041f3:{NFSU2_TR(0x6041f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6041f8ull));
TAIL_STATIC(0x5819c0u,581);
}
B6041f8:L6041f8:{c.instructions+=7;NFSU2_TR(0x6041f8);
w4(R+0,u32(0x1ull));
}
B6041fd:{NFSU2_TR(0x6041fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6041fe:{NFSU2_TR(0x6041fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6041ff:{NFSU2_TR(0x6041ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B604200:{NFSU2_TR(0x604200);
__builtin_memmove((R+16),(R+20),4);
}
B604202:{NFSU2_TR(0x604202);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B604203:{NFSU2_TR(0x604203);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B604206:L604206:{c.instructions+=7;NFSU2_TR(0x604206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B604207:{NFSU2_TR(0x604207);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B604208:{NFSU2_TR(0x604208);
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
B60420a:{NFSU2_TR(0x60420a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60420b:{NFSU2_TR(0x60420b);
__builtin_memmove((R+16),(R+20),4);
}
B60420d:{NFSU2_TR(0x60420d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60420e:{NFSU2_TR(0x60420e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B604260:L604260:{c.instructions+=20;NFSU2_TR(0x604260);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604261:{NFSU2_TR(0x604261);
__builtin_memmove((R+20),(R+16),4);
}
B604263:{NFSU2_TR(0x604263);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B604266:{NFSU2_TR(0x604266);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604268:{NFSU2_TR(0x604268);
u8 U[4];
w4(U+0,u32(0x779f68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60426d:{NFSU2_TR(0x60426d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B604273:{NFSU2_TR(0x604273);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604274:{NFSU2_TR(0x604274);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60427b:{NFSU2_TR(0x60427b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B60427e:{NFSU2_TR(0x60427e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60427f:{NFSU2_TR(0x60427f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604280:{NFSU2_TR(0x604280);
__builtin_memmove((R+24),(R+4),4);
}
B604282:{NFSU2_TR(0x604282);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B604285:{NFSU2_TR(0x604285);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604286:{NFSU2_TR(0x604286);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604288:{NFSU2_TR(0x604288);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B60428b:{NFSU2_TR(0x60428b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60428f:{NFSU2_TR(0x60428f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5c4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B604295:{NFSU2_TR(0x604295);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+12),(U+0),4);
}
B604298:{NFSU2_TR(0x604298);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60429dull));
TAIL_STATIC(0x5b5350u,5b5);
}
B60429d:L60429d:{c.instructions+=4;NFSU2_TR(0x60429d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60429e:{NFSU2_TR(0x60429e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60429f:{NFSU2_TR(0x60429f);
__builtin_memmove((R+4),(R+12),4);
}
B6042a1:{NFSU2_TR(0x6042a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6042a6ull));
TAIL_STATIC(0x5a93a0u,5a9);
}
B6042a6:L6042a6:{c.instructions+=7;NFSU2_TR(0x6042a6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6042a8:{NFSU2_TR(0x6042a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x548ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6042ae:{NFSU2_TR(0x6042ae);
__builtin_memmove((R+4),(R+28),4);
}
B6042b0:{NFSU2_TR(0x6042b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5b0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6042b6:{NFSU2_TR(0x6042b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5b4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6042c0:{NFSU2_TR(0x6042c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5b8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6042c6:{NFSU2_TR(0x6042c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6042cbull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B6042cb:L6042cb:{c.instructions+=4;NFSU2_TR(0x6042cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8d8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6042d1:{NFSU2_TR(0x6042d1);
__builtin_memmove((R+4),(R+28),4);
}
B6042d3:{NFSU2_TR(0x6042d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6042d7:{NFSU2_TR(0x6042d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6042dcull));
TAIL_STATIC(0x5da2f0u,5da);
}
B6042dc:L6042dc:{c.instructions+=25;NFSU2_TR(0x6042dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6042df:{NFSU2_TR(0x6042df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x92cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6042e5:{NFSU2_TR(0x6042e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x948ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6042eb:{NFSU2_TR(0x6042eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x960ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6042f1:{NFSU2_TR(0x6042f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x974ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6042f7:{NFSU2_TR(0x6042f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9b8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6042fd:{NFSU2_TR(0x6042fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9c0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604303:{NFSU2_TR(0x604303);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9d8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604309:{NFSU2_TR(0x604309);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60430c:{NFSU2_TR(0x60430c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60430f:{NFSU2_TR(0x60430f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B604311:{NFSU2_TR(0x604311);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x510ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604317:{NFSU2_TR(0x604317);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x514ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60431d:{NFSU2_TR(0x60431d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x518ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604323:{NFSU2_TR(0x604323);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x520ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604329:{NFSU2_TR(0x604329);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x524ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60432f:{NFSU2_TR(0x60432f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x528ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604335:{NFSU2_TR(0x604335);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60433a:{NFSU2_TR(0x60433a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60433e:{NFSU2_TR(0x60433e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604342:{NFSU2_TR(0x604342);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604346:{NFSU2_TR(0x604346);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x530ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60434c:{NFSU2_TR(0x60434c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x534ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604352:{NFSU2_TR(0x604352);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x538ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604358:{NFSU2_TR(0x604358);
if(r1(R+518)){{goto L604395;}}
}
B60435a:L60435a:{c.instructions+=17;NFSU2_TR(0x60435a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60435c:{NFSU2_TR(0x60435c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60435f:{NFSU2_TR(0x60435f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604362:{NFSU2_TR(0x604362);
__builtin_memmove((R+8),(R+4),4);
}
B604364:{NFSU2_TR(0x604364);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B604366:{NFSU2_TR(0x604366);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60436a:{NFSU2_TR(0x60436a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60436e:{NFSU2_TR(0x60436e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604372:{NFSU2_TR(0x604372);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B604376:{NFSU2_TR(0x604376);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604378:{NFSU2_TR(0x604378);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60437b:{NFSU2_TR(0x60437b);
__builtin_memmove((R+0),(R+4),4);
}
B60437d:{NFSU2_TR(0x60437d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60437f:{NFSU2_TR(0x60437f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604383:{NFSU2_TR(0x604383);
{u32 ea_=u32(r4(R+24)+u32(1296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B604389:{NFSU2_TR(0x604389);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x518ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60438f:{NFSU2_TR(0x60438f);
{u32 ea_=u32(r4(R+24)+u32(1300u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B604395:L604395:{c.instructions+=5;NFSU2_TR(0x604395);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604398:{NFSU2_TR(0x604398);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60439e:{NFSU2_TR(0x60439e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6043a0:{NFSU2_TR(0x6043a0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6043a3:{NFSU2_TR(0x6043a3);
if(r1(R+514)){{goto L6043b3;}}
}
B6043a5:L6043a5:{c.instructions+=4;NFSU2_TR(0x6043a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6043a9:{NFSU2_TR(0x6043a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6043aa:{NFSU2_TR(0x6043aa);
__builtin_memmove((R+4),(R+28),4);
}
B6043ac:{NFSU2_TR(0x6043ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6043b1ull));
TAIL_STATIC(0x5da3d0u,5da);
}
B6043b1:L6043b1:{c.instructions+=1;NFSU2_TR(0x6043b1);
{goto L6043c4;}
}
B6043b3:L6043b3:{c.instructions+=7;NFSU2_TR(0x6043b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6043b6:{NFSU2_TR(0x6043b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6043b7:{NFSU2_TR(0x6043b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6043b8:{NFSU2_TR(0x6043b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6043bc:{NFSU2_TR(0x6043bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6043bd:{NFSU2_TR(0x6043bd);
__builtin_memmove((R+4),(R+28),4);
}
B6043bf:{NFSU2_TR(0x6043bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6043c4ull));
TAIL_STATIC(0x5da410u,5da);
}
B6043c4:L6043c4:{c.instructions+=3;NFSU2_TR(0x6043c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6043c7:{NFSU2_TR(0x6043c7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6043cb:{NFSU2_TR(0x6043cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6043d7;}}
}
B6043cd:L6043cd:{c.instructions+=1;NFSU2_TR(0x6043cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x910ull))));
w4(U+4,u32(0x41800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6043d7:L6043d7:{c.instructions+=27;NFSU2_TR(0x6043d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6043db:{NFSU2_TR(0x6043db);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6043df:{NFSU2_TR(0x6043df);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6043e3:{NFSU2_TR(0x6043e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6043e6:{NFSU2_TR(0x6043e6);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B6043ea:{NFSU2_TR(0x6043ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6043ed:{NFSU2_TR(0x6043ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6043f0:{NFSU2_TR(0x6043f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6043f3:{NFSU2_TR(0x6043f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6043f6:{NFSU2_TR(0x6043f6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6043fd:{NFSU2_TR(0x6043fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x95cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B604403:{NFSU2_TR(0x604403);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x95dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B604409:{NFSU2_TR(0x604409);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d8ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B604413:{NFSU2_TR(0x604413);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604419:{NFSU2_TR(0x604419);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60441f:{NFSU2_TR(0x60441f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604425:{NFSU2_TR(0x604425);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x964ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B60442b:{NFSU2_TR(0x60442b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+4,u16(s16(s8(r1(U+4)))));
}
B604430:{NFSU2_TR(0x604430);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604432:{NFSU2_TR(0x604432);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B604436:{NFSU2_TR(0x604436);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B60443a:{NFSU2_TR(0x60443a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60443d:{NFSU2_TR(0x60443d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604440:{NFSU2_TR(0x604440);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604443:{NFSU2_TR(0x604443);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604446:{NFSU2_TR(0x604446);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604449:{NFSU2_TR(0x604449);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60444eull));
TAIL_STATIC(0x575620u,575);
}
B60444e:L60444e:{c.instructions+=5;NFSU2_TR(0x60444e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B604451:{NFSU2_TR(0x604451);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604455:{NFSU2_TR(0x604455);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B604457:{NFSU2_TR(0x604457);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60445c:{NFSU2_TR(0x60445c);
if(r1(R+518)){{goto L604468;}}
}
B60445e:L60445e:{c.instructions+=3;NFSU2_TR(0x60445e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60445f:{NFSU2_TR(0x60445f);
__builtin_memmove((R+4),(R+0),4);
}
B604461:{NFSU2_TR(0x604461);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604466ull));
TAIL_STATIC(0x5eb930u,5eb);
}
B604466:L604466:{c.instructions+=1;NFSU2_TR(0x604466);
{goto L60446a;}
}
B604468:L604468:{c.instructions+=1;NFSU2_TR(0x604468);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60446a:L60446a:{c.instructions+=7;NFSU2_TR(0x60446a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60446d:{NFSU2_TR(0x60446d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B604470:{NFSU2_TR(0x604470);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604473:{NFSU2_TR(0x604473);
__builtin_memmove((R+8),gp(0x86b304),4);
}
B604479:{NFSU2_TR(0x604479);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60447a:{NFSU2_TR(0x60447a);
u8 U[5];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60447f:{NFSU2_TR(0x60447f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604484ull));
TAIL_STATIC(0x440e50u,440);
}
B604484:L604484:{c.instructions+=3;NFSU2_TR(0x604484);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B604487:{NFSU2_TR(0x604487);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B604489:{NFSU2_TR(0x604489);
if(r1(R+518)){{goto L60449c;}}
}
B60448b:L60448b:{c.instructions+=5;NFSU2_TR(0x60448b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60448e:{NFSU2_TR(0x60448e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604491:{NFSU2_TR(0x604491);
u8 U[4];
w4(U+0,u32(0x7a5bb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B604497:{NFSU2_TR(0x604497);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60449a:{NFSU2_TR(0x60449a);
{goto L60449e;}
}
B60449c:L60449c:{c.instructions+=1;NFSU2_TR(0x60449c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60449e:L60449e:{c.instructions+=3;NFSU2_TR(0x60449e);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6044a0:{NFSU2_TR(0x6044a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6044a3:{NFSU2_TR(0x6044a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6044a8ull));
TAIL_STATIC(0x575620u,575);
}
B6044a8:L6044a8:{c.instructions+=5;NFSU2_TR(0x6044a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6044ab:{NFSU2_TR(0x6044ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6044af:{NFSU2_TR(0x6044af);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6044b1:{NFSU2_TR(0x6044b1);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6044b6:{NFSU2_TR(0x6044b6);
if(r1(R+518)){{goto L6044c1;}}
}
B6044b8:L6044b8:{c.instructions+=2;NFSU2_TR(0x6044b8);
__builtin_memmove((R+4),(R+0),4);
}
B6044ba:{NFSU2_TR(0x6044ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6044bfull));
TAIL_STATIC(0x63b590u,63b);
}
B6044bf:L6044bf:{c.instructions+=1;NFSU2_TR(0x6044bf);
{goto L6044c3;}
}
B6044c1:L6044c1:{c.instructions+=1;NFSU2_TR(0x6044c1);
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
B6044c3:L6044c3:{c.instructions+=11;NFSU2_TR(0x6044c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6044c9:{NFSU2_TR(0x6044c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6044ca:{NFSU2_TR(0x6044ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6044d0:{NFSU2_TR(0x6044d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6044d1:{NFSU2_TR(0x6044d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6044d4:{NFSU2_TR(0x6044d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6044d5:{NFSU2_TR(0x6044d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6044d6:{NFSU2_TR(0x6044d6);
__builtin_memmove((R+4),(R+0),4);
}
B6044d8:{NFSU2_TR(0x6044d8);
u8 U[5];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6044dd:{NFSU2_TR(0x6044dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x914ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6044e3:{NFSU2_TR(0x6044e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6044e8ull));
TAIL_STATIC(0x60bcf0u,60b);
}
B6044e8:L6044e8:{c.instructions+=28;NFSU2_TR(0x6044e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x914ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6044ee:{NFSU2_TR(0x6044ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6044f1:{NFSU2_TR(0x6044f1);
w4(R+0,u32(0x1ull));
}
B6044f6:{NFSU2_TR(0x6044f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6044f9:{NFSU2_TR(0x6044f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6044fc:{NFSU2_TR(0x6044fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6044ff:{NFSU2_TR(0x6044ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604502:{NFSU2_TR(0x604502);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9c4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604508:{NFSU2_TR(0x604508);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9d0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60450e:{NFSU2_TR(0x60450e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9c8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604514:{NFSU2_TR(0x604514);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60451a:{NFSU2_TR(0x60451a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604520:{NFSU2_TR(0x604520);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604526:{NFSU2_TR(0x604526);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60452c:{NFSU2_TR(0x60452c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x540ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604532:{NFSU2_TR(0x604532);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x554ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604538:{NFSU2_TR(0x604538);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x958ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60453e:{NFSU2_TR(0x60453e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x96cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604544:{NFSU2_TR(0x604544);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x970ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60454a:{NFSU2_TR(0x60454a);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60454d:{NFSU2_TR(0x60454d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60454f:{NFSU2_TR(0x60454f);
u8 U[4];
w4(U+0,u32(0x10000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604554:{NFSU2_TR(0x604554);
{u32 ea_=u32(r4(R+24)+u32(2448u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60455a:{NFSU2_TR(0x60455a);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60455f:{NFSU2_TR(0x60455f);
{u32 ea_=u32(r4(R+24)+u32(2452u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B604565:{NFSU2_TR(0x604565);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x550ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B60456b:{NFSU2_TR(0x60456b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x551ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B604571:{NFSU2_TR(0x604571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604576ull));
TAIL_STATIC(0x5e02b0u,5e0);
}
B604576:L604576:{c.instructions+=48;NFSU2_TR(0x604576);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x940ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60457c:{NFSU2_TR(0x60457c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x91cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604582:{NFSU2_TR(0x604582);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604588:{NFSU2_TR(0x604588);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x950ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60458e:{NFSU2_TR(0x60458e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x954ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604594:{NFSU2_TR(0x604594);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B60459a:{NFSU2_TR(0x60459a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x92cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6045a0:{NFSU2_TR(0x6045a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x93dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6045a7:{NFSU2_TR(0x6045a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x93cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6045ad:{NFSU2_TR(0x6045ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x926ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6045b3:{NFSU2_TR(0x6045b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x925ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6045b9:{NFSU2_TR(0x6045b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x927ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6045bf:{NFSU2_TR(0x6045bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x928ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6045c5:{NFSU2_TR(0x6045c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x944ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6045cb:{NFSU2_TR(0x6045cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x948ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6045d1:{NFSU2_TR(0x6045d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x920ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6045d7:{NFSU2_TR(0x6045d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x974ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6045dd:{NFSU2_TR(0x6045dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x544ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6045e3:{NFSU2_TR(0x6045e3);
w4(R+0,u32(0xbf800000ull));
}
B6045e8:{NFSU2_TR(0x6045e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x930ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6045ee:{NFSU2_TR(0x6045ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x934ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6045f4:{NFSU2_TR(0x6045f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x938ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6045fa:{NFSU2_TR(0x6045fa);
__builtin_memmove((R+0),gp(0x7a55c4),4);
}
B6045ff:{NFSU2_TR(0x6045ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x548ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604605:{NFSU2_TR(0x604605);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60460b:{NFSU2_TR(0x60460b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x998ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B604611:{NFSU2_TR(0x604611);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x978ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604617:{NFSU2_TR(0x604617);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x999ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60461e:{NFSU2_TR(0x60461e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B604621:{NFSU2_TR(0x604621);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B604623:{NFSU2_TR(0x604623);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x99cull))));
__builtin_memmove((R+8),(U+0),4);
}
B604629:{NFSU2_TR(0x604629);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B60462b:{NFSU2_TR(0x60462b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60462e:{NFSU2_TR(0x60462e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604631:{NFSU2_TR(0x604631);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604634:{NFSU2_TR(0x604634);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9acull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60463a:{NFSU2_TR(0x60463a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9b0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B604640:{NFSU2_TR(0x604640);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x924ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B604647:{NFSU2_TR(0x604647);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x97cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B60464d:{NFSU2_TR(0x60464d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x980ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604653:{NFSU2_TR(0x604653);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x984ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604659:{NFSU2_TR(0x604659);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x988ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60465f:{NFSU2_TR(0x60465f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604665:{NFSU2_TR(0x604665);
__builtin_memmove((R+4),(R+24),4);
}
B604667:{NFSU2_TR(0x604667);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9d4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B60466d:{NFSU2_TR(0x60466d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9d8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604673:{NFSU2_TR(0x604673);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5c0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B604679:{NFSU2_TR(0x604679);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60467eull));
TAIL_STATIC(0x5f54a0u,5f5);
}
B60467e:L60467e:{c.instructions+=3;NFSU2_TR(0x60467e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B604684:{NFSU2_TR(0x604684);
w4(R+4,u32(0x4ull));
}
B604689:{NFSU2_TR(0x604689);
__builtin_memmove((R+16),(R+16),4);
}
B604690:L604690:{c.instructions+=5;NFSU2_TR(0x604690);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604693:{NFSU2_TR(0x604693);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B604695:{NFSU2_TR(0x604695);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B604698:{NFSU2_TR(0x604698);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B604699:{NFSU2_TR(0x604699);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x604690u);}goto L604690;}}
}
B60469b:L60469b:{c.instructions+=6;NFSU2_TR(0x60469b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60469e:{NFSU2_TR(0x60469e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6046a1:{NFSU2_TR(0x6046a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6046a2:{NFSU2_TR(0x6046a2);
__builtin_memmove((R+4),(R+24),4);
}
B6046a4:{NFSU2_TR(0x6046a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9c0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6046aa:{NFSU2_TR(0x6046aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6046afull));
TAIL_STATIC(0x601110u,601);
}
B6046af:L6046af:{c.instructions+=3;NFSU2_TR(0x6046af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x918ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6046b5:{NFSU2_TR(0x6046b5);
u8 U[2];
__builtin_memmove((U+0),gp(0x89cf69),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6046bb:{NFSU2_TR(0x6046bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6046cd;}}
}
B6046bd:L6046bd:{c.instructions+=2;NFSU2_TR(0x6046bd);
u8 U[8];
__builtin_memmove((U+0),gp(0x8669f4),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6046c3:{NFSU2_TR(0x6046c3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6046cd;}}
}
B6046c5:L6046c5:{c.instructions+=2;NFSU2_TR(0x6046c5);
u8 U[8];
__builtin_memmove((U+0),gp(0x866a14),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6046cb:{NFSU2_TR(0x6046cb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6046fe;}}
}
B6046cd:L6046cd:{c.instructions+=2;NFSU2_TR(0x6046cd);
u8 U[4];
w4(U+0,u32(0x240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6046d2:{NFSU2_TR(0x6046d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6046d7ull));
TAIL_STATIC(0x575620u,575);
}
B6046d7:L6046d7:{c.instructions+=5;NFSU2_TR(0x6046d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6046da:{NFSU2_TR(0x6046da);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6046de:{NFSU2_TR(0x6046de);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6046e0:{NFSU2_TR(0x6046e0);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6046e5:{NFSU2_TR(0x6046e5);
if(r1(R+518)){{goto L6046f1;}}
}
B6046e7:L6046e7:{c.instructions+=3;NFSU2_TR(0x6046e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6046e8:{NFSU2_TR(0x6046e8);
__builtin_memmove((R+4),(R+0),4);
}
B6046ea:{NFSU2_TR(0x6046ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6046efull));
TAIL_STATIC(0x5fcb00u,5fc);
}
B6046ef:L6046ef:{c.instructions+=1;NFSU2_TR(0x6046ef);
{goto L6046f3;}
}
B6046f1:L6046f1:{c.instructions+=1;NFSU2_TR(0x6046f1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6046f3:L6046f3:{c.instructions+=2;NFSU2_TR(0x6046f3);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6046f8:{NFSU2_TR(0x6046f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x918ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6046fe:L6046fe:{c.instructions+=3;NFSU2_TR(0x6046fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x968ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604704:{NFSU2_TR(0x604704);
u8 U[8];
__builtin_memmove((U+0),gp(0x7faaa8),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60470a:{NFSU2_TR(0x60470a);
if(r1(R+518)){{goto L60471e;}}
}
B60470c:L60470c:{c.instructions+=3;NFSU2_TR(0x60470c);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B604712:{NFSU2_TR(0x604712);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604713:{NFSU2_TR(0x604713);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604718ull));
TAIL_STATIC(0x4690e0u,469);
}
B604718:L604718:{c.instructions+=1;NFSU2_TR(0x604718);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x968ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60471e:L60471e:{c.instructions+=2;NFSU2_TR(0x60471e);
__builtin_memmove((R+4),(R+24),4);
}
B604720:{NFSU2_TR(0x604720);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604725ull));
TAIL_STATIC(0x5f5010u,5f5);
}
B604725:L604725:{c.instructions+=9;NFSU2_TR(0x604725);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B604729:{NFSU2_TR(0x604729);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60472a:{NFSU2_TR(0x60472a);
__builtin_memmove((R+0),(R+24),4);
}
B60472c:{NFSU2_TR(0x60472c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60472d:{NFSU2_TR(0x60472d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604734:{NFSU2_TR(0x604734);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B604735:{NFSU2_TR(0x604735);
__builtin_memmove((R+16),(R+20),4);
}
B604737:{NFSU2_TR(0x604737);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B604738:{NFSU2_TR(0x604738);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B604740:L604740:{c.instructions+=14;NFSU2_TR(0x604740);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604741:{NFSU2_TR(0x604741);
__builtin_memmove((R+20),(R+16),4);
}
B604743:{NFSU2_TR(0x604743);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B604746:{NFSU2_TR(0x604746);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B604749:{NFSU2_TR(0x604749);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60474c:{NFSU2_TR(0x60474c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60474d:{NFSU2_TR(0x60474d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B604753:{NFSU2_TR(0x604753);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604754:{NFSU2_TR(0x604754);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604755:{NFSU2_TR(0x604755);
__builtin_memmove((R+28),(R+4),4);
}
B604757:{NFSU2_TR(0x604757);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60475b:{NFSU2_TR(0x60475b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60475d:{NFSU2_TR(0x60475d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B604760:{NFSU2_TR(0x604760);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60482a;}}
}
B604766:L604766:{c.instructions+=46;NFSU2_TR(0x604766);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60476c:{NFSU2_TR(0x60476c);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B60476f:{NFSU2_TR(0x60476f);
{u32 ea_=u32(r4(R+28)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604772:{NFSU2_TR(0x604772);
{u32 ea_=u32(r4(R+28)+u32(1312u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B604778:{NFSU2_TR(0x604778);
{u32 ea_=u32(r4(R+28)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60477b:{NFSU2_TR(0x60477b);
{u32 ea_=u32(r4(R+28)+u32(1316u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B604781:{NFSU2_TR(0x604781);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B604785:{NFSU2_TR(0x604785);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604788:{NFSU2_TR(0x604788);
{u32 ea_=u32(r4(R+28)+u32(1320u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60478e:{NFSU2_TR(0x60478e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B604792:{NFSU2_TR(0x604792);
{u32 ea_=u32(r4(R+28)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604798:{NFSU2_TR(0x604798);
{u32 ea_=u32(r4(R+28)+u32(1328u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60479e:{NFSU2_TR(0x60479e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6047a2:{NFSU2_TR(0x6047a2);
{u32 ea_=u32(r4(R+28)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6047a8:{NFSU2_TR(0x6047a8);
{u32 ea_=u32(r4(R+28)+u32(1332u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6047ae:{NFSU2_TR(0x6047ae);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6047b2:{NFSU2_TR(0x6047b2);
{u32 ea_=u32(r4(R+28)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6047b8:{NFSU2_TR(0x6047b8);
{u32 ea_=u32(r4(R+28)+u32(1336u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6047be:{NFSU2_TR(0x6047be);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6047c2:{NFSU2_TR(0x6047c2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6047c4:{NFSU2_TR(0x6047c4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6047c8:{NFSU2_TR(0x6047c8);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6047ca:{NFSU2_TR(0x6047ca);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6047ce:{NFSU2_TR(0x6047ce);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B6047d0:{NFSU2_TR(0x6047d0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6047d4:{NFSU2_TR(0x6047d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6047d8:{NFSU2_TR(0x6047d8);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6047dc:{NFSU2_TR(0x6047dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6047e2:{NFSU2_TR(0x6047e2);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B6047e4:{NFSU2_TR(0x6047e4);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6047e8:{NFSU2_TR(0x6047e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6047ec:{NFSU2_TR(0x6047ec);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6047f0:{NFSU2_TR(0x6047f0);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B6047f2:{NFSU2_TR(0x6047f2);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6047f6:{NFSU2_TR(0x6047f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6047fa:{NFSU2_TR(0x6047fa);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6047fe:{NFSU2_TR(0x6047fe);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B604800:{NFSU2_TR(0x604800);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B604804:{NFSU2_TR(0x604804);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B604808:{NFSU2_TR(0x604808);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60480a:{NFSU2_TR(0x60480a);
{u32 ea_=u32(r4(R+28)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B604810:{NFSU2_TR(0x604810);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B604816:{NFSU2_TR(0x604816);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60481c:{NFSU2_TR(0x60481c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604822:{NFSU2_TR(0x604822);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B604824:{NFSU2_TR(0x604824);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60482a:L60482a:{c.instructions+=4;NFSU2_TR(0x60482a);
__builtin_memmove((R+4),gp(0x890118),4);
}
B604830:{NFSU2_TR(0x604830);
{u32 ea_=u32(r4(R+28)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604836:{NFSU2_TR(0x604836);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B604839:{NFSU2_TR(0x604839);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60488f;}}
}
B60483b:L60483b:{c.instructions+=4;NFSU2_TR(0x60483b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B604841:{NFSU2_TR(0x604841);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604843:{NFSU2_TR(0x604843);
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
B604846:{NFSU2_TR(0x604846);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L60486c;}}
}
B604848:L604848:{c.instructions+=4;NFSU2_TR(0x604848);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60484e:{NFSU2_TR(0x60484e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604850:{NFSU2_TR(0x604850);
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
B604853:{NFSU2_TR(0x604853);
if(r1(R+518)){{goto L60486e;}}
}
B604855:L604855:{c.instructions+=5;NFSU2_TR(0x604855);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604858:{NFSU2_TR(0x604858);
{u32 ea_=u32(r4(R+28)+u32(1072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60485e:{NFSU2_TR(0x60485e);
{u32 ea_=u32(r4(R+28)+u32(1040u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B604864:{NFSU2_TR(0x604864);
{u32 ea_=u32(r4(R+28)+u32(1040u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60486a:{NFSU2_TR(0x60486a);
{goto L60486e;}
}
B60486c:L60486c:{c.instructions+=1;NFSU2_TR(0x60486c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60486e:L60486e:{c.instructions+=5;NFSU2_TR(0x60486e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B604871:{NFSU2_TR(0x604871);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604872:{NFSU2_TR(0x604872);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x510ull))));
__builtin_memmove((R+0),(U+0),4);
}
B604878:{NFSU2_TR(0x604878);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604879:{NFSU2_TR(0x604879);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60487eull));
TAIL_STATIC(0x43ce10u,43c);
}
B60487e:L60487e:{c.instructions+=4;NFSU2_TR(0x60487e);
{u32 ea_=u32(r4(R+28)+u32(1044u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B604884:{NFSU2_TR(0x604884);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B604887:{NFSU2_TR(0x604887);
{u32 ea_=u32(r4(R+28)+u32(1044u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60488d:{NFSU2_TR(0x60488d);
{goto L604891;}
}
B60488f:L60488f:{c.instructions+=1;NFSU2_TR(0x60488f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B604891:L604891:{c.instructions+=4;NFSU2_TR(0x604891);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+24),(U+0),4);
}
B604894:{NFSU2_TR(0x604894);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8d8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60489a:{NFSU2_TR(0x60489a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60489b:{NFSU2_TR(0x60489b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6048a0ull));
TAIL_STATIC(0x5da330u,5da);
}
B6048a0:L6048a0:{c.instructions+=4;NFSU2_TR(0x6048a0);
__builtin_memmove((R+4),gp(0x7fb724),4);
}
B6048a6:{NFSU2_TR(0x6048a6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7ull))));
}
B6048a9:{NFSU2_TR(0x6048a9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8000001full))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6048af:{NFSU2_TR(0x6048af);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6048b6;}}
}
B6048b1:L6048b1:{c.instructions+=3;NFSU2_TR(0x6048b1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6048b2:{NFSU2_TR(0x6048b2);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffe0ull))));
}
B6048b5:{NFSU2_TR(0x6048b5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6048b6:L6048b6:{c.instructions+=1;NFSU2_TR(0x6048b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604932;}}
}
B6048b8:L6048b8:{c.instructions+=3;NFSU2_TR(0x6048b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6048bb:{NFSU2_TR(0x6048bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6048bd:{NFSU2_TR(0x6048bd);
if(r1(R+518)){{goto L604932;}}
}
B6048bf:L6048bf:{c.instructions+=5;NFSU2_TR(0x6048bf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6048c1:{NFSU2_TR(0x6048c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5c4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6048c7:{NFSU2_TR(0x6048c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6048c8:{NFSU2_TR(0x6048c8);
__builtin_memmove((R+4),(R+12),4);
}
B6048ca:{NFSU2_TR(0x6048ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6048cfull));
TAIL_STATIC(0x5e68d0u,5e6);
}
B6048cf:L6048cf:{c.instructions+=3;NFSU2_TR(0x6048cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6048d2:{NFSU2_TR(0x6048d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6048d4:{NFSU2_TR(0x6048d4);
if(r1(R+518)){{goto L604932;}}
}
B6048d6:L6048d6:{c.instructions+=3;NFSU2_TR(0x6048d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6048d7:{NFSU2_TR(0x6048d7);
__builtin_memmove((R+4),(R+12),4);
}
B6048d9:{NFSU2_TR(0x6048d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6048deull));
TAIL_STATIC(0x5e7e80u,5e7);
}
B6048de:L6048de:{c.instructions+=2;NFSU2_TR(0x6048de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6048e0:{NFSU2_TR(0x6048e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604932;}}
}
B6048e2:L6048e2:{c.instructions+=9;NFSU2_TR(0x6048e2);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6048e4:{NFSU2_TR(0x6048e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6048e7:{NFSU2_TR(0x6048e7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6048ed:{NFSU2_TR(0x6048ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6048f1:{NFSU2_TR(0x6048f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6048f2:{NFSU2_TR(0x6048f2);
__builtin_memmove((R+4),(R+12),4);
}
B6048f4:{NFSU2_TR(0x6048f4);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6048f8:{NFSU2_TR(0x6048f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6048fc:{NFSU2_TR(0x6048fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604901ull));
TAIL_STATIC(0x5e7e80u,5e7);
}
B604901:L604901:{c.instructions+=2;NFSU2_TR(0x604901);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B604903:{NFSU2_TR(0x604903);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604932;}}
}
B604905:L604905:{c.instructions+=9;NFSU2_TR(0x604905);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604908:{NFSU2_TR(0x604908);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B60490a:{NFSU2_TR(0x60490a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B604910:{NFSU2_TR(0x604910);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B604914:{NFSU2_TR(0x604914);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604918:{NFSU2_TR(0x604918);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604919:{NFSU2_TR(0x604919);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60491d:{NFSU2_TR(0x60491d);
__builtin_memmove((R+4),(R+12),4);
}
B60491f:{NFSU2_TR(0x60491f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604924ull));
TAIL_STATIC(0x5e7e80u,5e7);
}
B604924:L604924:{c.instructions+=2;NFSU2_TR(0x604924);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B604926:{NFSU2_TR(0x604926);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604932;}}
}
B604928:L604928:{c.instructions+=1;NFSU2_TR(0x604928);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x96cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B604932:L604932:{c.instructions+=17;NFSU2_TR(0x604932);
{u32 ea_=u32(r4(R+28)+u32(2272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604938:{NFSU2_TR(0x604938);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8d8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60493e:{NFSU2_TR(0x60493e);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B604941:{NFSU2_TR(0x604941);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604944:{NFSU2_TR(0x604944);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B604947:{NFSU2_TR(0x604947);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B604949:{NFSU2_TR(0x604949);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B60494b:{NFSU2_TR(0x60494b);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B60494d:{NFSU2_TR(0x60494d);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B60494f:{NFSU2_TR(0x60494f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B604951:{NFSU2_TR(0x604951);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B604953:{NFSU2_TR(0x604953);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B604955:{NFSU2_TR(0x604955);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B604957:{NFSU2_TR(0x604957);
{u32 ea_=u32(u32(8017424u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60495d:{NFSU2_TR(0x60495d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60495f:{NFSU2_TR(0x60495f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B604962:{NFSU2_TR(0x604962);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604979;}}
}
B604964:L604964:{c.instructions+=3;NFSU2_TR(0x604964);
__builtin_memmove((R+0),gp(0x81cb88),4);
}
B604969:{NFSU2_TR(0x604969);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60496b:{NFSU2_TR(0x60496b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6049c0;}}
}
B60496d:L60496d:{c.instructions+=2;NFSU2_TR(0x60496d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x96cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B604977:{NFSU2_TR(0x604977);
{goto L6049c0;}
}
B604979:L604979:{c.instructions+=16;NFSU2_TR(0x604979);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60497c:{NFSU2_TR(0x60497c);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60497f:{NFSU2_TR(0x60497f);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604982:{NFSU2_TR(0x604982);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B604985:{NFSU2_TR(0x604985);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B604987:{NFSU2_TR(0x604987);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B604989:{NFSU2_TR(0x604989);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B60498b:{NFSU2_TR(0x60498b);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B60498d:{NFSU2_TR(0x60498d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60498f:{NFSU2_TR(0x60498f);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B604991:{NFSU2_TR(0x604991);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B604993:{NFSU2_TR(0x604993);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B604995:{NFSU2_TR(0x604995);
{u32 ea_=u32(u32(7885480u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60499b:{NFSU2_TR(0x60499b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60499d:{NFSU2_TR(0x60499d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6049a0:{NFSU2_TR(0x6049a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6049c0;}}
}
B6049a2:L6049a2:{c.instructions+=6;NFSU2_TR(0x6049a2);
__builtin_memmove((R+0),gp(0x7fb724),4);
}
B6049a7:{NFSU2_TR(0x6049a7);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6049a8:{NFSU2_TR(0x6049a8);
w4(R+12,u32(0x3cull));
}
B6049ad:{NFSU2_TR(0x6049ad);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6049ad);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6049ad);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B6049af:{NFSU2_TR(0x6049af);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6049b1:{NFSU2_TR(0x6049b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6049c0;}}
}
B6049b3:L6049b3:{c.instructions+=3;NFSU2_TR(0x6049b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6049b6:{NFSU2_TR(0x6049b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6049b8:{NFSU2_TR(0x6049b8);
if(r1(R+518)){{goto L6049c0;}}
}
B6049ba:L6049ba:{c.instructions+=2;NFSU2_TR(0x6049ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6049bb:{NFSU2_TR(0x6049bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6049c0ull));
TAIL_STATIC(0x5da3d0u,5da);
}
B6049c0:L6049c0:{c.instructions+=2;NFSU2_TR(0x6049c0);
__builtin_memmove((R+4),(R+28),4);
}
B6049c2:{NFSU2_TR(0x6049c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6049c7ull));
TAIL_STATIC(0x5f6190u,5f6);
}
B6049c7:L6049c7:{c.instructions+=2;NFSU2_TR(0x6049c7);
__builtin_memmove((R+4),(R+28),4);
}
B6049c9:{NFSU2_TR(0x6049c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6049ceull));
TAIL_STATIC(0x5f62b0u,5f6);
}
B6049ce:L6049ce:{c.instructions+=3;NFSU2_TR(0x6049ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6049d1:{NFSU2_TR(0x6049d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6049d3:{NFSU2_TR(0x6049d3);
if(r1(R+518)){TAIL_STATIC(0x6051d5u,605);}
}
B6049d9:L6049d9:{c.instructions+=5;NFSU2_TR(0x6049d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6049dc:{NFSU2_TR(0x6049dc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6049df:{NFSU2_TR(0x6049df);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6049e5:{NFSU2_TR(0x6049e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6049e9:{NFSU2_TR(0x6049e9);
if(r1(R+518)){{goto L6049f0;}}
}
B6049eb:L6049eb:{c.instructions+=2;NFSU2_TR(0x6049eb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6049ee:{NFSU2_TR(0x6049ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604a30;}}
}
B6049f0:L6049f0:{c.instructions+=2;NFSU2_TR(0x6049f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6049f4:{NFSU2_TR(0x6049f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604a23;}}
}
B6049f6:L6049f6:{c.instructions+=2;NFSU2_TR(0x6049f6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6049f9:{NFSU2_TR(0x6049f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604a30;}}
}
B6049fb:L6049fb:{c.instructions+=9;NFSU2_TR(0x6049fb);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B604a00:{NFSU2_TR(0x604a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x548ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B604a06:{NFSU2_TR(0x604a06);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604a0a:{NFSU2_TR(0x604a0a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B604a0e:{NFSU2_TR(0x604a0e);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B604a14:{NFSU2_TR(0x604a14);
{u32 ea_=u32(u32(8017416u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B604a1a:{NFSU2_TR(0x604a1a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604a1c:{NFSU2_TR(0x604a1c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B604a1f:{NFSU2_TR(0x604a1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604a30;}}
}
B604a21:L604a21:{c.instructions+=1;NFSU2_TR(0x604a21);
{goto L604a27;}
}
B604a23:L604a23:{c.instructions+=2;NFSU2_TR(0x604a23);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B604a25:{NFSU2_TR(0x604a25);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L604a30;}}
}
B604a27:L604a27:{c.instructions+=3;NFSU2_TR(0x604a27);
__builtin_memmove((R+4),(R+24),4);
}
B604a29:{NFSU2_TR(0x604a29);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604a2b:{NFSU2_TR(0x604a2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604a30ull));
TAIL_STATIC(0x5ffe70u,5ff);
}
B604a30:L604a30:{c.instructions+=4;NFSU2_TR(0x604a30);
__builtin_memmove((R+4),gp(0x7fb724),4);
}
B604a36:{NFSU2_TR(0x604a36);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B604a39:{NFSU2_TR(0x604a39);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000007ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B604a3f:{NFSU2_TR(0x604a3f);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L604a46;}}
}
B604a41:L604a41:{c.instructions+=3;NFSU2_TR(0x604a41);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B604a42:{NFSU2_TR(0x604a42);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffff8ull))));
}
B604a45:{NFSU2_TR(0x604a45);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B604a46:L604a46:{c.instructions+=1;NFSU2_TR(0x604a46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6051d5u,605);}
}
B604a4c:L604a4c:{c.instructions+=4;NFSU2_TR(0x604a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B604a52:{NFSU2_TR(0x604a52);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604a55:{NFSU2_TR(0x604a55);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604a59:{NFSU2_TR(0x604a59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604a5eull));
TAIL_STATIC(0x75bed4u,75b);
}
B604a5e:L604a5e:{c.instructions+=8;NFSU2_TR(0x604a5e);
w4(R+0,u32(r1(R+0)));
}
B604a61:{NFSU2_TR(0x604a61);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604a65:{NFSU2_TR(0x604a65);
w4(R+4,u32(0x89cf18ull));
}
B604a6a:{NFSU2_TR(0x604a6a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B604a6e:{NFSU2_TR(0x604a6e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B604a72:{NFSU2_TR(0x604a72);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B604a76:{NFSU2_TR(0x604a76);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604a77:{NFSU2_TR(0x604a77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604a7cull));
TAIL_STATIC(0x576790u,576);
}
B604a7c:L604a7c:{c.instructions+=4;NFSU2_TR(0x604a7c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B604a80:{NFSU2_TR(0x604a80);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604a82:{NFSU2_TR(0x604a82);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B604a85:{NFSU2_TR(0x604a85);
if(r1(R+514)){{goto L604abc;}}
}
B604a87:L604a87:{c.instructions+=2;NFSU2_TR(0x604a87);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x4ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B604a8c:{NFSU2_TR(0x604a8c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L604abc;}}
}
B604a8e:L604a8e:{c.instructions+=2;NFSU2_TR(0x604a8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B604a91:{NFSU2_TR(0x604a91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604a96ull));
TAIL_STATIC(0x59fa10u,59f);
}
B604a96:L604a96:{c.instructions+=5;NFSU2_TR(0x604a96);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B604a98:{NFSU2_TR(0x604a98);
{u32 ea_=u32(u32(8021252u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B604a9e:{NFSU2_TR(0x604a9e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604aa0:{NFSU2_TR(0x604aa0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B604aa3:{NFSU2_TR(0x604aa3);
if(r1(R+514)){{goto L604abc;}}
}
B604aa5:L604aa5:{c.instructions+=5;NFSU2_TR(0x604aa5);
__builtin_memmove((R+4),gp(0x7a55c8),4);
}
B604aab:{NFSU2_TR(0x604aab);
u8 U[4];
w4(U+0,u32(0x7a64f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604ab0:{NFSU2_TR(0x604ab0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604ab1:{NFSU2_TR(0x604ab1);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B604ab7:{NFSU2_TR(0x604ab7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604abcull));
TAIL_STATIC(0x578e90u,578);
}
B604abc:L604abc:{c.instructions+=3;NFSU2_TR(0x604abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B604abf:{NFSU2_TR(0x604abf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B604ac2:{NFSU2_TR(0x604ac2);
if(r1(R+518)){{goto L604d13;}}
}
B604ac8:L604ac8:{c.instructions+=2;NFSU2_TR(0x604ac8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B604acb:{NFSU2_TR(0x604acb);
if(r1(R+518)){{goto L604d13;}}
}
B604ad1:L604ad1:{c.instructions+=3;NFSU2_TR(0x604ad1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B604ad5:{NFSU2_TR(0x604ad5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B604ad7:{NFSU2_TR(0x604ad7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604d13;}}
}
B604add:L604add:{c.instructions+=4;NFSU2_TR(0x604add);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B604ae0:{NFSU2_TR(0x604ae0);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B604ae6:{NFSU2_TR(0x604ae6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B604ae8:{NFSU2_TR(0x604ae8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604d13;}}
}
B604aee:L604aee:{c.instructions+=3;NFSU2_TR(0x604aee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604aef:{NFSU2_TR(0x604aef);
w4(R+4,u32(0x89cf18ull));
}
B604af4:{NFSU2_TR(0x604af4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604af9ull));
TAIL_STATIC(0x576790u,576);
}
B604af9:L604af9:{c.instructions+=4;NFSU2_TR(0x604af9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B604afd:{NFSU2_TR(0x604afd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604aff:{NFSU2_TR(0x604aff);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B604b02:{NFSU2_TR(0x604b02);
if(r1(R+514)){{goto L604d13;}}
}
B604b08:L604b08:{c.instructions+=3;NFSU2_TR(0x604b08);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604b09:{NFSU2_TR(0x604b09);
w4(R+4,u32(0x890150ull));
}
B604b0e:{NFSU2_TR(0x604b0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604b13ull));
TAIL_STATIC(0x576790u,576);
}
B604b13:L604b13:{c.instructions+=11;NFSU2_TR(0x604b13);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B604b17:{NFSU2_TR(0x604b17);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B604b1b:{NFSU2_TR(0x604b1b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604b1d:{NFSU2_TR(0x604b1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B604b21:{NFSU2_TR(0x604b21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604b22:{NFSU2_TR(0x604b22);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B604b26:{NFSU2_TR(0x604b26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604b27:{NFSU2_TR(0x604b27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604b28:{NFSU2_TR(0x604b28);
__builtin_memmove((R+4),(R+28),4);
}
B604b2a:{NFSU2_TR(0x604b2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B604b32:{NFSU2_TR(0x604b32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604b37ull));
TAIL_STATIC(0x5ec3d0u,5ec);
}
B604b37:L604b37:{c.instructions+=8;NFSU2_TR(0x604b37);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B604b39:{NFSU2_TR(0x604b39);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604b3d:{NFSU2_TR(0x604b3d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B604b43:{NFSU2_TR(0x604b43);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B604b49:{NFSU2_TR(0x604b49);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604b4b:{NFSU2_TR(0x604b4b);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B604b51:{NFSU2_TR(0x604b51);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B604b54:{NFSU2_TR(0x604b54);
if(r1(R+514)){{goto L604b5e;}}
}
B604b56:L604b56:{c.instructions+=2;NFSU2_TR(0x604b56);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B604b5c:{NFSU2_TR(0x604b5c);
{goto L604b6a;}
}
B604b5e:L604b5e:{c.instructions+=3;NFSU2_TR(0x604b5e);
{u32 ea_=u32(u32(8017428u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604b64:{NFSU2_TR(0x604b64);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B604b68:{NFSU2_TR(0x604b68);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B604b6a:L604b6a:{c.instructions+=4;NFSU2_TR(0x604b6a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604b6b:{NFSU2_TR(0x604b6b);
{u32 ea_=u32(r4(R+28)+u32(1348u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B604b71:{NFSU2_TR(0x604b71);
w4(R+4,u32(0x89e790ull));
}
B604b76:{NFSU2_TR(0x604b76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604b7bull));
TAIL_STATIC(0x576790u,576);
}
B604b7b:L604b7b:{c.instructions+=4;NFSU2_TR(0x604b7b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B604b7f:{NFSU2_TR(0x604b7f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604b81:{NFSU2_TR(0x604b81);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B604b84:{NFSU2_TR(0x604b84);
if(r1(R+514)){{goto L604d13;}}
}
B604b8a:L604b8a:{c.instructions+=3;NFSU2_TR(0x604b8a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604b8b:{NFSU2_TR(0x604b8b);
w4(R+4,u32(0x89e824ull));
}
B604b90:{NFSU2_TR(0x604b90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604b95ull));
TAIL_STATIC(0x576790u,576);
}
B604b95:L604b95:{c.instructions+=4;NFSU2_TR(0x604b95);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B604b99:{NFSU2_TR(0x604b99);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604b9b:{NFSU2_TR(0x604b9b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B604b9e:{NFSU2_TR(0x604b9e);
if(r1(R+514)){{goto L604d13;}}
}
B604ba4:L604ba4:{c.instructions+=2;NFSU2_TR(0x604ba4);
__builtin_memmove((R+4),(R+24),4);
}
B604ba6:{NFSU2_TR(0x604ba6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604babull));
TAIL_STATIC(0x5f1ee0u,5f1);
}
B604bab:L604bab:{c.instructions+=2;NFSU2_TR(0x604bab);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B604bad:{NFSU2_TR(0x604bad);
if(r1(R+518)){{goto L604d13;}}
}
B604bb3:L604bb3:{c.instructions+=3;NFSU2_TR(0x604bb3);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B604bb8:{NFSU2_TR(0x604bb8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B604bba:{NFSU2_TR(0x604bba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604d04;}}
}
B604bc0:L604bc0:{c.instructions+=3;NFSU2_TR(0x604bc0);
__builtin_memmove((R+0),gp(0x890104),4);
}
B604bc5:{NFSU2_TR(0x604bc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B604bc7:{NFSU2_TR(0x604bc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604d04;}}
}
B604bcd:L604bcd:{c.instructions+=3;NFSU2_TR(0x604bcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B604bd3:{NFSU2_TR(0x604bd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B604bd5:{NFSU2_TR(0x604bd5);
if(r1(R+518)){{goto L604c08;}}
}
B604bd7:L604bd7:{c.instructions+=2;NFSU2_TR(0x604bd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B604bdc:{NFSU2_TR(0x604bdc);
if(r1(R+518)){{goto L604c08;}}
}
B604bde:L604bde:{c.instructions+=9;NFSU2_TR(0x604bde);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B604be3:{NFSU2_TR(0x604be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B604be9:{NFSU2_TR(0x604be9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604bed:{NFSU2_TR(0x604bed);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B604bf1:{NFSU2_TR(0x604bf1);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B604bf7:{NFSU2_TR(0x604bf7);
{u32 ea_=u32(u32(8017164u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B604bfd:{NFSU2_TR(0x604bfd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604bff:{NFSU2_TR(0x604bff);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B604c02:{NFSU2_TR(0x604c02);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L604d04;}}
}
B604c08:L604c08:{c.instructions+=3;NFSU2_TR(0x604c08);
__builtin_memmove((R+4),gp(0x890118),4);
}
B604c0e:{NFSU2_TR(0x604c0e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B604c11:{NFSU2_TR(0x604c11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604d04;}}
}
B604c17:L604c17:{c.instructions+=3;NFSU2_TR(0x604c17);
__builtin_memmove((R+4),gp(0x8900bc),4);
}
B604c1d:{NFSU2_TR(0x604c1d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B604c20:{NFSU2_TR(0x604c20);
if(r1(R+518)){{goto L604d04;}}
}
B604c26:L604c26:{c.instructions+=5;NFSU2_TR(0x604c26);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604c29:{NFSU2_TR(0x604c29);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B604c2f:{NFSU2_TR(0x604c2f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604c31:{NFSU2_TR(0x604c31);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B604c34:{NFSU2_TR(0x604c34);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L604d04;}}
}
B604c3a:L604c3a:{c.instructions+=4;NFSU2_TR(0x604c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B604c3d:{NFSU2_TR(0x604c3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8020e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B604c43:{NFSU2_TR(0x604c43);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B604c45:{NFSU2_TR(0x604c45);
if(r1(R+518)){{goto L604c56;}}
}
B604c47:L604c47:{c.instructions+=3;NFSU2_TR(0x604c47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604c49:{NFSU2_TR(0x604c49);
__builtin_memmove((R+4),(R+24),4);
}
B604c4b:{NFSU2_TR(0x604c4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604c50ull));
TAIL_STATIC(0x5ffe70u,5ff);
}
B604c50:L604c50:{c.instructions+=1;NFSU2_TR(0x604c50);
__builtin_memmove((R+4),gp(0x8900bc),4);
}
B604c56:L604c56:{c.instructions+=3;NFSU2_TR(0x604c56);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B604c58:{NFSU2_TR(0x604c58);
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
B604c5a:{NFSU2_TR(0x604c5a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L604c7d;}}
}
B604c5c:L604c5c:{c.instructions+=1;NFSU2_TR(0x604c5c);
__builtin_memmove((R+16),(R+16),4);
}
B604c60:L604c60:{c.instructions+=5;NFSU2_TR(0x604c60);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B604c67:{NFSU2_TR(0x604c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B604c6a:{NFSU2_TR(0x604c6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8020e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B604c70:{NFSU2_TR(0x604c70);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B604c72:{NFSU2_TR(0x604c72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604d04;}}
}
B604c78:L604c78:{c.instructions+=3;NFSU2_TR(0x604c78);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B604c79:{NFSU2_TR(0x604c79);
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
B604c7b:{NFSU2_TR(0x604c7b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x604c60u);}goto L604c60;}}
}
B604c7d:L604c7d:{c.instructions+=12;NFSU2_TR(0x604c7d);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B604c82:{NFSU2_TR(0x604c82);
__builtin_memmove((R+8),gp(0x7a54f8),4);
}
B604c88:{NFSU2_TR(0x604c88);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604c89:{NFSU2_TR(0x604c89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604c8f:{NFSU2_TR(0x604c8f);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B604c95:{NFSU2_TR(0x604c95);
__builtin_memmove((R+0),gp(0x7a5524),4);
}
B604c9a:{NFSU2_TR(0x604c9a);
u8 U[4];
w4(U+0,u32(0x6022d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604c9f:{NFSU2_TR(0x604c9f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604ca0:{NFSU2_TR(0x604ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604ca6:{NFSU2_TR(0x604ca6);
__builtin_memmove((R+4),gp(0x890080),4);
}
B604cac:{NFSU2_TR(0x604cac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604cad:{NFSU2_TR(0x604cad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604cb2ull));
TAIL_STATIC(0x5ea280u,5ea);
}
B604cb2:L604cb2:{c.instructions+=3;NFSU2_TR(0x604cb2);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B604cb8:{NFSU2_TR(0x604cb8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B604cbb:{NFSU2_TR(0x604cbb);
if(r1(R+518)){{goto L604cc8;}}
}
B604cbd:L604cbd:{c.instructions+=4;NFSU2_TR(0x604cbd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604cbf:{NFSU2_TR(0x604cbf);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604cc1:{NFSU2_TR(0x604cc1);
__builtin_memmove((R+4),(R+24),4);
}
B604cc3:{NFSU2_TR(0x604cc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604cc8ull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B604cc8:L604cc8:{c.instructions+=6;NFSU2_TR(0x604cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B604ccb:{NFSU2_TR(0x604ccb);
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
B604cce:{NFSU2_TR(0x604cce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604ccf:{NFSU2_TR(0x604ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x644ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604cd5:{NFSU2_TR(0x604cd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x648ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604cdb:{NFSU2_TR(0x604cdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604ce0ull));
TAIL_STATIC(0x4022c0u,402);
}
B604ce0:L604ce0:{c.instructions+=6;NFSU2_TR(0x604ce0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B604ce3:{NFSU2_TR(0x604ce3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x225ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B604cea:{NFSU2_TR(0x604cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B604cf1:{NFSU2_TR(0x604cf1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B604cf8:{NFSU2_TR(0x604cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B604d02:{NFSU2_TR(0x604d02);
{goto L604d13;}
}
B604d04:L604d04:{c.instructions+=3;NFSU2_TR(0x604d04);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B604d07:{NFSU2_TR(0x604d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x644ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604d0d:{NFSU2_TR(0x604d0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x648ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604d13:L604d13:{c.instructions+=3;NFSU2_TR(0x604d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B604d16:{NFSU2_TR(0x604d16);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B604d19:{NFSU2_TR(0x604d19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604ff3;}}
}
B604d1f:L604d1f:{c.instructions+=5;NFSU2_TR(0x604d1f);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604d22:{NFSU2_TR(0x604d22);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B604d28:{NFSU2_TR(0x604d28);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604d2a:{NFSU2_TR(0x604d2a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B604d2d:{NFSU2_TR(0x604d2d);
if(r1(R+514)){{goto L604d48;}}
}
B604d2f:L604d2f:{c.instructions+=5;NFSU2_TR(0x604d2f);
{u32 ea_=u32(r4(R+24)+u32(664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604d35:{NFSU2_TR(0x604d35);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B604d38:{NFSU2_TR(0x604d38);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604d3a:{NFSU2_TR(0x604d3a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B604d3d:{NFSU2_TR(0x604d3d);
if(r1(R+514)){{goto L604d48;}}
}
B604d3f:L604d3f:{c.instructions+=2;NFSU2_TR(0x604d3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B604d42:{NFSU2_TR(0x604d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604d48:L604d48:{c.instructions+=2;NFSU2_TR(0x604d48);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B604d4b:{NFSU2_TR(0x604d4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604ff3;}}
}
B604d51:L604d51:{c.instructions+=2;NFSU2_TR(0x604d51);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B604d55:{NFSU2_TR(0x604d55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604e62;}}
}
B604d5b:L604d5b:{c.instructions+=10;NFSU2_TR(0x604d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x548ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B604d61:{NFSU2_TR(0x604d61);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B604d67:{NFSU2_TR(0x604d67);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B604d69:{NFSU2_TR(0x604d69);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604d6d:{NFSU2_TR(0x604d6d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B604d71:{NFSU2_TR(0x604d71);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B604d77:{NFSU2_TR(0x604d77);
{u32 ea_=u32(u32(8017420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B604d7d:{NFSU2_TR(0x604d7d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604d7f:{NFSU2_TR(0x604d7f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B604d82:{NFSU2_TR(0x604d82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604ff3;}}
}
B604d88:L604d88:{c.instructions+=3;NFSU2_TR(0x604d88);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604d8a:{NFSU2_TR(0x604d8a);
__builtin_memmove((R+4),(R+24),4);
}
B604d8c:{NFSU2_TR(0x604d8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604d91ull));
TAIL_STATIC(0x5ffe70u,5ff);
}
B604d91:L604d91:{c.instructions+=3;NFSU2_TR(0x604d91);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B604d96:{NFSU2_TR(0x604d96);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B604d98:{NFSU2_TR(0x604d98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604ff3;}}
}
B604d9e:L604d9e:{c.instructions+=3;NFSU2_TR(0x604d9e);
__builtin_memmove((R+0),gp(0x890104),4);
}
B604da3:{NFSU2_TR(0x604da3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B604da5:{NFSU2_TR(0x604da5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604ff3;}}
}
B604dab:L604dab:{c.instructions+=3;NFSU2_TR(0x604dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B604db1:{NFSU2_TR(0x604db1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B604db3:{NFSU2_TR(0x604db3);
if(r1(R+518)){{goto L604de3;}}
}
B604db5:L604db5:{c.instructions+=2;NFSU2_TR(0x604db5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B604dba:{NFSU2_TR(0x604dba);
if(r1(R+518)){{goto L604de3;}}
}
B604dbc:L604dbc:{c.instructions+=9;NFSU2_TR(0x604dbc);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B604dc2:{NFSU2_TR(0x604dc2);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B604dc4:{NFSU2_TR(0x604dc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604dc8:{NFSU2_TR(0x604dc8);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B604dcc:{NFSU2_TR(0x604dcc);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B604dd2:{NFSU2_TR(0x604dd2);
{u32 ea_=u32(u32(8017164u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B604dd8:{NFSU2_TR(0x604dd8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604dda:{NFSU2_TR(0x604dda);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B604ddd:{NFSU2_TR(0x604ddd);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L604ff3;}}
}
B604de3:L604de3:{c.instructions+=3;NFSU2_TR(0x604de3);
__builtin_memmove((R+0),gp(0x890118),4);
}
B604de8:{NFSU2_TR(0x604de8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B604deb:{NFSU2_TR(0x604deb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604ff3;}}
}
B604df1:L604df1:{c.instructions+=3;NFSU2_TR(0x604df1);
__builtin_memmove((R+4),gp(0x8900bc),4);
}
B604df7:{NFSU2_TR(0x604df7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B604dfa:{NFSU2_TR(0x604dfa);
if(r1(R+518)){{goto L604ff3;}}
}
B604e00:L604e00:{c.instructions+=5;NFSU2_TR(0x604e00);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604e03:{NFSU2_TR(0x604e03);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B604e09:{NFSU2_TR(0x604e09);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604e0b:{NFSU2_TR(0x604e0b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B604e0e:{NFSU2_TR(0x604e0e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L604ff3;}}
}
B604e14:L604e14:{c.instructions+=4;NFSU2_TR(0x604e14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B604e17:{NFSU2_TR(0x604e17);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8020e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B604e1d:{NFSU2_TR(0x604e1d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B604e1f:{NFSU2_TR(0x604e1f);
if(r1(R+518)){{goto L604e30;}}
}
B604e21:L604e21:{c.instructions+=3;NFSU2_TR(0x604e21);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604e23:{NFSU2_TR(0x604e23);
__builtin_memmove((R+4),(R+24),4);
}
B604e25:{NFSU2_TR(0x604e25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604e2aull));
TAIL_STATIC(0x5ffe70u,5ff);
}
B604e2a:L604e2a:{c.instructions+=1;NFSU2_TR(0x604e2a);
__builtin_memmove((R+4),gp(0x8900bc),4);
}
B604e30:L604e30:{c.instructions+=3;NFSU2_TR(0x604e30);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B604e32:{NFSU2_TR(0x604e32);
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
B604e34:{NFSU2_TR(0x604e34);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L604f7d;}}
}
B604e3a:L604e3a:{c.instructions+=1;NFSU2_TR(0x604e3a);
__builtin_memmove((R+12),(R+12),4);
}
B604e40:L604e40:{c.instructions+=5;NFSU2_TR(0x604e40);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B604e47:{NFSU2_TR(0x604e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B604e4a:{NFSU2_TR(0x604e4a);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8020e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B604e50:{NFSU2_TR(0x604e50);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B604e52:{NFSU2_TR(0x604e52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604ff3;}}
}
B604e58:L604e58:{c.instructions+=3;NFSU2_TR(0x604e58);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B604e59:{NFSU2_TR(0x604e59);
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
B604e5b:{NFSU2_TR(0x604e5b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x604e40u);}goto L604e40;}}
}
B604e5d:L604e5d:{c.instructions+=1;NFSU2_TR(0x604e5d);
{goto L604f7d;}
}
B604e62:L604e62:{c.instructions+=6;NFSU2_TR(0x604e62);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B604e68:{NFSU2_TR(0x604e68);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B604e6e:{NFSU2_TR(0x604e6e);
{u32 ea_=u32(r4(R+28)+u32(1348u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B604e74:{NFSU2_TR(0x604e74);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604e76:{NFSU2_TR(0x604e76);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B604e79:{NFSU2_TR(0x604e79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604ff3;}}
}
B604e7f:L604e7f:{c.instructions+=3;NFSU2_TR(0x604e7f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604e81:{NFSU2_TR(0x604e81);
__builtin_memmove((R+4),(R+24),4);
}
B604e83:{NFSU2_TR(0x604e83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604e88ull));
TAIL_STATIC(0x5ffe70u,5ff);
}
B604e88:L604e88:{c.instructions+=8;NFSU2_TR(0x604e88);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604e8a:{NFSU2_TR(0x604e8a);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B604e8e:{NFSU2_TR(0x604e8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604e8f:{NFSU2_TR(0x604e8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B604e93:{NFSU2_TR(0x604e93);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604e94:{NFSU2_TR(0x604e94);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604e99:{NFSU2_TR(0x604e99);
__builtin_memmove((R+4),(R+28),4);
}
B604e9b:{NFSU2_TR(0x604e9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604ea0ull));
TAIL_STATIC(0x5ec3d0u,5ec);
}
B604ea0:L604ea0:{c.instructions+=6;NFSU2_TR(0x604ea0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B604ea2:{NFSU2_TR(0x604ea2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604ea6:{NFSU2_TR(0x604ea6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B604eac:{NFSU2_TR(0x604eac);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604eae:{NFSU2_TR(0x604eae);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B604eb1:{NFSU2_TR(0x604eb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604ff3;}}
}
B604eb7:L604eb7:{c.instructions+=3;NFSU2_TR(0x604eb7);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B604ebc:{NFSU2_TR(0x604ebc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B604ebe:{NFSU2_TR(0x604ebe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604ff3;}}
}
B604ec4:L604ec4:{c.instructions+=3;NFSU2_TR(0x604ec4);
__builtin_memmove((R+0),gp(0x890104),4);
}
B604ec9:{NFSU2_TR(0x604ec9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B604ecb:{NFSU2_TR(0x604ecb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604ff3;}}
}
B604ed1:L604ed1:{c.instructions+=3;NFSU2_TR(0x604ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B604ed7:{NFSU2_TR(0x604ed7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B604ed9:{NFSU2_TR(0x604ed9);
if(r1(R+518)){{goto L604f09;}}
}
B604edb:L604edb:{c.instructions+=2;NFSU2_TR(0x604edb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B604ee0:{NFSU2_TR(0x604ee0);
if(r1(R+518)){{goto L604f09;}}
}
B604ee2:L604ee2:{c.instructions+=9;NFSU2_TR(0x604ee2);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B604ee8:{NFSU2_TR(0x604ee8);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B604eea:{NFSU2_TR(0x604eea);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604eee:{NFSU2_TR(0x604eee);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B604ef2:{NFSU2_TR(0x604ef2);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B604ef8:{NFSU2_TR(0x604ef8);
{u32 ea_=u32(u32(8017164u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B604efe:{NFSU2_TR(0x604efe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604f00:{NFSU2_TR(0x604f00);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B604f03:{NFSU2_TR(0x604f03);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L604ff3;}}
}
B604f09:L604f09:{c.instructions+=3;NFSU2_TR(0x604f09);
__builtin_memmove((R+0),gp(0x890118),4);
}
B604f0e:{NFSU2_TR(0x604f0e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B604f11:{NFSU2_TR(0x604f11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604ff3;}}
}
B604f17:L604f17:{c.instructions+=3;NFSU2_TR(0x604f17);
__builtin_memmove((R+4),gp(0x8900bc),4);
}
B604f1d:{NFSU2_TR(0x604f1d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B604f20:{NFSU2_TR(0x604f20);
if(r1(R+518)){{goto L604ff3;}}
}
B604f26:L604f26:{c.instructions+=5;NFSU2_TR(0x604f26);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604f29:{NFSU2_TR(0x604f29);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B604f2f:{NFSU2_TR(0x604f2f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604f31:{NFSU2_TR(0x604f31);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B604f34:{NFSU2_TR(0x604f34);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L604ff3;}}
}
B604f3a:L604f3a:{c.instructions+=4;NFSU2_TR(0x604f3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B604f3d:{NFSU2_TR(0x604f3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8020e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B604f43:{NFSU2_TR(0x604f43);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B604f45:{NFSU2_TR(0x604f45);
if(r1(R+518)){{goto L604f56;}}
}
B604f47:L604f47:{c.instructions+=3;NFSU2_TR(0x604f47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604f49:{NFSU2_TR(0x604f49);
__builtin_memmove((R+4),(R+24),4);
}
B604f4b:{NFSU2_TR(0x604f4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604f50ull));
TAIL_STATIC(0x5ffe70u,5ff);
}
B604f50:L604f50:{c.instructions+=1;NFSU2_TR(0x604f50);
__builtin_memmove((R+4),gp(0x8900bc),4);
}
B604f56:L604f56:{c.instructions+=3;NFSU2_TR(0x604f56);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B604f58:{NFSU2_TR(0x604f58);
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
B604f5a:{NFSU2_TR(0x604f5a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L604f7d;}}
}
B604f5c:L604f5c:{c.instructions+=1;NFSU2_TR(0x604f5c);
__builtin_memmove((R+16),(R+16),4);
}
B604f60:L604f60:{c.instructions+=5;NFSU2_TR(0x604f60);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B604f67:{NFSU2_TR(0x604f67);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B604f6a:{NFSU2_TR(0x604f6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8020e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B604f70:{NFSU2_TR(0x604f70);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B604f72:{NFSU2_TR(0x604f72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L604ff3;}}
}
B604f78:L604f78:{c.instructions+=3;NFSU2_TR(0x604f78);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B604f79:{NFSU2_TR(0x604f79);
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
B604f7b:{NFSU2_TR(0x604f7b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x604f60u);}goto L604f60;}}
}
B604f7d:L604f7d:{c.instructions+=12;NFSU2_TR(0x604f7d);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B604f82:{NFSU2_TR(0x604f82);
__builtin_memmove((R+8),gp(0x7a54f8),4);
}
B604f88:{NFSU2_TR(0x604f88);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604f89:{NFSU2_TR(0x604f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604f8f:{NFSU2_TR(0x604f8f);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B604f95:{NFSU2_TR(0x604f95);
__builtin_memmove((R+0),gp(0x7a5524),4);
}
B604f9a:{NFSU2_TR(0x604f9a);
u8 U[4];
w4(U+0,u32(0x6022d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604f9f:{NFSU2_TR(0x604f9f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604fa0:{NFSU2_TR(0x604fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B604fa6:{NFSU2_TR(0x604fa6);
__builtin_memmove((R+4),gp(0x890080),4);
}
B604fac:{NFSU2_TR(0x604fac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604fad:{NFSU2_TR(0x604fad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604fb2ull));
TAIL_STATIC(0x5ea280u,5ea);
}
B604fb2:L604fb2:{c.instructions+=3;NFSU2_TR(0x604fb2);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B604fb8:{NFSU2_TR(0x604fb8);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x5ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B604fbb:{NFSU2_TR(0x604fbb);
if(r1(R+518)){{goto L604fc8;}}
}
B604fbd:L604fbd:{c.instructions+=4;NFSU2_TR(0x604fbd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604fbf:{NFSU2_TR(0x604fbf);
__builtin_memmove((R+4),(R+24),4);
}
B604fc1:{NFSU2_TR(0x604fc1);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604fc3:{NFSU2_TR(0x604fc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604fc8ull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B604fc8:L604fc8:{c.instructions+=3;NFSU2_TR(0x604fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B604fcb:{NFSU2_TR(0x604fcb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B604fcc:{NFSU2_TR(0x604fcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x604fd1ull));
TAIL_STATIC(0x4022c0u,402);
}
B604fd1:L604fd1:{c.instructions+=5;NFSU2_TR(0x604fd1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B604fd4:{NFSU2_TR(0x604fd4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x225ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B604fdb:{NFSU2_TR(0x604fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B604fe2:{NFSU2_TR(0x604fe2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B604fe9:{NFSU2_TR(0x604fe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B604ff3:L604ff3:{c.instructions+=4;NFSU2_TR(0x604ff3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B604ff7:{NFSU2_TR(0x604ff7);
{u32 ea_=u32(u32(8017388u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B604ffd:{NFSU2_TR(0x604ffd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B604fff:{NFSU2_TR(0x604fff);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
TAIL_STATIC(0x605002u,605);
}
XIT:NFSU2_TR_EXIT(0x604,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
