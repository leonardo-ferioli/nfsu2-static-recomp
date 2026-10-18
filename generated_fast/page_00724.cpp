#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f6(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_722(u8* __restrict R,Cpu& c);
u32 body_725(u8* __restrict R,Cpu& c);
u32 body_726(u8* __restrict R,Cpu& c);
u32 body_727(u8* __restrict R,Cpu& c);
u32 body_728(u8* __restrict R,Cpu& c);
u32 body_729(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x724,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x724,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_724(u8* __restrict R,Cpu& c);
u32 page_724(Cpu& c){return body_724(c.regs.data(),c);}
__attribute__((noinline)) u32 body_724(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x724000:goto L724000;
case 0x724002:goto L724002;
case 0x724005:c.instructions+=6;goto B724005;
case 0x724008:c.instructions+=5;goto B724008;
case 0x72400e:c.instructions+=4;goto B72400e;
case 0x724011:c.instructions+=3;goto B724011;
case 0x724012:c.instructions+=2;goto B724012;
case 0x724015:c.instructions+=1;goto B724015;
case 0x72401a:goto L72401a;
case 0x72401c:c.instructions+=3;goto B72401c;
case 0x724022:c.instructions+=2;goto B724022;
case 0x724023:c.instructions+=1;goto B724023;
case 0x724025:goto L724025;
case 0x724026:c.instructions+=2;goto B724026;
case 0x724027:c.instructions+=1;goto B724027;
case 0x72402c:goto L72402c;
case 0x72402d:c.instructions+=4;goto B72402d;
case 0x724033:c.instructions+=3;goto B724033;
case 0x724034:c.instructions+=2;goto B724034;
case 0x724035:c.instructions+=1;goto B724035;
case 0x724037:goto L724037;
case 0x724038:c.instructions+=5;goto B724038;
case 0x72403a:c.instructions+=4;goto B72403a;
case 0x72403b:c.instructions+=3;goto B72403b;
case 0x72403c:c.instructions+=2;goto B72403c;
case 0x72403d:c.instructions+=1;goto B72403d;
case 0x72403e:goto L72403e;
case 0x72403f:c.instructions+=4;goto B72403f;
case 0x724041:c.instructions+=3;goto B724041;
case 0x724042:c.instructions+=2;goto B724042;
case 0x724049:c.instructions+=1;goto B724049;
case 0x72404b:goto L72404b;
case 0x72404d:c.instructions+=3;goto B72404d;
case 0x72404e:c.instructions+=2;goto B72404e;
case 0x72404f:c.instructions+=1;goto B72404f;
case 0x724050:goto L724050;
case 0x724051:c.instructions+=2;goto B724051;
case 0x724054:c.instructions+=1;goto B724054;
case 0x724059:goto L724059;
case 0x72405b:c.instructions+=3;goto B72405b;
case 0x72405d:c.instructions+=2;goto B72405d;
case 0x72405e:c.instructions+=1;goto B72405e;
case 0x724060:goto L724060;
case 0x724064:c.instructions+=4;goto B724064;
case 0x724067:c.instructions+=3;goto B724067;
case 0x724068:c.instructions+=2;goto B724068;
case 0x724069:c.instructions+=1;goto B724069;
case 0x72406e:goto L72406e;
case 0x72406f:c.instructions+=2;goto B72406f;
case 0x724070:c.instructions+=1;goto B724070;
case 0x724072:goto L724072;
case 0x724075:c.instructions+=2;goto B724075;
case 0x724078:c.instructions+=1;goto B724078;
case 0x72407d:goto L72407d;
case 0x724080:c.instructions+=3;goto B724080;
case 0x724081:c.instructions+=2;goto B724081;
case 0x724082:c.instructions+=1;goto B724082;
case 0x724087:goto L724087;
case 0x72408a:goto L72408a;
case 0x72408c:c.instructions+=1;goto B72408c;
case 0x72408e:goto L72408e;
case 0x724090:c.instructions+=3;goto B724090;
case 0x724091:c.instructions+=2;goto B724091;
case 0x724092:c.instructions+=1;goto B724092;
case 0x724093:goto L724093;
case 0x724094:c.instructions+=4;goto B724094;
case 0x724096:c.instructions+=3;goto B724096;
case 0x724097:c.instructions+=2;goto B724097;
case 0x72409e:c.instructions+=1;goto B72409e;
case 0x7240a0:goto L7240a0;
case 0x7240a2:c.instructions+=3;goto B7240a2;
case 0x7240a3:c.instructions+=2;goto B7240a3;
case 0x7240a4:c.instructions+=1;goto B7240a4;
case 0x7240a5:goto L7240a5;
case 0x7240a6:c.instructions+=5;goto B7240a6;
case 0x7240a9:c.instructions+=4;goto B7240a9;
case 0x7240ae:c.instructions+=3;goto B7240ae;
case 0x7240b0:c.instructions+=2;goto B7240b0;
case 0x7240b1:c.instructions+=1;goto B7240b1;
case 0x7240b3:goto L7240b3;
case 0x7240b8:c.instructions+=2;goto B7240b8;
case 0x7240ba:c.instructions+=1;goto B7240ba;
case 0x7240bc:goto L7240bc;
case 0x7240be:goto L7240be;
case 0x7240c1:c.instructions+=1;goto B7240c1;
case 0x7240c6:goto L7240c6;
case 0x7240c8:c.instructions+=3;goto B7240c8;
case 0x7240ca:c.instructions+=2;goto B7240ca;
case 0x7240cb:c.instructions+=1;goto B7240cb;
case 0x7240cd:goto L7240cd;
case 0x7240d1:c.instructions+=1;goto B7240d1;
case 0x7240d3:goto L7240d3;
case 0x7240d6:c.instructions+=5;goto B7240d6;
case 0x7240d9:c.instructions+=4;goto B7240d9;
case 0x7240dc:c.instructions+=3;goto B7240dc;
case 0x7240e2:c.instructions+=2;goto B7240e2;
case 0x7240e6:c.instructions+=1;goto B7240e6;
case 0x7240e8:goto L7240e8;
case 0x7240ea:c.instructions+=7;goto B7240ea;
case 0x7240ee:c.instructions+=6;goto B7240ee;
case 0x7240f2:c.instructions+=5;goto B7240f2;
case 0x7240f6:c.instructions+=4;goto B7240f6;
case 0x7240f9:c.instructions+=3;goto B7240f9;
case 0x7240fd:c.instructions+=2;goto B7240fd;
case 0x724104:c.instructions+=1;goto B724104;
case 0x724106:goto L724106;
case 0x72410b:goto L72410b;
case 0x72410e:c.instructions+=1;goto B72410e;
case 0x724113:goto L724113;
case 0x724114:goto L724114;
case 0x724117:c.instructions+=3;goto B724117;
case 0x724118:c.instructions+=2;goto B724118;
case 0x724119:c.instructions+=1;goto B724119;
case 0x72411e:goto L72411e;
case 0x724120:c.instructions+=3;goto B724120;
case 0x724121:c.instructions+=2;goto B724121;
case 0x724122:c.instructions+=1;goto B724122;
case 0x724124:goto L724124;
case 0x724126:c.instructions+=4;goto B724126;
case 0x724127:c.instructions+=3;goto B724127;
case 0x724128:c.instructions+=2;goto B724128;
case 0x724129:c.instructions+=1;goto B724129;
case 0x72412a:goto L72412a;
case 0x72412b:c.instructions+=4;goto B72412b;
case 0x72412d:c.instructions+=3;goto B72412d;
case 0x724130:c.instructions+=2;goto B724130;
case 0x724137:c.instructions+=1;goto B724137;
case 0x724139:goto L724139;
case 0x72413b:c.instructions+=3;goto B72413b;
case 0x72413c:c.instructions+=2;goto B72413c;
case 0x72413d:c.instructions+=1;goto B72413d;
case 0x72413e:goto L72413e;
case 0x724141:c.instructions+=1;goto B724141;
case 0x724146:goto L724146;
case 0x724148:c.instructions+=3;goto B724148;
case 0x724149:c.instructions+=2;goto B724149;
case 0x72414c:c.instructions+=1;goto B72414c;
case 0x724152:goto L724152;
case 0x724155:c.instructions+=7;goto B724155;
case 0x724159:c.instructions+=6;goto B724159;
case 0x72415c:c.instructions+=5;goto B72415c;
case 0x72415d:c.instructions+=4;goto B72415d;
case 0x724163:c.instructions+=3;goto B724163;
case 0x724166:c.instructions+=2;goto B724166;
case 0x724169:c.instructions+=1;goto B724169;
case 0x72416e:goto L72416e;
case 0x724170:c.instructions+=3;goto B724170;
case 0x724171:c.instructions+=2;goto B724171;
case 0x724172:c.instructions+=1;goto B724172;
case 0x724178:goto L724178;
case 0x724179:c.instructions+=2;goto B724179;
case 0x72417a:c.instructions+=1;goto B72417a;
case 0x72417b:goto L72417b;
case 0x72417e:c.instructions+=7;goto B72417e;
case 0x724182:c.instructions+=6;goto B724182;
case 0x724185:c.instructions+=5;goto B724185;
case 0x724188:c.instructions+=4;goto B724188;
case 0x72418e:c.instructions+=3;goto B72418e;
case 0x724192:c.instructions+=2;goto B724192;
case 0x724196:c.instructions+=1;goto B724196;
case 0x72419c:goto L72419c;
case 0x72419f:goto L72419f;
case 0x7241a2:c.instructions+=11;goto B7241a2;
case 0x7241a4:c.instructions+=10;goto B7241a4;
case 0x7241a7:c.instructions+=9;goto B7241a7;
case 0x7241aa:c.instructions+=8;goto B7241aa;
case 0x7241b0:c.instructions+=7;goto B7241b0;
case 0x7241b3:c.instructions+=6;goto B7241b3;
case 0x7241b6:c.instructions+=5;goto B7241b6;
case 0x7241b9:c.instructions+=4;goto B7241b9;
case 0x7241bb:c.instructions+=3;goto B7241bb;
case 0x7241bd:c.instructions+=2;goto B7241bd;
case 0x7241c0:c.instructions+=1;goto B7241c0;
case 0x7241c2:goto L7241c2;
case 0x7241c5:c.instructions+=4;goto B7241c5;
case 0x7241c6:c.instructions+=3;goto B7241c6;
case 0x7241ca:c.instructions+=2;goto B7241ca;
case 0x7241cd:c.instructions+=1;goto B7241cd;
case 0x7241d2:goto L7241d2;
case 0x7241d3:c.instructions+=1;goto B7241d3;
case 0x7241d8:goto L7241d8;
case 0x7241d9:c.instructions+=1;goto B7241d9;
case 0x7241da:goto L7241da;
case 0x7241dd:c.instructions+=5;goto B7241dd;
case 0x7241e1:c.instructions+=4;goto B7241e1;
case 0x7241e2:c.instructions+=3;goto B7241e2;
case 0x7241e3:c.instructions+=2;goto B7241e3;
case 0x7241e6:c.instructions+=1;goto B7241e6;
case 0x7241e8:goto L7241e8;
case 0x7241ec:c.instructions+=1;goto B7241ec;
case 0x7241ee:goto L7241ee;
case 0x7241f2:c.instructions+=1;goto B7241f2;
case 0x7241f4:goto L7241f4;
case 0x7241f6:c.instructions+=2;goto B7241f6;
case 0x7241fc:c.instructions+=1;goto B7241fc;
case 0x7241fe:goto L7241fe;
case 0x7241ff:c.instructions+=2;goto B7241ff;
case 0x724202:c.instructions+=1;goto B724202;
case 0x724207:goto L724207;
case 0x724208:c.instructions+=4;goto B724208;
case 0x72420e:c.instructions+=3;goto B72420e;
case 0x72420f:c.instructions+=2;goto B72420f;
case 0x724210:c.instructions+=1;goto B724210;
case 0x724212:goto L724212;
case 0x724214:goto L724214;
case 0x724216:c.instructions+=2;goto B724216;
case 0x724219:c.instructions+=1;goto B724219;
case 0x72421e:goto L72421e;
case 0x72421f:c.instructions+=1;goto B72421f;
case 0x724220:goto L724220;
case 0x724223:c.instructions+=3;goto B724223;
case 0x724224:c.instructions+=2;goto B724224;
case 0x724227:c.instructions+=1;goto B724227;
case 0x72422c:goto L72422c;
case 0x72422e:c.instructions+=3;goto B72422e;
case 0x72422f:c.instructions+=2;goto B72422f;
case 0x724230:c.instructions+=1;goto B724230;
case 0x724236:goto L724236;
case 0x724237:c.instructions+=2;goto B724237;
case 0x724238:c.instructions+=1;goto B724238;
case 0x724239:goto L724239;
case 0x72423c:c.instructions+=2;goto B72423c;
case 0x72423d:c.instructions+=1;goto B72423d;
case 0x72423e:goto L72423e;
case 0x724242:c.instructions+=13;goto B724242;
case 0x724244:c.instructions+=12;goto B724244;
case 0x724245:c.instructions+=11;goto B724245;
case 0x724247:c.instructions+=10;goto B724247;
case 0x72424a:c.instructions+=9;goto B72424a;
case 0x72424d:c.instructions+=8;goto B72424d;
case 0x724251:c.instructions+=7;goto B724251;
case 0x724255:c.instructions+=6;goto B724255;
case 0x724258:c.instructions+=5;goto B724258;
case 0x72425b:c.instructions+=4;goto B72425b;
case 0x72425e:c.instructions+=3;goto B72425e;
case 0x724262:c.instructions+=2;goto B724262;
case 0x724265:c.instructions+=1;goto B724265;
case 0x724266:goto L724266;
case 0x724269:c.instructions+=4;goto B724269;
case 0x72426b:c.instructions+=3;goto B72426b;
case 0x72426e:c.instructions+=2;goto B72426e;
case 0x72426f:c.instructions+=1;goto B72426f;
case 0x724271:goto L724271;
case 0x724273:c.instructions+=3;goto B724273;
case 0x724276:c.instructions+=2;goto B724276;
case 0x724279:c.instructions+=1;goto B724279;
case 0x72427a:goto L72427a;
case 0x72427d:c.instructions+=6;goto B72427d;
case 0x72427e:c.instructions+=5;goto B72427e;
case 0x724280:c.instructions+=4;goto B724280;
case 0x724281:c.instructions+=3;goto B724281;
case 0x724284:c.instructions+=2;goto B724284;
case 0x724285:c.instructions+=1;goto B724285;
case 0x724287:goto L724287;
case 0x724289:c.instructions+=2;goto B724289;
case 0x72428a:c.instructions+=1;goto B72428a;
case 0x72428b:goto L72428b;
case 0x724295:c.instructions+=6;goto B724295;
case 0x72429f:c.instructions+=5;goto B72429f;
case 0x7242a9:c.instructions+=4;goto B7242a9;
case 0x7242b3:c.instructions+=3;goto B7242b3;
case 0x7242bd:c.instructions+=2;goto B7242bd;
case 0x7242c7:c.instructions+=1;goto B7242c7;
case 0x7242c8:goto L7242c8;
case 0x7242cd:goto L7242cd;
case 0x7242cf:c.instructions+=3;goto B7242cf;
case 0x7242d5:c.instructions+=2;goto B7242d5;
case 0x7242df:c.instructions+=1;goto B7242df;
case 0x7242e1:goto L7242e1;
case 0x7242e2:c.instructions+=4;goto B7242e2;
case 0x7242e4:c.instructions+=3;goto B7242e4;
case 0x7242e5:c.instructions+=2;goto B7242e5;
case 0x7242ea:c.instructions+=1;goto B7242ea;
case 0x7242ef:goto L7242ef;
case 0x7242f2:c.instructions+=1;goto B7242f2;
case 0x7242fc:goto L7242fc;
case 0x724301:c.instructions+=1;goto B724301;
case 0x724306:goto L724306;
case 0x724307:c.instructions+=2;goto B724307;
case 0x724309:c.instructions+=1;goto B724309;
case 0x72430a:goto L72430a;
case 0x72430f:goto L72430f;
case 0x724314:goto L724314;
case 0x724319:c.instructions+=2;goto B724319;
case 0x72431f:c.instructions+=1;goto B72431f;
case 0x724321:goto L724321;
case 0x724326:c.instructions+=1;goto B724326;
case 0x724330:goto L724330;
case 0x724332:c.instructions+=1;goto B724332;
case 0x724333:goto L724333;
case 0x72433a:c.instructions+=1;goto B72433a;
case 0x72433c:goto L72433c;
case 0x72433e:c.instructions+=2;goto B72433e;
case 0x72433f:c.instructions+=1;goto B72433f;
case 0x724340:goto L724340;
case 0x724341:c.instructions+=2;goto B724341;
case 0x724345:c.instructions+=1;goto B724345;
case 0x72434a:goto L72434a;
case 0x72434e:c.instructions+=2;goto B72434e;
case 0x72434f:c.instructions+=1;goto B72434f;
case 0x724354:goto L724354;
case 0x724356:c.instructions+=3;goto B724356;
case 0x724357:c.instructions+=2;goto B724357;
case 0x724358:c.instructions+=1;goto B724358;
case 0x72435a:goto L72435a;
case 0x72435c:c.instructions+=3;goto B72435c;
case 0x72435d:c.instructions+=2;goto B72435d;
case 0x72435e:c.instructions+=1;goto B72435e;
case 0x72435f:goto L72435f;
case 0x724364:c.instructions+=5;goto B724364;
case 0x724365:c.instructions+=4;goto B724365;
case 0x724368:c.instructions+=3;goto B724368;
case 0x72436c:c.instructions+=2;goto B72436c;
case 0x72436e:c.instructions+=1;goto B72436e;
case 0x724370:goto L724370;
case 0x724374:c.instructions+=2;goto B724374;
case 0x724376:c.instructions+=1;goto B724376;
case 0x724378:goto L724378;
case 0x72437c:c.instructions+=5;goto B72437c;
case 0x72437d:c.instructions+=4;goto B72437d;
case 0x72437e:c.instructions+=3;goto B72437e;
case 0x72437f:c.instructions+=2;goto B72437f;
case 0x724380:c.instructions+=1;goto B724380;
case 0x724385:goto L724385;
case 0x724386:c.instructions+=4;goto B724386;
case 0x724387:c.instructions+=3;goto B724387;
case 0x724388:c.instructions+=2;goto B724388;
case 0x724389:c.instructions+=1;goto B724389;
case 0x72438e:goto L72438e;
case 0x724391:c.instructions+=1;goto B724391;
case 0x724393:goto L724393;
case 0x724395:c.instructions+=1;goto B724395;
case 0x724396:goto L724396;
case 0x724397:c.instructions+=2;goto B724397;
case 0x724398:c.instructions+=1;goto B724398;
case 0x724399:goto L724399;
case 0x7243a0:c.instructions+=1;goto B7243a0;
case 0x7243a2:goto L7243a2;
case 0x7243a4:c.instructions+=1;goto B7243a4;
case 0x7243a5:goto L7243a5;
case 0x7243aa:goto L7243aa;
case 0x7243ac:c.instructions+=5;goto B7243ac;
case 0x7243b0:c.instructions+=4;goto B7243b0;
case 0x7243b2:c.instructions+=3;goto B7243b2;
case 0x7243b6:c.instructions+=2;goto B7243b6;
case 0x7243ba:c.instructions+=1;goto B7243ba;
case 0x7243bf:goto L7243bf;
case 0x7243c2:c.instructions+=1;goto B7243c2;
case 0x7243c3:goto L7243c3;
case 0x7243c4:c.instructions+=9;goto B7243c4;
case 0x7243c6:c.instructions+=8;goto B7243c6;
case 0x7243c8:c.instructions+=7;goto B7243c8;
case 0x7243cb:c.instructions+=6;goto B7243cb;
case 0x7243ce:c.instructions+=5;goto B7243ce;
case 0x7243d1:c.instructions+=4;goto B7243d1;
case 0x7243d4:c.instructions+=3;goto B7243d4;
case 0x7243d7:c.instructions+=2;goto B7243d7;
case 0x7243da:c.instructions+=1;goto B7243da;
case 0x7243df:goto L7243df;
case 0x7243e2:c.instructions+=2;goto B7243e2;
case 0x7243e3:c.instructions+=1;goto B7243e3;
case 0x7243e4:goto L7243e4;
case 0x7243eb:c.instructions+=3;goto B7243eb;
case 0x7243ec:c.instructions+=2;goto B7243ec;
case 0x7243ed:c.instructions+=1;goto B7243ed;
case 0x7243ef:goto L7243ef;
case 0x7243f0:c.instructions+=11;goto B7243f0;
case 0x7243f2:c.instructions+=10;goto B7243f2;
case 0x7243f4:c.instructions+=9;goto B7243f4;
case 0x7243f5:c.instructions+=8;goto B7243f5;
case 0x7243f6:c.instructions+=7;goto B7243f6;
case 0x7243ff:c.instructions+=6;goto B7243ff;
case 0x724406:c.instructions+=5;goto B724406;
case 0x72440c:c.instructions+=4;goto B72440c;
case 0x724413:c.instructions+=3;goto B724413;
case 0x72441d:c.instructions+=2;goto B72441d;
case 0x724422:c.instructions+=1;goto B724422;
case 0x724427:goto L724427;
case 0x724429:goto L724429;
case 0x72442e:goto L72442e;
case 0x724430:c.instructions+=1;goto B724430;
case 0x724432:goto L724432;
case 0x724437:goto L724437;
case 0x72443c:goto L72443c;
case 0x724442:c.instructions+=1;goto B724442;
case 0x724443:goto L724443;
case 0x724447:c.instructions+=4;goto B724447;
case 0x72444c:c.instructions+=3;goto B72444c;
case 0x72444e:c.instructions+=2;goto B72444e;
case 0x72444f:c.instructions+=1;goto B72444f;
case 0x724454:goto L724454;
case 0x724456:goto L724456;
case 0x724457:c.instructions+=2;goto B724457;
case 0x724458:c.instructions+=1;goto B724458;
case 0x724459:goto L724459;
case 0x72445d:c.instructions+=8;goto B72445d;
case 0x72445e:c.instructions+=7;goto B72445e;
case 0x72445f:c.instructions+=6;goto B72445f;
case 0x724460:c.instructions+=5;goto B724460;
case 0x724462:c.instructions+=4;goto B724462;
case 0x724463:c.instructions+=3;goto B724463;
case 0x724468:c.instructions+=2;goto B724468;
case 0x72446b:c.instructions+=1;goto B72446b;
case 0x72446d:goto L72446d;
case 0x72446f:goto L72446f;
case 0x724471:c.instructions+=3;goto B724471;
case 0x724477:c.instructions+=2;goto B724477;
case 0x724478:c.instructions+=1;goto B724478;
case 0x72447d:goto L72447d;
case 0x72447f:goto L72447f;
case 0x724484:goto L724484;
case 0x724486:c.instructions+=3;goto B724486;
case 0x724487:c.instructions+=2;goto B724487;
case 0x724489:c.instructions+=1;goto B724489;
case 0x72448e:goto L72448e;
case 0x724490:goto L724490;
case 0x724491:c.instructions+=4;goto B724491;
case 0x724492:c.instructions+=3;goto B724492;
case 0x724494:c.instructions+=2;goto B724494;
case 0x724495:c.instructions+=1;goto B724495;
case 0x724496:goto L724496;
case 0x72449b:goto L72449b;
case 0x72449d:c.instructions+=1;goto B72449d;
case 0x72449f:goto L72449f;
case 0x7244a1:c.instructions+=2;goto B7244a1;
case 0x7244a2:c.instructions+=1;goto B7244a2;
case 0x7244a3:goto L7244a3;
case 0x7244a8:c.instructions+=2;goto B7244a8;
case 0x7244aa:c.instructions+=1;goto B7244aa;
case 0x7244ac:goto L7244ac;
case 0x7244ae:goto L7244ae;
case 0x7244b3:c.instructions+=2;goto B7244b3;
case 0x7244b5:c.instructions+=1;goto B7244b5;
case 0x7244b7:goto L7244b7;
case 0x7244b9:goto L7244b9;
case 0x7244be:c.instructions+=2;goto B7244be;
case 0x7244c0:c.instructions+=1;goto B7244c0;
case 0x7244c2:goto L7244c2;
case 0x7244c4:goto L7244c4;
case 0x7244c9:c.instructions+=2;goto B7244c9;
case 0x7244cb:c.instructions+=1;goto B7244cb;
case 0x7244cd:goto L7244cd;
case 0x7244cf:goto L7244cf;
case 0x7244d4:c.instructions+=2;goto B7244d4;
case 0x7244d6:c.instructions+=1;goto B7244d6;
case 0x7244d8:goto L7244d8;
case 0x7244da:goto L7244da;
case 0x7244df:goto L7244df;
case 0x7244e4:c.instructions+=2;goto B7244e4;
case 0x7244e6:c.instructions+=1;goto B7244e6;
case 0x7244e8:goto L7244e8;
case 0x7244ea:c.instructions+=1;goto B7244ea;
case 0x7244ec:goto L7244ec;
case 0x7244ed:goto L7244ed;
case 0x7244ee:c.instructions+=2;goto B7244ee;
case 0x7244f0:c.instructions+=1;goto B7244f0;
case 0x7244f5:goto L7244f5;
case 0x7244fa:goto L7244fa;
case 0x724500:c.instructions+=1;goto B724500;
case 0x724505:goto L724505;
case 0x72450b:c.instructions+=1;goto B72450b;
case 0x724510:goto L724510;
case 0x724513:c.instructions+=1;goto B724513;
case 0x724518:goto L724518;
case 0x72451d:goto L72451d;
case 0x72451f:c.instructions+=2;goto B72451f;
case 0x724526:c.instructions+=1;goto B724526;
case 0x72452b:goto L72452b;
case 0x72452d:c.instructions+=2;goto B72452d;
case 0x72452e:c.instructions+=1;goto B72452e;
case 0x72452f:goto L72452f;
case 0x724536:c.instructions+=8;goto B724536;
case 0x724537:c.instructions+=7;goto B724537;
case 0x72453d:c.instructions+=6;goto B72453d;
case 0x724540:c.instructions+=5;goto B724540;
case 0x724543:c.instructions+=4;goto B724543;
case 0x724544:c.instructions+=3;goto B724544;
case 0x724547:c.instructions+=2;goto B724547;
case 0x724548:c.instructions+=1;goto B724548;
case 0x72454d:goto L72454d;
case 0x72454e:c.instructions+=3;goto B72454e;
case 0x72454f:c.instructions+=2;goto B72454f;
case 0x724554:c.instructions+=1;goto B724554;
case 0x724559:goto L724559;
case 0x724560:c.instructions+=7;goto B724560;
case 0x724563:c.instructions+=6;goto B724563;
case 0x724566:c.instructions+=5;goto B724566;
case 0x72456c:c.instructions+=4;goto B72456c;
case 0x72456f:c.instructions+=3;goto B72456f;
case 0x724571:c.instructions+=2;goto B724571;
case 0x724573:c.instructions+=1;goto B724573;
case 0x724575:goto L724575;
case 0x724577:goto L724577;
case 0x72457d:c.instructions+=5;goto B72457d;
case 0x724581:c.instructions+=4;goto B724581;
case 0x724587:c.instructions+=3;goto B724587;
case 0x724589:c.instructions+=2;goto B724589;
case 0x72458b:c.instructions+=1;goto B72458b;
case 0x72458d:goto L72458d;
case 0x724593:c.instructions+=7;goto B724593;
case 0x724595:c.instructions+=6;goto B724595;
case 0x724599:c.instructions+=5;goto B724599;
case 0x72459c:c.instructions+=4;goto B72459c;
case 0x7245a2:c.instructions+=3;goto B7245a2;
case 0x7245a3:c.instructions+=2;goto B7245a3;
case 0x7245a5:c.instructions+=1;goto B7245a5;
case 0x7245a7:goto L7245a7;
case 0x7245aa:c.instructions+=5;goto B7245aa;
case 0x7245b1:c.instructions+=4;goto B7245b1;
case 0x7245b2:c.instructions+=3;goto B7245b2;
case 0x7245b8:c.instructions+=2;goto B7245b8;
case 0x7245ba:c.instructions+=1;goto B7245ba;
case 0x7245bc:goto L7245bc;
case 0x7245bd:c.instructions+=3;goto B7245bd;
case 0x7245bf:c.instructions+=2;goto B7245bf;
case 0x7245c0:c.instructions+=1;goto B7245c0;
case 0x7245c1:goto L7245c1;
case 0x7245c3:c.instructions+=2;goto B7245c3;
case 0x7245ca:c.instructions+=1;goto B7245ca;
case 0x7245cc:goto L7245cc;
case 0x7245d1:c.instructions+=2;goto B7245d1;
case 0x7245d6:c.instructions+=1;goto B7245d6;
case 0x7245dc:goto L7245dc;
case 0x7245e0:c.instructions+=1;goto B7245e0;
case 0x7245e2:goto L7245e2;
case 0x7245e4:c.instructions+=1;goto B7245e4;
case 0x7245e6:goto L7245e6;
case 0x7245ec:c.instructions+=1;goto B7245ec;
case 0x7245ee:goto L7245ee;
case 0x7245f4:c.instructions+=2;goto B7245f4;
case 0x7245f7:c.instructions+=1;goto B7245f7;
case 0x7245fd:goto L7245fd;
case 0x724603:c.instructions+=1;goto B724603;
case 0x724605:goto L724605;
case 0x72460c:c.instructions+=2;goto B72460c;
case 0x724610:c.instructions+=1;goto B724610;
case 0x724616:goto L724616;
case 0x724618:c.instructions+=2;goto B724618;
case 0x724619:c.instructions+=1;goto B724619;
case 0x72461b:goto L72461b;
case 0x72461d:c.instructions+=2;goto B72461d;
case 0x72461e:c.instructions+=1;goto B72461e;
case 0x72461f:goto L72461f;
case 0x724620:c.instructions+=4;goto B724620;
case 0x724622:c.instructions+=3;goto B724622;
case 0x724628:c.instructions+=2;goto B724628;
case 0x72462f:c.instructions+=1;goto B72462f;
case 0x724631:goto L724631;
case 0x724633:c.instructions+=2;goto B724633;
case 0x724634:c.instructions+=1;goto B724634;
case 0x724635:goto L724635;
case 0x724636:c.instructions+=3;goto B724636;
case 0x72463a:c.instructions+=2;goto B72463a;
case 0x72463e:c.instructions+=1;goto B72463e;
case 0x724643:goto L724643;
case 0x724647:c.instructions+=2;goto B724647;
case 0x72464b:c.instructions+=1;goto B72464b;
case 0x724650:goto L724650;
case 0x724653:c.instructions+=2;goto B724653;
case 0x72465a:c.instructions+=1;goto B72465a;
case 0x72465c:goto L72465c;
case 0x724661:c.instructions+=2;goto B724661;
case 0x724662:c.instructions+=1;goto B724662;
case 0x724667:goto L724667;
case 0x724669:c.instructions+=2;goto B724669;
case 0x72466a:c.instructions+=1;goto B72466a;
case 0x724670:goto L724670;
case 0x724671:c.instructions+=1;goto B724671;
case 0x724676:goto L724676;
case 0x724677:goto L724677;
case 0x72467d:c.instructions+=1;goto B72467d;
case 0x724682:goto L724682;
case 0x724687:goto L724687;
case 0x72468e:c.instructions+=1;goto B72468e;
case 0x724693:goto L724693;
case 0x724698:goto L724698;
case 0x72469f:c.instructions+=3;goto B72469f;
case 0x7246a2:c.instructions+=2;goto B7246a2;
case 0x7246a3:c.instructions+=1;goto B7246a3;
case 0x7246a8:goto L7246a8;
case 0x7246ad:c.instructions+=1;goto B7246ad;
case 0x7246b2:goto L7246b2;
case 0x7246b4:c.instructions+=7;goto B7246b4;
case 0x7246b5:c.instructions+=6;goto B7246b5;
case 0x7246bb:c.instructions+=5;goto B7246bb;
case 0x7246c1:c.instructions+=4;goto B7246c1;
case 0x7246c7:c.instructions+=3;goto B7246c7;
case 0x7246cd:c.instructions+=2;goto B7246cd;
case 0x7246d3:c.instructions+=1;goto B7246d3;
case 0x7246d8:goto L7246d8;
case 0x7246da:c.instructions+=3;goto B7246da;
case 0x7246dd:c.instructions+=2;goto B7246dd;
case 0x7246df:c.instructions+=1;goto B7246df;
case 0x7246e1:goto L7246e1;
case 0x7246e2:c.instructions+=1;goto B7246e2;
case 0x7246e7:goto L7246e7;
case 0x7246e8:c.instructions+=1;goto B7246e8;
case 0x7246ed:goto L7246ed;
case 0x7246f3:c.instructions+=2;goto B7246f3;
case 0x7246f5:c.instructions+=1;goto B7246f5;
case 0x7246f7:goto L7246f7;
case 0x7246fc:c.instructions+=3;goto B7246fc;
case 0x724702:c.instructions+=2;goto B724702;
case 0x724707:c.instructions+=1;goto B724707;
case 0x72470c:goto L72470c;
case 0x724711:goto L724711;
case 0x724713:goto L724713;
case 0x724714:c.instructions+=2;goto B724714;
case 0x724715:c.instructions+=1;goto B724715;
case 0x724716:goto L724716;
case 0x72471a:c.instructions+=10;goto B72471a;
case 0x72471c:c.instructions+=9;goto B72471c;
case 0x724720:c.instructions+=8;goto B724720;
case 0x724725:c.instructions+=7;goto B724725;
case 0x724728:c.instructions+=6;goto B724728;
case 0x724729:c.instructions+=5;goto B724729;
case 0x72472b:c.instructions+=4;goto B72472b;
case 0x72472d:c.instructions+=3;goto B72472d;
case 0x72472f:c.instructions+=2;goto B72472f;
case 0x724730:c.instructions+=1;goto B724730;
case 0x724732:goto L724732;
case 0x724734:c.instructions+=1;goto B724734;
case 0x724736:goto L724736;
case 0x724737:goto L724737;
case 0x72473b:c.instructions+=22;goto B72473b;
case 0x72473f:c.instructions+=21;goto B72473f;
case 0x724745:c.instructions+=20;goto B724745;
case 0x724748:c.instructions+=19;goto B724748;
case 0x72474c:c.instructions+=18;goto B72474c;
case 0x72474d:c.instructions+=17;goto B72474d;
case 0x724753:c.instructions+=16;goto B724753;
case 0x724756:c.instructions+=15;goto B724756;
case 0x72475c:c.instructions+=14;goto B72475c;
case 0x72475f:c.instructions+=13;goto B72475f;
case 0x724761:c.instructions+=12;goto B724761;
case 0x724767:c.instructions+=11;goto B724767;
case 0x72476a:c.instructions+=10;goto B72476a;
case 0x724770:c.instructions+=9;goto B724770;
case 0x724773:c.instructions+=8;goto B724773;
case 0x724779:c.instructions+=7;goto B724779;
case 0x72477c:c.instructions+=6;goto B72477c;
case 0x72477f:c.instructions+=5;goto B72477f;
case 0x724782:c.instructions+=4;goto B724782;
case 0x724788:c.instructions+=3;goto B724788;
case 0x72478b:c.instructions+=2;goto B72478b;
case 0x72478c:c.instructions+=1;goto B72478c;
case 0x72478d:goto L72478d;
case 0x724792:goto L724792;
case 0x724793:c.instructions+=15;goto B724793;
case 0x724795:c.instructions+=14;goto B724795;
case 0x724796:c.instructions+=13;goto B724796;
case 0x724797:c.instructions+=12;goto B724797;
case 0x724798:c.instructions+=11;goto B724798;
case 0x72479b:c.instructions+=10;goto B72479b;
case 0x72479c:c.instructions+=9;goto B72479c;
case 0x7247a2:c.instructions+=8;goto B7247a2;
case 0x7247a5:c.instructions+=7;goto B7247a5;
case 0x7247a8:c.instructions+=6;goto B7247a8;
case 0x7247a9:c.instructions+=5;goto B7247a9;
case 0x7247ab:c.instructions+=4;goto B7247ab;
case 0x7247ae:c.instructions+=3;goto B7247ae;
case 0x7247b0:c.instructions+=2;goto B7247b0;
case 0x7247b3:c.instructions+=1;goto B7247b3;
case 0x7247b5:goto L7247b5;
case 0x7247b8:c.instructions+=1;goto B7247b8;
case 0x7247ba:goto L7247ba;
case 0x7247bc:c.instructions+=2;goto B7247bc;
case 0x7247bf:c.instructions+=1;goto B7247bf;
case 0x7247c1:goto L7247c1;
case 0x7247c4:c.instructions+=4;goto B7247c4;
case 0x7247c6:c.instructions+=3;goto B7247c6;
case 0x7247c9:c.instructions+=2;goto B7247c9;
case 0x7247cc:c.instructions+=1;goto B7247cc;
case 0x7247ce:goto L7247ce;
case 0x7247d0:c.instructions+=2;goto B7247d0;
case 0x7247d2:c.instructions+=1;goto B7247d2;
case 0x7247d4:goto L7247d4;
case 0x7247d7:c.instructions+=3;goto B7247d7;
case 0x7247da:c.instructions+=2;goto B7247da;
case 0x7247dc:c.instructions+=1;goto B7247dc;
case 0x7247de:goto L7247de;
case 0x7247e1:c.instructions+=6;goto B7247e1;
case 0x7247e4:c.instructions+=5;goto B7247e4;
case 0x7247e5:c.instructions+=4;goto B7247e5;
case 0x7247e8:c.instructions+=3;goto B7247e8;
case 0x7247e9:c.instructions+=2;goto B7247e9;
case 0x7247ec:c.instructions+=1;goto B7247ec;
case 0x7247f1:goto L7247f1;
case 0x7247f4:c.instructions+=3;goto B7247f4;
case 0x7247f5:c.instructions+=2;goto B7247f5;
case 0x7247f6:c.instructions+=1;goto B7247f6;
case 0x7247f8:goto L7247f8;
case 0x7247fb:c.instructions+=3;goto B7247fb;
case 0x7247fe:c.instructions+=2;goto B7247fe;
case 0x724801:c.instructions+=1;goto B724801;
case 0x724803:goto L724803;
case 0x724806:c.instructions+=6;goto B724806;
case 0x724809:c.instructions+=5;goto B724809;
case 0x72480d:c.instructions+=4;goto B72480d;
case 0x724810:c.instructions+=3;goto B724810;
case 0x724812:c.instructions+=2;goto B724812;
case 0x724815:c.instructions+=1;goto B724815;
case 0x724817:goto L724817;
case 0x72481a:c.instructions+=6;goto B72481a;
case 0x72481d:c.instructions+=5;goto B72481d;
case 0x72481e:c.instructions+=4;goto B72481e;
case 0x724821:c.instructions+=3;goto B724821;
case 0x724822:c.instructions+=2;goto B724822;
case 0x724825:c.instructions+=1;goto B724825;
case 0x72482a:goto L72482a;
case 0x72482d:c.instructions+=3;goto B72482d;
case 0x72482e:c.instructions+=2;goto B72482e;
case 0x72482f:c.instructions+=1;goto B72482f;
case 0x724831:goto L724831;
case 0x724833:c.instructions+=1;goto B724833;
case 0x724835:goto L724835;
case 0x724838:c.instructions+=1;goto B724838;
case 0x72483a:goto L72483a;
case 0x72483d:c.instructions+=7;goto B72483d;
case 0x724840:c.instructions+=6;goto B724840;
case 0x724843:c.instructions+=5;goto B724843;
case 0x724845:c.instructions+=4;goto B724845;
case 0x724848:c.instructions+=3;goto B724848;
case 0x72484b:c.instructions+=2;goto B72484b;
case 0x724851:c.instructions+=1;goto B724851;
case 0x724852:goto L724852;
case 0x724855:c.instructions+=1;goto B724855;
case 0x724857:goto L724857;
case 0x72485a:c.instructions+=16;goto B72485a;
case 0x72485d:c.instructions+=15;goto B72485d;
case 0x724860:c.instructions+=14;goto B724860;
case 0x724862:c.instructions+=13;goto B724862;
case 0x724865:c.instructions+=12;goto B724865;
case 0x72486a:c.instructions+=11;goto B72486a;
case 0x72486d:c.instructions+=10;goto B72486d;
case 0x724872:c.instructions+=9;goto B724872;
case 0x724876:c.instructions+=8;goto B724876;
case 0x72487c:c.instructions+=7;goto B72487c;
case 0x72487f:c.instructions+=6;goto B72487f;
case 0x724881:c.instructions+=5;goto B724881;
case 0x724883:c.instructions+=4;goto B724883;
case 0x724885:c.instructions+=3;goto B724885;
case 0x724887:c.instructions+=2;goto B724887;
case 0x72488a:c.instructions+=1;goto B72488a;
case 0x72488c:goto L72488c;
case 0x72488f:goto L72488f;
case 0x724890:c.instructions+=4;goto B724890;
case 0x724891:c.instructions+=3;goto B724891;
case 0x724892:c.instructions+=2;goto B724892;
case 0x724893:c.instructions+=1;goto B724893;
case 0x724894:goto L724894;
case 0x724899:c.instructions+=7;goto B724899;
case 0x72489d:c.instructions+=6;goto B72489d;
case 0x72489f:c.instructions+=5;goto B72489f;
case 0x7248a0:c.instructions+=4;goto B7248a0;
case 0x7248a3:c.instructions+=3;goto B7248a3;
case 0x7248a5:c.instructions+=2;goto B7248a5;
case 0x7248a7:c.instructions+=1;goto B7248a7;
case 0x7248a9:goto L7248a9;
case 0x7248aa:c.instructions+=1;goto B7248aa;
case 0x7248ad:goto L7248ad;
case 0x7248af:c.instructions+=1;goto B7248af;
case 0x7248b1:goto L7248b1;
case 0x7248b2:c.instructions+=3;goto B7248b2;
case 0x7248b5:c.instructions+=2;goto B7248b5;
case 0x7248b7:c.instructions+=1;goto B7248b7;
case 0x7248b9:goto L7248b9;
case 0x7248bb:goto L7248bb;
case 0x7248be:c.instructions+=3;goto B7248be;
case 0x7248c3:c.instructions+=2;goto B7248c3;
case 0x7248c7:c.instructions+=1;goto B7248c7;
case 0x7248c9:goto L7248c9;
case 0x7248cc:c.instructions+=6;goto B7248cc;
case 0x7248cf:c.instructions+=5;goto B7248cf;
case 0x7248d2:c.instructions+=4;goto B7248d2;
case 0x7248d4:c.instructions+=3;goto B7248d4;
case 0x7248d7:c.instructions+=2;goto B7248d7;
case 0x7248da:c.instructions+=1;goto B7248da;
case 0x7248db:goto L7248db;
case 0x7248e0:c.instructions+=2;goto B7248e0;
case 0x7248e3:c.instructions+=1;goto B7248e3;
case 0x7248e5:goto L7248e5;
case 0x7248e6:goto L7248e6;
case 0x7248e7:c.instructions+=1;goto B7248e7;
case 0x7248e8:goto L7248e8;
case 0x7248ea:goto L7248ea;
case 0x7248f0:c.instructions+=5;goto B7248f0;
case 0x7248f4:c.instructions+=4;goto B7248f4;
case 0x7248f7:c.instructions+=3;goto B7248f7;
case 0x7248fa:c.instructions+=2;goto B7248fa;
case 0x724900:c.instructions+=1;goto B724900;
case 0x724902:goto L724902;
case 0x724903:goto L724903;
case 0x724909:c.instructions+=5;goto B724909;
case 0x72490a:c.instructions+=4;goto B72490a;
case 0x724910:c.instructions+=3;goto B724910;
case 0x724913:c.instructions+=2;goto B724913;
case 0x724915:c.instructions+=1;goto B724915;
case 0x724917:goto L724917;
case 0x724919:c.instructions+=1;goto B724919;
case 0x72491b:goto L72491b;
case 0x72491d:c.instructions+=1;goto B72491d;
case 0x72491f:goto L72491f;
case 0x724921:c.instructions+=1;goto B724921;
case 0x724922:goto L724922;
case 0x724928:c.instructions+=28;goto B724928;
case 0x72492a:c.instructions+=27;goto B72492a;
case 0x72492f:c.instructions+=26;goto B72492f;
case 0x724931:c.instructions+=25;goto B724931;
case 0x724937:c.instructions+=24;goto B724937;
case 0x724939:c.instructions+=23;goto B724939;
case 0x72493b:c.instructions+=22;goto B72493b;
case 0x72493d:c.instructions+=21;goto B72493d;
case 0x72493f:c.instructions+=20;goto B72493f;
case 0x724944:c.instructions+=19;goto B724944;
case 0x724946:c.instructions+=18;goto B724946;
case 0x724948:c.instructions+=17;goto B724948;
case 0x72494e:c.instructions+=16;goto B72494e;
case 0x724950:c.instructions+=15;goto B724950;
case 0x724952:c.instructions+=14;goto B724952;
case 0x724954:c.instructions+=13;goto B724954;
case 0x724959:c.instructions+=12;goto B724959;
case 0x72495b:c.instructions+=11;goto B72495b;
case 0x72495d:c.instructions+=10;goto B72495d;
case 0x72495f:c.instructions+=9;goto B72495f;
case 0x724961:c.instructions+=8;goto B724961;
case 0x724966:c.instructions+=7;goto B724966;
case 0x724968:c.instructions+=6;goto B724968;
case 0x72496e:c.instructions+=5;goto B72496e;
case 0x724973:c.instructions+=4;goto B724973;
case 0x724974:c.instructions+=3;goto B724974;
case 0x72497a:c.instructions+=2;goto B72497a;
case 0x72497b:c.instructions+=1;goto B72497b;
case 0x72497d:goto L72497d;
case 0x724983:c.instructions+=1;goto B724983;
case 0x724985:goto L724985;
case 0x72498b:c.instructions+=1;goto B72498b;
case 0x72498d:goto L72498d;
case 0x724993:c.instructions+=1;goto B724993;
case 0x724995:goto L724995;
case 0x72499b:c.instructions+=1;goto B72499b;
case 0x72499d:goto L72499d;
case 0x72499e:c.instructions+=1;goto B72499e;
case 0x7249a3:goto L7249a3;
case 0x7249a4:goto L7249a4;
case 0x7249a8:c.instructions+=5;goto B7249a8;
case 0x7249ab:c.instructions+=4;goto B7249ab;
case 0x7249b2:c.instructions+=3;goto B7249b2;
case 0x7249b6:c.instructions+=2;goto B7249b6;
case 0x7249b8:c.instructions+=1;goto B7249b8;
case 0x7249b9:goto L7249b9;
case 0x7249be:c.instructions+=1;goto B7249be;
case 0x7249bf:goto L7249bf;
case 0x7249c6:c.instructions+=2;goto B7249c6;
case 0x7249c7:c.instructions+=1;goto B7249c7;
case 0x7249c9:goto L7249c9;
case 0x7249cd:c.instructions+=4;goto B7249cd;
case 0x7249d2:c.instructions+=3;goto B7249d2;
case 0x7249d4:c.instructions+=2;goto B7249d4;
case 0x7249d6:c.instructions+=1;goto B7249d6;
case 0x7249d7:goto L7249d7;
case 0x7249da:c.instructions+=4;goto B7249da;
case 0x7249dc:c.instructions+=3;goto B7249dc;
case 0x7249dd:c.instructions+=2;goto B7249dd;
case 0x7249de:c.instructions+=1;goto B7249de;
case 0x7249e0:goto L7249e0;
case 0x7249e5:goto L7249e5;
case 0x7249e6:c.instructions+=10;goto B7249e6;
case 0x7249eb:c.instructions+=9;goto B7249eb;
case 0x7249ed:c.instructions+=8;goto B7249ed;
case 0x7249ef:c.instructions+=7;goto B7249ef;
case 0x7249f0:c.instructions+=6;goto B7249f0;
case 0x7249f1:c.instructions+=5;goto B7249f1;
case 0x7249f2:c.instructions+=4;goto B7249f2;
case 0x7249f7:c.instructions+=3;goto B7249f7;
case 0x724a01:c.instructions+=2;goto B724a01;
case 0x724a02:c.instructions+=1;goto B724a02;
case 0x724a07:goto L724a07;
case 0x724a09:c.instructions+=4;goto B724a09;
case 0x724a0a:c.instructions+=3;goto B724a0a;
case 0x724a0b:c.instructions+=2;goto B724a0b;
case 0x724a0c:c.instructions+=1;goto B724a0c;
case 0x724a0e:goto L724a0e;
case 0x724a12:c.instructions+=2;goto B724a12;
case 0x724a14:c.instructions+=1;goto B724a14;
case 0x724a16:goto L724a16;
case 0x724a18:c.instructions+=2;goto B724a18;
case 0x724a1a:c.instructions+=1;goto B724a1a;
case 0x724a1b:goto L724a1b;
case 0x724a1e:c.instructions+=4;goto B724a1e;
case 0x724a20:c.instructions+=3;goto B724a20;
case 0x724a21:c.instructions+=2;goto B724a21;
case 0x724a22:c.instructions+=1;goto B724a22;
case 0x724a24:goto L724a24;
case 0x724a2b:c.instructions+=12;goto B724a2b;
case 0x724a34:c.instructions+=11;goto B724a34;
case 0x724a3d:c.instructions+=10;goto B724a3d;
case 0x724a44:c.instructions+=9;goto B724a44;
case 0x724a4b:c.instructions+=8;goto B724a4b;
case 0x724a52:c.instructions+=7;goto B724a52;
case 0x724a5b:c.instructions+=6;goto B724a5b;
case 0x724a62:c.instructions+=5;goto B724a62;
case 0x724a69:c.instructions+=4;goto B724a69;
case 0x724a72:c.instructions+=3;goto B724a72;
case 0x724a79:c.instructions+=2;goto B724a79;
case 0x724a80:c.instructions+=1;goto B724a80;
case 0x724a85:goto L724a85;
case 0x724a8a:goto L724a8a;
case 0x724a8c:goto L724a8c;
case 0x724a8d:c.instructions+=1;goto B724a8d;
case 0x724a8e:goto L724a8e;
case 0x724a8f:c.instructions+=7;goto B724a8f;
case 0x724a93:c.instructions+=6;goto B724a93;
case 0x724a97:c.instructions+=5;goto B724a97;
case 0x724a99:c.instructions+=4;goto B724a99;
case 0x724a9a:c.instructions+=3;goto B724a9a;
case 0x724a9b:c.instructions+=2;goto B724a9b;
case 0x724a9c:c.instructions+=1;goto B724a9c;
case 0x724aa1:goto L724aa1;
case 0x724aa3:c.instructions+=3;goto B724aa3;
case 0x724aa4:c.instructions+=2;goto B724aa4;
case 0x724aa5:c.instructions+=1;goto B724aa5;
case 0x724aa7:goto L724aa7;
case 0x724aa9:goto L724aa9;
case 0x724aaa:goto L724aaa;
case 0x724aac:c.instructions+=1;goto B724aac;
case 0x724ab1:goto L724ab1;
case 0x724ab3:c.instructions+=2;goto B724ab3;
case 0x724ab4:c.instructions+=1;goto B724ab4;
case 0x724ab6:goto L724ab6;
case 0x724ab8:goto L724ab8;
case 0x724ab9:goto L724ab9;
case 0x724ac0:c.instructions+=3;goto B724ac0;
case 0x724ac1:c.instructions+=2;goto B724ac1;
case 0x724ac2:c.instructions+=1;goto B724ac2;
case 0x724ac7:goto L724ac7;
case 0x724ac9:c.instructions+=3;goto B724ac9;
case 0x724acf:c.instructions+=2;goto B724acf;
case 0x724ad0:c.instructions+=1;goto B724ad0;
case 0x724ad2:goto L724ad2;
case 0x724ad9:c.instructions+=6;goto B724ad9;
case 0x724ada:c.instructions+=5;goto B724ada;
case 0x724adb:c.instructions+=4;goto B724adb;
case 0x724add:c.instructions+=3;goto B724add;
case 0x724ade:c.instructions+=2;goto B724ade;
case 0x724ae3:c.instructions+=1;goto B724ae3;
case 0x724ae8:goto L724ae8;
case 0x724aea:goto L724aea;
case 0x724aeb:c.instructions+=3;goto B724aeb;
case 0x724af0:c.instructions+=2;goto B724af0;
case 0x724af1:c.instructions+=1;goto B724af1;
case 0x724af6:goto L724af6;
case 0x724afb:c.instructions+=3;goto B724afb;
case 0x724b01:c.instructions+=2;goto B724b01;
case 0x724b03:c.instructions+=1;goto B724b03;
case 0x724b05:goto L724b05;
case 0x724b07:c.instructions+=1;goto B724b07;
case 0x724b0c:goto L724b0c;
case 0x724b12:c.instructions+=2;goto B724b12;
case 0x724b14:c.instructions+=1;goto B724b14;
case 0x724b16:goto L724b16;
case 0x724b18:c.instructions+=1;goto B724b18;
case 0x724b1d:goto L724b1d;
case 0x724b24:c.instructions+=2;goto B724b24;
case 0x724b2b:c.instructions+=1;goto B724b2b;
case 0x724b2d:goto L724b2d;
case 0x724b34:goto L724b34;
case 0x724b3b:c.instructions+=2;goto B724b3b;
case 0x724b42:c.instructions+=1;goto B724b42;
case 0x724b44:goto L724b44;
case 0x724b4b:goto L724b4b;
case 0x724b51:c.instructions+=2;goto B724b51;
case 0x724b57:c.instructions+=1;goto B724b57;
case 0x724b59:goto L724b59;
case 0x724b5f:goto L724b5f;
case 0x724b66:c.instructions+=1;goto B724b66;
case 0x724b68:goto L724b68;
case 0x724b6f:goto L724b6f;
case 0x724b75:c.instructions+=1;goto B724b75;
case 0x724b77:goto L724b77;
case 0x724b7d:c.instructions+=1;goto B724b7d;
case 0x724b7f:goto L724b7f;
case 0x724b85:goto L724b85;
case 0x724b87:c.instructions+=1;goto B724b87;
case 0x724b89:goto L724b89;
case 0x724b8f:c.instructions+=1;goto B724b8f;
case 0x724b91:goto L724b91;
case 0x724b97:goto L724b97;
case 0x724b99:c.instructions+=1;goto B724b99;
case 0x724b9b:goto L724b9b;
case 0x724ba1:c.instructions+=1;goto B724ba1;
case 0x724ba3:goto L724ba3;
case 0x724ba9:goto L724ba9;
case 0x724bab:c.instructions+=1;goto B724bab;
case 0x724bad:goto L724bad;
case 0x724bb3:c.instructions+=1;goto B724bb3;
case 0x724bb5:goto L724bb5;
case 0x724bbc:c.instructions+=1;goto B724bbc;
case 0x724bc3:goto L724bc3;
case 0x724bcb:c.instructions+=3;goto B724bcb;
case 0x724bcf:c.instructions+=2;goto B724bcf;
case 0x724bd5:c.instructions+=1;goto B724bd5;
case 0x724bd7:goto L724bd7;
case 0x724be0:goto L724be0;
case 0x724be7:goto L724be7;
case 0x724be9:goto L724be9;
case 0x724beb:c.instructions+=1;goto B724beb;
case 0x724bed:goto L724bed;
case 0x724bf5:c.instructions+=1;goto B724bf5;
case 0x724bf7:goto L724bf7;
case 0x724bf8:c.instructions+=1;goto B724bf8;
case 0x724bfa:goto L724bfa;
case 0x724c00:c.instructions+=1;goto B724c00;
case 0x724c02:goto L724c02;
case 0x724c0a:c.instructions+=2;goto B724c0a;
case 0x724c12:c.instructions+=1;goto B724c12;
case 0x724c13:goto L724c13;
case 0x724c1a:c.instructions+=2;goto B724c1a;
case 0x724c1c:c.instructions+=1;goto B724c1c;
case 0x724c1e:goto L724c1e;
case 0x724c20:goto L724c20;
case 0x724c26:c.instructions+=6;goto B724c26;
case 0x724c2c:c.instructions+=5;goto B724c2c;
case 0x724c32:c.instructions+=4;goto B724c32;
case 0x724c34:c.instructions+=3;goto B724c34;
case 0x724c36:c.instructions+=2;goto B724c36;
case 0x724c39:c.instructions+=1;goto B724c39;
case 0x724c3b:goto L724c3b;
case 0x724c3d:c.instructions+=1;goto B724c3d;
case 0x724c43:goto L724c43;
case 0x724c49:c.instructions+=3;goto B724c49;
case 0x724c4b:c.instructions+=2;goto B724c4b;
case 0x724c4e:c.instructions+=1;goto B724c4e;
case 0x724c50:goto L724c50;
case 0x724c52:c.instructions+=2;goto B724c52;
case 0x724c58:c.instructions+=1;goto B724c58;
case 0x724c5a:goto L724c5a;
case 0x724c60:c.instructions+=3;goto B724c60;
case 0x724c62:c.instructions+=2;goto B724c62;
case 0x724c65:c.instructions+=1;goto B724c65;
case 0x724c67:goto L724c67;
case 0x724c69:c.instructions+=1;goto B724c69;
case 0x724c6f:goto L724c6f;
case 0x724c75:c.instructions+=6;goto B724c75;
case 0x724c7b:c.instructions+=5;goto B724c7b;
case 0x724c81:c.instructions+=4;goto B724c81;
case 0x724c83:c.instructions+=3;goto B724c83;
case 0x724c89:c.instructions+=2;goto B724c89;
case 0x724c8b:c.instructions+=1;goto B724c8b;
case 0x724c8d:goto L724c8d;
case 0x724c92:goto L724c92;
case 0x724c94:c.instructions+=1;goto B724c94;
case 0x724c96:goto L724c96;
case 0x724c9d:c.instructions+=1;goto B724c9d;
case 0x724c9f:goto L724c9f;
case 0x724ca6:c.instructions+=1;goto B724ca6;
case 0x724cac:goto L724cac;
case 0x724cae:c.instructions+=2;goto B724cae;
case 0x724caf:c.instructions+=1;goto B724caf;
case 0x724cb0:goto L724cb0;
case 0x724cb4:c.instructions+=5;goto B724cb4;
case 0x724cba:c.instructions+=4;goto B724cba;
case 0x724cc0:c.instructions+=3;goto B724cc0;
case 0x724cc3:c.instructions+=2;goto B724cc3;
case 0x724cc4:c.instructions+=1;goto B724cc4;
case 0x724cc7:goto L724cc7;
case 0x724cc8:c.instructions+=2;goto B724cc8;
case 0x724cca:c.instructions+=1;goto B724cca;
case 0x724ccb:goto L724ccb;
case 0x724cd0:goto L724cd0;
case 0x724cd1:c.instructions+=4;goto B724cd1;
case 0x724cd3:c.instructions+=3;goto B724cd3;
case 0x724cd6:c.instructions+=2;goto B724cd6;
case 0x724cd9:c.instructions+=1;goto B724cd9;
case 0x724cdb:goto L724cdb;
case 0x724cdc:c.instructions+=1;goto B724cdc;
case 0x724cde:goto L724cde;
case 0x724cdf:c.instructions+=1;goto B724cdf;
case 0x724ce1:goto L724ce1;
case 0x724ce2:c.instructions+=1;goto B724ce2;
case 0x724ce4:goto L724ce4;
case 0x724ce7:c.instructions+=3;goto B724ce7;
case 0x724ceb:c.instructions+=2;goto B724ceb;
case 0x724cef:c.instructions+=1;goto B724cef;
case 0x724cf1:goto L724cf1;
case 0x724cf4:c.instructions+=2;goto B724cf4;
case 0x724cf8:c.instructions+=1;goto B724cf8;
case 0x724cfa:goto L724cfa;
case 0x724cfd:c.instructions+=2;goto B724cfd;
case 0x724d01:c.instructions+=1;goto B724d01;
case 0x724d03:goto L724d03;
case 0x724d06:c.instructions+=1;goto B724d06;
case 0x724d0a:goto L724d0a;
case 0x724d0c:c.instructions+=2;goto B724d0c;
case 0x724d0d:c.instructions+=1;goto B724d0d;
case 0x724d0e:goto L724d0e;
case 0x724d0f:c.instructions+=24;goto B724d0f;
case 0x724d11:c.instructions+=23;goto B724d11;
case 0x724d12:c.instructions+=22;goto B724d12;
case 0x724d15:c.instructions+=21;goto B724d15;
case 0x724d16:c.instructions+=20;goto B724d16;
case 0x724d17:c.instructions+=19;goto B724d17;
case 0x724d1a:c.instructions+=18;goto B724d1a;
case 0x724d1d:c.instructions+=17;goto B724d1d;
case 0x724d23:c.instructions+=16;goto B724d23;
case 0x724d27:c.instructions+=15;goto B724d27;
case 0x724d2a:c.instructions+=14;goto B724d2a;
case 0x724d31:c.instructions+=13;goto B724d31;
case 0x724d34:c.instructions+=12;goto B724d34;
case 0x724d37:c.instructions+=11;goto B724d37;
case 0x724d3d:c.instructions+=10;goto B724d3d;
case 0x724d44:c.instructions+=9;goto B724d44;
case 0x724d47:c.instructions+=8;goto B724d47;
case 0x724d4a:c.instructions+=7;goto B724d4a;
case 0x724d4d:c.instructions+=6;goto B724d4d;
case 0x724d50:c.instructions+=5;goto B724d50;
case 0x724d53:c.instructions+=4;goto B724d53;
case 0x724d56:c.instructions+=3;goto B724d56;
case 0x724d58:c.instructions+=2;goto B724d58;
case 0x724d5b:c.instructions+=1;goto B724d5b;
case 0x724d5d:goto L724d5d;
case 0x724d5e:c.instructions+=1;goto B724d5e;
case 0x724d61:goto L724d61;
case 0x724d64:c.instructions+=3;goto B724d64;
case 0x724d67:c.instructions+=2;goto B724d67;
case 0x724d68:c.instructions+=1;goto B724d68;
case 0x724d6d:goto L724d6d;
case 0x724d71:c.instructions+=7;goto B724d71;
case 0x724d72:c.instructions+=6;goto B724d72;
case 0x724d73:c.instructions+=5;goto B724d73;
case 0x724d74:c.instructions+=4;goto B724d74;
case 0x724d75:c.instructions+=3;goto B724d75;
case 0x724d77:c.instructions+=2;goto B724d77;
case 0x724d78:c.instructions+=1;goto B724d78;
case 0x724d7a:goto L724d7a;
case 0x724d7b:goto L724d7b;
case 0x724d7c:c.instructions+=4;goto B724d7c;
case 0x724d7e:c.instructions+=3;goto B724d7e;
case 0x724d7f:c.instructions+=2;goto B724d7f;
case 0x724d80:c.instructions+=1;goto B724d80;
case 0x724d81:goto L724d81;
case 0x724d82:c.instructions+=47;goto B724d82;
case 0x724d84:c.instructions+=46;goto B724d84;
case 0x724d87:c.instructions+=45;goto B724d87;
case 0x724d8a:c.instructions+=44;goto B724d8a;
case 0x724d90:c.instructions+=43;goto B724d90;
case 0x724d91:c.instructions+=42;goto B724d91;
case 0x724d92:c.instructions+=41;goto B724d92;
case 0x724d94:c.instructions+=40;goto B724d94;
case 0x724d9a:c.instructions+=39;goto B724d9a;
case 0x724da0:c.instructions+=38;goto B724da0;
case 0x724da1:c.instructions+=37;goto B724da1;
case 0x724da4:c.instructions+=36;goto B724da4;
case 0x724da7:c.instructions+=35;goto B724da7;
case 0x724daa:c.instructions+=34;goto B724daa;
case 0x724dad:c.instructions+=33;goto B724dad;
case 0x724db0:c.instructions+=32;goto B724db0;
case 0x724db3:c.instructions+=31;goto B724db3;
case 0x724db6:c.instructions+=30;goto B724db6;
case 0x724db9:c.instructions+=29;goto B724db9;
case 0x724dbc:c.instructions+=28;goto B724dbc;
case 0x724dbf:c.instructions+=27;goto B724dbf;
case 0x724dc2:c.instructions+=26;goto B724dc2;
case 0x724dc4:c.instructions+=25;goto B724dc4;
case 0x724dc6:c.instructions+=24;goto B724dc6;
case 0x724dcc:c.instructions+=23;goto B724dcc;
case 0x724dd0:c.instructions+=22;goto B724dd0;
case 0x724dd3:c.instructions+=21;goto B724dd3;
case 0x724dd6:c.instructions+=20;goto B724dd6;
case 0x724dd9:c.instructions+=19;goto B724dd9;
case 0x724ddc:c.instructions+=18;goto B724ddc;
case 0x724ddf:c.instructions+=17;goto B724ddf;
case 0x724de2:c.instructions+=16;goto B724de2;
case 0x724de6:c.instructions+=15;goto B724de6;
case 0x724dea:c.instructions+=14;goto B724dea;
case 0x724ded:c.instructions+=13;goto B724ded;
case 0x724df0:c.instructions+=12;goto B724df0;
case 0x724df3:c.instructions+=11;goto B724df3;
case 0x724df6:c.instructions+=10;goto B724df6;
case 0x724df9:c.instructions+=9;goto B724df9;
case 0x724dfc:c.instructions+=8;goto B724dfc;
case 0x724e03:c.instructions+=7;goto B724e03;
case 0x724e0a:c.instructions+=6;goto B724e0a;
case 0x724e11:c.instructions+=5;goto B724e11;
case 0x724e1b:c.instructions+=4;goto B724e1b;
case 0x724e22:c.instructions+=3;goto B724e22;
case 0x724e29:c.instructions+=2;goto B724e29;
case 0x724e2c:c.instructions+=1;goto B724e2c;
case 0x724e2e:goto L724e2e;
case 0x724e31:c.instructions+=9;goto B724e31;
case 0x724e34:c.instructions+=8;goto B724e34;
case 0x724e36:c.instructions+=7;goto B724e36;
case 0x724e39:c.instructions+=6;goto B724e39;
case 0x724e3c:c.instructions+=5;goto B724e3c;
case 0x724e3e:c.instructions+=4;goto B724e3e;
case 0x724e41:c.instructions+=3;goto B724e41;
case 0x724e44:c.instructions+=2;goto B724e44;
case 0x724e46:c.instructions+=1;goto B724e46;
case 0x724e49:goto L724e49;
case 0x724e4c:c.instructions+=17;goto B724e4c;
case 0x724e4e:c.instructions+=16;goto B724e4e;
case 0x724e51:c.instructions+=15;goto B724e51;
case 0x724e53:c.instructions+=14;goto B724e53;
case 0x724e57:c.instructions+=13;goto B724e57;
case 0x724e5b:c.instructions+=12;goto B724e5b;
case 0x724e5e:c.instructions+=11;goto B724e5e;
case 0x724e60:c.instructions+=10;goto B724e60;
case 0x724e64:c.instructions+=9;goto B724e64;
case 0x724e68:c.instructions+=8;goto B724e68;
case 0x724e6b:c.instructions+=7;goto B724e6b;
case 0x724e6d:c.instructions+=6;goto B724e6d;
case 0x724e71:c.instructions+=5;goto B724e71;
case 0x724e75:c.instructions+=4;goto B724e75;
case 0x724e79:c.instructions+=3;goto B724e79;
case 0x724e7a:c.instructions+=2;goto B724e7a;
case 0x724e7c:c.instructions+=1;goto B724e7c;
case 0x724e7e:goto L724e7e;
case 0x724e81:c.instructions+=3;goto B724e81;
case 0x724e82:c.instructions+=2;goto B724e82;
case 0x724e83:c.instructions+=1;goto B724e83;
case 0x724e88:goto L724e88;
case 0x724e8b:c.instructions+=1;goto B724e8b;
case 0x724e90:goto L724e90;
case 0x724e94:c.instructions+=3;goto B724e94;
case 0x724e97:c.instructions+=2;goto B724e97;
case 0x724e9b:c.instructions+=1;goto B724e9b;
case 0x724e9d:goto L724e9d;
case 0x724ea0:c.instructions+=1;goto B724ea0;
case 0x724ea3:goto L724ea3;
case 0x724ea6:c.instructions+=3;goto B724ea6;
case 0x724ea9:c.instructions+=2;goto B724ea9;
case 0x724eaa:c.instructions+=1;goto B724eaa;
case 0x724eaf:goto L724eaf;
case 0x724eb3:c.instructions+=5;goto B724eb3;
case 0x724eb6:c.instructions+=4;goto B724eb6;
case 0x724eba:c.instructions+=3;goto B724eba;
case 0x724ebd:c.instructions+=2;goto B724ebd;
case 0x724ebe:c.instructions+=1;goto B724ebe;
case 0x724ec0:goto L724ec0;
case 0x724ec3:c.instructions+=2;goto B724ec3;
case 0x724ec5:c.instructions+=1;goto B724ec5;
case 0x724ec7:goto L724ec7;
case 0x724eca:c.instructions+=2;goto B724eca;
case 0x724ecd:c.instructions+=1;goto B724ecd;
case 0x724ecf:goto L724ecf;
case 0x724ed0:c.instructions+=1;goto B724ed0;
case 0x724ed1:goto L724ed1;
case 0x724ed4:c.instructions+=2;goto B724ed4;
case 0x724ed6:c.instructions+=1;goto B724ed6;
case 0x724ed8:goto L724ed8;
case 0x724edb:c.instructions+=2;goto B724edb;
case 0x724ede:c.instructions+=1;goto B724ede;
case 0x724ee0:goto L724ee0;
case 0x724ee1:c.instructions+=1;goto B724ee1;
case 0x724ee2:goto L724ee2;
case 0x724ee5:c.instructions+=2;goto B724ee5;
case 0x724ee7:c.instructions+=1;goto B724ee7;
case 0x724ee9:goto L724ee9;
case 0x724eef:c.instructions+=5;goto B724eef;
case 0x724ef2:c.instructions+=4;goto B724ef2;
case 0x724ef7:c.instructions+=3;goto B724ef7;
case 0x724ef8:c.instructions+=2;goto B724ef8;
case 0x724efb:c.instructions+=1;goto B724efb;
case 0x724efd:goto L724efd;
case 0x724efe:c.instructions+=1;goto B724efe;
case 0x724eff:goto L724eff;
case 0x724f00:c.instructions+=1;goto B724f00;
case 0x724f05:goto L724f05;
case 0x724f07:c.instructions+=3;goto B724f07;
case 0x724f09:c.instructions+=2;goto B724f09;
case 0x724f0a:c.instructions+=1;goto B724f0a;
case 0x724f0c:goto L724f0c;
case 0x724f12:c.instructions+=1;goto B724f12;
case 0x724f14:goto L724f14;
case 0x724f17:c.instructions+=6;goto B724f17;
case 0x724f1a:c.instructions+=5;goto B724f1a;
case 0x724f1b:c.instructions+=4;goto B724f1b;
case 0x724f1c:c.instructions+=3;goto B724f1c;
case 0x724f1f:c.instructions+=2;goto B724f1f;
case 0x724f22:c.instructions+=1;goto B724f22;
case 0x724f25:goto L724f25;
case 0x724f28:c.instructions+=3;goto B724f28;
case 0x724f29:c.instructions+=2;goto B724f29;
case 0x724f2f:c.instructions+=1;goto B724f2f;
case 0x724f31:goto L724f31;
case 0x724f33:goto L724f33;
case 0x724f34:c.instructions+=4;goto B724f34;
case 0x724f35:c.instructions+=3;goto B724f35;
case 0x724f36:c.instructions+=2;goto B724f36;
case 0x724f37:c.instructions+=1;goto B724f37;
case 0x724f38:goto L724f38;
case 0x724f3c:c.instructions+=5;goto B724f3c;
case 0x724f42:c.instructions+=4;goto B724f42;
case 0x724f48:c.instructions+=3;goto B724f48;
case 0x724f4b:c.instructions+=2;goto B724f4b;
case 0x724f4d:c.instructions+=1;goto B724f4d;
case 0x724f4f:goto L724f4f;
case 0x724f53:c.instructions+=2;goto B724f53;
case 0x724f56:c.instructions+=1;goto B724f56;
case 0x724f58:goto L724f58;
case 0x724f59:c.instructions+=1;goto B724f59;
case 0x724f5a:goto L724f5a;
case 0x724f5c:c.instructions+=1;goto B724f5c;
case 0x724f5d:goto L724f5d;
case 0x724f5e:c.instructions+=20;goto B724f5e;
case 0x724f60:c.instructions+=19;goto B724f60;
case 0x724f61:c.instructions+=18;goto B724f61;
case 0x724f62:c.instructions+=17;goto B724f62;
case 0x724f63:c.instructions+=16;goto B724f63;
case 0x724f66:c.instructions+=15;goto B724f66;
case 0x724f69:c.instructions+=14;goto B724f69;
case 0x724f6c:c.instructions+=13;goto B724f6c;
case 0x724f72:c.instructions+=12;goto B724f72;
case 0x724f74:c.instructions+=11;goto B724f74;
case 0x724f78:c.instructions+=10;goto B724f78;
case 0x724f7e:c.instructions+=9;goto B724f7e;
case 0x724f84:c.instructions+=8;goto B724f84;
case 0x724f87:c.instructions+=7;goto B724f87;
case 0x724f89:c.instructions+=6;goto B724f89;
case 0x724f8f:c.instructions+=5;goto B724f8f;
case 0x724f92:c.instructions+=4;goto B724f92;
case 0x724f95:c.instructions+=3;goto B724f95;
case 0x724f9b:c.instructions+=2;goto B724f9b;
case 0x724f9e:c.instructions+=1;goto B724f9e;
case 0x724fa0:goto L724fa0;
case 0x724fa3:c.instructions+=6;goto B724fa3;
case 0x724fa4:c.instructions+=5;goto B724fa4;
case 0x724fa7:c.instructions+=4;goto B724fa7;
case 0x724faa:c.instructions+=3;goto B724faa;
case 0x724fab:c.instructions+=2;goto B724fab;
case 0x724fac:c.instructions+=1;goto B724fac;
case 0x724fb1:goto L724fb1;
case 0x724fb8:c.instructions+=4;goto B724fb8;
case 0x724fbb:c.instructions+=3;goto B724fbb;
case 0x724fbc:c.instructions+=2;goto B724fbc;
case 0x724fbe:c.instructions+=1;goto B724fbe;
case 0x724fc0:goto L724fc0;
case 0x724fc1:c.instructions+=4;goto B724fc1;
case 0x724fc2:c.instructions+=3;goto B724fc2;
case 0x724fc3:c.instructions+=2;goto B724fc3;
case 0x724fc4:c.instructions+=1;goto B724fc4;
case 0x724fc5:goto L724fc5;
case 0x724fc6:c.instructions+=9;goto B724fc6;
case 0x724fca:c.instructions+=8;goto B724fca;
case 0x724fcc:c.instructions+=7;goto B724fcc;
case 0x724fd2:c.instructions+=6;goto B724fd2;
case 0x724fd8:c.instructions+=5;goto B724fd8;
case 0x724fdb:c.instructions+=4;goto B724fdb;
case 0x724fde:c.instructions+=3;goto B724fde;
case 0x724fe4:c.instructions+=2;goto B724fe4;
case 0x724fe8:c.instructions+=1;goto B724fe8;
case 0x724fea:goto L724fea;
case 0x724fec:c.instructions+=2;goto B724fec;
case 0x724ff2:c.instructions+=1;goto B724ff2;
case 0x724ff4:goto L724ff4;
case 0x724ff6:c.instructions+=2;goto B724ff6;
case 0x724ff9:c.instructions+=1;goto B724ff9;
default:missing_instruction(c.pc);}
B724000:L724000:{c.instructions+=1;NFSU2_TR(0x724000);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L724037;}}
}
B724002:L724002:{c.instructions+=7;NFSU2_TR(0x724002);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724005:{NFSU2_TR(0x724005);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724008:{NFSU2_TR(0x724008);
{u32 ea_=u32(u32(8487092u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72400e:{NFSU2_TR(0x72400e);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B724011:{NFSU2_TR(0x724011);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724012:{NFSU2_TR(0x724012);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B724015:{NFSU2_TR(0x724015);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72401aull));
{goto L724f5d;}
}
B72401a:L72401a:{c.instructions+=4;NFSU2_TR(0x72401a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B72401c:{NFSU2_TR(0x72401c);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+24)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B724022:{NFSU2_TR(0x724022);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724023:{NFSU2_TR(0x724023);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L724037;}}
}
B724025:L724025:{c.instructions+=3;NFSU2_TR(0x724025);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724026:{NFSU2_TR(0x724026);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724027:{NFSU2_TR(0x724027);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72402cull));
TAIL_STATIC(0x725022u,725);
}
B72402c:L72402c:{c.instructions+=5;NFSU2_TR(0x72402c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B72402d:{NFSU2_TR(0x72402d);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B724033:{NFSU2_TR(0x724033);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724034:{NFSU2_TR(0x724034);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724035:{NFSU2_TR(0x724035);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x724025u);}goto L724025;}}
}
B724037:L724037:{c.instructions+=6;NFSU2_TR(0x724037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B724038:{NFSU2_TR(0x724038);
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
B72403a:{NFSU2_TR(0x72403a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72403b:{NFSU2_TR(0x72403b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72403c:{NFSU2_TR(0x72403c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72403d:{NFSU2_TR(0x72403d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72403e:L72403e:{c.instructions+=5;NFSU2_TR(0x72403e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72403f:{NFSU2_TR(0x72403f);
__builtin_memmove((R+20),(R+16),4);
}
B724041:{NFSU2_TR(0x724041);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724042:{NFSU2_TR(0x724042);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B724049:{NFSU2_TR(0x724049);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L724050;}}
}
B72404b:L72404b:{c.instructions+=4;NFSU2_TR(0x72404b);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72404d:{NFSU2_TR(0x72404d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72404e:{NFSU2_TR(0x72404e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72404f:{NFSU2_TR(0x72404f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724050:L724050:{c.instructions+=3;NFSU2_TR(0x724050);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724051:{NFSU2_TR(0x724051);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724054:{NFSU2_TR(0x724054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724059ull));
TAIL_STATIC(0x725480u,725);
}
B724059:L724059:{c.instructions+=4;NFSU2_TR(0x724059);
__builtin_memmove((R+24),(R+0),4);
}
B72405b:{NFSU2_TR(0x72405b);
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
B72405d:{NFSU2_TR(0x72405d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72405e:{NFSU2_TR(0x72405e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72408e;}}
}
B724060:L724060:{c.instructions+=5;NFSU2_TR(0x724060);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B724064:{NFSU2_TR(0x724064);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B724067:{NFSU2_TR(0x724067);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724068:{NFSU2_TR(0x724068);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724069:{NFSU2_TR(0x724069);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72406eull));
TAIL_STATIC(0x727fbdu,727);
}
B72406e:L72406e:{c.instructions+=3;NFSU2_TR(0x72406e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72406f:{NFSU2_TR(0x72406f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724070:{NFSU2_TR(0x724070);
{goto L72408a;}
}
B724072:L724072:{c.instructions+=3;NFSU2_TR(0x724072);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724075:{NFSU2_TR(0x724075);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724078:{NFSU2_TR(0x724078);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72407dull));
TAIL_STATIC(0x72505eu,725);
}
B72407d:L72407d:{c.instructions+=4;NFSU2_TR(0x72407d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B724080:{NFSU2_TR(0x724080);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724081:{NFSU2_TR(0x724081);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724082:{NFSU2_TR(0x724082);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724087ull));
TAIL_STATIC(0x727fbdu,727);
}
B724087:L724087:{c.instructions+=1;NFSU2_TR(0x724087);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B72408a:L72408a:{c.instructions+=2;NFSU2_TR(0x72408a);
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
B72408c:{NFSU2_TR(0x72408c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x724072u);}goto L724072;}}
}
B72408e:L72408e:{c.instructions+=4;NFSU2_TR(0x72408e);
__builtin_memmove((R+0),(R+24),4);
}
B724090:{NFSU2_TR(0x724090);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B724091:{NFSU2_TR(0x724091);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B724092:{NFSU2_TR(0x724092);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724093:L724093:{c.instructions+=5;NFSU2_TR(0x724093);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724094:{NFSU2_TR(0x724094);
__builtin_memmove((R+20),(R+16),4);
}
B724096:{NFSU2_TR(0x724096);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724097:{NFSU2_TR(0x724097);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72409e:{NFSU2_TR(0x72409e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7240a5;}}
}
B7240a0:L7240a0:{c.instructions+=4;NFSU2_TR(0x7240a0);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7240a2:{NFSU2_TR(0x7240a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7240a3:{NFSU2_TR(0x7240a3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7240a4:{NFSU2_TR(0x7240a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7240a5:L7240a5:{c.instructions+=6;NFSU2_TR(0x7240a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7240a6:{NFSU2_TR(0x7240a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7240a9:{NFSU2_TR(0x7240a9);
w4(R+0,u32(0xffffc000ull));
}
B7240ae:{NFSU2_TR(0x7240ae);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7240b0:{NFSU2_TR(0x7240b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7240b1:{NFSU2_TR(0x7240b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7240bc;}}
}
B7240b3:L7240b3:{c.instructions+=3;NFSU2_TR(0x7240b3);
w4(R+0,u32(0x3fffull));
}
B7240b8:{NFSU2_TR(0x7240b8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7240ba:{NFSU2_TR(0x7240ba);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7240be;}}
}
B7240bc:L7240bc:{c.instructions+=1;NFSU2_TR(0x7240bc);
__builtin_memmove((R+24),(R+0),4);
}
B7240be:L7240be:{c.instructions+=2;NFSU2_TR(0x7240be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7240c1:{NFSU2_TR(0x7240c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7240c6ull));
TAIL_STATIC(0x725480u,725);
}
B7240c6:L7240c6:{c.instructions+=4;NFSU2_TR(0x7240c6);
__builtin_memmove((R+28),(R+0),4);
}
B7240c8:{NFSU2_TR(0x7240c8);
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
B7240ca:{NFSU2_TR(0x7240ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7240cb:{NFSU2_TR(0x7240cb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L724124;}}
}
B7240cd:L7240cd:{c.instructions+=2;NFSU2_TR(0x7240cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7240d1:{NFSU2_TR(0x7240d1);
{goto L724114;}
}
B7240d3:L7240d3:{c.instructions+=6;NFSU2_TR(0x7240d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7240d6:{NFSU2_TR(0x7240d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7240d9:{NFSU2_TR(0x7240d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7240dc:{NFSU2_TR(0x7240dc);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b466c))));
}
B7240e2:{NFSU2_TR(0x7240e2);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7240e6:{NFSU2_TR(0x7240e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L724114;}}
}
B7240e8:L7240e8:{c.instructions+=8;NFSU2_TR(0x7240e8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7240ea:{NFSU2_TR(0x7240ea);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B7240ee:{NFSU2_TR(0x7240ee);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+4,u16(u32(r2(R+4))+u32(r2(U+4))));
}
B7240f2:{NFSU2_TR(0x7240f2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7240f6:{NFSU2_TR(0x7240f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B7240f9:{NFSU2_TR(0x7240f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7240fd:{NFSU2_TR(0x7240fd);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b46ec),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B724104:{NFSU2_TR(0x724104);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72410b;}}
}
B724106:L724106:{c.instructions+=1;NFSU2_TR(0x724106);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B72410b:L72410b:{c.instructions+=2;NFSU2_TR(0x72410b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72410e:{NFSU2_TR(0x72410e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724113ull));
{goto L724fc5;}
}
B724113:L724113:{c.instructions+=1;NFSU2_TR(0x724113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724114:L724114:{c.instructions+=4;NFSU2_TR(0x724114);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B724117:{NFSU2_TR(0x724117);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724118:{NFSU2_TR(0x724118);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724119:{NFSU2_TR(0x724119);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72411eull));
TAIL_STATIC(0x727fbdu,727);
}
B72411e:L72411e:{c.instructions+=4;NFSU2_TR(0x72411e);
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
B724120:{NFSU2_TR(0x724120);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724121:{NFSU2_TR(0x724121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724122:{NFSU2_TR(0x724122);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7240d3u);}goto L7240d3;}}
}
B724124:L724124:{c.instructions+=5;NFSU2_TR(0x724124);
__builtin_memmove((R+0),(R+28),4);
}
B724126:{NFSU2_TR(0x724126);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B724127:{NFSU2_TR(0x724127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B724128:{NFSU2_TR(0x724128);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B724129:{NFSU2_TR(0x724129);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72412a:L72412a:{c.instructions+=5;NFSU2_TR(0x72412a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72412b:{NFSU2_TR(0x72412b);
__builtin_memmove((R+20),(R+16),4);
}
B72412d:{NFSU2_TR(0x72412d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B724130:{NFSU2_TR(0x724130);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B724137:{NFSU2_TR(0x724137);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72413e;}}
}
B724139:L724139:{c.instructions+=4;NFSU2_TR(0x724139);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72413b:{NFSU2_TR(0x72413b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72413c:{NFSU2_TR(0x72413c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72413d:{NFSU2_TR(0x72413d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72413e:L72413e:{c.instructions+=2;NFSU2_TR(0x72413e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724141:{NFSU2_TR(0x724141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724146ull));
TAIL_STATIC(0x725480u,725);
}
B724146:L724146:{c.instructions+=4;NFSU2_TR(0x724146);
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
B724148:{NFSU2_TR(0x724148);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724149:{NFSU2_TR(0x724149);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72414c:{NFSU2_TR(0x72414c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L724239;}}
}
B724152:L724152:{c.instructions+=8;NFSU2_TR(0x724152);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B724155:{NFSU2_TR(0x724155);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B724159:{NFSU2_TR(0x724159);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72415c:{NFSU2_TR(0x72415c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72415d:{NFSU2_TR(0x72415d);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B724163:{NFSU2_TR(0x724163);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724166:{NFSU2_TR(0x724166);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B724169:{NFSU2_TR(0x724169);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72416eull));
TAIL_STATIC(0x727fbdu,727);
}
B72416e:L72416e:{c.instructions+=4;NFSU2_TR(0x72416e);
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
B724170:{NFSU2_TR(0x724170);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724171:{NFSU2_TR(0x724171);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724172:{NFSU2_TR(0x724172);
if(r1(R+518)){{goto L724239;}}
}
B724178:L724178:{c.instructions+=3;NFSU2_TR(0x724178);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724179:{NFSU2_TR(0x724179);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72417a:{NFSU2_TR(0x72417a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72417b:L72417b:{c.instructions+=8;NFSU2_TR(0x72417b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72417e:{NFSU2_TR(0x72417e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B724182:{NFSU2_TR(0x724182);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B724185:{NFSU2_TR(0x724185);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B724188:{NFSU2_TR(0x724188);
w4(R+24,u32(u32(r4(R+24))+u32(m4(0x8b466c))));
}
B72418e:{NFSU2_TR(0x72418e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B724192:{NFSU2_TR(0x724192);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x0ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B724196:{NFSU2_TR(0x724196);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L724220;}}
}
B72419c:L72419c:{c.instructions+=1;NFSU2_TR(0x72419c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72419f:L72419f:{c.instructions+=12;NFSU2_TR(0x72419f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+28,u32(s32(s16(r2(U+0)))));
}
B7241a2:{NFSU2_TR(0x7241a2);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B7241a4:{NFSU2_TR(0x7241a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7241a7:{NFSU2_TR(0x7241a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7241aa:{NFSU2_TR(0x7241aa);
w4(R+4,u32(u32(r4(R+4))+u32(m4(0x8b466c))));
}
B7241b0:{NFSU2_TR(0x7241b0);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7241b3:{NFSU2_TR(0x7241b3);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7241b6:{NFSU2_TR(0x7241b6);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7241b9:{NFSU2_TR(0x7241b9);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B7241bb:{NFSU2_TR(0x7241bb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7241bd:{NFSU2_TR(0x7241bd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7241c0:{NFSU2_TR(0x7241c0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L7241da;}}
}
B7241c2:L7241c2:{c.instructions+=5;NFSU2_TR(0x7241c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7241c5:{NFSU2_TR(0x7241c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7241c6:{NFSU2_TR(0x7241c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7241ca:{NFSU2_TR(0x7241ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7241cd:{NFSU2_TR(0x7241cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7241d2ull));
TAIL_STATIC(0x7276bfu,727);
}
B7241d2:L7241d2:{c.instructions+=2;NFSU2_TR(0x7241d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7241d3:{NFSU2_TR(0x7241d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7241d8ull));
{goto L724f5d;}
}
B7241d8:L7241d8:{c.instructions+=2;NFSU2_TR(0x7241d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7241d9:{NFSU2_TR(0x7241d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7241da:L7241da:{c.instructions+=6;NFSU2_TR(0x7241da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7241dd:{NFSU2_TR(0x7241dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7241e1:{NFSU2_TR(0x7241e1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B7241e2:{NFSU2_TR(0x7241e2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B7241e3:{NFSU2_TR(0x7241e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7241e6:{NFSU2_TR(0x7241e6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72419fu);}goto L72419f;}}
}
B7241e8:L7241e8:{c.instructions+=2;NFSU2_TR(0x7241e8);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7241ec:{NFSU2_TR(0x7241ec);
if(r1(R+518)){{goto L724220;}}
}
B7241ee:L7241ee:{c.instructions+=2;NFSU2_TR(0x7241ee);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B7241f2:{NFSU2_TR(0x7241f2);
if(r1(R+518)){{goto L724214;}}
}
B7241f4:L7241f4:{c.instructions+=3;NFSU2_TR(0x7241f4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7241f6:{NFSU2_TR(0x7241f6);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+24)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7241fc:{NFSU2_TR(0x7241fc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L724220;}}
}
B7241fe:L7241fe:{c.instructions+=3;NFSU2_TR(0x7241fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7241ff:{NFSU2_TR(0x7241ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724202:{NFSU2_TR(0x724202);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724207ull));
TAIL_STATIC(0x725022u,725);
}
B724207:L724207:{c.instructions+=5;NFSU2_TR(0x724207);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B724208:{NFSU2_TR(0x724208);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72420e:{NFSU2_TR(0x72420e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72420f:{NFSU2_TR(0x72420f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724210:{NFSU2_TR(0x724210);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7241feu);}goto L7241fe;}}
}
B724212:L724212:{c.instructions+=1;NFSU2_TR(0x724212);
{goto L724220;}
}
B724214:L724214:{c.instructions+=3;NFSU2_TR(0x724214);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724216:{NFSU2_TR(0x724216);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724219:{NFSU2_TR(0x724219);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72421eull));
TAIL_STATIC(0x725022u,725);
}
B72421e:L72421e:{c.instructions+=2;NFSU2_TR(0x72421e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72421f:{NFSU2_TR(0x72421f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724220:L724220:{c.instructions+=4;NFSU2_TR(0x724220);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B724223:{NFSU2_TR(0x724223);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724224:{NFSU2_TR(0x724224);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724227:{NFSU2_TR(0x724227);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72422cull));
TAIL_STATIC(0x727fbdu,727);
}
B72422c:L72422c:{c.instructions+=4;NFSU2_TR(0x72422c);
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
B72422e:{NFSU2_TR(0x72422e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72422f:{NFSU2_TR(0x72422f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724230:{NFSU2_TR(0x724230);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72417bu);}goto L72417b;}}
}
B724236:L724236:{c.instructions+=3;NFSU2_TR(0x724236);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B724237:{NFSU2_TR(0x724237);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B724238:{NFSU2_TR(0x724238);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B724239:L724239:{c.instructions+=3;NFSU2_TR(0x724239);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72423c:{NFSU2_TR(0x72423c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72423d:{NFSU2_TR(0x72423d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72423e:L72423e:{c.instructions+=14;NFSU2_TR(0x72423e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724242:{NFSU2_TR(0x724242);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B724244:{NFSU2_TR(0x724244);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724245:{NFSU2_TR(0x724245);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724247:{NFSU2_TR(0x724247);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72424a:{NFSU2_TR(0x72424a);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B72424d:{NFSU2_TR(0x72424d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
w1(U+4,u8(0x7full));
s1(u32(r4(U+0)),r1(U+4));
}
B724251:{NFSU2_TR(0x724251);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+4,u8(0x40ull));
s1(u32(r4(U+0)),r1(U+4));
}
B724255:{NFSU2_TR(0x724255);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B724258:{NFSU2_TR(0x724258);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72425b:{NFSU2_TR(0x72425b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72425e:{NFSU2_TR(0x72425e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B724262:{NFSU2_TR(0x724262);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724265:{NFSU2_TR(0x724265);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B724266:L724266:{c.instructions+=5;NFSU2_TR(0x724266);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724269:{NFSU2_TR(0x724269);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B72426b:{NFSU2_TR(0x72426b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B72426e:{NFSU2_TR(0x72426e);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B72426f:{NFSU2_TR(0x72426f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x724266u);}goto L724266;}}
}
B724271:L724271:{c.instructions+=4;NFSU2_TR(0x724271);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724273:{NFSU2_TR(0x724273);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724276:{NFSU2_TR(0x724276);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B724279:{NFSU2_TR(0x724279);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72427a:L72427a:{c.instructions+=7;NFSU2_TR(0x72427a);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B72427d:{NFSU2_TR(0x72427d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72427e:{NFSU2_TR(0x72427e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B724280:{NFSU2_TR(0x724280);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B724281:{NFSU2_TR(0x724281);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B724284:{NFSU2_TR(0x724284);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B724285:{NFSU2_TR(0x724285);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72427au);}goto L72427a;}}
}
B724287:L724287:{c.instructions+=3;NFSU2_TR(0x724287);
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
B724289:{NFSU2_TR(0x724289);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72428a:{NFSU2_TR(0x72428a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72428b:L72428b:{c.instructions+=7;NFSU2_TR(0x72428b);
s4(0x8b4850,u32(0x728744ull));
}
B724295:{NFSU2_TR(0x724295);
s4(0x8b4854,u32(0x728469ull));
}
B72429f:{NFSU2_TR(0x72429f);
s4(0x8b4858,u32(0x72820cull));
}
B7242a9:{NFSU2_TR(0x7242a9);
s4(0x8b48b0,u32(0x20ull));
}
B7242b3:{NFSU2_TR(0x7242b3);
s4(0x8b48b4,u32(0x34ull));
}
B7242bd:{NFSU2_TR(0x7242bd);
s4(0x8b48b8,u32(0x38ull));
}
B7242c7:{NFSU2_TR(0x7242c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7242c8:L7242c8:{c.instructions+=1;NFSU2_TR(0x7242c8);
TAIL_STATIC(0x721515u,721);
}
B7242cd:L7242cd:{c.instructions+=4;NFSU2_TR(0x7242cd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7242cf:{NFSU2_TR(0x7242cf);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b449c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7242d5:{NFSU2_TR(0x7242d5);
s4(0x8b4560,u32(0x6996f4ull));
}
B7242df:{NFSU2_TR(0x7242df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7242fc;}}
}
B7242e1:L7242e1:{c.instructions+=5;NFSU2_TR(0x7242e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7242e2:{NFSU2_TR(0x7242e2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7242e4:{NFSU2_TR(0x7242e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7242e5:{NFSU2_TR(0x7242e5);
u8 U[4];
w4(U+0,u32(0x7242c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7242ea:{NFSU2_TR(0x7242ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7242efull));
TAIL_STATIC(0x6f55f3u,6f5);
}
B7242ef:L7242ef:{c.instructions+=2;NFSU2_TR(0x7242ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7242f2:{NFSU2_TR(0x7242f2);
s4(0x8b449c,u32(0x1ull));
}
B7242fc:L7242fc:{c.instructions+=2;NFSU2_TR(0x7242fc);
u8 U[4];
w4(U+0,u32(0x7296bdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724301:{NFSU2_TR(0x724301);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724306ull));
TAIL_STATIC(0x6f65c1u,6f6);
}
B724306:L724306:{c.instructions+=3;NFSU2_TR(0x724306);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724307:{NFSU2_TR(0x724307);
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
B724309:{NFSU2_TR(0x724309);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72430a:L72430a:{c.instructions+=1;NFSU2_TR(0x72430a);
TAIL_STATIC(0x734e40u,734);
}
B72430f:L72430f:{c.instructions+=1;NFSU2_TR(0x72430f);
TAIL_STATIC(0x734e60u,734);
}
B724314:L724314:{c.instructions+=3;NFSU2_TR(0x724314);
w4(R+0,u32(0x72430aull));
}
B724319:{NFSU2_TR(0x724319);
u8 U[8];
__builtin_memmove((U+0),gp(0x818088),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72431f:{NFSU2_TR(0x72431f);
if(r1(R+518)){{goto L724330;}}
}
B724321:L724321:{c.instructions+=2;NFSU2_TR(0x724321);
__builtin_memmove(gp(0x818088),(R+0),4);
}
B724326:{NFSU2_TR(0x724326);
s4(0x81808c,u32(0x72430full));
}
B724330:L724330:{c.instructions+=2;NFSU2_TR(0x724330);
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
B724332:{NFSU2_TR(0x724332);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724333:L724333:{c.instructions+=2;NFSU2_TR(0x724333);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72433a:{NFSU2_TR(0x72433a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L724340;}}
}
B72433c:L72433c:{c.instructions+=3;NFSU2_TR(0x72433c);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72433e:{NFSU2_TR(0x72433e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72433f:{NFSU2_TR(0x72433f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724340:L724340:{c.instructions+=3;NFSU2_TR(0x724340);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724341:{NFSU2_TR(0x724341);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724345:{NFSU2_TR(0x724345);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72434aull));
TAIL_STATIC(0x727f4du,727);
}
B72434a:L72434a:{c.instructions+=3;NFSU2_TR(0x72434a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72434e:{NFSU2_TR(0x72434e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72434f:{NFSU2_TR(0x72434f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724354ull));
TAIL_STATIC(0x72768fu,727);
}
B724354:L724354:{c.instructions+=4;NFSU2_TR(0x724354);
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
B724356:{NFSU2_TR(0x724356);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724357:{NFSU2_TR(0x724357);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724358:{NFSU2_TR(0x724358);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72435f;}}
}
B72435a:L72435a:{c.instructions+=4;NFSU2_TR(0x72435a);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72435c:{NFSU2_TR(0x72435c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72435d:{NFSU2_TR(0x72435d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72435e:{NFSU2_TR(0x72435e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72435f:L72435f:{c.instructions+=6;NFSU2_TR(0x72435f);
__builtin_memmove((R+0),gp(0x8b4670),4);
}
B724364:{NFSU2_TR(0x724364);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724365:{NFSU2_TR(0x724365);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B724368:{NFSU2_TR(0x724368);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72436c:{NFSU2_TR(0x72436c);
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
B72436e:{NFSU2_TR(0x72436e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L724393;}}
}
B724370:L724370:{c.instructions+=3;NFSU2_TR(0x724370);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B724374:{NFSU2_TR(0x724374);
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
B724376:{NFSU2_TR(0x724376);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L724393;}}
}
B724378:L724378:{c.instructions+=6;NFSU2_TR(0x724378);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72437c:{NFSU2_TR(0x72437c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72437d:{NFSU2_TR(0x72437d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72437e:{NFSU2_TR(0x72437e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72437f:{NFSU2_TR(0x72437f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724380:{NFSU2_TR(0x724380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724385ull));
TAIL_STATIC(0x727669u,727);
}
B724385:L724385:{c.instructions+=5;NFSU2_TR(0x724385);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724386:{NFSU2_TR(0x724386);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724387:{NFSU2_TR(0x724387);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724388:{NFSU2_TR(0x724388);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724389:{NFSU2_TR(0x724389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72438eull));
TAIL_STATIC(0x729b1du,729);
}
B72438e:L72438e:{c.instructions+=2;NFSU2_TR(0x72438e);
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
B724391:{NFSU2_TR(0x724391);
{goto L724396;}
}
B724393:L724393:{c.instructions+=2;NFSU2_TR(0x724393);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724395:{NFSU2_TR(0x724395);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B724396:L724396:{c.instructions+=3;NFSU2_TR(0x724396);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B724397:{NFSU2_TR(0x724397);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B724398:{NFSU2_TR(0x724398);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724399:L724399:{c.instructions+=2;NFSU2_TR(0x724399);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7243a0:{NFSU2_TR(0x7243a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7243a5;}}
}
B7243a2:L7243a2:{c.instructions+=2;NFSU2_TR(0x7243a2);
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
B7243a4:{NFSU2_TR(0x7243a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7243a5:L7243a5:{c.instructions+=1;NFSU2_TR(0x7243a5);
TAIL_STATIC(0x729cdcu,729);
}
B7243aa:L7243aa:{c.instructions+=6;NFSU2_TR(0x7243aa);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7243ac:{NFSU2_TR(0x7243ac);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7243b0:{NFSU2_TR(0x7243b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7243b2:{NFSU2_TR(0x7243b2);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7243b6:{NFSU2_TR(0x7243b6);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7243ba:{NFSU2_TR(0x7243ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7243bfull));
TAIL_STATIC(0x7226c9u,722);
}
B7243bf:L7243bf:{c.instructions+=2;NFSU2_TR(0x7243bf);
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
B7243c2:{NFSU2_TR(0x7243c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7243c3:L7243c3:{c.instructions+=10;NFSU2_TR(0x7243c3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7243c4:{NFSU2_TR(0x7243c4);
__builtin_memmove((R+20),(R+16),4);
}
B7243c6:{NFSU2_TR(0x7243c6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7243c8:{NFSU2_TR(0x7243c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7243cb:{NFSU2_TR(0x7243cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7243ce:{NFSU2_TR(0x7243ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7243d1:{NFSU2_TR(0x7243d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7243d4:{NFSU2_TR(0x7243d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7243d7:{NFSU2_TR(0x7243d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7243da:{NFSU2_TR(0x7243da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7243dfull));
TAIL_STATIC(0x722b6au,722);
}
B7243df:L7243df:{c.instructions+=3;NFSU2_TR(0x7243df);
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
B7243e2:{NFSU2_TR(0x7243e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7243e3:{NFSU2_TR(0x7243e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7243e4:L7243e4:{c.instructions+=4;NFSU2_TR(0x7243e4);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b46f0),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7243eb:{NFSU2_TR(0x7243eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7243ec:{NFSU2_TR(0x7243ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7243ed:{NFSU2_TR(0x7243ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L724443;}}
}
B7243ef:L7243ef:{c.instructions+=12;NFSU2_TR(0x7243ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7243f0:{NFSU2_TR(0x7243f0);
w1(R+512,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7243f2:{NFSU2_TR(0x7243f2);
u8 U[4];
w4(U+0,u32(0x27ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7243f4:{NFSU2_TR(0x7243f4);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7243f5:{NFSU2_TR(0x7243f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7243f6:{NFSU2_TR(0x7243f6);
s2(0x8b44c4,u16(0x10ull));
}
B7243ff:{NFSU2_TR(0x7243ff);
s1(0x8b44e3,u8(0x5aull));
}
B724406:{NFSU2_TR(0x724406);
__builtin_memmove(gp(0x8b44d4),(R+12),1);
}
B72440c:{NFSU2_TR(0x72440c);
s1(0x8b44cf,u8(0x0ull));
}
B724413:{NFSU2_TR(0x724413);
s4(0x8b44d0,u32(0xbf800000ull));
}
B72441d:{NFSU2_TR(0x72441d);
w4(R+24,u32(0x8b44bcull));
}
B724422:{NFSU2_TR(0x724422);
w4(R+28,u32(0x8b456cull));
}
B724427:L724427:{c.instructions+=1;NFSU2_TR(0x724427);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L724429;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x724427u);}goto L724427;}
}
B724429:L724429:{c.instructions+=1;NFSU2_TR(0x724429);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72442eull));
{goto L7249b9;}
}
B72442e:L72442e:{c.instructions+=2;NFSU2_TR(0x72442e);
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
B724430:{NFSU2_TR(0x724430);
if(r1(R+518)){{goto L72443c;}}
}
B724432:L724432:{c.instructions+=1;NFSU2_TR(0x724432);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724437ull));
{goto L724aaa;}
}
B724437:L724437:{c.instructions+=1;NFSU2_TR(0x724437);
__builtin_memmove(gp(0x8b46f4),(R+0),4);
}
B72443c:L72443c:{c.instructions+=2;NFSU2_TR(0x72443c);
__builtin_memmove(gp(0x8b46f0),(R+12),4);
}
B724442:{NFSU2_TR(0x724442);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B724443:L724443:{c.instructions+=5;NFSU2_TR(0x724443);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B724447:{NFSU2_TR(0x724447);
__builtin_memmove((R+0),gp(0x8b46f4),4);
}
B72444c:{NFSU2_TR(0x72444c);
u8 U[4];
w4(U+0,u32(0x33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72444e:{NFSU2_TR(0x72444e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72444f:{NFSU2_TR(0x72444f);
w4(R+24,u32(0x8b44a0ull));
}
B724454:L724454:{c.instructions+=1;NFSU2_TR(0x724454);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L724456;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x724454u);}goto L724454;}
}
B724456:L724456:{c.instructions+=3;NFSU2_TR(0x724456);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B724457:{NFSU2_TR(0x724457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B724458:{NFSU2_TR(0x724458);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724459:L724459:{c.instructions+=9;NFSU2_TR(0x724459);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72445d:{NFSU2_TR(0x72445d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72445e:{NFSU2_TR(0x72445e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72445f:{NFSU2_TR(0x72445f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724460:{NFSU2_TR(0x724460);
u8 U[4];
w4(U+0,u32(0x27ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724462:{NFSU2_TR(0x724462);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724463:{NFSU2_TR(0x724463);
w4(R+12,u32(0x8b44bcull));
}
B724468:{NFSU2_TR(0x724468);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((R+24),(U+0),4);
}
B72446b:{NFSU2_TR(0x72446b);
__builtin_memmove((R+28),(R+12),4);
}
B72446d:L72446d:{c.instructions+=1;NFSU2_TR(0x72446d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L72446f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72446du);}goto L72446d;}
}
B72446f:L72446f:{c.instructions+=4;NFSU2_TR(0x72446f);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724471:{NFSU2_TR(0x724471);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B724477:{NFSU2_TR(0x724477);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724478:{NFSU2_TR(0x724478);
w4(R+28,u32(0x8b4558ull));
}
B72447d:L72447d:{c.instructions+=1;NFSU2_TR(0x72447d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L72447f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72447du);}goto L72447d;}
}
B72447f:L72447f:{c.instructions+=1;NFSU2_TR(0x72447f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724484ull));
{goto L724ab9;}
}
B724484:L724484:{c.instructions+=4;NFSU2_TR(0x724484);
u8 U[4];
w4(U+0,u32(0x27ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724486:{NFSU2_TR(0x724486);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724487:{NFSU2_TR(0x724487);
__builtin_memmove((R+24),(R+12),4);
}
B724489:{NFSU2_TR(0x724489);
w4(R+28,u32(0x8b456cull));
}
B72448e:L72448e:{c.instructions+=1;NFSU2_TR(0x72448e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L724490;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72448eu);}goto L72448e;}
}
B724490:L724490:{c.instructions+=5;NFSU2_TR(0x724490);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B724491:{NFSU2_TR(0x724491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B724492:{NFSU2_TR(0x724492);
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
B724494:{NFSU2_TR(0x724494);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B724495:{NFSU2_TR(0x724495);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724496:L724496:{c.instructions+=1;NFSU2_TR(0x724496);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72449bull));
TAIL_STATIC(0x721912u,721);
}
B72449b:L72449b:{c.instructions+=2;NFSU2_TR(0x72449b);
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
B72449d:{NFSU2_TR(0x72449d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7244a3;}}
}
B72449f:L72449f:{c.instructions+=3;NFSU2_TR(0x72449f);
u8 U[4];
w4(U+0,u32(0xfffffff2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7244a1:{NFSU2_TR(0x7244a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7244a2:{NFSU2_TR(0x7244a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7244a3:L7244a3:{c.instructions+=3;NFSU2_TR(0x7244a3);
__builtin_memmove((R+0),gp(0x8b4654),4);
}
B7244a8:{NFSU2_TR(0x7244a8);
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
B7244aa:{NFSU2_TR(0x7244aa);
if(r1(R+518)){{goto L7244ae;}}
}
B7244ac:L7244ac:{c.instructions+=1;NFSU2_TR(0x7244ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7244aeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7244ae:L7244ae:{c.instructions+=3;NFSU2_TR(0x7244ae);
__builtin_memmove((R+0),gp(0x8b4658),4);
}
B7244b3:{NFSU2_TR(0x7244b3);
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
B7244b5:{NFSU2_TR(0x7244b5);
if(r1(R+518)){{goto L7244b9;}}
}
B7244b7:L7244b7:{c.instructions+=1;NFSU2_TR(0x7244b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7244b9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7244b9:L7244b9:{c.instructions+=3;NFSU2_TR(0x7244b9);
__builtin_memmove((R+0),gp(0x8b465c),4);
}
B7244be:{NFSU2_TR(0x7244be);
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
B7244c0:{NFSU2_TR(0x7244c0);
if(r1(R+518)){{goto L7244c4;}}
}
B7244c2:L7244c2:{c.instructions+=1;NFSU2_TR(0x7244c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7244c4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7244c4:L7244c4:{c.instructions+=3;NFSU2_TR(0x7244c4);
__builtin_memmove((R+0),gp(0x8b4668),4);
}
B7244c9:{NFSU2_TR(0x7244c9);
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
B7244cb:{NFSU2_TR(0x7244cb);
if(r1(R+518)){{goto L7244cf;}}
}
B7244cd:L7244cd:{c.instructions+=1;NFSU2_TR(0x7244cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7244cfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7244cf:L7244cf:{c.instructions+=3;NFSU2_TR(0x7244cf);
__builtin_memmove((R+0),gp(0x8b4664),4);
}
B7244d4:{NFSU2_TR(0x7244d4);
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
B7244d6:{NFSU2_TR(0x7244d6);
if(r1(R+518)){{goto L7244da;}}
}
B7244d8:L7244d8:{c.instructions+=1;NFSU2_TR(0x7244d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7244daull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7244da:L7244da:{c.instructions+=1;NFSU2_TR(0x7244da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7244dfull));
TAIL_STATIC(0x7258d0u,725);
}
B7244df:L7244df:{c.instructions+=3;NFSU2_TR(0x7244df);
__builtin_memmove((R+0),gp(0x8b4660),4);
}
B7244e4:{NFSU2_TR(0x7244e4);
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
B7244e6:{NFSU2_TR(0x7244e6);
if(r1(R+518)){{goto L7244ed;}}
}
B7244e8:L7244e8:{c.instructions+=2;NFSU2_TR(0x7244e8);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7244ea:{NFSU2_TR(0x7244ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7244ecull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7244ec:L7244ec:{c.instructions+=1;NFSU2_TR(0x7244ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7244ed:L7244ed:{c.instructions+=3;NFSU2_TR(0x7244ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7244ee:{NFSU2_TR(0x7244ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7244f0:{NFSU2_TR(0x7244f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7244f5ull));
TAIL_STATIC(0x725d92u,725);
}
B7244f5:L7244f5:{c.instructions+=1;NFSU2_TR(0x7244f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7244faull));
TAIL_STATIC(0x721f99u,721);
}
B7244fa:L7244fa:{c.instructions+=2;NFSU2_TR(0x7244fa);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b466c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724500:{NFSU2_TR(0x724500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724505ull));
{goto L724894;}
}
B724505:L724505:{c.instructions+=2;NFSU2_TR(0x724505);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4670),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72450b:{NFSU2_TR(0x72450b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724510ull));
{goto L724894;}
}
B724510:L724510:{c.instructions+=2;NFSU2_TR(0x724510);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B724513:{NFSU2_TR(0x724513);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724518ull));
TAIL_STATIC(0x721fa7u,721);
}
B724518:L724518:{c.instructions+=1;NFSU2_TR(0x724518);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72451dull));
{goto L72478d;}
}
B72451d:L72451d:{c.instructions+=3;NFSU2_TR(0x72451d);
__builtin_memmove((R+24),(R+0),4);
}
B72451f:{NFSU2_TR(0x72451f);
s1(0x8b4608,u8(0x0ull));
}
B724526:{NFSU2_TR(0x724526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72452bull));
TAIL_STATIC(0x72788du,727);
}
B72452b:L72452b:{c.instructions+=3;NFSU2_TR(0x72452b);
__builtin_memmove((R+0),(R+24),4);
}
B72452d:{NFSU2_TR(0x72452d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72452e:{NFSU2_TR(0x72452e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72452f:L72452f:{c.instructions+=9;NFSU2_TR(0x72452f);
w4(R+0,u32(s32(s16(m2(0x8b460c)))));
}
B724536:{NFSU2_TR(0x724536);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724537:{NFSU2_TR(0x724537);
__builtin_memmove((R+24),gp(0x8180b8),4);
}
B72453d:{NFSU2_TR(0x72453d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x24ull))));
}
B724540:{NFSU2_TR(0x724540);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B724543:{NFSU2_TR(0x724543);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724544:{NFSU2_TR(0x724544);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B724547:{NFSU2_TR(0x724547);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724548:{NFSU2_TR(0x724548);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72454dull));
{goto L724792;}
}
B72454d:L72454d:{c.instructions+=4;NFSU2_TR(0x72454d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72454e:{NFSU2_TR(0x72454e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72454f:{NFSU2_TR(0x72454f);
__builtin_memmove(gp(0x8b466c),(R+0),4);
}
B724554:{NFSU2_TR(0x724554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724559ull));
TAIL_STATIC(0x727030u,727);
}
B724559:L724559:{c.instructions+=8;NFSU2_TR(0x724559);
w4(R+4,u32(s32(s16(m2(0x8b460c)))));
}
B724560:{NFSU2_TR(0x724560);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B724563:{NFSU2_TR(0x724563);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B724566:{NFSU2_TR(0x724566);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b466c))));
}
B72456c:{NFSU2_TR(0x72456c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B72456f:{NFSU2_TR(0x72456f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B724571:{NFSU2_TR(0x724571);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B724573:{NFSU2_TR(0x724573);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7245bc;}}
}
B724575:L724575:{c.instructions+=1;NFSU2_TR(0x724575);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B724577:L724577:{c.instructions+=6;NFSU2_TR(0x724577);
__builtin_memmove((R+4),gp(0x8b466c),4);
}
B72457d:{NFSU2_TR(0x72457d);
u8 U[16];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B724581:{NFSU2_TR(0x724581);
__builtin_memmove((R+4),gp(0x8180b8),4);
}
B724587:{NFSU2_TR(0x724587);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B724589:{NFSU2_TR(0x724589);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72458b:{NFSU2_TR(0x72458b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7245a7;}}
}
B72458d:L72458d:{c.instructions+=8;NFSU2_TR(0x72458d);
__builtin_memmove((R+4),gp(0x8b466c),4);
}
B724593:{NFSU2_TR(0x724593);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B724595:{NFSU2_TR(0x724595);
u8 U[16];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B724599:{NFSU2_TR(0x724599);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72459c:{NFSU2_TR(0x72459c);
__builtin_memmove((R+4),gp(0x8180b8),4);
}
B7245a2:{NFSU2_TR(0x7245a2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7245a3:{NFSU2_TR(0x7245a3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7245a5:{NFSU2_TR(0x7245a5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72458du);}goto L72458d;}}
}
B7245a7:L7245a7:{c.instructions+=6;NFSU2_TR(0x7245a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7245aa:{NFSU2_TR(0x7245aa);
w4(R+4,u32(s32(s16(m2(0x8b460c)))));
}
B7245b1:{NFSU2_TR(0x7245b1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7245b2:{NFSU2_TR(0x7245b2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x90ull))));
}
B7245b8:{NFSU2_TR(0x7245b8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7245ba:{NFSU2_TR(0x7245ba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x724577u);}goto L724577;}}
}
B7245bc:L7245bc:{c.instructions+=4;NFSU2_TR(0x7245bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7245bd:{NFSU2_TR(0x7245bd);
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
B7245bf:{NFSU2_TR(0x7245bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7245c0:{NFSU2_TR(0x7245c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7245c1:L7245c1:{c.instructions+=3;NFSU2_TR(0x7245c1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7245c3:{NFSU2_TR(0x7245c3);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b402c),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7245ca:{NFSU2_TR(0x7245ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7245dc;}}
}
B7245cc:L7245cc:{c.instructions+=3;NFSU2_TR(0x7245cc);
__builtin_memmove((R+0),gp(0x8b4028),4);
}
B7245d1:{NFSU2_TR(0x7245d1);
__builtin_memmove(gp(0x818084),(R+0),4);
}
B7245d6:{NFSU2_TR(0x7245d6);
__builtin_memmove(gp(0x8b402c),(R+8),4);
}
B7245dc:L7245dc:{c.instructions+=2;NFSU2_TR(0x7245dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7245e0:{NFSU2_TR(0x7245e0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7245e2:L7245e2:{c.instructions+=2;NFSU2_TR(0x7245e2);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B7245e4:{NFSU2_TR(0x7245e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72461b;}}
}
B7245e6:L7245e6:{c.instructions+=2;NFSU2_TR(0x7245e6);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b400c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+8))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7245ec:{NFSU2_TR(0x7245ec);
if(r1(R+518)){{goto L7245fd;}}
}
B7245ee:L7245ee:{c.instructions+=3;NFSU2_TR(0x7245ee);
__builtin_memmove((R+4),gp(0x8b4008),1);
}
B7245f4:{NFSU2_TR(0x7245f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2aull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7245f7:{NFSU2_TR(0x7245f7);
__builtin_memmove(gp(0x8b400c),(R+8),4);
}
B7245fd:L7245fd:{c.instructions+=2;NFSU2_TR(0x7245fd);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b4034),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+8))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B724603:{NFSU2_TR(0x724603);
if(r1(R+518)){{goto L724616;}}
}
B724605:L724605:{c.instructions+=3;NFSU2_TR(0x724605);
__builtin_memmove((R+4),gp(0x8b4030),2);
}
B72460c:{NFSU2_TR(0x72460c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x26ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B724610:{NFSU2_TR(0x724610);
__builtin_memmove(gp(0x8b4034),(R+8),4);
}
B724616:L724616:{c.instructions+=3;NFSU2_TR(0x724616);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B724618:{NFSU2_TR(0x724618);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B724619:{NFSU2_TR(0x724619);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7245e2u);}goto L7245e2;}
}
B72461b:L72461b:{c.instructions+=3;NFSU2_TR(0x72461b);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72461d:{NFSU2_TR(0x72461d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72461e:{NFSU2_TR(0x72461e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72461f:L72461f:{c.instructions+=5;NFSU2_TR(0x72461f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724620:{NFSU2_TR(0x724620);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B724622:{NFSU2_TR(0x724622);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b4608),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B724628:{NFSU2_TR(0x724628);
s1(0x818b38,u8(0x53ull));
}
B72462f:{NFSU2_TR(0x72462f);
if(r1(R+518)){{goto L724635;}}
}
B724631:L724631:{c.instructions+=3;NFSU2_TR(0x724631);
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
B724633:{NFSU2_TR(0x724633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B724634:{NFSU2_TR(0x724634);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724635:L724635:{c.instructions+=4;NFSU2_TR(0x724635);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724636:{NFSU2_TR(0x724636);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72463a:{NFSU2_TR(0x72463a);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72463e:{NFSU2_TR(0x72463e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724643ull));
TAIL_STATIC(0x727030u,727);
}
B724643:L724643:{c.instructions+=3;NFSU2_TR(0x724643);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724647:{NFSU2_TR(0x724647);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72464b:{NFSU2_TR(0x72464b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724650ull));
{goto L724737;}
}
B724650:L724650:{c.instructions+=3;NFSU2_TR(0x724650);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B724653:{NFSU2_TR(0x724653);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b460c),2);
w2(U+2,u16(u32(r2(U+0))-u32(r2(R+12))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B72465a:{NFSU2_TR(0x72465a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L724677;}}
}
B72465c:L72465c:{c.instructions+=3;NFSU2_TR(0x72465c);
w4(R+24,u32(0x8b44a0ull));
}
B724661:{NFSU2_TR(0x724661);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724662:{NFSU2_TR(0x724662);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724667ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7243e4u);}goto L7243e4;}
}
B724667:L724667:{c.instructions+=3;NFSU2_TR(0x724667);
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
B724669:{NFSU2_TR(0x724669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72466a:{NFSU2_TR(0x72466a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L724713;}}
}
B724670:L724670:{c.instructions+=2;NFSU2_TR(0x724670);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724671:{NFSU2_TR(0x724671);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724676ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x724459u);}goto L724459;}
}
B724676:L724676:{c.instructions+=1;NFSU2_TR(0x724676);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724677:L724677:{c.instructions+=2;NFSU2_TR(0x724677);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b44c0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72467d:{NFSU2_TR(0x72467d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724682ull));
{goto L7248e8;}
}
B724682:L724682:{c.instructions+=1;NFSU2_TR(0x724682);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724687ull));
TAIL_STATIC(0x72787cu,727);
}
B724687:L724687:{c.instructions+=2;NFSU2_TR(0x724687);
s1(0x8b4608,u8(0x1ull));
}
B72468e:{NFSU2_TR(0x72468e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724693ull));
TAIL_STATIC(0x721f99u,721);
}
B724693:L724693:{c.instructions+=1;NFSU2_TR(0x724693);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724698ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72452fu);}goto L72452f;}
}
B724698:L724698:{c.instructions+=4;NFSU2_TR(0x724698);
w4(R+0,u32(m2(0x8b44c4)));
}
B72469f:{NFSU2_TR(0x72469f);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7246a2:{NFSU2_TR(0x7246a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7246a3:{NFSU2_TR(0x7246a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7246a8ull));
{goto L724792;}
}
B7246a8:L7246a8:{c.instructions+=2;NFSU2_TR(0x7246a8);
__builtin_memmove(gp(0x8b4670),(R+0),4);
}
B7246ad:{NFSU2_TR(0x7246ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7246b2ull));
TAIL_STATIC(0x721fa7u,721);
}
B7246b2:L7246b2:{c.instructions+=8;NFSU2_TR(0x7246b2);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B7246b4:{NFSU2_TR(0x7246b4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7246b5:{NFSU2_TR(0x7246b5);
{u32 ea_=u32(u32(8487092u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7246bb:{NFSU2_TR(0x7246bb);
__builtin_memmove(gp(0x8b4610),(R+12),4);
}
B7246c1:{NFSU2_TR(0x7246c1);
__builtin_memmove(gp(0x8b460e),(R+12),1);
}
B7246c7:{NFSU2_TR(0x7246c7);
__builtin_memmove(gp(0x8b460a),(R+12),1);
}
B7246cd:{NFSU2_TR(0x7246cd);
__builtin_memmove(gp(0x8b460b),(R+12),1);
}
B7246d3:{NFSU2_TR(0x7246d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7246d8ull));
TAIL_STATIC(0x7264bfu,726);
}
B7246d8:L7246d8:{c.instructions+=4;NFSU2_TR(0x7246d8);
__builtin_memmove((R+24),(R+0),4);
}
B7246da:{NFSU2_TR(0x7246da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7246dd:{NFSU2_TR(0x7246dd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7246df:{NFSU2_TR(0x7246df);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7246f7;}}
}
B7246e1:L7246e1:{c.instructions+=2;NFSU2_TR(0x7246e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7246e2:{NFSU2_TR(0x7246e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7246e7ull));
TAIL_STATIC(0x725d92u,725);
}
B7246e7:L7246e7:{c.instructions+=2;NFSU2_TR(0x7246e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7246e8:{NFSU2_TR(0x7246e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7246edull));
TAIL_STATIC(0x72788du,727);
}
B7246ed:L7246ed:{c.instructions+=3;NFSU2_TR(0x7246ed);
__builtin_memmove(gp(0x8b4608),(R+12),1);
}
B7246f3:{NFSU2_TR(0x7246f3);
__builtin_memmove((R+0),(R+24),4);
}
B7246f5:{NFSU2_TR(0x7246f5);
{goto L724713;}
}
B7246f7:L7246f7:{c.instructions+=4;NFSU2_TR(0x7246f7);
__builtin_memmove((R+0),gp(0x8b44e0),1);
}
B7246fc:{NFSU2_TR(0x7246fc);
w1(R+0,u8(u32(r1(R+0))+u32(m1(0x8b44df))));
}
B724702:{NFSU2_TR(0x724702);
__builtin_memmove(gp(0x8b46e8),(R+0),1);
}
B724707:{NFSU2_TR(0x724707);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72470cull));
TAIL_STATIC(0x7258e6u,725);
}
B72470c:L72470c:{c.instructions+=1;NFSU2_TR(0x72470c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724711ull));
TAIL_STATIC(0x72559bu,725);
}
B724711:L724711:{c.instructions+=1;NFSU2_TR(0x724711);
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
B724713:L724713:{c.instructions+=3;NFSU2_TR(0x724713);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B724714:{NFSU2_TR(0x724714);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B724715:{NFSU2_TR(0x724715);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724716:L724716:{c.instructions+=11;NFSU2_TR(0x724716);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72471a:{NFSU2_TR(0x72471a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B72471c:{NFSU2_TR(0x72471c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B724720:{NFSU2_TR(0x724720);
__builtin_memmove((R+0),gp(0x8b4674),4);
}
B724725:{NFSU2_TR(0x724725);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724728:{NFSU2_TR(0x724728);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724729:{NFSU2_TR(0x724729);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B72472b:{NFSU2_TR(0x72472b);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B72472d:{NFSU2_TR(0x72472d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B72472f:{NFSU2_TR(0x72472f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B724730:{NFSU2_TR(0x724730);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L724736;}}
}
B724732:L724732:{c.instructions+=2;NFSU2_TR(0x724732);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B724734:{NFSU2_TR(0x724734);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B724736:L724736:{c.instructions+=1;NFSU2_TR(0x724736);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724737:L724737:{c.instructions+=23;NFSU2_TR(0x724737);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72473b:{NFSU2_TR(0x72473b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72473f:{NFSU2_TR(0x72473f);
__builtin_memmove(gp(0x8b4674),(R+4),4);
}
B724745:{NFSU2_TR(0x724745);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724748:{NFSU2_TR(0x724748);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B72474c:{NFSU2_TR(0x72474c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72474d:{NFSU2_TR(0x72474d);
__builtin_memmove((R+24),gp(0x8b4674),4);
}
B724753:{NFSU2_TR(0x724753);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724756:{NFSU2_TR(0x724756);
__builtin_memmove((R+8),gp(0x8b4674),4);
}
B72475c:{NFSU2_TR(0x72475c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B72475f:{NFSU2_TR(0x72475f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B724761:{NFSU2_TR(0x724761);
__builtin_memmove((R+4),gp(0x8b4674),4);
}
B724767:{NFSU2_TR(0x724767);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0xfull))));
s4(u32(r4(R+4)),r4(U+0));
}
B72476a:{NFSU2_TR(0x72476a);
__builtin_memmove((R+4),gp(0x8b4674),4);
}
B724770:{NFSU2_TR(0x724770);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffff0ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B724773:{NFSU2_TR(0x724773);
__builtin_memmove((R+8),gp(0x8b4674),4);
}
B724779:{NFSU2_TR(0x724779);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72477c:{NFSU2_TR(0x72477c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72477f:{NFSU2_TR(0x72477f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724782:{NFSU2_TR(0x724782);
__builtin_memmove((R+4),gp(0x8b4674),4);
}
B724788:{NFSU2_TR(0x724788);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72478b:{NFSU2_TR(0x72478b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72478c:{NFSU2_TR(0x72478c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72478d:L72478d:{c.instructions+=1;NFSU2_TR(0x72478d);
TAIL_STATIC(0x729cf2u,729);
}
B724792:L724792:{c.instructions+=16;NFSU2_TR(0x724792);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724793:{NFSU2_TR(0x724793);
__builtin_memmove((R+20),(R+16),4);
}
B724795:{NFSU2_TR(0x724795);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724796:{NFSU2_TR(0x724796);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724797:{NFSU2_TR(0x724797);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724798:{NFSU2_TR(0x724798);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72479b:{NFSU2_TR(0x72479b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72479c:{NFSU2_TR(0x72479c);
__builtin_memmove((R+24),gp(0x8b4674),4);
}
B7247a2:{NFSU2_TR(0x7247a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7247a5:{NFSU2_TR(0x7247a5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfull))));
}
B7247a8:{NFSU2_TR(0x7247a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7247a9:{NFSU2_TR(0x7247a9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7247ab:{NFSU2_TR(0x7247ab);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffff0ull))));
}
B7247ae:{NFSU2_TR(0x7247ae);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7247b0:{NFSU2_TR(0x7247b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7247b3:{NFSU2_TR(0x7247b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7247ba;}}
}
B7247b5:L7247b5:{c.instructions+=2;NFSU2_TR(0x7247b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7247b8:{NFSU2_TR(0x7247b8);
{goto L724817;}
}
B7247ba:L7247ba:{c.instructions+=3;NFSU2_TR(0x7247ba);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7247bc:{NFSU2_TR(0x7247bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7247bf:{NFSU2_TR(0x7247bf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L724803;}}
}
B7247c1:L7247c1:{c.instructions+=5;NFSU2_TR(0x7247c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7247c4:{NFSU2_TR(0x7247c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7247c6:{NFSU2_TR(0x7247c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7247c9:{NFSU2_TR(0x7247c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7247cc:{NFSU2_TR(0x7247cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7247d4;}}
}
B7247ce:L7247ce:{c.instructions+=3;NFSU2_TR(0x7247ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7247d0:{NFSU2_TR(0x7247d0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7247d2:{NFSU2_TR(0x7247d2);
{goto L7247de;}
}
B7247d4:L7247d4:{c.instructions+=4;NFSU2_TR(0x7247d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7247d7:{NFSU2_TR(0x7247d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B7247da:{NFSU2_TR(0x7247da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7247dc:{NFSU2_TR(0x7247dc);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B7247de:L7247de:{c.instructions+=7;NFSU2_TR(0x7247de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7247e1:{NFSU2_TR(0x7247e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7247e4:{NFSU2_TR(0x7247e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7247e5:{NFSU2_TR(0x7247e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7247e8:{NFSU2_TR(0x7247e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7247e9:{NFSU2_TR(0x7247e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7247ec:{NFSU2_TR(0x7247ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7247f1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x724716u);}goto L724716;}
}
B7247f1:L7247f1:{c.instructions+=4;NFSU2_TR(0x7247f1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7247f4:{NFSU2_TR(0x7247f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7247f5:{NFSU2_TR(0x7247f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7247f6:{NFSU2_TR(0x7247f6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L724835;}}
}
B7247f8:L7247f8:{c.instructions+=4;NFSU2_TR(0x7247f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7247fb:{NFSU2_TR(0x7247fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7247fe:{NFSU2_TR(0x7247fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B724801:{NFSU2_TR(0x724801);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7247c1u);}goto L7247c1;}}
}
B724803:L724803:{c.instructions+=7;NFSU2_TR(0x724803);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724806:{NFSU2_TR(0x724806);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B724809:{NFSU2_TR(0x724809);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72480d:{NFSU2_TR(0x72480d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B724810:{NFSU2_TR(0x724810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+0))));
}
B724812:{NFSU2_TR(0x724812);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724815:{NFSU2_TR(0x724815);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B724817:L724817:{c.instructions+=7;NFSU2_TR(0x724817);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72481a:{NFSU2_TR(0x72481a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72481d:{NFSU2_TR(0x72481d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72481e:{NFSU2_TR(0x72481e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B724821:{NFSU2_TR(0x724821);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724822:{NFSU2_TR(0x724822);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724825:{NFSU2_TR(0x724825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72482aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x724716u);}goto L724716;}
}
B72482a:L72482a:{c.instructions+=4;NFSU2_TR(0x72482a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72482d:{NFSU2_TR(0x72482d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72482e:{NFSU2_TR(0x72482e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72482f:{NFSU2_TR(0x72482f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L724857;}}
}
B724831:L724831:{c.instructions+=2;NFSU2_TR(0x724831);
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
B724833:{NFSU2_TR(0x724833);
{goto L72488f;}
}
B724835:L724835:{c.instructions+=2;NFSU2_TR(0x724835);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B724838:{NFSU2_TR(0x724838);
{goto L724852;}
}
B72483a:L72483a:{c.instructions+=8;NFSU2_TR(0x72483a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72483d:{NFSU2_TR(0x72483d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B724840:{NFSU2_TR(0x724840);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B724843:{NFSU2_TR(0x724843);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B724845:{NFSU2_TR(0x724845);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B724848:{NFSU2_TR(0x724848);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72484b:{NFSU2_TR(0x72484b);
__builtin_memmove((R+24),gp(0x8b4674),4);
}
B724851:{NFSU2_TR(0x724851);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B724852:L724852:{c.instructions+=2;NFSU2_TR(0x724852);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B724855:{NFSU2_TR(0x724855);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72483au);}goto L72483a;}}
}
B724857:L724857:{c.instructions+=17;NFSU2_TR(0x724857);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72485a:{NFSU2_TR(0x72485a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72485d:{NFSU2_TR(0x72485d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B724860:{NFSU2_TR(0x724860);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B724862:{NFSU2_TR(0x724862);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724865:{NFSU2_TR(0x724865);
__builtin_memmove((R+0),gp(0x8b4674),4);
}
B72486a:{NFSU2_TR(0x72486a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72486d:{NFSU2_TR(0x72486d);
__builtin_memmove((R+0),gp(0x8b4674),4);
}
B724872:{NFSU2_TR(0x724872);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xfffffff8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B724876:{NFSU2_TR(0x724876);
__builtin_memmove((R+4),gp(0x8b4674),4);
}
B72487c:{NFSU2_TR(0x72487c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72487f:{NFSU2_TR(0x72487f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B724881:{NFSU2_TR(0x724881);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B724883:{NFSU2_TR(0x724883);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B724885:{NFSU2_TR(0x724885);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B724887:{NFSU2_TR(0x724887);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72488a:{NFSU2_TR(0x72488a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72488f;}}
}
B72488c:L72488c:{c.instructions+=1;NFSU2_TR(0x72488c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72488f:L72488f:{c.instructions+=5;NFSU2_TR(0x72488f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B724890:{NFSU2_TR(0x724890);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B724891:{NFSU2_TR(0x724891);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B724892:{NFSU2_TR(0x724892);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B724893:{NFSU2_TR(0x724893);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724894:L724894:{c.instructions+=8;NFSU2_TR(0x724894);
__builtin_memmove((R+0),gp(0x8b4674),4);
}
B724899:{NFSU2_TR(0x724899);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72489d:{NFSU2_TR(0x72489d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+0))));
}
B72489f:{NFSU2_TR(0x72489f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7248a0:{NFSU2_TR(0x7248a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7248a3:{NFSU2_TR(0x7248a3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7248a5:{NFSU2_TR(0x7248a5);
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
B7248a7:{NFSU2_TR(0x7248a7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7248e6;}}
}
B7248a9:L7248a9:{c.instructions+=2;NFSU2_TR(0x7248a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7248aa:{NFSU2_TR(0x7248aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7248ad:L7248ad:{c.instructions+=2;NFSU2_TR(0x7248ad);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B7248af:{NFSU2_TR(0x7248af);
if(r1(R+518)){{goto L7248bb;}}
}
B7248b1:L7248b1:{c.instructions+=4;NFSU2_TR(0x7248b1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B7248b2:{NFSU2_TR(0x7248b2);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x8ull))));
}
B7248b5:{NFSU2_TR(0x7248b5);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B7248b7:{NFSU2_TR(0x7248b7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7248adu);}goto L7248ad;}}
}
B7248b9:L7248b9:{c.instructions+=1;NFSU2_TR(0x7248b9);
{goto L7248e5;}
}
B7248bb:L7248bb:{c.instructions+=4;NFSU2_TR(0x7248bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7248be:{NFSU2_TR(0x7248be);
__builtin_memmove((R+0),gp(0x8b4674),4);
}
B7248c3:{NFSU2_TR(0x7248c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7248c7:{NFSU2_TR(0x7248c7);
{goto L7248db;}
}
B7248c9:L7248c9:{c.instructions+=7;NFSU2_TR(0x7248c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7248cc:{NFSU2_TR(0x7248cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7248cf:{NFSU2_TR(0x7248cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7248d2:{NFSU2_TR(0x7248d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7248d4:{NFSU2_TR(0x7248d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7248d7:{NFSU2_TR(0x7248d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7248da:{NFSU2_TR(0x7248da);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B7248db:L7248db:{c.instructions+=3;NFSU2_TR(0x7248db);
__builtin_memmove((R+0),gp(0x8b4674),4);
}
B7248e0:{NFSU2_TR(0x7248e0);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7248e3:{NFSU2_TR(0x7248e3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7248c9u);}goto L7248c9;}}
}
B7248e5:L7248e5:{c.instructions+=1;NFSU2_TR(0x7248e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7248e6:L7248e6:{c.instructions+=2;NFSU2_TR(0x7248e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7248e7:{NFSU2_TR(0x7248e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7248e8:L7248e8:{c.instructions+=1;NFSU2_TR(0x7248e8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7248ea:L7248ea:{c.instructions+=6;NFSU2_TR(0x7248ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8180bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7248f0:{NFSU2_TR(0x7248f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B7248f4:{NFSU2_TR(0x7248f4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B7248f7:{NFSU2_TR(0x7248f7);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x18ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7248fa:{NFSU2_TR(0x7248fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b46f4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724900:{NFSU2_TR(0x724900);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7248eau);}goto L7248ea;}}
}
B724902:L724902:{c.instructions+=1;NFSU2_TR(0x724902);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724903:L724903:{c.instructions+=6;NFSU2_TR(0x724903);
__builtin_memmove((R+4),gp(0x8b4708),4);
}
B724909:{NFSU2_TR(0x724909);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72490a:{NFSU2_TR(0x72490a);
__builtin_memmove((R+24),gp(0x8b470c),4);
}
B724910:{NFSU2_TR(0x724910);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B724913:{NFSU2_TR(0x724913);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B724915:{NFSU2_TR(0x724915);
if(r1(R+512)){{goto L72491f;}}
}
B724917:L724917:{c.instructions+=2;NFSU2_TR(0x724917);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B724919:{NFSU2_TR(0x724919);
if(r1(R+512)){{goto L72491f;}}
}
B72491b:L72491b:{c.instructions+=2;NFSU2_TR(0x72491b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72491d:{NFSU2_TR(0x72491d);
{goto L724922;}
}
B72491f:L72491f:{c.instructions+=2;NFSU2_TR(0x72491f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B724921:{NFSU2_TR(0x724921);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B724922:L724922:{c.instructions+=29;NFSU2_TR(0x724922);
__builtin_memmove((R+4),gp(0x8b4704),4);
}
B724928:{NFSU2_TR(0x724928);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B72492a:{NFSU2_TR(0x72492a);
__builtin_memmove(gp(0x8b4708),(R+0),4);
}
B72492f:{NFSU2_TR(0x72492f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B724931:{NFSU2_TR(0x724931);
__builtin_memmove((R+8),gp(0x8b4700),4);
}
B724937:{NFSU2_TR(0x724937);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B724939:{NFSU2_TR(0x724939);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B72493b:{NFSU2_TR(0x72493b);
w4(R+4,u32(0-u32(r4(R+4))));
}
B72493d:{NFSU2_TR(0x72493d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B72493f:{NFSU2_TR(0x72493f);
__builtin_memmove(gp(0x8b4704),(R+0),4);
}
B724944:{NFSU2_TR(0x724944);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B724946:{NFSU2_TR(0x724946);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B724948:{NFSU2_TR(0x724948);
__builtin_memmove((R+8),gp(0x8b46fc),4);
}
B72494e:{NFSU2_TR(0x72494e);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B724950:{NFSU2_TR(0x724950);
w4(R+4,u32(0-u32(r4(R+4))));
}
B724952:{NFSU2_TR(0x724952);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B724954:{NFSU2_TR(0x724954);
__builtin_memmove(gp(0x8b4700),(R+0),4);
}
B724959:{NFSU2_TR(0x724959);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B72495b:{NFSU2_TR(0x72495b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B72495d:{NFSU2_TR(0x72495d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B72495f:{NFSU2_TR(0x72495f);
w4(R+4,u32(0-u32(r4(R+4))));
}
B724961:{NFSU2_TR(0x724961);
__builtin_memmove(gp(0x8b46fc),(R+0),4);
}
B724966:{NFSU2_TR(0x724966);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B724968:{NFSU2_TR(0x724968);
w1(R+512,carry<u32>(m4(0x8b46f8),r4(R+0)));
s4(0x8b46f8,u32(u32(m4(0x8b46f8))+u32(r4(R+0))));
}
B72496e:{NFSU2_TR(0x72496e);
__builtin_memmove((R+0),gp(0x8b46f8),4);
}
B724973:{NFSU2_TR(0x724973);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B724974:{NFSU2_TR(0x724974);
__builtin_memmove(gp(0x8b470c),(R+24),4);
}
B72497a:{NFSU2_TR(0x72497a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72497b:{NFSU2_TR(0x72497b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7249a3;}}
}
B72497d:L72497d:{c.instructions+=2;NFSU2_TR(0x72497d);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x8b4708),u32(0x1ull)));
s4(0x8b4708,u32(u32(m4(0x8b4708))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8b4708))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b4708))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b4708))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B724983:{NFSU2_TR(0x724983);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7249a3;}}
}
B724985:L724985:{c.instructions+=2;NFSU2_TR(0x724985);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x8b4704),u32(0x1ull)));
s4(0x8b4704,u32(u32(m4(0x8b4704))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8b4704))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b4704))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b4704))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72498b:{NFSU2_TR(0x72498b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7249a3;}}
}
B72498d:L72498d:{c.instructions+=2;NFSU2_TR(0x72498d);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x8b4700),u32(0x1ull)));
s4(0x8b4700,u32(u32(m4(0x8b4700))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8b4700))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b4700))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b4700))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B724993:{NFSU2_TR(0x724993);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7249a3;}}
}
B724995:L724995:{c.instructions+=2;NFSU2_TR(0x724995);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x8b46fc),u32(0x1ull)));
s4(0x8b46fc,u32(u32(m4(0x8b46fc))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8b46fc))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b46fc))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b46fc))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72499b:{NFSU2_TR(0x72499b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7249a3;}}
}
B72499d:L72499d:{c.instructions+=2;NFSU2_TR(0x72499d);
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
B72499e:{NFSU2_TR(0x72499e);
__builtin_memmove(gp(0x8b46f8),(R+0),4);
}
B7249a3:L7249a3:{c.instructions+=1;NFSU2_TR(0x7249a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7249a4:L7249a4:{c.instructions+=6;NFSU2_TR(0x7249a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7249a8:{NFSU2_TR(0x7249a8);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B7249ab:{NFSU2_TR(0x7249ab);
w4(R+0,u32(m1(0x8b44ca)));
}
B7249b2:{NFSU2_TR(0x7249b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7249b6:{NFSU2_TR(0x7249b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B7249b8:{NFSU2_TR(0x7249b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7249b9:L7249b9:{c.instructions+=2;NFSU2_TR(0x7249b9);
__builtin_memmove((R+0),gp(0x8b4728),4);
}
B7249be:{NFSU2_TR(0x7249be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7249bf:L7249bf:{c.instructions+=3;NFSU2_TR(0x7249bf);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b4728),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7249c6:{NFSU2_TR(0x7249c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7249c7:{NFSU2_TR(0x7249c7);
if(r1(R+518)){{goto L7249e5;}}
}
B7249c9:L7249c9:{c.instructions+=5;NFSU2_TR(0x7249c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7249cd:{NFSU2_TR(0x7249cd);
w4(R+4,u32(0x8b4710ull));
}
B7249d2:{NFSU2_TR(0x7249d2);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7249d4:{NFSU2_TR(0x7249d4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B7249d6:{NFSU2_TR(0x7249d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7249d7:L7249d7:{c.instructions+=5;NFSU2_TR(0x7249d7);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B7249da:{NFSU2_TR(0x7249da);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B7249dc:{NFSU2_TR(0x7249dc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7249dd:{NFSU2_TR(0x7249dd);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B7249de:{NFSU2_TR(0x7249de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7249d7u);}goto L7249d7;}}
}
B7249e0:L7249e0:{c.instructions+=1;NFSU2_TR(0x7249e0);
{goto L724a8a;}
}
B7249e5:L7249e5:{c.instructions+=11;NFSU2_TR(0x7249e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7249e6:{NFSU2_TR(0x7249e6);
w4(R+24,u32(0x8b4710ull));
}
B7249eb:{NFSU2_TR(0x7249eb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7249ed:{NFSU2_TR(0x7249ed);
__builtin_memmove((R+28),(R+24),4);
}
B7249ef:{NFSU2_TR(0x7249ef);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B7249f0:{NFSU2_TR(0x7249f0);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B7249f1:{NFSU2_TR(0x7249f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7249f2:{NFSU2_TR(0x7249f2);
u8 U[4];
w4(U+0,u32(0x8b44a5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7249f7:{NFSU2_TR(0x7249f7);
s4(0x8b4728,u32(0x1ull));
}
B724a01:{NFSU2_TR(0x724a01);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B724a02:{NFSU2_TR(0x724a02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724a07ull));
TAIL_STATIC(0x725db5u,725);
}
B724a07:L724a07:{c.instructions+=5;NFSU2_TR(0x724a07);
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
B724a09:{NFSU2_TR(0x724a09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724a0a:{NFSU2_TR(0x724a0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724a0b:{NFSU2_TR(0x724a0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B724a0c:{NFSU2_TR(0x724a0c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L724a8c;}}
}
B724a0e:L724a0e:{c.instructions+=3;NFSU2_TR(0x724a0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724a12:{NFSU2_TR(0x724a12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B724a14:{NFSU2_TR(0x724a14);
if(r1(R+518)){{goto L724a24;}}
}
B724a16:L724a16:{c.instructions+=3;NFSU2_TR(0x724a16);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724a18:{NFSU2_TR(0x724a18);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B724a1a:{NFSU2_TR(0x724a1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724a1b:L724a1b:{c.instructions+=5;NFSU2_TR(0x724a1b);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B724a1e:{NFSU2_TR(0x724a1e);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B724a20:{NFSU2_TR(0x724a20);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B724a21:{NFSU2_TR(0x724a21);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B724a22:{NFSU2_TR(0x724a22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x724a1bu);}goto L724a1b;}}
}
B724a24:L724a24:{c.instructions+=13;NFSU2_TR(0x724a24);
s1(0x8b44a6,u8(0xffull));
}
B724a2b:{NFSU2_TR(0x724a2b);
s2(0x8b44a0,u16(0x2b11ull));
}
B724a34:{NFSU2_TR(0x724a34);
s2(0x8b44a2,u16(0xbb80ull));
}
B724a3d:{NFSU2_TR(0x724a3d);
s1(0x8b44a4,u8(0x1ull));
}
B724a44:{NFSU2_TR(0x724a44);
s1(0x8b44d5,u8(0x1ull));
}
B724a4b:{NFSU2_TR(0x724a4b);
s1(0x8b44e4,u8(0x1ull));
}
B724a52:{NFSU2_TR(0x724a52);
s2(0x8b44e6,u16(0x24ull));
}
B724a5b:{NFSU2_TR(0x724a5b);
s1(0x8b44ca,u8(0x20ull));
}
B724a62:{NFSU2_TR(0x724a62);
s1(0x8b44de,u8(0x10ull));
}
B724a69:{NFSU2_TR(0x724a69);
s2(0x8b44c6,u16(0xac44ull));
}
B724a72:{NFSU2_TR(0x724a72);
s1(0x8b44df,u8(0x2ull));
}
B724a79:{NFSU2_TR(0x724a79);
s1(0x8b44d8,u8(0x19ull));
}
B724a80:{NFSU2_TR(0x724a80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724a85ull));
TAIL_STATIC(0x729d16u,729);
}
B724a85:L724a85:{c.instructions+=1;NFSU2_TR(0x724a85);
__builtin_memmove(gp(0x8b460f),(R+0),1);
}
B724a8a:L724a8a:{c.instructions+=1;NFSU2_TR(0x724a8a);
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
B724a8c:L724a8c:{c.instructions+=2;NFSU2_TR(0x724a8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B724a8d:{NFSU2_TR(0x724a8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724a8e:L724a8e:{c.instructions+=8;NFSU2_TR(0x724a8e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724a8f:{NFSU2_TR(0x724a8f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B724a93:{NFSU2_TR(0x724a93);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724a97:{NFSU2_TR(0x724a97);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B724a99:{NFSU2_TR(0x724a99);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B724a9a:{NFSU2_TR(0x724a9a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B724a9b:{NFSU2_TR(0x724a9b);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B724a9c:{NFSU2_TR(0x724a9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724aa1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7249bfu);}goto L7249bf;}
}
B724aa1:L724aa1:{c.instructions+=4;NFSU2_TR(0x724aa1);
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
B724aa3:{NFSU2_TR(0x724aa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724aa4:{NFSU2_TR(0x724aa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B724aa5:{NFSU2_TR(0x724aa5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L724aa9;}}
}
B724aa7:L724aa7:{c.instructions+=1;NFSU2_TR(0x724aa7);
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
B724aa9:L724aa9:{c.instructions+=1;NFSU2_TR(0x724aa9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724aaa:L724aaa:{c.instructions+=2;NFSU2_TR(0x724aaa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724aac:{NFSU2_TR(0x724aac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724ab1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7249bfu);}goto L7249bf;}
}
B724ab1:L724ab1:{c.instructions+=3;NFSU2_TR(0x724ab1);
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
B724ab3:{NFSU2_TR(0x724ab3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724ab4:{NFSU2_TR(0x724ab4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L724ab8;}}
}
B724ab6:L724ab6:{c.instructions+=1;NFSU2_TR(0x724ab6);
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
B724ab8:L724ab8:{c.instructions+=1;NFSU2_TR(0x724ab8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724ab9:L724ab9:{c.instructions+=4;NFSU2_TR(0x724ab9);
w4(R+0,u32(m1(0x8b44d8)));
}
B724ac0:{NFSU2_TR(0x724ac0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724ac1:{NFSU2_TR(0x724ac1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724ac2:{NFSU2_TR(0x724ac2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724ac7ull));
TAIL_STATIC(0x728defu,728);
}
B724ac7:L724ac7:{c.instructions+=4;NFSU2_TR(0x724ac7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B724ac9:{NFSU2_TR(0x724ac9);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b4608),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B724acf:{NFSU2_TR(0x724acf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724ad0:{NFSU2_TR(0x724ad0);
if(r1(R+518)){{goto L724af6;}}
}
B724ad2:L724ad2:{c.instructions+=7;NFSU2_TR(0x724ad2);
w4(R+0,u32(m1(0x8b44d8)));
}
B724ad9:{NFSU2_TR(0x724ad9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724ada:{NFSU2_TR(0x724ada);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724adb:{NFSU2_TR(0x724adb);
u8 U[4];
w4(U+0,u32(0x27ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724add:{NFSU2_TR(0x724add);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724ade:{NFSU2_TR(0x724ade);
w4(R+24,u32(0x8b456cull));
}
B724ae3:{NFSU2_TR(0x724ae3);
w4(R+28,u32(0x8b44bcull));
}
B724ae8:L724ae8:{c.instructions+=1;NFSU2_TR(0x724ae8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L724aea;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x724ae8u);}goto L724ae8;}
}
B724aea:L724aea:{c.instructions+=4;NFSU2_TR(0x724aea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B724aeb:{NFSU2_TR(0x724aeb);
__builtin_memmove(gp(0x8b44d8),(R+0),1);
}
B724af0:{NFSU2_TR(0x724af0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B724af1:{NFSU2_TR(0x724af1);
{goto L724cac;}
}
B724af6:L724af6:{c.instructions+=4;NFSU2_TR(0x724af6);
__builtin_memmove((R+0),gp(0x8b44df),1);
}
B724afb:{NFSU2_TR(0x724afb);
__builtin_memmove((R+4),gp(0x8b44a4),1);
}
B724b01:{NFSU2_TR(0x724b01);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+0))));
}
B724b03:{NFSU2_TR(0x724b03);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L724b0c;}}
}
B724b05:L724b05:{c.instructions+=2;NFSU2_TR(0x724b05);
__builtin_memmove((R+0),(R+4),1);
}
B724b07:{NFSU2_TR(0x724b07);
__builtin_memmove(gp(0x8b44df),(R+0),1);
}
B724b0c:L724b0c:{c.instructions+=3;NFSU2_TR(0x724b0c);
__builtin_memmove((R+4),gp(0x8b44a5),1);
}
B724b12:{NFSU2_TR(0x724b12);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+0))));
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B724b14:{NFSU2_TR(0x724b14);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L724b1d;}}
}
B724b16:L724b16:{c.instructions+=2;NFSU2_TR(0x724b16);
__builtin_memmove((R+0),(R+4),1);
}
B724b18:{NFSU2_TR(0x724b18);
__builtin_memmove(gp(0x8b44df),(R+0),1);
}
B724b1d:L724b1d:{c.instructions+=3;NFSU2_TR(0x724b1d);
__builtin_memmove((R+4),gp(0x8b44a0),2);
}
B724b24:{NFSU2_TR(0x724b24);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b44c6),2);
w1(R+512,u8((r2(U+0))<(r2(R+4))));
}
B724b2b:{NFSU2_TR(0x724b2b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L724b34;}}
}
B724b2d:L724b2d:{c.instructions+=1;NFSU2_TR(0x724b2d);
__builtin_memmove(gp(0x8b44c6),(R+4),2);
}
B724b34:L724b34:{c.instructions+=3;NFSU2_TR(0x724b34);
__builtin_memmove((R+4),gp(0x8b44a2),2);
}
B724b3b:{NFSU2_TR(0x724b3b);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b44c6),2);
w1(R+512,u8((r2(U+0))<(r2(R+4))));
w2(U+2,u16(u32(r2(U+0))-u32(r2(R+4))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B724b42:{NFSU2_TR(0x724b42);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L724b4b;}}
}
B724b44:L724b44:{c.instructions+=1;NFSU2_TR(0x724b44);
__builtin_memmove(gp(0x8b44c6),(R+4),2);
}
B724b4b:L724b4b:{c.instructions+=3;NFSU2_TR(0x724b4b);
__builtin_memmove((R+4),gp(0x8b44a6),1);
}
B724b51:{NFSU2_TR(0x724b51);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b44ca),1);
w1(R+512,u8((r1(U+0))<(r1(R+4))));
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+4))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B724b57:{NFSU2_TR(0x724b57);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L724b5f;}}
}
B724b59:L724b59:{c.instructions+=1;NFSU2_TR(0x724b59);
__builtin_memmove(gp(0x8b44ca),(R+4),1);
}
B724b5f:L724b5f:{c.instructions+=2;NFSU2_TR(0x724b5f);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b44de),1);
w1(R+512,u8((r1(U+0))<(u8(0x20ull))));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B724b66:{NFSU2_TR(0x724b66);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L724b6f;}}
}
B724b68:L724b68:{c.instructions+=1;NFSU2_TR(0x724b68);
s1(0x8b44de,u8(0x20ull));
}
B724b6f:L724b6f:{c.instructions+=2;NFSU2_TR(0x724b6f);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b44d6),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B724b75:{NFSU2_TR(0x724b75);
if(r1(R+518)){{goto L724b85;}}
}
B724b77:L724b77:{c.instructions+=2;NFSU2_TR(0x724b77);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b44ab),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B724b7d:{NFSU2_TR(0x724b7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L724b85;}}
}
B724b7f:L724b7f:{c.instructions+=1;NFSU2_TR(0x724b7f);
__builtin_memmove(gp(0x8b44d6),(R+12),1);
}
B724b85:L724b85:{c.instructions+=2;NFSU2_TR(0x724b85);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B724b87:{NFSU2_TR(0x724b87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L724b97;}}
}
B724b89:L724b89:{c.instructions+=2;NFSU2_TR(0x724b89);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b44e0),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B724b8f:{NFSU2_TR(0x724b8f);
if(r1(R+518)){{goto L724bc3;}}
}
B724b91:L724b91:{c.instructions+=1;NFSU2_TR(0x724b91);
__builtin_memmove(gp(0x8b44e0),(R+12),1);
}
B724b97:L724b97:{c.instructions+=2;NFSU2_TR(0x724b97);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B724b99:{NFSU2_TR(0x724b99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L724ba9;}}
}
B724b9b:L724b9b:{c.instructions+=2;NFSU2_TR(0x724b9b);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b44e0),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B724ba1:{NFSU2_TR(0x724ba1);
if(r1(R+518)){{goto L724bc3;}}
}
B724ba3:L724ba3:{c.instructions+=1;NFSU2_TR(0x724ba3);
__builtin_memmove(gp(0x8b44e0),(R+12),1);
}
B724ba9:L724ba9:{c.instructions+=2;NFSU2_TR(0x724ba9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x6ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B724bab:{NFSU2_TR(0x724bab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L724bc3;}}
}
B724bad:L724bad:{c.instructions+=2;NFSU2_TR(0x724bad);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b44e0),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B724bb3:{NFSU2_TR(0x724bb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L724bc3;}}
}
B724bb5:L724bb5:{c.instructions+=2;NFSU2_TR(0x724bb5);
s1(0x8b44df,u8(0x5ull));
}
B724bbc:{NFSU2_TR(0x724bbc);
s1(0x8b44e0,u8(0x1ull));
}
B724bc3:L724bc3:{c.instructions+=4;NFSU2_TR(0x724bc3);
w2(R+0,u16(m1(0x8b44ca)));
}
B724bcb:{NFSU2_TR(0x724bcb);
u8 U[2];
w1(R+523,sborrow<u16>(r2(R+0),u16(0x100ull)));
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x100ull))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B724bcf:{NFSU2_TR(0x724bcf);
__builtin_memmove(gp(0x8b460c),(R+0),2);
}
B724bd5:{NFSU2_TR(0x724bd5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L724be0;}}
}
B724bd7:L724bd7:{c.instructions+=1;NFSU2_TR(0x724bd7);
s2(0x8b460c,u16(0x100ull));
}
B724be0:L724be0:{c.instructions+=1;NFSU2_TR(0x724be0);
w4(R+0,u32(m1(0x8b44e4)));
}
B724be7:L724be7:{c.instructions+=1;NFSU2_TR(0x724be7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B724be9:L724be9:{c.instructions+=2;NFSU2_TR(0x724be9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B724beb:{NFSU2_TR(0x724beb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L724c20;}}
}
B724bed:L724bed:{c.instructions+=2;NFSU2_TR(0x724bed);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8b44e6ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+12))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B724bf5:{NFSU2_TR(0x724bf5);
if(r1(R+518)){{goto L724bfa;}}
}
B724bf7:L724bf7:{c.instructions+=2;NFSU2_TR(0x724bf7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B724bf8:{NFSU2_TR(0x724bf8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x724be9u);}goto L724be9;}
}
B724bfa:L724bfa:{c.instructions+=2;NFSU2_TR(0x724bfa);
s1(0x8b44e4,u8(u32(m1(0x8b44e4))-u32(u8(0x1ull))));
}
B724c00:{NFSU2_TR(0x724c00);
{goto L724c13;}
}
B724c02:L724c02:{c.instructions+=3;NFSU2_TR(0x724c02);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8b44e8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+0),(U+8),2);
}
B724c0a:{NFSU2_TR(0x724c0a);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8b44e6ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B724c12:{NFSU2_TR(0x724c12);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B724c13:L724c13:{c.instructions+=3;NFSU2_TR(0x724c13);
w4(R+0,u32(m1(0x8b44e4)));
}
B724c1a:{NFSU2_TR(0x724c1a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B724c1c:{NFSU2_TR(0x724c1c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x724c02u);}goto L724c02;}}
}
B724c1e:L724c1e:{c.instructions+=1;NFSU2_TR(0x724c1e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x724be7u);}goto L724be7;}
}
B724c20:L724c20:{c.instructions+=7;NFSU2_TR(0x724c20);
{u32 ea_=u32(u32(9127120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B724c26:{NFSU2_TR(0x724c26);
{u32 ea_=u32(u32(8153364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B724c2c:{NFSU2_TR(0x724c2c);
{u32 ea_=u32(u32(9127120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B724c32:{NFSU2_TR(0x724c32);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B724c34:{NFSU2_TR(0x724c34);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B724c36:{NFSU2_TR(0x724c36);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B724c39:{NFSU2_TR(0x724c39);
if(r1(R+514)){{goto L724c43;}}
}
B724c3b:L724c3b:{c.instructions+=2;NFSU2_TR(0x724c3b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B724c3d:{NFSU2_TR(0x724c3d);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B724c43:L724c43:{c.instructions+=4;NFSU2_TR(0x724c43);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B724c49:{NFSU2_TR(0x724c49);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B724c4b:{NFSU2_TR(0x724c4b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B724c4e:{NFSU2_TR(0x724c4e);
if(r1(R+514)){{goto L724c5a;}}
}
B724c50:L724c50:{c.instructions+=3;NFSU2_TR(0x724c50);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B724c52:{NFSU2_TR(0x724c52);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B724c58:{NFSU2_TR(0x724c58);
{goto L724c6f;}
}
B724c5a:L724c5a:{c.instructions+=4;NFSU2_TR(0x724c5a);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B724c60:{NFSU2_TR(0x724c60);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B724c62:{NFSU2_TR(0x724c62);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B724c65:{NFSU2_TR(0x724c65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L724c6f;}}
}
B724c67:L724c67:{c.instructions+=2;NFSU2_TR(0x724c67);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B724c69:{NFSU2_TR(0x724c69);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B724c6f:L724c6f:{c.instructions+=7;NFSU2_TR(0x724c6f);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b44d5),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B724c75:{NFSU2_TR(0x724c75);
{u32 ea_=u32(u32(9125972u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B724c7b:{NFSU2_TR(0x724c7b);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B724c81:{NFSU2_TR(0x724c81);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B724c83:{NFSU2_TR(0x724c83);
{u32 ea_=u32(u32(9127708u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B724c89:{NFSU2_TR(0x724c89);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B724c8b:{NFSU2_TR(0x724c8b);
if(r1(R+518)){{goto L724c9f;}}
}
B724c8d:L724c8d:{c.instructions+=1;NFSU2_TR(0x724c8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724c92ull));
TAIL_STATIC(0x729d16u,729);
}
B724c92:L724c92:{c.instructions+=2;NFSU2_TR(0x724c92);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B724c94:{NFSU2_TR(0x724c94);
if(r1(R+518)){{goto L724c9f;}}
}
B724c96:L724c96:{c.instructions+=2;NFSU2_TR(0x724c96);
s1(0x8b460f,u8(u32(m1(0x8b460f))|u32(u8(0x2ull))));
}
B724c9d:{NFSU2_TR(0x724c9d);
{goto L724cac;}
}
B724c9f:L724c9f:{c.instructions+=2;NFSU2_TR(0x724c9f);
s1(0x8b460f,u8(u32(m1(0x8b460f))&u32(u8(0xfdull))));
}
B724ca6:{NFSU2_TR(0x724ca6);
__builtin_memmove(gp(0x8b44d5),(R+12),1);
}
B724cac:L724cac:{c.instructions+=3;NFSU2_TR(0x724cac);
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
B724cae:{NFSU2_TR(0x724cae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B724caf:{NFSU2_TR(0x724caf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724cb0:L724cb0:{c.instructions+=6;NFSU2_TR(0x724cb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724cb4:{NFSU2_TR(0x724cb4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B724cba:{NFSU2_TR(0x724cba);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),m4(0x8b4724)));
w1(R+523,scarry<u32>(r4(R+0),m4(0x8b4724)));
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b4724))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B724cc0:{NFSU2_TR(0x724cc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724cc3:{NFSU2_TR(0x724cc3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724cc4:{NFSU2_TR(0x724cc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724cc7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B724cc7:L724cc7:{c.instructions+=3;NFSU2_TR(0x724cc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724cc8:{NFSU2_TR(0x724cc8);
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
B724cca:{NFSU2_TR(0x724cca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724ccb:L724ccb:{c.instructions+=1;NFSU2_TR(0x724ccb);
{goto L724f5d;}
}
B724cd0:L724cd0:{c.instructions+=5;NFSU2_TR(0x724cd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724cd1:{NFSU2_TR(0x724cd1);
__builtin_memmove((R+20),(R+16),4);
}
B724cd3:{NFSU2_TR(0x724cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724cd6:{NFSU2_TR(0x724cd6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B724cd9:{NFSU2_TR(0x724cd9);
if(r1(R+518)){{goto L724d03;}}
}
B724cdb:L724cdb:{c.instructions+=2;NFSU2_TR(0x724cdb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B724cdc:{NFSU2_TR(0x724cdc);
if(r1(R+518)){{goto L724cfa;}}
}
B724cde:L724cde:{c.instructions+=2;NFSU2_TR(0x724cde);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B724cdf:{NFSU2_TR(0x724cdf);
if(r1(R+518)){{goto L724cf1;}}
}
B724ce1:L724ce1:{c.instructions+=2;NFSU2_TR(0x724ce1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B724ce2:{NFSU2_TR(0x724ce2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L724d0a;}}
}
B724ce4:L724ce4:{c.instructions+=4;NFSU2_TR(0x724ce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724ce7:{NFSU2_TR(0x724ce7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3full))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B724ceb:{NFSU2_TR(0x724ceb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B724cef:{NFSU2_TR(0x724cef);
{goto L724d0a;}
}
B724cf1:L724cf1:{c.instructions+=3;NFSU2_TR(0x724cf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724cf4:{NFSU2_TR(0x724cf4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3full))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B724cf8:{NFSU2_TR(0x724cf8);
{goto L724d0a;}
}
B724cfa:L724cfa:{c.instructions+=3;NFSU2_TR(0x724cfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724cfd:{NFSU2_TR(0x724cfd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B724d01:{NFSU2_TR(0x724d01);
{goto L724d0a;}
}
B724d03:L724d03:{c.instructions+=2;NFSU2_TR(0x724d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724d06:{NFSU2_TR(0x724d06);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B724d0a:L724d0a:{c.instructions+=3;NFSU2_TR(0x724d0a);
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
B724d0c:{NFSU2_TR(0x724d0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B724d0d:{NFSU2_TR(0x724d0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724d0e:L724d0e:{c.instructions+=25;NFSU2_TR(0x724d0e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724d0f:{NFSU2_TR(0x724d0f);
__builtin_memmove((R+20),(R+16),4);
}
B724d11:{NFSU2_TR(0x724d11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724d12:{NFSU2_TR(0x724d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724d15:{NFSU2_TR(0x724d15);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724d16:{NFSU2_TR(0x724d16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724d17:{NFSU2_TR(0x724d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B724d1a:{NFSU2_TR(0x724d1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B724d1d:{NFSU2_TR(0x724d1d);
w4(R+24,u32(u32(r4(R+24))+u32(m4(0x8b466c))));
}
B724d23:{NFSU2_TR(0x724d23);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B724d27:{NFSU2_TR(0x724d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724d2a:{NFSU2_TR(0x724d2a);
w4(R+0,u32(m2(0x8b44c6)));
}
B724d31:{NFSU2_TR(0x724d31);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B724d34:{NFSU2_TR(0x724d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724d37:{NFSU2_TR(0x724d37);
{u32 ea_=u32(u32(7980676u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B724d3d:{NFSU2_TR(0x724d3d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B724d44:{NFSU2_TR(0x724d44);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B724d47:{NFSU2_TR(0x724d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724d4a:{NFSU2_TR(0x724d4a);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B724d4d:{NFSU2_TR(0x724d4d);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B724d50:{NFSU2_TR(0x724d50);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B724d53:{NFSU2_TR(0x724d53);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B724d56:{NFSU2_TR(0x724d56);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B724d58:{NFSU2_TR(0x724d58);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+12))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B724d5b:{NFSU2_TR(0x724d5b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L724d7b;}}
}
B724d5d:L724d5d:{c.instructions+=2;NFSU2_TR(0x724d5d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724d5e:{NFSU2_TR(0x724d5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B724d61:L724d61:{c.instructions+=4;NFSU2_TR(0x724d61);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B724d64:{NFSU2_TR(0x724d64);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724d67:{NFSU2_TR(0x724d67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724d68:{NFSU2_TR(0x724d68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724d6dull));
TAIL_STATIC(0x729da2u,729);
}
B724d6d:L724d6d:{c.instructions+=8;NFSU2_TR(0x724d6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B724d71:{NFSU2_TR(0x724d71);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B724d72:{NFSU2_TR(0x724d72);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B724d73:{NFSU2_TR(0x724d73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724d74:{NFSU2_TR(0x724d74);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B724d75:{NFSU2_TR(0x724d75);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B724d77:{NFSU2_TR(0x724d77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724d78:{NFSU2_TR(0x724d78);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x724d61u);}goto L724d61;}}
}
B724d7a:L724d7a:{c.instructions+=1;NFSU2_TR(0x724d7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B724d7b:L724d7b:{c.instructions+=5;NFSU2_TR(0x724d7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B724d7c:{NFSU2_TR(0x724d7c);
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
B724d7e:{NFSU2_TR(0x724d7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B724d7f:{NFSU2_TR(0x724d7f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B724d80:{NFSU2_TR(0x724d80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724d81:L724d81:{c.instructions+=48;NFSU2_TR(0x724d81);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724d82:{NFSU2_TR(0x724d82);
__builtin_memmove((R+20),(R+16),4);
}
B724d84:{NFSU2_TR(0x724d84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x6cull))));
}
B724d87:{NFSU2_TR(0x724d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724d8a:{NFSU2_TR(0x724d8a);
__builtin_memmove((R+4),gp(0x8b466c),4);
}
B724d90:{NFSU2_TR(0x724d90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724d91:{NFSU2_TR(0x724d91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724d92:{NFSU2_TR(0x724d92);
__builtin_memmove((R+24),(R+0),4);
}
B724d94:{NFSU2_TR(0x724d94);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B724d9a:{NFSU2_TR(0x724d9a);
w4(R+24,u32(u32(r4(R+24))+u32(m4(0x8b4724))));
}
B724da0:{NFSU2_TR(0x724da0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724da1:{NFSU2_TR(0x724da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B724da4:{NFSU2_TR(0x724da4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B724da7:{NFSU2_TR(0x724da7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+12),(U+0),4);
}
B724daa:{NFSU2_TR(0x724daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724dad:{NFSU2_TR(0x724dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724db0:{NFSU2_TR(0x724db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724db3:{NFSU2_TR(0x724db3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724db6:{NFSU2_TR(0x724db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724db9:{NFSU2_TR(0x724db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724dbc:{NFSU2_TR(0x724dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724dbf:{NFSU2_TR(0x724dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724dc2:{NFSU2_TR(0x724dc2);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B724dc4:{NFSU2_TR(0x724dc4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B724dc6:{NFSU2_TR(0x724dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724dcc:{NFSU2_TR(0x724dcc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff96ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B724dd0:{NFSU2_TR(0x724dd0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B724dd3:{NFSU2_TR(0x724dd3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff99ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B724dd6:{NFSU2_TR(0x724dd6);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B724dd9:{NFSU2_TR(0x724dd9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B724ddc:{NFSU2_TR(0x724ddc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B724ddf:{NFSU2_TR(0x724ddf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B724de2:{NFSU2_TR(0x724de2);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B724de6:{NFSU2_TR(0x724de6);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B724dea:{NFSU2_TR(0x724dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724ded:{NFSU2_TR(0x724ded);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724df0:{NFSU2_TR(0x724df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724df3:{NFSU2_TR(0x724df3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724df6:{NFSU2_TR(0x724df6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724df9:{NFSU2_TR(0x724df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724dfc:{NFSU2_TR(0x724dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x729ea3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B724e03:{NFSU2_TR(0x724e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w4(U+4,u32(0x729ef1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B724e0a:{NFSU2_TR(0x724e0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w4(U+4,u32(0x729e76ull));
s4(u32(r4(U+0)),r4(U+4));
}
B724e11:{NFSU2_TR(0x724e11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
w4(U+4,u32(0x729f1eull));
s4(u32(r4(U+0)),r4(U+4));
}
B724e1b:{NFSU2_TR(0x724e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
w4(U+4,u32(0x72a000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B724e22:{NFSU2_TR(0x724e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
w4(U+4,u32(0x729e24ull));
s4(u32(r4(U+0)),r4(U+4));
}
B724e29:{NFSU2_TR(0x724e29);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+4))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B724e2c:{NFSU2_TR(0x724e2c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L724e7e;}}
}
B724e2e:L724e2e:{c.instructions+=10;NFSU2_TR(0x724e2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724e31:{NFSU2_TR(0x724e31);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B724e34:{NFSU2_TR(0x724e34);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B724e36:{NFSU2_TR(0x724e36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724e39:{NFSU2_TR(0x724e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724e3c:{NFSU2_TR(0x724e3c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B724e3e:{NFSU2_TR(0x724e3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724e41:{NFSU2_TR(0x724e41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724e44:{NFSU2_TR(0x724e44);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B724e46:{NFSU2_TR(0x724e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724e49:L724e49:{c.instructions+=18;NFSU2_TR(0x724e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B724e4c:{NFSU2_TR(0x724e4c);
__builtin_memmove((R+0),(R+4),4);
}
B724e4e:{NFSU2_TR(0x724e4e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B724e51:{NFSU2_TR(0x724e51);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B724e53:{NFSU2_TR(0x724e53);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B724e57:{NFSU2_TR(0x724e57);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B724e5b:{NFSU2_TR(0x724e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B724e5e:{NFSU2_TR(0x724e5e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B724e60:{NFSU2_TR(0x724e60);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B724e64:{NFSU2_TR(0x724e64);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B724e68:{NFSU2_TR(0x724e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B724e6b:{NFSU2_TR(0x724e6b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B724e6d:{NFSU2_TR(0x724e6d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B724e71:{NFSU2_TR(0x724e71);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B724e75:{NFSU2_TR(0x724e75);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B724e79:{NFSU2_TR(0x724e79);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B724e7a:{NFSU2_TR(0x724e7a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B724e7c:{NFSU2_TR(0x724e7c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x724e49u);}goto L724e49;}}
}
B724e7e:L724e7e:{c.instructions+=4;NFSU2_TR(0x724e7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B724e81:{NFSU2_TR(0x724e81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724e82:{NFSU2_TR(0x724e82);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724e83:{NFSU2_TR(0x724e83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724e88ull));
TAIL_STATIC(0x729f2eu,729);
}
B724e88:L724e88:{c.instructions+=2;NFSU2_TR(0x724e88);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724e8b:{NFSU2_TR(0x724e8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724e90ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x724d0eu);}goto L724d0e;}
}
B724e90:L724e90:{c.instructions+=4;NFSU2_TR(0x724e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B724e94:{NFSU2_TR(0x724e94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B724e97:{NFSU2_TR(0x724e97);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x0ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B724e9b:{NFSU2_TR(0x724e9b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L724ec0;}}
}
B724e9d:L724e9d:{c.instructions+=2;NFSU2_TR(0x724e9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B724ea0:{NFSU2_TR(0x724ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724ea3:L724ea3:{c.instructions+=4;NFSU2_TR(0x724ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724ea6:{NFSU2_TR(0x724ea6);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B724ea9:{NFSU2_TR(0x724ea9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724eaa:{NFSU2_TR(0x724eaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724eafull));
{goto L724fc5;}
}
B724eaf:L724eaf:{c.instructions+=6;NFSU2_TR(0x724eaf);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B724eb3:{NFSU2_TR(0x724eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B724eb6:{NFSU2_TR(0x724eb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B724eba:{NFSU2_TR(0x724eba);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B724ebd:{NFSU2_TR(0x724ebd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724ebe:{NFSU2_TR(0x724ebe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x724ea3u);}goto L724ea3;}}
}
B724ec0:L724ec0:{c.instructions+=3;NFSU2_TR(0x724ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724ec3:{NFSU2_TR(0x724ec3);
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
B724ec5:{NFSU2_TR(0x724ec5);
if(r1(R+518)){{goto L724ed1;}}
}
B724ec7:L724ec7:{c.instructions+=3;NFSU2_TR(0x724ec7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724eca:{NFSU2_TR(0x724eca);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724ecd:{NFSU2_TR(0x724ecd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724ecfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B724ecf:L724ecf:{c.instructions+=2;NFSU2_TR(0x724ecf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724ed0:{NFSU2_TR(0x724ed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724ed1:L724ed1:{c.instructions+=3;NFSU2_TR(0x724ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724ed4:{NFSU2_TR(0x724ed4);
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
B724ed6:{NFSU2_TR(0x724ed6);
if(r1(R+518)){{goto L724ee2;}}
}
B724ed8:L724ed8:{c.instructions+=3;NFSU2_TR(0x724ed8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724edb:{NFSU2_TR(0x724edb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724ede:{NFSU2_TR(0x724ede);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724ee0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B724ee0:L724ee0:{c.instructions+=2;NFSU2_TR(0x724ee0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724ee1:{NFSU2_TR(0x724ee1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724ee2:L724ee2:{c.instructions+=3;NFSU2_TR(0x724ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724ee5:{NFSU2_TR(0x724ee5);
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
B724ee7:{NFSU2_TR(0x724ee7);
if(r1(R+518)){{goto L724eff;}}
}
B724ee9:L724ee9:{c.instructions+=6;NFSU2_TR(0x724ee9);
__builtin_memmove((R+4),gp(0x8b466c),4);
}
B724eef:{NFSU2_TR(0x724eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B724ef2:{NFSU2_TR(0x724ef2);
u8 U[14];
w4(U+0,u32(u32(u32(0x6eull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(r2(U+12)));
}
B724ef7:{NFSU2_TR(0x724ef7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724ef8:{NFSU2_TR(0x724ef8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724efb:{NFSU2_TR(0x724efb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724efdull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B724efd:L724efd:{c.instructions+=2;NFSU2_TR(0x724efd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724efe:{NFSU2_TR(0x724efe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724eff:L724eff:{c.instructions+=2;NFSU2_TR(0x724eff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724f00:{NFSU2_TR(0x724f00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724f05ull));
TAIL_STATIC(0x729fd6u,729);
}
B724f05:L724f05:{c.instructions+=4;NFSU2_TR(0x724f05);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B724f07:{NFSU2_TR(0x724f07);
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
B724f09:{NFSU2_TR(0x724f09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724f0a:{NFSU2_TR(0x724f0a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L724f33;}}
}
B724f0c:L724f0c:{c.instructions+=2;NFSU2_TR(0x724f0c);
u8 U[14];
__builtin_memmove((U+6),gp(0x8180b8),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B724f12:{NFSU2_TR(0x724f12);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L724f31;}}
}
B724f14:L724f14:{c.instructions+=7;NFSU2_TR(0x724f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724f17:{NFSU2_TR(0x724f17);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B724f1a:{NFSU2_TR(0x724f1a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724f1b:{NFSU2_TR(0x724f1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724f1c:{NFSU2_TR(0x724f1c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B724f1f:{NFSU2_TR(0x724f1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724f22:{NFSU2_TR(0x724f22);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724f25ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B724f25:L724f25:{c.instructions+=4;NFSU2_TR(0x724f25);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B724f28:{NFSU2_TR(0x724f28);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B724f29:{NFSU2_TR(0x724f29);
u8 U[14];
__builtin_memmove((U+6),gp(0x8180b8),4);
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
B724f2f:{NFSU2_TR(0x724f2f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x724f14u);}goto L724f14;}}
}
B724f31:L724f31:{c.instructions+=1;NFSU2_TR(0x724f31);
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
B724f33:L724f33:{c.instructions+=5;NFSU2_TR(0x724f33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B724f34:{NFSU2_TR(0x724f34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B724f35:{NFSU2_TR(0x724f35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B724f36:{NFSU2_TR(0x724f36);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B724f37:{NFSU2_TR(0x724f37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724f38:L724f38:{c.instructions+=6;NFSU2_TR(0x724f38);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B724f3c:{NFSU2_TR(0x724f3c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B724f42:{NFSU2_TR(0x724f42);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b4724))));
}
B724f48:{NFSU2_TR(0x724f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B724f4b:{NFSU2_TR(0x724f4b);
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
B724f4d:{NFSU2_TR(0x724f4d);
if(r1(R+518)){{goto L724f5a;}}
}
B724f4f:L724f4f:{c.instructions+=3;NFSU2_TR(0x724f4f);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724f53:{NFSU2_TR(0x724f53);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B724f56:{NFSU2_TR(0x724f56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724f58ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B724f58:L724f58:{c.instructions+=2;NFSU2_TR(0x724f58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724f59:{NFSU2_TR(0x724f59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B724f5a:L724f5a:{c.instructions+=2;NFSU2_TR(0x724f5a);
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
B724f5c:{NFSU2_TR(0x724f5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724f5d:L724f5d:{c.instructions+=21;NFSU2_TR(0x724f5d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724f5e:{NFSU2_TR(0x724f5e);
__builtin_memmove((R+20),(R+16),4);
}
B724f60:{NFSU2_TR(0x724f60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724f61:{NFSU2_TR(0x724f61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724f62:{NFSU2_TR(0x724f62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724f63:{NFSU2_TR(0x724f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B724f66:{NFSU2_TR(0x724f66);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B724f69:{NFSU2_TR(0x724f69);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B724f6c:{NFSU2_TR(0x724f6c);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b466c))));
}
B724f72:{NFSU2_TR(0x724f72);
__builtin_memmove((R+24),(R+28),4);
}
B724f74:{NFSU2_TR(0x724f74);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B724f78:{NFSU2_TR(0x724f78);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B724f7e:{NFSU2_TR(0x724f7e);
w4(R+24,u32(u32(r4(R+24))+u32(m4(0x8b4724))));
}
B724f84:{NFSU2_TR(0x724f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B724f87:{NFSU2_TR(0x724f87);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B724f89:{NFSU2_TR(0x724f89);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b46e8),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B724f8f:{NFSU2_TR(0x724f8f);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B724f92:{NFSU2_TR(0x724f92);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B724f95:{NFSU2_TR(0x724f95);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B724f9b:{NFSU2_TR(0x724f9b);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B724f9e:{NFSU2_TR(0x724f9e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L724fc0;}}
}
B724fa0:L724fa0:{c.instructions+=7;NFSU2_TR(0x724fa0);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B724fa3:{NFSU2_TR(0x724fa3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724fa4:{NFSU2_TR(0x724fa4);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B724fa7:{NFSU2_TR(0x724fa7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B724faa:{NFSU2_TR(0x724faa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724fab:{NFSU2_TR(0x724fab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724fac:{NFSU2_TR(0x724fac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x724fb1ull));
TAIL_STATIC(0x72905du,729);
}
B724fb1:L724fb1:{c.instructions+=5;NFSU2_TR(0x724fb1);
w4(R+0,u32(m1(0x8b46e8)));
}
B724fb8:{NFSU2_TR(0x724fb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B724fbb:{NFSU2_TR(0x724fbb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B724fbc:{NFSU2_TR(0x724fbc);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B724fbe:{NFSU2_TR(0x724fbe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x724fa0u);}goto L724fa0;}}
}
B724fc0:L724fc0:{c.instructions+=5;NFSU2_TR(0x724fc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B724fc1:{NFSU2_TR(0x724fc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B724fc2:{NFSU2_TR(0x724fc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B724fc3:{NFSU2_TR(0x724fc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B724fc4:{NFSU2_TR(0x724fc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B724fc5:L724fc5:{c.instructions+=10;NFSU2_TR(0x724fc5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B724fc6:{NFSU2_TR(0x724fc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B724fca:{NFSU2_TR(0x724fca);
__builtin_memmove((R+0),(R+24),4);
}
B724fcc:{NFSU2_TR(0x724fcc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B724fd2:{NFSU2_TR(0x724fd2);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b4724))));
}
B724fd8:{NFSU2_TR(0x724fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B724fdb:{NFSU2_TR(0x724fdb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B724fde:{NFSU2_TR(0x724fde);
w4(R+4,u32(u32(r4(R+4))+u32(m4(0x8b466c))));
}
B724fe4:{NFSU2_TR(0x724fe4);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B724fe8:{NFSU2_TR(0x724fe8);
if(r1(R+518)){TAIL_STATIC(0x72500cu,725);}
}
B724fea:L724fea:{c.instructions+=3;NFSU2_TR(0x724fea);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B724fec:{NFSU2_TR(0x724fec);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b46e8),1);
w1(R+512,u8((r1(U+0))<(r1(R+4))));
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+4))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B724ff2:{NFSU2_TR(0x724ff2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x725005u,725);}
}
B724ff4:L724ff4:{c.instructions+=3;NFSU2_TR(0x724ff4);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B724ff6:{NFSU2_TR(0x724ff6);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B724ff9:{NFSU2_TR(0x724ff9);
w4(R+8,u32(m1(0x8b46e8)));
TAIL_STATIC(0x725000u,725);
}
XIT:NFSU2_TR_EXIT(0x724,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
