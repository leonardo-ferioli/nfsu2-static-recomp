#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_71f(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_724(u8* __restrict R,Cpu& c);
u32 body_726(u8* __restrict R,Cpu& c);
u32 body_727(u8* __restrict R,Cpu& c);
u32 body_729(u8* __restrict R,Cpu& c);
u32 body_72a(u8* __restrict R,Cpu& c);
u32 body_72b(u8* __restrict R,Cpu& c);
u32 body_72c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x728,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x728,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_728(u8* __restrict R,Cpu& c);
u32 page_728(Cpu& c){return body_728(c.regs.data(),c);}
__attribute__((noinline)) u32 body_728(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x728000:goto L728000;
case 0x728002:goto L728002;
case 0x728005:c.instructions+=1;goto B728005;
case 0x728007:goto L728007;
case 0x728009:c.instructions+=4;goto B728009;
case 0x728010:c.instructions+=3;goto B728010;
case 0x728012:c.instructions+=2;goto B728012;
case 0x728014:c.instructions+=1;goto B728014;
case 0x728016:goto L728016;
case 0x728018:c.instructions+=2;goto B728018;
case 0x728019:c.instructions+=1;goto B728019;
case 0x72801a:goto L72801a;
case 0x72801b:c.instructions+=2;goto B72801b;
case 0x72801d:c.instructions+=1;goto B72801d;
case 0x728022:goto L728022;
case 0x728024:c.instructions+=1;goto B728024;
case 0x728029:goto L728029;
case 0x72802b:c.instructions+=2;goto B72802b;
case 0x72802c:c.instructions+=1;goto B72802c;
case 0x72802d:goto L72802d;
case 0x72802e:c.instructions+=12;goto B72802e;
case 0x728030:c.instructions+=11;goto B728030;
case 0x728033:c.instructions+=10;goto B728033;
case 0x728034:c.instructions+=9;goto B728034;
case 0x728035:c.instructions+=8;goto B728035;
case 0x728038:c.instructions+=7;goto B728038;
case 0x72803b:c.instructions+=6;goto B72803b;
case 0x72803e:c.instructions+=5;goto B72803e;
case 0x72803f:c.instructions+=4;goto B72803f;
case 0x728041:c.instructions+=3;goto B728041;
case 0x728043:c.instructions+=2;goto B728043;
case 0x728046:c.instructions+=1;goto B728046;
case 0x728048:goto L728048;
case 0x728049:c.instructions+=4;goto B728049;
case 0x72804d:c.instructions+=3;goto B72804d;
case 0x72804e:c.instructions+=2;goto B72804e;
case 0x728051:c.instructions+=1;goto B728051;
case 0x728056:goto L728056;
case 0x728059:c.instructions+=1;goto B728059;
case 0x72805c:goto L72805c;
case 0x72805f:c.instructions+=1;goto B72805f;
case 0x728065:goto L728065;
case 0x728068:c.instructions+=3;goto B728068;
case 0x72806b:c.instructions+=2;goto B72806b;
case 0x72806d:c.instructions+=1;goto B72806d;
case 0x72806f:goto L72806f;
case 0x728072:c.instructions+=6;goto B728072;
case 0x728073:c.instructions+=5;goto B728073;
case 0x728077:c.instructions+=4;goto B728077;
case 0x728078:c.instructions+=3;goto B728078;
case 0x728079:c.instructions+=2;goto B728079;
case 0x72807c:c.instructions+=1;goto B72807c;
case 0x728081:goto L728081;
case 0x728084:c.instructions+=3;goto B728084;
case 0x728086:c.instructions+=2;goto B728086;
case 0x728089:c.instructions+=1;goto B728089;
case 0x72808b:goto L72808b;
case 0x72808f:c.instructions+=1;goto B72808f;
case 0x728091:goto L728091;
case 0x728095:c.instructions+=1;goto B728095;
case 0x728097:goto L728097;
case 0x72809b:c.instructions+=1;goto B72809b;
case 0x72809d:goto L72809d;
case 0x72809f:c.instructions+=1;goto B72809f;
case 0x7280a4:goto L7280a4;
case 0x7280a6:c.instructions+=4;goto B7280a6;
case 0x7280a8:c.instructions+=3;goto B7280a8;
case 0x7280ad:c.instructions+=2;goto B7280ad;
case 0x7280b0:c.instructions+=1;goto B7280b0;
case 0x7280b5:goto L7280b5;
case 0x7280b9:c.instructions+=1;goto B7280b9;
case 0x7280bb:goto L7280bb;
case 0x7280bf:c.instructions+=1;goto B7280bf;
case 0x7280c1:goto L7280c1;
case 0x7280c4:c.instructions+=8;goto B7280c4;
case 0x7280c7:c.instructions+=7;goto B7280c7;
case 0x7280c9:c.instructions+=6;goto B7280c9;
case 0x7280cc:c.instructions+=5;goto B7280cc;
case 0x7280cd:c.instructions+=4;goto B7280cd;
case 0x7280d0:c.instructions+=3;goto B7280d0;
case 0x7280d3:c.instructions+=2;goto B7280d3;
case 0x7280d4:c.instructions+=1;goto B7280d4;
case 0x7280d9:goto L7280d9;
case 0x7280da:c.instructions+=1;goto B7280da;
case 0x7280db:goto L7280db;
case 0x7280de:c.instructions+=1;goto B7280de;
case 0x7280e1:goto L7280e1;
case 0x7280e4:c.instructions+=7;goto B7280e4;
case 0x7280e6:c.instructions+=6;goto B7280e6;
case 0x7280e9:c.instructions+=5;goto B7280e9;
case 0x7280ec:c.instructions+=4;goto B7280ec;
case 0x7280ee:c.instructions+=3;goto B7280ee;
case 0x7280f0:c.instructions+=2;goto B7280f0;
case 0x7280f2:c.instructions+=1;goto B7280f2;
case 0x7280f4:goto L7280f4;
case 0x7280f6:goto L7280f6;
case 0x7280f9:c.instructions+=4;goto B7280f9;
case 0x7280fb:c.instructions+=3;goto B7280fb;
case 0x7280fd:c.instructions+=2;goto B7280fd;
case 0x728100:c.instructions+=1;goto B728100;
case 0x728102:goto L728102;
case 0x728106:c.instructions+=1;goto B728106;
case 0x728108:goto L728108;
case 0x72810c:c.instructions+=1;goto B72810c;
case 0x72810e:goto L72810e;
case 0x728111:c.instructions+=10;goto B728111;
case 0x728113:c.instructions+=9;goto B728113;
case 0x728116:c.instructions+=8;goto B728116;
case 0x728117:c.instructions+=7;goto B728117;
case 0x72811b:c.instructions+=6;goto B72811b;
case 0x72811e:c.instructions+=5;goto B72811e;
case 0x72811f:c.instructions+=4;goto B72811f;
case 0x728122:c.instructions+=3;goto B728122;
case 0x728125:c.instructions+=2;goto B728125;
case 0x728126:c.instructions+=1;goto B728126;
case 0x72812b:goto L72812b;
case 0x72812e:c.instructions+=1;goto B72812e;
case 0x728130:goto L728130;
case 0x728134:c.instructions+=1;goto B728134;
case 0x728136:goto L728136;
case 0x728139:c.instructions+=5;goto B728139;
case 0x72813d:c.instructions+=4;goto B72813d;
case 0x72813f:c.instructions+=3;goto B72813f;
case 0x728142:c.instructions+=2;goto B728142;
case 0x728144:c.instructions+=1;goto B728144;
case 0x728146:goto L728146;
case 0x728148:c.instructions+=5;goto B728148;
case 0x728149:c.instructions+=4;goto B728149;
case 0x72814a:c.instructions+=3;goto B72814a;
case 0x72814d:c.instructions+=2;goto B72814d;
case 0x72814e:c.instructions+=1;goto B72814e;
case 0x728153:goto L728153;
case 0x728156:goto L728156;
case 0x72815a:c.instructions+=5;goto B72815a;
case 0x72815d:c.instructions+=4;goto B72815d;
case 0x728160:c.instructions+=3;goto B728160;
case 0x728163:c.instructions+=2;goto B728163;
case 0x728166:c.instructions+=1;goto B728166;
case 0x728168:goto L728168;
case 0x72816c:c.instructions+=3;goto B72816c;
case 0x72816f:c.instructions+=2;goto B72816f;
case 0x728172:c.instructions+=1;goto B728172;
case 0x728175:goto L728175;
case 0x728177:c.instructions+=4;goto B728177;
case 0x728178:c.instructions+=3;goto B728178;
case 0x72817b:c.instructions+=2;goto B72817b;
case 0x72817c:c.instructions+=1;goto B72817c;
case 0x728181:goto L728181;
case 0x728185:c.instructions+=6;goto B728185;
case 0x728188:c.instructions+=5;goto B728188;
case 0x72818c:c.instructions+=4;goto B72818c;
case 0x72818f:c.instructions+=3;goto B72818f;
case 0x728193:c.instructions+=2;goto B728193;
case 0x728197:c.instructions+=1;goto B728197;
case 0x728199:goto L728199;
case 0x72819e:c.instructions+=1;goto B72819e;
case 0x7281a3:goto L7281a3;
case 0x7281a6:c.instructions+=2;goto B7281a6;
case 0x7281a9:c.instructions+=1;goto B7281a9;
case 0x7281af:goto L7281af;
case 0x7281b2:c.instructions+=5;goto B7281b2;
case 0x7281b3:c.instructions+=4;goto B7281b3;
case 0x7281b4:c.instructions+=3;goto B7281b4;
case 0x7281b5:c.instructions+=2;goto B7281b5;
case 0x7281b6:c.instructions+=1;goto B7281b6;
case 0x7281b7:goto L7281b7;
case 0x7281b8:c.instructions+=4;goto B7281b8;
case 0x7281bc:c.instructions+=3;goto B7281bc;
case 0x7281bf:c.instructions+=2;goto B7281bf;
case 0x7281c1:c.instructions+=1;goto B7281c1;
case 0x7281c3:goto L7281c3;
case 0x7281c6:c.instructions+=3;goto B7281c6;
case 0x7281c9:c.instructions+=2;goto B7281c9;
case 0x7281cd:c.instructions+=1;goto B7281cd;
case 0x7281cf:goto L7281cf;
case 0x7281d0:c.instructions+=3;goto B7281d0;
case 0x7281d2:c.instructions+=2;goto B7281d2;
case 0x7281d4:c.instructions+=1;goto B7281d4;
case 0x7281d6:goto L7281d6;
case 0x7281d8:c.instructions+=1;goto B7281d8;
case 0x7281dd:goto L7281dd;
case 0x7281de:c.instructions+=1;goto B7281de;
case 0x7281e3:goto L7281e3;
case 0x7281e4:goto L7281e4;
case 0x7281e7:c.instructions+=4;goto B7281e7;
case 0x7281ea:c.instructions+=3;goto B7281ea;
case 0x7281ec:c.instructions+=2;goto B7281ec;
case 0x7281ed:c.instructions+=1;goto B7281ed;
case 0x7281ef:goto L7281ef;
case 0x7281f0:c.instructions+=1;goto B7281f0;
case 0x7281f5:goto L7281f5;
case 0x7281f8:c.instructions+=2;goto B7281f8;
case 0x7281fc:c.instructions+=1;goto B7281fc;
case 0x7281fd:goto L7281fd;
case 0x728200:c.instructions+=1;goto B728200;
case 0x728205:goto L728205;
case 0x728209:c.instructions+=1;goto B728209;
case 0x72820a:goto L72820a;
case 0x72820b:c.instructions+=1;goto B72820b;
case 0x72820c:goto L72820c;
case 0x72820d:c.instructions+=7;goto B72820d;
case 0x72820e:c.instructions+=6;goto B72820e;
case 0x72820f:c.instructions+=5;goto B72820f;
case 0x728213:c.instructions+=4;goto B728213;
case 0x728215:c.instructions+=3;goto B728215;
case 0x728216:c.instructions+=2;goto B728216;
case 0x728219:c.instructions+=1;goto B728219;
case 0x72821b:goto L72821b;
case 0x72821f:c.instructions+=3;goto B72821f;
case 0x728221:c.instructions+=2;goto B728221;
case 0x728224:c.instructions+=1;goto B728224;
case 0x728226:goto L728226;
case 0x728228:c.instructions+=1;goto B728228;
case 0x72822d:goto L72822d;
case 0x728230:c.instructions+=3;goto B728230;
case 0x728235:c.instructions+=2;goto B728235;
case 0x72823c:c.instructions+=1;goto B72823c;
case 0x728241:goto L728241;
case 0x728243:c.instructions+=2;goto B728243;
case 0x728244:c.instructions+=1;goto B728244;
case 0x728246:goto L728246;
case 0x728248:c.instructions+=1;goto B728248;
case 0x72824d:goto L72824d;
case 0x72824f:goto L72824f;
case 0x728254:c.instructions+=3;goto B728254;
case 0x728257:c.instructions+=2;goto B728257;
case 0x72825a:c.instructions+=1;goto B72825a;
case 0x72825c:goto L72825c;
case 0x72825e:c.instructions+=1;goto B72825e;
case 0x728263:goto L728263;
case 0x728267:c.instructions+=4;goto B728267;
case 0x72826a:c.instructions+=3;goto B72826a;
case 0x72826f:c.instructions+=2;goto B72826f;
case 0x728276:c.instructions+=1;goto B728276;
case 0x72827b:goto L72827b;
case 0x72827d:c.instructions+=1;goto B72827d;
case 0x72827f:goto L72827f;
case 0x728281:goto L728281;
case 0x728287:c.instructions+=9;goto B728287;
case 0x72828b:c.instructions+=8;goto B72828b;
case 0x72828f:c.instructions+=7;goto B72828f;
case 0x728291:c.instructions+=6;goto B728291;
case 0x728294:c.instructions+=5;goto B728294;
case 0x72829b:c.instructions+=4;goto B72829b;
case 0x72829e:c.instructions+=3;goto B72829e;
case 0x7282a1:c.instructions+=2;goto B7282a1;
case 0x7282a4:c.instructions+=1;goto B7282a4;
case 0x7282a7:goto L7282a7;
case 0x7282ad:c.instructions+=3;goto B7282ad;
case 0x7282b4:c.instructions+=2;goto B7282b4;
case 0x7282b7:c.instructions+=1;goto B7282b7;
case 0x7282bc:goto L7282bc;
case 0x7282bd:c.instructions+=1;goto B7282bd;
case 0x7282c2:goto L7282c2;
case 0x7282c5:c.instructions+=8;goto B7282c5;
case 0x7282c8:c.instructions+=7;goto B7282c8;
case 0x7282cb:c.instructions+=6;goto B7282cb;
case 0x7282ce:c.instructions+=5;goto B7282ce;
case 0x7282d1:c.instructions+=4;goto B7282d1;
case 0x7282d4:c.instructions+=3;goto B7282d4;
case 0x7282d7:c.instructions+=2;goto B7282d7;
case 0x7282da:c.instructions+=1;goto B7282da;
case 0x7282df:goto L7282df;
case 0x7282e2:c.instructions+=7;goto B7282e2;
case 0x7282e3:c.instructions+=6;goto B7282e3;
case 0x7282e6:c.instructions+=5;goto B7282e6;
case 0x7282e9:c.instructions+=4;goto B7282e9;
case 0x7282ec:c.instructions+=3;goto B7282ec;
case 0x7282ed:c.instructions+=2;goto B7282ed;
case 0x7282ee:c.instructions+=1;goto B7282ee;
case 0x7282ef:goto L7282ef;
case 0x7282f0:c.instructions+=10;goto B7282f0;
case 0x7282f2:c.instructions+=9;goto B7282f2;
case 0x7282f5:c.instructions+=8;goto B7282f5;
case 0x7282f9:c.instructions+=7;goto B7282f9;
case 0x7282fa:c.instructions+=6;goto B7282fa;
case 0x7282fd:c.instructions+=5;goto B7282fd;
case 0x7282ff:c.instructions+=4;goto B7282ff;
case 0x728300:c.instructions+=3;goto B728300;
case 0x728303:c.instructions+=2;goto B728303;
case 0x728306:c.instructions+=1;goto B728306;
case 0x72830c:goto L72830c;
case 0x72830d:c.instructions+=2;goto B72830d;
case 0x728310:c.instructions+=1;goto B728310;
case 0x728312:goto L728312;
case 0x728315:goto L728315;
case 0x728319:c.instructions+=1;goto B728319;
case 0x72831b:goto L72831b;
case 0x72831f:c.instructions+=1;goto B72831f;
case 0x728321:goto L728321;
case 0x728324:c.instructions+=9;goto B728324;
case 0x728326:c.instructions+=8;goto B728326;
case 0x728329:c.instructions+=7;goto B728329;
case 0x72832a:c.instructions+=6;goto B72832a;
case 0x72832e:c.instructions+=5;goto B72832e;
case 0x728331:c.instructions+=4;goto B728331;
case 0x728334:c.instructions+=3;goto B728334;
case 0x728335:c.instructions+=2;goto B728335;
case 0x728336:c.instructions+=1;goto B728336;
case 0x72833b:goto L72833b;
case 0x72833e:c.instructions+=4;goto B72833e;
case 0x728340:c.instructions+=3;goto B728340;
case 0x728343:c.instructions+=2;goto B728343;
case 0x728345:c.instructions+=1;goto B728345;
case 0x728347:goto L728347;
case 0x72834b:c.instructions+=1;goto B72834b;
case 0x72834d:goto L72834d;
case 0x728350:c.instructions+=5;goto B728350;
case 0x728354:c.instructions+=4;goto B728354;
case 0x728356:c.instructions+=3;goto B728356;
case 0x728359:c.instructions+=2;goto B728359;
case 0x72835b:c.instructions+=1;goto B72835b;
case 0x72835d:goto L72835d;
case 0x72835f:c.instructions+=5;goto B72835f;
case 0x728360:c.instructions+=4;goto B728360;
case 0x728361:c.instructions+=3;goto B728361;
case 0x728364:c.instructions+=2;goto B728364;
case 0x728365:c.instructions+=1;goto B728365;
case 0x72836a:goto L72836a;
case 0x72836d:goto L72836d;
case 0x728371:c.instructions+=2;goto B728371;
case 0x728374:c.instructions+=1;goto B728374;
case 0x728376:goto L728376;
case 0x728379:c.instructions+=4;goto B728379;
case 0x72837d:c.instructions+=3;goto B72837d;
case 0x728380:c.instructions+=2;goto B728380;
case 0x728383:c.instructions+=1;goto B728383;
case 0x728386:goto L728386;
case 0x728387:c.instructions+=5;goto B728387;
case 0x72838a:c.instructions+=4;goto B72838a;
case 0x72838b:c.instructions+=3;goto B72838b;
case 0x72838e:c.instructions+=2;goto B72838e;
case 0x728390:c.instructions+=1;goto B728390;
case 0x728395:goto L728395;
case 0x728397:c.instructions+=2;goto B728397;
case 0x72839a:c.instructions+=1;goto B72839a;
case 0x72839d:goto L72839d;
case 0x7283a1:c.instructions+=4;goto B7283a1;
case 0x7283a4:c.instructions+=3;goto B7283a4;
case 0x7283a7:c.instructions+=2;goto B7283a7;
case 0x7283aa:c.instructions+=1;goto B7283aa;
case 0x7283ac:goto L7283ac;
case 0x7283b0:c.instructions+=7;goto B7283b0;
case 0x7283b3:c.instructions+=6;goto B7283b3;
case 0x7283b7:c.instructions+=5;goto B7283b7;
case 0x7283ba:c.instructions+=4;goto B7283ba;
case 0x7283bd:c.instructions+=3;goto B7283bd;
case 0x7283c1:c.instructions+=2;goto B7283c1;
case 0x7283c5:c.instructions+=1;goto B7283c5;
case 0x7283c7:goto L7283c7;
case 0x7283cc:c.instructions+=2;goto B7283cc;
case 0x7283cf:c.instructions+=1;goto B7283cf;
case 0x7283d4:goto L7283d4;
case 0x7283d6:c.instructions+=1;goto B7283d6;
case 0x7283d8:goto L7283d8;
case 0x7283db:c.instructions+=4;goto B7283db;
case 0x7283de:c.instructions+=3;goto B7283de;
case 0x7283e1:c.instructions+=2;goto B7283e1;
case 0x7283e3:c.instructions+=1;goto B7283e3;
case 0x7283e8:goto L7283e8;
case 0x7283eb:c.instructions+=8;goto B7283eb;
case 0x7283ee:c.instructions+=7;goto B7283ee;
case 0x7283ef:c.instructions+=6;goto B7283ef;
case 0x7283f0:c.instructions+=5;goto B7283f0;
case 0x7283f3:c.instructions+=4;goto B7283f3;
case 0x7283f5:c.instructions+=3;goto B7283f5;
case 0x7283fa:c.instructions+=2;goto B7283fa;
case 0x7283fd:c.instructions+=1;goto B7283fd;
case 0x728402:goto L728402;
case 0x728404:c.instructions+=2;goto B728404;
case 0x728406:c.instructions+=1;goto B728406;
case 0x72840c:goto L72840c;
case 0x72840d:goto L72840d;
case 0x728410:c.instructions+=4;goto B728410;
case 0x728411:c.instructions+=3;goto B728411;
case 0x728412:c.instructions+=2;goto B728412;
case 0x728413:c.instructions+=1;goto B728413;
case 0x728414:goto L728414;
case 0x728415:c.instructions+=4;goto B728415;
case 0x728419:c.instructions+=3;goto B728419;
case 0x72841c:c.instructions+=2;goto B72841c;
case 0x72841e:c.instructions+=1;goto B72841e;
case 0x728420:goto L728420;
case 0x728423:c.instructions+=3;goto B728423;
case 0x728426:c.instructions+=2;goto B728426;
case 0x72842a:c.instructions+=1;goto B72842a;
case 0x72842c:goto L72842c;
case 0x72842d:c.instructions+=3;goto B72842d;
case 0x72842f:c.instructions+=2;goto B72842f;
case 0x728431:c.instructions+=1;goto B728431;
case 0x728433:goto L728433;
case 0x728435:c.instructions+=1;goto B728435;
case 0x72843a:goto L72843a;
case 0x72843b:c.instructions+=1;goto B72843b;
case 0x728440:goto L728440;
case 0x728441:goto L728441;
case 0x728444:c.instructions+=4;goto B728444;
case 0x728447:c.instructions+=3;goto B728447;
case 0x728449:c.instructions+=2;goto B728449;
case 0x72844a:c.instructions+=1;goto B72844a;
case 0x72844c:goto L72844c;
case 0x72844d:c.instructions+=1;goto B72844d;
case 0x728452:goto L728452;
case 0x728455:c.instructions+=2;goto B728455;
case 0x728459:c.instructions+=1;goto B728459;
case 0x72845a:goto L72845a;
case 0x72845d:c.instructions+=1;goto B72845d;
case 0x728462:goto L728462;
case 0x728466:c.instructions+=1;goto B728466;
case 0x728467:goto L728467;
case 0x728468:c.instructions+=1;goto B728468;
case 0x728469:goto L728469;
case 0x72846a:c.instructions+=7;goto B72846a;
case 0x72846b:c.instructions+=6;goto B72846b;
case 0x72846c:c.instructions+=5;goto B72846c;
case 0x728470:c.instructions+=4;goto B728470;
case 0x728472:c.instructions+=3;goto B728472;
case 0x728473:c.instructions+=2;goto B728473;
case 0x728476:c.instructions+=1;goto B728476;
case 0x72847c:goto L72847c;
case 0x728480:c.instructions+=3;goto B728480;
case 0x728482:c.instructions+=2;goto B728482;
case 0x728485:c.instructions+=1;goto B728485;
case 0x728487:goto L728487;
case 0x728489:c.instructions+=1;goto B728489;
case 0x72848e:goto L72848e;
case 0x728491:c.instructions+=3;goto B728491;
case 0x728496:c.instructions+=2;goto B728496;
case 0x72849d:c.instructions+=1;goto B72849d;
case 0x7284a2:goto L7284a2;
case 0x7284a4:c.instructions+=2;goto B7284a4;
case 0x7284a5:c.instructions+=1;goto B7284a5;
case 0x7284a7:goto L7284a7;
case 0x7284a9:c.instructions+=1;goto B7284a9;
case 0x7284ae:goto L7284ae;
case 0x7284b0:goto L7284b0;
case 0x7284b2:goto L7284b2;
case 0x7284b8:c.instructions+=3;goto B7284b8;
case 0x7284ba:c.instructions+=2;goto B7284ba;
case 0x7284bc:c.instructions+=1;goto B7284bc;
case 0x7284c1:goto L7284c1;
case 0x7284c4:c.instructions+=11;goto B7284c4;
case 0x7284c7:c.instructions+=10;goto B7284c7;
case 0x7284ca:c.instructions+=9;goto B7284ca;
case 0x7284cd:c.instructions+=8;goto B7284cd;
case 0x7284d0:c.instructions+=7;goto B7284d0;
case 0x7284d3:c.instructions+=6;goto B7284d3;
case 0x7284d6:c.instructions+=5;goto B7284d6;
case 0x7284db:c.instructions+=4;goto B7284db;
case 0x7284dd:c.instructions+=3;goto B7284dd;
case 0x7284e2:c.instructions+=2;goto B7284e2;
case 0x7284e4:c.instructions+=1;goto B7284e4;
case 0x7284e9:goto L7284e9;
case 0x7284ee:c.instructions+=5;goto B7284ee;
case 0x7284f2:c.instructions+=4;goto B7284f2;
case 0x7284f6:c.instructions+=3;goto B7284f6;
case 0x7284fd:c.instructions+=2;goto B7284fd;
case 0x728500:c.instructions+=1;goto B728500;
case 0x728505:goto L728505;
case 0x72850a:c.instructions+=3;goto B72850a;
case 0x72850d:c.instructions+=2;goto B72850d;
case 0x728510:c.instructions+=1;goto B728510;
case 0x728515:goto L728515;
case 0x728517:c.instructions+=1;goto B728517;
case 0x72851c:goto L72851c;
case 0x728520:c.instructions+=4;goto B728520;
case 0x728523:c.instructions+=3;goto B728523;
case 0x728528:c.instructions+=2;goto B728528;
case 0x72852f:c.instructions+=1;goto B72852f;
case 0x728534:goto L728534;
case 0x728536:c.instructions+=3;goto B728536;
case 0x728538:c.instructions+=2;goto B728538;
case 0x728539:c.instructions+=1;goto B728539;
case 0x72853b:goto L72853b;
case 0x72853d:c.instructions+=1;goto B72853d;
case 0x728542:goto L728542;
case 0x728544:goto L728544;
case 0x728546:goto L728546;
case 0x72854c:c.instructions+=3;goto B72854c;
case 0x72854e:c.instructions+=2;goto B72854e;
case 0x728550:c.instructions+=1;goto B728550;
case 0x728555:goto L728555;
case 0x728558:c.instructions+=11;goto B728558;
case 0x72855b:c.instructions+=10;goto B72855b;
case 0x72855e:c.instructions+=9;goto B72855e;
case 0x728561:c.instructions+=8;goto B728561;
case 0x728564:c.instructions+=7;goto B728564;
case 0x728567:c.instructions+=6;goto B728567;
case 0x72856a:c.instructions+=5;goto B72856a;
case 0x72856f:c.instructions+=4;goto B72856f;
case 0x728571:c.instructions+=3;goto B728571;
case 0x728576:c.instructions+=2;goto B728576;
case 0x728578:c.instructions+=1;goto B728578;
case 0x72857d:goto L72857d;
case 0x728582:c.instructions+=6;goto B728582;
case 0x728586:c.instructions+=5;goto B728586;
case 0x728589:c.instructions+=4;goto B728589;
case 0x728590:c.instructions+=3;goto B728590;
case 0x728593:c.instructions+=2;goto B728593;
case 0x728596:c.instructions+=1;goto B728596;
case 0x728599:goto L728599;
case 0x72859c:goto L72859c;
case 0x7285a2:c.instructions+=9;goto B7285a2;
case 0x7285a9:c.instructions+=8;goto B7285a9;
case 0x7285b0:c.instructions+=7;goto B7285b0;
case 0x7285b3:c.instructions+=6;goto B7285b3;
case 0x7285b6:c.instructions+=5;goto B7285b6;
case 0x7285b7:c.instructions+=4;goto B7285b7;
case 0x7285ba:c.instructions+=3;goto B7285ba;
case 0x7285bb:c.instructions+=2;goto B7285bb;
case 0x7285bc:c.instructions+=1;goto B7285bc;
case 0x7285bd:goto L7285bd;
case 0x7285be:c.instructions+=9;goto B7285be;
case 0x7285c0:c.instructions+=8;goto B7285c0;
case 0x7285c1:c.instructions+=7;goto B7285c1;
case 0x7285c2:c.instructions+=6;goto B7285c2;
case 0x7285c3:c.instructions+=5;goto B7285c3;
case 0x7285c6:c.instructions+=4;goto B7285c6;
case 0x7285c9:c.instructions+=3;goto B7285c9;
case 0x7285cc:c.instructions+=2;goto B7285cc;
case 0x7285cf:c.instructions+=1;goto B7285cf;
case 0x7285d1:goto L7285d1;
case 0x7285d4:c.instructions+=1;goto B7285d4;
case 0x7285d9:goto L7285d9;
case 0x7285dc:c.instructions+=6;goto B7285dc;
case 0x7285df:c.instructions+=5;goto B7285df;
case 0x7285e2:c.instructions+=4;goto B7285e2;
case 0x7285e3:c.instructions+=3;goto B7285e3;
case 0x7285e6:c.instructions+=2;goto B7285e6;
case 0x7285e8:c.instructions+=1;goto B7285e8;
case 0x7285ea:goto L7285ea;
case 0x7285ed:c.instructions+=8;goto B7285ed;
case 0x7285f0:c.instructions+=7;goto B7285f0;
case 0x7285f2:c.instructions+=6;goto B7285f2;
case 0x7285f4:c.instructions+=5;goto B7285f4;
case 0x7285f6:c.instructions+=4;goto B7285f6;
case 0x7285f8:c.instructions+=3;goto B7285f8;
case 0x7285fb:c.instructions+=2;goto B7285fb;
case 0x7285fd:c.instructions+=1;goto B7285fd;
case 0x7285ff:goto L7285ff;
case 0x728603:goto L728603;
case 0x728606:c.instructions+=3;goto B728606;
case 0x72860a:c.instructions+=2;goto B72860a;
case 0x72860b:c.instructions+=1;goto B72860b;
case 0x72860d:goto L72860d;
case 0x728611:c.instructions+=1;goto B728611;
case 0x728613:goto L728613;
case 0x728615:c.instructions+=4;goto B728615;
case 0x728619:c.instructions+=3;goto B728619;
case 0x72861b:c.instructions+=2;goto B72861b;
case 0x72861e:c.instructions+=1;goto B72861e;
case 0x728620:goto L728620;
case 0x728622:c.instructions+=6;goto B728622;
case 0x728623:c.instructions+=5;goto B728623;
case 0x728626:c.instructions+=4;goto B728626;
case 0x728627:c.instructions+=3;goto B728627;
case 0x72862a:c.instructions+=2;goto B72862a;
case 0x72862b:c.instructions+=1;goto B72862b;
case 0x728630:goto L728630;
case 0x728633:goto L728633;
case 0x728636:c.instructions+=11;goto B728636;
case 0x728639:c.instructions+=10;goto B728639;
case 0x72863c:c.instructions+=9;goto B72863c;
case 0x728640:c.instructions+=8;goto B728640;
case 0x728643:c.instructions+=7;goto B728643;
case 0x728646:c.instructions+=6;goto B728646;
case 0x728649:c.instructions+=5;goto B728649;
case 0x72864a:c.instructions+=4;goto B72864a;
case 0x72864d:c.instructions+=3;goto B72864d;
case 0x72864e:c.instructions+=2;goto B72864e;
case 0x728650:c.instructions+=1;goto B728650;
case 0x728655:goto L728655;
case 0x728657:goto L728657;
case 0x72865a:c.instructions+=10;goto B72865a;
case 0x72865d:c.instructions+=9;goto B72865d;
case 0x72865f:c.instructions+=8;goto B72865f;
case 0x728662:c.instructions+=7;goto B728662;
case 0x728663:c.instructions+=6;goto B728663;
case 0x728667:c.instructions+=5;goto B728667;
case 0x72866a:c.instructions+=4;goto B72866a;
case 0x72866d:c.instructions+=3;goto B72866d;
case 0x72866e:c.instructions+=2;goto B72866e;
case 0x72866f:c.instructions+=1;goto B72866f;
case 0x728674:goto L728674;
case 0x728677:c.instructions+=1;goto B728677;
case 0x728679:goto L728679;
case 0x72867c:c.instructions+=7;goto B72867c;
case 0x728680:c.instructions+=6;goto B728680;
case 0x728681:c.instructions+=5;goto B728681;
case 0x728684:c.instructions+=4;goto B728684;
case 0x728687:c.instructions+=3;goto B728687;
case 0x728688:c.instructions+=2;goto B728688;
case 0x72868a:c.instructions+=1;goto B72868a;
case 0x72868f:goto L72868f;
case 0x728692:c.instructions+=1;goto B728692;
case 0x728695:goto L728695;
case 0x728698:c.instructions+=2;goto B728698;
case 0x72869a:c.instructions+=1;goto B72869a;
case 0x72869c:goto L72869c;
case 0x72869f:c.instructions+=4;goto B72869f;
case 0x7286a0:c.instructions+=3;goto B7286a0;
case 0x7286a3:c.instructions+=2;goto B7286a3;
case 0x7286a4:c.instructions+=1;goto B7286a4;
case 0x7286a9:goto L7286a9;
case 0x7286aa:c.instructions+=1;goto B7286aa;
case 0x7286ab:goto L7286ab;
case 0x7286ae:c.instructions+=3;goto B7286ae;
case 0x7286b2:c.instructions+=2;goto B7286b2;
case 0x7286b3:c.instructions+=1;goto B7286b3;
case 0x7286b5:goto L7286b5;
case 0x7286b9:c.instructions+=7;goto B7286b9;
case 0x7286bc:c.instructions+=6;goto B7286bc;
case 0x7286c0:c.instructions+=5;goto B7286c0;
case 0x7286c3:c.instructions+=4;goto B7286c3;
case 0x7286c6:c.instructions+=3;goto B7286c6;
case 0x7286ca:c.instructions+=2;goto B7286ca;
case 0x7286ce:c.instructions+=1;goto B7286ce;
case 0x7286d0:goto L7286d0;
case 0x7286d5:c.instructions+=2;goto B7286d5;
case 0x7286d8:c.instructions+=1;goto B7286d8;
case 0x7286dd:goto L7286dd;
case 0x7286df:c.instructions+=2;goto B7286df;
case 0x7286e0:c.instructions+=1;goto B7286e0;
case 0x7286e1:goto L7286e1;
case 0x7286e2:c.instructions+=2;goto B7286e2;
case 0x7286e3:c.instructions+=1;goto B7286e3;
case 0x7286e4:goto L7286e4;
case 0x7286e8:c.instructions+=3;goto B7286e8;
case 0x7286eb:c.instructions+=2;goto B7286eb;
case 0x7286ee:c.instructions+=1;goto B7286ee;
case 0x7286ef:goto L7286ef;
case 0x7286f0:c.instructions+=4;goto B7286f0;
case 0x7286f4:c.instructions+=3;goto B7286f4;
case 0x7286f7:c.instructions+=2;goto B7286f7;
case 0x7286f9:c.instructions+=1;goto B7286f9;
case 0x7286fb:goto L7286fb;
case 0x7286fe:c.instructions+=3;goto B7286fe;
case 0x728701:c.instructions+=2;goto B728701;
case 0x728705:c.instructions+=1;goto B728705;
case 0x728707:goto L728707;
case 0x728708:c.instructions+=3;goto B728708;
case 0x72870a:c.instructions+=2;goto B72870a;
case 0x72870c:c.instructions+=1;goto B72870c;
case 0x72870e:goto L72870e;
case 0x728710:c.instructions+=1;goto B728710;
case 0x728715:goto L728715;
case 0x728716:c.instructions+=1;goto B728716;
case 0x72871b:goto L72871b;
case 0x72871c:goto L72871c;
case 0x72871f:c.instructions+=4;goto B72871f;
case 0x728722:c.instructions+=3;goto B728722;
case 0x728724:c.instructions+=2;goto B728724;
case 0x728725:c.instructions+=1;goto B728725;
case 0x728727:goto L728727;
case 0x728728:c.instructions+=1;goto B728728;
case 0x72872d:goto L72872d;
case 0x728730:c.instructions+=2;goto B728730;
case 0x728734:c.instructions+=1;goto B728734;
case 0x728735:goto L728735;
case 0x728738:c.instructions+=1;goto B728738;
case 0x72873d:goto L72873d;
case 0x728741:c.instructions+=1;goto B728741;
case 0x728742:goto L728742;
case 0x728743:c.instructions+=1;goto B728743;
case 0x728744:goto L728744;
case 0x728745:c.instructions+=5;goto B728745;
case 0x728746:c.instructions+=4;goto B728746;
case 0x728747:c.instructions+=3;goto B728747;
case 0x72874b:c.instructions+=2;goto B72874b;
case 0x72874f:c.instructions+=1;goto B72874f;
case 0x728751:goto L728751;
case 0x728755:c.instructions+=3;goto B728755;
case 0x728757:c.instructions+=2;goto B728757;
case 0x72875a:c.instructions+=1;goto B72875a;
case 0x72875c:goto L72875c;
case 0x72875e:c.instructions+=1;goto B72875e;
case 0x728763:goto L728763;
case 0x728766:c.instructions+=3;goto B728766;
case 0x72876b:c.instructions+=2;goto B72876b;
case 0x728772:c.instructions+=1;goto B728772;
case 0x728777:goto L728777;
case 0x728779:c.instructions+=2;goto B728779;
case 0x72877a:c.instructions+=1;goto B72877a;
case 0x72877c:goto L72877c;
case 0x72877e:c.instructions+=1;goto B72877e;
case 0x728783:goto L728783;
case 0x728785:goto L728785;
case 0x728787:goto L728787;
case 0x72878d:c.instructions+=3;goto B72878d;
case 0x72878f:c.instructions+=2;goto B72878f;
case 0x728791:c.instructions+=1;goto B728791;
case 0x728796:goto L728796;
case 0x728799:c.instructions+=5;goto B728799;
case 0x72879e:c.instructions+=4;goto B72879e;
case 0x7287a0:c.instructions+=3;goto B7287a0;
case 0x7287a5:c.instructions+=2;goto B7287a5;
case 0x7287a7:c.instructions+=1;goto B7287a7;
case 0x7287ac:goto L7287ac;
case 0x7287af:c.instructions+=4;goto B7287af;
case 0x7287b3:c.instructions+=3;goto B7287b3;
case 0x7287b6:c.instructions+=2;goto B7287b6;
case 0x7287ba:c.instructions+=1;goto B7287ba;
case 0x7287bc:goto L7287bc;
case 0x7287c1:c.instructions+=3;goto B7287c1;
case 0x7287c4:c.instructions+=2;goto B7287c4;
case 0x7287c8:c.instructions+=1;goto B7287c8;
case 0x7287ca:goto L7287ca;
case 0x7287cc:c.instructions+=1;goto B7287cc;
case 0x7287d1:goto L7287d1;
case 0x7287d5:c.instructions+=4;goto B7287d5;
case 0x7287d8:c.instructions+=3;goto B7287d8;
case 0x7287dd:c.instructions+=2;goto B7287dd;
case 0x7287e4:c.instructions+=1;goto B7287e4;
case 0x7287e9:goto L7287e9;
case 0x7287eb:c.instructions+=3;goto B7287eb;
case 0x7287ed:c.instructions+=2;goto B7287ed;
case 0x7287ee:c.instructions+=1;goto B7287ee;
case 0x7287f0:goto L7287f0;
case 0x7287f2:c.instructions+=1;goto B7287f2;
case 0x7287f7:goto L7287f7;
case 0x7287f9:goto L7287f9;
case 0x7287fb:goto L7287fb;
case 0x728801:c.instructions+=3;goto B728801;
case 0x728803:c.instructions+=2;goto B728803;
case 0x728805:c.instructions+=1;goto B728805;
case 0x72880a:goto L72880a;
case 0x72880d:c.instructions+=5;goto B72880d;
case 0x728812:c.instructions+=4;goto B728812;
case 0x728814:c.instructions+=3;goto B728814;
case 0x728819:c.instructions+=2;goto B728819;
case 0x72881b:c.instructions+=1;goto B72881b;
case 0x728820:goto L728820;
case 0x728825:c.instructions+=1;goto B728825;
case 0x728829:goto L728829;
case 0x72882c:c.instructions+=5;goto B72882c;
case 0x728830:c.instructions+=4;goto B728830;
case 0x728833:c.instructions+=3;goto B728833;
case 0x728836:c.instructions+=2;goto B728836;
case 0x728839:c.instructions+=1;goto B728839;
case 0x72883c:goto L72883c;
case 0x728842:c.instructions+=14;goto B728842;
case 0x728849:c.instructions+=13;goto B728849;
case 0x72884c:c.instructions+=12;goto B72884c;
case 0x728853:c.instructions+=11;goto B728853;
case 0x728856:c.instructions+=10;goto B728856;
case 0x728859:c.instructions+=9;goto B728859;
case 0x72885c:c.instructions+=8;goto B72885c;
case 0x72885f:c.instructions+=7;goto B72885f;
case 0x728862:c.instructions+=6;goto B728862;
case 0x728865:c.instructions+=5;goto B728865;
case 0x728866:c.instructions+=4;goto B728866;
case 0x728867:c.instructions+=3;goto B728867;
case 0x72886a:c.instructions+=2;goto B72886a;
case 0x72886b:c.instructions+=1;goto B72886b;
case 0x72886c:goto L72886c;
case 0x728870:c.instructions+=68;goto B728870;
case 0x728874:c.instructions+=67;goto B728874;
case 0x728876:c.instructions+=66;goto B728876;
case 0x72887c:c.instructions+=65;goto B72887c;
case 0x72887e:c.instructions+=64;goto B72887e;
case 0x728880:c.instructions+=63;goto B728880;
case 0x728882:c.instructions+=62;goto B728882;
case 0x728888:c.instructions+=61;goto B728888;
case 0x72888b:c.instructions+=60;goto B72888b;
case 0x72888e:c.instructions+=59;goto B72888e;
case 0x728890:c.instructions+=58;goto B728890;
case 0x728896:c.instructions+=57;goto B728896;
case 0x728899:c.instructions+=56;goto B728899;
case 0x72889c:c.instructions+=55;goto B72889c;
case 0x72889e:c.instructions+=54;goto B72889e;
case 0x7288a4:c.instructions+=53;goto B7288a4;
case 0x7288a7:c.instructions+=52;goto B7288a7;
case 0x7288aa:c.instructions+=51;goto B7288aa;
case 0x7288ac:c.instructions+=50;goto B7288ac;
case 0x7288b2:c.instructions+=49;goto B7288b2;
case 0x7288b5:c.instructions+=48;goto B7288b5;
case 0x7288b8:c.instructions+=47;goto B7288b8;
case 0x7288ba:c.instructions+=46;goto B7288ba;
case 0x7288c0:c.instructions+=45;goto B7288c0;
case 0x7288c3:c.instructions+=44;goto B7288c3;
case 0x7288c6:c.instructions+=43;goto B7288c6;
case 0x7288c8:c.instructions+=42;goto B7288c8;
case 0x7288ce:c.instructions+=41;goto B7288ce;
case 0x7288d1:c.instructions+=40;goto B7288d1;
case 0x7288d4:c.instructions+=39;goto B7288d4;
case 0x7288d6:c.instructions+=38;goto B7288d6;
case 0x7288dc:c.instructions+=37;goto B7288dc;
case 0x7288df:c.instructions+=36;goto B7288df;
case 0x7288e2:c.instructions+=35;goto B7288e2;
case 0x7288e4:c.instructions+=34;goto B7288e4;
case 0x7288ea:c.instructions+=33;goto B7288ea;
case 0x7288ed:c.instructions+=32;goto B7288ed;
case 0x7288f0:c.instructions+=31;goto B7288f0;
case 0x7288f2:c.instructions+=30;goto B7288f2;
case 0x7288f8:c.instructions+=29;goto B7288f8;
case 0x7288fb:c.instructions+=28;goto B7288fb;
case 0x7288fe:c.instructions+=27;goto B7288fe;
case 0x728900:c.instructions+=26;goto B728900;
case 0x728906:c.instructions+=25;goto B728906;
case 0x728909:c.instructions+=24;goto B728909;
case 0x72890c:c.instructions+=23;goto B72890c;
case 0x72890e:c.instructions+=22;goto B72890e;
case 0x728914:c.instructions+=21;goto B728914;
case 0x728917:c.instructions+=20;goto B728917;
case 0x72891a:c.instructions+=19;goto B72891a;
case 0x72891c:c.instructions+=18;goto B72891c;
case 0x728922:c.instructions+=17;goto B728922;
case 0x728925:c.instructions+=16;goto B728925;
case 0x728928:c.instructions+=15;goto B728928;
case 0x72892a:c.instructions+=14;goto B72892a;
case 0x728930:c.instructions+=13;goto B728930;
case 0x728933:c.instructions+=12;goto B728933;
case 0x728936:c.instructions+=11;goto B728936;
case 0x728938:c.instructions+=10;goto B728938;
case 0x72893e:c.instructions+=9;goto B72893e;
case 0x728941:c.instructions+=8;goto B728941;
case 0x728944:c.instructions+=7;goto B728944;
case 0x728946:c.instructions+=6;goto B728946;
case 0x72894c:c.instructions+=5;goto B72894c;
case 0x72894f:c.instructions+=4;goto B72894f;
case 0x728952:c.instructions+=3;goto B728952;
case 0x728954:c.instructions+=2;goto B728954;
case 0x728956:c.instructions+=1;goto B728956;
case 0x728957:goto L728957;
case 0x72895b:c.instructions+=101;goto B72895b;
case 0x72895f:c.instructions+=100;goto B72895f;
case 0x728963:c.instructions+=99;goto B728963;
case 0x728967:c.instructions+=98;goto B728967;
case 0x728969:c.instructions+=97;goto B728969;
case 0x72896f:c.instructions+=96;goto B72896f;
case 0x728971:c.instructions+=95;goto B728971;
case 0x728973:c.instructions+=94;goto B728973;
case 0x728975:c.instructions+=93;goto B728975;
case 0x728977:c.instructions+=92;goto B728977;
case 0x728979:c.instructions+=91;goto B728979;
case 0x72897b:c.instructions+=90;goto B72897b;
case 0x72897d:c.instructions+=89;goto B72897d;
case 0x72897f:c.instructions+=88;goto B72897f;
case 0x728982:c.instructions+=87;goto B728982;
case 0x728985:c.instructions+=86;goto B728985;
case 0x728988:c.instructions+=85;goto B728988;
case 0x72898e:c.instructions+=84;goto B72898e;
case 0x728990:c.instructions+=83;goto B728990;
case 0x728992:c.instructions+=82;goto B728992;
case 0x728995:c.instructions+=81;goto B728995;
case 0x728998:c.instructions+=80;goto B728998;
case 0x72899b:c.instructions+=79;goto B72899b;
case 0x7289a1:c.instructions+=78;goto B7289a1;
case 0x7289a3:c.instructions+=77;goto B7289a3;
case 0x7289a5:c.instructions+=76;goto B7289a5;
case 0x7289a8:c.instructions+=75;goto B7289a8;
case 0x7289ab:c.instructions+=74;goto B7289ab;
case 0x7289ae:c.instructions+=73;goto B7289ae;
case 0x7289b4:c.instructions+=72;goto B7289b4;
case 0x7289b6:c.instructions+=71;goto B7289b6;
case 0x7289b8:c.instructions+=70;goto B7289b8;
case 0x7289bb:c.instructions+=69;goto B7289bb;
case 0x7289be:c.instructions+=68;goto B7289be;
case 0x7289c1:c.instructions+=67;goto B7289c1;
case 0x7289c7:c.instructions+=66;goto B7289c7;
case 0x7289c9:c.instructions+=65;goto B7289c9;
case 0x7289cb:c.instructions+=64;goto B7289cb;
case 0x7289ce:c.instructions+=63;goto B7289ce;
case 0x7289d1:c.instructions+=62;goto B7289d1;
case 0x7289d4:c.instructions+=61;goto B7289d4;
case 0x7289da:c.instructions+=60;goto B7289da;
case 0x7289dc:c.instructions+=59;goto B7289dc;
case 0x7289de:c.instructions+=58;goto B7289de;
case 0x7289e1:c.instructions+=57;goto B7289e1;
case 0x7289e4:c.instructions+=56;goto B7289e4;
case 0x7289e7:c.instructions+=55;goto B7289e7;
case 0x7289ed:c.instructions+=54;goto B7289ed;
case 0x7289ef:c.instructions+=53;goto B7289ef;
case 0x7289f1:c.instructions+=52;goto B7289f1;
case 0x7289f4:c.instructions+=51;goto B7289f4;
case 0x7289f7:c.instructions+=50;goto B7289f7;
case 0x7289fa:c.instructions+=49;goto B7289fa;
case 0x728a00:c.instructions+=48;goto B728a00;
case 0x728a02:c.instructions+=47;goto B728a02;
case 0x728a04:c.instructions+=46;goto B728a04;
case 0x728a07:c.instructions+=45;goto B728a07;
case 0x728a0a:c.instructions+=44;goto B728a0a;
case 0x728a0d:c.instructions+=43;goto B728a0d;
case 0x728a13:c.instructions+=42;goto B728a13;
case 0x728a15:c.instructions+=41;goto B728a15;
case 0x728a17:c.instructions+=40;goto B728a17;
case 0x728a1a:c.instructions+=39;goto B728a1a;
case 0x728a1d:c.instructions+=38;goto B728a1d;
case 0x728a20:c.instructions+=37;goto B728a20;
case 0x728a26:c.instructions+=36;goto B728a26;
case 0x728a28:c.instructions+=35;goto B728a28;
case 0x728a2a:c.instructions+=34;goto B728a2a;
case 0x728a2d:c.instructions+=33;goto B728a2d;
case 0x728a30:c.instructions+=32;goto B728a30;
case 0x728a33:c.instructions+=31;goto B728a33;
case 0x728a39:c.instructions+=30;goto B728a39;
case 0x728a3b:c.instructions+=29;goto B728a3b;
case 0x728a3d:c.instructions+=28;goto B728a3d;
case 0x728a40:c.instructions+=27;goto B728a40;
case 0x728a43:c.instructions+=26;goto B728a43;
case 0x728a46:c.instructions+=25;goto B728a46;
case 0x728a4c:c.instructions+=24;goto B728a4c;
case 0x728a4e:c.instructions+=23;goto B728a4e;
case 0x728a50:c.instructions+=22;goto B728a50;
case 0x728a53:c.instructions+=21;goto B728a53;
case 0x728a56:c.instructions+=20;goto B728a56;
case 0x728a59:c.instructions+=19;goto B728a59;
case 0x728a5f:c.instructions+=18;goto B728a5f;
case 0x728a61:c.instructions+=17;goto B728a61;
case 0x728a63:c.instructions+=16;goto B728a63;
case 0x728a66:c.instructions+=15;goto B728a66;
case 0x728a69:c.instructions+=14;goto B728a69;
case 0x728a6c:c.instructions+=13;goto B728a6c;
case 0x728a72:c.instructions+=12;goto B728a72;
case 0x728a74:c.instructions+=11;goto B728a74;
case 0x728a76:c.instructions+=10;goto B728a76;
case 0x728a79:c.instructions+=9;goto B728a79;
case 0x728a7c:c.instructions+=8;goto B728a7c;
case 0x728a7f:c.instructions+=7;goto B728a7f;
case 0x728a85:c.instructions+=6;goto B728a85;
case 0x728a87:c.instructions+=5;goto B728a87;
case 0x728a8a:c.instructions+=4;goto B728a8a;
case 0x728a8d:c.instructions+=3;goto B728a8d;
case 0x728a90:c.instructions+=2;goto B728a90;
case 0x728a92:c.instructions+=1;goto B728a92;
case 0x728a93:goto L728a93;
case 0x728a94:c.instructions+=13;goto B728a94;
case 0x728a96:c.instructions+=12;goto B728a96;
case 0x728a99:c.instructions+=11;goto B728a99;
case 0x728a9a:c.instructions+=10;goto B728a9a;
case 0x728a9b:c.instructions+=9;goto B728a9b;
case 0x728a9d:c.instructions+=8;goto B728a9d;
case 0x728a9f:c.instructions+=7;goto B728a9f;
case 0x728aa2:c.instructions+=6;goto B728aa2;
case 0x728aa5:c.instructions+=5;goto B728aa5;
case 0x728aa6:c.instructions+=4;goto B728aa6;
case 0x728aa7:c.instructions+=3;goto B728aa7;
case 0x728aa9:c.instructions+=2;goto B728aa9;
case 0x728aaf:c.instructions+=1;goto B728aaf;
case 0x728ab5:goto L728ab5;
case 0x728ab6:goto L728ab6;
case 0x728ab9:c.instructions+=5;goto B728ab9;
case 0x728ac0:c.instructions+=4;goto B728ac0;
case 0x728ac6:c.instructions+=3;goto B728ac6;
case 0x728ac8:c.instructions+=2;goto B728ac8;
case 0x728acb:c.instructions+=1;goto B728acb;
case 0x728acd:goto L728acd;
case 0x728acf:c.instructions+=1;goto B728acf;
case 0x728ad1:goto L728ad1;
case 0x728ad3:c.instructions+=1;goto B728ad3;
case 0x728ad8:goto L728ad8;
case 0x728ad9:c.instructions+=2;goto B728ad9;
case 0x728adb:c.instructions+=1;goto B728adb;
case 0x728ae0:goto L728ae0;
case 0x728ae2:c.instructions+=3;goto B728ae2;
case 0x728ae3:c.instructions+=2;goto B728ae3;
case 0x728ae4:c.instructions+=1;goto B728ae4;
case 0x728ae7:goto L728ae7;
case 0x728aee:c.instructions+=16;goto B728aee;
case 0x728af1:c.instructions+=15;goto B728af1;
case 0x728af4:c.instructions+=14;goto B728af4;
case 0x728af7:c.instructions+=13;goto B728af7;
case 0x728afa:c.instructions+=12;goto B728afa;
case 0x728afd:c.instructions+=11;goto B728afd;
case 0x728b00:c.instructions+=10;goto B728b00;
case 0x728b03:c.instructions+=9;goto B728b03;
case 0x728b06:c.instructions+=8;goto B728b06;
case 0x728b09:c.instructions+=7;goto B728b09;
case 0x728b0c:c.instructions+=6;goto B728b0c;
case 0x728b0f:c.instructions+=5;goto B728b0f;
case 0x728b12:c.instructions+=4;goto B728b12;
case 0x728b13:c.instructions+=3;goto B728b13;
case 0x728b15:c.instructions+=2;goto B728b15;
case 0x728b1c:c.instructions+=1;goto B728b1c;
case 0x728b21:goto L728b21;
case 0x728b22:c.instructions+=1;goto B728b22;
case 0x728b24:goto L728b24;
case 0x728b26:c.instructions+=2;goto B728b26;
case 0x728b28:c.instructions+=1;goto B728b28;
case 0x728b2a:goto L728b2a;
case 0x728b2b:c.instructions+=1;goto B728b2b;
case 0x728b30:goto L728b30;
case 0x728b32:goto L728b32;
case 0x728b33:goto L728b33;
case 0x728b3a:c.instructions+=3;goto B728b3a;
case 0x728b3b:c.instructions+=2;goto B728b3b;
case 0x728b3d:c.instructions+=1;goto B728b3d;
case 0x728b43:goto L728b43;
case 0x728b44:goto L728b44;
case 0x728b45:c.instructions+=3;goto B728b45;
case 0x728b46:c.instructions+=2;goto B728b46;
case 0x728b47:c.instructions+=1;goto B728b47;
case 0x728b48:goto L728b48;
case 0x728b49:c.instructions+=12;goto B728b49;
case 0x728b4b:c.instructions+=11;goto B728b4b;
case 0x728b4c:c.instructions+=10;goto B728b4c;
case 0x728b4d:c.instructions+=9;goto B728b4d;
case 0x728b50:c.instructions+=8;goto B728b50;
case 0x728b53:c.instructions+=7;goto B728b53;
case 0x728b55:c.instructions+=6;goto B728b55;
case 0x728b56:c.instructions+=5;goto B728b56;
case 0x728b5c:c.instructions+=4;goto B728b5c;
case 0x728b62:c.instructions+=3;goto B728b62;
case 0x728b64:c.instructions+=2;goto B728b64;
case 0x728b65:c.instructions+=1;goto B728b65;
case 0x728b67:goto L728b67;
case 0x728b6a:c.instructions+=2;goto B728b6a;
case 0x728b6c:c.instructions+=1;goto B728b6c;
case 0x728b6e:goto L728b6e;
case 0x728b70:c.instructions+=2;goto B728b70;
case 0x728b76:c.instructions+=1;goto B728b76;
case 0x728b78:goto L728b78;
case 0x728b7b:c.instructions+=6;goto B728b7b;
case 0x728b7e:c.instructions+=5;goto B728b7e;
case 0x728b81:c.instructions+=4;goto B728b81;
case 0x728b84:c.instructions+=3;goto B728b84;
case 0x728b85:c.instructions+=2;goto B728b85;
case 0x728b8b:c.instructions+=1;goto B728b8b;
case 0x728b8d:goto L728b8d;
case 0x728b8f:c.instructions+=2;goto B728b8f;
case 0x728b95:c.instructions+=1;goto B728b95;
case 0x728b97:goto L728b97;
case 0x728b9a:goto L728b9a;
case 0x728b9d:c.instructions+=6;goto B728b9d;
case 0x728b9f:c.instructions+=5;goto B728b9f;
case 0x728ba6:c.instructions+=4;goto B728ba6;
case 0x728ba7:c.instructions+=3;goto B728ba7;
case 0x728baa:c.instructions+=2;goto B728baa;
case 0x728bac:c.instructions+=1;goto B728bac;
case 0x728bae:goto L728bae;
case 0x728bb0:c.instructions+=1;goto B728bb0;
case 0x728bb5:goto L728bb5;
case 0x728bba:c.instructions+=5;goto B728bba;
case 0x728bbd:c.instructions+=4;goto B728bbd;
case 0x728bc0:c.instructions+=3;goto B728bc0;
case 0x728bc6:c.instructions+=2;goto B728bc6;
case 0x728bc7:c.instructions+=1;goto B728bc7;
case 0x728bcd:goto L728bcd;
case 0x728bd2:c.instructions+=4;goto B728bd2;
case 0x728bd4:c.instructions+=3;goto B728bd4;
case 0x728bd7:c.instructions+=2;goto B728bd7;
case 0x728bdb:c.instructions+=1;goto B728bdb;
case 0x728bdd:goto L728bdd;
case 0x728be0:c.instructions+=9;goto B728be0;
case 0x728be3:c.instructions+=8;goto B728be3;
case 0x728be6:c.instructions+=7;goto B728be6;
case 0x728be9:c.instructions+=6;goto B728be9;
case 0x728beb:c.instructions+=5;goto B728beb;
case 0x728bed:c.instructions+=4;goto B728bed;
case 0x728bef:c.instructions+=3;goto B728bef;
case 0x728bf1:c.instructions+=2;goto B728bf1;
case 0x728bf4:c.instructions+=1;goto B728bf4;
case 0x728bf6:goto L728bf6;
case 0x728bfb:c.instructions+=9;goto B728bfb;
case 0x728bfd:c.instructions+=8;goto B728bfd;
case 0x728c00:c.instructions+=7;goto B728c00;
case 0x728c06:c.instructions+=6;goto B728c06;
case 0x728c07:c.instructions+=5;goto B728c07;
case 0x728c08:c.instructions+=4;goto B728c08;
case 0x728c0c:c.instructions+=3;goto B728c0c;
case 0x728c0e:c.instructions+=2;goto B728c0e;
case 0x728c11:c.instructions+=1;goto B728c11;
case 0x728c16:goto L728c16;
case 0x728c19:c.instructions+=4;goto B728c19;
case 0x728c1c:c.instructions+=3;goto B728c1c;
case 0x728c1f:c.instructions+=2;goto B728c1f;
case 0x728c22:c.instructions+=1;goto B728c22;
case 0x728c24:goto L728c24;
case 0x728c2a:c.instructions+=5;goto B728c2a;
case 0x728c2c:c.instructions+=4;goto B728c2c;
case 0x728c2e:c.instructions+=3;goto B728c2e;
case 0x728c30:c.instructions+=2;goto B728c30;
case 0x728c33:c.instructions+=1;goto B728c33;
case 0x728c35:goto L728c35;
case 0x728c3a:c.instructions+=7;goto B728c3a;
case 0x728c3c:c.instructions+=6;goto B728c3c;
case 0x728c3f:c.instructions+=5;goto B728c3f;
case 0x728c45:c.instructions+=4;goto B728c45;
case 0x728c46:c.instructions+=3;goto B728c46;
case 0x728c49:c.instructions+=2;goto B728c49;
case 0x728c4b:c.instructions+=1;goto B728c4b;
case 0x728c51:goto L728c51;
case 0x728c54:goto L728c54;
case 0x728c55:c.instructions+=2;goto B728c55;
case 0x728c5b:c.instructions+=1;goto B728c5b;
case 0x728c61:goto L728c61;
case 0x728c65:c.instructions+=2;goto B728c65;
case 0x728c6c:c.instructions+=1;goto B728c6c;
case 0x728c6e:goto L728c6e;
case 0x728c73:c.instructions+=2;goto B728c73;
case 0x728c76:c.instructions+=1;goto B728c76;
case 0x728c78:goto L728c78;
case 0x728c7a:c.instructions+=5;goto B728c7a;
case 0x728c7d:c.instructions+=4;goto B728c7d;
case 0x728c7f:c.instructions+=3;goto B728c7f;
case 0x728c81:c.instructions+=2;goto B728c81;
case 0x728c84:c.instructions+=1;goto B728c84;
case 0x728c86:goto L728c86;
case 0x728c89:c.instructions+=8;goto B728c89;
case 0x728c8b:c.instructions+=7;goto B728c8b;
case 0x728c91:c.instructions+=6;goto B728c91;
case 0x728c92:c.instructions+=5;goto B728c92;
case 0x728c93:c.instructions+=4;goto B728c93;
case 0x728c97:c.instructions+=3;goto B728c97;
case 0x728c9a:c.instructions+=2;goto B728c9a;
case 0x728c9d:c.instructions+=1;goto B728c9d;
case 0x728ca2:goto L728ca2;
case 0x728ca4:c.instructions+=2;goto B728ca4;
case 0x728ca7:c.instructions+=1;goto B728ca7;
case 0x728ca9:goto L728ca9;
case 0x728caf:c.instructions+=5;goto B728caf;
case 0x728cb1:c.instructions+=4;goto B728cb1;
case 0x728cb3:c.instructions+=3;goto B728cb3;
case 0x728cb5:c.instructions+=2;goto B728cb5;
case 0x728cb8:c.instructions+=1;goto B728cb8;
case 0x728cba:goto L728cba;
case 0x728cbd:c.instructions+=6;goto B728cbd;
case 0x728cbf:c.instructions+=5;goto B728cbf;
case 0x728cc5:c.instructions+=4;goto B728cc5;
case 0x728cc6:c.instructions+=3;goto B728cc6;
case 0x728cc9:c.instructions+=2;goto B728cc9;
case 0x728ccb:c.instructions+=1;goto B728ccb;
case 0x728cd1:goto L728cd1;
case 0x728cd4:goto L728cd4;
case 0x728cdb:c.instructions+=4;goto B728cdb;
case 0x728cde:c.instructions+=3;goto B728cde;
case 0x728ce1:c.instructions+=2;goto B728ce1;
case 0x728ce4:c.instructions+=1;goto B728ce4;
case 0x728ce6:goto L728ce6;
case 0x728ce8:c.instructions+=2;goto B728ce8;
case 0x728ce9:c.instructions+=1;goto B728ce9;
case 0x728cea:goto L728cea;
case 0x728ceb:c.instructions+=3;goto B728ceb;
case 0x728cec:c.instructions+=2;goto B728cec;
case 0x728ced:c.instructions+=1;goto B728ced;
case 0x728cee:goto L728cee;
case 0x728cf3:goto L728cf3;
case 0x728cf8:goto L728cf8;
case 0x728cf9:c.instructions+=3;goto B728cf9;
case 0x728cfa:c.instructions+=2;goto B728cfa;
case 0x728cfb:c.instructions+=1;goto B728cfb;
case 0x728d00:goto L728d00;
case 0x728d05:goto L728d05;
case 0x728d0a:c.instructions+=3;goto B728d0a;
case 0x728d0c:c.instructions+=2;goto B728d0c;
case 0x728d0e:c.instructions+=1;goto B728d0e;
case 0x728d10:goto L728d10;
case 0x728d11:c.instructions+=1;goto B728d11;
case 0x728d16:goto L728d16;
case 0x728d17:c.instructions+=1;goto B728d17;
case 0x728d1d:goto L728d1d;
case 0x728d22:c.instructions+=2;goto B728d22;
case 0x728d24:c.instructions+=1;goto B728d24;
case 0x728d26:goto L728d26;
case 0x728d27:c.instructions+=1;goto B728d27;
case 0x728d2c:goto L728d2c;
case 0x728d2d:c.instructions+=1;goto B728d2d;
case 0x728d33:goto L728d33;
case 0x728d38:goto L728d38;
case 0x728d3a:c.instructions+=2;goto B728d3a;
case 0x728d3c:c.instructions+=1;goto B728d3c;
case 0x728d3e:goto L728d3e;
case 0x728d3f:c.instructions+=1;goto B728d3f;
case 0x728d44:goto L728d44;
case 0x728d45:c.instructions+=1;goto B728d45;
case 0x728d47:goto L728d47;
case 0x728d4a:c.instructions+=2;goto B728d4a;
case 0x728d50:c.instructions+=1;goto B728d50;
case 0x728d52:goto L728d52;
case 0x728d54:c.instructions+=2;goto B728d54;
case 0x728d5a:c.instructions+=1;goto B728d5a;
case 0x728d5c:goto L728d5c;
case 0x728d63:c.instructions+=3;goto B728d63;
case 0x728d65:c.instructions+=2;goto B728d65;
case 0x728d67:c.instructions+=1;goto B728d67;
case 0x728d69:goto L728d69;
case 0x728d6a:c.instructions+=1;goto B728d6a;
case 0x728d6f:goto L728d6f;
case 0x728d70:c.instructions+=1;goto B728d70;
case 0x728d72:goto L728d72;
case 0x728d79:c.instructions+=3;goto B728d79;
case 0x728d7a:c.instructions+=2;goto B728d7a;
case 0x728d7c:c.instructions+=1;goto B728d7c;
case 0x728d7e:goto L728d7e;
case 0x728d84:c.instructions+=4;goto B728d84;
case 0x728d85:c.instructions+=3;goto B728d85;
case 0x728d86:c.instructions+=2;goto B728d86;
case 0x728d87:c.instructions+=1;goto B728d87;
case 0x728d89:goto L728d89;
case 0x728d8f:goto L728d8f;
case 0x728d95:c.instructions+=3;goto B728d95;
case 0x728d96:c.instructions+=2;goto B728d96;
case 0x728d99:c.instructions+=1;goto B728d99;
case 0x728d9e:goto L728d9e;
case 0x728d9f:c.instructions+=1;goto B728d9f;
case 0x728da4:goto L728da4;
case 0x728dab:c.instructions+=3;goto B728dab;
case 0x728db5:c.instructions+=2;goto B728db5;
case 0x728dbf:c.instructions+=1;goto B728dbf;
case 0x728dc1:goto L728dc1;
case 0x728dcb:goto L728dcb;
case 0x728dd2:c.instructions+=2;goto B728dd2;
case 0x728ddb:c.instructions+=1;goto B728ddb;
case 0x728ddd:goto L728ddd;
case 0x728de5:c.instructions+=2;goto B728de5;
case 0x728de8:c.instructions+=1;goto B728de8;
case 0x728dee:goto L728dee;
case 0x728def:goto L728def;
case 0x728df3:c.instructions+=2;goto B728df3;
case 0x728df8:c.instructions+=1;goto B728df8;
case 0x728df9:goto L728df9;
case 0x728dfa:c.instructions+=24;goto B728dfa;
case 0x728dfc:c.instructions+=23;goto B728dfc;
case 0x728dff:c.instructions+=22;goto B728dff;
case 0x728e02:c.instructions+=21;goto B728e02;
case 0x728e03:c.instructions+=20;goto B728e03;
case 0x728e04:c.instructions+=19;goto B728e04;
case 0x728e07:c.instructions+=18;goto B728e07;
case 0x728e0a:c.instructions+=17;goto B728e0a;
case 0x728e10:c.instructions+=16;goto B728e10;
case 0x728e12:c.instructions+=15;goto B728e12;
case 0x728e14:c.instructions+=14;goto B728e14;
case 0x728e15:c.instructions+=13;goto B728e15;
case 0x728e16:c.instructions+=12;goto B728e16;
case 0x728e19:c.instructions+=11;goto B728e19;
case 0x728e1b:c.instructions+=10;goto B728e1b;
case 0x728e1e:c.instructions+=9;goto B728e1e;
case 0x728e21:c.instructions+=8;goto B728e21;
case 0x728e24:c.instructions+=7;goto B728e24;
case 0x728e27:c.instructions+=6;goto B728e27;
case 0x728e2a:c.instructions+=5;goto B728e2a;
case 0x728e2d:c.instructions+=4;goto B728e2d;
case 0x728e30:c.instructions+=3;goto B728e30;
case 0x728e33:c.instructions+=2;goto B728e33;
case 0x728e36:c.instructions+=1;goto B728e36;
case 0x728e38:goto L728e38;
case 0x728e3a:c.instructions+=1;goto B728e3a;
case 0x728e3c:goto L728e3c;
case 0x728e3f:c.instructions+=1;goto B728e3f;
case 0x728e41:goto L728e41;
case 0x728e43:c.instructions+=2;goto B728e43;
case 0x728e46:c.instructions+=1;goto B728e46;
case 0x728e48:goto L728e48;
case 0x728e4b:c.instructions+=1;goto B728e4b;
case 0x728e4d:goto L728e4d;
case 0x728e4f:c.instructions+=1;goto B728e4f;
case 0x728e51:goto L728e51;
case 0x728e54:c.instructions+=1;goto B728e54;
case 0x728e56:goto L728e56;
case 0x728e58:c.instructions+=1;goto B728e58;
case 0x728e5a:goto L728e5a;
case 0x728e5d:c.instructions+=1;goto B728e5d;
case 0x728e5f:goto L728e5f;
case 0x728e61:c.instructions+=1;goto B728e61;
case 0x728e63:goto L728e63;
case 0x728e66:c.instructions+=1;goto B728e66;
case 0x728e68:goto L728e68;
case 0x728e6a:c.instructions+=1;goto B728e6a;
case 0x728e6c:goto L728e6c;
case 0x728e6f:c.instructions+=1;goto B728e6f;
case 0x728e71:goto L728e71;
case 0x728e73:goto L728e73;
case 0x728e74:goto L728e74;
case 0x728e77:c.instructions+=1;goto B728e77;
case 0x728e79:goto L728e79;
case 0x728e7c:c.instructions+=1;goto B728e7c;
case 0x728e7e:goto L728e7e;
case 0x728e80:c.instructions+=1;goto B728e80;
case 0x728e82:goto L728e82;
case 0x728e85:c.instructions+=1;goto B728e85;
case 0x728e87:goto L728e87;
case 0x728e89:c.instructions+=1;goto B728e89;
case 0x728e8a:goto L728e8a;
case 0x728e8d:c.instructions+=4;goto B728e8d;
case 0x728e8f:c.instructions+=3;goto B728e8f;
case 0x728e92:c.instructions+=2;goto B728e92;
case 0x728e98:c.instructions+=1;goto B728e98;
case 0x728e9e:goto L728e9e;
case 0x728ea4:c.instructions+=1;goto B728ea4;
case 0x728ea9:goto L728ea9;
case 0x728eac:c.instructions+=29;goto B728eac;
case 0x728eaf:c.instructions+=28;goto B728eaf;
case 0x728eb2:c.instructions+=27;goto B728eb2;
case 0x728eb5:c.instructions+=26;goto B728eb5;
case 0x728eb8:c.instructions+=25;goto B728eb8;
case 0x728ebb:c.instructions+=24;goto B728ebb;
case 0x728ebe:c.instructions+=23;goto B728ebe;
case 0x728ec1:c.instructions+=22;goto B728ec1;
case 0x728ec4:c.instructions+=21;goto B728ec4;
case 0x728ec7:c.instructions+=20;goto B728ec7;
case 0x728eca:c.instructions+=19;goto B728eca;
case 0x728ecd:c.instructions+=18;goto B728ecd;
case 0x728ed0:c.instructions+=17;goto B728ed0;
case 0x728ed3:c.instructions+=16;goto B728ed3;
case 0x728ed6:c.instructions+=15;goto B728ed6;
case 0x728ed9:c.instructions+=14;goto B728ed9;
case 0x728edc:c.instructions+=13;goto B728edc;
case 0x728edf:c.instructions+=12;goto B728edf;
case 0x728ee6:c.instructions+=11;goto B728ee6;
case 0x728ee9:c.instructions+=10;goto B728ee9;
case 0x728eec:c.instructions+=9;goto B728eec;
case 0x728eef:c.instructions+=8;goto B728eef;
case 0x728ef2:c.instructions+=7;goto B728ef2;
case 0x728ef8:c.instructions+=6;goto B728ef8;
case 0x728efb:c.instructions+=5;goto B728efb;
case 0x728efe:c.instructions+=4;goto B728efe;
case 0x728f01:c.instructions+=3;goto B728f01;
case 0x728f02:c.instructions+=2;goto B728f02;
case 0x728f05:c.instructions+=1;goto B728f05;
case 0x728f0b:goto L728f0b;
case 0x728f0e:c.instructions+=5;goto B728f0e;
case 0x728f11:c.instructions+=4;goto B728f11;
case 0x728f14:c.instructions+=3;goto B728f14;
case 0x728f17:c.instructions+=2;goto B728f17;
case 0x728f18:c.instructions+=1;goto B728f18;
case 0x728f1d:goto L728f1d;
case 0x728f20:goto L728f20;
case 0x728f23:c.instructions+=1;goto B728f23;
case 0x728f25:goto L728f25;
case 0x728f28:c.instructions+=1;goto B728f28;
case 0x728f2a:goto L728f2a;
case 0x728f2e:goto L728f2e;
case 0x728f33:c.instructions+=1;goto B728f33;
case 0x728f38:goto L728f38;
case 0x728f3b:c.instructions+=10;goto B728f3b;
case 0x728f3e:c.instructions+=9;goto B728f3e;
case 0x728f41:c.instructions+=8;goto B728f41;
case 0x728f44:c.instructions+=7;goto B728f44;
case 0x728f47:c.instructions+=6;goto B728f47;
case 0x728f4a:c.instructions+=5;goto B728f4a;
case 0x728f50:c.instructions+=4;goto B728f50;
case 0x728f53:c.instructions+=3;goto B728f53;
case 0x728f56:c.instructions+=2;goto B728f56;
case 0x728f59:c.instructions+=1;goto B728f59;
case 0x728f5e:goto L728f5e;
case 0x728f61:c.instructions+=3;goto B728f61;
case 0x728f64:c.instructions+=2;goto B728f64;
case 0x728f65:c.instructions+=1;goto B728f65;
case 0x728f6a:goto L728f6a;
case 0x728f6d:goto L728f6d;
case 0x728f6e:c.instructions+=5;goto B728f6e;
case 0x728f71:c.instructions+=4;goto B728f71;
case 0x728f72:c.instructions+=3;goto B728f72;
case 0x728f73:c.instructions+=2;goto B728f73;
case 0x728f74:c.instructions+=1;goto B728f74;
case 0x728f75:goto L728f75;
case 0x728f79:c.instructions+=10;goto B728f79;
case 0x728f7b:c.instructions+=9;goto B728f7b;
case 0x728f7e:c.instructions+=8;goto B728f7e;
case 0x728f84:c.instructions+=7;goto B728f84;
case 0x728f86:c.instructions+=6;goto B728f86;
case 0x728f89:c.instructions+=5;goto B728f89;
case 0x728f8b:c.instructions+=4;goto B728f8b;
case 0x728f8e:c.instructions+=3;goto B728f8e;
case 0x728f94:c.instructions+=2;goto B728f94;
case 0x728f95:c.instructions+=1;goto B728f95;
case 0x728f97:goto L728f97;
case 0x728f98:goto L728f98;
case 0x728f9b:c.instructions+=6;goto B728f9b;
case 0x728f9e:c.instructions+=5;goto B728f9e;
case 0x728fa1:c.instructions+=4;goto B728fa1;
case 0x728fa4:c.instructions+=3;goto B728fa4;
case 0x728fa5:c.instructions+=2;goto B728fa5;
case 0x728fab:c.instructions+=1;goto B728fab;
case 0x728fad:goto L728fad;
case 0x728fae:goto L728fae;
case 0x728fb4:c.instructions+=1;goto B728fb4;
case 0x728fb6:goto L728fb6;
case 0x728fb9:goto L728fb9;
case 0x728fbc:c.instructions+=6;goto B728fbc;
case 0x728fbe:c.instructions+=5;goto B728fbe;
case 0x728fc5:c.instructions+=4;goto B728fc5;
case 0x728fc6:c.instructions+=3;goto B728fc6;
case 0x728fc9:c.instructions+=2;goto B728fc9;
case 0x728fcb:c.instructions+=1;goto B728fcb;
case 0x728fcd:goto L728fcd;
case 0x728fd0:c.instructions+=2;goto B728fd0;
case 0x728fd1:c.instructions+=1;goto B728fd1;
case 0x728fd2:goto L728fd2;
case 0x728fd3:c.instructions+=7;goto B728fd3;
case 0x728fd7:c.instructions+=6;goto B728fd7;
case 0x728fda:c.instructions+=5;goto B728fda;
case 0x728fe0:c.instructions+=4;goto B728fe0;
case 0x728fe2:c.instructions+=3;goto B728fe2;
case 0x728fe8:c.instructions+=2;goto B728fe8;
case 0x728fe9:c.instructions+=1;goto B728fe9;
case 0x728feb:goto L728feb;
case 0x728fee:c.instructions+=7;goto B728fee;
case 0x728ff1:c.instructions+=6;goto B728ff1;
case 0x728ff6:c.instructions+=5;goto B728ff6;
case 0x728ff9:c.instructions+=4;goto B728ff9;
case 0x728ffc:c.instructions+=3;goto B728ffc;
case 0x728ffd:c.instructions+=2;goto B728ffd;
case 0x728fff:c.instructions+=1;goto B728fff;
default:missing_instruction(c.pc);}
B728000:L728000:{c.instructions+=1;NFSU2_TR(0x728000);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728007;}}
}
B728002:L728002:{c.instructions+=2;NFSU2_TR(0x728002);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x0ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B728005:{NFSU2_TR(0x728005);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x727fe1u,727);}
}
B728007:L728007:{c.instructions+=5;NFSU2_TR(0x728007);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B728009:{NFSU2_TR(0x728009);
w4(R+24,u32(s32(s16(m2(0x8b460c)))));
}
B728010:{NFSU2_TR(0x728010);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B728012:{NFSU2_TR(0x728012);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B728014:{NFSU2_TR(0x728014);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x727fe6u,727);}
}
B728016:L728016:{c.instructions+=3;NFSU2_TR(0x728016);
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
B728018:{NFSU2_TR(0x728018);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B728019:{NFSU2_TR(0x728019);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72801a:L72801a:{c.instructions+=3;NFSU2_TR(0x72801a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72801b:{NFSU2_TR(0x72801b);
__builtin_memmove((R+24),(R+4),4);
}
B72801d:{NFSU2_TR(0x72801d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728022ull));
TAIL_STATIC(0x72b0bdu,72b);
}
B728022:L728022:{c.instructions+=2;NFSU2_TR(0x728022);
__builtin_memmove((R+4),(R+24),4);
}
B728024:{NFSU2_TR(0x728024);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728029ull));
TAIL_STATIC(0x72ad3cu,72a);
}
B728029:L728029:{c.instructions+=3;NFSU2_TR(0x728029);
__builtin_memmove((R+0),(R+24),4);
}
B72802b:{NFSU2_TR(0x72802b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72802c:{NFSU2_TR(0x72802c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72802d:L72802d:{c.instructions+=13;NFSU2_TR(0x72802d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72802e:{NFSU2_TR(0x72802e);
__builtin_memmove((R+20),(R+16),4);
}
B728030:{NFSU2_TR(0x728030);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B728033:{NFSU2_TR(0x728033);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728034:{NFSU2_TR(0x728034);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728035:{NFSU2_TR(0x728035);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B728038:{NFSU2_TR(0x728038);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72803b:{NFSU2_TR(0x72803b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72803e:{NFSU2_TR(0x72803e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72803f:{NFSU2_TR(0x72803f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B728041:{NFSU2_TR(0x728041);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B728043:{NFSU2_TR(0x728043);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728046:{NFSU2_TR(0x728046);
if(r1(R+518)){{goto L72805c;}}
}
B728048:L728048:{c.instructions+=5;NFSU2_TR(0x728048);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728049:{NFSU2_TR(0x728049);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x35ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72804d:{NFSU2_TR(0x72804d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72804e:{NFSU2_TR(0x72804e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B728051:{NFSU2_TR(0x728051);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728056ull));
TAIL_STATIC(0x7237efu,723);
}
B728056:L728056:{c.instructions+=2;NFSU2_TR(0x728056);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B728059:{NFSU2_TR(0x728059);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72805c:L72805c:{c.instructions+=2;NFSU2_TR(0x72805c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B72805f:{NFSU2_TR(0x72805f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7281af;}}
}
B728065:L728065:{c.instructions+=4;NFSU2_TR(0x728065);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728068:{NFSU2_TR(0x728068);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72806b:{NFSU2_TR(0x72806b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B72806d:{NFSU2_TR(0x72806d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7280e1;}}
}
B72806f:L72806f:{c.instructions+=7;NFSU2_TR(0x72806f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B728072:{NFSU2_TR(0x728072);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728073:{NFSU2_TR(0x728073);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x35ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B728077:{NFSU2_TR(0x728077);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728078:{NFSU2_TR(0x728078);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728079:{NFSU2_TR(0x728079);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72807c:{NFSU2_TR(0x72807c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728081ull));
TAIL_STATIC(0x723699u,723);
}
B728081:L728081:{c.instructions+=4;NFSU2_TR(0x728081);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B728084:{NFSU2_TR(0x728084);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B728086:{NFSU2_TR(0x728086);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728089:{NFSU2_TR(0x728089);
if(r1(R+518)){{goto L7280bb;}}
}
B72808b:L72808b:{c.instructions+=2;NFSU2_TR(0x72808b);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72808f:{NFSU2_TR(0x72808f);
if(r1(R+518)){{goto L728097;}}
}
B728091:L728091:{c.instructions+=2;NFSU2_TR(0x728091);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x2ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B728095:{NFSU2_TR(0x728095);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7280b5;}}
}
B728097:L728097:{c.instructions+=2;NFSU2_TR(0x728097);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72809b:{NFSU2_TR(0x72809b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7280a4;}}
}
B72809d:L72809d:{c.instructions+=2;NFSU2_TR(0x72809d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B72809f:{NFSU2_TR(0x72809f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7280a4ull));
TAIL_STATIC(0x72ad3cu,72a);
}
B7280a4:L7280a4:{c.instructions+=5;NFSU2_TR(0x7280a4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B7280a6:{NFSU2_TR(0x7280a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7280a8:{NFSU2_TR(0x7280a8);
u8 U[4];
w4(U+0,u32(0x7fffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7280ad:{NFSU2_TR(0x7280ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7280b0:{NFSU2_TR(0x7280b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7280b5ull));
TAIL_STATIC(0x72acf0u,72a);
}
B7280b5:L7280b5:{c.instructions+=2;NFSU2_TR(0x7280b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7280b9:{NFSU2_TR(0x7280b9);
{goto L7280e1;}
}
B7280bb:L7280bb:{c.instructions+=2;NFSU2_TR(0x7280bb);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7280bf:{NFSU2_TR(0x7280bf);
if(r1(R+518)){{goto L7280db;}}
}
B7280c1:L7280c1:{c.instructions+=9;NFSU2_TR(0x7280c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7280c4:{NFSU2_TR(0x7280c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7280c7:{NFSU2_TR(0x7280c7);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B7280c9:{NFSU2_TR(0x7280c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7280cc:{NFSU2_TR(0x7280cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7280cd:{NFSU2_TR(0x7280cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7280d0:{NFSU2_TR(0x7280d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7280d3:{NFSU2_TR(0x7280d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7280d4:{NFSU2_TR(0x7280d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7280d9ull));
TAIL_STATIC(0x727030u,727);
}
B7280d9:L7280d9:{c.instructions+=2;NFSU2_TR(0x7280d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7280da:{NFSU2_TR(0x7280da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7280db:L7280db:{c.instructions+=2;NFSU2_TR(0x7280db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7280de:{NFSU2_TR(0x7280de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7280e1:L7280e1:{c.instructions+=8;NFSU2_TR(0x7280e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7280e4:{NFSU2_TR(0x7280e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B7280e6:{NFSU2_TR(0x7280e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7280e9:{NFSU2_TR(0x7280e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7280ec:{NFSU2_TR(0x7280ec);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B7280ee:{NFSU2_TR(0x7280ee);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B7280f0:{NFSU2_TR(0x7280f0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7280f2:{NFSU2_TR(0x7280f2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7280f6;}}
}
B7280f4:L7280f4:{c.instructions+=1;NFSU2_TR(0x7280f4);
__builtin_memmove((R+28),(R+4),4);
}
B7280f6:L7280f6:{c.instructions+=5;NFSU2_TR(0x7280f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B7280f9:{NFSU2_TR(0x7280f9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B7280fb:{NFSU2_TR(0x7280fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7280fd:{NFSU2_TR(0x7280fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728100:{NFSU2_TR(0x728100);
if(r1(R+518)){{goto L728181;}}
}
B728102:L728102:{c.instructions+=2;NFSU2_TR(0x728102);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B728106:{NFSU2_TR(0x728106);
if(r1(R+518)){{goto L728130;}}
}
B728108:L728108:{c.instructions+=2;NFSU2_TR(0x728108);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x2ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72810c:{NFSU2_TR(0x72810c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L728156;}}
}
B72810e:L72810e:{c.instructions+=11;NFSU2_TR(0x72810e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B728111:{NFSU2_TR(0x728111);
__builtin_memmove((R+0),(R+28),4);
}
B728113:{NFSU2_TR(0x728113);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B728116:{NFSU2_TR(0x728116);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728117:{NFSU2_TR(0x728117);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B72811b:{NFSU2_TR(0x72811b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72811e:{NFSU2_TR(0x72811e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72811f:{NFSU2_TR(0x72811f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728122:{NFSU2_TR(0x728122);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B728125:{NFSU2_TR(0x728125);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728126:{NFSU2_TR(0x728126);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72812bull));
TAIL_STATIC(0x71feccu,71f);
}
B72812b:L72812b:{c.instructions+=2;NFSU2_TR(0x72812b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B72812e:{NFSU2_TR(0x72812e);
{goto L728181;}
}
B728130:L728130:{c.instructions+=2;NFSU2_TR(0x728130);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B728134:{NFSU2_TR(0x728134);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728156;}}
}
B728136:L728136:{c.instructions+=6;NFSU2_TR(0x728136);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B728139:{NFSU2_TR(0x728139);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B72813d:{NFSU2_TR(0x72813d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B72813f:{NFSU2_TR(0x72813f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B728142:{NFSU2_TR(0x728142);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B728144:{NFSU2_TR(0x728144);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L728156;}}
}
B728146:L728146:{c.instructions+=6;NFSU2_TR(0x728146);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728148:{NFSU2_TR(0x728148);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728149:{NFSU2_TR(0x728149);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72814a:{NFSU2_TR(0x72814a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B72814d:{NFSU2_TR(0x72814d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72814e:{NFSU2_TR(0x72814e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728153ull));
TAIL_STATIC(0x72c2c2u,72c);
}
B728153:L728153:{c.instructions+=1;NFSU2_TR(0x728153);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B728156:L728156:{c.instructions+=6;NFSU2_TR(0x728156);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72815a:{NFSU2_TR(0x72815a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72815d:{NFSU2_TR(0x72815d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B728160:{NFSU2_TR(0x728160);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B728163:{NFSU2_TR(0x728163);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728166:{NFSU2_TR(0x728166);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728175;}}
}
B728168:L728168:{c.instructions+=4;NFSU2_TR(0x728168);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B72816c:{NFSU2_TR(0x72816c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72816f:{NFSU2_TR(0x72816f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B728172:{NFSU2_TR(0x728172);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728175:L728175:{c.instructions+=5;NFSU2_TR(0x728175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B728177:{NFSU2_TR(0x728177);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728178:{NFSU2_TR(0x728178);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72817b:{NFSU2_TR(0x72817b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72817c:{NFSU2_TR(0x72817c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728181ull));
TAIL_STATIC(0x72ad58u,72a);
}
B728181:L728181:{c.instructions+=7;NFSU2_TR(0x728181);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B728185:{NFSU2_TR(0x728185);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B728188:{NFSU2_TR(0x728188);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72818c:{NFSU2_TR(0x72818c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w2(U+0,u16(u32(r2(U+0))+u32(r2(R+28))));
s2(u32(r4(R+0)),r2(U+0));
}
B72818f:{NFSU2_TR(0x72818f);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B728193:{NFSU2_TR(0x728193);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B728197:{NFSU2_TR(0x728197);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7281a3;}}
}
B728199:L728199:{c.instructions+=2;NFSU2_TR(0x728199);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B72819e:{NFSU2_TR(0x72819e);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B7281a3:L7281a3:{c.instructions+=3;NFSU2_TR(0x7281a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7281a6:{NFSU2_TR(0x7281a6);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B7281a9:{NFSU2_TR(0x7281a9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x728065u);}goto L728065;}}
}
B7281af:L7281af:{c.instructions+=6;NFSU2_TR(0x7281af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7281b2:{NFSU2_TR(0x7281b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7281b3:{NFSU2_TR(0x7281b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7281b4:{NFSU2_TR(0x7281b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7281b5:{NFSU2_TR(0x7281b5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7281b6:{NFSU2_TR(0x7281b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7281b7:L7281b7:{c.instructions+=5;NFSU2_TR(0x7281b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7281b8:{NFSU2_TR(0x7281b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7281bc:{NFSU2_TR(0x7281bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7281bf:{NFSU2_TR(0x7281bf);
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
B7281c1:{NFSU2_TR(0x7281c1);
if(r1(R+518)){{goto L72820a;}}
}
B7281c3:L7281c3:{c.instructions+=4;NFSU2_TR(0x7281c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7281c6:{NFSU2_TR(0x7281c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7281c9:{NFSU2_TR(0x7281c9);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7281cd:{NFSU2_TR(0x7281cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72820a;}}
}
B7281cf:L7281cf:{c.instructions+=4;NFSU2_TR(0x7281cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7281d0:{NFSU2_TR(0x7281d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B7281d2:{NFSU2_TR(0x7281d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7281d4:{NFSU2_TR(0x7281d4);
if(r1(R+518)){{goto L7281e4;}}
}
B7281d6:L7281d6:{c.instructions+=2;NFSU2_TR(0x7281d6);
__builtin_memmove((R+4),(R+28),4);
}
B7281d8:{NFSU2_TR(0x7281d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7281ddull));
TAIL_STATIC(0x72b0d6u,72b);
}
B7281dd:L7281dd:{c.instructions+=2;NFSU2_TR(0x7281dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7281de:{NFSU2_TR(0x7281de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7281e3ull));
TAIL_STATIC(0x72aceau,72a);
}
B7281e3:L7281e3:{c.instructions+=1;NFSU2_TR(0x7281e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7281e4:L7281e4:{c.instructions+=5;NFSU2_TR(0x7281e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7281e7:{NFSU2_TR(0x7281e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7281ea:{NFSU2_TR(0x7281ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7281ec:{NFSU2_TR(0x7281ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7281ed:{NFSU2_TR(0x7281ed);
if(r1(R+518)){{goto L7281fd;}}
}
B7281ef:L7281ef:{c.instructions+=2;NFSU2_TR(0x7281ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7281f0:{NFSU2_TR(0x7281f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7281f5ull));
TAIL_STATIC(0x724894u,724);
}
B7281f5:L7281f5:{c.instructions+=3;NFSU2_TR(0x7281f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7281f8:{NFSU2_TR(0x7281f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7281fc:{NFSU2_TR(0x7281fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7281fd:L7281fd:{c.instructions+=2;NFSU2_TR(0x7281fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B728200:{NFSU2_TR(0x728200);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728205ull));
TAIL_STATIC(0x724894u,724);
}
B728205:L728205:{c.instructions+=2;NFSU2_TR(0x728205);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B728209:{NFSU2_TR(0x728209);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72820a:L72820a:{c.instructions+=2;NFSU2_TR(0x72820a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72820b:{NFSU2_TR(0x72820b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72820c:L72820c:{c.instructions+=8;NFSU2_TR(0x72820c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72820d:{NFSU2_TR(0x72820d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72820e:{NFSU2_TR(0x72820e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72820f:{NFSU2_TR(0x72820f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B728213:{NFSU2_TR(0x728213);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728215:{NFSU2_TR(0x728215);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B728216:{NFSU2_TR(0x728216);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B728219:{NFSU2_TR(0x728219);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72825c;}}
}
B72821b:L72821b:{c.instructions+=4;NFSU2_TR(0x72821b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72821f:{NFSU2_TR(0x72821f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B728221:{NFSU2_TR(0x728221);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B728224:{NFSU2_TR(0x728224);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72824f;}}
}
B728226:L728226:{c.instructions+=2;NFSU2_TR(0x728226);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728228:{NFSU2_TR(0x728228);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72822dull));
TAIL_STATIC(0x724792u,724);
}
B72822d:L72822d:{c.instructions+=4;NFSU2_TR(0x72822d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728230:{NFSU2_TR(0x728230);
__builtin_memmove(gp(0x8b47e0),(R+0),4);
}
B728235:{NFSU2_TR(0x728235);
u8 U[4];
w4(U+0,u32(0x1d8ull));
s4(u32(r4(R+16)),r4(U+0));
}
B72823c:{NFSU2_TR(0x72823c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728241ull));
TAIL_STATIC(0x72ace4u,72a);
}
B728241:L728241:{c.instructions+=3;NFSU2_TR(0x728241);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B728243:{NFSU2_TR(0x728243);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B728244:{NFSU2_TR(0x728244);
if(r1(R+518)){{goto L72827f;}}
}
B728246:L728246:{c.instructions+=2;NFSU2_TR(0x728246);
__builtin_memmove((R+4),(R+0),4);
}
B728248:{NFSU2_TR(0x728248);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72824dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72801au);}goto L72801a;}
}
B72824d:L72824d:{c.instructions+=1;NFSU2_TR(0x72824d);
{goto L728281;}
}
B72824f:L72824f:{c.instructions+=4;NFSU2_TR(0x72824f);
__builtin_memmove((R+0),gp(0x8b47e0),4);
}
B728254:{NFSU2_TR(0x728254);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728257:{NFSU2_TR(0x728257);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72825a:{NFSU2_TR(0x72825a);
{goto L7282a7;}
}
B72825c:L72825c:{c.instructions+=2;NFSU2_TR(0x72825c);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72825e:{NFSU2_TR(0x72825e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728263ull));
TAIL_STATIC(0x724792u,724);
}
B728263:L728263:{c.instructions+=5;NFSU2_TR(0x728263);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B728267:{NFSU2_TR(0x728267);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72826a:{NFSU2_TR(0x72826a);
__builtin_memmove(gp(0x8b47e0),(R+0),4);
}
B72826f:{NFSU2_TR(0x72826f);
u8 U[4];
w4(U+0,u32(0x1d8ull));
s4(u32(r4(R+16)),r4(U+0));
}
B728276:{NFSU2_TR(0x728276);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72827bull));
TAIL_STATIC(0x72ace4u,72a);
}
B72827b:L72827b:{c.instructions+=2;NFSU2_TR(0x72827b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72827d:{NFSU2_TR(0x72827d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x728241u);}goto L728241;}
}
B72827f:L72827f:{c.instructions+=1;NFSU2_TR(0x72827f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B728281:L728281:{c.instructions+=10;NFSU2_TR(0x728281);
__builtin_memmove((R+4),gp(0x8b47e0),4);
}
B728287:{NFSU2_TR(0x728287);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72828b:{NFSU2_TR(0x72828b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72828f:{NFSU2_TR(0x72828f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B728291:{NFSU2_TR(0x728291);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728294:{NFSU2_TR(0x728294);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72829b:{NFSU2_TR(0x72829b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72829e:{NFSU2_TR(0x72829e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7282a1:{NFSU2_TR(0x7282a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7282a4:{NFSU2_TR(0x7282a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7282a7:L7282a7:{c.instructions+=4;NFSU2_TR(0x7282a7);
u8 U[4];
w4(U+0,u32(0x72802dull));
s4(u32(r4(R+24)),r4(U+0));
}
B7282ad:{NFSU2_TR(0x7282ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x7281b7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7282b4:{NFSU2_TR(0x7282b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7282b7:{NFSU2_TR(0x7282b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7282bcull));
TAIL_STATIC(0x727e0cu,727);
}
B7282bc:L7282bc:{c.instructions+=2;NFSU2_TR(0x7282bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7282bd:{NFSU2_TR(0x7282bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7282c2ull));
TAIL_STATIC(0x72c31eu,72c);
}
B7282c2:L7282c2:{c.instructions+=9;NFSU2_TR(0x7282c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7282c5:{NFSU2_TR(0x7282c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7282c8:{NFSU2_TR(0x7282c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7282cb:{NFSU2_TR(0x7282cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7282ce:{NFSU2_TR(0x7282ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7282d1:{NFSU2_TR(0x7282d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7282d4:{NFSU2_TR(0x7282d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7282d7:{NFSU2_TR(0x7282d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7282da:{NFSU2_TR(0x7282da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7282dfull));
TAIL_STATIC(0x727e2au,727);
}
B7282df:L7282df:{c.instructions+=8;NFSU2_TR(0x7282df);
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
B7282e2:{NFSU2_TR(0x7282e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7282e3:{NFSU2_TR(0x7282e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7282e6:{NFSU2_TR(0x7282e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7282e9:{NFSU2_TR(0x7282e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x35ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7282ec:{NFSU2_TR(0x7282ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7282ed:{NFSU2_TR(0x7282ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7282ee:{NFSU2_TR(0x7282ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7282ef:L7282ef:{c.instructions+=11;NFSU2_TR(0x7282ef);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7282f0:{NFSU2_TR(0x7282f0);
__builtin_memmove((R+20),(R+16),4);
}
B7282f2:{NFSU2_TR(0x7282f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B7282f5:{NFSU2_TR(0x7282f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7282f9:{NFSU2_TR(0x7282f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7282fa:{NFSU2_TR(0x7282fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7282fd:{NFSU2_TR(0x7282fd);
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
B7282ff:{NFSU2_TR(0x7282ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728300:{NFSU2_TR(0x728300);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B728303:{NFSU2_TR(0x728303);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728306:{NFSU2_TR(0x728306);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72840d;}}
}
B72830c:L72830c:{c.instructions+=3;NFSU2_TR(0x72830c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72830d:{NFSU2_TR(0x72830d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B728310:{NFSU2_TR(0x728310);
{goto L728315;}
}
B728312:L728312:{c.instructions+=1;NFSU2_TR(0x728312);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B728315:L728315:{c.instructions+=2;NFSU2_TR(0x728315);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B728319:{NFSU2_TR(0x728319);
if(r1(R+518)){{goto L728347;}}
}
B72831b:L72831b:{c.instructions+=2;NFSU2_TR(0x72831b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72831f:{NFSU2_TR(0x72831f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L72836d;}}
}
B728321:L728321:{c.instructions+=10;NFSU2_TR(0x728321);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728324:{NFSU2_TR(0x728324);
__builtin_memmove((R+4),(R+12),4);
}
B728326:{NFSU2_TR(0x728326);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B728329:{NFSU2_TR(0x728329);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72832a:{NFSU2_TR(0x72832a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B72832e:{NFSU2_TR(0x72832e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728331:{NFSU2_TR(0x728331);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B728334:{NFSU2_TR(0x728334);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728335:{NFSU2_TR(0x728335);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728336:{NFSU2_TR(0x728336);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72833bull));
TAIL_STATIC(0x71feccu,71f);
}
B72833b:L72833b:{c.instructions+=5;NFSU2_TR(0x72833b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B72833e:{NFSU2_TR(0x72833e);
__builtin_memmove((R+28),(R+12),4);
}
B728340:{NFSU2_TR(0x728340);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728343:{NFSU2_TR(0x728343);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B728345:{NFSU2_TR(0x728345);
{goto L72839d;}
}
B728347:L728347:{c.instructions+=2;NFSU2_TR(0x728347);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72834b:{NFSU2_TR(0x72834b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72836d;}}
}
B72834d:L72834d:{c.instructions+=6;NFSU2_TR(0x72834d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B728350:{NFSU2_TR(0x728350);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B728354:{NFSU2_TR(0x728354);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B728356:{NFSU2_TR(0x728356);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B728359:{NFSU2_TR(0x728359);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B72835b:{NFSU2_TR(0x72835b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72836d;}}
}
B72835d:L72835d:{c.instructions+=6;NFSU2_TR(0x72835d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72835f:{NFSU2_TR(0x72835f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728360:{NFSU2_TR(0x728360);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728361:{NFSU2_TR(0x728361);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B728364:{NFSU2_TR(0x728364);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728365:{NFSU2_TR(0x728365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72836aull));
TAIL_STATIC(0x72c2c2u,72c);
}
B72836a:L72836a:{c.instructions+=1;NFSU2_TR(0x72836a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B72836d:L72836d:{c.instructions+=3;NFSU2_TR(0x72836d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B728371:{NFSU2_TR(0x728371);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728374:{NFSU2_TR(0x728374);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728386;}}
}
B728376:L728376:{c.instructions+=5;NFSU2_TR(0x728376);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728379:{NFSU2_TR(0x728379);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B72837d:{NFSU2_TR(0x72837d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728380:{NFSU2_TR(0x728380);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B728383:{NFSU2_TR(0x728383);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728386:L728386:{c.instructions+=6;NFSU2_TR(0x728386);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728387:{NFSU2_TR(0x728387);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72838a:{NFSU2_TR(0x72838a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72838b:{NFSU2_TR(0x72838b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72838e:{NFSU2_TR(0x72838e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B728390:{NFSU2_TR(0x728390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728395ull));
TAIL_STATIC(0x72ad58u,72a);
}
B728395:L728395:{c.instructions+=3;NFSU2_TR(0x728395);
__builtin_memmove((R+28),(R+0),4);
}
B728397:{NFSU2_TR(0x728397);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B72839a:{NFSU2_TR(0x72839a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B72839d:L72839d:{c.instructions+=5;NFSU2_TR(0x72839d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7283a1:{NFSU2_TR(0x7283a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7283a4:{NFSU2_TR(0x7283a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7283a7:{NFSU2_TR(0x7283a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7283aa:{NFSU2_TR(0x7283aa);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7283d4;}}
}
B7283ac:L7283ac:{c.instructions+=8;NFSU2_TR(0x7283ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7283b0:{NFSU2_TR(0x7283b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7283b3:{NFSU2_TR(0x7283b3);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7283b7:{NFSU2_TR(0x7283b7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w2(U+0,u16(u32(r2(U+0))+u32(r2(R+28))));
s2(u32(r4(R+0)),r2(U+0));
}
B7283ba:{NFSU2_TR(0x7283ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7283bd:{NFSU2_TR(0x7283bd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B7283c1:{NFSU2_TR(0x7283c1);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+4))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B7283c5:{NFSU2_TR(0x7283c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7283d4;}}
}
B7283c7:L7283c7:{c.instructions+=3;NFSU2_TR(0x7283c7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B7283cc:{NFSU2_TR(0x7283cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7283cf:{NFSU2_TR(0x7283cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B7283d4:L7283d4:{c.instructions+=2;NFSU2_TR(0x7283d4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7283d6:{NFSU2_TR(0x7283d6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L728402;}}
}
B7283d8:L7283d8:{c.instructions+=5;NFSU2_TR(0x7283d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7283db:{NFSU2_TR(0x7283db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7283de:{NFSU2_TR(0x7283de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7283e1:{NFSU2_TR(0x7283e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7283e3:{NFSU2_TR(0x7283e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7283e8ull));
TAIL_STATIC(0x72ad3cu,72a);
}
B7283e8:L7283e8:{c.instructions+=9;NFSU2_TR(0x7283e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7283eb:{NFSU2_TR(0x7283eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B7283ee:{NFSU2_TR(0x7283ee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7283ef:{NFSU2_TR(0x7283ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7283f0:{NFSU2_TR(0x7283f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7283f3:{NFSU2_TR(0x7283f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7283f5:{NFSU2_TR(0x7283f5);
u8 U[4];
w4(U+0,u32(0x7fffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7283fa:{NFSU2_TR(0x7283fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7283fd:{NFSU2_TR(0x7283fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728402ull));
TAIL_STATIC(0x72acf0u,72a);
}
B728402:L728402:{c.instructions+=3;NFSU2_TR(0x728402);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B728404:{NFSU2_TR(0x728404);
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
B728406:{NFSU2_TR(0x728406);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x728312u);}goto L728312;}}
}
B72840c:L72840c:{c.instructions+=1;NFSU2_TR(0x72840c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72840d:L72840d:{c.instructions+=5;NFSU2_TR(0x72840d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728410:{NFSU2_TR(0x728410);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B728411:{NFSU2_TR(0x728411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B728412:{NFSU2_TR(0x728412);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B728413:{NFSU2_TR(0x728413);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B728414:L728414:{c.instructions+=5;NFSU2_TR(0x728414);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728415:{NFSU2_TR(0x728415);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B728419:{NFSU2_TR(0x728419);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72841c:{NFSU2_TR(0x72841c);
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
B72841e:{NFSU2_TR(0x72841e);
if(r1(R+518)){{goto L728467;}}
}
B728420:L728420:{c.instructions+=4;NFSU2_TR(0x728420);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B728423:{NFSU2_TR(0x728423);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728426:{NFSU2_TR(0x728426);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72842a:{NFSU2_TR(0x72842a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728467;}}
}
B72842c:L72842c:{c.instructions+=4;NFSU2_TR(0x72842c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72842d:{NFSU2_TR(0x72842d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B72842f:{NFSU2_TR(0x72842f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B728431:{NFSU2_TR(0x728431);
if(r1(R+518)){{goto L728441;}}
}
B728433:L728433:{c.instructions+=2;NFSU2_TR(0x728433);
__builtin_memmove((R+4),(R+28),4);
}
B728435:{NFSU2_TR(0x728435);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72843aull));
TAIL_STATIC(0x72b0d6u,72b);
}
B72843a:L72843a:{c.instructions+=2;NFSU2_TR(0x72843a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72843b:{NFSU2_TR(0x72843b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728440ull));
TAIL_STATIC(0x72aceau,72a);
}
B728440:L728440:{c.instructions+=1;NFSU2_TR(0x728440);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B728441:L728441:{c.instructions+=5;NFSU2_TR(0x728441);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728444:{NFSU2_TR(0x728444);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728447:{NFSU2_TR(0x728447);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B728449:{NFSU2_TR(0x728449);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72844a:{NFSU2_TR(0x72844a);
if(r1(R+518)){{goto L72845a;}}
}
B72844c:L72844c:{c.instructions+=2;NFSU2_TR(0x72844c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72844d:{NFSU2_TR(0x72844d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728452ull));
TAIL_STATIC(0x724894u,724);
}
B728452:L728452:{c.instructions+=3;NFSU2_TR(0x728452);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728455:{NFSU2_TR(0x728455);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B728459:{NFSU2_TR(0x728459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72845a:L72845a:{c.instructions+=2;NFSU2_TR(0x72845a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72845d:{NFSU2_TR(0x72845d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728462ull));
TAIL_STATIC(0x724894u,724);
}
B728462:L728462:{c.instructions+=2;NFSU2_TR(0x728462);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B728466:{NFSU2_TR(0x728466);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B728467:L728467:{c.instructions+=2;NFSU2_TR(0x728467);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B728468:{NFSU2_TR(0x728468);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B728469:L728469:{c.instructions+=8;NFSU2_TR(0x728469);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72846a:{NFSU2_TR(0x72846a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72846b:{NFSU2_TR(0x72846b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72846c:{NFSU2_TR(0x72846c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B728470:{NFSU2_TR(0x728470);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728472:{NFSU2_TR(0x728472);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B728473:{NFSU2_TR(0x728473);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B728476:{NFSU2_TR(0x728476);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728515;}}
}
B72847c:L72847c:{c.instructions+=4;NFSU2_TR(0x72847c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B728480:{NFSU2_TR(0x728480);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B728482:{NFSU2_TR(0x728482);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B728485:{NFSU2_TR(0x728485);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728505;}}
}
B728487:L728487:{c.instructions+=2;NFSU2_TR(0x728487);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728489:{NFSU2_TR(0x728489);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72848eull));
TAIL_STATIC(0x724792u,724);
}
B72848e:L72848e:{c.instructions+=4;NFSU2_TR(0x72848e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728491:{NFSU2_TR(0x728491);
__builtin_memmove(gp(0x8b47e4),(R+0),4);
}
B728496:{NFSU2_TR(0x728496);
u8 U[4];
w4(U+0,u32(0x1d8ull));
s4(u32(r4(R+16)),r4(U+0));
}
B72849d:{NFSU2_TR(0x72849d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7284a2ull));
TAIL_STATIC(0x72ace4u,72a);
}
B7284a2:L7284a2:{c.instructions+=3;NFSU2_TR(0x7284a2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7284a4:{NFSU2_TR(0x7284a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7284a5:{NFSU2_TR(0x7284a5);
if(r1(R+518)){{goto L7284b0;}}
}
B7284a7:L7284a7:{c.instructions+=2;NFSU2_TR(0x7284a7);
__builtin_memmove((R+4),(R+0),4);
}
B7284a9:{NFSU2_TR(0x7284a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7284aeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72801au);}goto L72801a;}
}
B7284ae:L7284ae:{c.instructions+=1;NFSU2_TR(0x7284ae);
{goto L7284b2;}
}
B7284b0:L7284b0:{c.instructions+=1;NFSU2_TR(0x7284b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7284b2:L7284b2:{c.instructions+=4;NFSU2_TR(0x7284b2);
__builtin_memmove((R+4),gp(0x8b47e4),4);
}
B7284b8:{NFSU2_TR(0x7284b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B7284ba:{NFSU2_TR(0x7284ba);
__builtin_memmove((R+4),(R+0),4);
}
B7284bc:{NFSU2_TR(0x7284bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7284c1ull));
TAIL_STATIC(0x72ad3cu,72a);
}
B7284c1:L7284c1:{c.instructions+=12;NFSU2_TR(0x7284c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7284c4:{NFSU2_TR(0x7284c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7284c7:{NFSU2_TR(0x7284c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7284ca:{NFSU2_TR(0x7284ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7284cd:{NFSU2_TR(0x7284cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7284d0:{NFSU2_TR(0x7284d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7284d3:{NFSU2_TR(0x7284d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7284d6:{NFSU2_TR(0x7284d6);
__builtin_memmove((R+0),gp(0x8b47e4),4);
}
B7284db:{NFSU2_TR(0x7284db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7284dd:{NFSU2_TR(0x7284dd);
u8 U[4];
w4(U+0,u32(0x7fffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7284e2:{NFSU2_TR(0x7284e2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B7284e4:{NFSU2_TR(0x7284e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7284e9ull));
TAIL_STATIC(0x72acf0u,72a);
}
B7284e9:L7284e9:{c.instructions+=6;NFSU2_TR(0x7284e9);
__builtin_memmove((R+0),gp(0x8b47e4),4);
}
B7284ee:{NFSU2_TR(0x7284ee);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7284f2:{NFSU2_TR(0x7284f2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7284f6:{NFSU2_TR(0x7284f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7284fd:{NFSU2_TR(0x7284fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728500:{NFSU2_TR(0x728500);
{goto L728599;}
}
B728505:L728505:{c.instructions+=4;NFSU2_TR(0x728505);
__builtin_memmove((R+0),gp(0x8b47e4),4);
}
B72850a:{NFSU2_TR(0x72850a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72850d:{NFSU2_TR(0x72850d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728510:{NFSU2_TR(0x728510);
{goto L72859c;}
}
B728515:L728515:{c.instructions+=2;NFSU2_TR(0x728515);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728517:{NFSU2_TR(0x728517);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72851cull));
TAIL_STATIC(0x724792u,724);
}
B72851c:L72851c:{c.instructions+=5;NFSU2_TR(0x72851c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B728520:{NFSU2_TR(0x728520);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728523:{NFSU2_TR(0x728523);
__builtin_memmove(gp(0x8b47e4),(R+0),4);
}
B728528:{NFSU2_TR(0x728528);
u8 U[4];
w4(U+0,u32(0x1d8ull));
s4(u32(r4(R+16)),r4(U+0));
}
B72852f:{NFSU2_TR(0x72852f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728534ull));
TAIL_STATIC(0x72ace4u,72a);
}
B728534:L728534:{c.instructions+=4;NFSU2_TR(0x728534);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B728536:{NFSU2_TR(0x728536);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B728538:{NFSU2_TR(0x728538);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B728539:{NFSU2_TR(0x728539);
if(r1(R+518)){{goto L728544;}}
}
B72853b:L72853b:{c.instructions+=2;NFSU2_TR(0x72853b);
__builtin_memmove((R+4),(R+0),4);
}
B72853d:{NFSU2_TR(0x72853d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728542ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72801au);}goto L72801a;}
}
B728542:L728542:{c.instructions+=1;NFSU2_TR(0x728542);
{goto L728546;}
}
B728544:L728544:{c.instructions+=1;NFSU2_TR(0x728544);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B728546:L728546:{c.instructions+=4;NFSU2_TR(0x728546);
__builtin_memmove((R+4),gp(0x8b47e4),4);
}
B72854c:{NFSU2_TR(0x72854c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B72854e:{NFSU2_TR(0x72854e);
__builtin_memmove((R+4),(R+0),4);
}
B728550:{NFSU2_TR(0x728550);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728555ull));
TAIL_STATIC(0x72ad3cu,72a);
}
B728555:L728555:{c.instructions+=12;NFSU2_TR(0x728555);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728558:{NFSU2_TR(0x728558);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72855b:{NFSU2_TR(0x72855b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72855e:{NFSU2_TR(0x72855e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728561:{NFSU2_TR(0x728561);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B728564:{NFSU2_TR(0x728564);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728567:{NFSU2_TR(0x728567);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72856a:{NFSU2_TR(0x72856a);
__builtin_memmove((R+0),gp(0x8b47e4),4);
}
B72856f:{NFSU2_TR(0x72856f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B728571:{NFSU2_TR(0x728571);
u8 U[4];
w4(U+0,u32(0x7fffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728576:{NFSU2_TR(0x728576);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B728578:{NFSU2_TR(0x728578);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72857dull));
TAIL_STATIC(0x72acf0u,72a);
}
B72857d:L72857d:{c.instructions+=7;NFSU2_TR(0x72857d);
__builtin_memmove((R+0),gp(0x8b47e4),4);
}
B728582:{NFSU2_TR(0x728582);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B728586:{NFSU2_TR(0x728586);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728589:{NFSU2_TR(0x728589);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B728590:{NFSU2_TR(0x728590);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728593:{NFSU2_TR(0x728593);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728596:{NFSU2_TR(0x728596);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728599:L728599:{c.instructions+=1;NFSU2_TR(0x728599);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72859c:L72859c:{c.instructions+=10;NFSU2_TR(0x72859c);
u8 U[4];
w4(U+0,u32(0x7282efull));
s4(u32(r4(R+24)),r4(U+0));
}
B7285a2:{NFSU2_TR(0x7285a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x728414ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7285a9:{NFSU2_TR(0x7285a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
w4(U+4,u32(0x73329bull));
s4(u32(r4(U+0)),r4(U+4));
}
B7285b0:{NFSU2_TR(0x7285b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7285b3:{NFSU2_TR(0x7285b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7285b6:{NFSU2_TR(0x7285b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7285b7:{NFSU2_TR(0x7285b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7285ba:{NFSU2_TR(0x7285ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7285bb:{NFSU2_TR(0x7285bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7285bc:{NFSU2_TR(0x7285bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7285bd:L7285bd:{c.instructions+=10;NFSU2_TR(0x7285bd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7285be:{NFSU2_TR(0x7285be);
__builtin_memmove((R+20),(R+16),4);
}
B7285c0:{NFSU2_TR(0x7285c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7285c1:{NFSU2_TR(0x7285c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7285c2:{NFSU2_TR(0x7285c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7285c3:{NFSU2_TR(0x7285c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7285c6:{NFSU2_TR(0x7285c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7285c9:{NFSU2_TR(0x7285c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7285cc:{NFSU2_TR(0x7285cc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7285cf:{NFSU2_TR(0x7285cf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7285d9;}}
}
B7285d1:L7285d1:{c.instructions+=2;NFSU2_TR(0x7285d1);
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
B7285d4:{NFSU2_TR(0x7285d4);
{goto L7286e1;}
}
B7285d9:L7285d9:{c.instructions+=7;NFSU2_TR(0x7285d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7285dc:{NFSU2_TR(0x7285dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7285df:{NFSU2_TR(0x7285df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B7285e2:{NFSU2_TR(0x7285e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7285e3:{NFSU2_TR(0x7285e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7285e6:{NFSU2_TR(0x7285e6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7285e8:{NFSU2_TR(0x7285e8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7285ff;}}
}
B7285ea:L7285ea:{c.instructions+=9;NFSU2_TR(0x7285ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7285ed:{NFSU2_TR(0x7285ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7285f0:{NFSU2_TR(0x7285f0);
__builtin_memmove((R+4),(R+8),4);
}
B7285f2:{NFSU2_TR(0x7285f2);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B7285f4:{NFSU2_TR(0x7285f4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B7285f6:{NFSU2_TR(0x7285f6);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B7285f8:{NFSU2_TR(0x7285f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7285fb:{NFSU2_TR(0x7285fb);
__builtin_memmove((R+28),(R+0),4);
}
B7285fd:{NFSU2_TR(0x7285fd);
{goto L728603;}
}
B7285ff:L7285ff:{c.instructions+=1;NFSU2_TR(0x7285ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B728603:L728603:{c.instructions+=4;NFSU2_TR(0x728603);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728606:{NFSU2_TR(0x728606);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72860a:{NFSU2_TR(0x72860a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72860b:{NFSU2_TR(0x72860b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728679;}}
}
B72860d:L72860d:{c.instructions+=2;NFSU2_TR(0x72860d);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B728611:{NFSU2_TR(0x728611);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728657;}}
}
B728613:L728613:{c.instructions+=5;NFSU2_TR(0x728613);
__builtin_memmove((R+4),(R+0),4);
}
B728615:{NFSU2_TR(0x728615);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B728619:{NFSU2_TR(0x728619);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B72861b:{NFSU2_TR(0x72861b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72861e:{NFSU2_TR(0x72861e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L728633;}}
}
B728620:L728620:{c.instructions+=7;NFSU2_TR(0x728620);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728622:{NFSU2_TR(0x728622);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728623:{NFSU2_TR(0x728623);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B728626:{NFSU2_TR(0x728626);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728627:{NFSU2_TR(0x728627);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B72862a:{NFSU2_TR(0x72862a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72862b:{NFSU2_TR(0x72862b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728630ull));
TAIL_STATIC(0x72c2c2u,72c);
}
B728630:L728630:{c.instructions+=1;NFSU2_TR(0x728630);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B728633:L728633:{c.instructions+=12;NFSU2_TR(0x728633);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728636:{NFSU2_TR(0x728636);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B728639:{NFSU2_TR(0x728639);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72863c:{NFSU2_TR(0x72863c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B728640:{NFSU2_TR(0x728640);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B728643:{NFSU2_TR(0x728643);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B728646:{NFSU2_TR(0x728646);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728649:{NFSU2_TR(0x728649);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72864a:{NFSU2_TR(0x72864a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72864d:{NFSU2_TR(0x72864d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72864e:{NFSU2_TR(0x72864e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B728650:{NFSU2_TR(0x728650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728655ull));
TAIL_STATIC(0x72ad58u,72a);
}
B728655:L728655:{c.instructions+=1;NFSU2_TR(0x728655);
{goto L728695;}
}
B728657:L728657:{c.instructions+=11;NFSU2_TR(0x728657);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72865a:{NFSU2_TR(0x72865a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72865d:{NFSU2_TR(0x72865d);
__builtin_memmove((R+4),(R+28),4);
}
B72865f:{NFSU2_TR(0x72865f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B728662:{NFSU2_TR(0x728662);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728663:{NFSU2_TR(0x728663);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B728667:{NFSU2_TR(0x728667);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72866a:{NFSU2_TR(0x72866a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72866d:{NFSU2_TR(0x72866d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72866e:{NFSU2_TR(0x72866e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72866f:{NFSU2_TR(0x72866f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728674ull));
TAIL_STATIC(0x71feccu,71f);
}
B728674:L728674:{c.instructions+=2;NFSU2_TR(0x728674);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B728677:{NFSU2_TR(0x728677);
{goto L72868f;}
}
B728679:L728679:{c.instructions+=8;NFSU2_TR(0x728679);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72867c:{NFSU2_TR(0x72867c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B728680:{NFSU2_TR(0x728680);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728681:{NFSU2_TR(0x728681);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B728684:{NFSU2_TR(0x728684);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728687:{NFSU2_TR(0x728687);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728688:{NFSU2_TR(0x728688);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B72868a:{NFSU2_TR(0x72868a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72868full));
TAIL_STATIC(0x72ad58u,72a);
}
B72868f:L72868f:{c.instructions+=2;NFSU2_TR(0x72868f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728692:{NFSU2_TR(0x728692);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B728695:L728695:{c.instructions+=3;NFSU2_TR(0x728695);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728698:{NFSU2_TR(0x728698);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72869a:{NFSU2_TR(0x72869a);
if(r1(R+518)){{goto L7286ab;}}
}
B72869c:L72869c:{c.instructions+=5;NFSU2_TR(0x72869c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72869f:{NFSU2_TR(0x72869f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7286a0:{NFSU2_TR(0x7286a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7286a3:{NFSU2_TR(0x7286a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7286a4:{NFSU2_TR(0x7286a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7286a9ull));
TAIL_STATIC(0x727030u,727);
}
B7286a9:L7286a9:{c.instructions+=2;NFSU2_TR(0x7286a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7286aa:{NFSU2_TR(0x7286aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7286ab:L7286ab:{c.instructions+=4;NFSU2_TR(0x7286ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7286ae:{NFSU2_TR(0x7286ae);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x2ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7286b2:{NFSU2_TR(0x7286b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7286b3:{NFSU2_TR(0x7286b3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L7286dd;}}
}
B7286b5:L7286b5:{c.instructions+=8;NFSU2_TR(0x7286b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7286b9:{NFSU2_TR(0x7286b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7286bc:{NFSU2_TR(0x7286bc);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7286c0:{NFSU2_TR(0x7286c0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w2(U+0,u16(u32(r2(U+0))+u32(r2(R+28))));
s2(u32(r4(R+0)),r2(U+0));
}
B7286c3:{NFSU2_TR(0x7286c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7286c6:{NFSU2_TR(0x7286c6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B7286ca:{NFSU2_TR(0x7286ca);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+4))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B7286ce:{NFSU2_TR(0x7286ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7286dd;}}
}
B7286d0:L7286d0:{c.instructions+=3;NFSU2_TR(0x7286d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B7286d5:{NFSU2_TR(0x7286d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7286d8:{NFSU2_TR(0x7286d8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B7286dd:L7286dd:{c.instructions+=3;NFSU2_TR(0x7286dd);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7286df:{NFSU2_TR(0x7286df);
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
B7286e0:{NFSU2_TR(0x7286e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7286e1:L7286e1:{c.instructions+=3;NFSU2_TR(0x7286e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7286e2:{NFSU2_TR(0x7286e2);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7286e3:{NFSU2_TR(0x7286e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7286e4:L7286e4:{c.instructions+=4;NFSU2_TR(0x7286e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7286e8:{NFSU2_TR(0x7286e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7286eb:{NFSU2_TR(0x7286eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7286ee:{NFSU2_TR(0x7286ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7286ef:L7286ef:{c.instructions+=5;NFSU2_TR(0x7286ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7286f0:{NFSU2_TR(0x7286f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7286f4:{NFSU2_TR(0x7286f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7286f7:{NFSU2_TR(0x7286f7);
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
B7286f9:{NFSU2_TR(0x7286f9);
if(r1(R+518)){{goto L728742;}}
}
B7286fb:L7286fb:{c.instructions+=4;NFSU2_TR(0x7286fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))-u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B7286fe:{NFSU2_TR(0x7286fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728701:{NFSU2_TR(0x728701);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B728705:{NFSU2_TR(0x728705);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728742;}}
}
B728707:L728707:{c.instructions+=4;NFSU2_TR(0x728707);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728708:{NFSU2_TR(0x728708);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B72870a:{NFSU2_TR(0x72870a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72870c:{NFSU2_TR(0x72870c);
if(r1(R+518)){{goto L72871c;}}
}
B72870e:L72870e:{c.instructions+=2;NFSU2_TR(0x72870e);
__builtin_memmove((R+4),(R+28),4);
}
B728710:{NFSU2_TR(0x728710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728715ull));
TAIL_STATIC(0x72b0d6u,72b);
}
B728715:L728715:{c.instructions+=2;NFSU2_TR(0x728715);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728716:{NFSU2_TR(0x728716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72871bull));
TAIL_STATIC(0x72aceau,72a);
}
B72871b:L72871b:{c.instructions+=1;NFSU2_TR(0x72871b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72871c:L72871c:{c.instructions+=5;NFSU2_TR(0x72871c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72871f:{NFSU2_TR(0x72871f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728722:{NFSU2_TR(0x728722);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B728724:{NFSU2_TR(0x728724);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B728725:{NFSU2_TR(0x728725);
if(r1(R+518)){{goto L728735;}}
}
B728727:L728727:{c.instructions+=2;NFSU2_TR(0x728727);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728728:{NFSU2_TR(0x728728);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72872dull));
TAIL_STATIC(0x724894u,724);
}
B72872d:L72872d:{c.instructions+=3;NFSU2_TR(0x72872d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728730:{NFSU2_TR(0x728730);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B728734:{NFSU2_TR(0x728734);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B728735:L728735:{c.instructions+=2;NFSU2_TR(0x728735);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B728738:{NFSU2_TR(0x728738);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72873dull));
TAIL_STATIC(0x724894u,724);
}
B72873d:L72873d:{c.instructions+=2;NFSU2_TR(0x72873d);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B728741:{NFSU2_TR(0x728741);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B728742:L728742:{c.instructions+=2;NFSU2_TR(0x728742);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B728743:{NFSU2_TR(0x728743);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B728744:L728744:{c.instructions+=6;NFSU2_TR(0x728744);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728745:{NFSU2_TR(0x728745);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728746:{NFSU2_TR(0x728746);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728747:{NFSU2_TR(0x728747);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72874b:{NFSU2_TR(0x72874b);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72874f:{NFSU2_TR(0x72874f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7287ca;}}
}
B728751:L728751:{c.instructions+=4;NFSU2_TR(0x728751);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B728755:{NFSU2_TR(0x728755);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B728757:{NFSU2_TR(0x728757);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B72875a:{NFSU2_TR(0x72875a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7287bc;}}
}
B72875c:L72875c:{c.instructions+=2;NFSU2_TR(0x72875c);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72875e:{NFSU2_TR(0x72875e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728763ull));
TAIL_STATIC(0x724792u,724);
}
B728763:L728763:{c.instructions+=4;NFSU2_TR(0x728763);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728766:{NFSU2_TR(0x728766);
__builtin_memmove(gp(0x8b47e8),(R+0),4);
}
B72876b:{NFSU2_TR(0x72876b);
u8 U[4];
w4(U+0,u32(0x1d8ull));
s4(u32(r4(R+16)),r4(U+0));
}
B728772:{NFSU2_TR(0x728772);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728777ull));
TAIL_STATIC(0x72ace4u,72a);
}
B728777:L728777:{c.instructions+=3;NFSU2_TR(0x728777);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B728779:{NFSU2_TR(0x728779);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72877a:{NFSU2_TR(0x72877a);
if(r1(R+518)){{goto L728785;}}
}
B72877c:L72877c:{c.instructions+=2;NFSU2_TR(0x72877c);
__builtin_memmove((R+4),(R+0),4);
}
B72877e:{NFSU2_TR(0x72877e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728783ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72801au);}goto L72801a;}
}
B728783:L728783:{c.instructions+=1;NFSU2_TR(0x728783);
{goto L728787;}
}
B728785:L728785:{c.instructions+=1;NFSU2_TR(0x728785);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B728787:L728787:{c.instructions+=4;NFSU2_TR(0x728787);
__builtin_memmove((R+4),gp(0x8b47e8),4);
}
B72878d:{NFSU2_TR(0x72878d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B72878f:{NFSU2_TR(0x72878f);
__builtin_memmove((R+4),(R+0),4);
}
B728791:{NFSU2_TR(0x728791);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728796ull));
TAIL_STATIC(0x72ad3cu,72a);
}
B728796:L728796:{c.instructions+=6;NFSU2_TR(0x728796);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B728799:{NFSU2_TR(0x728799);
__builtin_memmove((R+0),gp(0x8b47e8),4);
}
B72879e:{NFSU2_TR(0x72879e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7287a0:{NFSU2_TR(0x7287a0);
u8 U[4];
w4(U+0,u32(0x7fffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7287a5:{NFSU2_TR(0x7287a5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B7287a7:{NFSU2_TR(0x7287a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7287acull));
TAIL_STATIC(0x72acf0u,72a);
}
B7287ac:L7287ac:{c.instructions+=5;NFSU2_TR(0x7287ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7287af:{NFSU2_TR(0x7287af);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7287b3:{NFSU2_TR(0x7287b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7287b6:{NFSU2_TR(0x7287b6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7287ba:{NFSU2_TR(0x7287ba);
{goto L728829;}
}
B7287bc:L7287bc:{c.instructions+=4;NFSU2_TR(0x7287bc);
__builtin_memmove((R+0),gp(0x8b47e8),4);
}
B7287c1:{NFSU2_TR(0x7287c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7287c4:{NFSU2_TR(0x7287c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x19ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7287c8:{NFSU2_TR(0x7287c8);
{goto L72883c;}
}
B7287ca:L7287ca:{c.instructions+=2;NFSU2_TR(0x7287ca);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7287cc:{NFSU2_TR(0x7287cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7287d1ull));
TAIL_STATIC(0x724792u,724);
}
B7287d1:L7287d1:{c.instructions+=5;NFSU2_TR(0x7287d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7287d5:{NFSU2_TR(0x7287d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7287d8:{NFSU2_TR(0x7287d8);
__builtin_memmove(gp(0x8b47e8),(R+0),4);
}
B7287dd:{NFSU2_TR(0x7287dd);
u8 U[4];
w4(U+0,u32(0x1d8ull));
s4(u32(r4(R+16)),r4(U+0));
}
B7287e4:{NFSU2_TR(0x7287e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7287e9ull));
TAIL_STATIC(0x72ace4u,72a);
}
B7287e9:L7287e9:{c.instructions+=4;NFSU2_TR(0x7287e9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7287eb:{NFSU2_TR(0x7287eb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7287ed:{NFSU2_TR(0x7287ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7287ee:{NFSU2_TR(0x7287ee);
if(r1(R+518)){{goto L7287f9;}}
}
B7287f0:L7287f0:{c.instructions+=2;NFSU2_TR(0x7287f0);
__builtin_memmove((R+4),(R+0),4);
}
B7287f2:{NFSU2_TR(0x7287f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7287f7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72801au);}goto L72801a;}
}
B7287f7:L7287f7:{c.instructions+=1;NFSU2_TR(0x7287f7);
{goto L7287fb;}
}
B7287f9:L7287f9:{c.instructions+=1;NFSU2_TR(0x7287f9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7287fb:L7287fb:{c.instructions+=4;NFSU2_TR(0x7287fb);
__builtin_memmove((R+4),gp(0x8b47e8),4);
}
B728801:{NFSU2_TR(0x728801);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B728803:{NFSU2_TR(0x728803);
__builtin_memmove((R+4),(R+0),4);
}
B728805:{NFSU2_TR(0x728805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72880aull));
TAIL_STATIC(0x72ad3cu,72a);
}
B72880a:L72880a:{c.instructions+=6;NFSU2_TR(0x72880a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72880d:{NFSU2_TR(0x72880d);
__builtin_memmove((R+0),gp(0x8b47e8),4);
}
B728812:{NFSU2_TR(0x728812);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B728814:{NFSU2_TR(0x728814);
u8 U[4];
w4(U+0,u32(0x7fffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728819:{NFSU2_TR(0x728819);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B72881b:{NFSU2_TR(0x72881b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728820ull));
TAIL_STATIC(0x72acf0u,72a);
}
B728820:L728820:{c.instructions+=2;NFSU2_TR(0x728820);
__builtin_memmove((R+0),gp(0x8b47e8),4);
}
B728825:{NFSU2_TR(0x728825);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B728829:L728829:{c.instructions+=6;NFSU2_TR(0x728829);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72882c:{NFSU2_TR(0x72882c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x19ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B728830:{NFSU2_TR(0x728830);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728833:{NFSU2_TR(0x728833);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728836:{NFSU2_TR(0x728836);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728839:{NFSU2_TR(0x728839);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72883c:L72883c:{c.instructions+=15;NFSU2_TR(0x72883c);
u8 U[4];
w4(U+0,u32(0x7285bdull));
s4(u32(r4(R+24)),r4(U+0));
}
B728842:{NFSU2_TR(0x728842);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x7286efull));
s4(u32(r4(U+0)),r4(U+4));
}
B728849:{NFSU2_TR(0x728849);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72884c:{NFSU2_TR(0x72884c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
w4(U+4,u32(0x7286e4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B728853:{NFSU2_TR(0x728853);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728856:{NFSU2_TR(0x728856);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728859:{NFSU2_TR(0x728859);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72885c:{NFSU2_TR(0x72885c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72885f:{NFSU2_TR(0x72885f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B728862:{NFSU2_TR(0x728862);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728865:{NFSU2_TR(0x728865);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B728866:{NFSU2_TR(0x728866);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B728867:{NFSU2_TR(0x728867);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72886a:{NFSU2_TR(0x72886a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72886b:{NFSU2_TR(0x72886b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72886c:L72886c:{c.instructions+=69;NFSU2_TR(0x72886c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728870:{NFSU2_TR(0x728870);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B728874:{NFSU2_TR(0x728874);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728876:{NFSU2_TR(0x728876);
{u32 ea_=u32(u32(8153632u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72887c:{NFSU2_TR(0x72887c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72887e:{NFSU2_TR(0x72887e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728880:{NFSU2_TR(0x728880);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728882:{NFSU2_TR(0x728882);
{u32 ea_=u32(u32(8153628u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B728888:{NFSU2_TR(0x728888);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72888b:{NFSU2_TR(0x72888b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72888e:{NFSU2_TR(0x72888e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728890:{NFSU2_TR(0x728890);
{u32 ea_=u32(u32(8153624u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B728896:{NFSU2_TR(0x728896);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B728899:{NFSU2_TR(0x728899);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72889c:{NFSU2_TR(0x72889c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72889e:{NFSU2_TR(0x72889e);
{u32 ea_=u32(u32(8153620u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7288a4:{NFSU2_TR(0x7288a4);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7288a7:{NFSU2_TR(0x7288a7);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7288aa:{NFSU2_TR(0x7288aa);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7288ac:{NFSU2_TR(0x7288ac);
{u32 ea_=u32(u32(8153616u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7288b2:{NFSU2_TR(0x7288b2);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7288b5:{NFSU2_TR(0x7288b5);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7288b8:{NFSU2_TR(0x7288b8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7288ba:{NFSU2_TR(0x7288ba);
{u32 ea_=u32(u32(8153612u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7288c0:{NFSU2_TR(0x7288c0);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7288c3:{NFSU2_TR(0x7288c3);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7288c6:{NFSU2_TR(0x7288c6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7288c8:{NFSU2_TR(0x7288c8);
{u32 ea_=u32(u32(8153608u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7288ce:{NFSU2_TR(0x7288ce);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7288d1:{NFSU2_TR(0x7288d1);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7288d4:{NFSU2_TR(0x7288d4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7288d6:{NFSU2_TR(0x7288d6);
{u32 ea_=u32(u32(8153604u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7288dc:{NFSU2_TR(0x7288dc);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7288df:{NFSU2_TR(0x7288df);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7288e2:{NFSU2_TR(0x7288e2);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7288e4:{NFSU2_TR(0x7288e4);
{u32 ea_=u32(u32(8153600u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7288ea:{NFSU2_TR(0x7288ea);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7288ed:{NFSU2_TR(0x7288ed);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7288f0:{NFSU2_TR(0x7288f0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7288f2:{NFSU2_TR(0x7288f2);
{u32 ea_=u32(u32(8153596u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7288f8:{NFSU2_TR(0x7288f8);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7288fb:{NFSU2_TR(0x7288fb);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7288fe:{NFSU2_TR(0x7288fe);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728900:{NFSU2_TR(0x728900);
{u32 ea_=u32(u32(8153592u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B728906:{NFSU2_TR(0x728906);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B728909:{NFSU2_TR(0x728909);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72890c:{NFSU2_TR(0x72890c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72890e:{NFSU2_TR(0x72890e);
{u32 ea_=u32(u32(8153588u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B728914:{NFSU2_TR(0x728914);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B728917:{NFSU2_TR(0x728917);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72891a:{NFSU2_TR(0x72891a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72891c:{NFSU2_TR(0x72891c);
{u32 ea_=u32(u32(8153584u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B728922:{NFSU2_TR(0x728922);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B728925:{NFSU2_TR(0x728925);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728928:{NFSU2_TR(0x728928);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72892a:{NFSU2_TR(0x72892a);
{u32 ea_=u32(u32(8153580u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B728930:{NFSU2_TR(0x728930);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B728933:{NFSU2_TR(0x728933);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728936:{NFSU2_TR(0x728936);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728938:{NFSU2_TR(0x728938);
{u32 ea_=u32(u32(8153576u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72893e:{NFSU2_TR(0x72893e);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B728941:{NFSU2_TR(0x728941);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728944:{NFSU2_TR(0x728944);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728946:{NFSU2_TR(0x728946);
{u32 ea_=u32(u32(8153572u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72894c:{NFSU2_TR(0x72894c);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72894f:{NFSU2_TR(0x72894f);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728952:{NFSU2_TR(0x728952);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B728954:{NFSU2_TR(0x728954);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728956:{NFSU2_TR(0x728956);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B728957:L728957:{c.instructions+=102;NFSU2_TR(0x728957);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72895b:{NFSU2_TR(0x72895b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72895f:{NFSU2_TR(0x72895f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728963:{NFSU2_TR(0x728963);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B728967:{NFSU2_TR(0x728967);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B728969:{NFSU2_TR(0x728969);
{u32 ea_=u32(u32(8153572u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72896f:{NFSU2_TR(0x72896f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B728971:{NFSU2_TR(0x728971);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B728973:{NFSU2_TR(0x728973);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B728975:{NFSU2_TR(0x728975);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B728977:{NFSU2_TR(0x728977);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728979:{NFSU2_TR(0x728979);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72897b:{NFSU2_TR(0x72897b);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B72897d:{NFSU2_TR(0x72897d);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B72897f:{NFSU2_TR(0x72897f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B728982:{NFSU2_TR(0x728982);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B728985:{NFSU2_TR(0x728985);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728988:{NFSU2_TR(0x728988);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72898e:{NFSU2_TR(0x72898e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B728990:{NFSU2_TR(0x728990);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B728992:{NFSU2_TR(0x728992);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B728995:{NFSU2_TR(0x728995);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B728998:{NFSU2_TR(0x728998);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72899b:{NFSU2_TR(0x72899b);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7289a1:{NFSU2_TR(0x7289a1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B7289a3:{NFSU2_TR(0x7289a3);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B7289a5:{NFSU2_TR(0x7289a5);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7289a8:{NFSU2_TR(0x7289a8);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7289ab:{NFSU2_TR(0x7289ab);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7289ae:{NFSU2_TR(0x7289ae);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7289b4:{NFSU2_TR(0x7289b4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B7289b6:{NFSU2_TR(0x7289b6);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B7289b8:{NFSU2_TR(0x7289b8);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7289bb:{NFSU2_TR(0x7289bb);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7289be:{NFSU2_TR(0x7289be);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7289c1:{NFSU2_TR(0x7289c1);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7289c7:{NFSU2_TR(0x7289c7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B7289c9:{NFSU2_TR(0x7289c9);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B7289cb:{NFSU2_TR(0x7289cb);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7289ce:{NFSU2_TR(0x7289ce);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7289d1:{NFSU2_TR(0x7289d1);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7289d4:{NFSU2_TR(0x7289d4);
{u32 ea_=u32(u32(7897632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7289da:{NFSU2_TR(0x7289da);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B7289dc:{NFSU2_TR(0x7289dc);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B7289de:{NFSU2_TR(0x7289de);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7289e1:{NFSU2_TR(0x7289e1);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7289e4:{NFSU2_TR(0x7289e4);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7289e7:{NFSU2_TR(0x7289e7);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7289ed:{NFSU2_TR(0x7289ed);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B7289ef:{NFSU2_TR(0x7289ef);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B7289f1:{NFSU2_TR(0x7289f1);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7289f4:{NFSU2_TR(0x7289f4);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7289f7:{NFSU2_TR(0x7289f7);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7289fa:{NFSU2_TR(0x7289fa);
{u32 ea_=u32(u32(7897616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728a00:{NFSU2_TR(0x728a00);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B728a02:{NFSU2_TR(0x728a02);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B728a04:{NFSU2_TR(0x728a04);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B728a07:{NFSU2_TR(0x728a07);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B728a0a:{NFSU2_TR(0x728a0a);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728a0d:{NFSU2_TR(0x728a0d);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728a13:{NFSU2_TR(0x728a13);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B728a15:{NFSU2_TR(0x728a15);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B728a17:{NFSU2_TR(0x728a17);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B728a1a:{NFSU2_TR(0x728a1a);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B728a1d:{NFSU2_TR(0x728a1d);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728a20:{NFSU2_TR(0x728a20);
{u32 ea_=u32(u32(8004480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728a26:{NFSU2_TR(0x728a26);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B728a28:{NFSU2_TR(0x728a28);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B728a2a:{NFSU2_TR(0x728a2a);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B728a2d:{NFSU2_TR(0x728a2d);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B728a30:{NFSU2_TR(0x728a30);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728a33:{NFSU2_TR(0x728a33);
{u32 ea_=u32(u32(7897628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728a39:{NFSU2_TR(0x728a39);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B728a3b:{NFSU2_TR(0x728a3b);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B728a3d:{NFSU2_TR(0x728a3d);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B728a40:{NFSU2_TR(0x728a40);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B728a43:{NFSU2_TR(0x728a43);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728a46:{NFSU2_TR(0x728a46);
{u32 ea_=u32(u32(7897596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728a4c:{NFSU2_TR(0x728a4c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B728a4e:{NFSU2_TR(0x728a4e);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B728a50:{NFSU2_TR(0x728a50);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B728a53:{NFSU2_TR(0x728a53);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B728a56:{NFSU2_TR(0x728a56);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728a59:{NFSU2_TR(0x728a59);
{u32 ea_=u32(u32(8013296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728a5f:{NFSU2_TR(0x728a5f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B728a61:{NFSU2_TR(0x728a61);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B728a63:{NFSU2_TR(0x728a63);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B728a66:{NFSU2_TR(0x728a66);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B728a69:{NFSU2_TR(0x728a69);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728a6c:{NFSU2_TR(0x728a6c);
{u32 ea_=u32(u32(7895796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728a72:{NFSU2_TR(0x728a72);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B728a74:{NFSU2_TR(0x728a74);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B728a76:{NFSU2_TR(0x728a76);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B728a79:{NFSU2_TR(0x728a79);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B728a7c:{NFSU2_TR(0x728a7c);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728a7f:{NFSU2_TR(0x728a7f);
{u32 ea_=u32(u32(7980676u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B728a85:{NFSU2_TR(0x728a85);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B728a87:{NFSU2_TR(0x728a87);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B728a8a:{NFSU2_TR(0x728a8a);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B728a8d:{NFSU2_TR(0x728a8d);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728a90:{NFSU2_TR(0x728a90);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B728a92:{NFSU2_TR(0x728a92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B728a93:L728a93:{c.instructions+=14;NFSU2_TR(0x728a93);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728a94:{NFSU2_TR(0x728a94);
__builtin_memmove((R+20),(R+16),4);
}
B728a96:{NFSU2_TR(0x728a96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B728a99:{NFSU2_TR(0x728a99);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728a9a:{NFSU2_TR(0x728a9a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728a9b:{NFSU2_TR(0x728a9b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B728a9d:{NFSU2_TR(0x728a9d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B728a9f:{NFSU2_TR(0x728a9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728aa2:{NFSU2_TR(0x728aa2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B728aa5:{NFSU2_TR(0x728aa5);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B728aa6:{NFSU2_TR(0x728aa6);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B728aa7:{NFSU2_TR(0x728aa7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B728aa9:{NFSU2_TR(0x728aa9);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b47f9),1);
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
B728aaf:{NFSU2_TR(0x728aaf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L728b44;}}
}
B728ab5:L728ab5:{c.instructions+=1;NFSU2_TR(0x728ab5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728ab6:L728ab6:{c.instructions+=6;NFSU2_TR(0x728ab6);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728ab9:{NFSU2_TR(0x728ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4940ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B728ac0:{NFSU2_TR(0x728ac0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B728ac6:{NFSU2_TR(0x728ac6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B728ac8:{NFSU2_TR(0x728ac8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B728acb:{NFSU2_TR(0x728acb);
if(r1(R+514)){{goto L728b24;}}
}
B728acd:L728acd:{c.instructions+=2;NFSU2_TR(0x728acd);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B728acf:{NFSU2_TR(0x728acf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728ae7;}}
}
B728ad1:L728ad1:{c.instructions+=2;NFSU2_TR(0x728ad1);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728ad3:{NFSU2_TR(0x728ad3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728ad8ull));
TAIL_STATIC(0x724792u,724);
}
B728ad8:L728ad8:{c.instructions+=3;NFSU2_TR(0x728ad8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728ad9:{NFSU2_TR(0x728ad9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B728adb:{NFSU2_TR(0x728adb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728ae0ull));
TAIL_STATIC(0x72aa98u,72a);
}
B728ae0:L728ae0:{c.instructions+=4;NFSU2_TR(0x728ae0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B728ae2:{NFSU2_TR(0x728ae2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B728ae3:{NFSU2_TR(0x728ae3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B728ae4:{NFSU2_TR(0x728ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728ae7:L728ae7:{c.instructions+=17;NFSU2_TR(0x728ae7);
w4(R+0,u32(m2(0x8b44c6)));
}
B728aee:{NFSU2_TR(0x728aee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728af1:{NFSU2_TR(0x728af1);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B728af4:{NFSU2_TR(0x728af4);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B728af7:{NFSU2_TR(0x728af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728afa:{NFSU2_TR(0x728afa);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B728afd:{NFSU2_TR(0x728afd);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728b00:{NFSU2_TR(0x728b00);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728b03:{NFSU2_TR(0x728b03);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B728b06:{NFSU2_TR(0x728b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728b09:{NFSU2_TR(0x728b09);
u8 U[45];
w4(U+37,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B728b0c:{NFSU2_TR(0x728b0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728b0f:{NFSU2_TR(0x728b0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B728b12:{NFSU2_TR(0x728b12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728b13:{NFSU2_TR(0x728b13);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B728b15:{NFSU2_TR(0x728b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x100ull));
s4(u32(r4(U+0)),r4(U+4));
}
B728b1c:{NFSU2_TR(0x728b1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728b21ull));
TAIL_STATIC(0x72aabeu,72a);
}
B728b21:L728b21:{c.instructions+=2;NFSU2_TR(0x728b21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B728b22:{NFSU2_TR(0x728b22);
{goto L728b32;}
}
B728b24:L728b24:{c.instructions+=3;NFSU2_TR(0x728b24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B728b26:{NFSU2_TR(0x728b26);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B728b28:{NFSU2_TR(0x728b28);
if(r1(R+518)){{goto L728b33;}}
}
B728b2a:L728b2a:{c.instructions+=2;NFSU2_TR(0x728b2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728b2b:{NFSU2_TR(0x728b2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728b30ull));
TAIL_STATIC(0x724894u,724);
}
B728b30:L728b30:{c.instructions+=1;NFSU2_TR(0x728b30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B728b32:L728b32:{c.instructions+=1;NFSU2_TR(0x728b32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B728b33:L728b33:{c.instructions+=4;NFSU2_TR(0x728b33);
w4(R+0,u32(m1(0x8b47f9)));
}
B728b3a:{NFSU2_TR(0x728b3a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B728b3b:{NFSU2_TR(0x728b3b);
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
B728b3d:{NFSU2_TR(0x728b3d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x728ab6u);}goto L728ab6;}}
}
B728b43:L728b43:{c.instructions+=1;NFSU2_TR(0x728b43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B728b44:L728b44:{c.instructions+=4;NFSU2_TR(0x728b44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B728b45:{NFSU2_TR(0x728b45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B728b46:{NFSU2_TR(0x728b46);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B728b47:{NFSU2_TR(0x728b47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B728b48:L728b48:{c.instructions+=13;NFSU2_TR(0x728b48);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728b49:{NFSU2_TR(0x728b49);
__builtin_memmove((R+20),(R+16),4);
}
B728b4b:{NFSU2_TR(0x728b4b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728b4c:{NFSU2_TR(0x728b4c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728b4d:{NFSU2_TR(0x728b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B728b50:{NFSU2_TR(0x728b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728b53:{NFSU2_TR(0x728b53);
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
B728b55:{NFSU2_TR(0x728b55);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728b56:{NFSU2_TR(0x728b56);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b48d4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728b5c:{NFSU2_TR(0x728b5c);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b48d0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728b62:{NFSU2_TR(0x728b62);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728b64:{NFSU2_TR(0x728b64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728b65:{NFSU2_TR(0x728b65);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728b67ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B728b67:L728b67:{c.instructions+=3;NFSU2_TR(0x728b67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B728b6a:{NFSU2_TR(0x728b6a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B728b6c:{NFSU2_TR(0x728b6c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L728bb5;}}
}
B728b6e:L728b6e:{c.instructions+=3;NFSU2_TR(0x728b6e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B728b70:{NFSU2_TR(0x728b70);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B728b76:{NFSU2_TR(0x728b76);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L728b8d;}}
}
B728b78:L728b78:{c.instructions+=7;NFSU2_TR(0x728b78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B728b7b:{NFSU2_TR(0x728b7b);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728b7e:{NFSU2_TR(0x728b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B728b81:{NFSU2_TR(0x728b81);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728b84:{NFSU2_TR(0x728b84);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B728b85:{NFSU2_TR(0x728b85);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B728b8b:{NFSU2_TR(0x728b8b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x728b78u);}goto L728b78;}}
}
B728b8d:L728b8d:{c.instructions+=3;NFSU2_TR(0x728b8d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B728b8f:{NFSU2_TR(0x728b8f);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b47f9),1);
w1(R+512,u8((r1(U+0))<(r1(R+4))));
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+4))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B728b95:{NFSU2_TR(0x728b95);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L728bae;}}
}
B728b97:L728b97:{c.instructions+=1;NFSU2_TR(0x728b97);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B728b9a:L728b9a:{c.instructions+=7;NFSU2_TR(0x728b9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B728b9d:{NFSU2_TR(0x728b9d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B728b9f:{NFSU2_TR(0x728b9f);
w4(R+8,u32(m1(0x8b47f9)));
}
B728ba6:{NFSU2_TR(0x728ba6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B728ba7:{NFSU2_TR(0x728ba7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B728baa:{NFSU2_TR(0x728baa);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B728bac:{NFSU2_TR(0x728bac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x728b9au);}goto L728b9a;}}
}
B728bae:L728bae:{c.instructions+=2;NFSU2_TR(0x728bae);
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
B728bb0:{NFSU2_TR(0x728bb0);
{goto L728cea;}
}
B728bb5:L728bb5:{c.instructions+=6;NFSU2_TR(0x728bb5);
__builtin_memmove((R+0),gp(0x8b48d4),4);
}
B728bba:{NFSU2_TR(0x728bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728bbd:{NFSU2_TR(0x728bbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728bc0:{NFSU2_TR(0x728bc0);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B728bc6:{NFSU2_TR(0x728bc6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728bc7:{NFSU2_TR(0x728bc7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L728c61;}}
}
B728bcd:L728bcd:{c.instructions+=5;NFSU2_TR(0x728bcd);
__builtin_memmove((R+0),gp(0x8b4804),4);
}
B728bd2:{NFSU2_TR(0x728bd2);
__builtin_memmove((R+8),(R+12),4);
}
B728bd4:{NFSU2_TR(0x728bd4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B728bd7:{NFSU2_TR(0x728bd7);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B728bdb:{NFSU2_TR(0x728bdb);
if(r1(R+518)){{goto L728c54;}}
}
B728bdd:L728bdd:{c.instructions+=10;NFSU2_TR(0x728bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728be0:{NFSU2_TR(0x728be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B728be3:{NFSU2_TR(0x728be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728be6:{NFSU2_TR(0x728be6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B728be9:{NFSU2_TR(0x728be9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728beb:{NFSU2_TR(0x728beb);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728bed:{NFSU2_TR(0x728bed);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B728bef:{NFSU2_TR(0x728bef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B728bf1:{NFSU2_TR(0x728bf1);
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
B728bf4:{NFSU2_TR(0x728bf4);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L728c24;}}
}
B728bf6:L728bf6:{c.instructions+=10;NFSU2_TR(0x728bf6);
__builtin_memmove((R+0),gp(0x8b47c4),4);
}
B728bfb:{NFSU2_TR(0x728bfb);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728bfd:{NFSU2_TR(0x728bfd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B728c00:{NFSU2_TR(0x728c00);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b48d4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728c06:{NFSU2_TR(0x728c06);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728c07:{NFSU2_TR(0x728c07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728c08:{NFSU2_TR(0x728c08);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728c0c:{NFSU2_TR(0x728c0c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728c0e:{NFSU2_TR(0x728c0e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728c11:{NFSU2_TR(0x728c11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728c16ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x728957u);}goto L728957;}
}
B728c16:L728c16:{c.instructions+=5;NFSU2_TR(0x728c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728c19:{NFSU2_TR(0x728c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B728c1c:{NFSU2_TR(0x728c1c);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728c1f:{NFSU2_TR(0x728c1f);
{u32 ea_=u32(r4(R+4)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728c22:{NFSU2_TR(0x728c22);
{goto L728c51;}
}
B728c24:L728c24:{c.instructions+=6;NFSU2_TR(0x728c24);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728c2a:{NFSU2_TR(0x728c2a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728c2c:{NFSU2_TR(0x728c2c);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B728c2e:{NFSU2_TR(0x728c2e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B728c30:{NFSU2_TR(0x728c30);
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
B728c33:{NFSU2_TR(0x728c33);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L728c54;}}
}
B728c35:L728c35:{c.instructions+=8;NFSU2_TR(0x728c35);
__builtin_memmove((R+0),gp(0x8b47c4),4);
}
B728c3a:{NFSU2_TR(0x728c3a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728c3c:{NFSU2_TR(0x728c3c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B728c3f:{NFSU2_TR(0x728c3f);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b48d4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728c45:{NFSU2_TR(0x728c45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728c46:{NFSU2_TR(0x728c46);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728c49:{NFSU2_TR(0x728c49);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728c4b:{NFSU2_TR(0x728c4b);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a04),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728c51ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B728c51:L728c51:{c.instructions+=1;NFSU2_TR(0x728c51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B728c54:L728c54:{c.instructions+=3;NFSU2_TR(0x728c54);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B728c55:{NFSU2_TR(0x728c55);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B728c5b:{NFSU2_TR(0x728c5b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x728bcdu);}goto L728bcd;}}
}
B728c61:L728c61:{c.instructions+=3;NFSU2_TR(0x728c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B728c65:{NFSU2_TR(0x728c65);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b47f9),1);
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
B728c6c:{NFSU2_TR(0x728c6c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L728ce6;}}
}
B728c6e:L728c6e:{c.instructions+=3;NFSU2_TR(0x728c6e);
w4(R+12,u32(0x8b48d4ull));
}
B728c73:{NFSU2_TR(0x728c73);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B728c76:{NFSU2_TR(0x728c76);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B728c78:L728c78:{c.instructions+=6;NFSU2_TR(0x728c78);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728c7a:{NFSU2_TR(0x728c7a);
{u32 ea_=u32(r4(R+28)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728c7d:{NFSU2_TR(0x728c7d);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B728c7f:{NFSU2_TR(0x728c7f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B728c81:{NFSU2_TR(0x728c81);
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
B728c84:{NFSU2_TR(0x728c84);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L728ca9;}}
}
B728c86:L728c86:{c.instructions+=9;NFSU2_TR(0x728c86);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B728c89:{NFSU2_TR(0x728c89);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728c8b:{NFSU2_TR(0x728c8b);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b48d4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728c91:{NFSU2_TR(0x728c91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728c92:{NFSU2_TR(0x728c92);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728c93:{NFSU2_TR(0x728c93);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728c97:{NFSU2_TR(0x728c97);
{u32 ea_=u32(r4(R+28)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728c9a:{NFSU2_TR(0x728c9a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728c9d:{NFSU2_TR(0x728c9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728ca2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x728957u);}goto L728957;}
}
B728ca2:L728ca2:{c.instructions+=3;NFSU2_TR(0x728ca2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B728ca4:{NFSU2_TR(0x728ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728ca7:{NFSU2_TR(0x728ca7);
{goto L728cd1;}
}
B728ca9:L728ca9:{c.instructions+=6;NFSU2_TR(0x728ca9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728caf:{NFSU2_TR(0x728caf);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728cb1:{NFSU2_TR(0x728cb1);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B728cb3:{NFSU2_TR(0x728cb3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B728cb5:{NFSU2_TR(0x728cb5);
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
B728cb8:{NFSU2_TR(0x728cb8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L728cd4;}}
}
B728cba:L728cba:{c.instructions+=7;NFSU2_TR(0x728cba);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B728cbd:{NFSU2_TR(0x728cbd);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728cbf:{NFSU2_TR(0x728cbf);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b48d4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728cc5:{NFSU2_TR(0x728cc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728cc6:{NFSU2_TR(0x728cc6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728cc9:{NFSU2_TR(0x728cc9);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728ccb:{NFSU2_TR(0x728ccb);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a04),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728cd1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B728cd1:L728cd1:{c.instructions+=1;NFSU2_TR(0x728cd1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B728cd4:L728cd4:{c.instructions+=5;NFSU2_TR(0x728cd4);
w4(R+0,u32(m1(0x8b47f9)));
}
B728cdb:{NFSU2_TR(0x728cdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B728cde:{NFSU2_TR(0x728cde);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B728ce1:{NFSU2_TR(0x728ce1);
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
B728ce4:{NFSU2_TR(0x728ce4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x728c78u);}goto L728c78;}}
}
B728ce6:L728ce6:{c.instructions+=3;NFSU2_TR(0x728ce6);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728ce8:{NFSU2_TR(0x728ce8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B728ce9:{NFSU2_TR(0x728ce9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B728cea:L728cea:{c.instructions+=4;NFSU2_TR(0x728cea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B728ceb:{NFSU2_TR(0x728ceb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B728cec:{NFSU2_TR(0x728cec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B728ced:{NFSU2_TR(0x728ced);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B728cee:L728cee:{c.instructions+=1;NFSU2_TR(0x728cee);
TAIL_STATIC(0x724792u,724);
}
B728cf3:L728cf3:{c.instructions+=1;NFSU2_TR(0x728cf3);
TAIL_STATIC(0x724894u,724);
}
B728cf8:L728cf8:{c.instructions+=4;NFSU2_TR(0x728cf8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728cf9:{NFSU2_TR(0x728cf9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728cfa:{NFSU2_TR(0x728cfa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728cfb:{NFSU2_TR(0x728cfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728d00ull));
TAIL_STATIC(0x721f99u,721);
}
B728d00:L728d00:{c.instructions+=1;NFSU2_TR(0x728d00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728d05ull));
TAIL_STATIC(0x726d58u,726);
}
B728d05:L728d05:{c.instructions+=4;NFSU2_TR(0x728d05);
__builtin_memmove((R+0),gp(0x8b4908),4);
}
B728d0a:{NFSU2_TR(0x728d0a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B728d0c:{NFSU2_TR(0x728d0c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B728d0e:{NFSU2_TR(0x728d0e);
if(r1(R+518)){{goto L728d1d;}}
}
B728d10:L728d10:{c.instructions+=2;NFSU2_TR(0x728d10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728d11:{NFSU2_TR(0x728d11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728d16ull));
TAIL_STATIC(0x724894u,724);
}
B728d16:L728d16:{c.instructions+=2;NFSU2_TR(0x728d16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B728d17:{NFSU2_TR(0x728d17);
__builtin_memmove(gp(0x8b4908),(R+12),4);
}
B728d1d:L728d1d:{c.instructions+=3;NFSU2_TR(0x728d1d);
__builtin_memmove((R+0),gp(0x8b4a00),4);
}
B728d22:{NFSU2_TR(0x728d22);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B728d24:{NFSU2_TR(0x728d24);
if(r1(R+518)){{goto L728d33;}}
}
B728d26:L728d26:{c.instructions+=2;NFSU2_TR(0x728d26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728d27:{NFSU2_TR(0x728d27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728d2cull));
TAIL_STATIC(0x724894u,724);
}
B728d2c:L728d2c:{c.instructions+=2;NFSU2_TR(0x728d2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B728d2d:{NFSU2_TR(0x728d2d);
__builtin_memmove(gp(0x8b4a00),(R+12),4);
}
B728d33:L728d33:{c.instructions+=1;NFSU2_TR(0x728d33);
w4(R+24,u32(0x8b48c8ull));
}
B728d38:L728d38:{c.instructions+=3;NFSU2_TR(0x728d38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B728d3a:{NFSU2_TR(0x728d3a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B728d3c:{NFSU2_TR(0x728d3c);
if(r1(R+518)){{goto L728d47;}}
}
B728d3e:L728d3e:{c.instructions+=2;NFSU2_TR(0x728d3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728d3f:{NFSU2_TR(0x728d3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728d44ull));
TAIL_STATIC(0x724894u,724);
}
B728d44:L728d44:{c.instructions+=2;NFSU2_TR(0x728d44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B728d45:{NFSU2_TR(0x728d45);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B728d47:L728d47:{c.instructions+=3;NFSU2_TR(0x728d47);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B728d4a:{NFSU2_TR(0x728d4a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8b48d0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8b48d0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B728d50:{NFSU2_TR(0x728d50);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x728d38u);}goto L728d38;}}
}
B728d52:L728d52:{c.instructions+=3;NFSU2_TR(0x728d52);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B728d54:{NFSU2_TR(0x728d54);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b47f9),1);
w1(R+512,u8((r1(U+0))<(r1(R+12))));
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B728d5a:{NFSU2_TR(0x728d5a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L728d7e;}}
}
B728d5c:L728d5c:{c.instructions+=4;NFSU2_TR(0x728d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b48d8ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B728d63:{NFSU2_TR(0x728d63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B728d65:{NFSU2_TR(0x728d65);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B728d67:{NFSU2_TR(0x728d67);
if(r1(R+518)){{goto L728d72;}}
}
B728d69:L728d69:{c.instructions+=2;NFSU2_TR(0x728d69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728d6a:{NFSU2_TR(0x728d6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728d6full));
TAIL_STATIC(0x724894u,724);
}
B728d6f:L728d6f:{c.instructions+=2;NFSU2_TR(0x728d6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B728d70:{NFSU2_TR(0x728d70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B728d72:L728d72:{c.instructions+=4;NFSU2_TR(0x728d72);
w4(R+0,u32(m1(0x8b47f9)));
}
B728d79:{NFSU2_TR(0x728d79);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B728d7a:{NFSU2_TR(0x728d7a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B728d7c:{NFSU2_TR(0x728d7c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x728d5cu);}goto L728d5c;}}
}
B728d7e:L728d7e:{c.instructions+=5;NFSU2_TR(0x728d7e);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b46c9),1);
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
B728d84:{NFSU2_TR(0x728d84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B728d85:{NFSU2_TR(0x728d85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B728d86:{NFSU2_TR(0x728d86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B728d87:{NFSU2_TR(0x728d87);
if(r1(R+518)){{goto L728d8f;}}
}
B728d89:L728d89:{c.instructions+=1;NFSU2_TR(0x728d89);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a0c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728d8full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B728d8f:L728d8f:{c.instructions+=4;NFSU2_TR(0x728d8f);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728d95:{NFSU2_TR(0x728d95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728d96:{NFSU2_TR(0x728d96);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728d99:{NFSU2_TR(0x728d99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728d9eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x728a93u);}goto L728a93;}
}
B728d9e:L728d9e:{c.instructions+=2;NFSU2_TR(0x728d9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B728d9f:{NFSU2_TR(0x728d9f);
TAIL_STATIC(0x721fa7u,721);
}
B728da4:L728da4:{c.instructions+=4;NFSU2_TR(0x728da4);
u8 U[1];
w1(U+0,u8(u32(m1(0x8b460f))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B728dab:{NFSU2_TR(0x728dab);
s4(0x8b4a08,u32(0x72c480ull));
}
B728db5:{NFSU2_TR(0x728db5);
s4(0x8b4a04,u32(0x72c3e0ull));
}
B728dbf:{NFSU2_TR(0x728dbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728dcb;}}
}
B728dc1:L728dc1:{c.instructions+=1;NFSU2_TR(0x728dc1);
s4(0x8b4a04,u32(0x72c360ull));
}
B728dcb:L728dcb:{c.instructions+=3;NFSU2_TR(0x728dcb);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b47fa),1);
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
B728dd2:{NFSU2_TR(0x728dd2);
s2(0x8b47fc,u16(0x200ull));
}
B728ddb:{NFSU2_TR(0x728ddb);
if(r1(R+518)){{goto L728dee;}}
}
B728ddd:L728ddd:{c.instructions+=3;NFSU2_TR(0x728ddd);
w2(R+0,u16(m1(0x8b47f9)));
}
B728de5:{NFSU2_TR(0x728de5);
u8 U[45];
w4(U+37,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B728de8:{NFSU2_TR(0x728de8);
__builtin_memmove(gp(0x8b47fc),(R+0),2);
}
B728dee:L728dee:{c.instructions+=1;NFSU2_TR(0x728dee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B728def:L728def:{c.instructions+=3;NFSU2_TR(0x728def);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B728df3:{NFSU2_TR(0x728df3);
__builtin_memmove(gp(0x8b47fe),(R+0),1);
}
B728df8:{NFSU2_TR(0x728df8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B728df9:L728df9:{c.instructions+=25;NFSU2_TR(0x728df9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728dfa:{NFSU2_TR(0x728dfa);
__builtin_memmove((R+20),(R+16),4);
}
B728dfc:{NFSU2_TR(0x728dfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B728dff:{NFSU2_TR(0x728dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B728e02:{NFSU2_TR(0x728e02);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728e03:{NFSU2_TR(0x728e03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728e04:{NFSU2_TR(0x728e04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B728e07:{NFSU2_TR(0x728e07);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x5cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B728e0a:{NFSU2_TR(0x728e0a);
w4(R+24,u32(u32(r4(R+24))+u32(m4(0x8b4a00))));
}
B728e10:{NFSU2_TR(0x728e10);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B728e12:{NFSU2_TR(0x728e12);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B728e14:{NFSU2_TR(0x728e14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728e15:{NFSU2_TR(0x728e15);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B728e16:{NFSU2_TR(0x728e16);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B728e19:{NFSU2_TR(0x728e19);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B728e1b:{NFSU2_TR(0x728e1b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B728e1e:{NFSU2_TR(0x728e1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728e21:{NFSU2_TR(0x728e21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728e24:{NFSU2_TR(0x728e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728e27:{NFSU2_TR(0x728e27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728e2a:{NFSU2_TR(0x728e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728e2d:{NFSU2_TR(0x728e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728e30:{NFSU2_TR(0x728e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728e33:{NFSU2_TR(0x728e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728e36:{NFSU2_TR(0x728e36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728e3c;}}
}
B728e38:L728e38:{c.instructions+=2;NFSU2_TR(0x728e38);
__builtin_memmove((R+0),(R+8),4);
}
B728e3a:{NFSU2_TR(0x728e3a);
{goto L728e74;}
}
B728e3c:L728e3c:{c.instructions+=2;NFSU2_TR(0x728e3c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B728e3f:{NFSU2_TR(0x728e3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728e48;}}
}
B728e41:L728e41:{c.instructions+=3;NFSU2_TR(0x728e41);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B728e43:{NFSU2_TR(0x728e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728e46:{NFSU2_TR(0x728e46);
{goto L728e74;}
}
B728e48:L728e48:{c.instructions+=2;NFSU2_TR(0x728e48);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B728e4b:{NFSU2_TR(0x728e4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728e51;}}
}
B728e4d:L728e4d:{c.instructions+=2;NFSU2_TR(0x728e4d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728e4f:{NFSU2_TR(0x728e4f);
{goto L728e73;}
}
B728e51:L728e51:{c.instructions+=2;NFSU2_TR(0x728e51);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B728e54:{NFSU2_TR(0x728e54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728e5a;}}
}
B728e56:L728e56:{c.instructions+=2;NFSU2_TR(0x728e56);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728e58:{NFSU2_TR(0x728e58);
{goto L728e73;}
}
B728e5a:L728e5a:{c.instructions+=2;NFSU2_TR(0x728e5a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x16ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B728e5d:{NFSU2_TR(0x728e5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728e63;}}
}
B728e5f:L728e5f:{c.instructions+=2;NFSU2_TR(0x728e5f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728e61:{NFSU2_TR(0x728e61);
{goto L728e73;}
}
B728e63:L728e63:{c.instructions+=2;NFSU2_TR(0x728e63);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B728e66:{NFSU2_TR(0x728e66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728e6c;}}
}
B728e68:L728e68:{c.instructions+=2;NFSU2_TR(0x728e68);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728e6a:{NFSU2_TR(0x728e6a);
{goto L728e73;}
}
B728e6c:L728e6c:{c.instructions+=2;NFSU2_TR(0x728e6c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B728e6f:{NFSU2_TR(0x728e6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728e74;}}
}
B728e71:L728e71:{c.instructions+=1;NFSU2_TR(0x728e71);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728e73:L728e73:{c.instructions+=1;NFSU2_TR(0x728e73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B728e74:L728e74:{c.instructions+=2;NFSU2_TR(0x728e74);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B728e77:{NFSU2_TR(0x728e77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728e82;}}
}
B728e79:L728e79:{c.instructions+=2;NFSU2_TR(0x728e79);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B728e7c:{NFSU2_TR(0x728e7c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L728e8a;}}
}
B728e7e:L728e7e:{c.instructions+=2;NFSU2_TR(0x728e7e);
__builtin_memmove((R+28),(R+8),4);
}
B728e80:{NFSU2_TR(0x728e80);
{goto L728e8a;}
}
B728e82:L728e82:{c.instructions+=2;NFSU2_TR(0x728e82);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B728e85:{NFSU2_TR(0x728e85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L728e8a;}}
}
B728e87:L728e87:{c.instructions+=2;NFSU2_TR(0x728e87);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728e89:{NFSU2_TR(0x728e89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B728e8a:L728e8a:{c.instructions+=5;NFSU2_TR(0x728e8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B728e8d:{NFSU2_TR(0x728e8d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B728e8f:{NFSU2_TR(0x728e8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B728e92:{NFSU2_TR(0x728e92);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8b4808ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B728e98:{NFSU2_TR(0x728e98);
if(r1(R+518)){{goto L728f20;}}
}
B728e9e:L728e9e:{c.instructions+=2;NFSU2_TR(0x728e9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8b4868ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B728ea4:{NFSU2_TR(0x728ea4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728ea9ull));
TAIL_STATIC(0x724792u,724);
}
B728ea9:L728ea9:{c.instructions+=30;NFSU2_TR(0x728ea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728eac:{NFSU2_TR(0x728eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728eaf:{NFSU2_TR(0x728eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728eb2:{NFSU2_TR(0x728eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728eb5:{NFSU2_TR(0x728eb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728eb8:{NFSU2_TR(0x728eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728ebb:{NFSU2_TR(0x728ebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728ebe:{NFSU2_TR(0x728ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728ec1:{NFSU2_TR(0x728ec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728ec4:{NFSU2_TR(0x728ec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728ec7:{NFSU2_TR(0x728ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728eca:{NFSU2_TR(0x728eca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728ecd:{NFSU2_TR(0x728ecd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B728ed0:{NFSU2_TR(0x728ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728ed3:{NFSU2_TR(0x728ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728ed6:{NFSU2_TR(0x728ed6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728ed9:{NFSU2_TR(0x728ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728edc:{NFSU2_TR(0x728edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728edf:{NFSU2_TR(0x728edf);
w4(R+0,u32(m1(0x8b460f)));
}
B728ee6:{NFSU2_TR(0x728ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728ee9:{NFSU2_TR(0x728ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728eec:{NFSU2_TR(0x728eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728eef:{NFSU2_TR(0x728eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728ef2:{NFSU2_TR(0x728ef2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w2(U+4,u16(0xf0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B728ef8:{NFSU2_TR(0x728ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728efb:{NFSU2_TR(0x728efb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B728efe:{NFSU2_TR(0x728efe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B728f01:{NFSU2_TR(0x728f01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728f02:{NFSU2_TR(0x728f02);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B728f05:{NFSU2_TR(0x728f05);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8b4808ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728f0bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B728f0b:L728f0b:{c.instructions+=6;NFSU2_TR(0x728f0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728f0e:{NFSU2_TR(0x728f0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B728f11:{NFSU2_TR(0x728f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728f14:{NFSU2_TR(0x728f14);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B728f17:{NFSU2_TR(0x728f17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728f18:{NFSU2_TR(0x728f18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728f1dull));
TAIL_STATIC(0x72a1e9u,72a);
}
B728f1d:L728f1d:{c.instructions+=1;NFSU2_TR(0x728f1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B728f20:L728f20:{c.instructions+=2;NFSU2_TR(0x728f20);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B728f23:{NFSU2_TR(0x728f23);
if(r1(R+518)){{goto L728f6d;}}
}
B728f25:L728f25:{c.instructions+=2;NFSU2_TR(0x728f25);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B728f28:{NFSU2_TR(0x728f28);
if(r1(R+518)){{goto L728f2e;}}
}
B728f2a:L728f2a:{c.instructions+=1;NFSU2_TR(0x728f2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B728f2e:L728f2e:{c.instructions+=2;NFSU2_TR(0x728f2e);
u8 U[4];
w4(U+0,u32(0x1834ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728f33:{NFSU2_TR(0x728f33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728f38ull));
TAIL_STATIC(0x724792u,724);
}
B728f38:L728f38:{c.instructions+=11;NFSU2_TR(0x728f38);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B728f3b:{NFSU2_TR(0x728f3b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B728f3e:{NFSU2_TR(0x728f3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B728f41:{NFSU2_TR(0x728f41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728f44:{NFSU2_TR(0x728f44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B728f47:{NFSU2_TR(0x728f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728f4a:{NFSU2_TR(0x728f4a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w2(U+4,u16(0xc8ull));
s2(u32(r4(U+0)),r2(U+4));
}
B728f50:{NFSU2_TR(0x728f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728f53:{NFSU2_TR(0x728f53);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B728f56:{NFSU2_TR(0x728f56);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B728f59:{NFSU2_TR(0x728f59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728f5eull));
TAIL_STATIC(0x72ca41u,72c);
}
B728f5e:L728f5e:{c.instructions+=4;NFSU2_TR(0x728f5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B728f61:{NFSU2_TR(0x728f61);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B728f64:{NFSU2_TR(0x728f64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728f65:{NFSU2_TR(0x728f65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x728f6aull));
TAIL_STATIC(0x72a1e9u,72a);
}
B728f6a:L728f6a:{c.instructions+=1;NFSU2_TR(0x728f6a);
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
B728f6d:L728f6d:{c.instructions+=6;NFSU2_TR(0x728f6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B728f6e:{NFSU2_TR(0x728f6e);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+24)),r1(U+0));
}
B728f71:{NFSU2_TR(0x728f71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B728f72:{NFSU2_TR(0x728f72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B728f73:{NFSU2_TR(0x728f73);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B728f74:{NFSU2_TR(0x728f74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B728f75:L728f75:{c.instructions+=11;NFSU2_TR(0x728f75);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B728f79:{NFSU2_TR(0x728f79);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B728f7b:{NFSU2_TR(0x728f7b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x5cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B728f7e:{NFSU2_TR(0x728f7e);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b4a00))));
}
B728f84:{NFSU2_TR(0x728f84);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B728f86:{NFSU2_TR(0x728f86);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B728f89:{NFSU2_TR(0x728f89);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B728f8b:{NFSU2_TR(0x728f8b);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728f8e:{NFSU2_TR(0x728f8e);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+8)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B728f94:{NFSU2_TR(0x728f94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728f95:{NFSU2_TR(0x728f95);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L728fae;}}
}
B728f97:L728f97:{c.instructions+=1;NFSU2_TR(0x728f97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728f98:L728f98:{c.instructions+=7;NFSU2_TR(0x728f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B728f9b:{NFSU2_TR(0x728f9b);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728f9e:{NFSU2_TR(0x728f9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B728fa1:{NFSU2_TR(0x728fa1);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B728fa4:{NFSU2_TR(0x728fa4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B728fa5:{NFSU2_TR(0x728fa5);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B728fab:{NFSU2_TR(0x728fab);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x728f98u);}goto L728f98;}}
}
B728fad:L728fad:{c.instructions+=1;NFSU2_TR(0x728fad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B728fae:L728fae:{c.instructions+=2;NFSU2_TR(0x728fae);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b47f9),1);
w1(R+512,u8((r1(U+3))<(r1(R+8))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+8)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B728fb4:{NFSU2_TR(0x728fb4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L728fcd;}}
}
B728fb6:L728fb6:{c.instructions+=1;NFSU2_TR(0x728fb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B728fb9:L728fb9:{c.instructions+=7;NFSU2_TR(0x728fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B728fbc:{NFSU2_TR(0x728fbc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B728fbe:{NFSU2_TR(0x728fbe);
w4(R+24,u32(m1(0x8b47f9)));
}
B728fc5:{NFSU2_TR(0x728fc5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B728fc6:{NFSU2_TR(0x728fc6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B728fc9:{NFSU2_TR(0x728fc9);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B728fcb:{NFSU2_TR(0x728fcb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x728fb9u);}goto L728fb9;}}
}
B728fcd:L728fcd:{c.instructions+=3;NFSU2_TR(0x728fcd);
u8 U[1];
w1(U+0,u8(0x2ull));
s1(u32(r4(R+0)),r1(U+0));
}
B728fd0:{NFSU2_TR(0x728fd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B728fd1:{NFSU2_TR(0x728fd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B728fd2:L728fd2:{c.instructions+=8;NFSU2_TR(0x728fd2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728fd3:{NFSU2_TR(0x728fd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B728fd7:{NFSU2_TR(0x728fd7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x5cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B728fda:{NFSU2_TR(0x728fda);
w4(R+24,u32(u32(r4(R+24))+u32(m4(0x8b4a00))));
}
B728fe0:{NFSU2_TR(0x728fe0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B728fe2:{NFSU2_TR(0x728fe2);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+4)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B728fe8:{NFSU2_TR(0x728fe8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B728fe9:{NFSU2_TR(0x728fe9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x729009u,729);}
}
B728feb:L728feb:{c.instructions+=8;NFSU2_TR(0x728feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B728fee:{NFSU2_TR(0x728fee);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B728ff1:{NFSU2_TR(0x728ff1);
__builtin_memmove((R+0),gp(0x8b4924),4);
}
B728ff6:{NFSU2_TR(0x728ff6);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B728ff9:{NFSU2_TR(0x728ff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B728ffc:{NFSU2_TR(0x728ffc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B728ffd:{NFSU2_TR(0x728ffd);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B728fff:{NFSU2_TR(0x728fff);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
TAIL_STATIC(0x729001u,729);
}
XIT:NFSU2_TR_EXIT(0x728,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
