#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_642(u8* __restrict R,Cpu& c);
u32 body_643(u8* __restrict R,Cpu& c);
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x644,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x644,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_644(u8* __restrict R,Cpu& c);
u32 page_644(Cpu& c){return body_644(c.regs.data(),c);}
__attribute__((noinline)) u32 body_644(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x644002:goto L644002;
case 0x644005:c.instructions+=1;goto B644005;
case 0x64400a:goto L64400a;
case 0x64400d:c.instructions+=2;goto B64400d;
case 0x64400f:c.instructions+=1;goto B64400f;
case 0x644011:goto L644011;
case 0x644014:c.instructions+=13;goto B644014;
case 0x644017:c.instructions+=12;goto B644017;
case 0x644019:c.instructions+=11;goto B644019;
case 0x64401c:c.instructions+=10;goto B64401c;
case 0x64401f:c.instructions+=9;goto B64401f;
case 0x644021:c.instructions+=8;goto B644021;
case 0x644024:c.instructions+=7;goto B644024;
case 0x644026:c.instructions+=6;goto B644026;
case 0x644029:c.instructions+=5;goto B644029;
case 0x64402b:c.instructions+=4;goto B64402b;
case 0x64402e:c.instructions+=3;goto B64402e;
case 0x644030:c.instructions+=2;goto B644030;
case 0x644032:c.instructions+=1;goto B644032;
case 0x644037:goto L644037;
case 0x644039:c.instructions+=1;goto B644039;
case 0x64403b:goto L64403b;
case 0x64403d:goto L64403d;
case 0x64403e:c.instructions+=4;goto B64403e;
case 0x64403f:c.instructions+=3;goto B64403f;
case 0x644040:c.instructions+=2;goto B644040;
case 0x644041:c.instructions+=1;goto B644041;
case 0x644044:goto L644044;
case 0x644046:c.instructions+=11;goto B644046;
case 0x644047:c.instructions+=10;goto B644047;
case 0x644049:c.instructions+=9;goto B644049;
case 0x64404a:c.instructions+=8;goto B64404a;
case 0x64404b:c.instructions+=7;goto B64404b;
case 0x64404e:c.instructions+=6;goto B64404e;
case 0x644050:c.instructions+=5;goto B644050;
case 0x644052:c.instructions+=4;goto B644052;
case 0x644055:c.instructions+=3;goto B644055;
case 0x644058:c.instructions+=2;goto B644058;
case 0x64405b:c.instructions+=1;goto B64405b;
case 0x644060:goto L644060;
case 0x644062:c.instructions+=2;goto B644062;
case 0x644064:c.instructions+=1;goto B644064;
case 0x644066:goto L644066;
case 0x64406b:c.instructions+=4;goto B64406b;
case 0x644070:c.instructions+=3;goto B644070;
case 0x644072:c.instructions+=2;goto B644072;
case 0x644075:c.instructions+=1;goto B644075;
case 0x64407a:goto L64407a;
case 0x64407d:c.instructions+=2;goto B64407d;
case 0x64407f:c.instructions+=1;goto B64407f;
case 0x644081:goto L644081;
case 0x644084:c.instructions+=11;goto B644084;
case 0x644087:c.instructions+=10;goto B644087;
case 0x64408a:c.instructions+=9;goto B64408a;
case 0x64408d:c.instructions+=8;goto B64408d;
case 0x64408f:c.instructions+=7;goto B64408f;
case 0x644091:c.instructions+=6;goto B644091;
case 0x644092:c.instructions+=5;goto B644092;
case 0x644095:c.instructions+=4;goto B644095;
case 0x644096:c.instructions+=3;goto B644096;
case 0x644098:c.instructions+=2;goto B644098;
case 0x64409b:c.instructions+=1;goto B64409b;
case 0x6440a0:goto L6440a0;
case 0x6440a2:c.instructions+=1;goto B6440a2;
case 0x6440a4:goto L6440a4;
case 0x6440a6:goto L6440a6;
case 0x6440a7:c.instructions+=3;goto B6440a7;
case 0x6440a8:c.instructions+=2;goto B6440a8;
case 0x6440a9:c.instructions+=1;goto B6440a9;
case 0x6440ac:goto L6440ac;
case 0x6440ae:c.instructions+=9;goto B6440ae;
case 0x6440af:c.instructions+=8;goto B6440af;
case 0x6440b1:c.instructions+=7;goto B6440b1;
case 0x6440b3:c.instructions+=6;goto B6440b3;
case 0x6440b6:c.instructions+=5;goto B6440b6;
case 0x6440ba:c.instructions+=4;goto B6440ba;
case 0x6440bc:c.instructions+=3;goto B6440bc;
case 0x6440c3:c.instructions+=2;goto B6440c3;
case 0x6440c4:c.instructions+=1;goto B6440c4;
case 0x6440c7:goto L6440c7;
case 0x6440c9:c.instructions+=4;goto B6440c9;
case 0x6440ca:c.instructions+=3;goto B6440ca;
case 0x6440cd:c.instructions+=2;goto B6440cd;
case 0x6440cf:c.instructions+=1;goto B6440cf;
case 0x6440d1:goto L6440d1;
case 0x6440d3:c.instructions+=1;goto B6440d3;
case 0x6440d8:goto L6440d8;
case 0x6440d9:c.instructions+=1;goto B6440d9;
case 0x6440de:goto L6440de;
case 0x6440df:goto L6440df;
case 0x6440e0:c.instructions+=1;goto B6440e0;
case 0x6440e1:goto L6440e1;
case 0x6440e3:c.instructions+=5;goto B6440e3;
case 0x6440e4:c.instructions+=4;goto B6440e4;
case 0x6440e6:c.instructions+=3;goto B6440e6;
case 0x6440e7:c.instructions+=2;goto B6440e7;
case 0x6440e9:c.instructions+=1;goto B6440e9;
case 0x6440ee:goto L6440ee;
case 0x6440f2:c.instructions+=1;goto B6440f2;
case 0x6440f4:goto L6440f4;
case 0x6440f5:c.instructions+=1;goto B6440f5;
case 0x6440fa:goto L6440fa;
case 0x6440fb:goto L6440fb;
case 0x6440fd:c.instructions+=3;goto B6440fd;
case 0x6440fe:c.instructions+=2;goto B6440fe;
case 0x6440ff:c.instructions+=1;goto B6440ff;
case 0x644102:goto L644102;
case 0x644104:c.instructions+=4;goto B644104;
case 0x644105:c.instructions+=3;goto B644105;
case 0x644108:c.instructions+=2;goto B644108;
case 0x64410a:c.instructions+=1;goto B64410a;
case 0x64410c:goto L64410c;
case 0x64410e:c.instructions+=1;goto B64410e;
case 0x644113:goto L644113;
case 0x644114:c.instructions+=1;goto B644114;
case 0x644119:goto L644119;
case 0x64411a:goto L64411a;
case 0x64411b:c.instructions+=1;goto B64411b;
case 0x64411c:goto L64411c;
case 0x64411e:c.instructions+=5;goto B64411e;
case 0x64411f:c.instructions+=4;goto B64411f;
case 0x644121:c.instructions+=3;goto B644121;
case 0x644122:c.instructions+=2;goto B644122;
case 0x644124:c.instructions+=1;goto B644124;
case 0x644129:goto L644129;
case 0x64412d:c.instructions+=1;goto B64412d;
case 0x64412f:goto L64412f;
case 0x644130:c.instructions+=1;goto B644130;
case 0x644135:goto L644135;
case 0x644136:goto L644136;
case 0x644138:c.instructions+=3;goto B644138;
case 0x644139:c.instructions+=2;goto B644139;
case 0x64413a:c.instructions+=1;goto B64413a;
case 0x64413d:goto L64413d;
case 0x64413f:c.instructions+=6;goto B64413f;
case 0x644140:c.instructions+=5;goto B644140;
case 0x644142:c.instructions+=4;goto B644142;
case 0x644143:c.instructions+=3;goto B644143;
case 0x644145:c.instructions+=2;goto B644145;
case 0x644147:c.instructions+=1;goto B644147;
case 0x64414c:goto L64414c;
case 0x64414e:c.instructions+=3;goto B64414e;
case 0x644151:c.instructions+=2;goto B644151;
case 0x644152:c.instructions+=1;goto B644152;
case 0x644154:goto L644154;
case 0x644155:c.instructions+=2;goto B644155;
case 0x644157:c.instructions+=1;goto B644157;
case 0x64415c:goto L64415c;
case 0x64415e:goto L64415e;
case 0x644160:goto L644160;
case 0x644162:c.instructions+=1;goto B644162;
case 0x644164:goto L644164;
case 0x644169:c.instructions+=1;goto B644169;
case 0x64416b:goto L64416b;
case 0x64416e:c.instructions+=4;goto B64416e;
case 0x644171:c.instructions+=3;goto B644171;
case 0x644174:c.instructions+=2;goto B644174;
case 0x64417a:c.instructions+=1;goto B64417a;
case 0x64417c:goto L64417c;
case 0x64417d:c.instructions+=2;goto B64417d;
case 0x64417e:c.instructions+=1;goto B64417e;
case 0x644181:goto L644181;
case 0x644183:c.instructions+=5;goto B644183;
case 0x644184:c.instructions+=4;goto B644184;
case 0x644186:c.instructions+=3;goto B644186;
case 0x644189:c.instructions+=2;goto B644189;
case 0x64418b:c.instructions+=1;goto B64418b;
case 0x64418d:goto L64418d;
case 0x644193:c.instructions+=2;goto B644193;
case 0x644196:c.instructions+=1;goto B644196;
case 0x644198:goto L644198;
case 0x64419b:c.instructions+=2;goto B64419b;
case 0x64419d:c.instructions+=1;goto B64419d;
case 0x64419f:goto L64419f;
case 0x6441a5:c.instructions+=2;goto B6441a5;
case 0x6441a8:c.instructions+=1;goto B6441a8;
case 0x6441aa:goto L6441aa;
case 0x6441ac:c.instructions+=2;goto B6441ac;
case 0x6441ad:c.instructions+=1;goto B6441ad;
case 0x6441b0:goto L6441b0;
case 0x6441b2:c.instructions+=4;goto B6441b2;
case 0x6441b3:c.instructions+=3;goto B6441b3;
case 0x6441b5:c.instructions+=2;goto B6441b5;
case 0x6441bb:c.instructions+=1;goto B6441bb;
case 0x6441bd:goto L6441bd;
case 0x6441bf:goto L6441bf;
case 0x6441c2:c.instructions+=2;goto B6441c2;
case 0x6441c4:c.instructions+=1;goto B6441c4;
case 0x6441c6:goto L6441c6;
case 0x6441c9:c.instructions+=2;goto B6441c9;
case 0x6441cb:c.instructions+=1;goto B6441cb;
case 0x6441cd:goto L6441cd;
case 0x6441cf:c.instructions+=1;goto B6441cf;
case 0x6441d1:goto L6441d1;
case 0x6441d4:c.instructions+=2;goto B6441d4;
case 0x6441d6:c.instructions+=1;goto B6441d6;
case 0x6441d8:goto L6441d8;
case 0x6441db:c.instructions+=3;goto B6441db;
case 0x6441dd:c.instructions+=2;goto B6441dd;
case 0x6441df:c.instructions+=1;goto B6441df;
case 0x6441e1:goto L6441e1;
case 0x6441e3:c.instructions+=2;goto B6441e3;
case 0x6441e5:c.instructions+=1;goto B6441e5;
case 0x6441e7:goto L6441e7;
case 0x6441ea:goto L6441ea;
case 0x6441ec:c.instructions+=2;goto B6441ec;
case 0x6441ed:c.instructions+=1;goto B6441ed;
case 0x6441f0:goto L6441f0;
case 0x6441f2:c.instructions+=8;goto B6441f2;
case 0x6441f3:c.instructions+=7;goto B6441f3;
case 0x6441f5:c.instructions+=6;goto B6441f5;
case 0x6441fb:c.instructions+=5;goto B6441fb;
case 0x6441fc:c.instructions+=4;goto B6441fc;
case 0x6441ff:c.instructions+=3;goto B6441ff;
case 0x644203:c.instructions+=2;goto B644203;
case 0x64420a:c.instructions+=1;goto B64420a;
case 0x644210:goto L644210;
case 0x644211:c.instructions+=6;goto B644211;
case 0x644214:c.instructions+=5;goto B644214;
case 0x644215:c.instructions+=4;goto B644215;
case 0x644217:c.instructions+=3;goto B644217;
case 0x644218:c.instructions+=2;goto B644218;
case 0x64421d:c.instructions+=1;goto B64421d;
case 0x64421f:goto L64421f;
case 0x644221:goto L644221;
case 0x644222:c.instructions+=2;goto B644222;
case 0x644223:c.instructions+=1;goto B644223;
case 0x644225:goto L644225;
case 0x644228:c.instructions+=1;goto B644228;
case 0x64422a:goto L64422a;
case 0x644230:c.instructions+=2;goto B644230;
case 0x644233:c.instructions+=1;goto B644233;
case 0x644235:goto L644235;
case 0x64423b:c.instructions+=6;goto B64423b;
case 0x64423e:c.instructions+=5;goto B64423e;
case 0x644243:c.instructions+=4;goto B644243;
case 0x644248:c.instructions+=3;goto B644248;
case 0x644249:c.instructions+=2;goto B644249;
case 0x64424a:c.instructions+=1;goto B64424a;
case 0x64424f:goto L64424f;
case 0x644252:c.instructions+=1;goto B644252;
case 0x644254:goto L644254;
case 0x64425a:c.instructions+=4;goto B64425a;
case 0x64425b:c.instructions+=3;goto B64425b;
case 0x644260:c.instructions+=2;goto B644260;
case 0x644263:c.instructions+=1;goto B644263;
case 0x644268:goto L644268;
case 0x64426a:goto L64426a;
case 0x64426d:c.instructions+=6;goto B64426d;
case 0x64426e:c.instructions+=5;goto B64426e;
case 0x644271:c.instructions+=4;goto B644271;
case 0x644277:c.instructions+=3;goto B644277;
case 0x64427c:c.instructions+=2;goto B64427c;
case 0x64427d:c.instructions+=1;goto B64427d;
case 0x644282:goto L644282;
case 0x644288:c.instructions+=9;goto B644288;
case 0x644289:c.instructions+=8;goto B644289;
case 0x64428e:c.instructions+=7;goto B64428e;
case 0x644294:c.instructions+=6;goto B644294;
case 0x644296:c.instructions+=5;goto B644296;
case 0x644297:c.instructions+=4;goto B644297;
case 0x64429a:c.instructions+=3;goto B64429a;
case 0x64429b:c.instructions+=2;goto B64429b;
case 0x64429f:c.instructions+=1;goto B64429f;
case 0x6442a4:goto L6442a4;
case 0x6442a7:goto L6442a7;
case 0x6442a8:c.instructions+=2;goto B6442a8;
case 0x6442a9:c.instructions+=1;goto B6442a9;
case 0x6442aa:goto L6442aa;
case 0x6442ac:c.instructions+=7;goto B6442ac;
case 0x6442ad:c.instructions+=6;goto B6442ad;
case 0x6442af:c.instructions+=5;goto B6442af;
case 0x6442b5:c.instructions+=4;goto B6442b5;
case 0x6442b8:c.instructions+=3;goto B6442b8;
case 0x6442bb:c.instructions+=2;goto B6442bb;
case 0x6442c2:c.instructions+=1;goto B6442c2;
case 0x6442c4:goto L6442c4;
case 0x6442ca:c.instructions+=1;goto B6442ca;
case 0x6442cd:goto L6442cd;
case 0x6442d0:c.instructions+=2;goto B6442d0;
case 0x6442d2:c.instructions+=1;goto B6442d2;
case 0x6442d4:goto L6442d4;
case 0x6442da:c.instructions+=1;goto B6442da;
case 0x6442dd:goto L6442dd;
case 0x6442df:c.instructions+=2;goto B6442df;
case 0x6442e0:c.instructions+=1;goto B6442e0;
case 0x6442e3:goto L6442e3;
case 0x6442e5:c.instructions+=13;goto B6442e5;
case 0x6442e6:c.instructions+=12;goto B6442e6;
case 0x6442e8:c.instructions+=11;goto B6442e8;
case 0x6442ee:c.instructions+=10;goto B6442ee;
case 0x6442ef:c.instructions+=9;goto B6442ef;
case 0x6442f1:c.instructions+=8;goto B6442f1;
case 0x6442f7:c.instructions+=7;goto B6442f7;
case 0x6442fd:c.instructions+=6;goto B6442fd;
case 0x6442fe:c.instructions+=5;goto B6442fe;
case 0x644304:c.instructions+=4;goto B644304;
case 0x644305:c.instructions+=3;goto B644305;
case 0x644308:c.instructions+=2;goto B644308;
case 0x644309:c.instructions+=1;goto B644309;
case 0x64430e:goto L64430e;
case 0x644310:c.instructions+=2;goto B644310;
case 0x644312:c.instructions+=1;goto B644312;
case 0x644318:goto L644318;
case 0x64431a:c.instructions+=5;goto B64431a;
case 0x64431d:c.instructions+=4;goto B64431d;
case 0x64431e:c.instructions+=3;goto B64431e;
case 0x644320:c.instructions+=2;goto B644320;
case 0x644321:c.instructions+=1;goto B644321;
case 0x644323:goto L644323;
case 0x644324:c.instructions+=1;goto B644324;
case 0x644326:goto L644326;
case 0x64432b:c.instructions+=2;goto B64432b;
case 0x64432c:c.instructions+=1;goto B64432c;
case 0x644331:goto L644331;
case 0x644332:c.instructions+=1;goto B644332;
case 0x644333:goto L644333;
case 0x644338:c.instructions+=1;goto B644338;
case 0x64433d:goto L64433d;
case 0x644340:c.instructions+=1;goto B644340;
case 0x644342:goto L644342;
case 0x644345:goto L644345;
case 0x64434b:c.instructions+=4;goto B64434b;
case 0x64434d:c.instructions+=3;goto B64434d;
case 0x644353:c.instructions+=2;goto B644353;
case 0x644356:c.instructions+=1;goto B644356;
case 0x644358:goto L644358;
case 0x64435e:c.instructions+=2;goto B64435e;
case 0x644361:c.instructions+=1;goto B644361;
case 0x644363:goto L644363;
case 0x644368:c.instructions+=3;goto B644368;
case 0x64436d:c.instructions+=2;goto B64436d;
case 0x64436e:c.instructions+=1;goto B64436e;
case 0x644370:goto L644370;
case 0x644376:c.instructions+=2;goto B644376;
case 0x644378:c.instructions+=1;goto B644378;
case 0x64437a:goto L64437a;
case 0x64437d:c.instructions+=3;goto B64437d;
case 0x64437e:c.instructions+=2;goto B64437e;
case 0x644380:c.instructions+=1;goto B644380;
case 0x644382:goto L644382;
case 0x644385:c.instructions+=1;goto B644385;
case 0x644387:goto L644387;
case 0x64438c:c.instructions+=3;goto B64438c;
case 0x644391:c.instructions+=2;goto B644391;
case 0x644397:c.instructions+=1;goto B644397;
case 0x644398:goto L644398;
case 0x64439b:c.instructions+=2;goto B64439b;
case 0x64439c:c.instructions+=1;goto B64439c;
case 0x6443a1:goto L6443a1;
case 0x6443a4:c.instructions+=3;goto B6443a4;
case 0x6443a7:c.instructions+=2;goto B6443a7;
case 0x6443aa:c.instructions+=1;goto B6443aa;
case 0x6443ac:goto L6443ac;
case 0x6443ae:c.instructions+=1;goto B6443ae;
case 0x6443b4:goto L6443b4;
case 0x6443b7:c.instructions+=7;goto B6443b7;
case 0x6443b8:c.instructions+=6;goto B6443b8;
case 0x6443be:c.instructions+=5;goto B6443be;
case 0x6443bf:c.instructions+=4;goto B6443bf;
case 0x6443c4:c.instructions+=3;goto B6443c4;
case 0x6443c5:c.instructions+=2;goto B6443c5;
case 0x6443c8:c.instructions+=1;goto B6443c8;
case 0x6443ce:goto L6443ce;
case 0x6443d1:c.instructions+=1;goto B6443d1;
case 0x6443d7:goto L6443d7;
case 0x6443d9:c.instructions+=3;goto B6443d9;
case 0x6443db:c.instructions+=2;goto B6443db;
case 0x6443dd:c.instructions+=1;goto B6443dd;
case 0x6443df:goto L6443df;
case 0x6443e1:c.instructions+=1;goto B6443e1;
case 0x6443e3:goto L6443e3;
case 0x6443e6:c.instructions+=3;goto B6443e6;
case 0x6443e8:c.instructions+=2;goto B6443e8;
case 0x6443eb:c.instructions+=1;goto B6443eb;
case 0x6443ed:goto L6443ed;
case 0x6443ee:c.instructions+=5;goto B6443ee;
case 0x6443ef:c.instructions+=4;goto B6443ef;
case 0x6443f0:c.instructions+=3;goto B6443f0;
case 0x6443f1:c.instructions+=2;goto B6443f1;
case 0x6443f3:c.instructions+=1;goto B6443f3;
case 0x6443f5:goto L6443f5;
case 0x6443f7:c.instructions+=1;goto B6443f7;
case 0x6443f9:goto L6443f9;
case 0x6443fb:c.instructions+=1;goto B6443fb;
case 0x6443fe:goto L6443fe;
case 0x644400:c.instructions+=1;goto B644400;
case 0x644402:goto L644402;
case 0x644405:c.instructions+=7;goto B644405;
case 0x64440b:c.instructions+=6;goto B64440b;
case 0x64440e:c.instructions+=5;goto B64440e;
case 0x644414:c.instructions+=4;goto B644414;
case 0x644419:c.instructions+=3;goto B644419;
case 0x64441a:c.instructions+=2;goto B64441a;
case 0x64441b:c.instructions+=1;goto B64441b;
case 0x644420:goto L644420;
case 0x644423:c.instructions+=8;goto B644423;
case 0x644426:c.instructions+=7;goto B644426;
case 0x644427:c.instructions+=6;goto B644427;
case 0x64442d:c.instructions+=5;goto B64442d;
case 0x64442e:c.instructions+=4;goto B64442e;
case 0x64442f:c.instructions+=3;goto B64442f;
case 0x644435:c.instructions+=2;goto B644435;
case 0x644436:c.instructions+=1;goto B644436;
case 0x64443c:goto L64443c;
case 0x644442:c.instructions+=3;goto B644442;
case 0x644444:c.instructions+=2;goto B644444;
case 0x644447:c.instructions+=1;goto B644447;
case 0x644448:goto L644448;
case 0x64444e:c.instructions+=2;goto B64444e;
case 0x644450:c.instructions+=1;goto B644450;
case 0x644452:goto L644452;
case 0x644456:c.instructions+=1;goto B644456;
case 0x644458:goto L644458;
case 0x64445b:c.instructions+=2;goto B64445b;
case 0x64445e:c.instructions+=1;goto B64445e;
case 0x644460:goto L644460;
case 0x644464:goto L644464;
case 0x644466:c.instructions+=1;goto B644466;
case 0x64446b:goto L64446b;
case 0x64446d:c.instructions+=2;goto B64446d;
case 0x64446e:c.instructions+=1;goto B64446e;
case 0x644470:goto L644470;
case 0x644472:c.instructions+=1;goto B644472;
case 0x644477:goto L644477;
case 0x644479:c.instructions+=1;goto B644479;
case 0x64447b:goto L64447b;
case 0x64447d:goto L64447d;
case 0x64447f:c.instructions+=1;goto B64447f;
case 0x644481:goto L644481;
case 0x644486:c.instructions+=1;goto B644486;
case 0x644488:goto L644488;
case 0x64448b:c.instructions+=11;goto B64448b;
case 0x64448e:c.instructions+=10;goto B64448e;
case 0x644491:c.instructions+=9;goto B644491;
case 0x644493:c.instructions+=8;goto B644493;
case 0x644499:c.instructions+=7;goto B644499;
case 0x64449a:c.instructions+=6;goto B64449a;
case 0x6444a0:c.instructions+=5;goto B6444a0;
case 0x6444a1:c.instructions+=4;goto B6444a1;
case 0x6444a2:c.instructions+=3;goto B6444a2;
case 0x6444a4:c.instructions+=2;goto B6444a4;
case 0x6444a7:c.instructions+=1;goto B6444a7;
case 0x6444ac:goto L6444ac;
case 0x6444ae:c.instructions+=2;goto B6444ae;
case 0x6444b1:c.instructions+=1;goto B6444b1;
case 0x6444b3:goto L6444b3;
case 0x6444b4:c.instructions+=4;goto B6444b4;
case 0x6444b6:c.instructions+=3;goto B6444b6;
case 0x6444b9:c.instructions+=2;goto B6444b9;
case 0x6444bc:c.instructions+=1;goto B6444bc;
case 0x6444c1:goto L6444c1;
case 0x6444c4:c.instructions+=1;goto B6444c4;
case 0x6444c6:goto L6444c6;
case 0x6444cc:c.instructions+=3;goto B6444cc;
case 0x6444cf:c.instructions+=2;goto B6444cf;
case 0x6444d5:c.instructions+=1;goto B6444d5;
case 0x6444d7:goto L6444d7;
case 0x6444d8:goto L6444d8;
case 0x6444d9:c.instructions+=3;goto B6444d9;
case 0x6444da:c.instructions+=2;goto B6444da;
case 0x6444db:c.instructions+=1;goto B6444db;
case 0x6444dc:goto L6444dc;
case 0x6444de:c.instructions+=9;goto B6444de;
case 0x6444df:c.instructions+=8;goto B6444df;
case 0x6444e1:c.instructions+=7;goto B6444e1;
case 0x6444e7:c.instructions+=6;goto B6444e7;
case 0x6444e8:c.instructions+=5;goto B6444e8;
case 0x6444e9:c.instructions+=4;goto B6444e9;
case 0x6444eb:c.instructions+=3;goto B6444eb;
case 0x6444f1:c.instructions+=2;goto B6444f1;
case 0x6444f3:c.instructions+=1;goto B6444f3;
case 0x6444f8:goto L6444f8;
case 0x6444fc:c.instructions+=1;goto B6444fc;
case 0x644502:goto L644502;
case 0x644504:goto L644504;
case 0x644506:c.instructions+=2;goto B644506;
case 0x644508:c.instructions+=1;goto B644508;
case 0x64450a:goto L64450a;
case 0x64450c:c.instructions+=1;goto B64450c;
case 0x64450e:goto L64450e;
case 0x64450f:goto L64450f;
case 0x644515:c.instructions+=2;goto B644515;
case 0x644517:c.instructions+=1;goto B644517;
case 0x644519:goto L644519;
case 0x64451d:c.instructions+=3;goto B64451d;
case 0x644520:c.instructions+=2;goto B644520;
case 0x644523:c.instructions+=1;goto B644523;
case 0x644524:goto L644524;
case 0x64452a:c.instructions+=3;goto B64452a;
case 0x64452c:c.instructions+=2;goto B64452c;
case 0x64452e:c.instructions+=1;goto B64452e;
case 0x644530:goto L644530;
case 0x644532:c.instructions+=2;goto B644532;
case 0x644535:c.instructions+=1;goto B644535;
case 0x644537:goto L644537;
case 0x644539:c.instructions+=1;goto B644539;
case 0x64453b:goto L64453b;
case 0x64453e:c.instructions+=1;goto B64453e;
case 0x644540:goto L644540;
case 0x644541:c.instructions+=6;goto B644541;
case 0x644542:c.instructions+=5;goto B644542;
case 0x644543:c.instructions+=4;goto B644543;
case 0x644544:c.instructions+=3;goto B644544;
case 0x644545:c.instructions+=2;goto B644545;
case 0x644546:c.instructions+=1;goto B644546;
case 0x644548:goto L644548;
case 0x64454b:c.instructions+=1;goto B64454b;
case 0x64454d:goto L64454d;
case 0x64454f:c.instructions+=1;goto B64454f;
case 0x644551:goto L644551;
case 0x644554:c.instructions+=1;goto B644554;
case 0x644556:goto L644556;
case 0x644559:c.instructions+=1;goto B644559;
case 0x64455b:goto L64455b;
case 0x64455e:c.instructions+=3;goto B64455e;
case 0x644561:c.instructions+=2;goto B644561;
case 0x644564:c.instructions+=1;goto B644564;
case 0x644566:goto L644566;
case 0x644569:c.instructions+=1;goto B644569;
case 0x64456b:goto L64456b;
case 0x64456e:c.instructions+=2;goto B64456e;
case 0x644571:c.instructions+=1;goto B644571;
case 0x644578:goto L644578;
case 0x644579:c.instructions+=2;goto B644579;
case 0x64457a:c.instructions+=1;goto B64457a;
case 0x64457b:goto L64457b;
case 0x644582:c.instructions+=1;goto B644582;
case 0x644584:goto L644584;
case 0x644587:c.instructions+=10;goto B644587;
case 0x64458f:c.instructions+=9;goto B64458f;
case 0x644595:c.instructions+=8;goto B644595;
case 0x644596:c.instructions+=7;goto B644596;
case 0x64459b:c.instructions+=6;goto B64459b;
case 0x64459d:c.instructions+=5;goto B64459d;
case 0x6445a3:c.instructions+=4;goto B6445a3;
case 0x6445a4:c.instructions+=3;goto B6445a4;
case 0x6445a7:c.instructions+=2;goto B6445a7;
case 0x6445a8:c.instructions+=1;goto B6445a8;
case 0x6445ad:goto L6445ad;
case 0x6445b0:c.instructions+=5;goto B6445b0;
case 0x6445b2:c.instructions+=4;goto B6445b2;
case 0x6445b3:c.instructions+=3;goto B6445b3;
case 0x6445b6:c.instructions+=2;goto B6445b6;
case 0x6445b9:c.instructions+=1;goto B6445b9;
case 0x6445ba:goto L6445ba;
case 0x6445bb:c.instructions+=4;goto B6445bb;
case 0x6445bd:c.instructions+=3;goto B6445bd;
case 0x6445be:c.instructions+=2;goto B6445be;
case 0x6445bf:c.instructions+=1;goto B6445bf;
case 0x6445c0:goto L6445c0;
case 0x6445c2:c.instructions+=6;goto B6445c2;
case 0x6445c3:c.instructions+=5;goto B6445c3;
case 0x6445c5:c.instructions+=4;goto B6445c5;
case 0x6445c6:c.instructions+=3;goto B6445c6;
case 0x6445c8:c.instructions+=2;goto B6445c8;
case 0x6445ca:c.instructions+=1;goto B6445ca;
case 0x6445cf:goto L6445cf;
case 0x6445d1:c.instructions+=2;goto B6445d1;
case 0x6445d2:c.instructions+=1;goto B6445d2;
case 0x6445d4:goto L6445d4;
case 0x6445d7:c.instructions+=3;goto B6445d7;
case 0x6445d9:c.instructions+=2;goto B6445d9;
case 0x6445dc:c.instructions+=1;goto B6445dc;
case 0x6445e1:goto L6445e1;
case 0x6445e3:goto L6445e3;
case 0x6445e5:goto L6445e5;
case 0x6445e7:c.instructions+=1;goto B6445e7;
case 0x6445e9:goto L6445e9;
case 0x6445ee:c.instructions+=1;goto B6445ee;
case 0x6445f0:goto L6445f0;
case 0x6445f6:c.instructions+=7;goto B6445f6;
case 0x6445f8:c.instructions+=6;goto B6445f8;
case 0x6445fb:c.instructions+=5;goto B6445fb;
case 0x6445fe:c.instructions+=4;goto B6445fe;
case 0x644600:c.instructions+=3;goto B644600;
case 0x644603:c.instructions+=2;goto B644603;
case 0x644607:c.instructions+=1;goto B644607;
case 0x644609:goto L644609;
case 0x64460d:c.instructions+=1;goto B64460d;
case 0x64460f:goto L64460f;
case 0x644611:c.instructions+=2;goto B644611;
case 0x644612:c.instructions+=1;goto B644612;
case 0x644614:goto L644614;
case 0x644616:goto L644616;
case 0x644619:c.instructions+=1;goto B644619;
case 0x64461b:goto L64461b;
case 0x64461c:c.instructions+=2;goto B64461c;
case 0x64461d:c.instructions+=1;goto B64461d;
case 0x644620:goto L644620;
case 0x644622:c.instructions+=9;goto B644622;
case 0x644623:c.instructions+=8;goto B644623;
case 0x644625:c.instructions+=7;goto B644625;
case 0x644626:c.instructions+=6;goto B644626;
case 0x644628:c.instructions+=5;goto B644628;
case 0x64462e:c.instructions+=4;goto B64462e;
case 0x644631:c.instructions+=3;goto B644631;
case 0x644633:c.instructions+=2;goto B644633;
case 0x644635:c.instructions+=1;goto B644635;
case 0x644637:goto L644637;
case 0x64463c:c.instructions+=2;goto B64463c;
case 0x644641:c.instructions+=1;goto B644641;
case 0x644643:goto L644643;
case 0x644646:c.instructions+=1;goto B644646;
case 0x644648:goto L644648;
case 0x64464d:c.instructions+=1;goto B64464d;
case 0x644652:goto L644652;
case 0x644658:c.instructions+=4;goto B644658;
case 0x644659:c.instructions+=3;goto B644659;
case 0x64465c:c.instructions+=2;goto B64465c;
case 0x64465d:c.instructions+=1;goto B64465d;
case 0x644662:goto L644662;
case 0x644665:c.instructions+=3;goto B644665;
case 0x64466c:c.instructions+=2;goto B64466c;
case 0x644671:c.instructions+=1;goto B644671;
case 0x644673:goto L644673;
case 0x644676:c.instructions+=1;goto B644676;
case 0x644678:goto L644678;
case 0x64467a:c.instructions+=1;goto B64467a;
case 0x64467c:goto L64467c;
case 0x64467f:c.instructions+=1;goto B64467f;
case 0x644681:goto L644681;
case 0x644683:c.instructions+=2;goto B644683;
case 0x644684:c.instructions+=1;goto B644684;
case 0x644686:goto L644686;
case 0x644688:goto L644688;
case 0x64468b:c.instructions+=2;goto B64468b;
case 0x64468e:c.instructions+=1;goto B64468e;
case 0x644690:goto L644690;
case 0x644696:goto L644696;
case 0x644698:goto L644698;
case 0x644699:c.instructions+=2;goto B644699;
case 0x64469a:c.instructions+=1;goto B64469a;
case 0x64469d:goto L64469d;
case 0x64469f:c.instructions+=7;goto B64469f;
case 0x6446a0:c.instructions+=6;goto B6446a0;
case 0x6446a2:c.instructions+=5;goto B6446a2;
case 0x6446a8:c.instructions+=4;goto B6446a8;
case 0x6446ab:c.instructions+=3;goto B6446ab;
case 0x6446ad:c.instructions+=2;goto B6446ad;
case 0x6446af:c.instructions+=1;goto B6446af;
case 0x6446b1:goto L6446b1;
case 0x6446b6:c.instructions+=2;goto B6446b6;
case 0x6446bb:c.instructions+=1;goto B6446bb;
case 0x6446bd:goto L6446bd;
case 0x6446c0:c.instructions+=1;goto B6446c0;
case 0x6446c2:goto L6446c2;
case 0x6446c7:c.instructions+=1;goto B6446c7;
case 0x6446cc:goto L6446cc;
case 0x6446d2:c.instructions+=4;goto B6446d2;
case 0x6446d3:c.instructions+=3;goto B6446d3;
case 0x6446d6:c.instructions+=2;goto B6446d6;
case 0x6446d7:c.instructions+=1;goto B6446d7;
case 0x6446dc:goto L6446dc;
case 0x6446df:c.instructions+=4;goto B6446df;
case 0x6446e6:c.instructions+=3;goto B6446e6;
case 0x6446eb:c.instructions+=2;goto B6446eb;
case 0x6446ec:c.instructions+=1;goto B6446ec;
case 0x6446ed:goto L6446ed;
case 0x6446ef:c.instructions+=3;goto B6446ef;
case 0x6446f0:c.instructions+=2;goto B6446f0;
case 0x6446f2:c.instructions+=1;goto B6446f2;
case 0x6446f4:goto L6446f4;
case 0x6446f7:c.instructions+=1;goto B6446f7;
case 0x6446f9:goto L6446f9;
case 0x6446fb:goto L6446fb;
case 0x6446fe:c.instructions+=5;goto B6446fe;
case 0x644700:c.instructions+=4;goto B644700;
case 0x644703:c.instructions+=3;goto B644703;
case 0x644705:c.instructions+=2;goto B644705;
case 0x644706:c.instructions+=1;goto B644706;
case 0x644707:goto L644707;
case 0x644709:c.instructions+=6;goto B644709;
case 0x64470a:c.instructions+=5;goto B64470a;
case 0x64470c:c.instructions+=4;goto B64470c;
case 0x644712:c.instructions+=3;goto B644712;
case 0x644715:c.instructions+=2;goto B644715;
case 0x644717:c.instructions+=1;goto B644717;
case 0x644719:goto L644719;
case 0x64471e:c.instructions+=6;goto B64471e;
case 0x644723:c.instructions+=5;goto B644723;
case 0x644729:c.instructions+=4;goto B644729;
case 0x64472a:c.instructions+=3;goto B64472a;
case 0x64472d:c.instructions+=2;goto B64472d;
case 0x64472e:c.instructions+=1;goto B64472e;
case 0x644733:goto L644733;
case 0x644736:c.instructions+=4;goto B644736;
case 0x64473d:c.instructions+=3;goto B64473d;
case 0x644742:c.instructions+=2;goto B644742;
case 0x644743:c.instructions+=1;goto B644743;
case 0x644744:goto L644744;
case 0x644747:c.instructions+=6;goto B644747;
case 0x64474a:c.instructions+=5;goto B64474a;
case 0x64474d:c.instructions+=4;goto B64474d;
case 0x644750:c.instructions+=3;goto B644750;
case 0x644754:c.instructions+=2;goto B644754;
case 0x644756:c.instructions+=1;goto B644756;
case 0x64475b:goto L64475b;
case 0x64475d:c.instructions+=2;goto B64475d;
case 0x64475e:c.instructions+=1;goto B64475e;
case 0x64475f:goto L64475f;
case 0x644761:c.instructions+=11;goto B644761;
case 0x644762:c.instructions+=10;goto B644762;
case 0x644764:c.instructions+=9;goto B644764;
case 0x644765:c.instructions+=8;goto B644765;
case 0x644766:c.instructions+=7;goto B644766;
case 0x644768:c.instructions+=6;goto B644768;
case 0x64476e:c.instructions+=5;goto B64476e;
case 0x64476f:c.instructions+=4;goto B64476f;
case 0x644775:c.instructions+=3;goto B644775;
case 0x644776:c.instructions+=2;goto B644776;
case 0x64477c:c.instructions+=1;goto B64477c;
case 0x644781:goto L644781;
case 0x644783:c.instructions+=1;goto B644783;
case 0x644789:goto L644789;
case 0x64478b:c.instructions+=3;goto B64478b;
case 0x64478e:c.instructions+=2;goto B64478e;
case 0x64478f:c.instructions+=1;goto B64478f;
case 0x644795:goto L644795;
case 0x644797:c.instructions+=4;goto B644797;
case 0x64479d:c.instructions+=3;goto B64479d;
case 0x6447a2:c.instructions+=2;goto B6447a2;
case 0x6447a3:c.instructions+=1;goto B6447a3;
case 0x6447a5:goto L6447a5;
case 0x6447a7:goto L6447a7;
case 0x6447ad:goto L6447ad;
case 0x6447b3:c.instructions+=4;goto B6447b3;
case 0x6447b9:c.instructions+=3;goto B6447b9;
case 0x6447ba:c.instructions+=2;goto B6447ba;
case 0x6447c0:c.instructions+=1;goto B6447c0;
case 0x6447c5:goto L6447c5;
case 0x6447c7:c.instructions+=1;goto B6447c7;
case 0x6447cd:goto L6447cd;
case 0x6447d0:c.instructions+=1;goto B6447d0;
case 0x6447d2:goto L6447d2;
case 0x6447d8:c.instructions+=5;goto B6447d8;
case 0x6447de:c.instructions+=4;goto B6447de;
case 0x6447df:c.instructions+=3;goto B6447df;
case 0x6447e5:c.instructions+=2;goto B6447e5;
case 0x6447e8:c.instructions+=1;goto B6447e8;
case 0x6447ed:goto L6447ed;
case 0x6447ef:c.instructions+=1;goto B6447ef;
case 0x6447f5:goto L6447f5;
case 0x6447f7:goto L6447f7;
case 0x6447fb:goto L6447fb;
case 0x6447fd:c.instructions+=2;goto B6447fd;
case 0x644800:c.instructions+=1;goto B644800;
case 0x644802:goto L644802;
case 0x644804:c.instructions+=4;goto B644804;
case 0x644809:c.instructions+=3;goto B644809;
case 0x64480f:c.instructions+=2;goto B64480f;
case 0x644810:c.instructions+=1;goto B644810;
case 0x644812:goto L644812;
case 0x644814:goto L644814;
case 0x644816:goto L644816;
case 0x64481c:c.instructions+=4;goto B64481c;
case 0x644822:c.instructions+=3;goto B644822;
case 0x644823:c.instructions+=2;goto B644823;
case 0x644829:c.instructions+=1;goto B644829;
case 0x64482e:goto L64482e;
case 0x644830:c.instructions+=1;goto B644830;
case 0x644832:goto L644832;
case 0x644834:c.instructions+=2;goto B644834;
case 0x644837:c.instructions+=1;goto B644837;
case 0x644839:goto L644839;
case 0x64483c:c.instructions+=1;goto B64483c;
case 0x64483e:goto L64483e;
case 0x644841:c.instructions+=2;goto B644841;
case 0x644843:c.instructions+=1;goto B644843;
case 0x644845:goto L644845;
case 0x644848:c.instructions+=1;goto B644848;
case 0x64484a:goto L64484a;
case 0x64484c:c.instructions+=3;goto B64484c;
case 0x644851:c.instructions+=2;goto B644851;
case 0x644852:c.instructions+=1;goto B644852;
case 0x644854:goto L644854;
case 0x644856:goto L644856;
case 0x644858:goto L644858;
case 0x64485f:c.instructions+=1;goto B64485f;
case 0x644861:goto L644861;
case 0x644864:c.instructions+=4;goto B644864;
case 0x644866:c.instructions+=3;goto B644866;
case 0x64486b:c.instructions+=2;goto B64486b;
case 0x64486c:c.instructions+=1;goto B64486c;
case 0x64486e:goto L64486e;
case 0x644870:goto L644870;
case 0x644872:goto L644872;
case 0x644879:c.instructions+=1;goto B644879;
case 0x64487b:goto L64487b;
case 0x64487e:c.instructions+=1;goto B64487e;
case 0x644880:goto L644880;
case 0x644883:c.instructions+=1;goto B644883;
case 0x644885:goto L644885;
case 0x64488b:c.instructions+=1;goto B64488b;
case 0x644890:goto L644890;
case 0x644892:goto L644892;
case 0x644893:goto L644893;
case 0x644894:c.instructions+=4;goto B644894;
case 0x64489b:c.instructions+=3;goto B64489b;
case 0x64489c:c.instructions+=2;goto B64489c;
case 0x64489d:c.instructions+=1;goto B64489d;
case 0x64489e:goto L64489e;
case 0x6448a0:c.instructions+=14;goto B6448a0;
case 0x6448a1:c.instructions+=13;goto B6448a1;
case 0x6448a3:c.instructions+=12;goto B6448a3;
case 0x6448a6:c.instructions+=11;goto B6448a6;
case 0x6448aa:c.instructions+=10;goto B6448aa;
case 0x6448ae:c.instructions+=9;goto B6448ae;
case 0x6448af:c.instructions+=8;goto B6448af;
case 0x6448b0:c.instructions+=7;goto B6448b0;
case 0x6448b2:c.instructions+=6;goto B6448b2;
case 0x6448b8:c.instructions+=5;goto B6448b8;
case 0x6448b9:c.instructions+=4;goto B6448b9;
case 0x6448bf:c.instructions+=3;goto B6448bf;
case 0x6448c0:c.instructions+=2;goto B6448c0;
case 0x6448c6:c.instructions+=1;goto B6448c6;
case 0x6448cb:goto L6448cb;
case 0x6448cd:c.instructions+=2;goto B6448cd;
case 0x6448cf:c.instructions+=1;goto B6448cf;
case 0x6448d5:goto L6448d5;
case 0x6448d8:c.instructions+=1;goto B6448d8;
case 0x6448de:goto L6448de;
case 0x6448e0:c.instructions+=4;goto B6448e0;
case 0x6448e6:c.instructions+=3;goto B6448e6;
case 0x6448eb:c.instructions+=2;goto B6448eb;
case 0x6448ec:c.instructions+=1;goto B6448ec;
case 0x6448ee:goto L6448ee;
case 0x6448f0:goto L6448f0;
case 0x6448f6:goto L6448f6;
case 0x6448fc:c.instructions+=4;goto B6448fc;
case 0x644902:c.instructions+=3;goto B644902;
case 0x644903:c.instructions+=2;goto B644903;
case 0x644909:c.instructions+=1;goto B644909;
case 0x64490e:goto L64490e;
case 0x644910:c.instructions+=2;goto B644910;
case 0x644912:c.instructions+=1;goto B644912;
case 0x644918:goto L644918;
case 0x64491c:goto L64491c;
case 0x644922:c.instructions+=2;goto B644922;
case 0x644925:c.instructions+=1;goto B644925;
case 0x644927:goto L644927;
case 0x644929:c.instructions+=4;goto B644929;
case 0x64492e:c.instructions+=3;goto B64492e;
case 0x644934:c.instructions+=2;goto B644934;
case 0x644935:c.instructions+=1;goto B644935;
case 0x644937:goto L644937;
case 0x644939:goto L644939;
case 0x64493f:goto L64493f;
case 0x644942:c.instructions+=1;goto B644942;
case 0x644944:goto L644944;
case 0x64494a:c.instructions+=5;goto B64494a;
case 0x64494c:c.instructions+=4;goto B64494c;
case 0x644951:c.instructions+=3;goto B644951;
case 0x644953:c.instructions+=2;goto B644953;
case 0x644954:c.instructions+=1;goto B644954;
case 0x644956:goto L644956;
case 0x644958:goto L644958;
case 0x64495a:goto L64495a;
case 0x644961:c.instructions+=1;goto B644961;
case 0x644963:goto L644963;
case 0x644965:c.instructions+=4;goto B644965;
case 0x64496a:c.instructions+=3;goto B64496a;
case 0x64496c:c.instructions+=2;goto B64496c;
case 0x64496d:c.instructions+=1;goto B64496d;
case 0x64496f:goto L64496f;
case 0x644971:goto L644971;
case 0x644973:goto L644973;
case 0x64497a:c.instructions+=1;goto B64497a;
case 0x64497c:goto L64497c;
case 0x64497e:c.instructions+=4;goto B64497e;
case 0x644983:c.instructions+=3;goto B644983;
case 0x644985:c.instructions+=2;goto B644985;
case 0x644986:c.instructions+=1;goto B644986;
case 0x644988:goto L644988;
case 0x64498a:goto L64498a;
case 0x64498c:goto L64498c;
case 0x64498f:c.instructions+=1;goto B64498f;
case 0x644991:goto L644991;
case 0x644993:c.instructions+=4;goto B644993;
case 0x644995:c.instructions+=3;goto B644995;
case 0x64499a:c.instructions+=2;goto B64499a;
case 0x64499b:c.instructions+=1;goto B64499b;
case 0x64499d:goto L64499d;
case 0x64499f:goto L64499f;
case 0x6449a5:goto L6449a5;
case 0x6449ac:c.instructions+=1;goto B6449ac;
case 0x6449ae:goto L6449ae;
case 0x6449b1:c.instructions+=1;goto B6449b1;
case 0x6449b3:goto L6449b3;
case 0x6449b6:c.instructions+=1;goto B6449b6;
case 0x6449b8:goto L6449b8;
case 0x6449bb:c.instructions+=1;goto B6449bb;
case 0x6449c1:goto L6449c1;
case 0x6449c7:c.instructions+=2;goto B6449c7;
case 0x6449ca:c.instructions+=1;goto B6449ca;
case 0x6449d0:goto L6449d0;
case 0x6449d3:c.instructions+=1;goto B6449d3;
case 0x6449d9:goto L6449d9;
case 0x6449dc:goto L6449dc;
case 0x6449e2:c.instructions+=4;goto B6449e2;
case 0x6449e8:c.instructions+=3;goto B6449e8;
case 0x6449e9:c.instructions+=2;goto B6449e9;
case 0x6449ef:c.instructions+=1;goto B6449ef;
case 0x6449f4:goto L6449f4;
case 0x6449f6:c.instructions+=2;goto B6449f6;
case 0x6449f8:c.instructions+=1;goto B6449f8;
case 0x6449fe:goto L6449fe;
case 0x644a01:c.instructions+=1;goto B644a01;
case 0x644a07:goto L644a07;
case 0x644a09:c.instructions+=4;goto B644a09;
case 0x644a0e:c.instructions+=3;goto B644a0e;
case 0x644a14:c.instructions+=2;goto B644a14;
case 0x644a15:c.instructions+=1;goto B644a15;
case 0x644a17:goto L644a17;
case 0x644a19:goto L644a19;
case 0x644a1f:goto L644a1f;
case 0x644a25:c.instructions+=4;goto B644a25;
case 0x644a2b:c.instructions+=3;goto B644a2b;
case 0x644a2c:c.instructions+=2;goto B644a2c;
case 0x644a32:c.instructions+=1;goto B644a32;
case 0x644a37:goto L644a37;
case 0x644a39:c.instructions+=2;goto B644a39;
case 0x644a3b:c.instructions+=1;goto B644a3b;
case 0x644a41:goto L644a41;
case 0x644a47:c.instructions+=2;goto B644a47;
case 0x644a4a:c.instructions+=1;goto B644a4a;
case 0x644a4c:goto L644a4c;
case 0x644a4f:c.instructions+=1;goto B644a4f;
case 0x644a51:goto L644a51;
case 0x644a54:c.instructions+=1;goto B644a54;
case 0x644a5a:goto L644a5a;
case 0x644a60:c.instructions+=8;goto B644a60;
case 0x644a63:c.instructions+=7;goto B644a63;
case 0x644a66:c.instructions+=6;goto B644a66;
case 0x644a68:c.instructions+=5;goto B644a68;
case 0x644a6a:c.instructions+=4;goto B644a6a;
case 0x644a6b:c.instructions+=3;goto B644a6b;
case 0x644a6d:c.instructions+=2;goto B644a6d;
case 0x644a6f:c.instructions+=1;goto B644a6f;
case 0x644a75:goto L644a75;
case 0x644a77:c.instructions+=1;goto B644a77;
case 0x644a79:goto L644a79;
case 0x644a7c:c.instructions+=1;goto B644a7c;
case 0x644a7e:goto L644a7e;
case 0x644a80:c.instructions+=1;goto B644a80;
case 0x644a81:goto L644a81;
case 0x644a84:c.instructions+=2;goto B644a84;
case 0x644a85:c.instructions+=1;goto B644a85;
case 0x644a8a:goto L644a8a;
case 0x644a8c:c.instructions+=4;goto B644a8c;
case 0x644a8e:c.instructions+=3;goto B644a8e;
case 0x644a8f:c.instructions+=2;goto B644a8f;
case 0x644a92:c.instructions+=1;goto B644a92;
case 0x644a98:goto L644a98;
case 0x644a9b:c.instructions+=5;goto B644a9b;
case 0x644a9d:c.instructions+=4;goto B644a9d;
case 0x644aa0:c.instructions+=3;goto B644aa0;
case 0x644aa3:c.instructions+=2;goto B644aa3;
case 0x644aa5:c.instructions+=1;goto B644aa5;
case 0x644aa8:goto L644aa8;
case 0x644aaa:goto L644aaa;
case 0x644aac:c.instructions+=1;goto B644aac;
case 0x644aaf:goto L644aaf;
case 0x644ab1:goto L644ab1;
case 0x644ab6:goto L644ab6;
case 0x644ab9:c.instructions+=5;goto B644ab9;
case 0x644abb:c.instructions+=4;goto B644abb;
case 0x644abe:c.instructions+=3;goto B644abe;
case 0x644abf:c.instructions+=2;goto B644abf;
case 0x644ac2:c.instructions+=1;goto B644ac2;
case 0x644ac4:goto L644ac4;
case 0x644ac7:c.instructions+=1;goto B644ac7;
case 0x644ac9:goto L644ac9;
case 0x644acb:c.instructions+=1;goto B644acb;
case 0x644acc:goto L644acc;
case 0x644acf:c.instructions+=2;goto B644acf;
case 0x644ad0:c.instructions+=1;goto B644ad0;
case 0x644ad5:goto L644ad5;
case 0x644ad7:c.instructions+=4;goto B644ad7;
case 0x644ad9:c.instructions+=3;goto B644ad9;
case 0x644ada:c.instructions+=2;goto B644ada;
case 0x644add:c.instructions+=1;goto B644add;
case 0x644ae3:goto L644ae3;
case 0x644ae6:c.instructions+=5;goto B644ae6;
case 0x644ae8:c.instructions+=4;goto B644ae8;
case 0x644aeb:c.instructions+=3;goto B644aeb;
case 0x644aee:c.instructions+=2;goto B644aee;
case 0x644af0:c.instructions+=1;goto B644af0;
case 0x644af3:goto L644af3;
case 0x644af5:goto L644af5;
case 0x644af7:c.instructions+=1;goto B644af7;
case 0x644afa:goto L644afa;
case 0x644afc:goto L644afc;
case 0x644b01:goto L644b01;
case 0x644b04:c.instructions+=3;goto B644b04;
case 0x644b07:c.instructions+=2;goto B644b07;
case 0x644b08:c.instructions+=1;goto B644b08;
case 0x644b0b:goto L644b0b;
case 0x644b0e:c.instructions+=12;goto B644b0e;
case 0x644b11:c.instructions+=11;goto B644b11;
case 0x644b14:c.instructions+=10;goto B644b14;
case 0x644b17:c.instructions+=9;goto B644b17;
case 0x644b1a:c.instructions+=8;goto B644b1a;
case 0x644b1d:c.instructions+=7;goto B644b1d;
case 0x644b23:c.instructions+=6;goto B644b23;
case 0x644b29:c.instructions+=5;goto B644b29;
case 0x644b2a:c.instructions+=4;goto B644b2a;
case 0x644b30:c.instructions+=3;goto B644b30;
case 0x644b31:c.instructions+=2;goto B644b31;
case 0x644b34:c.instructions+=1;goto B644b34;
case 0x644b39:goto L644b39;
case 0x644b3b:c.instructions+=2;goto B644b3b;
case 0x644b3d:c.instructions+=1;goto B644b3d;
case 0x644b43:goto L644b43;
case 0x644b46:c.instructions+=1;goto B644b46;
case 0x644b4c:goto L644b4c;
case 0x644b52:c.instructions+=5;goto B644b52;
case 0x644b54:c.instructions+=4;goto B644b54;
case 0x644b59:c.instructions+=3;goto B644b59;
case 0x644b5b:c.instructions+=2;goto B644b5b;
case 0x644b5c:c.instructions+=1;goto B644b5c;
case 0x644b5e:goto L644b5e;
case 0x644b60:goto L644b60;
case 0x644b62:goto L644b62;
case 0x644b64:c.instructions+=4;goto B644b64;
case 0x644b66:c.instructions+=3;goto B644b66;
case 0x644b6b:c.instructions+=2;goto B644b6b;
case 0x644b6c:c.instructions+=1;goto B644b6c;
case 0x644b6e:goto L644b6e;
case 0x644b70:goto L644b70;
case 0x644b76:goto L644b76;
case 0x644b78:c.instructions+=4;goto B644b78;
case 0x644b7d:c.instructions+=3;goto B644b7d;
case 0x644b83:c.instructions+=2;goto B644b83;
case 0x644b84:c.instructions+=1;goto B644b84;
case 0x644b86:goto L644b86;
case 0x644b88:goto L644b88;
case 0x644b8e:goto L644b8e;
case 0x644b94:c.instructions+=4;goto B644b94;
case 0x644b9a:c.instructions+=3;goto B644b9a;
case 0x644b9b:c.instructions+=2;goto B644b9b;
case 0x644ba1:c.instructions+=1;goto B644ba1;
case 0x644ba6:goto L644ba6;
case 0x644ba8:c.instructions+=2;goto B644ba8;
case 0x644baa:c.instructions+=1;goto B644baa;
case 0x644bac:goto L644bac;
case 0x644baf:c.instructions+=1;goto B644baf;
case 0x644bb5:goto L644bb5;
case 0x644bb7:c.instructions+=4;goto B644bb7;
case 0x644bbc:c.instructions+=3;goto B644bbc;
case 0x644bc2:c.instructions+=2;goto B644bc2;
case 0x644bc3:c.instructions+=1;goto B644bc3;
case 0x644bc5:goto L644bc5;
case 0x644bc7:goto L644bc7;
case 0x644bcd:goto L644bcd;
case 0x644bd3:c.instructions+=2;goto B644bd3;
case 0x644bd6:c.instructions+=1;goto B644bd6;
case 0x644bd8:goto L644bd8;
case 0x644bdb:c.instructions+=1;goto B644bdb;
case 0x644bdd:goto L644bdd;
case 0x644be3:c.instructions+=1;goto B644be3;
case 0x644be8:goto L644be8;
case 0x644bea:goto L644bea;
case 0x644bed:c.instructions+=1;goto B644bed;
case 0x644bf2:goto L644bf2;
case 0x644bf5:c.instructions+=1;goto B644bf5;
case 0x644bfa:goto L644bfa;
case 0x644bfc:c.instructions+=1;goto B644bfc;
case 0x644c01:goto L644c01;
case 0x644c04:c.instructions+=7;goto B644c04;
case 0x644c05:c.instructions+=6;goto B644c05;
case 0x644c07:c.instructions+=5;goto B644c07;
case 0x644c08:c.instructions+=4;goto B644c08;
case 0x644c0f:c.instructions+=3;goto B644c0f;
case 0x644c10:c.instructions+=2;goto B644c10;
case 0x644c11:c.instructions+=1;goto B644c11;
case 0x644c12:goto L644c12;
case 0x644c18:c.instructions+=4;goto B644c18;
case 0x644c1e:c.instructions+=3;goto B644c1e;
case 0x644c1f:c.instructions+=2;goto B644c1f;
case 0x644c25:c.instructions+=1;goto B644c25;
case 0x644c2a:goto L644c2a;
case 0x644c2c:c.instructions+=2;goto B644c2c;
case 0x644c2e:c.instructions+=1;goto B644c2e;
case 0x644c30:goto L644c30;
case 0x644c32:c.instructions+=2;goto B644c32;
case 0x644c35:c.instructions+=1;goto B644c35;
case 0x644c37:goto L644c37;
case 0x644c3a:c.instructions+=1;goto B644c3a;
case 0x644c3c:goto L644c3c;
case 0x644c40:c.instructions+=2;goto B644c40;
case 0x644c44:c.instructions+=1;goto B644c44;
case 0x644c46:goto L644c46;
case 0x644c49:c.instructions+=4;goto B644c49;
case 0x644c4c:c.instructions+=3;goto B644c4c;
case 0x644c4e:c.instructions+=2;goto B644c4e;
case 0x644c51:c.instructions+=1;goto B644c51;
case 0x644c53:goto L644c53;
case 0x644c56:goto L644c56;
case 0x644c59:c.instructions+=3;goto B644c59;
case 0x644c5c:c.instructions+=2;goto B644c5c;
case 0x644c5e:c.instructions+=1;goto B644c5e;
case 0x644c63:goto L644c63;
case 0x644c65:c.instructions+=2;goto B644c65;
case 0x644c67:c.instructions+=1;goto B644c67;
case 0x644c69:goto L644c69;
case 0x644c6c:c.instructions+=4;goto B644c6c;
case 0x644c6f:c.instructions+=3;goto B644c6f;
case 0x644c72:c.instructions+=2;goto B644c72;
case 0x644c75:c.instructions+=1;goto B644c75;
case 0x644c77:goto L644c77;
case 0x644c7c:goto L644c7c;
case 0x644c81:c.instructions+=1;goto B644c81;
case 0x644c86:goto L644c86;
case 0x644c88:c.instructions+=11;goto B644c88;
case 0x644c89:c.instructions+=10;goto B644c89;
case 0x644c8b:c.instructions+=9;goto B644c8b;
case 0x644c8e:c.instructions+=8;goto B644c8e;
case 0x644c8f:c.instructions+=7;goto B644c8f;
case 0x644c91:c.instructions+=6;goto B644c91;
case 0x644c97:c.instructions+=5;goto B644c97;
case 0x644c98:c.instructions+=4;goto B644c98;
case 0x644c9e:c.instructions+=3;goto B644c9e;
case 0x644c9f:c.instructions+=2;goto B644c9f;
case 0x644ca5:c.instructions+=1;goto B644ca5;
case 0x644caa:goto L644caa;
case 0x644cac:c.instructions+=1;goto B644cac;
case 0x644cb2:goto L644cb2;
case 0x644cb5:c.instructions+=2;goto B644cb5;
case 0x644cb6:c.instructions+=1;goto B644cb6;
case 0x644cbc:goto L644cbc;
case 0x644cbe:c.instructions+=4;goto B644cbe;
case 0x644cc4:c.instructions+=3;goto B644cc4;
case 0x644cc9:c.instructions+=2;goto B644cc9;
case 0x644cca:c.instructions+=1;goto B644cca;
case 0x644ccc:goto L644ccc;
case 0x644cce:goto L644cce;
case 0x644cd4:goto L644cd4;
case 0x644cda:c.instructions+=4;goto B644cda;
case 0x644ce0:c.instructions+=3;goto B644ce0;
case 0x644ce1:c.instructions+=2;goto B644ce1;
case 0x644ce7:c.instructions+=1;goto B644ce7;
case 0x644cec:goto L644cec;
case 0x644cee:c.instructions+=1;goto B644cee;
case 0x644cf4:goto L644cf4;
case 0x644cf7:c.instructions+=1;goto B644cf7;
case 0x644cfd:goto L644cfd;
case 0x644d03:c.instructions+=7;goto B644d03;
case 0x644d09:c.instructions+=6;goto B644d09;
case 0x644d0a:c.instructions+=5;goto B644d0a;
case 0x644d10:c.instructions+=4;goto B644d10;
case 0x644d16:c.instructions+=3;goto B644d16;
case 0x644d18:c.instructions+=2;goto B644d18;
case 0x644d1b:c.instructions+=1;goto B644d1b;
case 0x644d20:goto L644d20;
case 0x644d22:c.instructions+=1;goto B644d22;
case 0x644d28:goto L644d28;
case 0x644d2b:c.instructions+=1;goto B644d2b;
case 0x644d31:goto L644d31;
case 0x644d33:c.instructions+=3;goto B644d33;
case 0x644d38:c.instructions+=2;goto B644d38;
case 0x644d39:c.instructions+=1;goto B644d39;
case 0x644d3b:goto L644d3b;
case 0x644d3d:goto L644d3d;
case 0x644d43:goto L644d43;
case 0x644d49:c.instructions+=4;goto B644d49;
case 0x644d4f:c.instructions+=3;goto B644d4f;
case 0x644d50:c.instructions+=2;goto B644d50;
case 0x644d56:c.instructions+=1;goto B644d56;
case 0x644d5b:goto L644d5b;
case 0x644d5d:c.instructions+=1;goto B644d5d;
case 0x644d63:goto L644d63;
case 0x644d66:c.instructions+=1;goto B644d66;
case 0x644d6c:goto L644d6c;
case 0x644d72:c.instructions+=2;goto B644d72;
case 0x644d76:c.instructions+=1;goto B644d76;
case 0x644d79:goto L644d79;
case 0x644d7f:c.instructions+=5;goto B644d7f;
case 0x644d83:c.instructions+=4;goto B644d83;
case 0x644d89:c.instructions+=3;goto B644d89;
case 0x644d8a:c.instructions+=2;goto B644d8a;
case 0x644d90:c.instructions+=1;goto B644d90;
case 0x644d95:goto L644d95;
case 0x644d97:c.instructions+=1;goto B644d97;
case 0x644d9d:goto L644d9d;
case 0x644da0:c.instructions+=1;goto B644da0;
case 0x644da6:goto L644da6;
case 0x644da8:c.instructions+=4;goto B644da8;
case 0x644dad:c.instructions+=3;goto B644dad;
case 0x644db3:c.instructions+=2;goto B644db3;
case 0x644db4:c.instructions+=1;goto B644db4;
case 0x644db6:goto L644db6;
case 0x644db8:goto L644db8;
case 0x644dbe:goto L644dbe;
case 0x644dc4:c.instructions+=4;goto B644dc4;
case 0x644dca:c.instructions+=3;goto B644dca;
case 0x644dcb:c.instructions+=2;goto B644dcb;
case 0x644dd1:c.instructions+=1;goto B644dd1;
case 0x644dd6:goto L644dd6;
case 0x644dd8:c.instructions+=1;goto B644dd8;
case 0x644dde:goto L644dde;
case 0x644de0:c.instructions+=3;goto B644de0;
case 0x644de1:c.instructions+=2;goto B644de1;
case 0x644de3:c.instructions+=1;goto B644de3;
case 0x644de5:goto L644de5;
case 0x644de7:c.instructions+=4;goto B644de7;
case 0x644dec:c.instructions+=3;goto B644dec;
case 0x644df2:c.instructions+=2;goto B644df2;
case 0x644df3:c.instructions+=1;goto B644df3;
case 0x644df5:goto L644df5;
case 0x644df7:goto L644df7;
case 0x644df9:goto L644df9;
case 0x644dff:c.instructions+=5;goto B644dff;
case 0x644e02:c.instructions+=4;goto B644e02;
case 0x644e08:c.instructions+=3;goto B644e08;
case 0x644e09:c.instructions+=2;goto B644e09;
case 0x644e0f:c.instructions+=1;goto B644e0f;
case 0x644e14:goto L644e14;
case 0x644e16:c.instructions+=1;goto B644e16;
case 0x644e1c:goto L644e1c;
case 0x644e22:c.instructions+=2;goto B644e22;
case 0x644e25:c.instructions+=1;goto B644e25;
case 0x644e27:goto L644e27;
case 0x644e2a:c.instructions+=1;goto B644e2a;
case 0x644e2c:goto L644e2c;
case 0x644e2f:c.instructions+=1;goto B644e2f;
case 0x644e31:goto L644e31;
case 0x644e37:goto L644e37;
case 0x644e3a:c.instructions+=1;goto B644e3a;
case 0x644e40:goto L644e40;
case 0x644e43:c.instructions+=3;goto B644e43;
case 0x644e49:c.instructions+=2;goto B644e49;
case 0x644e4d:c.instructions+=1;goto B644e4d;
case 0x644e4f:goto L644e4f;
case 0x644e52:c.instructions+=3;goto B644e52;
case 0x644e58:c.instructions+=2;goto B644e58;
case 0x644e5c:c.instructions+=1;goto B644e5c;
case 0x644e5e:goto L644e5e;
case 0x644e64:c.instructions+=5;goto B644e64;
case 0x644e6a:c.instructions+=4;goto B644e6a;
case 0x644e6c:c.instructions+=3;goto B644e6c;
case 0x644e6f:c.instructions+=2;goto B644e6f;
case 0x644e73:c.instructions+=1;goto B644e73;
case 0x644e75:goto L644e75;
case 0x644e7b:goto L644e7b;
case 0x644e7f:c.instructions+=2;goto B644e7f;
case 0x644e81:c.instructions+=1;goto B644e81;
case 0x644e83:goto L644e83;
case 0x644e85:c.instructions+=2;goto B644e85;
case 0x644e87:c.instructions+=1;goto B644e87;
case 0x644e89:goto L644e89;
case 0x644e8c:c.instructions+=2;goto B644e8c;
case 0x644e90:c.instructions+=1;goto B644e90;
case 0x644e96:goto L644e96;
case 0x644e9c:c.instructions+=4;goto B644e9c;
case 0x644ea2:c.instructions+=3;goto B644ea2;
case 0x644ea3:c.instructions+=2;goto B644ea3;
case 0x644ea9:c.instructions+=1;goto B644ea9;
case 0x644eae:goto L644eae;
case 0x644eb0:c.instructions+=1;goto B644eb0;
case 0x644eb6:goto L644eb6;
case 0x644eb9:c.instructions+=1;goto B644eb9;
case 0x644ebf:goto L644ebf;
case 0x644ec1:c.instructions+=4;goto B644ec1;
case 0x644ec6:c.instructions+=3;goto B644ec6;
case 0x644ecc:c.instructions+=2;goto B644ecc;
case 0x644ecd:c.instructions+=1;goto B644ecd;
case 0x644ecf:goto L644ecf;
case 0x644ed1:goto L644ed1;
case 0x644ed7:goto L644ed7;
case 0x644edd:c.instructions+=4;goto B644edd;
case 0x644ee3:c.instructions+=3;goto B644ee3;
case 0x644ee4:c.instructions+=2;goto B644ee4;
case 0x644eea:c.instructions+=1;goto B644eea;
case 0x644eef:goto L644eef;
case 0x644ef1:c.instructions+=1;goto B644ef1;
case 0x644ef7:goto L644ef7;
case 0x644ef9:c.instructions+=2;goto B644ef9;
case 0x644efc:c.instructions+=1;goto B644efc;
case 0x644efe:goto L644efe;
case 0x644f01:c.instructions+=1;goto B644f01;
case 0x644f03:goto L644f03;
case 0x644f05:c.instructions+=1;goto B644f05;
case 0x644f0a:goto L644f0a;
case 0x644f0c:c.instructions+=2;goto B644f0c;
case 0x644f0d:c.instructions+=1;goto B644f0d;
case 0x644f0f:goto L644f0f;
case 0x644f13:c.instructions+=2;goto B644f13;
case 0x644f16:c.instructions+=1;goto B644f16;
case 0x644f18:goto L644f18;
case 0x644f1c:c.instructions+=1;goto B644f1c;
case 0x644f1f:goto L644f1f;
case 0x644f21:c.instructions+=1;goto B644f21;
case 0x644f23:goto L644f23;
case 0x644f28:c.instructions+=1;goto B644f28;
case 0x644f2a:goto L644f2a;
case 0x644f2d:c.instructions+=7;goto B644f2d;
case 0x644f2f:c.instructions+=6;goto B644f2f;
case 0x644f32:c.instructions+=5;goto B644f32;
case 0x644f35:c.instructions+=4;goto B644f35;
case 0x644f37:c.instructions+=3;goto B644f37;
case 0x644f3a:c.instructions+=2;goto B644f3a;
case 0x644f3b:c.instructions+=1;goto B644f3b;
case 0x644f3e:goto L644f3e;
case 0x644f40:goto L644f40;
case 0x644f43:c.instructions+=3;goto B644f43;
case 0x644f45:c.instructions+=2;goto B644f45;
case 0x644f47:c.instructions+=1;goto B644f47;
case 0x644f49:goto L644f49;
case 0x644f4b:goto L644f4b;
case 0x644f4e:goto L644f4e;
case 0x644f51:c.instructions+=2;goto B644f51;
case 0x644f54:c.instructions+=1;goto B644f54;
case 0x644f59:goto L644f59;
case 0x644f5b:c.instructions+=3;goto B644f5b;
case 0x644f5c:c.instructions+=2;goto B644f5c;
case 0x644f5d:c.instructions+=1;goto B644f5d;
case 0x644f5f:goto L644f5f;
case 0x644f61:c.instructions+=4;goto B644f61;
case 0x644f64:c.instructions+=3;goto B644f64;
case 0x644f66:c.instructions+=2;goto B644f66;
case 0x644f68:c.instructions+=1;goto B644f68;
case 0x644f6a:goto L644f6a;
case 0x644f6d:goto L644f6d;
case 0x644f6f:c.instructions+=3;goto B644f6f;
case 0x644f72:c.instructions+=2;goto B644f72;
case 0x644f74:c.instructions+=1;goto B644f74;
case 0x644f76:goto L644f76;
case 0x644f7c:c.instructions+=2;goto B644f7c;
case 0x644f7f:c.instructions+=1;goto B644f7f;
case 0x644f81:goto L644f81;
case 0x644f84:c.instructions+=1;goto B644f84;
case 0x644f86:goto L644f86;
case 0x644f8c:c.instructions+=1;goto B644f8c;
case 0x644f91:goto L644f91;
case 0x644f93:goto L644f93;
case 0x644f94:goto L644f94;
case 0x644f95:c.instructions+=4;goto B644f95;
case 0x644f9c:c.instructions+=3;goto B644f9c;
case 0x644f9d:c.instructions+=2;goto B644f9d;
case 0x644f9e:c.instructions+=1;goto B644f9e;
case 0x644f9f:goto L644f9f;
case 0x644fa1:c.instructions+=6;goto B644fa1;
case 0x644fa2:c.instructions+=5;goto B644fa2;
case 0x644fa4:c.instructions+=4;goto B644fa4;
case 0x644fa7:c.instructions+=3;goto B644fa7;
case 0x644fa9:c.instructions+=2;goto B644fa9;
case 0x644fae:c.instructions+=1;goto B644fae;
case 0x644fb0:goto L644fb0;
case 0x644fb2:c.instructions+=2;goto B644fb2;
case 0x644fb4:c.instructions+=1;goto B644fb4;
case 0x644fb6:goto L644fb6;
case 0x644fb9:c.instructions+=6;goto B644fb9;
case 0x644fbc:c.instructions+=5;goto B644fbc;
case 0x644fbe:c.instructions+=4;goto B644fbe;
case 0x644fbf:c.instructions+=3;goto B644fbf;
case 0x644fc1:c.instructions+=2;goto B644fc1;
case 0x644fc3:c.instructions+=1;goto B644fc3;
case 0x644fc5:goto L644fc5;
case 0x644fc7:c.instructions+=5;goto B644fc7;
case 0x644fc9:c.instructions+=4;goto B644fc9;
case 0x644fca:c.instructions+=3;goto B644fca;
case 0x644fcc:c.instructions+=2;goto B644fcc;
case 0x644fce:c.instructions+=1;goto B644fce;
case 0x644fd0:goto L644fd0;
case 0x644fd2:goto L644fd2;
case 0x644fd3:c.instructions+=1;goto B644fd3;
case 0x644fd6:goto L644fd6;
case 0x644fd8:c.instructions+=14;goto B644fd8;
case 0x644fd9:c.instructions+=13;goto B644fd9;
case 0x644fdb:c.instructions+=12;goto B644fdb;
case 0x644fde:c.instructions+=11;goto B644fde;
case 0x644fe1:c.instructions+=10;goto B644fe1;
case 0x644fe3:c.instructions+=9;goto B644fe3;
case 0x644fe4:c.instructions+=8;goto B644fe4;
case 0x644fe5:c.instructions+=7;goto B644fe5;
case 0x644fe6:c.instructions+=6;goto B644fe6;
case 0x644fe9:c.instructions+=5;goto B644fe9;
case 0x644feb:c.instructions+=4;goto B644feb;
case 0x644fed:c.instructions+=3;goto B644fed;
case 0x644fef:c.instructions+=2;goto B644fef;
case 0x644ff1:c.instructions+=1;goto B644ff1;
case 0x644ff3:goto L644ff3;
case 0x644ff5:c.instructions+=1;goto B644ff5;
case 0x644ff7:goto L644ff7;
case 0x644ffa:c.instructions+=3;goto B644ffa;
case 0x644ffc:c.instructions+=2;goto B644ffc;
case 0x644fff:c.instructions+=1;goto B644fff;
default:missing_instruction(c.pc);}
B644002:L644002:{c.instructions+=2;NFSU2_TR(0x644002);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644005:{NFSU2_TR(0x644005);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64400aull));
TAIL_STATIC(0x64307cu,643);
}
B64400a:L64400a:{c.instructions+=3;NFSU2_TR(0x64400a);
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
B64400d:{NFSU2_TR(0x64400d);
__builtin_memmove((R+0),(R+24),4);
}
B64400f:{NFSU2_TR(0x64400f);
{goto L64403d;}
}
B644011:L644011:{c.instructions+=14;NFSU2_TR(0x644011);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644014:{NFSU2_TR(0x644014);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644017:{NFSU2_TR(0x644017);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B644019:{NFSU2_TR(0x644019);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64401c:{NFSU2_TR(0x64401c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64401f:{NFSU2_TR(0x64401f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B644021:{NFSU2_TR(0x644021);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644024:{NFSU2_TR(0x644024);
__builtin_memmove((R+4),(R+12),4);
}
B644026:{NFSU2_TR(0x644026);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644029:{NFSU2_TR(0x644029);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64402b:{NFSU2_TR(0x64402b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64402e:{NFSU2_TR(0x64402e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B644030:{NFSU2_TR(0x644030);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B644032:{NFSU2_TR(0x644032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644037ull));
TAIL_STATIC(0x642b5du,642);
}
B644037:L644037:{c.instructions+=2;NFSU2_TR(0x644037);
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
B644039:{NFSU2_TR(0x644039);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64403d;}}
}
B64403b:L64403b:{c.instructions+=1;NFSU2_TR(0x64403b);
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
B64403d:L64403d:{c.instructions+=5;NFSU2_TR(0x64403d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64403e:{NFSU2_TR(0x64403e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64403f:{NFSU2_TR(0x64403f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B644040:{NFSU2_TR(0x644040);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B644041:{NFSU2_TR(0x644041);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B644044:L644044:{c.instructions+=12;NFSU2_TR(0x644044);
__builtin_memmove((R+28),(R+28),4);
}
B644046:{NFSU2_TR(0x644046);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644047:{NFSU2_TR(0x644047);
__builtin_memmove((R+20),(R+16),4);
}
B644049:{NFSU2_TR(0x644049);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64404a:{NFSU2_TR(0x64404a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64404b:{NFSU2_TR(0x64404b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64404e:{NFSU2_TR(0x64404e);
__builtin_memmove((R+24),(R+4),4);
}
B644050:{NFSU2_TR(0x644050);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644052:{NFSU2_TR(0x644052);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644055:{NFSU2_TR(0x644055);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B644058:{NFSU2_TR(0x644058);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64405b:{NFSU2_TR(0x64405b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644060ull));
TAIL_STATIC(0x670f4fu,670);
}
B644060:L644060:{c.instructions+=3;NFSU2_TR(0x644060);
__builtin_memmove((R+12),(R+0),4);
}
B644062:{NFSU2_TR(0x644062);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B644064:{NFSU2_TR(0x644064);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L644081;}}
}
B644066:L644066:{c.instructions+=5;NFSU2_TR(0x644066);
u8 U[4];
w4(U+0,u32(0x7ab710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64406b:{NFSU2_TR(0x64406b);
u8 U[4];
w4(U+0,u32(0x5e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644070:{NFSU2_TR(0x644070);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644072:{NFSU2_TR(0x644072);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644075:{NFSU2_TR(0x644075);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64407aull));
TAIL_STATIC(0x64307cu,643);
}
B64407a:L64407a:{c.instructions+=3;NFSU2_TR(0x64407a);
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
B64407d:{NFSU2_TR(0x64407d);
__builtin_memmove((R+0),(R+12),4);
}
B64407f:{NFSU2_TR(0x64407f);
{goto L6440a6;}
}
B644081:L644081:{c.instructions+=12;NFSU2_TR(0x644081);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644084:{NFSU2_TR(0x644084);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644087:{NFSU2_TR(0x644087);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64408a:{NFSU2_TR(0x64408a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64408d:{NFSU2_TR(0x64408d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64408f:{NFSU2_TR(0x64408f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644091:{NFSU2_TR(0x644091);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644092:{NFSU2_TR(0x644092);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644095:{NFSU2_TR(0x644095);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644096:{NFSU2_TR(0x644096);
__builtin_memmove((R+4),(R+24),4);
}
B644098:{NFSU2_TR(0x644098);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64409b:{NFSU2_TR(0x64409b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6440a0ull));
TAIL_STATIC(0x642b5du,642);
}
B6440a0:L6440a0:{c.instructions+=2;NFSU2_TR(0x6440a0);
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
B6440a2:{NFSU2_TR(0x6440a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6440a6;}}
}
B6440a4:L6440a4:{c.instructions+=1;NFSU2_TR(0x6440a4);
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
B6440a6:L6440a6:{c.instructions+=4;NFSU2_TR(0x6440a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6440a7:{NFSU2_TR(0x6440a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6440a8:{NFSU2_TR(0x6440a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6440a9:{NFSU2_TR(0x6440a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6440ac:L6440ac:{c.instructions+=10;NFSU2_TR(0x6440ac);
__builtin_memmove((R+28),(R+28),4);
}
B6440ae:{NFSU2_TR(0x6440ae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6440af:{NFSU2_TR(0x6440af);
__builtin_memmove((R+20),(R+16),4);
}
B6440b1:{NFSU2_TR(0x6440b1);
__builtin_memmove((R+0),(R+4),4);
}
B6440b3:{NFSU2_TR(0x6440b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6440b6:{NFSU2_TR(0x6440b6);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B6440ba:{NFSU2_TR(0x6440ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6440bc:{NFSU2_TR(0x6440bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6440c3:{NFSU2_TR(0x6440c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6440c4:{NFSU2_TR(0x6440c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6440c7:L6440c7:{c.instructions+=5;NFSU2_TR(0x6440c7);
__builtin_memmove((R+28),(R+28),4);
}
B6440c9:{NFSU2_TR(0x6440c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6440ca:{NFSU2_TR(0x6440ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6440cd:{NFSU2_TR(0x6440cd);
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
B6440cf:{NFSU2_TR(0x6440cf);
if(r1(R+518)){{goto L6440df;}}
}
B6440d1:L6440d1:{c.instructions+=2;NFSU2_TR(0x6440d1);
__builtin_memmove((R+4),(R+24),4);
}
B6440d3:{NFSU2_TR(0x6440d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6440d8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6440c7u);}goto L6440c7;}
}
B6440d8:L6440d8:{c.instructions+=2;NFSU2_TR(0x6440d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6440d9:{NFSU2_TR(0x6440d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6440deull));
TAIL_STATIC(0x575630u,575);
}
B6440de:L6440de:{c.instructions+=1;NFSU2_TR(0x6440de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6440df:L6440df:{c.instructions+=2;NFSU2_TR(0x6440df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6440e0:{NFSU2_TR(0x6440e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6440e1:L6440e1:{c.instructions+=6;NFSU2_TR(0x6440e1);
__builtin_memmove((R+28),(R+28),4);
}
B6440e3:{NFSU2_TR(0x6440e3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6440e4:{NFSU2_TR(0x6440e4);
__builtin_memmove((R+20),(R+16),4);
}
B6440e6:{NFSU2_TR(0x6440e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6440e7:{NFSU2_TR(0x6440e7);
__builtin_memmove((R+24),(R+4),4);
}
B6440e9:{NFSU2_TR(0x6440e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6440eeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6440c7u);}goto L6440c7;}
}
B6440ee:L6440ee:{c.instructions+=2;NFSU2_TR(0x6440ee);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6440f2:{NFSU2_TR(0x6440f2);
if(r1(R+518)){{goto L6440fb;}}
}
B6440f4:L6440f4:{c.instructions+=2;NFSU2_TR(0x6440f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6440f5:{NFSU2_TR(0x6440f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6440faull));
TAIL_STATIC(0x575630u,575);
}
B6440fa:L6440fa:{c.instructions+=1;NFSU2_TR(0x6440fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6440fb:L6440fb:{c.instructions+=4;NFSU2_TR(0x6440fb);
__builtin_memmove((R+0),(R+24),4);
}
B6440fd:{NFSU2_TR(0x6440fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6440fe:{NFSU2_TR(0x6440fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6440ff:{NFSU2_TR(0x6440ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B644102:L644102:{c.instructions+=5;NFSU2_TR(0x644102);
__builtin_memmove((R+28),(R+28),4);
}
B644104:{NFSU2_TR(0x644104);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644105:{NFSU2_TR(0x644105);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B644108:{NFSU2_TR(0x644108);
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
B64410a:{NFSU2_TR(0x64410a);
if(r1(R+518)){{goto L64411a;}}
}
B64410c:L64410c:{c.instructions+=2;NFSU2_TR(0x64410c);
__builtin_memmove((R+4),(R+24),4);
}
B64410e:{NFSU2_TR(0x64410e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644113ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644102u);}goto L644102;}
}
B644113:L644113:{c.instructions+=2;NFSU2_TR(0x644113);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644114:{NFSU2_TR(0x644114);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644119ull));
TAIL_STATIC(0x575630u,575);
}
B644119:L644119:{c.instructions+=1;NFSU2_TR(0x644119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64411a:L64411a:{c.instructions+=2;NFSU2_TR(0x64411a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64411b:{NFSU2_TR(0x64411b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64411c:L64411c:{c.instructions+=6;NFSU2_TR(0x64411c);
__builtin_memmove((R+28),(R+28),4);
}
B64411e:{NFSU2_TR(0x64411e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64411f:{NFSU2_TR(0x64411f);
__builtin_memmove((R+20),(R+16),4);
}
B644121:{NFSU2_TR(0x644121);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644122:{NFSU2_TR(0x644122);
__builtin_memmove((R+24),(R+4),4);
}
B644124:{NFSU2_TR(0x644124);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644129ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644102u);}goto L644102;}
}
B644129:L644129:{c.instructions+=2;NFSU2_TR(0x644129);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B64412d:{NFSU2_TR(0x64412d);
if(r1(R+518)){{goto L644136;}}
}
B64412f:L64412f:{c.instructions+=2;NFSU2_TR(0x64412f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644130:{NFSU2_TR(0x644130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644135ull));
TAIL_STATIC(0x575630u,575);
}
B644135:L644135:{c.instructions+=1;NFSU2_TR(0x644135);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644136:L644136:{c.instructions+=4;NFSU2_TR(0x644136);
__builtin_memmove((R+0),(R+24),4);
}
B644138:{NFSU2_TR(0x644138);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644139:{NFSU2_TR(0x644139);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64413a:{NFSU2_TR(0x64413a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64413d:L64413d:{c.instructions+=7;NFSU2_TR(0x64413d);
__builtin_memmove((R+28),(R+28),4);
}
B64413f:{NFSU2_TR(0x64413f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644140:{NFSU2_TR(0x644140);
__builtin_memmove((R+20),(R+16),4);
}
B644142:{NFSU2_TR(0x644142);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644143:{NFSU2_TR(0x644143);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644145:{NFSU2_TR(0x644145);
__builtin_memmove((R+24),(R+4),4);
}
B644147:{NFSU2_TR(0x644147);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64414cull));
TAIL_STATIC(0x575620u,575);
}
B64414c:L64414c:{c.instructions+=4;NFSU2_TR(0x64414c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64414e:{NFSU2_TR(0x64414e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B644151:{NFSU2_TR(0x644151);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644152:{NFSU2_TR(0x644152);
if(r1(R+518)){{goto L64415e;}}
}
B644154:L644154:{c.instructions+=3;NFSU2_TR(0x644154);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644155:{NFSU2_TR(0x644155);
__builtin_memmove((R+4),(R+0),4);
}
B644157:{NFSU2_TR(0x644157);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64415cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6440acu);}goto L6440ac;}
}
B64415c:L64415c:{c.instructions+=1;NFSU2_TR(0x64415c);
{goto L644160;}
}
B64415e:L64415e:{c.instructions+=1;NFSU2_TR(0x64415e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B644160:L644160:{c.instructions+=2;NFSU2_TR(0x644160);
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
B644162:{NFSU2_TR(0x644162);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64416b;}}
}
B644164:L644164:{c.instructions+=2;NFSU2_TR(0x644164);
w4(R+0,u32(0x8007000eull));
}
B644169:{NFSU2_TR(0x644169);
{goto L64417c;}
}
B64416b:L64416b:{c.instructions+=5;NFSU2_TR(0x64416b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64416e:{NFSU2_TR(0x64416e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644171:{NFSU2_TR(0x644171);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644174:{NFSU2_TR(0x644174);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64417a:{NFSU2_TR(0x64417a);
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
B64417c:L64417c:{c.instructions+=3;NFSU2_TR(0x64417c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64417d:{NFSU2_TR(0x64417d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64417e:{NFSU2_TR(0x64417e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B644181:L644181:{c.instructions+=6;NFSU2_TR(0x644181);
__builtin_memmove((R+28),(R+28),4);
}
B644183:{NFSU2_TR(0x644183);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644184:{NFSU2_TR(0x644184);
__builtin_memmove((R+20),(R+16),4);
}
B644186:{NFSU2_TR(0x644186);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644189:{NFSU2_TR(0x644189);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64418b:{NFSU2_TR(0x64418b);
if(r1(R+518)){{goto L644198;}}
}
B64418d:L64418d:{c.instructions+=3;NFSU2_TR(0x64418d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B644193:{NFSU2_TR(0x644193);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B644196:{NFSU2_TR(0x644196);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B644198:L644198:{c.instructions+=3;NFSU2_TR(0x644198);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64419b:{NFSU2_TR(0x64419b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64419d:{NFSU2_TR(0x64419d);
if(r1(R+518)){{goto L6441aa;}}
}
B64419f:L64419f:{c.instructions+=3;NFSU2_TR(0x64419f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6441a5:{NFSU2_TR(0x6441a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6441a8:{NFSU2_TR(0x6441a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6441aa:L6441aa:{c.instructions+=3;NFSU2_TR(0x6441aa);
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
B6441ac:{NFSU2_TR(0x6441ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6441ad:{NFSU2_TR(0x6441ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6441b0:L6441b0:{c.instructions+=5;NFSU2_TR(0x6441b0);
__builtin_memmove((R+28),(R+28),4);
}
B6441b2:{NFSU2_TR(0x6441b2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6441b3:{NFSU2_TR(0x6441b3);
__builtin_memmove((R+20),(R+16),4);
}
B6441b5:{NFSU2_TR(0x6441b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6441bb:{NFSU2_TR(0x6441bb);
{goto L6441bf;}
}
B6441bd:L6441bd:{c.instructions+=1;NFSU2_TR(0x6441bd);
__builtin_memmove((R+0),(R+4),4);
}
B6441bf:L6441bf:{c.instructions+=3;NFSU2_TR(0x6441bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6441c2:{NFSU2_TR(0x6441c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6441c4:{NFSU2_TR(0x6441c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6441bdu);}goto L6441bd;}}
}
B6441c6:L6441c6:{c.instructions+=3;NFSU2_TR(0x6441c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6441c9:{NFSU2_TR(0x6441c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6441cb:{NFSU2_TR(0x6441cb);
if(r1(R+518)){{goto L6441d1;}}
}
B6441cd:L6441cd:{c.instructions+=2;NFSU2_TR(0x6441cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6441cf:{NFSU2_TR(0x6441cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6441d1:L6441d1:{c.instructions+=3;NFSU2_TR(0x6441d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6441d4:{NFSU2_TR(0x6441d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6441d6:{NFSU2_TR(0x6441d6);
if(r1(R+518)){{goto L6441ea;}}
}
B6441d8:L6441d8:{c.instructions+=4;NFSU2_TR(0x6441d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6441db:{NFSU2_TR(0x6441db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6441dd:{NFSU2_TR(0x6441dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6441df:{NFSU2_TR(0x6441df);
if(r1(R+512)){{goto L6441e7;}}
}
B6441e1:L6441e1:{c.instructions+=3;NFSU2_TR(0x6441e1);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6441e3:{NFSU2_TR(0x6441e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6441e5:{NFSU2_TR(0x6441e5);
{goto L6441ea;}
}
B6441e7:L6441e7:{c.instructions+=1;NFSU2_TR(0x6441e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B6441ea:L6441ea:{c.instructions+=3;NFSU2_TR(0x6441ea);
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
B6441ec:{NFSU2_TR(0x6441ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6441ed:{NFSU2_TR(0x6441ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6441f0:L6441f0:{c.instructions+=9;NFSU2_TR(0x6441f0);
__builtin_memmove((R+28),(R+28),4);
}
B6441f2:{NFSU2_TR(0x6441f2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6441f3:{NFSU2_TR(0x6441f3);
__builtin_memmove((R+20),(R+16),4);
}
B6441f5:{NFSU2_TR(0x6441f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B6441fb:{NFSU2_TR(0x6441fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6441fc:{NFSU2_TR(0x6441fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6441ff:{NFSU2_TR(0x6441ff);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
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
B644203:{NFSU2_TR(0x644203);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64420a:{NFSU2_TR(0x64420a);
if(r1(R+518)){{goto L6442a7;}}
}
B644210:L644210:{c.instructions+=7;NFSU2_TR(0x644210);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644211:{NFSU2_TR(0x644211);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B644214:{NFSU2_TR(0x644214);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644215:{NFSU2_TR(0x644215);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644217:{NFSU2_TR(0x644217);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644218:{NFSU2_TR(0x644218);
w4(R+28,u32(0x7ab74cull));
}
B64421d:{NFSU2_TR(0x64421d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64421f:L64421f:{c.instructions+=1;NFSU2_TR(0x64421f);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L644221;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64421fu);}goto L64421f;}}
}
B644221:L644221:{c.instructions+=3;NFSU2_TR(0x644221);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B644222:{NFSU2_TR(0x644222);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644223:{NFSU2_TR(0x644223);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64426a;}}
}
B644225:L644225:{c.instructions+=2;NFSU2_TR(0x644225);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B644228:{NFSU2_TR(0x644228);
if(r1(R+518)){{goto L644254;}}
}
B64422a:L64422a:{c.instructions+=3;NFSU2_TR(0x64422a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B644230:{NFSU2_TR(0x644230);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B644233:{NFSU2_TR(0x644233);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644254;}}
}
B644235:L644235:{c.instructions+=7;NFSU2_TR(0x644235);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64423b:{NFSU2_TR(0x64423b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
}
B64423e:{NFSU2_TR(0x64423e);
u8 U[4];
w4(U+0,u32(0x7ab728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644243:{NFSU2_TR(0x644243);
u8 U[4];
w4(U+0,u32(0x5e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644248:{NFSU2_TR(0x644248);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644249:{NFSU2_TR(0x644249);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64424a:{NFSU2_TR(0x64424a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64424full));
TAIL_STATIC(0x64307cu,643);
}
B64424f:L64424f:{c.instructions+=2;NFSU2_TR(0x64424f);
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
B644252:{NFSU2_TR(0x644252);
{goto L6442a7;}
}
B644254:L644254:{c.instructions+=5;NFSU2_TR(0x644254);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64425a:{NFSU2_TR(0x64425a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64425b:{NFSU2_TR(0x64425b);
u8 U[4];
w4(U+0,u32(0x5dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644260:{NFSU2_TR(0x644260);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644263:{NFSU2_TR(0x644263);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644268ull));
TAIL_STATIC(0x6432a0u,643);
}
B644268:L644268:{c.instructions+=1;NFSU2_TR(0x644268);
{goto L6442a7;}
}
B64426a:L64426a:{c.instructions+=7;NFSU2_TR(0x64426a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64426d:{NFSU2_TR(0x64426d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64426e:{NFSU2_TR(0x64426e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644271:{NFSU2_TR(0x644271);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B644277:{NFSU2_TR(0x644277);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64427c:{NFSU2_TR(0x64427c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64427d:{NFSU2_TR(0x64427d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644282ull));
TAIL_STATIC(0x75e02bu,75e);
}
B644282:L644282:{c.instructions+=10;NFSU2_TR(0x644282);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B644288:{NFSU2_TR(0x644288);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644289:{NFSU2_TR(0x644289);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64428e:{NFSU2_TR(0x64428e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B644294:{NFSU2_TR(0x644294);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644296:{NFSU2_TR(0x644296);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644297:{NFSU2_TR(0x644297);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
}
B64429a:{NFSU2_TR(0x64429a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64429b:{NFSU2_TR(0x64429b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B64429f:{NFSU2_TR(0x64429f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6442a4ull));
TAIL_STATIC(0x64307cu,643);
}
B6442a4:L6442a4:{c.instructions+=1;NFSU2_TR(0x6442a4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6442a7:L6442a7:{c.instructions+=3;NFSU2_TR(0x6442a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6442a8:{NFSU2_TR(0x6442a8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6442a9:{NFSU2_TR(0x6442a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6442aa:L6442aa:{c.instructions+=8;NFSU2_TR(0x6442aa);
__builtin_memmove((R+28),(R+28),4);
}
B6442ac:{NFSU2_TR(0x6442ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6442ad:{NFSU2_TR(0x6442ad);
__builtin_memmove((R+20),(R+16),4);
}
B6442af:{NFSU2_TR(0x6442af);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6442b5:{NFSU2_TR(0x6442b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6442b8:{NFSU2_TR(0x6442b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6442bb:{NFSU2_TR(0x6442bb);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x278ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6442c2:{NFSU2_TR(0x6442c2);
if(r1(R+518)){{goto L6442cd;}}
}
B6442c4:L6442c4:{c.instructions+=2;NFSU2_TR(0x6442c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6442ca:{NFSU2_TR(0x6442ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6442cd:L6442cd:{c.instructions+=3;NFSU2_TR(0x6442cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6442d0:{NFSU2_TR(0x6442d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6442d2:{NFSU2_TR(0x6442d2);
if(r1(R+518)){{goto L6442dd;}}
}
B6442d4:L6442d4:{c.instructions+=2;NFSU2_TR(0x6442d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6442da:{NFSU2_TR(0x6442da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6442dd:L6442dd:{c.instructions+=3;NFSU2_TR(0x6442dd);
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
B6442df:{NFSU2_TR(0x6442df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6442e0:{NFSU2_TR(0x6442e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6442e3:L6442e3:{c.instructions+=14;NFSU2_TR(0x6442e3);
__builtin_memmove((R+28),(R+28),4);
}
B6442e5:{NFSU2_TR(0x6442e5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6442e6:{NFSU2_TR(0x6442e6);
__builtin_memmove((R+20),(R+16),4);
}
B6442e8:{NFSU2_TR(0x6442e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x218ull))));
}
B6442ee:{NFSU2_TR(0x6442ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6442ef:{NFSU2_TR(0x6442ef);
__builtin_memmove((R+24),(R+4),4);
}
B6442f1:{NFSU2_TR(0x6442f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6442f7:{NFSU2_TR(0x6442f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6442fd:{NFSU2_TR(0x6442fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6442fe:{NFSU2_TR(0x6442fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((R+28),(U+0),4);
}
B644304:{NFSU2_TR(0x644304);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644305:{NFSU2_TR(0x644305);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xcull))));
}
B644308:{NFSU2_TR(0x644308);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644309:{NFSU2_TR(0x644309);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64430eull));
TAIL_STATIC(0x643afeu,643);
}
B64430e:L64430e:{c.instructions+=3;NFSU2_TR(0x64430e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B644310:{NFSU2_TR(0x644310);
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
B644312:{NFSU2_TR(0x644312);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6444d8;}}
}
B644318:L644318:{c.instructions+=6;NFSU2_TR(0x644318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64431a:{NFSU2_TR(0x64431a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64431d:{NFSU2_TR(0x64431d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64431e:{NFSU2_TR(0x64431e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644320:{NFSU2_TR(0x644320);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B644321:{NFSU2_TR(0x644321);
if(r1(R+518)){{goto L644342;}}
}
B644323:L644323:{c.instructions+=2;NFSU2_TR(0x644323);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B644324:{NFSU2_TR(0x644324);
if(r1(R+518)){{goto L64433d;}}
}
B644326:L644326:{c.instructions+=3;NFSU2_TR(0x644326);
u8 U[4];
w4(U+0,u32(0x7ab74cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64432b:{NFSU2_TR(0x64432b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64432c:{NFSU2_TR(0x64432c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644331ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6441f0u);}goto L6441f0;}
}
B644331:L644331:{c.instructions+=2;NFSU2_TR(0x644331);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644332:{NFSU2_TR(0x644332);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644333:L644333:{c.instructions+=2;NFSU2_TR(0x644333);
w4(R+0,u32(0x80004005ull));
}
B644338:{NFSU2_TR(0x644338);
{goto L6444d7;}
}
B64433d:L64433d:{c.instructions+=2;NFSU2_TR(0x64433d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644340:{NFSU2_TR(0x644340);
{goto L644345;}
}
B644342:L644342:{c.instructions+=1;NFSU2_TR(0x644342);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644345:L644345:{c.instructions+=5;NFSU2_TR(0x644345);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64434b:{NFSU2_TR(0x64434b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64434d:{NFSU2_TR(0x64434d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644353:{NFSU2_TR(0x644353);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644356:{NFSU2_TR(0x644356);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644370;}}
}
B644358:L644358:{c.instructions+=3;NFSU2_TR(0x644358);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64435e:{NFSU2_TR(0x64435e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B644361:{NFSU2_TR(0x644361);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644370;}}
}
B644363:L644363:{c.instructions+=4;NFSU2_TR(0x644363);
u8 U[4];
w4(U+0,u32(0x7ab778ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644368:{NFSU2_TR(0x644368);
u8 U[4];
w4(U+0,u32(0x5e1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64436d:{NFSU2_TR(0x64436d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64436e:{NFSU2_TR(0x64436e);
{goto L644398;}
}
B644370:L644370:{c.instructions+=3;NFSU2_TR(0x644370);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644376:{NFSU2_TR(0x644376);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B644378:{NFSU2_TR(0x644378);
if(r1(R+518)){{goto L6443ac;}}
}
B64437a:L64437a:{c.instructions+=4;NFSU2_TR(0x64437a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64437d:{NFSU2_TR(0x64437d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B64437e:{NFSU2_TR(0x64437e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B644380:{NFSU2_TR(0x644380);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64437au);}goto L64437a;}}
}
B644382:L644382:{c.instructions+=2;NFSU2_TR(0x644382);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x20ull))));
}
B644385:{NFSU2_TR(0x644385);
if(r1(R+512)){{goto L6443ac;}}
}
B644387:L644387:{c.instructions+=4;NFSU2_TR(0x644387);
u8 U[4];
w4(U+0,u32(0x7ab75cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64438c:{NFSU2_TR(0x64438c);
u8 U[4];
w4(U+0,u32(0x5e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644391:{NFSU2_TR(0x644391);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B644397:{NFSU2_TR(0x644397);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644398:L644398:{c.instructions+=3;NFSU2_TR(0x644398);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64439b:{NFSU2_TR(0x64439b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64439c:{NFSU2_TR(0x64439c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6443a1ull));
TAIL_STATIC(0x64307cu,643);
}
B6443a1:L6443a1:{c.instructions+=4;NFSU2_TR(0x6443a1);
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
B6443a4:{NFSU2_TR(0x6443a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6443a7:{NFSU2_TR(0x6443a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6443aa:{NFSU2_TR(0x6443aa);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644333u);}goto L644333;}
}
B6443ac:L6443ac:{c.instructions+=2;NFSU2_TR(0x6443ac);
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
B6443ae:{NFSU2_TR(0x6443ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644448;}}
}
B6443b4:L6443b4:{c.instructions+=8;NFSU2_TR(0x6443b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6443b7:{NFSU2_TR(0x6443b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6443b8:{NFSU2_TR(0x6443b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6443be:{NFSU2_TR(0x6443be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6443bf:{NFSU2_TR(0x6443bf);
w4(R+28,u32(0x104ull));
}
B6443c4:{NFSU2_TR(0x6443c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6443c5:{NFSU2_TR(0x6443c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6443c8:{NFSU2_TR(0x6443c8);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831c0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6443ceull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6443ce:L6443ce:{c.instructions+=2;NFSU2_TR(0x6443ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6443d1:{NFSU2_TR(0x6443d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6443d7:L6443d7:{c.instructions+=4;NFSU2_TR(0x6443d7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6443d9:{NFSU2_TR(0x6443d9);
__builtin_memmove((R+8),(R+12),1);
}
B6443db:{NFSU2_TR(0x6443db);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6443dd:{NFSU2_TR(0x6443dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6443f9;}}
}
B6443df:L6443df:{c.instructions+=2;NFSU2_TR(0x6443df);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6443e1:{NFSU2_TR(0x6443e1);
if(r1(R+518)){{goto L6443f5;}}
}
B6443e3:L6443e3:{c.instructions+=4;NFSU2_TR(0x6443e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6443e6:{NFSU2_TR(0x6443e6);
__builtin_memmove((R+8),(R+12),1);
}
B6443e8:{NFSU2_TR(0x6443e8);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6443eb:{NFSU2_TR(0x6443eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6443f9;}}
}
B6443ed:L6443ed:{c.instructions+=6;NFSU2_TR(0x6443ed);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6443ee:{NFSU2_TR(0x6443ee);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6443ef:{NFSU2_TR(0x6443ef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6443f0:{NFSU2_TR(0x6443f0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6443f1:{NFSU2_TR(0x6443f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6443f3:{NFSU2_TR(0x6443f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6443d7u);}goto L6443d7;}}
}
B6443f5:L6443f5:{c.instructions+=2;NFSU2_TR(0x6443f5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6443f7:{NFSU2_TR(0x6443f7);
{goto L6443fe;}
}
B6443f9:L6443f9:{c.instructions+=2;NFSU2_TR(0x6443f9);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6443fb:{NFSU2_TR(0x6443fb);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6443fe:L6443fe:{c.instructions+=2;NFSU2_TR(0x6443fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B644400:{NFSU2_TR(0x644400);
if(r1(R+518)){{goto L64443c;}}
}
B644402:L644402:{c.instructions+=8;NFSU2_TR(0x644402);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644405:{NFSU2_TR(0x644405);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64440b:{NFSU2_TR(0x64440b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64440e:{NFSU2_TR(0x64440e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B644414:{NFSU2_TR(0x644414);
u8 U[4];
w4(U+0,u32(0x790f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644419:{NFSU2_TR(0x644419);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64441a:{NFSU2_TR(0x64441a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64441b:{NFSU2_TR(0x64441b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644420ull));
TAIL_STATIC(0x75e081u,75e);
}
B644420:L644420:{c.instructions+=9;NFSU2_TR(0x644420);
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
B644423:{NFSU2_TR(0x644423);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B644426:{NFSU2_TR(0x644426);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644427:{NFSU2_TR(0x644427);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeecull))));
__builtin_memmove((R+0),(U+0),4);
}
B64442d:{NFSU2_TR(0x64442d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64442e:{NFSU2_TR(0x64442e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64442f:{NFSU2_TR(0x64442f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B644435:{NFSU2_TR(0x644435);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644436:{NFSU2_TR(0x644436);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831c0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64443cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B64443c:L64443c:{c.instructions+=4;NFSU2_TR(0x64443c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeecull))));
__builtin_memmove((R+0),(U+0),4);
}
B644442:{NFSU2_TR(0x644442);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B644444:{NFSU2_TR(0x644444);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644447:{NFSU2_TR(0x644447);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B644448:L644448:{c.instructions+=3;NFSU2_TR(0x644448);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64444e:{NFSU2_TR(0x64444e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B644450:{NFSU2_TR(0x644450);
if(r1(R+518)){{goto L644460;}}
}
B644452:L644452:{c.instructions+=2;NFSU2_TR(0x644452);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B644456:{NFSU2_TR(0x644456);
if(r1(R+518)){{goto L644460;}}
}
B644458:L644458:{c.instructions+=3;NFSU2_TR(0x644458);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64445b:{NFSU2_TR(0x64445b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64445e:{NFSU2_TR(0x64445e);
{goto L644464;}
}
B644460:L644460:{c.instructions+=1;NFSU2_TR(0x644460);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B644464:L644464:{c.instructions+=2;NFSU2_TR(0x644464);
u8 U[4];
w4(U+0,u32(0x70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644466:{NFSU2_TR(0x644466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64446bull));
TAIL_STATIC(0x575620u,575);
}
B64446b:L64446b:{c.instructions+=3;NFSU2_TR(0x64446b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64446d:{NFSU2_TR(0x64446d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64446e:{NFSU2_TR(0x64446e);
if(r1(R+518)){{goto L64447b;}}
}
B644470:L644470:{c.instructions+=2;NFSU2_TR(0x644470);
__builtin_memmove((R+4),(R+0),4);
}
B644472:{NFSU2_TR(0x644472);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644477ull));
TAIL_STATIC(0x643de4u,643);
}
B644477:L644477:{c.instructions+=2;NFSU2_TR(0x644477);
__builtin_memmove((R+28),(R+0),4);
}
B644479:{NFSU2_TR(0x644479);
{goto L64447d;}
}
B64447b:L64447b:{c.instructions+=1;NFSU2_TR(0x64447b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64447d:L64447d:{c.instructions+=2;NFSU2_TR(0x64447d);
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
B64447f:{NFSU2_TR(0x64447f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644488;}}
}
B644481:L644481:{c.instructions+=2;NFSU2_TR(0x644481);
w4(R+0,u32(0x8007000eull));
}
B644486:{NFSU2_TR(0x644486);
{goto L6444d7;}
}
B644488:L644488:{c.instructions+=12;NFSU2_TR(0x644488);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64448b:{NFSU2_TR(0x64448b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64448e:{NFSU2_TR(0x64448e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644491:{NFSU2_TR(0x644491);
__builtin_memmove((R+4),(R+28),4);
}
B644493:{NFSU2_TR(0x644493);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644499:{NFSU2_TR(0x644499);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64449a:{NFSU2_TR(0x64449a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6444a0:{NFSU2_TR(0x6444a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6444a1:{NFSU2_TR(0x6444a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6444a2:{NFSU2_TR(0x6444a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6444a4:{NFSU2_TR(0x6444a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6444a7:{NFSU2_TR(0x6444a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6444acull));
TAIL_STATIC(0x643e93u,643);
}
B6444ac:L6444ac:{c.instructions+=3;NFSU2_TR(0x6444ac);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6444ae:{NFSU2_TR(0x6444ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6444b1:{NFSU2_TR(0x6444b1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6444c6;}}
}
B6444b3:L6444b3:{c.instructions+=5;NFSU2_TR(0x6444b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6444b4:{NFSU2_TR(0x6444b4);
__builtin_memmove((R+4),(R+28),4);
}
B6444b6:{NFSU2_TR(0x6444b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6444b9:{NFSU2_TR(0x6444b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6444bc:{NFSU2_TR(0x6444bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6444c1ull));
TAIL_STATIC(0x643e72u,643);
}
B6444c1:L6444c1:{c.instructions+=2;NFSU2_TR(0x6444c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6444c4:{NFSU2_TR(0x6444c4);
{goto L6444d7;}
}
B6444c6:L6444c6:{c.instructions+=4;NFSU2_TR(0x6444c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6444cc:{NFSU2_TR(0x6444cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6444cf:{NFSU2_TR(0x6444cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6444d5:{NFSU2_TR(0x6444d5);
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
B6444d7:L6444d7:{c.instructions+=1;NFSU2_TR(0x6444d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6444d8:L6444d8:{c.instructions+=4;NFSU2_TR(0x6444d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6444d9:{NFSU2_TR(0x6444d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6444da:{NFSU2_TR(0x6444da);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6444db:{NFSU2_TR(0x6444db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6444dc:L6444dc:{c.instructions+=10;NFSU2_TR(0x6444dc);
__builtin_memmove((R+28),(R+28),4);
}
B6444de:{NFSU2_TR(0x6444de);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6444df:{NFSU2_TR(0x6444df);
__builtin_memmove((R+20),(R+16),4);
}
B6444e1:{NFSU2_TR(0x6444e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B6444e7:{NFSU2_TR(0x6444e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6444e8:{NFSU2_TR(0x6444e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6444e9:{NFSU2_TR(0x6444e9);
__builtin_memmove((R+28),(R+4),4);
}
B6444eb:{NFSU2_TR(0x6444eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6444f1:{NFSU2_TR(0x6444f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6444f3:{NFSU2_TR(0x6444f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6444f8ull));
TAIL_STATIC(0x642bc7u,642);
}
B6444f8:L6444f8:{c.instructions+=2;NFSU2_TR(0x6444f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6444fc:{NFSU2_TR(0x6444fc);
if(r1(R+518)){{goto L6445ba;}}
}
B644502:L644502:{c.instructions+=1;NFSU2_TR(0x644502);
{goto L64450f;}
}
B644504:L644504:{c.instructions+=3;NFSU2_TR(0x644504);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B644506:{NFSU2_TR(0x644506);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B644508:{NFSU2_TR(0x644508);
if(r1(R+518)){{goto L64450e;}}
}
B64450a:L64450a:{c.instructions+=2;NFSU2_TR(0x64450a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64450c:{NFSU2_TR(0x64450c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644519;}}
}
B64450e:L64450e:{c.instructions+=1;NFSU2_TR(0x64450e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64450f:L64450f:{c.instructions+=3;NFSU2_TR(0x64450f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644515:{NFSU2_TR(0x644515);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+4))));
}
B644517:{NFSU2_TR(0x644517);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644504u);}goto L644504;}}
}
B644519:L644519:{c.instructions+=4;NFSU2_TR(0x644519);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64451d:{NFSU2_TR(0x64451d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B644520:{NFSU2_TR(0x644520);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B644523:{NFSU2_TR(0x644523);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644524:L644524:{c.instructions+=4;NFSU2_TR(0x644524);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64452a:{NFSU2_TR(0x64452a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B64452c:{NFSU2_TR(0x64452c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B64452e:{NFSU2_TR(0x64452e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L644584;}}
}
B644530:L644530:{c.instructions+=3;NFSU2_TR(0x644530);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B644532:{NFSU2_TR(0x644532);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5cull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B644535:{NFSU2_TR(0x644535);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644566;}}
}
B644537:L644537:{c.instructions+=2;NFSU2_TR(0x644537);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B644539:{NFSU2_TR(0x644539);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L644548;}}
}
B64453b:L64453b:{c.instructions+=2;NFSU2_TR(0x64453b);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B64453e:{NFSU2_TR(0x64453e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644548;}}
}
B644540:L644540:{c.instructions+=7;NFSU2_TR(0x644540);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B644541:{NFSU2_TR(0x644541);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B644542:{NFSU2_TR(0x644542);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B644543:{NFSU2_TR(0x644543);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B644544:{NFSU2_TR(0x644544);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B644545:{NFSU2_TR(0x644545);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B644546:{NFSU2_TR(0x644546);
{goto L64457b;}
}
B644548:L644548:{c.instructions+=2;NFSU2_TR(0x644548);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5cull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B64454b:{NFSU2_TR(0x64454b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644566;}}
}
B64454d:L64454d:{c.instructions+=2;NFSU2_TR(0x64454d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B64454f:{NFSU2_TR(0x64454f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L644566;}}
}
B644551:L644551:{c.instructions+=2;NFSU2_TR(0x644551);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xdull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B644554:{NFSU2_TR(0x644554);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644566;}}
}
B644556:L644556:{c.instructions+=2;NFSU2_TR(0x644556);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B644559:{NFSU2_TR(0x644559);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644566;}}
}
B64455b:L64455b:{c.instructions+=4;NFSU2_TR(0x64455b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x3ull))));
}
B64455e:{NFSU2_TR(0x64455e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B644561:{NFSU2_TR(0x644561);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ull))));
}
B644564:{NFSU2_TR(0x644564);
{goto L64457b;}
}
B644566:L644566:{c.instructions+=2;NFSU2_TR(0x644566);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xdull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B644569:{NFSU2_TR(0x644569);
if(r1(R+518)){{goto L644578;}}
}
B64456b:L64456b:{c.instructions+=3;NFSU2_TR(0x64456b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64456e:{NFSU2_TR(0x64456e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B644571:{NFSU2_TR(0x644571);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffefcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B644578:L644578:{c.instructions+=3;NFSU2_TR(0x644578);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B644579:{NFSU2_TR(0x644579);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64457a:{NFSU2_TR(0x64457a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B64457b:L64457b:{c.instructions+=2;NFSU2_TR(0x64457b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xffull))));
}
B644582:{NFSU2_TR(0x644582);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644524u);}goto L644524;}}
}
B644584:L644584:{c.instructions+=11;NFSU2_TR(0x644584);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644587:{NFSU2_TR(0x644587);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffefcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B64458f:{NFSU2_TR(0x64458f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+0),(U+0),4);
}
B644595:{NFSU2_TR(0x644595);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644596:{NFSU2_TR(0x644596);
u8 U[4];
w4(U+0,u32(0x7ab7c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64459b:{NFSU2_TR(0x64459b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64459d:{NFSU2_TR(0x64459d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6445a3:{NFSU2_TR(0x6445a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6445a4:{NFSU2_TR(0x6445a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6445a7:{NFSU2_TR(0x6445a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6445a8:{NFSU2_TR(0x6445a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6445adull));
TAIL_STATIC(0x64307cu,643);
}
B6445ad:L6445ad:{c.instructions+=6;NFSU2_TR(0x6445ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6445b0:{NFSU2_TR(0x6445b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6445b2:{NFSU2_TR(0x6445b2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6445b3:{NFSU2_TR(0x6445b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6445b6:{NFSU2_TR(0x6445b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6445b9:{NFSU2_TR(0x6445b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6445ba:L6445ba:{c.instructions+=5;NFSU2_TR(0x6445ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6445bb:{NFSU2_TR(0x6445bb);
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
B6445bd:{NFSU2_TR(0x6445bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6445be:{NFSU2_TR(0x6445be);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6445bf:{NFSU2_TR(0x6445bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6445c0:L6445c0:{c.instructions+=7;NFSU2_TR(0x6445c0);
__builtin_memmove((R+28),(R+28),4);
}
B6445c2:{NFSU2_TR(0x6445c2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6445c3:{NFSU2_TR(0x6445c3);
__builtin_memmove((R+20),(R+16),4);
}
B6445c5:{NFSU2_TR(0x6445c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6445c6:{NFSU2_TR(0x6445c6);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6445c8:{NFSU2_TR(0x6445c8);
__builtin_memmove((R+24),(R+4),4);
}
B6445ca:{NFSU2_TR(0x6445ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6445cfull));
TAIL_STATIC(0x575620u,575);
}
B6445cf:L6445cf:{c.instructions+=3;NFSU2_TR(0x6445cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6445d1:{NFSU2_TR(0x6445d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6445d2:{NFSU2_TR(0x6445d2);
if(r1(R+518)){{goto L6445e3;}}
}
B6445d4:L6445d4:{c.instructions+=4;NFSU2_TR(0x6445d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6445d7:{NFSU2_TR(0x6445d7);
__builtin_memmove((R+4),(R+0),4);
}
B6445d9:{NFSU2_TR(0x6445d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6445dc:{NFSU2_TR(0x6445dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6445e1ull));
TAIL_STATIC(0x643d8bu,643);
}
B6445e1:L6445e1:{c.instructions+=1;NFSU2_TR(0x6445e1);
{goto L6445e5;}
}
B6445e3:L6445e3:{c.instructions+=1;NFSU2_TR(0x6445e3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6445e5:L6445e5:{c.instructions+=2;NFSU2_TR(0x6445e5);
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
B6445e7:{NFSU2_TR(0x6445e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6445f0;}}
}
B6445e9:L6445e9:{c.instructions+=2;NFSU2_TR(0x6445e9);
w4(R+0,u32(0x8007000eull));
}
B6445ee:{NFSU2_TR(0x6445ee);
{goto L64461b;}
}
B6445f0:L6445f0:{c.instructions+=8;NFSU2_TR(0x6445f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6445f6:{NFSU2_TR(0x6445f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6445f8:{NFSU2_TR(0x6445f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6445fb:{NFSU2_TR(0x6445fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6445fe:{NFSU2_TR(0x6445fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B644600:{NFSU2_TR(0x644600);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644603:{NFSU2_TR(0x644603);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B644607:{NFSU2_TR(0x644607);
if(r1(R+518)){{goto L644614;}}
}
B644609:L644609:{c.instructions+=2;NFSU2_TR(0x644609);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64460d:{NFSU2_TR(0x64460d);
if(r1(R+518)){{goto L644614;}}
}
B64460f:L64460f:{c.instructions+=3;NFSU2_TR(0x64460f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B644611:{NFSU2_TR(0x644611);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B644612:{NFSU2_TR(0x644612);
{goto L644616;}
}
B644614:L644614:{c.instructions+=1;NFSU2_TR(0x644614);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B644616:L644616:{c.instructions+=2;NFSU2_TR(0x644616);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644619:{NFSU2_TR(0x644619);
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
B64461b:L64461b:{c.instructions+=3;NFSU2_TR(0x64461b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64461c:{NFSU2_TR(0x64461c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64461d:{NFSU2_TR(0x64461d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B644620:L644620:{c.instructions+=10;NFSU2_TR(0x644620);
__builtin_memmove((R+28),(R+28),4);
}
B644622:{NFSU2_TR(0x644622);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644623:{NFSU2_TR(0x644623);
__builtin_memmove((R+20),(R+16),4);
}
B644625:{NFSU2_TR(0x644625);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644626:{NFSU2_TR(0x644626);
__builtin_memmove((R+24),(R+4),4);
}
B644628:{NFSU2_TR(0x644628);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64462e:{NFSU2_TR(0x64462e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644631:{NFSU2_TR(0x644631);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B644633:{NFSU2_TR(0x644633);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644635:{NFSU2_TR(0x644635);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644643;}}
}
B644637:L644637:{c.instructions+=3;NFSU2_TR(0x644637);
u8 U[4];
w4(U+0,u32(0x7ab7f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64463c:{NFSU2_TR(0x64463c);
u8 U[4];
w4(U+0,u32(0x5e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644641:{NFSU2_TR(0x644641);
{goto L644652;}
}
B644643:L644643:{c.instructions+=2;NFSU2_TR(0x644643);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B644646:{NFSU2_TR(0x644646);
if(r1(R+518)){{goto L644673;}}
}
B644648:L644648:{c.instructions+=2;NFSU2_TR(0x644648);
u8 U[4];
w4(U+0,u32(0x7ab7ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64464d:{NFSU2_TR(0x64464d);
u8 U[4];
w4(U+0,u32(0x5e9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644652:L644652:{c.instructions+=5;NFSU2_TR(0x644652);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B644658:{NFSU2_TR(0x644658);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644659:{NFSU2_TR(0x644659);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64465c:{NFSU2_TR(0x64465c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64465d:{NFSU2_TR(0x64465d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644662ull));
TAIL_STATIC(0x64307cu,643);
}
B644662:L644662:{c.instructions+=4;NFSU2_TR(0x644662);
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
B644665:{NFSU2_TR(0x644665);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64466c:{NFSU2_TR(0x64466c);
w4(R+0,u32(0x80004005ull));
}
B644671:{NFSU2_TR(0x644671);
{goto L644698;}
}
B644673:L644673:{c.instructions+=2;NFSU2_TR(0x644673);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B644676:{NFSU2_TR(0x644676);
if(r1(R+518)){{goto L644686;}}
}
B644678:L644678:{c.instructions+=2;NFSU2_TR(0x644678);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64467a:{NFSU2_TR(0x64467a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644686;}}
}
B64467c:L64467c:{c.instructions+=2;NFSU2_TR(0x64467c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64467f:{NFSU2_TR(0x64467f);
if(r1(R+518)){{goto L644686;}}
}
B644681:L644681:{c.instructions+=3;NFSU2_TR(0x644681);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B644683:{NFSU2_TR(0x644683);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B644684:{NFSU2_TR(0x644684);
{goto L644688;}
}
B644686:L644686:{c.instructions+=1;NFSU2_TR(0x644686);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B644688:L644688:{c.instructions+=3;NFSU2_TR(0x644688);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64468b:{NFSU2_TR(0x64468b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64468e:{NFSU2_TR(0x64468e);
if(r1(R+518)){{goto L644696;}}
}
B644690:L644690:{c.instructions+=1;NFSU2_TR(0x644690);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B644696:L644696:{c.instructions+=1;NFSU2_TR(0x644696);
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
B644698:L644698:{c.instructions+=3;NFSU2_TR(0x644698);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644699:{NFSU2_TR(0x644699);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64469a:{NFSU2_TR(0x64469a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64469d:L64469d:{c.instructions+=8;NFSU2_TR(0x64469d);
__builtin_memmove((R+28),(R+28),4);
}
B64469f:{NFSU2_TR(0x64469f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6446a0:{NFSU2_TR(0x6446a0);
__builtin_memmove((R+24),(R+4),4);
}
B6446a2:{NFSU2_TR(0x6446a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6446a8:{NFSU2_TR(0x6446a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6446ab:{NFSU2_TR(0x6446ab);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6446ad:{NFSU2_TR(0x6446ad);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6446af:{NFSU2_TR(0x6446af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6446bd;}}
}
B6446b1:L6446b1:{c.instructions+=3;NFSU2_TR(0x6446b1);
u8 U[4];
w4(U+0,u32(0x7ab828ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6446b6:{NFSU2_TR(0x6446b6);
u8 U[4];
w4(U+0,u32(0x5e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6446bb:{NFSU2_TR(0x6446bb);
{goto L6446cc;}
}
B6446bd:L6446bd:{c.instructions+=2;NFSU2_TR(0x6446bd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6446c0:{NFSU2_TR(0x6446c0);
if(r1(R+518)){{goto L6446ed;}}
}
B6446c2:L6446c2:{c.instructions+=2;NFSU2_TR(0x6446c2);
u8 U[4];
w4(U+0,u32(0x7ab804ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6446c7:{NFSU2_TR(0x6446c7);
u8 U[4];
w4(U+0,u32(0x5eaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6446cc:L6446cc:{c.instructions+=5;NFSU2_TR(0x6446cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6446d2:{NFSU2_TR(0x6446d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6446d3:{NFSU2_TR(0x6446d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6446d6:{NFSU2_TR(0x6446d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6446d7:{NFSU2_TR(0x6446d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6446dcull));
TAIL_STATIC(0x64307cu,643);
}
B6446dc:L6446dc:{c.instructions+=5;NFSU2_TR(0x6446dc);
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
B6446df:{NFSU2_TR(0x6446df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6446e6:{NFSU2_TR(0x6446e6);
w4(R+0,u32(0x80004005ull));
}
B6446eb:{NFSU2_TR(0x6446eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6446ec:{NFSU2_TR(0x6446ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6446ed:L6446ed:{c.instructions+=4;NFSU2_TR(0x6446ed);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6446ef:{NFSU2_TR(0x6446ef);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6446f0:{NFSU2_TR(0x6446f0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6446f2:{NFSU2_TR(0x6446f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6446fb;}}
}
B6446f4:L6446f4:{c.instructions+=2;NFSU2_TR(0x6446f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6446f7:{NFSU2_TR(0x6446f7);
if(r1(R+518)){{goto L6446fb;}}
}
B6446f9:L6446f9:{c.instructions+=1;NFSU2_TR(0x6446f9);
__builtin_memmove((R+8),(R+4),4);
}
B6446fb:L6446fb:{c.instructions+=6;NFSU2_TR(0x6446fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6446fe:{NFSU2_TR(0x6446fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B644700:{NFSU2_TR(0x644700);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644703:{NFSU2_TR(0x644703);
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
B644705:{NFSU2_TR(0x644705);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644706:{NFSU2_TR(0x644706);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B644707:L644707:{c.instructions+=7;NFSU2_TR(0x644707);
__builtin_memmove((R+28),(R+28),4);
}
B644709:{NFSU2_TR(0x644709);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64470a:{NFSU2_TR(0x64470a);
__builtin_memmove((R+24),(R+4),4);
}
B64470c:{NFSU2_TR(0x64470c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644712:{NFSU2_TR(0x644712);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644715:{NFSU2_TR(0x644715);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B644717:{NFSU2_TR(0x644717);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644744;}}
}
B644719:L644719:{c.instructions+=7;NFSU2_TR(0x644719);
u8 U[4];
w4(U+0,u32(0x7ab83cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64471e:{NFSU2_TR(0x64471e);
u8 U[4];
w4(U+0,u32(0x5e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644723:{NFSU2_TR(0x644723);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B644729:{NFSU2_TR(0x644729);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64472a:{NFSU2_TR(0x64472a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64472d:{NFSU2_TR(0x64472d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64472e:{NFSU2_TR(0x64472e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644733ull));
TAIL_STATIC(0x64307cu,643);
}
B644733:L644733:{c.instructions+=5;NFSU2_TR(0x644733);
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
B644736:{NFSU2_TR(0x644736);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64473d:{NFSU2_TR(0x64473d);
w4(R+0,u32(0x80004005ull));
}
B644742:{NFSU2_TR(0x644742);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644743:{NFSU2_TR(0x644743);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B644744:L644744:{c.instructions+=7;NFSU2_TR(0x644744);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B644747:{NFSU2_TR(0x644747);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64474a:{NFSU2_TR(0x64474a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64474d:{NFSU2_TR(0x64474d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644750:{NFSU2_TR(0x644750);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B644754:{NFSU2_TR(0x644754);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644756:{NFSU2_TR(0x644756);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64475bull));
TAIL_STATIC(0x643dc3u,643);
}
B64475b:L64475b:{c.instructions+=3;NFSU2_TR(0x64475b);
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
B64475d:{NFSU2_TR(0x64475d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64475e:{NFSU2_TR(0x64475e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64475f:L64475f:{c.instructions+=12;NFSU2_TR(0x64475f);
__builtin_memmove((R+28),(R+28),4);
}
B644761:{NFSU2_TR(0x644761);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644762:{NFSU2_TR(0x644762);
__builtin_memmove((R+20),(R+16),4);
}
B644764:{NFSU2_TR(0x644764);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644765:{NFSU2_TR(0x644765);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644766:{NFSU2_TR(0x644766);
__builtin_memmove((R+12),(R+4),4);
}
B644768:{NFSU2_TR(0x644768);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64476e:{NFSU2_TR(0x64476e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64476f:{NFSU2_TR(0x64476f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644775:{NFSU2_TR(0x644775);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644776:{NFSU2_TR(0x644776);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64477c:{NFSU2_TR(0x64477c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644781ull));
TAIL_STATIC(0x643afeu,643);
}
B644781:L644781:{c.instructions+=2;NFSU2_TR(0x644781);
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
B644783:{NFSU2_TR(0x644783);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L644893;}}
}
B644789:L644789:{c.instructions+=4;NFSU2_TR(0x644789);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64478b:{NFSU2_TR(0x64478b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64478e:{NFSU2_TR(0x64478e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64478f:{NFSU2_TR(0x64478f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64487b;}}
}
B644795:L644795:{c.instructions+=5;NFSU2_TR(0x644795);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644797:{NFSU2_TR(0x644797);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64479d:{NFSU2_TR(0x64479d);
w4(R+28,u32(0x7ab86cull));
}
B6447a2:{NFSU2_TR(0x6447a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6447a3:{NFSU2_TR(0x6447a3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6447a5:L6447a5:{c.instructions+=1;NFSU2_TR(0x6447a5);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6447a7;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6447a5u);}goto L6447a5;}}
}
B6447a7:L6447a7:{c.instructions+=1;NFSU2_TR(0x6447a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64487b;}}
}
B6447ad:L6447ad:{c.instructions+=5;NFSU2_TR(0x6447ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6447b3:{NFSU2_TR(0x6447b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6447b9:{NFSU2_TR(0x6447b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6447ba:{NFSU2_TR(0x6447ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6447c0:{NFSU2_TR(0x6447c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6447c5ull));
TAIL_STATIC(0x643afeu,643);
}
B6447c5:L6447c5:{c.instructions+=2;NFSU2_TR(0x6447c5);
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
B6447c7:{NFSU2_TR(0x6447c7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L644892;}}
}
B6447cd:L6447cd:{c.instructions+=2;NFSU2_TR(0x6447cd);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6447d0:{NFSU2_TR(0x6447d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6447f7;}}
}
B6447d2:L6447d2:{c.instructions+=6;NFSU2_TR(0x6447d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6447d8:{NFSU2_TR(0x6447d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6447de:{NFSU2_TR(0x6447de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6447df:{NFSU2_TR(0x6447df);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6447e5:{NFSU2_TR(0x6447e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6447e8:{NFSU2_TR(0x6447e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6447edull));
TAIL_STATIC(0x643afeu,643);
}
B6447ed:L6447ed:{c.instructions+=2;NFSU2_TR(0x6447ed);
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
B6447ef:{NFSU2_TR(0x6447ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L644892;}}
}
B6447f5:L6447f5:{c.instructions+=1;NFSU2_TR(0x6447f5);
{goto L6447fb;}
}
B6447f7:L6447f7:{c.instructions+=1;NFSU2_TR(0x6447f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6447fb:L6447fb:{c.instructions+=3;NFSU2_TR(0x6447fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6447fd:{NFSU2_TR(0x6447fd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644800:{NFSU2_TR(0x644800);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64487b;}}
}
B644802:L644802:{c.instructions+=5;NFSU2_TR(0x644802);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644804:{NFSU2_TR(0x644804);
w4(R+28,u32(0x786050ull));
}
B644809:{NFSU2_TR(0x644809);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64480f:{NFSU2_TR(0x64480f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644810:{NFSU2_TR(0x644810);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B644812:L644812:{c.instructions+=1;NFSU2_TR(0x644812);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L644814;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644812u);}goto L644812;}}
}
B644814:L644814:{c.instructions+=1;NFSU2_TR(0x644814);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64487b;}}
}
B644816:L644816:{c.instructions+=5;NFSU2_TR(0x644816);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64481c:{NFSU2_TR(0x64481c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644822:{NFSU2_TR(0x644822);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644823:{NFSU2_TR(0x644823);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644829:{NFSU2_TR(0x644829);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64482eull));
TAIL_STATIC(0x643afeu,643);
}
B64482e:L64482e:{c.instructions+=2;NFSU2_TR(0x64482e);
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
B644830:{NFSU2_TR(0x644830);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L644892;}}
}
B644832:L644832:{c.instructions+=3;NFSU2_TR(0x644832);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B644834:{NFSU2_TR(0x644834);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644837:{NFSU2_TR(0x644837);
if(r1(R+518)){{goto L64483e;}}
}
B644839:L644839:{c.instructions+=2;NFSU2_TR(0x644839);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64483c:{NFSU2_TR(0x64483c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64487b;}}
}
B64483e:L64483e:{c.instructions+=3;NFSU2_TR(0x64483e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B644841:{NFSU2_TR(0x644841);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B644843:{NFSU2_TR(0x644843);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64484a;}}
}
B644845:L644845:{c.instructions+=2;NFSU2_TR(0x644845);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B644848:{NFSU2_TR(0x644848);
{goto L644890;}
}
B64484a:L64484a:{c.instructions+=4;NFSU2_TR(0x64484a);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64484c:{NFSU2_TR(0x64484c);
w4(R+28,u32(0x7ab860ull));
}
B644851:{NFSU2_TR(0x644851);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644852:{NFSU2_TR(0x644852);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B644854:L644854:{c.instructions+=1;NFSU2_TR(0x644854);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L644856;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644854u);}goto L644854;}}
}
B644856:L644856:{c.instructions+=1;NFSU2_TR(0x644856);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644861;}}
}
B644858:L644858:{c.instructions+=2;NFSU2_TR(0x644858);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
w4(U+4,u32(0x400ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64485f:{NFSU2_TR(0x64485f);
{goto L644890;}
}
B644861:L644861:{c.instructions+=5;NFSU2_TR(0x644861);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B644864:{NFSU2_TR(0x644864);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644866:{NFSU2_TR(0x644866);
w4(R+28,u32(0x7ab850ull));
}
B64486b:{NFSU2_TR(0x64486b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64486c:{NFSU2_TR(0x64486c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64486e:L64486e:{c.instructions+=1;NFSU2_TR(0x64486e);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L644870;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64486eu);}goto L64486e;}}
}
B644870:L644870:{c.instructions+=1;NFSU2_TR(0x644870);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64487b;}}
}
B644872:L644872:{c.instructions+=2;NFSU2_TR(0x644872);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
w4(U+4,u32(0x800ull));
s4(u32(r4(U+0)),r4(U+4));
}
B644879:{NFSU2_TR(0x644879);
{goto L644890;}
}
B64487b:L64487b:{c.instructions+=2;NFSU2_TR(0x64487b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64487e:{NFSU2_TR(0x64487e);
if(r1(R+518)){{goto L644890;}}
}
B644880:L644880:{c.instructions+=2;NFSU2_TR(0x644880);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644883:{NFSU2_TR(0x644883);
if(r1(R+518)){{goto L644890;}}
}
B644885:L644885:{c.instructions+=2;NFSU2_TR(0x644885);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64488b:{NFSU2_TR(0x64488b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644890ull));
TAIL_STATIC(0x642bc7u,642);
}
B644890:L644890:{c.instructions+=1;NFSU2_TR(0x644890);
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
B644892:L644892:{c.instructions+=1;NFSU2_TR(0x644892);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B644893:L644893:{c.instructions+=5;NFSU2_TR(0x644893);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644894:{NFSU2_TR(0x644894);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64489b:{NFSU2_TR(0x64489b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64489c:{NFSU2_TR(0x64489c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64489d:{NFSU2_TR(0x64489d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64489e:L64489e:{c.instructions+=15;NFSU2_TR(0x64489e);
__builtin_memmove((R+28),(R+28),4);
}
B6448a0:{NFSU2_TR(0x6448a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6448a1:{NFSU2_TR(0x6448a1);
__builtin_memmove((R+20),(R+16),4);
}
B6448a3:{NFSU2_TR(0x6448a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6448a6:{NFSU2_TR(0x6448a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6448aa:{NFSU2_TR(0x6448aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6448ae:{NFSU2_TR(0x6448ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6448af:{NFSU2_TR(0x6448af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6448b0:{NFSU2_TR(0x6448b0);
__builtin_memmove((R+12),(R+4),4);
}
B6448b2:{NFSU2_TR(0x6448b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6448b8:{NFSU2_TR(0x6448b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6448b9:{NFSU2_TR(0x6448b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6448bf:{NFSU2_TR(0x6448bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6448c0:{NFSU2_TR(0x6448c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6448c6:{NFSU2_TR(0x6448c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6448cbull));
TAIL_STATIC(0x643afeu,643);
}
B6448cb:L6448cb:{c.instructions+=3;NFSU2_TR(0x6448cb);
__builtin_memmove((R+24),(R+0),4);
}
B6448cd:{NFSU2_TR(0x6448cd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6448cf:{NFSU2_TR(0x6448cf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L644bea;}}
}
B6448d5:L6448d5:{c.instructions+=2;NFSU2_TR(0x6448d5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6448d8:{NFSU2_TR(0x6448d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644bcd;}}
}
B6448de:L6448de:{c.instructions+=5;NFSU2_TR(0x6448de);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6448e0:{NFSU2_TR(0x6448e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6448e6:{NFSU2_TR(0x6448e6);
w4(R+28,u32(0x7ab86cull));
}
B6448eb:{NFSU2_TR(0x6448eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6448ec:{NFSU2_TR(0x6448ec);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6448ee:L6448ee:{c.instructions+=1;NFSU2_TR(0x6448ee);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6448f0;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6448eeu);}goto L6448ee;}}
}
B6448f0:L6448f0:{c.instructions+=1;NFSU2_TR(0x6448f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644bcd;}}
}
B6448f6:L6448f6:{c.instructions+=5;NFSU2_TR(0x6448f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6448fc:{NFSU2_TR(0x6448fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B644902:{NFSU2_TR(0x644902);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644903:{NFSU2_TR(0x644903);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644909:{NFSU2_TR(0x644909);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64490eull));
TAIL_STATIC(0x643afeu,643);
}
B64490e:L64490e:{c.instructions+=3;NFSU2_TR(0x64490e);
__builtin_memmove((R+24),(R+0),4);
}
B644910:{NFSU2_TR(0x644910);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B644912:{NFSU2_TR(0x644912);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L644bea;}}
}
B644918:L644918:{c.instructions+=1;NFSU2_TR(0x644918);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64491c:L64491c:{c.instructions+=3;NFSU2_TR(0x64491c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644922:{NFSU2_TR(0x644922);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644925:{NFSU2_TR(0x644925);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64493f;}}
}
B644927:L644927:{c.instructions+=5;NFSU2_TR(0x644927);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644929:{NFSU2_TR(0x644929);
w4(R+28,u32(0x786050ull));
}
B64492e:{NFSU2_TR(0x64492e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644934:{NFSU2_TR(0x644934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644935:{NFSU2_TR(0x644935);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B644937:L644937:{c.instructions+=1;NFSU2_TR(0x644937);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L644939;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644937u);}goto L644937;}}
}
B644939:L644939:{c.instructions+=1;NFSU2_TR(0x644939);
if(r1(R+518)){{goto L644c12;}}
}
B64493f:L64493f:{c.instructions+=2;NFSU2_TR(0x64493f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644942:{NFSU2_TR(0x644942);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6449ae;}}
}
B644944:L644944:{c.instructions+=6;NFSU2_TR(0x644944);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64494a:{NFSU2_TR(0x64494a);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64494c:{NFSU2_TR(0x64494c);
w4(R+28,u32(0x7ab888ull));
}
B644951:{NFSU2_TR(0x644951);
__builtin_memmove((R+24),(R+0),4);
}
B644953:{NFSU2_TR(0x644953);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644954:{NFSU2_TR(0x644954);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B644956:L644956:{c.instructions+=1;NFSU2_TR(0x644956);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L644958;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644956u);}goto L644956;}}
}
B644958:L644958:{c.instructions+=1;NFSU2_TR(0x644958);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644963;}}
}
B64495a:L64495a:{c.instructions+=2;NFSU2_TR(0x64495a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B644961:{NFSU2_TR(0x644961);
{goto L6449dc;}
}
B644963:L644963:{c.instructions+=5;NFSU2_TR(0x644963);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644965:{NFSU2_TR(0x644965);
w4(R+28,u32(0x7ab51cull));
}
B64496a:{NFSU2_TR(0x64496a);
__builtin_memmove((R+24),(R+0),4);
}
B64496c:{NFSU2_TR(0x64496c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64496d:{NFSU2_TR(0x64496d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64496f:L64496f:{c.instructions+=1;NFSU2_TR(0x64496f);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L644971;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64496fu);}goto L64496f;}}
}
B644971:L644971:{c.instructions+=1;NFSU2_TR(0x644971);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64497c;}}
}
B644973:L644973:{c.instructions+=2;NFSU2_TR(0x644973);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B64497a:{NFSU2_TR(0x64497a);
{goto L6449dc;}
}
B64497c:L64497c:{c.instructions+=5;NFSU2_TR(0x64497c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64497e:{NFSU2_TR(0x64497e);
w4(R+28,u32(0x7ab880ull));
}
B644983:{NFSU2_TR(0x644983);
__builtin_memmove((R+24),(R+0),4);
}
B644985:{NFSU2_TR(0x644985);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644986:{NFSU2_TR(0x644986);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B644988:L644988:{c.instructions+=1;NFSU2_TR(0x644988);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64498a;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644988u);}goto L644988;}}
}
B64498a:L64498a:{c.instructions+=1;NFSU2_TR(0x64498a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644991;}}
}
B64498c:L64498c:{c.instructions+=2;NFSU2_TR(0x64498c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B64498f:{NFSU2_TR(0x64498f);
{goto L6449dc;}
}
B644991:L644991:{c.instructions+=5;NFSU2_TR(0x644991);
__builtin_memmove((R+24),(R+0),4);
}
B644993:{NFSU2_TR(0x644993);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644995:{NFSU2_TR(0x644995);
w4(R+28,u32(0x7ab878ull));
}
B64499a:{NFSU2_TR(0x64499a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64499b:{NFSU2_TR(0x64499b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64499d:L64499d:{c.instructions+=1;NFSU2_TR(0x64499d);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64499f;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64499du);}goto L64499d;}}
}
B64499f:L64499f:{c.instructions+=1;NFSU2_TR(0x64499f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644bcd;}}
}
B6449a5:L6449a5:{c.instructions+=2;NFSU2_TR(0x6449a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0xffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6449ac:{NFSU2_TR(0x6449ac);
{goto L6449dc;}
}
B6449ae:L6449ae:{c.instructions+=2;NFSU2_TR(0x6449ae);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6449b1:{NFSU2_TR(0x6449b1);
if(r1(R+518)){{goto L6449c1;}}
}
B6449b3:L6449b3:{c.instructions+=2;NFSU2_TR(0x6449b3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6449b6:{NFSU2_TR(0x6449b6);
if(r1(R+518)){{goto L6449c1;}}
}
B6449b8:L6449b8:{c.instructions+=2;NFSU2_TR(0x6449b8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6449bb:{NFSU2_TR(0x6449bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644bcd;}}
}
B6449c1:L6449c1:{c.instructions+=3;NFSU2_TR(0x6449c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6449c7:{NFSU2_TR(0x6449c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
}
B6449ca:{NFSU2_TR(0x6449ca);
if(r1(R+512)){{goto L644bcd;}}
}
B6449d0:L6449d0:{c.instructions+=2;NFSU2_TR(0x6449d0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6449d3:{NFSU2_TR(0x6449d3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L644bcd;}}
}
B6449d9:L6449d9:{c.instructions+=1;NFSU2_TR(0x6449d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6449dc:L6449dc:{c.instructions+=5;NFSU2_TR(0x6449dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6449e2:{NFSU2_TR(0x6449e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6449e8:{NFSU2_TR(0x6449e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6449e9:{NFSU2_TR(0x6449e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6449ef:{NFSU2_TR(0x6449ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6449f4ull));
TAIL_STATIC(0x643afeu,643);
}
B6449f4:L6449f4:{c.instructions+=3;NFSU2_TR(0x6449f4);
__builtin_memmove((R+24),(R+0),4);
}
B6449f6:{NFSU2_TR(0x6449f6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6449f8:{NFSU2_TR(0x6449f8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L644bea;}}
}
B6449fe:L6449fe:{c.instructions+=2;NFSU2_TR(0x6449fe);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B644a01:{NFSU2_TR(0x644a01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644bcd;}}
}
B644a07:L644a07:{c.instructions+=5;NFSU2_TR(0x644a07);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644a09:{NFSU2_TR(0x644a09);
w4(R+28,u32(0x7ab874ull));
}
B644a0e:{NFSU2_TR(0x644a0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644a14:{NFSU2_TR(0x644a14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644a15:{NFSU2_TR(0x644a15);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B644a17:L644a17:{c.instructions+=1;NFSU2_TR(0x644a17);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L644a19;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644a17u);}goto L644a17;}}
}
B644a19:L644a19:{c.instructions+=1;NFSU2_TR(0x644a19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644bcd;}}
}
B644a1f:L644a1f:{c.instructions+=5;NFSU2_TR(0x644a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644a25:{NFSU2_TR(0x644a25);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B644a2b:{NFSU2_TR(0x644a2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644a2c:{NFSU2_TR(0x644a2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644a32:{NFSU2_TR(0x644a32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644a37ull));
TAIL_STATIC(0x643afeu,643);
}
B644a37:L644a37:{c.instructions+=3;NFSU2_TR(0x644a37);
__builtin_memmove((R+24),(R+0),4);
}
B644a39:{NFSU2_TR(0x644a39);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B644a3b:{NFSU2_TR(0x644a3b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L644bea;}}
}
B644a41:L644a41:{c.instructions+=3;NFSU2_TR(0x644a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644a47:{NFSU2_TR(0x644a47);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644a4a:{NFSU2_TR(0x644a4a);
if(r1(R+518)){{goto L644a5a;}}
}
B644a4c:L644a4c:{c.instructions+=2;NFSU2_TR(0x644a4c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644a4f:{NFSU2_TR(0x644a4f);
if(r1(R+518)){{goto L644a5a;}}
}
B644a51:L644a51:{c.instructions+=2;NFSU2_TR(0x644a51);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644a54:{NFSU2_TR(0x644a54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644bcd;}}
}
B644a5a:L644a5a:{c.instructions+=9;NFSU2_TR(0x644a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644a60:{NFSU2_TR(0x644a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B644a63:{NFSU2_TR(0x644a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644a66:{NFSU2_TR(0x644a66);
__builtin_memmove((R+0),(R+24),4);
}
B644a68:{NFSU2_TR(0x644a68);
w4(R+0,u32(~u32(r4(R+0))));
}
B644a6a:{NFSU2_TR(0x644a6a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B644a6b:{NFSU2_TR(0x644a6b);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
}
B644a6d:{NFSU2_TR(0x644a6d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644a6f:{NFSU2_TR(0x644a6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644b0b;}}
}
B644a75:L644a75:{c.instructions+=2;NFSU2_TR(0x644a75);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B644a77:{NFSU2_TR(0x644a77);
if(r1(R+518)){{goto L644a7e;}}
}
B644a79:L644a79:{c.instructions+=2;NFSU2_TR(0x644a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B644a7c:{NFSU2_TR(0x644a7c);
{goto L644a81;}
}
B644a7e:L644a7e:{c.instructions+=2;NFSU2_TR(0x644a7e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B644a80:{NFSU2_TR(0x644a80);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B644a81:L644a81:{c.instructions+=3;NFSU2_TR(0x644a81);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B644a84:{NFSU2_TR(0x644a84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644a85:{NFSU2_TR(0x644a85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644a8aull));
TAIL_STATIC(0x575620u,575);
}
B644a8a:L644a8a:{c.instructions+=5;NFSU2_TR(0x644a8a);
__builtin_memmove((R+28),(R+0),4);
}
B644a8c:{NFSU2_TR(0x644a8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B644a8e:{NFSU2_TR(0x644a8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644a8f:{NFSU2_TR(0x644a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644a92:{NFSU2_TR(0x644a92);
if(r1(R+518)){{goto L644c7c;}}
}
B644a98:L644a98:{c.instructions+=6;NFSU2_TR(0x644a98);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644a9b:{NFSU2_TR(0x644a9b);
__builtin_memmove((R+4),(R+24),4);
}
B644a9d:{NFSU2_TR(0x644a9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B644aa0:{NFSU2_TR(0x644aa0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B644aa3:{NFSU2_TR(0x644aa3);
__builtin_memmove((R+0),(R+4),4);
}
B644aa5:{NFSU2_TR(0x644aa5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B644aa8:L644aa8:{c.instructions+=1;NFSU2_TR(0x644aa8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L644aaa;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644aa8u);}goto L644aa8;}
}
B644aaa:L644aaa:{c.instructions+=2;NFSU2_TR(0x644aaa);
__builtin_memmove((R+4),(R+0),4);
}
B644aac:{NFSU2_TR(0x644aac);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B644aaf:L644aaf:{c.instructions+=1;NFSU2_TR(0x644aaf);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L644ab1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644aafu);}goto L644aaf;}
}
B644ab1:L644ab1:{c.instructions+=1;NFSU2_TR(0x644ab1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644ab6ull));
TAIL_STATIC(0x575630u,575);
}
B644ab6:L644ab6:{c.instructions+=6;NFSU2_TR(0x644ab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B644ab9:{NFSU2_TR(0x644ab9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B644abb:{NFSU2_TR(0x644abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644abe:{NFSU2_TR(0x644abe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644abf:{NFSU2_TR(0x644abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644ac2:{NFSU2_TR(0x644ac2);
if(r1(R+518)){{goto L644ac9;}}
}
B644ac4:L644ac4:{c.instructions+=2;NFSU2_TR(0x644ac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B644ac7:{NFSU2_TR(0x644ac7);
{goto L644acc;}
}
B644ac9:L644ac9:{c.instructions+=2;NFSU2_TR(0x644ac9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B644acb:{NFSU2_TR(0x644acb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B644acc:L644acc:{c.instructions+=3;NFSU2_TR(0x644acc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B644acf:{NFSU2_TR(0x644acf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644ad0:{NFSU2_TR(0x644ad0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644ad5ull));
TAIL_STATIC(0x575620u,575);
}
B644ad5:L644ad5:{c.instructions+=5;NFSU2_TR(0x644ad5);
__builtin_memmove((R+28),(R+0),4);
}
B644ad7:{NFSU2_TR(0x644ad7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B644ad9:{NFSU2_TR(0x644ad9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644ada:{NFSU2_TR(0x644ada);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644add:{NFSU2_TR(0x644add);
if(r1(R+518)){{goto L644c7c;}}
}
B644ae3:L644ae3:{c.instructions+=6;NFSU2_TR(0x644ae3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644ae6:{NFSU2_TR(0x644ae6);
__builtin_memmove((R+4),(R+24),4);
}
B644ae8:{NFSU2_TR(0x644ae8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B644aeb:{NFSU2_TR(0x644aeb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B644aee:{NFSU2_TR(0x644aee);
__builtin_memmove((R+0),(R+4),4);
}
B644af0:{NFSU2_TR(0x644af0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B644af3:L644af3:{c.instructions+=1;NFSU2_TR(0x644af3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L644af5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644af3u);}goto L644af3;}
}
B644af5:L644af5:{c.instructions+=2;NFSU2_TR(0x644af5);
__builtin_memmove((R+4),(R+0),4);
}
B644af7:{NFSU2_TR(0x644af7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B644afa:L644afa:{c.instructions+=1;NFSU2_TR(0x644afa);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L644afc;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644afau);}goto L644afa;}
}
B644afc:L644afc:{c.instructions+=1;NFSU2_TR(0x644afc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644b01ull));
TAIL_STATIC(0x575630u,575);
}
B644b01:L644b01:{c.instructions+=4;NFSU2_TR(0x644b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644b04:{NFSU2_TR(0x644b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B644b07:{NFSU2_TR(0x644b07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644b08:{NFSU2_TR(0x644b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644b0b:L644b0b:{c.instructions+=13;NFSU2_TR(0x644b0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644b0e:{NFSU2_TR(0x644b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644b11:{NFSU2_TR(0x644b11);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B644b14:{NFSU2_TR(0x644b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644b17:{NFSU2_TR(0x644b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644b1a:{NFSU2_TR(0x644b1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B644b1d:{NFSU2_TR(0x644b1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644b23:{NFSU2_TR(0x644b23);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+28),(U+0),4);
}
B644b29:{NFSU2_TR(0x644b29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644b2a:{NFSU2_TR(0x644b2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644b30:{NFSU2_TR(0x644b30);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B644b31:{NFSU2_TR(0x644b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644b34:{NFSU2_TR(0x644b34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644b39ull));
TAIL_STATIC(0x643afeu,643);
}
B644b39:L644b39:{c.instructions+=3;NFSU2_TR(0x644b39);
__builtin_memmove((R+24),(R+0),4);
}
B644b3b:{NFSU2_TR(0x644b3b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B644b3d:{NFSU2_TR(0x644b3d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L644bea;}}
}
B644b43:L644b43:{c.instructions+=2;NFSU2_TR(0x644b43);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B644b46:{NFSU2_TR(0x644b46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644a41u);}goto L644a41;}}
}
B644b4c:L644b4c:{c.instructions+=6;NFSU2_TR(0x644b4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((R+0),(U+0),4);
}
B644b52:{NFSU2_TR(0x644b52);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644b54:{NFSU2_TR(0x644b54);
w4(R+28,u32(0x7ab870ull));
}
B644b59:{NFSU2_TR(0x644b59);
__builtin_memmove((R+24),(R+0),4);
}
B644b5b:{NFSU2_TR(0x644b5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644b5c:{NFSU2_TR(0x644b5c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B644b5e:L644b5e:{c.instructions+=1;NFSU2_TR(0x644b5e);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L644b60;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644b5eu);}goto L644b5e;}}
}
B644b60:L644b60:{c.instructions+=1;NFSU2_TR(0x644b60);
if(r1(R+518)){{goto L644b76;}}
}
B644b62:L644b62:{c.instructions+=5;NFSU2_TR(0x644b62);
__builtin_memmove((R+24),(R+0),4);
}
B644b64:{NFSU2_TR(0x644b64);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644b66:{NFSU2_TR(0x644b66);
w4(R+28,u32(0x786050ull));
}
B644b6b:{NFSU2_TR(0x644b6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644b6c:{NFSU2_TR(0x644b6c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B644b6e:L644b6e:{c.instructions+=1;NFSU2_TR(0x644b6e);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L644b70;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644b6eu);}goto L644b6e;}}
}
B644b70:L644b70:{c.instructions+=1;NFSU2_TR(0x644b70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644a41u);}goto L644a41;}}
}
B644b76:L644b76:{c.instructions+=5;NFSU2_TR(0x644b76);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644b78:{NFSU2_TR(0x644b78);
w4(R+28,u32(0x7ab870ull));
}
B644b7d:{NFSU2_TR(0x644b7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644b83:{NFSU2_TR(0x644b83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644b84:{NFSU2_TR(0x644b84);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B644b86:L644b86:{c.instructions+=1;NFSU2_TR(0x644b86);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L644b88;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644b86u);}goto L644b86;}}
}
B644b88:L644b88:{c.instructions+=1;NFSU2_TR(0x644b88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64491cu);}goto L64491c;}}
}
B644b8e:L644b8e:{c.instructions+=5;NFSU2_TR(0x644b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644b94:{NFSU2_TR(0x644b94);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+28),(U+0),4);
}
B644b9a:{NFSU2_TR(0x644b9a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644b9b:{NFSU2_TR(0x644b9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644ba1:{NFSU2_TR(0x644ba1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644ba6ull));
TAIL_STATIC(0x643afeu,643);
}
B644ba6:L644ba6:{c.instructions+=3;NFSU2_TR(0x644ba6);
__builtin_memmove((R+24),(R+0),4);
}
B644ba8:{NFSU2_TR(0x644ba8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B644baa:{NFSU2_TR(0x644baa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L644bea;}}
}
B644bac:L644bac:{c.instructions+=2;NFSU2_TR(0x644bac);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B644baf:{NFSU2_TR(0x644baf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64491cu);}goto L64491c;}}
}
B644bb5:L644bb5:{c.instructions+=5;NFSU2_TR(0x644bb5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644bb7:{NFSU2_TR(0x644bb7);
w4(R+28,u32(0x786050ull));
}
B644bbc:{NFSU2_TR(0x644bbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644bc2:{NFSU2_TR(0x644bc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644bc3:{NFSU2_TR(0x644bc3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B644bc5:L644bc5:{c.instructions+=1;NFSU2_TR(0x644bc5);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L644bc7;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644bc5u);}goto L644bc5;}}
}
B644bc7:L644bc7:{c.instructions+=1;NFSU2_TR(0x644bc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64491cu);}goto L64491c;}}
}
B644bcd:L644bcd:{c.instructions+=3;NFSU2_TR(0x644bcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644bd3:{NFSU2_TR(0x644bd3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644bd6:{NFSU2_TR(0x644bd6);
if(r1(R+518)){{goto L644be8;}}
}
B644bd8:L644bd8:{c.instructions+=2;NFSU2_TR(0x644bd8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644bdb:{NFSU2_TR(0x644bdb);
if(r1(R+518)){{goto L644be8;}}
}
B644bdd:L644bdd:{c.instructions+=2;NFSU2_TR(0x644bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644be3:{NFSU2_TR(0x644be3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644be8ull));
TAIL_STATIC(0x642bc7u,642);
}
B644be8:L644be8:{c.instructions+=1;NFSU2_TR(0x644be8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B644bea:L644bea:{c.instructions+=2;NFSU2_TR(0x644bea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644bed:{NFSU2_TR(0x644bed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644bf2ull));
TAIL_STATIC(0x575630u,575);
}
B644bf2:L644bf2:{c.instructions+=2;NFSU2_TR(0x644bf2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644bf5:{NFSU2_TR(0x644bf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644bfaull));
TAIL_STATIC(0x575630u,575);
}
B644bfa:L644bfa:{c.instructions+=2;NFSU2_TR(0x644bfa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644bfc:{NFSU2_TR(0x644bfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644c01ull));
TAIL_STATIC(0x575630u,575);
}
B644c01:L644c01:{c.instructions+=8;NFSU2_TR(0x644c01);
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
B644c04:{NFSU2_TR(0x644c04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B644c05:{NFSU2_TR(0x644c05);
__builtin_memmove((R+0),(R+24),4);
}
B644c07:{NFSU2_TR(0x644c07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644c08:{NFSU2_TR(0x644c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B644c0f:{NFSU2_TR(0x644c0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B644c10:{NFSU2_TR(0x644c10);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B644c11:{NFSU2_TR(0x644c11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B644c12:L644c12:{c.instructions+=5;NFSU2_TR(0x644c12);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644c18:{NFSU2_TR(0x644c18);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+28),(U+0),4);
}
B644c1e:{NFSU2_TR(0x644c1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644c1f:{NFSU2_TR(0x644c1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644c25:{NFSU2_TR(0x644c25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644c2aull));
TAIL_STATIC(0x643afeu,643);
}
B644c2a:L644c2a:{c.instructions+=3;NFSU2_TR(0x644c2a);
__builtin_memmove((R+24),(R+0),4);
}
B644c2c:{NFSU2_TR(0x644c2c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B644c2e:{NFSU2_TR(0x644c2e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644beau);}goto L644bea;}}
}
B644c30:L644c30:{c.instructions+=3;NFSU2_TR(0x644c30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B644c32:{NFSU2_TR(0x644c32);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644c35:{NFSU2_TR(0x644c35);
if(r1(R+518)){{goto L644c3c;}}
}
B644c37:L644c37:{c.instructions+=2;NFSU2_TR(0x644c37);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644c3a:{NFSU2_TR(0x644c3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644bcdu);}goto L644bcd;}}
}
B644c3c:L644c3c:{c.instructions+=3;NFSU2_TR(0x644c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B644c40:{NFSU2_TR(0x644c40);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B644c44:{NFSU2_TR(0x644c44);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644be8u);}goto L644be8;}}
}
B644c46:L644c46:{c.instructions+=5;NFSU2_TR(0x644c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B644c49:{NFSU2_TR(0x644c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644c4c:{NFSU2_TR(0x644c4c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B644c4e:{NFSU2_TR(0x644c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644c51:{NFSU2_TR(0x644c51);
{goto L644c56;}
}
B644c53:L644c53:{c.instructions+=1;NFSU2_TR(0x644c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644c56:L644c56:{c.instructions+=4;NFSU2_TR(0x644c56);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B644c59:{NFSU2_TR(0x644c59);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644c5c:{NFSU2_TR(0x644c5c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B644c5e:{NFSU2_TR(0x644c5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644c63ull));
TAIL_STATIC(0x643012u,643);
}
B644c63:L644c63:{c.instructions+=3;NFSU2_TR(0x644c63);
__builtin_memmove((R+24),(R+0),4);
}
B644c65:{NFSU2_TR(0x644c65);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B644c67:{NFSU2_TR(0x644c67);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644beau);}goto L644bea;}}
}
B644c69:L644c69:{c.instructions+=5;NFSU2_TR(0x644c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B644c6c:{NFSU2_TR(0x644c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644c6f:{NFSU2_TR(0x644c6f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B644c72:{NFSU2_TR(0x644c72);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B644c75:{NFSU2_TR(0x644c75);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644c53u);}goto L644c53;}}
}
B644c77:L644c77:{c.instructions+=1;NFSU2_TR(0x644c77);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644be8u);}goto L644be8;}
}
B644c7c:L644c7c:{c.instructions+=2;NFSU2_TR(0x644c7c);
w4(R+24,u32(0x8007000eull));
}
B644c81:{NFSU2_TR(0x644c81);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644beau);}goto L644bea;}
}
B644c86:L644c86:{c.instructions+=12;NFSU2_TR(0x644c86);
__builtin_memmove((R+28),(R+28),4);
}
B644c88:{NFSU2_TR(0x644c88);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644c89:{NFSU2_TR(0x644c89);
__builtin_memmove((R+20),(R+16),4);
}
B644c8b:{NFSU2_TR(0x644c8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B644c8e:{NFSU2_TR(0x644c8e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644c8f:{NFSU2_TR(0x644c8f);
__builtin_memmove((R+12),(R+4),4);
}
B644c91:{NFSU2_TR(0x644c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644c97:{NFSU2_TR(0x644c97);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644c98:{NFSU2_TR(0x644c98);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644c9e:{NFSU2_TR(0x644c9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644c9f:{NFSU2_TR(0x644c9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644ca5:{NFSU2_TR(0x644ca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644caaull));
TAIL_STATIC(0x643afeu,643);
}
B644caa:L644caa:{c.instructions+=2;NFSU2_TR(0x644caa);
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
B644cac:{NFSU2_TR(0x644cac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L644f94;}}
}
B644cb2:L644cb2:{c.instructions+=3;NFSU2_TR(0x644cb2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B644cb5:{NFSU2_TR(0x644cb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644cb6:{NFSU2_TR(0x644cb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644f76;}}
}
B644cbc:L644cbc:{c.instructions+=5;NFSU2_TR(0x644cbc);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644cbe:{NFSU2_TR(0x644cbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644cc4:{NFSU2_TR(0x644cc4);
w4(R+28,u32(0x7ab86cull));
}
B644cc9:{NFSU2_TR(0x644cc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644cca:{NFSU2_TR(0x644cca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B644ccc:L644ccc:{c.instructions+=1;NFSU2_TR(0x644ccc);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L644cce;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644cccu);}goto L644ccc;}}
}
B644cce:L644cce:{c.instructions+=1;NFSU2_TR(0x644cce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644f76;}}
}
B644cd4:L644cd4:{c.instructions+=5;NFSU2_TR(0x644cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644cda:{NFSU2_TR(0x644cda);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644ce0:{NFSU2_TR(0x644ce0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644ce1:{NFSU2_TR(0x644ce1);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644ce7:{NFSU2_TR(0x644ce7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644cecull));
TAIL_STATIC(0x643afeu,643);
}
B644cec:L644cec:{c.instructions+=2;NFSU2_TR(0x644cec);
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
B644cee:{NFSU2_TR(0x644cee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L644f93;}}
}
B644cf4:L644cf4:{c.instructions+=2;NFSU2_TR(0x644cf4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B644cf7:{NFSU2_TR(0x644cf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644f76;}}
}
B644cfd:L644cfd:{c.instructions+=8;NFSU2_TR(0x644cfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644d03:{NFSU2_TR(0x644d03);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+28),(U+0),4);
}
B644d09:{NFSU2_TR(0x644d09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644d0a:{NFSU2_TR(0x644d0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644d10:{NFSU2_TR(0x644d10);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644d16:{NFSU2_TR(0x644d16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B644d18:{NFSU2_TR(0x644d18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644d1b:{NFSU2_TR(0x644d1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644d20ull));
TAIL_STATIC(0x643afeu,643);
}
B644d20:L644d20:{c.instructions+=2;NFSU2_TR(0x644d20);
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
B644d22:{NFSU2_TR(0x644d22);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L644f93;}}
}
B644d28:L644d28:{c.instructions+=2;NFSU2_TR(0x644d28);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B644d2b:{NFSU2_TR(0x644d2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644f76;}}
}
B644d31:L644d31:{c.instructions+=4;NFSU2_TR(0x644d31);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644d33:{NFSU2_TR(0x644d33);
w4(R+28,u32(0x7a1598ull));
}
B644d38:{NFSU2_TR(0x644d38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644d39:{NFSU2_TR(0x644d39);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B644d3b:L644d3b:{c.instructions+=1;NFSU2_TR(0x644d3b);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L644d3d;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644d3bu);}goto L644d3b;}}
}
B644d3d:L644d3d:{c.instructions+=1;NFSU2_TR(0x644d3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644f76;}}
}
B644d43:L644d43:{c.instructions+=5;NFSU2_TR(0x644d43);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644d49:{NFSU2_TR(0x644d49);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644d4f:{NFSU2_TR(0x644d4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644d50:{NFSU2_TR(0x644d50);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644d56:{NFSU2_TR(0x644d56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644d5bull));
TAIL_STATIC(0x643afeu,643);
}
B644d5b:L644d5b:{c.instructions+=2;NFSU2_TR(0x644d5b);
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
B644d5d:{NFSU2_TR(0x644d5d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L644f93;}}
}
B644d63:L644d63:{c.instructions+=2;NFSU2_TR(0x644d63);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B644d66:{NFSU2_TR(0x644d66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644f76;}}
}
B644d6c:L644d6c:{c.instructions+=3;NFSU2_TR(0x644d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644d72:{NFSU2_TR(0x644d72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B644d76:{NFSU2_TR(0x644d76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644d79:L644d79:{c.instructions+=6;NFSU2_TR(0x644d79);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644d7f:{NFSU2_TR(0x644d7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B644d83:{NFSU2_TR(0x644d83);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644d89:{NFSU2_TR(0x644d89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644d8a:{NFSU2_TR(0x644d8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644d90:{NFSU2_TR(0x644d90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644d95ull));
TAIL_STATIC(0x643afeu,643);
}
B644d95:L644d95:{c.instructions+=2;NFSU2_TR(0x644d95);
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
B644d97:{NFSU2_TR(0x644d97);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L644f93;}}
}
B644d9d:L644d9d:{c.instructions+=2;NFSU2_TR(0x644d9d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B644da0:{NFSU2_TR(0x644da0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644f76;}}
}
B644da6:L644da6:{c.instructions+=5;NFSU2_TR(0x644da6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644da8:{NFSU2_TR(0x644da8);
w4(R+28,u32(0x7a1598ull));
}
B644dad:{NFSU2_TR(0x644dad);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644db3:{NFSU2_TR(0x644db3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644db4:{NFSU2_TR(0x644db4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B644db6:L644db6:{c.instructions+=1;NFSU2_TR(0x644db6);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L644db8;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644db6u);}goto L644db6;}}
}
B644db8:L644db8:{c.instructions+=1;NFSU2_TR(0x644db8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644f76;}}
}
B644dbe:L644dbe:{c.instructions+=5;NFSU2_TR(0x644dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644dc4:{NFSU2_TR(0x644dc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644dca:{NFSU2_TR(0x644dca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644dcb:{NFSU2_TR(0x644dcb);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644dd1:{NFSU2_TR(0x644dd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644dd6ull));
TAIL_STATIC(0x643afeu,643);
}
B644dd6:L644dd6:{c.instructions+=2;NFSU2_TR(0x644dd6);
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
B644dd8:{NFSU2_TR(0x644dd8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L644f93;}}
}
B644dde:L644dde:{c.instructions+=4;NFSU2_TR(0x644dde);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B644de0:{NFSU2_TR(0x644de0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B644de1:{NFSU2_TR(0x644de1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B644de3:{NFSU2_TR(0x644de3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644e1c;}}
}
B644de5:L644de5:{c.instructions+=5;NFSU2_TR(0x644de5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644de7:{NFSU2_TR(0x644de7);
w4(R+28,u32(0x7ab898ull));
}
B644dec:{NFSU2_TR(0x644dec);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644df2:{NFSU2_TR(0x644df2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644df3:{NFSU2_TR(0x644df3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B644df5:L644df5:{c.instructions+=1;NFSU2_TR(0x644df5);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L644df7;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644df5u);}goto L644df5;}}
}
B644df7:L644df7:{c.instructions+=1;NFSU2_TR(0x644df7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644e1c;}}
}
B644df9:L644df9:{c.instructions+=6;NFSU2_TR(0x644df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644dff:{NFSU2_TR(0x644dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644e02:{NFSU2_TR(0x644e02);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B644e08:{NFSU2_TR(0x644e08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644e09:{NFSU2_TR(0x644e09);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644e0f:{NFSU2_TR(0x644e0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644e14ull));
TAIL_STATIC(0x643afeu,643);
}
B644e14:L644e14:{c.instructions+=2;NFSU2_TR(0x644e14);
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
B644e16:{NFSU2_TR(0x644e16);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L644f93;}}
}
B644e1c:L644e1c:{c.instructions+=3;NFSU2_TR(0x644e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644e22:{NFSU2_TR(0x644e22);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644e25:{NFSU2_TR(0x644e25);
if(r1(R+518)){{goto L644e5e;}}
}
B644e27:L644e27:{c.instructions+=2;NFSU2_TR(0x644e27);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644e2a:{NFSU2_TR(0x644e2a);
if(r1(R+518)){{goto L644e4f;}}
}
B644e2c:L644e2c:{c.instructions+=2;NFSU2_TR(0x644e2c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644e2f:{NFSU2_TR(0x644e2f);
if(r1(R+518)){{goto L644e5e;}}
}
B644e31:L644e31:{c.instructions+=1;NFSU2_TR(0x644e31);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L644f76;}}
}
B644e37:L644e37:{c.instructions+=2;NFSU2_TR(0x644e37);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644e3a:{NFSU2_TR(0x644e3a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L644f76;}}
}
B644e40:L644e40:{c.instructions+=4;NFSU2_TR(0x644e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644e43:{NFSU2_TR(0x644e43);
{u32 ea_=u32(r4(R+12)+u32(640u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B644e49:{NFSU2_TR(0x644e49);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B644e4d:{NFSU2_TR(0x644e4d);
{goto L644e7b;}
}
B644e4f:L644e4f:{c.instructions+=4;NFSU2_TR(0x644e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644e52:{NFSU2_TR(0x644e52);
{u32 ea_=u32(r4(R+12)+u32(640u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B644e58:{NFSU2_TR(0x644e58);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B644e5c:{NFSU2_TR(0x644e5c);
{goto L644e7b;}
}
B644e5e:L644e5e:{c.instructions+=6;NFSU2_TR(0x644e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644e64:{NFSU2_TR(0x644e64);
{u32 ea_=u32(r4(R+12)+u32(640u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B644e6a:{NFSU2_TR(0x644e6a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B644e6c:{NFSU2_TR(0x644e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644e6f:{NFSU2_TR(0x644e6f);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B644e73:{NFSU2_TR(0x644e73);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L644e7b;}}
}
B644e75:L644e75:{c.instructions+=1;NFSU2_TR(0x644e75);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B644e7b:L644e7b:{c.instructions+=3;NFSU2_TR(0x644e7b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B644e7f:{NFSU2_TR(0x644e7f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B644e81:{NFSU2_TR(0x644e81);
if(r1(R+518)){{goto L644e89;}}
}
B644e83:L644e83:{c.instructions+=3;NFSU2_TR(0x644e83);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B644e85:{NFSU2_TR(0x644e85);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B644e87:{NFSU2_TR(0x644e87);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B644e89:L644e89:{c.instructions+=3;NFSU2_TR(0x644e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B644e8c:{NFSU2_TR(0x644e8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B644e90:{NFSU2_TR(0x644e90);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644d79u);}goto L644d79;}}
}
B644e96:L644e96:{c.instructions+=5;NFSU2_TR(0x644e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644e9c:{NFSU2_TR(0x644e9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644ea2:{NFSU2_TR(0x644ea2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644ea3:{NFSU2_TR(0x644ea3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644ea9:{NFSU2_TR(0x644ea9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644eaeull));
TAIL_STATIC(0x643afeu,643);
}
B644eae:L644eae:{c.instructions+=2;NFSU2_TR(0x644eae);
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
B644eb0:{NFSU2_TR(0x644eb0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L644f93;}}
}
B644eb6:L644eb6:{c.instructions+=2;NFSU2_TR(0x644eb6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B644eb9:{NFSU2_TR(0x644eb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644f76;}}
}
B644ebf:L644ebf:{c.instructions+=5;NFSU2_TR(0x644ebf);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644ec1:{NFSU2_TR(0x644ec1);
w4(R+28,u32(0x786050ull));
}
B644ec6:{NFSU2_TR(0x644ec6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644ecc:{NFSU2_TR(0x644ecc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644ecd:{NFSU2_TR(0x644ecd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B644ecf:L644ecf:{c.instructions+=1;NFSU2_TR(0x644ecf);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L644ed1;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644ecfu);}goto L644ecf;}}
}
B644ed1:L644ed1:{c.instructions+=1;NFSU2_TR(0x644ed1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644f76;}}
}
B644ed7:L644ed7:{c.instructions+=5;NFSU2_TR(0x644ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644edd:{NFSU2_TR(0x644edd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644ee3:{NFSU2_TR(0x644ee3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644ee4:{NFSU2_TR(0x644ee4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644eea:{NFSU2_TR(0x644eea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644eefull));
TAIL_STATIC(0x643afeu,643);
}
B644eef:L644eef:{c.instructions+=2;NFSU2_TR(0x644eef);
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
B644ef1:{NFSU2_TR(0x644ef1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L644f93;}}
}
B644ef7:L644ef7:{c.instructions+=3;NFSU2_TR(0x644ef7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B644ef9:{NFSU2_TR(0x644ef9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644efc:{NFSU2_TR(0x644efc);
if(r1(R+518)){{goto L644f03;}}
}
B644efe:L644efe:{c.instructions+=2;NFSU2_TR(0x644efe);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644f01:{NFSU2_TR(0x644f01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644f76;}}
}
B644f03:L644f03:{c.instructions+=2;NFSU2_TR(0x644f03);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644f05:{NFSU2_TR(0x644f05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644f0aull));
TAIL_STATIC(0x575620u,575);
}
B644f0a:L644f0a:{c.instructions+=3;NFSU2_TR(0x644f0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B644f0c:{NFSU2_TR(0x644f0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644f0d:{NFSU2_TR(0x644f0d);
if(r1(R+518)){{goto L644f18;}}
}
B644f0f:L644f0f:{c.instructions+=3;NFSU2_TR(0x644f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B644f13:{NFSU2_TR(0x644f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644f16:{NFSU2_TR(0x644f16);
{goto L644f1f;}
}
B644f18:L644f18:{c.instructions+=2;NFSU2_TR(0x644f18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B644f1c:{NFSU2_TR(0x644f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644f1f:L644f1f:{c.instructions+=2;NFSU2_TR(0x644f1f);
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
B644f21:{NFSU2_TR(0x644f21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L644f2a;}}
}
B644f23:L644f23:{c.instructions+=2;NFSU2_TR(0x644f23);
w4(R+0,u32(0x8007000eull));
}
B644f28:{NFSU2_TR(0x644f28);
{goto L644f93;}
}
B644f2a:L644f2a:{c.instructions+=8;NFSU2_TR(0x644f2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644f2d:{NFSU2_TR(0x644f2d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B644f2f:{NFSU2_TR(0x644f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644f32:{NFSU2_TR(0x644f32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644f35:{NFSU2_TR(0x644f35);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644f37:{NFSU2_TR(0x644f37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B644f3a:{NFSU2_TR(0x644f3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644f3b:{NFSU2_TR(0x644f3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+24),(U+0),4);
}
B644f3e:L644f3e:{c.instructions+=1;NFSU2_TR(0x644f3e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L644f40;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644f3eu);}goto L644f3e;}
}
B644f40:L644f40:{c.instructions+=4;NFSU2_TR(0x644f40);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((R+24),(U+0),4);
}
B644f43:{NFSU2_TR(0x644f43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B644f45:{NFSU2_TR(0x644f45);
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
B644f47:{NFSU2_TR(0x644f47);
if(r1(R+518)){{goto L644f6d;}}
}
B644f49:L644f49:{c.instructions+=1;NFSU2_TR(0x644f49);
{goto L644f4e;}
}
B644f4b:L644f4b:{c.instructions+=1;NFSU2_TR(0x644f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644f4e:L644f4e:{c.instructions+=3;NFSU2_TR(0x644f4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644f51:{NFSU2_TR(0x644f51);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B644f54:{NFSU2_TR(0x644f54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644f59ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B644f59:L644f59:{c.instructions+=4;NFSU2_TR(0x644f59);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B644f5b:{NFSU2_TR(0x644f5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644f5c:{NFSU2_TR(0x644f5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644f5d:{NFSU2_TR(0x644f5d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L644f6a;}}
}
B644f5f:L644f5f:{c.instructions+=5;NFSU2_TR(0x644f5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B644f61:{NFSU2_TR(0x644f61);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x28ull))));
}
B644f64:{NFSU2_TR(0x644f64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B644f66:{NFSU2_TR(0x644f66);
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
B644f68:{NFSU2_TR(0x644f68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644f4bu);}goto L644f4b;}}
}
B644f6a:L644f6a:{c.instructions+=1;NFSU2_TR(0x644f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644f6d:L644f6d:{c.instructions+=4;NFSU2_TR(0x644f6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B644f6f:{NFSU2_TR(0x644f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B644f72:{NFSU2_TR(0x644f72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B644f74:{NFSU2_TR(0x644f74);
{goto L644f91;}
}
B644f76:L644f76:{c.instructions+=3;NFSU2_TR(0x644f76);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B644f7c:{NFSU2_TR(0x644f7c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644f7f:{NFSU2_TR(0x644f7f);
if(r1(R+518)){{goto L644f91;}}
}
B644f81:L644f81:{c.instructions+=2;NFSU2_TR(0x644f81);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B644f84:{NFSU2_TR(0x644f84);
if(r1(R+518)){{goto L644f91;}}
}
B644f86:L644f86:{c.instructions+=2;NFSU2_TR(0x644f86);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B644f8c:{NFSU2_TR(0x644f8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x644f91ull));
TAIL_STATIC(0x642bc7u,642);
}
B644f91:L644f91:{c.instructions+=1;NFSU2_TR(0x644f91);
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
B644f93:L644f93:{c.instructions+=1;NFSU2_TR(0x644f93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B644f94:L644f94:{c.instructions+=5;NFSU2_TR(0x644f94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B644f95:{NFSU2_TR(0x644f95);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B644f9c:{NFSU2_TR(0x644f9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B644f9d:{NFSU2_TR(0x644f9d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B644f9e:{NFSU2_TR(0x644f9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B644f9f:L644f9f:{c.instructions+=7;NFSU2_TR(0x644f9f);
__builtin_memmove((R+28),(R+28),4);
}
B644fa1:{NFSU2_TR(0x644fa1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644fa2:{NFSU2_TR(0x644fa2);
__builtin_memmove((R+20),(R+16),4);
}
B644fa4:{NFSU2_TR(0x644fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B644fa7:{NFSU2_TR(0x644fa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B644fa9:{NFSU2_TR(0x644fa9);
w4(R+0,u32(0x632d80full));
}
B644fae:{NFSU2_TR(0x644fae);
if(r1(R+518)){{goto L644fd0;}}
}
B644fb0:L644fb0:{c.instructions+=3;NFSU2_TR(0x644fb0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B644fb2:{NFSU2_TR(0x644fb2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B644fb4:{NFSU2_TR(0x644fb4);
if(r1(R+518)){{goto L644fd0;}}
}
B644fb6:L644fb6:{c.instructions+=7;NFSU2_TR(0x644fb6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x13ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B644fb9:{NFSU2_TR(0x644fb9);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B644fbc:{NFSU2_TR(0x644fbc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B644fbe:{NFSU2_TR(0x644fbe);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B644fbf:{NFSU2_TR(0x644fbf);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B644fc1:{NFSU2_TR(0x644fc1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B644fc3:{NFSU2_TR(0x644fc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x644fb6u);}goto L644fb6;}}
}
B644fc5:L644fc5:{c.instructions+=6;NFSU2_TR(0x644fc5);
u8 U[4];
w4(U+0,u32(0x7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644fc7:{NFSU2_TR(0x644fc7);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B644fc9:{NFSU2_TR(0x644fc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B644fca:{NFSU2_TR(0x644fca);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x644fca);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x644fca);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B644fcc:{NFSU2_TR(0x644fcc);
__builtin_memmove((R+0),(R+8),4);
}
B644fce:{NFSU2_TR(0x644fce);
{goto L644fd2;}
}
B644fd0:L644fd0:{c.instructions+=1;NFSU2_TR(0x644fd0);
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
B644fd2:L644fd2:{c.instructions+=2;NFSU2_TR(0x644fd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B644fd3:{NFSU2_TR(0x644fd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B644fd6:L644fd6:{c.instructions+=15;NFSU2_TR(0x644fd6);
__builtin_memmove((R+28),(R+28),4);
}
B644fd8:{NFSU2_TR(0x644fd8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644fd9:{NFSU2_TR(0x644fd9);
__builtin_memmove((R+20),(R+16),4);
}
B644fdb:{NFSU2_TR(0x644fdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B644fde:{NFSU2_TR(0x644fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B644fe1:{NFSU2_TR(0x644fe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B644fe3:{NFSU2_TR(0x644fe3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644fe4:{NFSU2_TR(0x644fe4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644fe5:{NFSU2_TR(0x644fe5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B644fe6:{NFSU2_TR(0x644fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B644fe9:{NFSU2_TR(0x644fe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B644feb:{NFSU2_TR(0x644feb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B644fed:{NFSU2_TR(0x644fed);
__builtin_memmove((R+4),(R+12),1);
}
B644fef:{NFSU2_TR(0x644fef);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B644ff1:{NFSU2_TR(0x644ff1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x64500du,645);}
}
B644ff3:L644ff3:{c.instructions+=2;NFSU2_TR(0x644ff3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B644ff5:{NFSU2_TR(0x644ff5);
if(r1(R+518)){TAIL_STATIC(0x645009u,645);}
}
B644ff7:L644ff7:{c.instructions+=4;NFSU2_TR(0x644ff7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B644ffa:{NFSU2_TR(0x644ffa);
__builtin_memmove((R+4),(R+12),1);
}
B644ffc:{NFSU2_TR(0x644ffc);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B644fff:{NFSU2_TR(0x644fff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x64500du,645);}
TAIL_STATIC(0x645001u,645);
}
XIT:NFSU2_TR_EXIT(0x644,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
