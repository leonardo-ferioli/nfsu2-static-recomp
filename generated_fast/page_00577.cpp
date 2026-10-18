#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57f(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x577,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x577,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_577(u8* __restrict R,Cpu& c);
u32 page_577(Cpu& c){return body_577(c.regs.data(),c);}
__attribute__((noinline)) u32 body_577(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x577000:goto L577000;
case 0x577005:c.instructions+=1;goto B577005;
case 0x577007:goto L577007;
case 0x57700c:c.instructions+=2;goto B57700c;
case 0x577011:c.instructions+=1;goto B577011;
case 0x577013:goto L577013;
case 0x577018:goto L577018;
case 0x577019:c.instructions+=2;goto B577019;
case 0x57701a:c.instructions+=1;goto B57701a;
case 0x57701f:goto L57701f;
case 0x577022:c.instructions+=4;goto B577022;
case 0x577024:c.instructions+=3;goto B577024;
case 0x577027:c.instructions+=2;goto B577027;
case 0x57702c:c.instructions+=1;goto B57702c;
case 0x577030:goto L577030;
case 0x577032:c.instructions+=5;goto B577032;
case 0x577033:c.instructions+=4;goto B577033;
case 0x577038:c.instructions+=3;goto B577038;
case 0x57703a:c.instructions+=2;goto B57703a;
case 0x57703c:c.instructions+=1;goto B57703c;
case 0x57703e:goto L57703e;
case 0x577040:c.instructions+=1;goto B577040;
case 0x577042:goto L577042;
case 0x577045:c.instructions+=1;goto B577045;
case 0x577047:goto L577047;
case 0x57704a:c.instructions+=1;goto B57704a;
case 0x57704c:goto L57704c;
case 0x57704d:c.instructions+=3;goto B57704d;
case 0x57704e:c.instructions+=2;goto B57704e;
case 0x577050:c.instructions+=1;goto B577050;
case 0x577052:goto L577052;
case 0x577056:c.instructions+=3;goto B577056;
case 0x577059:c.instructions+=2;goto B577059;
case 0x57705e:c.instructions+=1;goto B57705e;
case 0x577060:goto L577060;
case 0x577061:c.instructions+=7;goto B577061;
case 0x577066:c.instructions+=6;goto B577066;
case 0x577068:c.instructions+=5;goto B577068;
case 0x57706b:c.instructions+=4;goto B57706b;
case 0x57706d:c.instructions+=3;goto B57706d;
case 0x57706e:c.instructions+=2;goto B57706e;
case 0x57706f:c.instructions+=1;goto B57706f;
case 0x577071:goto L577071;
case 0x577075:c.instructions+=3;goto B577075;
case 0x577077:c.instructions+=2;goto B577077;
case 0x57707a:c.instructions+=1;goto B57707a;
case 0x57707c:goto L57707c;
case 0x57707e:c.instructions+=1;goto B57707e;
case 0x577084:goto L577084;
case 0x577089:c.instructions+=1;goto B577089;
case 0x57708f:goto L57708f;
case 0x577090:c.instructions+=1;goto B577090;
case 0x577095:goto L577095;
case 0x577097:c.instructions+=4;goto B577097;
case 0x57709b:c.instructions+=3;goto B57709b;
case 0x57709c:c.instructions+=2;goto B57709c;
case 0x57709d:c.instructions+=1;goto B57709d;
case 0x5770a2:goto L5770a2;
case 0x5770a6:c.instructions+=3;goto B5770a6;
case 0x5770a9:c.instructions+=2;goto B5770a9;
case 0x5770ab:c.instructions+=1;goto B5770ab;
case 0x5770ad:goto L5770ad;
case 0x5770b2:goto L5770b2;
case 0x5770b6:c.instructions+=4;goto B5770b6;
case 0x5770b7:c.instructions+=3;goto B5770b7;
case 0x5770ba:c.instructions+=2;goto B5770ba;
case 0x5770bb:c.instructions+=1;goto B5770bb;
case 0x5770c0:goto L5770c0;
case 0x5770c3:c.instructions+=1;goto B5770c3;
case 0x5770c5:goto L5770c5;
case 0x5770c8:c.instructions+=1;goto B5770c8;
case 0x5770ca:goto L5770ca;
case 0x5770cf:c.instructions+=1;goto B5770cf;
case 0x5770d1:goto L5770d1;
case 0x5770d6:c.instructions+=1;goto B5770d6;
case 0x5770d8:goto L5770d8;
case 0x5770dd:c.instructions+=1;goto B5770dd;
case 0x5770df:goto L5770df;
case 0x5770e4:c.instructions+=2;goto B5770e4;
case 0x5770e9:c.instructions+=1;goto B5770e9;
case 0x5770eb:goto L5770eb;
case 0x5770f0:goto L5770f0;
case 0x5770f1:c.instructions+=2;goto B5770f1;
case 0x5770f2:c.instructions+=1;goto B5770f2;
case 0x5770f7:goto L5770f7;
case 0x5770fb:c.instructions+=3;goto B5770fb;
case 0x5770fe:c.instructions+=2;goto B5770fe;
case 0x577101:c.instructions+=1;goto B577101;
case 0x577106:goto L577106;
case 0x577107:c.instructions+=7;goto B577107;
case 0x57710c:c.instructions+=6;goto B57710c;
case 0x57710e:c.instructions+=5;goto B57710e;
case 0x577111:c.instructions+=4;goto B577111;
case 0x577113:c.instructions+=3;goto B577113;
case 0x577114:c.instructions+=2;goto B577114;
case 0x577115:c.instructions+=1;goto B577115;
case 0x577117:goto L577117;
case 0x57711b:c.instructions+=3;goto B57711b;
case 0x57711d:c.instructions+=2;goto B57711d;
case 0x577120:c.instructions+=1;goto B577120;
case 0x577122:goto L577122;
case 0x577124:c.instructions+=1;goto B577124;
case 0x577126:goto L577126;
case 0x577127:c.instructions+=1;goto B577127;
case 0x57712c:goto L57712c;
case 0x577130:c.instructions+=4;goto B577130;
case 0x577131:c.instructions+=3;goto B577131;
case 0x577132:c.instructions+=2;goto B577132;
case 0x577134:c.instructions+=1;goto B577134;
case 0x577139:goto L577139;
case 0x57713d:c.instructions+=3;goto B57713d;
case 0x577140:c.instructions+=2;goto B577140;
case 0x577142:c.instructions+=1;goto B577142;
case 0x577144:goto L577144;
case 0x577149:goto L577149;
case 0x57714d:c.instructions+=3;goto B57714d;
case 0x57714e:c.instructions+=2;goto B57714e;
case 0x577151:c.instructions+=1;goto B577151;
case 0x577152:goto L577152;
case 0x577157:goto L577157;
case 0x57715a:goto L57715a;
case 0x57715c:c.instructions+=1;goto B57715c;
case 0x57715e:goto L57715e;
case 0x57715f:c.instructions+=6;goto B57715f;
case 0x577160:c.instructions+=5;goto B577160;
case 0x577161:c.instructions+=4;goto B577161;
case 0x577164:c.instructions+=3;goto B577164;
case 0x577165:c.instructions+=2;goto B577165;
case 0x577168:c.instructions+=1;goto B577168;
case 0x577169:goto L577169;
case 0x57716e:c.instructions+=1;goto B57716e;
case 0x577170:goto L577170;
case 0x577173:goto L577173;
case 0x577174:c.instructions+=5;goto B577174;
case 0x577175:c.instructions+=4;goto B577175;
case 0x577176:c.instructions+=3;goto B577176;
case 0x577177:c.instructions+=2;goto B577177;
case 0x57717a:c.instructions+=1;goto B57717a;
case 0x5771b0:goto L5771b0;
case 0x5771b1:c.instructions+=46;goto B5771b1;
case 0x5771b3:c.instructions+=45;goto B5771b3;
case 0x5771b8:c.instructions+=44;goto B5771b8;
case 0x5771ba:c.instructions+=43;goto B5771ba;
case 0x5771bc:c.instructions+=42;goto B5771bc;
case 0x5771bf:c.instructions+=41;goto B5771bf;
case 0x5771c1:c.instructions+=40;goto B5771c1;
case 0x5771c4:c.instructions+=39;goto B5771c4;
case 0x5771c6:c.instructions+=38;goto B5771c6;
case 0x5771c8:c.instructions+=37;goto B5771c8;
case 0x5771ce:c.instructions+=36;goto B5771ce;
case 0x5771d0:c.instructions+=35;goto B5771d0;
case 0x5771d5:c.instructions+=34;goto B5771d5;
case 0x5771db:c.instructions+=33;goto B5771db;
case 0x5771dd:c.instructions+=32;goto B5771dd;
case 0x5771df:c.instructions+=31;goto B5771df;
case 0x5771e2:c.instructions+=30;goto B5771e2;
case 0x5771e4:c.instructions+=29;goto B5771e4;
case 0x5771e7:c.instructions+=28;goto B5771e7;
case 0x5771e9:c.instructions+=27;goto B5771e9;
case 0x5771ed:c.instructions+=26;goto B5771ed;
case 0x5771ef:c.instructions+=25;goto B5771ef;
case 0x5771f5:c.instructions+=24;goto B5771f5;
case 0x5771f7:c.instructions+=23;goto B5771f7;
case 0x5771fc:c.instructions+=22;goto B5771fc;
case 0x5771fe:c.instructions+=21;goto B5771fe;
case 0x577200:c.instructions+=20;goto B577200;
case 0x577203:c.instructions+=19;goto B577203;
case 0x577205:c.instructions+=18;goto B577205;
case 0x577208:c.instructions+=17;goto B577208;
case 0x57720a:c.instructions+=16;goto B57720a;
case 0x57720e:c.instructions+=15;goto B57720e;
case 0x577210:c.instructions+=14;goto B577210;
case 0x577213:c.instructions+=13;goto B577213;
case 0x577215:c.instructions+=12;goto B577215;
case 0x577219:c.instructions+=11;goto B577219;
case 0x57721b:c.instructions+=10;goto B57721b;
case 0x57721f:c.instructions+=9;goto B57721f;
case 0x577224:c.instructions+=8;goto B577224;
case 0x577226:c.instructions+=7;goto B577226;
case 0x577229:c.instructions+=6;goto B577229;
case 0x57722b:c.instructions+=5;goto B57722b;
case 0x57722e:c.instructions+=4;goto B57722e;
case 0x577230:c.instructions+=3;goto B577230;
case 0x577232:c.instructions+=2;goto B577232;
case 0x577233:c.instructions+=1;goto B577233;
case 0x577240:goto L577240;
case 0x577243:c.instructions+=6;goto B577243;
case 0x577244:c.instructions+=5;goto B577244;
case 0x577245:c.instructions+=4;goto B577245;
case 0x577247:c.instructions+=3;goto B577247;
case 0x577249:c.instructions+=2;goto B577249;
case 0x57724b:c.instructions+=1;goto B57724b;
case 0x57724d:goto L57724d;
case 0x577253:c.instructions+=1;goto B577253;
case 0x577255:goto L577255;
case 0x577259:c.instructions+=8;goto B577259;
case 0x57725d:c.instructions+=7;goto B57725d;
case 0x57725f:c.instructions+=6;goto B57725f;
case 0x577261:c.instructions+=5;goto B577261;
case 0x577263:c.instructions+=4;goto B577263;
case 0x577265:c.instructions+=3;goto B577265;
case 0x577266:c.instructions+=2;goto B577266;
case 0x577267:c.instructions+=1;goto B577267;
case 0x57726c:goto L57726c;
case 0x57726f:c.instructions+=4;goto B57726f;
case 0x577270:c.instructions+=3;goto B577270;
case 0x577271:c.instructions+=2;goto B577271;
case 0x577274:c.instructions+=1;goto B577274;
case 0x577277:goto L577277;
case 0x577279:c.instructions+=1;goto B577279;
case 0x57727b:goto L57727b;
case 0x57727f:c.instructions+=11;goto B57727f;
case 0x577280:c.instructions+=10;goto B577280;
case 0x577284:c.instructions+=9;goto B577284;
case 0x577285:c.instructions+=8;goto B577285;
case 0x577289:c.instructions+=7;goto B577289;
case 0x57728a:c.instructions+=6;goto B57728a;
case 0x57728e:c.instructions+=5;goto B57728e;
case 0x577290:c.instructions+=4;goto B577290;
case 0x577291:c.instructions+=3;goto B577291;
case 0x577293:c.instructions+=2;goto B577293;
case 0x577295:c.instructions+=1;goto B577295;
case 0x57729a:goto L57729a;
case 0x57729c:c.instructions+=2;goto B57729c;
case 0x57729e:c.instructions+=1;goto B57729e;
case 0x5772a0:goto L5772a0;
case 0x5772a4:c.instructions+=9;goto B5772a4;
case 0x5772a5:c.instructions+=8;goto B5772a5;
case 0x5772a9:c.instructions+=7;goto B5772a9;
case 0x5772aa:c.instructions+=6;goto B5772aa;
case 0x5772ae:c.instructions+=5;goto B5772ae;
case 0x5772af:c.instructions+=4;goto B5772af;
case 0x5772b3:c.instructions+=3;goto B5772b3;
case 0x5772b4:c.instructions+=2;goto B5772b4;
case 0x5772b6:c.instructions+=1;goto B5772b6;
case 0x5772bb:goto L5772bb;
case 0x5772be:c.instructions+=1;goto B5772be;
case 0x5772c0:goto L5772c0;
case 0x5772c5:goto L5772c5;
case 0x5772c9:c.instructions+=18;goto B5772c9;
case 0x5772ce:c.instructions+=17;goto B5772ce;
case 0x5772d0:c.instructions+=16;goto B5772d0;
case 0x5772d4:c.instructions+=15;goto B5772d4;
case 0x5772d7:c.instructions+=14;goto B5772d7;
case 0x5772d9:c.instructions+=13;goto B5772d9;
case 0x5772dc:c.instructions+=12;goto B5772dc;
case 0x5772de:c.instructions+=11;goto B5772de;
case 0x5772e2:c.instructions+=10;goto B5772e2;
case 0x5772e3:c.instructions+=9;goto B5772e3;
case 0x5772e7:c.instructions+=8;goto B5772e7;
case 0x5772e8:c.instructions+=7;goto B5772e8;
case 0x5772ec:c.instructions+=6;goto B5772ec;
case 0x5772ed:c.instructions+=5;goto B5772ed;
case 0x5772f1:c.instructions+=4;goto B5772f1;
case 0x5772f2:c.instructions+=3;goto B5772f2;
case 0x5772f3:c.instructions+=2;goto B5772f3;
case 0x5772f4:c.instructions+=1;goto B5772f4;
case 0x5772f9:goto L5772f9;
case 0x5772fc:c.instructions+=4;goto B5772fc;
case 0x5772fd:c.instructions+=3;goto B5772fd;
case 0x5772fe:c.instructions+=2;goto B5772fe;
case 0x577301:c.instructions+=1;goto B577301;
case 0x577310:goto L577310;
case 0x577311:c.instructions+=5;goto B577311;
case 0x577313:c.instructions+=4;goto B577313;
case 0x577314:c.instructions+=3;goto B577314;
case 0x577316:c.instructions+=2;goto B577316;
case 0x577318:c.instructions+=1;goto B577318;
case 0x57731a:goto L57731a;
case 0x577320:c.instructions+=1;goto B577320;
case 0x577322:goto L577322;
case 0x577326:c.instructions+=2;goto B577326;
case 0x57732c:c.instructions+=1;goto B57732c;
case 0x577331:goto L577331;
case 0x577333:c.instructions+=2;goto B577333;
case 0x577335:c.instructions+=1;goto B577335;
case 0x577337:goto L577337;
case 0x57733d:goto L57733d;
case 0x57733e:c.instructions+=3;goto B57733e;
case 0x577340:c.instructions+=2;goto B577340;
case 0x577341:c.instructions+=1;goto B577341;
case 0x577344:goto L577344;
case 0x577346:c.instructions+=2;goto B577346;
case 0x577348:c.instructions+=1;goto B577348;
case 0x57734a:goto L57734a;
case 0x577350:c.instructions+=1;goto B577350;
case 0x577352:goto L577352;
case 0x577353:c.instructions+=3;goto B577353;
case 0x577358:c.instructions+=2;goto B577358;
case 0x577359:c.instructions+=1;goto B577359;
case 0x577360:goto L577360;
case 0x577363:c.instructions+=5;goto B577363;
case 0x577365:c.instructions+=4;goto B577365;
case 0x57736b:c.instructions+=3;goto B57736b;
case 0x57736f:c.instructions+=2;goto B57736f;
case 0x577373:c.instructions+=1;goto B577373;
case 0x577378:goto L577378;
case 0x57737c:c.instructions+=6;goto B57737c;
case 0x577380:c.instructions+=5;goto B577380;
case 0x577384:c.instructions+=4;goto B577384;
case 0x577388:c.instructions+=3;goto B577388;
case 0x57738a:c.instructions+=2;goto B57738a;
case 0x57738d:c.instructions+=1;goto B57738d;
case 0x57738f:goto L57738f;
case 0x577395:c.instructions+=1;goto B577395;
case 0x577399:goto L577399;
case 0x57739d:c.instructions+=5;goto B57739d;
case 0x5773a1:c.instructions+=4;goto B5773a1;
case 0x5773a7:c.instructions+=3;goto B5773a7;
case 0x5773a9:c.instructions+=2;goto B5773a9;
case 0x5773ac:c.instructions+=1;goto B5773ac;
case 0x5773ae:goto L5773ae;
case 0x5773b0:c.instructions+=2;goto B5773b0;
case 0x5773b4:c.instructions+=1;goto B5773b4;
case 0x5773ba:goto L5773ba;
case 0x5773be:c.instructions+=3;goto B5773be;
case 0x5773c4:c.instructions+=2;goto B5773c4;
case 0x5773c8:c.instructions+=1;goto B5773c8;
case 0x5773cd:goto L5773cd;
case 0x5773d1:c.instructions+=5;goto B5773d1;
case 0x5773d5:c.instructions+=4;goto B5773d5;
case 0x5773d9:c.instructions+=3;goto B5773d9;
case 0x5773db:c.instructions+=2;goto B5773db;
case 0x5773de:c.instructions+=1;goto B5773de;
case 0x5773e0:goto L5773e0;
case 0x5773e6:goto L5773e6;
case 0x5773ec:c.instructions+=2;goto B5773ec;
case 0x5773ef:c.instructions+=1;goto B5773ef;
case 0x577400:goto L577400;
case 0x577404:c.instructions+=4;goto B577404;
case 0x577405:c.instructions+=3;goto B577405;
case 0x577406:c.instructions+=2;goto B577406;
case 0x577408:c.instructions+=1;goto B577408;
case 0x57740d:goto L57740d;
case 0x577413:c.instructions+=2;goto B577413;
case 0x577419:c.instructions+=1;goto B577419;
case 0x57741e:goto L57741e;
case 0x577420:c.instructions+=2;goto B577420;
case 0x577421:c.instructions+=1;goto B577421;
case 0x577430:goto L577430;
case 0x577431:c.instructions+=8;goto B577431;
case 0x577432:c.instructions+=7;goto B577432;
case 0x577437:c.instructions+=6;goto B577437;
case 0x57743c:c.instructions+=5;goto B57743c;
case 0x57743e:c.instructions+=4;goto B57743e;
case 0x577440:c.instructions+=3;goto B577440;
case 0x577442:c.instructions+=2;goto B577442;
case 0x577443:c.instructions+=1;goto B577443;
case 0x577448:goto L577448;
case 0x57744a:c.instructions+=8;goto B57744a;
case 0x57744d:c.instructions+=7;goto B57744d;
case 0x577450:c.instructions+=6;goto B577450;
case 0x577452:c.instructions+=5;goto B577452;
case 0x577456:c.instructions+=4;goto B577456;
case 0x57745d:c.instructions+=3;goto B57745d;
case 0x577464:c.instructions+=2;goto B577464;
case 0x57746b:c.instructions+=1;goto B57746b;
case 0x577470:goto L577470;
case 0x577472:goto L577472;
case 0x577473:c.instructions+=3;goto B577473;
case 0x577475:c.instructions+=2;goto B577475;
case 0x577476:c.instructions+=1;goto B577476;
case 0x577480:goto L577480;
case 0x577482:c.instructions+=5;goto B577482;
case 0x577484:c.instructions+=4;goto B577484;
case 0x577487:c.instructions+=3;goto B577487;
case 0x57748a:c.instructions+=2;goto B57748a;
case 0x577494:c.instructions+=1;goto B577494;
case 0x5774a0:goto L5774a0;
case 0x5774a3:c.instructions+=2;goto B5774a3;
case 0x5774a5:c.instructions+=1;goto B5774a5;
case 0x5774a7:goto L5774a7;
case 0x5774aa:c.instructions+=2;goto B5774aa;
case 0x5774ab:c.instructions+=1;goto B5774ab;
case 0x5774b0:goto L5774b0;
case 0x5774b1:goto L5774b1;
case 0x5774c0:goto L5774c0;
case 0x5774c1:c.instructions+=10;goto B5774c1;
case 0x5774c3:c.instructions+=9;goto B5774c3;
case 0x5774c6:c.instructions+=8;goto B5774c6;
case 0x5774c9:c.instructions+=7;goto B5774c9;
case 0x5774ca:c.instructions+=6;goto B5774ca;
case 0x5774cb:c.instructions+=5;goto B5774cb;
case 0x5774cd:c.instructions+=4;goto B5774cd;
case 0x5774d0:c.instructions+=3;goto B5774d0;
case 0x5774d2:c.instructions+=2;goto B5774d2;
case 0x5774d3:c.instructions+=1;goto B5774d3;
case 0x5774d5:goto L5774d5;
case 0x5774da:goto L5774da;
case 0x5774de:goto L5774de;
case 0x5774e3:c.instructions+=1;goto B5774e3;
case 0x5774e5:goto L5774e5;
case 0x5774eb:c.instructions+=6;goto B5774eb;
case 0x5774ec:c.instructions+=5;goto B5774ec;
case 0x5774ed:c.instructions+=4;goto B5774ed;
case 0x5774ee:c.instructions+=3;goto B5774ee;
case 0x5774f0:c.instructions+=2;goto B5774f0;
case 0x5774f1:c.instructions+=1;goto B5774f1;
case 0x5774f4:goto L5774f4;
case 0x5774f7:c.instructions+=7;goto B5774f7;
case 0x5774fa:c.instructions+=6;goto B5774fa;
case 0x5774fe:c.instructions+=5;goto B5774fe;
case 0x577506:c.instructions+=4;goto B577506;
case 0x57750e:c.instructions+=3;goto B57750e;
case 0x577516:c.instructions+=2;goto B577516;
case 0x57751e:c.instructions+=1;goto B57751e;
case 0x577520:goto L577520;
case 0x577524:c.instructions+=6;goto B577524;
case 0x577526:c.instructions+=5;goto B577526;
case 0x577527:c.instructions+=4;goto B577527;
case 0x57752b:c.instructions+=3;goto B57752b;
case 0x57752c:c.instructions+=2;goto B57752c;
case 0x57752e:c.instructions+=1;goto B57752e;
case 0x577533:goto L577533;
case 0x577537:c.instructions+=11;goto B577537;
case 0x57753b:c.instructions+=10;goto B57753b;
case 0x57753f:c.instructions+=9;goto B57753f;
case 0x577541:c.instructions+=8;goto B577541;
case 0x577545:c.instructions+=7;goto B577545;
case 0x577546:c.instructions+=6;goto B577546;
case 0x57754a:c.instructions+=5;goto B57754a;
case 0x57754e:c.instructions+=4;goto B57754e;
case 0x57754f:c.instructions+=3;goto B57754f;
case 0x577551:c.instructions+=2;goto B577551;
case 0x577555:c.instructions+=1;goto B577555;
case 0x57755a:goto L57755a;
case 0x57755e:c.instructions+=16;goto B57755e;
case 0x577562:c.instructions+=15;goto B577562;
case 0x577566:c.instructions+=14;goto B577566;
case 0x577568:c.instructions+=13;goto B577568;
case 0x57756a:c.instructions+=12;goto B57756a;
case 0x57756c:c.instructions+=11;goto B57756c;
case 0x57756e:c.instructions+=10;goto B57756e;
case 0x577570:c.instructions+=9;goto B577570;
case 0x577572:c.instructions+=8;goto B577572;
case 0x577574:c.instructions+=7;goto B577574;
case 0x577576:c.instructions+=6;goto B577576;
case 0x577578:c.instructions+=5;goto B577578;
case 0x57757c:c.instructions+=4;goto B57757c;
case 0x577582:c.instructions+=3;goto B577582;
case 0x577584:c.instructions+=2;goto B577584;
case 0x577587:c.instructions+=1;goto B577587;
case 0x57758d:goto L57758d;
case 0x57758f:c.instructions+=23;goto B57758f;
case 0x577593:c.instructions+=22;goto B577593;
case 0x577596:c.instructions+=21;goto B577596;
case 0x57759a:c.instructions+=20;goto B57759a;
case 0x57759d:c.instructions+=19;goto B57759d;
case 0x5775a1:c.instructions+=18;goto B5775a1;
case 0x5775a3:c.instructions+=17;goto B5775a3;
case 0x5775a5:c.instructions+=16;goto B5775a5;
case 0x5775a7:c.instructions+=15;goto B5775a7;
case 0x5775a9:c.instructions+=14;goto B5775a9;
case 0x5775ab:c.instructions+=13;goto B5775ab;
case 0x5775ad:c.instructions+=12;goto B5775ad;
case 0x5775af:c.instructions+=11;goto B5775af;
case 0x5775b3:c.instructions+=10;goto B5775b3;
case 0x5775b7:c.instructions+=9;goto B5775b7;
case 0x5775b9:c.instructions+=8;goto B5775b9;
case 0x5775bb:c.instructions+=7;goto B5775bb;
case 0x5775bd:c.instructions+=6;goto B5775bd;
case 0x5775c1:c.instructions+=5;goto B5775c1;
case 0x5775c3:c.instructions+=4;goto B5775c3;
case 0x5775c6:c.instructions+=3;goto B5775c6;
case 0x5775c8:c.instructions+=2;goto B5775c8;
case 0x5775cb:c.instructions+=1;goto B5775cb;
case 0x5775d1:goto L5775d1;
case 0x5775d5:c.instructions+=4;goto B5775d5;
case 0x5775db:c.instructions+=3;goto B5775db;
case 0x5775dd:c.instructions+=2;goto B5775dd;
case 0x5775e0:c.instructions+=1;goto B5775e0;
case 0x5775e2:goto L5775e2;
case 0x5775e6:c.instructions+=1;goto B5775e6;
case 0x5775e8:goto L5775e8;
case 0x5775ec:c.instructions+=7;goto B5775ec;
case 0x5775f0:c.instructions+=6;goto B5775f0;
case 0x5775f4:c.instructions+=5;goto B5775f4;
case 0x5775f6:c.instructions+=4;goto B5775f6;
case 0x5775fc:c.instructions+=3;goto B5775fc;
case 0x5775fe:c.instructions+=2;goto B5775fe;
case 0x577601:c.instructions+=1;goto B577601;
case 0x577607:goto L577607;
case 0x57760b:c.instructions+=7;goto B57760b;
case 0x57760f:c.instructions+=6;goto B57760f;
case 0x577611:c.instructions+=5;goto B577611;
case 0x577615:c.instructions+=4;goto B577615;
case 0x577619:c.instructions+=3;goto B577619;
case 0x57761b:c.instructions+=2;goto B57761b;
case 0x57761e:c.instructions+=1;goto B57761e;
case 0x577620:goto L577620;
case 0x577622:c.instructions+=1;goto B577622;
case 0x577626:goto L577626;
case 0x57762a:c.instructions+=4;goto B57762a;
case 0x57762c:c.instructions+=3;goto B57762c;
case 0x57762e:c.instructions+=2;goto B57762e;
case 0x577631:c.instructions+=1;goto B577631;
case 0x577633:goto L577633;
case 0x577637:c.instructions+=3;goto B577637;
case 0x577639:c.instructions+=2;goto B577639;
case 0x57763d:c.instructions+=1;goto B57763d;
case 0x57763f:goto L57763f;
case 0x577643:goto L577643;
case 0x577647:c.instructions+=5;goto B577647;
case 0x57764a:c.instructions+=4;goto B57764a;
case 0x57764c:c.instructions+=3;goto B57764c;
case 0x577650:c.instructions+=2;goto B577650;
case 0x577654:c.instructions+=1;goto B577654;
case 0x577656:goto L577656;
case 0x577659:c.instructions+=5;goto B577659;
case 0x57765b:c.instructions+=4;goto B57765b;
case 0x57765f:c.instructions+=3;goto B57765f;
case 0x577660:c.instructions+=2;goto B577660;
case 0x577661:c.instructions+=1;goto B577661;
case 0x577666:goto L577666;
case 0x577669:c.instructions+=1;goto B577669;
case 0x57766b:goto L57766b;
case 0x57766e:c.instructions+=1;goto B57766e;
case 0x577670:goto L577670;
case 0x577673:c.instructions+=8;goto B577673;
case 0x577676:c.instructions+=7;goto B577676;
case 0x57767c:c.instructions+=6;goto B57767c;
case 0x577680:c.instructions+=5;goto B577680;
case 0x577684:c.instructions+=4;goto B577684;
case 0x577688:c.instructions+=3;goto B577688;
case 0x57768a:c.instructions+=2;goto B57768a;
case 0x57768d:c.instructions+=1;goto B57768d;
case 0x57768f:goto L57768f;
case 0x577691:c.instructions+=1;goto B577691;
case 0x577695:goto L577695;
case 0x577699:c.instructions+=4;goto B577699;
case 0x57769b:c.instructions+=3;goto B57769b;
case 0x57769d:c.instructions+=2;goto B57769d;
case 0x5776a0:c.instructions+=1;goto B5776a0;
case 0x5776a2:goto L5776a2;
case 0x5776a4:c.instructions+=1;goto B5776a4;
case 0x5776a8:goto L5776a8;
case 0x5776ac:c.instructions+=6;goto B5776ac;
case 0x5776b0:c.instructions+=5;goto B5776b0;
case 0x5776b4:c.instructions+=4;goto B5776b4;
case 0x5776ba:c.instructions+=3;goto B5776ba;
case 0x5776bc:c.instructions+=2;goto B5776bc;
case 0x5776bf:c.instructions+=1;goto B5776bf;
case 0x5776c1:goto L5776c1;
case 0x5776c5:c.instructions+=2;goto B5776c5;
case 0x5776cb:c.instructions+=1;goto B5776cb;
case 0x5776cf:goto L5776cf;
case 0x5776d3:c.instructions+=7;goto B5776d3;
case 0x5776d7:c.instructions+=6;goto B5776d7;
case 0x5776db:c.instructions+=5;goto B5776db;
case 0x5776dc:c.instructions+=4;goto B5776dc;
case 0x5776e0:c.instructions+=3;goto B5776e0;
case 0x5776e4:c.instructions+=2;goto B5776e4;
case 0x5776e8:c.instructions+=1;goto B5776e8;
case 0x5776ee:goto L5776ee;
case 0x5776f2:c.instructions+=6;goto B5776f2;
case 0x5776f3:c.instructions+=5;goto B5776f3;
case 0x5776f4:c.instructions+=4;goto B5776f4;
case 0x5776f5:c.instructions+=3;goto B5776f5;
case 0x5776f7:c.instructions+=2;goto B5776f7;
case 0x5776f8:c.instructions+=1;goto B5776f8;
case 0x5776fb:goto L5776fb;
case 0x5776fd:c.instructions+=1;goto B5776fd;
case 0x5776ff:goto L5776ff;
case 0x577701:goto L577701;
case 0x577705:c.instructions+=6;goto B577705;
case 0x577706:c.instructions+=5;goto B577706;
case 0x577707:c.instructions+=4;goto B577707;
case 0x577708:c.instructions+=3;goto B577708;
case 0x57770a:c.instructions+=2;goto B57770a;
case 0x57770b:c.instructions+=1;goto B57770b;
case 0x577710:goto L577710;
case 0x577711:c.instructions+=13;goto B577711;
case 0x577713:c.instructions+=12;goto B577713;
case 0x577716:c.instructions+=11;goto B577716;
case 0x577719:c.instructions+=10;goto B577719;
case 0x57771a:c.instructions+=9;goto B57771a;
case 0x57771b:c.instructions+=8;goto B57771b;
case 0x57771d:c.instructions+=7;goto B57771d;
case 0x577720:c.instructions+=6;goto B577720;
case 0x577723:c.instructions+=5;goto B577723;
case 0x577727:c.instructions+=4;goto B577727;
case 0x57772a:c.instructions+=3;goto B57772a;
case 0x57772d:c.instructions+=2;goto B57772d;
case 0x577731:c.instructions+=1;goto B577731;
case 0x577733:goto L577733;
case 0x577736:c.instructions+=1;goto B577736;
case 0x577738:goto L577738;
case 0x57773c:c.instructions+=8;goto B57773c;
case 0x577740:c.instructions+=7;goto B577740;
case 0x577742:c.instructions+=6;goto B577742;
case 0x577746:c.instructions+=5;goto B577746;
case 0x57774a:c.instructions+=4;goto B57774a;
case 0x57774e:c.instructions+=3;goto B57774e;
case 0x577752:c.instructions+=2;goto B577752;
case 0x577754:c.instructions+=1;goto B577754;
case 0x577756:goto L577756;
case 0x57775a:c.instructions+=1;goto B57775a;
case 0x577760:goto L577760;
case 0x577764:goto L577764;
case 0x577768:c.instructions+=4;goto B577768;
case 0x57776c:c.instructions+=3;goto B57776c;
case 0x57776e:c.instructions+=2;goto B57776e;
case 0x577771:c.instructions+=1;goto B577771;
case 0x577773:goto L577773;
case 0x577777:c.instructions+=6;goto B577777;
case 0x577779:c.instructions+=5;goto B577779;
case 0x57777a:c.instructions+=4;goto B57777a;
case 0x57777e:c.instructions+=3;goto B57777e;
case 0x57777f:c.instructions+=2;goto B57777f;
case 0x577781:c.instructions+=1;goto B577781;
case 0x577786:goto L577786;
case 0x57778a:c.instructions+=8;goto B57778a;
case 0x57778e:c.instructions+=7;goto B57778e;
case 0x577790:c.instructions+=6;goto B577790;
case 0x577791:c.instructions+=5;goto B577791;
case 0x577795:c.instructions+=4;goto B577795;
case 0x577799:c.instructions+=3;goto B577799;
case 0x57779a:c.instructions+=2;goto B57779a;
case 0x57779c:c.instructions+=1;goto B57779c;
case 0x5777a1:goto L5777a1;
case 0x5777a5:c.instructions+=6;goto B5777a5;
case 0x5777a9:c.instructions+=5;goto B5777a9;
case 0x5777ad:c.instructions+=4;goto B5777ad;
case 0x5777b1:c.instructions+=3;goto B5777b1;
case 0x5777b3:c.instructions+=2;goto B5777b3;
case 0x5777b6:c.instructions+=1;goto B5777b6;
case 0x5777b8:goto L5777b8;
case 0x5777bb:c.instructions+=4;goto B5777bb;
case 0x5777bf:c.instructions+=3;goto B5777bf;
case 0x5777c1:c.instructions+=2;goto B5777c1;
case 0x5777c4:c.instructions+=1;goto B5777c4;
case 0x5777c6:goto L5777c6;
case 0x5777ca:c.instructions+=5;goto B5777ca;
case 0x5777cb:c.instructions+=4;goto B5777cb;
case 0x5777cc:c.instructions+=3;goto B5777cc;
case 0x5777ce:c.instructions+=2;goto B5777ce;
case 0x5777cf:c.instructions+=1;goto B5777cf;
case 0x5777d2:goto L5777d2;
case 0x5777d5:c.instructions+=4;goto B5777d5;
case 0x5777d9:c.instructions+=3;goto B5777d9;
case 0x5777db:c.instructions+=2;goto B5777db;
case 0x5777de:c.instructions+=1;goto B5777de;
case 0x5777e0:goto L5777e0;
case 0x5777e4:c.instructions+=5;goto B5777e4;
case 0x5777e5:c.instructions+=4;goto B5777e5;
case 0x5777e6:c.instructions+=3;goto B5777e6;
case 0x5777e8:c.instructions+=2;goto B5777e8;
case 0x5777e9:c.instructions+=1;goto B5777e9;
case 0x5777ec:goto L5777ec;
case 0x5777ee:c.instructions+=1;goto B5777ee;
case 0x5777f0:goto L5777f0;
case 0x5777f2:goto L5777f2;
case 0x5777f5:c.instructions+=18;goto B5777f5;
case 0x5777f7:c.instructions+=17;goto B5777f7;
case 0x5777fb:c.instructions+=16;goto B5777fb;
case 0x5777ff:c.instructions+=15;goto B5777ff;
case 0x577803:c.instructions+=14;goto B577803;
case 0x577805:c.instructions+=13;goto B577805;
case 0x577809:c.instructions+=12;goto B577809;
case 0x57780b:c.instructions+=11;goto B57780b;
case 0x577811:c.instructions+=10;goto B577811;
case 0x577813:c.instructions+=9;goto B577813;
case 0x577817:c.instructions+=8;goto B577817;
case 0x577819:c.instructions+=7;goto B577819;
case 0x57781d:c.instructions+=6;goto B57781d;
case 0x57781f:c.instructions+=5;goto B57781f;
case 0x577823:c.instructions+=4;goto B577823;
case 0x577827:c.instructions+=3;goto B577827;
case 0x577828:c.instructions+=2;goto B577828;
case 0x577829:c.instructions+=1;goto B577829;
case 0x57782e:goto L57782e;
case 0x577831:c.instructions+=7;goto B577831;
case 0x577835:c.instructions+=6;goto B577835;
case 0x577836:c.instructions+=5;goto B577836;
case 0x577838:c.instructions+=4;goto B577838;
case 0x57783e:c.instructions+=3;goto B57783e;
case 0x577840:c.instructions+=2;goto B577840;
case 0x577843:c.instructions+=1;goto B577843;
case 0x577845:goto L577845;
case 0x577848:c.instructions+=4;goto B577848;
case 0x57784c:c.instructions+=3;goto B57784c;
case 0x57784e:c.instructions+=2;goto B57784e;
case 0x577851:c.instructions+=1;goto B577851;
case 0x577853:goto L577853;
case 0x577857:c.instructions+=3;goto B577857;
case 0x57785b:c.instructions+=2;goto B57785b;
case 0x57785f:c.instructions+=1;goto B57785f;
case 0x577863:goto L577863;
case 0x577866:c.instructions+=4;goto B577866;
case 0x57786a:c.instructions+=3;goto B57786a;
case 0x57786c:c.instructions+=2;goto B57786c;
case 0x57786f:c.instructions+=1;goto B57786f;
case 0x577871:goto L577871;
case 0x577875:c.instructions+=3;goto B577875;
case 0x577879:c.instructions+=2;goto B577879;
case 0x57787d:c.instructions+=1;goto B57787d;
case 0x577881:goto L577881;
case 0x577884:c.instructions+=1;goto B577884;
case 0x57788a:goto L57788a;
case 0x57788f:c.instructions+=2;goto B57788f;
case 0x577891:c.instructions+=1;goto B577891;
case 0x577893:goto L577893;
case 0x577895:goto L577895;
case 0x57789b:c.instructions+=5;goto B57789b;
case 0x5778a1:c.instructions+=4;goto B5778a1;
case 0x5778a3:c.instructions+=3;goto B5778a3;
case 0x5778a5:c.instructions+=2;goto B5778a5;
case 0x5778a8:c.instructions+=1;goto B5778a8;
case 0x5778aa:goto L5778aa;
case 0x5778ac:c.instructions+=1;goto B5778ac;
case 0x5778b2:goto L5778b2;
case 0x5778b3:c.instructions+=6;goto B5778b3;
case 0x5778b9:c.instructions+=5;goto B5778b9;
case 0x5778bd:c.instructions+=4;goto B5778bd;
case 0x5778be:c.instructions+=3;goto B5778be;
case 0x5778c0:c.instructions+=2;goto B5778c0;
case 0x5778c1:c.instructions+=1;goto B5778c1;
case 0x5778d0:goto L5778d0;
case 0x5778d1:c.instructions+=12;goto B5778d1;
case 0x5778d3:c.instructions+=11;goto B5778d3;
case 0x5778d6:c.instructions+=10;goto B5778d6;
case 0x5778d9:c.instructions+=9;goto B5778d9;
case 0x5778da:c.instructions+=8;goto B5778da;
case 0x5778db:c.instructions+=7;goto B5778db;
case 0x5778dd:c.instructions+=6;goto B5778dd;
case 0x5778df:c.instructions+=5;goto B5778df;
case 0x5778e3:c.instructions+=4;goto B5778e3;
case 0x5778e4:c.instructions+=3;goto B5778e4;
case 0x5778ec:c.instructions+=2;goto B5778ec;
case 0x5778f0:c.instructions+=1;goto B5778f0;
case 0x5778f6:goto L5778f6;
case 0x5778f9:c.instructions+=2;goto B5778f9;
case 0x5778fd:c.instructions+=1;goto B5778fd;
case 0x577900:goto L577900;
case 0x577903:c.instructions+=20;goto B577903;
case 0x577907:c.instructions+=19;goto B577907;
case 0x57790a:c.instructions+=18;goto B57790a;
case 0x57790c:c.instructions+=17;goto B57790c;
case 0x57790f:c.instructions+=16;goto B57790f;
case 0x577913:c.instructions+=15;goto B577913;
case 0x577916:c.instructions+=14;goto B577916;
case 0x577919:c.instructions+=13;goto B577919;
case 0x57791d:c.instructions+=12;goto B57791d;
case 0x577921:c.instructions+=11;goto B577921;
case 0x577923:c.instructions+=10;goto B577923;
case 0x577925:c.instructions+=9;goto B577925;
case 0x577928:c.instructions+=8;goto B577928;
case 0x57792b:c.instructions+=7;goto B57792b;
case 0x57792e:c.instructions+=6;goto B57792e;
case 0x577931:c.instructions+=5;goto B577931;
case 0x577935:c.instructions+=4;goto B577935;
case 0x577939:c.instructions+=3;goto B577939;
case 0x57793d:c.instructions+=2;goto B57793d;
case 0x577940:c.instructions+=1;goto B577940;
case 0x577942:goto L577942;
case 0x577946:c.instructions+=4;goto B577946;
case 0x577948:c.instructions+=3;goto B577948;
case 0x577949:c.instructions+=2;goto B577949;
case 0x57794d:c.instructions+=1;goto B57794d;
case 0x577951:goto L577951;
case 0x577953:c.instructions+=5;goto B577953;
case 0x577955:c.instructions+=4;goto B577955;
case 0x577957:c.instructions+=3;goto B577957;
case 0x577959:c.instructions+=2;goto B577959;
case 0x57795c:c.instructions+=1;goto B57795c;
case 0x577962:goto L577962;
case 0x577966:c.instructions+=6;goto B577966;
case 0x577968:c.instructions+=5;goto B577968;
case 0x577969:c.instructions+=4;goto B577969;
case 0x57796d:c.instructions+=3;goto B57796d;
case 0x57796e:c.instructions+=2;goto B57796e;
case 0x577970:c.instructions+=1;goto B577970;
case 0x577975:goto L577975;
case 0x577979:c.instructions+=9;goto B577979;
case 0x57797d:c.instructions+=8;goto B57797d;
case 0x577981:c.instructions+=7;goto B577981;
case 0x577986:c.instructions+=6;goto B577986;
case 0x577988:c.instructions+=5;goto B577988;
case 0x57798c:c.instructions+=4;goto B57798c;
case 0x577990:c.instructions+=3;goto B577990;
case 0x577994:c.instructions+=2;goto B577994;
case 0x577998:c.instructions+=1;goto B577998;
case 0x57799a:goto L57799a;
case 0x57799d:c.instructions+=1;goto B57799d;
case 0x5779a1:goto L5779a1;
case 0x5779a5:c.instructions+=9;goto B5779a5;
case 0x5779a7:c.instructions+=8;goto B5779a7;
case 0x5779a8:c.instructions+=7;goto B5779a8;
case 0x5779ac:c.instructions+=6;goto B5779ac;
case 0x5779b0:c.instructions+=5;goto B5779b0;
case 0x5779b2:c.instructions+=4;goto B5779b2;
case 0x5779b6:c.instructions+=3;goto B5779b6;
case 0x5779b9:c.instructions+=2;goto B5779b9;
case 0x5779ba:c.instructions+=1;goto B5779ba;
case 0x5779bf:goto L5779bf;
case 0x5779c3:c.instructions+=10;goto B5779c3;
case 0x5779c7:c.instructions+=9;goto B5779c7;
case 0x5779cb:c.instructions+=8;goto B5779cb;
case 0x5779cf:c.instructions+=7;goto B5779cf;
case 0x5779d3:c.instructions+=6;goto B5779d3;
case 0x5779d7:c.instructions+=5;goto B5779d7;
case 0x5779d8:c.instructions+=4;goto B5779d8;
case 0x5779dc:c.instructions+=3;goto B5779dc;
case 0x5779dd:c.instructions+=2;goto B5779dd;
case 0x5779e1:c.instructions+=1;goto B5779e1;
case 0x5779e6:goto L5779e6;
case 0x5779ea:c.instructions+=12;goto B5779ea;
case 0x5779ee:c.instructions+=11;goto B5779ee;
case 0x5779f2:c.instructions+=10;goto B5779f2;
case 0x5779f5:c.instructions+=9;goto B5779f5;
case 0x5779f9:c.instructions+=8;goto B5779f9;
case 0x5779fa:c.instructions+=7;goto B5779fa;
case 0x5779fc:c.instructions+=6;goto B5779fc;
case 0x577a00:c.instructions+=5;goto B577a00;
case 0x577a04:c.instructions+=4;goto B577a04;
case 0x577a08:c.instructions+=3;goto B577a08;
case 0x577a0c:c.instructions+=2;goto B577a0c;
case 0x577a10:c.instructions+=1;goto B577a10;
case 0x577a12:goto L577a12;
case 0x577a16:c.instructions+=8;goto B577a16;
case 0x577a1a:c.instructions+=7;goto B577a1a;
case 0x577a1d:c.instructions+=6;goto B577a1d;
case 0x577a21:c.instructions+=5;goto B577a21;
case 0x577a25:c.instructions+=4;goto B577a25;
case 0x577a26:c.instructions+=3;goto B577a26;
case 0x577a28:c.instructions+=2;goto B577a28;
case 0x577a2c:c.instructions+=1;goto B577a2c;
case 0x577a32:goto L577a32;
case 0x577a36:c.instructions+=3;goto B577a36;
case 0x577a38:c.instructions+=2;goto B577a38;
case 0x577a3b:c.instructions+=1;goto B577a3b;
case 0x577a40:goto L577a40;
case 0x577a41:c.instructions+=6;goto B577a41;
case 0x577a45:c.instructions+=5;goto B577a45;
case 0x577a46:c.instructions+=4;goto B577a46;
case 0x577a47:c.instructions+=3;goto B577a47;
case 0x577a49:c.instructions+=2;goto B577a49;
case 0x577a4a:c.instructions+=1;goto B577a4a;
case 0x577a50:goto L577a50;
case 0x577a55:c.instructions+=4;goto B577a55;
case 0x577a56:c.instructions+=3;goto B577a56;
case 0x577a58:c.instructions+=2;goto B577a58;
case 0x577a5e:c.instructions+=1;goto B577a5e;
case 0x577a60:goto L577a60;
case 0x577a61:c.instructions+=1;goto B577a61;
case 0x577a66:goto L577a66;
case 0x577a69:goto L577a69;
case 0x577a6b:c.instructions+=2;goto B577a6b;
case 0x577a6c:c.instructions+=1;goto B577a6c;
case 0x577a70:goto L577a70;
case 0x577a75:c.instructions+=4;goto B577a75;
case 0x577a77:c.instructions+=3;goto B577a77;
case 0x577a79:c.instructions+=2;goto B577a79;
case 0x577a7a:c.instructions+=1;goto B577a7a;
case 0x577a7f:goto L577a7f;
case 0x577a80:goto L577a80;
case 0x577a83:c.instructions+=3;goto B577a83;
case 0x577a85:c.instructions+=2;goto B577a85;
case 0x577a87:c.instructions+=1;goto B577a87;
case 0x577a89:goto L577a89;
case 0x577a8c:goto L577a8c;
case 0x577a8f:c.instructions+=3;goto B577a8f;
case 0x577a93:c.instructions+=2;goto B577a93;
case 0x577a96:c.instructions+=1;goto B577a96;
case 0x577a98:goto L577a98;
case 0x577a9b:goto L577a9b;
case 0x577a9f:c.instructions+=2;goto B577a9f;
case 0x577aa2:c.instructions+=1;goto B577aa2;
case 0x577ab0:goto L577ab0;
case 0x577ab4:c.instructions+=6;goto B577ab4;
case 0x577ab5:c.instructions+=5;goto B577ab5;
case 0x577ab9:c.instructions+=4;goto B577ab9;
case 0x577aba:c.instructions+=3;goto B577aba;
case 0x577abd:c.instructions+=2;goto B577abd;
case 0x577abf:c.instructions+=1;goto B577abf;
case 0x577ac1:goto L577ac1;
case 0x577ac6:goto L577ac6;
case 0x577ac7:c.instructions+=1;goto B577ac7;
case 0x577acc:goto L577acc;
case 0x577acf:c.instructions+=2;goto B577acf;
case 0x577ad1:c.instructions+=1;goto B577ad1;
case 0x577ad3:goto L577ad3;
case 0x577ad8:goto L577ad8;
case 0x577adb:c.instructions+=3;goto B577adb;
case 0x577adf:c.instructions+=2;goto B577adf;
case 0x577ae1:c.instructions+=1;goto B577ae1;
case 0x577ae3:goto L577ae3;
case 0x577ae8:c.instructions+=4;goto B577ae8;
case 0x577aea:c.instructions+=3;goto B577aea;
case 0x577aeb:c.instructions+=2;goto B577aeb;
case 0x577aec:c.instructions+=1;goto B577aec;
case 0x577aee:goto L577aee;
case 0x577af3:goto L577af3;
case 0x577af8:c.instructions+=2;goto B577af8;
case 0x577afa:c.instructions+=1;goto B577afa;
case 0x577afc:goto L577afc;
case 0x577b01:goto L577b01;
case 0x577b06:goto L577b06;
case 0x577b0b:goto L577b0b;
case 0x577b10:goto L577b10;
case 0x577b16:c.instructions+=2;goto B577b16;
case 0x577b17:c.instructions+=1;goto B577b17;
case 0x577b1c:goto L577b1c;
case 0x577b23:c.instructions+=4;goto B577b23;
case 0x577b2a:c.instructions+=3;goto B577b2a;
case 0x577b2d:c.instructions+=2;goto B577b2d;
case 0x577b2f:c.instructions+=1;goto B577b2f;
case 0x577b35:goto L577b35;
case 0x577b36:c.instructions+=2;goto B577b36;
case 0x577b37:c.instructions+=1;goto B577b37;
case 0x577b38:goto L577b38;
case 0x577b3a:c.instructions+=3;goto B577b3a;
case 0x577b3c:c.instructions+=2;goto B577b3c;
case 0x577b3e:c.instructions+=1;goto B577b3e;
case 0x577b40:goto L577b40;
case 0x577b42:c.instructions+=2;goto B577b42;
case 0x577b48:c.instructions+=1;goto B577b48;
case 0x577b4a:goto L577b4a;
case 0x577b4b:c.instructions+=2;goto B577b4b;
case 0x577b4e:c.instructions+=1;goto B577b4e;
case 0x577b4f:goto L577b4f;
case 0x577b53:c.instructions+=5;goto B577b53;
case 0x577b56:c.instructions+=4;goto B577b56;
case 0x577b5a:c.instructions+=3;goto B577b5a;
case 0x577b5b:c.instructions+=2;goto B577b5b;
case 0x577b5d:c.instructions+=1;goto B577b5d;
case 0x577b5f:goto L577b5f;
case 0x577b62:c.instructions+=2;goto B577b62;
case 0x577b64:c.instructions+=1;goto B577b64;
case 0x577b66:goto L577b66;
case 0x577b6b:c.instructions+=1;goto B577b6b;
case 0x577b6d:goto L577b6d;
case 0x577b6f:c.instructions+=1;goto B577b6f;
case 0x577b75:goto L577b75;
case 0x577b78:c.instructions+=2;goto B577b78;
case 0x577b7a:c.instructions+=1;goto B577b7a;
case 0x577b80:goto L577b80;
case 0x577b82:c.instructions+=2;goto B577b82;
case 0x577b88:c.instructions+=1;goto B577b88;
case 0x577b8a:goto L577b8a;
case 0x577b8b:c.instructions+=2;goto B577b8b;
case 0x577b8e:c.instructions+=1;goto B577b8e;
case 0x577b8f:goto L577b8f;
case 0x577b93:c.instructions+=3;goto B577b93;
case 0x577b95:c.instructions+=2;goto B577b95;
case 0x577b9a:c.instructions+=1;goto B577b9a;
case 0x577ba0:goto L577ba0;
case 0x577ba2:c.instructions+=1;goto B577ba2;
case 0x577ba4:goto L577ba4;
case 0x577ba7:c.instructions+=2;goto B577ba7;
case 0x577bac:c.instructions+=1;goto B577bac;
case 0x577bae:goto L577bae;
case 0x577bb3:c.instructions+=9;goto B577bb3;
case 0x577bb4:c.instructions+=8;goto B577bb4;
case 0x577bb7:c.instructions+=7;goto B577bb7;
case 0x577bb8:c.instructions+=6;goto B577bb8;
case 0x577bbb:c.instructions+=5;goto B577bbb;
case 0x577bc0:c.instructions+=4;goto B577bc0;
case 0x577bc7:c.instructions+=3;goto B577bc7;
case 0x577bcc:c.instructions+=2;goto B577bcc;
case 0x577bcd:c.instructions+=1;goto B577bcd;
case 0x577bd2:goto L577bd2;
case 0x577bd5:goto L577bd5;
case 0x577bda:goto L577bda;
case 0x577bdc:c.instructions+=2;goto B577bdc;
case 0x577bde:c.instructions+=1;goto B577bde;
case 0x577be0:goto L577be0;
case 0x577be1:c.instructions+=1;goto B577be1;
case 0x577be6:goto L577be6;
case 0x577be9:c.instructions+=2;goto B577be9;
case 0x577beb:c.instructions+=1;goto B577beb;
case 0x577bed:goto L577bed;
case 0x577bf0:c.instructions+=2;goto B577bf0;
case 0x577bf1:c.instructions+=1;goto B577bf1;
case 0x577bf3:goto L577bf3;
case 0x577bf6:c.instructions+=2;goto B577bf6;
case 0x577bf8:c.instructions+=1;goto B577bf8;
case 0x577bfa:goto L577bfa;
case 0x577bff:goto L577bff;
case 0x577c00:c.instructions+=2;goto B577c00;
case 0x577c01:c.instructions+=1;goto B577c01;
case 0x577c07:goto L577c07;
case 0x577c0e:goto L577c0e;
case 0x577c10:c.instructions+=1;goto B577c10;
case 0x577c16:goto L577c16;
case 0x577c17:c.instructions+=2;goto B577c17;
case 0x577c18:c.instructions+=1;goto B577c18;
case 0x577c19:goto L577c19;
case 0x577c1e:c.instructions+=3;goto B577c1e;
case 0x577c20:c.instructions+=2;goto B577c20;
case 0x577c21:c.instructions+=1;goto B577c21;
case 0x577c23:goto L577c23;
case 0x577c28:goto L577c28;
case 0x577c2d:c.instructions+=2;goto B577c2d;
case 0x577c2f:c.instructions+=1;goto B577c2f;
case 0x577c31:goto L577c31;
case 0x577c36:goto L577c36;
case 0x577c3b:goto L577c3b;
case 0x577c41:c.instructions+=1;goto B577c41;
case 0x577c46:goto L577c46;
case 0x577c4b:c.instructions+=1;goto B577c4b;
case 0x577c50:goto L577c50;
case 0x577c52:c.instructions+=2;goto B577c52;
case 0x577c53:c.instructions+=1;goto B577c53;
case 0x577c55:goto L577c55;
case 0x577c58:c.instructions+=2;goto B577c58;
case 0x577c5a:c.instructions+=1;goto B577c5a;
case 0x577c5c:goto L577c5c;
case 0x577c5f:c.instructions+=2;goto B577c5f;
case 0x577c65:c.instructions+=1;goto B577c65;
case 0x577c67:goto L577c67;
case 0x577c69:goto L577c69;
case 0x577c6f:c.instructions+=1;goto B577c6f;
case 0x577c70:goto L577c70;
case 0x577c74:c.instructions+=10;goto B577c74;
case 0x577c78:c.instructions+=9;goto B577c78;
case 0x577c7b:c.instructions+=8;goto B577c7b;
case 0x577c7c:c.instructions+=7;goto B577c7c;
case 0x577c7e:c.instructions+=6;goto B577c7e;
case 0x577c7f:c.instructions+=5;goto B577c7f;
case 0x577c80:c.instructions+=4;goto B577c80;
case 0x577c82:c.instructions+=3;goto B577c82;
case 0x577c84:c.instructions+=2;goto B577c84;
case 0x577c85:c.instructions+=1;goto B577c85;
case 0x577c87:goto L577c87;
case 0x577c89:c.instructions+=1;goto B577c89;
case 0x577c8b:goto L577c8b;
case 0x577c8d:c.instructions+=6;goto B577c8d;
case 0x577c8f:c.instructions+=5;goto B577c8f;
case 0x577c91:c.instructions+=4;goto B577c91;
case 0x577c92:c.instructions+=3;goto B577c92;
case 0x577c93:c.instructions+=2;goto B577c93;
case 0x577c95:c.instructions+=1;goto B577c95;
case 0x577c9a:goto L577c9a;
case 0x577c9e:c.instructions+=6;goto B577c9e;
case 0x577ca1:c.instructions+=5;goto B577ca1;
case 0x577ca4:c.instructions+=4;goto B577ca4;
case 0x577ca6:c.instructions+=3;goto B577ca6;
case 0x577cae:c.instructions+=2;goto B577cae;
case 0x577cb0:c.instructions+=1;goto B577cb0;
case 0x577cb2:goto L577cb2;
case 0x577cb5:c.instructions+=1;goto B577cb5;
case 0x577cb7:goto L577cb7;
case 0x577cbb:c.instructions+=10;goto B577cbb;
case 0x577cbe:c.instructions+=9;goto B577cbe;
case 0x577cc0:c.instructions+=8;goto B577cc0;
case 0x577cc3:c.instructions+=7;goto B577cc3;
case 0x577cc4:c.instructions+=6;goto B577cc4;
case 0x577cc6:c.instructions+=5;goto B577cc6;
case 0x577cc7:c.instructions+=4;goto B577cc7;
case 0x577cca:c.instructions+=3;goto B577cca;
case 0x577ccb:c.instructions+=2;goto B577ccb;
case 0x577ccd:c.instructions+=1;goto B577ccd;
case 0x577cd2:goto L577cd2;
case 0x577cd5:c.instructions+=2;goto B577cd5;
case 0x577cd7:c.instructions+=1;goto B577cd7;
case 0x577cd9:goto L577cd9;
case 0x577cdd:goto L577cdd;
case 0x577ce0:c.instructions+=4;goto B577ce0;
case 0x577ce4:c.instructions+=3;goto B577ce4;
case 0x577ce7:c.instructions+=2;goto B577ce7;
case 0x577ce9:c.instructions+=1;goto B577ce9;
case 0x577ceb:goto L577ceb;
case 0x577cef:c.instructions+=2;goto B577cef;
case 0x577cf1:c.instructions+=1;goto B577cf1;
case 0x577cf3:goto L577cf3;
case 0x577cf7:c.instructions+=4;goto B577cf7;
case 0x577cf8:c.instructions+=3;goto B577cf8;
case 0x577cf9:c.instructions+=2;goto B577cf9;
case 0x577cfa:c.instructions+=1;goto B577cfa;
case 0x577cff:goto L577cff;
case 0x577d02:goto L577d02;
case 0x577d03:c.instructions+=6;goto B577d03;
case 0x577d04:c.instructions+=5;goto B577d04;
case 0x577d05:c.instructions+=4;goto B577d05;
case 0x577d07:c.instructions+=3;goto B577d07;
case 0x577d08:c.instructions+=2;goto B577d08;
case 0x577d0b:c.instructions+=1;goto B577d0b;
case 0x577d0c:goto L577d0c;
case 0x577d10:c.instructions+=4;goto B577d10;
case 0x577d14:c.instructions+=3;goto B577d14;
case 0x577d15:c.instructions+=2;goto B577d15;
case 0x577d16:c.instructions+=1;goto B577d16;
case 0x577d1b:goto L577d1b;
case 0x577d1d:c.instructions+=7;goto B577d1d;
case 0x577d1f:c.instructions+=6;goto B577d1f;
case 0x577d21:c.instructions+=5;goto B577d21;
case 0x577d22:c.instructions+=4;goto B577d22;
case 0x577d23:c.instructions+=3;goto B577d23;
case 0x577d24:c.instructions+=2;goto B577d24;
case 0x577d26:c.instructions+=1;goto B577d26;
case 0x577d2b:goto L577d2b;
case 0x577d2c:c.instructions+=2;goto B577d2c;
case 0x577d2d:c.instructions+=1;goto B577d2d;
case 0x577d32:goto L577d32;
case 0x577d36:c.instructions+=4;goto B577d36;
case 0x577d37:c.instructions+=3;goto B577d37;
case 0x577d38:c.instructions+=2;goto B577d38;
case 0x577d39:c.instructions+=1;goto B577d39;
case 0x577d3e:goto L577d3e;
case 0x577d42:c.instructions+=4;goto B577d42;
case 0x577d43:c.instructions+=3;goto B577d43;
case 0x577d44:c.instructions+=2;goto B577d44;
case 0x577d45:c.instructions+=1;goto B577d45;
case 0x577d4a:goto L577d4a;
case 0x577d4d:c.instructions+=4;goto B577d4d;
case 0x577d4e:c.instructions+=3;goto B577d4e;
case 0x577d4f:c.instructions+=2;goto B577d4f;
case 0x577d50:c.instructions+=1;goto B577d50;
case 0x577d55:goto L577d55;
case 0x577d56:c.instructions+=1;goto B577d56;
case 0x577d5b:goto L577d5b;
case 0x577d5f:c.instructions+=12;goto B577d5f;
case 0x577d63:c.instructions+=11;goto B577d63;
case 0x577d67:c.instructions+=10;goto B577d67;
case 0x577d6a:c.instructions+=9;goto B577d6a;
case 0x577d6c:c.instructions+=8;goto B577d6c;
case 0x577d6e:c.instructions+=7;goto B577d6e;
case 0x577d6f:c.instructions+=6;goto B577d6f;
case 0x577d70:c.instructions+=5;goto B577d70;
case 0x577d71:c.instructions+=4;goto B577d71;
case 0x577d73:c.instructions+=3;goto B577d73;
case 0x577d74:c.instructions+=2;goto B577d74;
case 0x577d77:c.instructions+=1;goto B577d77;
case 0x577d80:goto L577d80;
case 0x577d81:c.instructions+=4;goto B577d81;
case 0x577d83:c.instructions+=3;goto B577d83;
case 0x577d89:c.instructions+=2;goto B577d89;
case 0x577d8b:c.instructions+=1;goto B577d8b;
case 0x577d8d:goto L577d8d;
case 0x577d8e:c.instructions+=1;goto B577d8e;
case 0x577d93:goto L577d93;
case 0x577d96:goto L577d96;
case 0x577d9c:c.instructions+=2;goto B577d9c;
case 0x577d9e:c.instructions+=1;goto B577d9e;
case 0x577da0:goto L577da0;
case 0x577da6:c.instructions+=5;goto B577da6;
case 0x577da9:c.instructions+=4;goto B577da9;
case 0x577daa:c.instructions+=3;goto B577daa;
case 0x577dab:c.instructions+=2;goto B577dab;
case 0x577dac:c.instructions+=1;goto B577dac;
case 0x577db1:goto L577db1;
case 0x577db4:c.instructions+=3;goto B577db4;
case 0x577db7:c.instructions+=2;goto B577db7;
case 0x577db9:c.instructions+=1;goto B577db9;
case 0x577dbb:goto L577dbb;
case 0x577dc1:c.instructions+=2;goto B577dc1;
case 0x577dc3:c.instructions+=1;goto B577dc3;
case 0x577dc5:goto L577dc5;
case 0x577dc6:c.instructions+=1;goto B577dc6;
case 0x577dcb:goto L577dcb;
case 0x577dce:c.instructions+=1;goto B577dce;
case 0x577dd8:goto L577dd8;
case 0x577dd9:c.instructions+=1;goto B577dd9;
case 0x577de0:goto L577de0;
case 0x577de1:c.instructions+=4;goto B577de1;
case 0x577de3:c.instructions+=3;goto B577de3;
case 0x577de9:c.instructions+=2;goto B577de9;
case 0x577deb:c.instructions+=1;goto B577deb;
case 0x577df1:goto L577df1;
case 0x577df7:c.instructions+=2;goto B577df7;
case 0x577df9:c.instructions+=1;goto B577df9;
case 0x577dff:goto L577dff;
case 0x577e03:c.instructions+=3;goto B577e03;
case 0x577e04:c.instructions+=2;goto B577e04;
case 0x577e05:c.instructions+=1;goto B577e05;
case 0x577e07:goto L577e07;
case 0x577e0d:c.instructions+=2;goto B577e0d;
case 0x577e0f:c.instructions+=1;goto B577e0f;
case 0x577e11:goto L577e11;
case 0x577e12:c.instructions+=1;goto B577e12;
case 0x577e17:goto L577e17;
case 0x577e1a:c.instructions+=2;goto B577e1a;
case 0x577e1c:c.instructions+=1;goto B577e1c;
case 0x577e1e:goto L577e1e;
case 0x577e21:c.instructions+=4;goto B577e21;
case 0x577e23:c.instructions+=3;goto B577e23;
case 0x577e29:c.instructions+=2;goto B577e29;
case 0x577e33:c.instructions+=1;goto B577e33;
case 0x577e35:goto L577e35;
case 0x577e37:c.instructions+=2;goto B577e37;
case 0x577e39:c.instructions+=1;goto B577e39;
case 0x577e3e:goto L577e3e;
case 0x577e44:c.instructions+=3;goto B577e44;
case 0x577e45:c.instructions+=2;goto B577e45;
case 0x577e46:c.instructions+=1;goto B577e46;
case 0x577e4b:goto L577e4b;
case 0x577e4e:goto L577e4e;
case 0x577e4f:c.instructions+=1;goto B577e4f;
case 0x577e54:goto L577e54;
case 0x577e57:goto L577e57;
case 0x577e5d:c.instructions+=8;goto B577e5d;
case 0x577e63:c.instructions+=7;goto B577e63;
case 0x577e64:c.instructions+=6;goto B577e64;
case 0x577e65:c.instructions+=5;goto B577e65;
case 0x577e6b:c.instructions+=4;goto B577e6b;
case 0x577e71:c.instructions+=3;goto B577e71;
case 0x577e72:c.instructions+=2;goto B577e72;
case 0x577e73:c.instructions+=1;goto B577e73;
case 0x577e78:goto L577e78;
case 0x577e7b:c.instructions+=3;goto B577e7b;
case 0x577e7e:c.instructions+=2;goto B577e7e;
case 0x577e80:c.instructions+=1;goto B577e80;
case 0x577e82:goto L577e82;
case 0x577e85:c.instructions+=1;goto B577e85;
case 0x577e87:goto L577e87;
case 0x577e89:c.instructions+=1;goto B577e89;
case 0x577e8e:goto L577e8e;
case 0x577e94:goto L577e94;
case 0x577e95:c.instructions+=2;goto B577e95;
case 0x577e9f:c.instructions+=1;goto B577e9f;
case 0x577ea0:goto L577ea0;
case 0x577ea1:c.instructions+=1;goto B577ea1;
case 0x577eb0:goto L577eb0;
case 0x577eb1:c.instructions+=5;goto B577eb1;
case 0x577eb2:c.instructions+=4;goto B577eb2;
case 0x577eb8:c.instructions+=3;goto B577eb8;
case 0x577eb9:c.instructions+=2;goto B577eb9;
case 0x577ebe:c.instructions+=1;goto B577ebe;
case 0x577ec3:goto L577ec3;
case 0x577ec5:c.instructions+=2;goto B577ec5;
case 0x577ec7:c.instructions+=1;goto B577ec7;
case 0x577ec9:goto L577ec9;
case 0x577ecd:c.instructions+=1;goto B577ecd;
case 0x577ed0:goto L577ed0;
case 0x577ed3:c.instructions+=3;goto B577ed3;
case 0x577ed4:c.instructions+=2;goto B577ed4;
case 0x577ed5:c.instructions+=1;goto B577ed5;
case 0x577eda:goto L577eda;
case 0x577edd:c.instructions+=2;goto B577edd;
case 0x577edf:c.instructions+=1;goto B577edf;
case 0x577ee1:goto L577ee1;
case 0x577ee4:c.instructions+=2;goto B577ee4;
case 0x577ee6:c.instructions+=1;goto B577ee6;
case 0x577ee8:goto L577ee8;
case 0x577ee9:c.instructions+=4;goto B577ee9;
case 0x577eea:c.instructions+=3;goto B577eea;
case 0x577eec:c.instructions+=2;goto B577eec;
case 0x577eed:c.instructions+=1;goto B577eed;
case 0x577eee:goto L577eee;
case 0x577eef:c.instructions+=4;goto B577eef;
case 0x577ef1:c.instructions+=3;goto B577ef1;
case 0x577ef2:c.instructions+=2;goto B577ef2;
case 0x577ef3:c.instructions+=1;goto B577ef3;
case 0x577f00:goto L577f00;
case 0x577f05:c.instructions+=3;goto B577f05;
case 0x577f07:c.instructions+=2;goto B577f07;
case 0x577f0c:c.instructions+=1;goto B577f0c;
case 0x577f0e:goto L577f0e;
case 0x577f13:goto L577f13;
case 0x577f18:c.instructions+=2;goto B577f18;
case 0x577f1a:c.instructions+=1;goto B577f1a;
case 0x577f1c:goto L577f1c;
case 0x577f21:c.instructions+=2;goto B577f21;
case 0x577f23:c.instructions+=1;goto B577f23;
case 0x577f25:goto L577f25;
case 0x577f2c:goto L577f2c;
case 0x577f36:c.instructions+=2;goto B577f36;
case 0x577f40:c.instructions+=1;goto B577f40;
case 0x577f41:goto L577f41;
case 0x577f46:goto L577f46;
case 0x577f48:c.instructions+=1;goto B577f48;
case 0x577f4a:goto L577f4a;
case 0x577f4f:c.instructions+=1;goto B577f4f;
case 0x577f54:goto L577f54;
case 0x577f56:goto L577f56;
case 0x577f5b:c.instructions+=1;goto B577f5b;
case 0x577f60:goto L577f60;
case 0x577f63:c.instructions+=7;goto B577f63;
case 0x577f6a:c.instructions+=6;goto B577f6a;
case 0x577f6b:c.instructions+=5;goto B577f6b;
case 0x577f6d:c.instructions+=4;goto B577f6d;
case 0x577f6f:c.instructions+=3;goto B577f6f;
case 0x577f74:c.instructions+=2;goto B577f74;
case 0x577f78:c.instructions+=1;goto B577f78;
case 0x577f7d:goto L577f7d;
case 0x577f7f:c.instructions+=1;goto B577f7f;
case 0x577f81:goto L577f81;
case 0x577f84:c.instructions+=1;goto B577f84;
case 0x577f86:goto L577f86;
case 0x577f88:c.instructions+=2;goto B577f88;
case 0x577f8d:c.instructions+=1;goto B577f8d;
case 0x577f92:goto L577f92;
case 0x577f94:c.instructions+=1;goto B577f94;
case 0x577f9a:goto L577f9a;
case 0x577f9d:c.instructions+=1;goto B577f9d;
case 0x577fa3:goto L577fa3;
case 0x577fa4:c.instructions+=6;goto B577fa4;
case 0x577fa5:c.instructions+=5;goto B577fa5;
case 0x577fa6:c.instructions+=4;goto B577fa6;
case 0x577fa9:c.instructions+=3;goto B577fa9;
case 0x577fab:c.instructions+=2;goto B577fab;
case 0x577fae:c.instructions+=1;goto B577fae;
case 0x577fb3:goto L577fb3;
case 0x577fb5:c.instructions+=6;goto B577fb5;
case 0x577fb7:c.instructions+=5;goto B577fb7;
case 0x577fbb:c.instructions+=4;goto B577fbb;
case 0x577fc0:c.instructions+=3;goto B577fc0;
case 0x577fc2:c.instructions+=2;goto B577fc2;
case 0x577fc8:c.instructions+=1;goto B577fc8;
case 0x577fcd:goto L577fcd;
case 0x577fcf:c.instructions+=3;goto B577fcf;
case 0x577fd1:c.instructions+=2;goto B577fd1;
case 0x577fd3:c.instructions+=1;goto B577fd3;
case 0x577fd5:goto L577fd5;
case 0x577fd6:c.instructions+=2;goto B577fd6;
case 0x577fdb:c.instructions+=1;goto B577fdb;
case 0x577fe0:goto L577fe0;
case 0x577fe3:c.instructions+=3;goto B577fe3;
case 0x577fe4:c.instructions+=2;goto B577fe4;
case 0x577fe6:c.instructions+=1;goto B577fe6;
case 0x577feb:goto L577feb;
case 0x577fed:goto L577fed;
case 0x577fee:c.instructions+=4;goto B577fee;
case 0x577ff2:c.instructions+=3;goto B577ff2;
case 0x577ff7:c.instructions+=2;goto B577ff7;
case 0x577ff8:c.instructions+=1;goto B577ff8;
case 0x577ffd:goto L577ffd;
case 0x577fff:c.instructions+=1;goto B577fff;
default:missing_instruction(c.pc);}
B577000:L577000:{c.instructions+=2;NFSU2_TR(0x577000);
w4(R+0,u32(0x7a0650ull));
}
B577005:{NFSU2_TR(0x577005);
{goto L577018;}
}
B577007:L577007:{c.instructions+=3;NFSU2_TR(0x577007);
u8 U[6];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B57700c:{NFSU2_TR(0x57700c);
w4(R+0,u32(0x7a0648ull));
}
B577011:{NFSU2_TR(0x577011);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L577018;}}
}
B577013:L577013:{c.instructions+=1;NFSU2_TR(0x577013);
w4(R+0,u32(0x7a0640ull));
}
B577018:L577018:{c.instructions+=3;NFSU2_TR(0x577018);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577019:{NFSU2_TR(0x577019);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57701a:{NFSU2_TR(0x57701a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57701full));
TAIL_STATIC(0x43dbd0u,43d);
}
B57701f:L57701f:{c.instructions+=5;NFSU2_TR(0x57701f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B577022:{NFSU2_TR(0x577022);
__builtin_memmove((R+4),(R+20),4);
}
B577024:{NFSU2_TR(0x577024);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577027:{NFSU2_TR(0x577027);
w4(R+28,u32(0x2ull));
}
B57702c:{NFSU2_TR(0x57702c);
__builtin_memmove((R+16),(R+16),4);
}
B577030:L577030:{c.instructions+=6;NFSU2_TR(0x577030);
__builtin_memmove((R+0),(R+4),4);
}
B577032:{NFSU2_TR(0x577032);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B577033:{NFSU2_TR(0x577033);
w4(R+20,u32(0xaull));
}
B577038:{NFSU2_TR(0x577038);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x577038);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x577038);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B57703a:{NFSU2_TR(0x57703a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57703c:{NFSU2_TR(0x57703c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L577047;}}
}
B57703e:L57703e:{c.instructions+=2;NFSU2_TR(0x57703e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B577040:{NFSU2_TR(0x577040);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L577047;}}
}
B577042:L577042:{c.instructions+=2;NFSU2_TR(0x577042);
u8 U[1];
w1(U+0,u8(0x20ull));
s1(u32(r4(R+24)),r1(U+0));
}
B577045:{NFSU2_TR(0x577045);
{goto L57704c;}
}
B577047:L577047:{c.instructions+=2;NFSU2_TR(0x577047);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x30ull))));
}
B57704a:{NFSU2_TR(0x57704a);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B57704c:L57704c:{c.instructions+=4;NFSU2_TR(0x57704c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B57704d:{NFSU2_TR(0x57704d);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B57704e:{NFSU2_TR(0x57704e);
__builtin_memmove((R+4),(R+0),4);
}
B577050:{NFSU2_TR(0x577050);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577030u);}goto L577030;}}
}
B577052:L577052:{c.instructions+=4;NFSU2_TR(0x577052);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577056:{NFSU2_TR(0x577056);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B577059:{NFSU2_TR(0x577059);
w4(R+24,u32(0x2ull));
}
B57705e:{NFSU2_TR(0x57705e);
__builtin_memmove((R+28),(R+28),4);
}
B577060:L577060:{c.instructions+=8;NFSU2_TR(0x577060);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B577061:{NFSU2_TR(0x577061);
w4(R+28,u32(0xaull));
}
B577066:{NFSU2_TR(0x577066);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x577066);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x577066);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B577068:{NFSU2_TR(0x577068);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x30ull))));
}
B57706b:{NFSU2_TR(0x57706b);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B57706d:{NFSU2_TR(0x57706d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B57706e:{NFSU2_TR(0x57706e);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B57706f:{NFSU2_TR(0x57706f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577060u);}goto L577060;}}
}
B577071:L577071:{c.instructions+=4;NFSU2_TR(0x577071);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577075:{NFSU2_TR(0x577075);
__builtin_memmove((R+24),(R+0),4);
}
B577077:{NFSU2_TR(0x577077);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B57707a:{NFSU2_TR(0x57707a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L577084;}}
}
B57707c:L57707c:{c.instructions+=2;NFSU2_TR(0x57707c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57707e:{NFSU2_TR(0x57707e);
if(r1(R+518)){{goto L57715a;}}
}
B577084:L577084:{c.instructions+=2;NFSU2_TR(0x577084);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x9ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B577089:{NFSU2_TR(0x577089);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57715a;}}
}
B57708f:L57708f:{c.instructions+=2;NFSU2_TR(0x57708f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577090:{NFSU2_TR(0x577090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577095ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B577095:L577095:{c.instructions+=5;NFSU2_TR(0x577095);
__builtin_memmove((R+28),(R+0),4);
}
B577097:{NFSU2_TR(0x577097);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57709b:{NFSU2_TR(0x57709b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57709c:{NFSU2_TR(0x57709c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57709d:{NFSU2_TR(0x57709d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5770a2ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5770a2:L5770a2:{c.instructions+=4;NFSU2_TR(0x5770a2);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5770a6:{NFSU2_TR(0x5770a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5770a9:{NFSU2_TR(0x5770a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5770ab:{NFSU2_TR(0x5770ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5770b2;}}
}
B5770ad:L5770ad:{c.instructions+=1;NFSU2_TR(0x5770ad);
u8 U[13];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5770b2:L5770b2:{c.instructions+=5;NFSU2_TR(0x5770b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5770b6:{NFSU2_TR(0x5770b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5770b7:{NFSU2_TR(0x5770b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5770ba:{NFSU2_TR(0x5770ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5770bb:{NFSU2_TR(0x5770bb);
{goto L577152;}
}
B5770c0:L5770c0:{c.instructions+=2;NFSU2_TR(0x5770c0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5770c3:{NFSU2_TR(0x5770c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5770df;}}
}
B5770c5:L5770c5:{c.instructions+=2;NFSU2_TR(0x5770c5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5770c8:{NFSU2_TR(0x5770c8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5770df;}}
}
B5770ca:L5770ca:{c.instructions+=2;NFSU2_TR(0x5770ca);
u8 U[6];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5770cf:{NFSU2_TR(0x5770cf);
if(r1(R+518)){{goto L5770d8;}}
}
B5770d1:L5770d1:{c.instructions+=2;NFSU2_TR(0x5770d1);
w4(R+0,u32(0x7a0638ull));
}
B5770d6:{NFSU2_TR(0x5770d6);
{goto L5770f0;}
}
B5770d8:L5770d8:{c.instructions+=2;NFSU2_TR(0x5770d8);
w4(R+0,u32(0x7a0630ull));
}
B5770dd:{NFSU2_TR(0x5770dd);
{goto L5770f0;}
}
B5770df:L5770df:{c.instructions+=3;NFSU2_TR(0x5770df);
u8 U[6];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5770e4:{NFSU2_TR(0x5770e4);
w4(R+0,u32(0x7a0628ull));
}
B5770e9:{NFSU2_TR(0x5770e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5770f0;}}
}
B5770eb:L5770eb:{c.instructions+=1;NFSU2_TR(0x5770eb);
w4(R+0,u32(0x7a0620ull));
}
B5770f0:L5770f0:{c.instructions+=3;NFSU2_TR(0x5770f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5770f1:{NFSU2_TR(0x5770f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5770f2:{NFSU2_TR(0x5770f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5770f7ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5770f7:L5770f7:{c.instructions+=4;NFSU2_TR(0x5770f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5770fb:{NFSU2_TR(0x5770fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5770fe:{NFSU2_TR(0x5770fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B577101:{NFSU2_TR(0x577101);
w4(R+24,u32(0x2ull));
}
B577106:L577106:{c.instructions+=8;NFSU2_TR(0x577106);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B577107:{NFSU2_TR(0x577107);
w4(R+28,u32(0xaull));
}
B57710c:{NFSU2_TR(0x57710c);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x57710c);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x57710c);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B57710e:{NFSU2_TR(0x57710e);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x30ull))));
}
B577111:{NFSU2_TR(0x577111);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B577113:{NFSU2_TR(0x577113);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B577114:{NFSU2_TR(0x577114);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B577115:{NFSU2_TR(0x577115);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577106u);}goto L577106;}}
}
B577117:L577117:{c.instructions+=4;NFSU2_TR(0x577117);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57711b:{NFSU2_TR(0x57711b);
__builtin_memmove((R+24),(R+0),4);
}
B57711d:{NFSU2_TR(0x57711d);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B577120:{NFSU2_TR(0x577120);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L577126;}}
}
B577122:L577122:{c.instructions+=2;NFSU2_TR(0x577122);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B577124:{NFSU2_TR(0x577124);
if(r1(R+518)){{goto L57715a;}}
}
B577126:L577126:{c.instructions+=2;NFSU2_TR(0x577126);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577127:{NFSU2_TR(0x577127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57712cull));
TAIL_STATIC(0x43dbb0u,43d);
}
B57712c:L57712c:{c.instructions+=5;NFSU2_TR(0x57712c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B577130:{NFSU2_TR(0x577130);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577131:{NFSU2_TR(0x577131);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577132:{NFSU2_TR(0x577132);
__builtin_memmove((R+28),(R+0),4);
}
B577134:{NFSU2_TR(0x577134);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577139ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B577139:L577139:{c.instructions+=4;NFSU2_TR(0x577139);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57713d:{NFSU2_TR(0x57713d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B577140:{NFSU2_TR(0x577140);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B577142:{NFSU2_TR(0x577142);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L577149;}}
}
B577144:L577144:{c.instructions+=1;NFSU2_TR(0x577144);
u8 U[13];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B577149:L577149:{c.instructions+=4;NFSU2_TR(0x577149);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57714d:{NFSU2_TR(0x57714d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57714e:{NFSU2_TR(0x57714e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B577151:{NFSU2_TR(0x577151);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577152:L577152:{c.instructions+=1;NFSU2_TR(0x577152);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577157ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B577157:L577157:{c.instructions+=1;NFSU2_TR(0x577157);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57715a:L57715a:{c.instructions+=2;NFSU2_TR(0x57715a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57715c:{NFSU2_TR(0x57715c);
if(r1(R+518)){{goto L577169;}}
}
B57715e:L57715e:{c.instructions+=7;NFSU2_TR(0x57715e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57715f:{NFSU2_TR(0x57715f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577160:{NFSU2_TR(0x577160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B577161:{NFSU2_TR(0x577161);
u8 U[1];
w1(U+0,u8(0x2dull));
s1(u32(r4(R+12)),r1(U+0));
}
B577164:{NFSU2_TR(0x577164);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B577165:{NFSU2_TR(0x577165);
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
B577168:{NFSU2_TR(0x577168);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577169:L577169:{c.instructions+=2;NFSU2_TR(0x577169);
u8 U[6];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B57716e:{NFSU2_TR(0x57716e);
if(r1(R+518)){{goto L577173;}}
}
B577170:L577170:{c.instructions+=1;NFSU2_TR(0x577170);
u8 U[1];
w1(U+0,u8(0x2bull));
s1(u32(r4(R+12)),r1(U+0));
}
B577173:L577173:{c.instructions+=6;NFSU2_TR(0x577173);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B577174:{NFSU2_TR(0x577174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577175:{NFSU2_TR(0x577175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B577176:{NFSU2_TR(0x577176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B577177:{NFSU2_TR(0x577177);
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
B57717a:{NFSU2_TR(0x57717a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5771b0:L5771b0:{c.instructions+=47;NFSU2_TR(0x5771b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5771b1:{NFSU2_TR(0x5771b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5771b3:{NFSU2_TR(0x5771b3);
w4(R+0,u32(0x10624dd3ull));
}
B5771b8:{NFSU2_TR(0x5771b8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5771ba:{NFSU2_TR(0x5771ba);
__builtin_memmove((R+4),(R+8),4);
}
B5771bc:{NFSU2_TR(0x5771bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B5771bf:{NFSU2_TR(0x5771bf);
__builtin_memmove((R+0),(R+4),4);
}
B5771c1:{NFSU2_TR(0x5771c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5771c4:{NFSU2_TR(0x5771c4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5771c6:{NFSU2_TR(0x5771c6);
__builtin_memmove((R+8),(R+4),4);
}
B5771c8:{NFSU2_TR(0x5771c8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0xfa0ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5771ce:{NFSU2_TR(0x5771ce);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B5771d0:{NFSU2_TR(0x5771d0);
w4(R+0,u32(0x91a2b3c5ull));
}
B5771d5:{NFSU2_TR(0x5771d5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5771db:{NFSU2_TR(0x5771db);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5771dd:{NFSU2_TR(0x5771dd);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5771df:{NFSU2_TR(0x5771df);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5771e2:{NFSU2_TR(0x5771e2);
__builtin_memmove((R+0),(R+8),4);
}
B5771e4:{NFSU2_TR(0x5771e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5771e7:{NFSU2_TR(0x5771e7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5771e9:{NFSU2_TR(0x5771e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5771ed:{NFSU2_TR(0x5771ed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5771ef:{NFSU2_TR(0x5771ef);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0xfffff1f0ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5771f5:{NFSU2_TR(0x5771f5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5771f7:{NFSU2_TR(0x5771f7);
w4(R+0,u32(0x88888889ull));
}
B5771fc:{NFSU2_TR(0x5771fc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5771fe:{NFSU2_TR(0x5771fe);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B577200:{NFSU2_TR(0x577200);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B577203:{NFSU2_TR(0x577203);
__builtin_memmove((R+0),(R+8),4);
}
B577205:{NFSU2_TR(0x577205);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B577208:{NFSU2_TR(0x577208);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B57720a:{NFSU2_TR(0x57720a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57720e:{NFSU2_TR(0x57720e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B577210:{NFSU2_TR(0x577210);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B577213:{NFSU2_TR(0x577213);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B577215:{NFSU2_TR(0x577215);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B577219:{NFSU2_TR(0x577219);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57721b:{NFSU2_TR(0x57721b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57721f:{NFSU2_TR(0x57721f);
w4(R+0,u32(0x10624dd3ull));
}
B577224:{NFSU2_TR(0x577224);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B577226:{NFSU2_TR(0x577226);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B577229:{NFSU2_TR(0x577229);
__builtin_memmove((R+0),(R+8),4);
}
B57722b:{NFSU2_TR(0x57722b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B57722e:{NFSU2_TR(0x57722e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+0)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B577230:{NFSU2_TR(0x577230);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B577232:{NFSU2_TR(0x577232);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577233:{NFSU2_TR(0x577233);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577240:L577240:{c.instructions+=7;NFSU2_TR(0x577240);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B577243:{NFSU2_TR(0x577243);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577244:{NFSU2_TR(0x577244);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577245:{NFSU2_TR(0x577245);
__builtin_memmove((R+28),(R+4),4);
}
B577247:{NFSU2_TR(0x577247);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B577249:{NFSU2_TR(0x577249);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57724b:{NFSU2_TR(0x57724b);
if(r1(R+518)){{goto L577255;}}
}
B57724d:L57724d:{c.instructions+=2;NFSU2_TR(0x57724d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B577253:{NFSU2_TR(0x577253);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L577277;}}
}
B577255:L577255:{c.instructions+=9;NFSU2_TR(0x577255);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577259:{NFSU2_TR(0x577259);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57725d:{NFSU2_TR(0x57725d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57725f:{NFSU2_TR(0x57725f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577261:{NFSU2_TR(0x577261);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577263:{NFSU2_TR(0x577263);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577265:{NFSU2_TR(0x577265);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577266:{NFSU2_TR(0x577266);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577267:{NFSU2_TR(0x577267);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57726cull));
TAIL_STATIC(0x576d30u,576);
}
B57726c:L57726c:{c.instructions+=5;NFSU2_TR(0x57726c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B57726f:{NFSU2_TR(0x57726f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B577270:{NFSU2_TR(0x577270);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577271:{NFSU2_TR(0x577271);
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
B577274:{NFSU2_TR(0x577274);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577277:L577277:{c.instructions+=2;NFSU2_TR(0x577277);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B577279:{NFSU2_TR(0x577279);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5772a0;}}
}
B57727b:L57727b:{c.instructions+=12;NFSU2_TR(0x57727b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57727f:{NFSU2_TR(0x57727f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577280:{NFSU2_TR(0x577280);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B577284:{NFSU2_TR(0x577284);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577285:{NFSU2_TR(0x577285);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B577289:{NFSU2_TR(0x577289);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57728a:{NFSU2_TR(0x57728a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57728e:{NFSU2_TR(0x57728e);
w4(R+24,u32(0-u32(r4(R+24))));
}
B577290:{NFSU2_TR(0x577290);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577291:{NFSU2_TR(0x577291);
__builtin_memmove((R+4),(R+28),4);
}
B577293:{NFSU2_TR(0x577293);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B577295:{NFSU2_TR(0x577295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57729aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5771b0u);}goto L5771b0;}
}
B57729a:L57729a:{c.instructions+=3;NFSU2_TR(0x57729a);
w4(R+24,u32(0-u32(r4(R+24))));
}
B57729c:{NFSU2_TR(0x57729c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B57729e:{NFSU2_TR(0x57729e);
{goto L5772bb;}
}
B5772a0:L5772a0:{c.instructions+=10;NFSU2_TR(0x5772a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5772a4:{NFSU2_TR(0x5772a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5772a5:{NFSU2_TR(0x5772a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5772a9:{NFSU2_TR(0x5772a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5772aa:{NFSU2_TR(0x5772aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5772ae:{NFSU2_TR(0x5772ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5772af:{NFSU2_TR(0x5772af);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5772b3:{NFSU2_TR(0x5772b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5772b4:{NFSU2_TR(0x5772b4);
__builtin_memmove((R+4),(R+28),4);
}
B5772b6:{NFSU2_TR(0x5772b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5772bbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5771b0u);}goto L5771b0;}
}
B5772bb:L5772bb:{c.instructions+=2;NFSU2_TR(0x5772bb);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x0ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B5772be:{NFSU2_TR(0x5772be);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5772c5;}}
}
B5772c0:L5772c0:{c.instructions+=1;NFSU2_TR(0x5772c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5772c5:L5772c5:{c.instructions+=19;NFSU2_TR(0x5772c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5772c9:{NFSU2_TR(0x5772c9);
w4(R+0,u32(0x66666667ull));
}
B5772ce:{NFSU2_TR(0x5772ce);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5772d0:{NFSU2_TR(0x5772d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5772d4:{NFSU2_TR(0x5772d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5772d7:{NFSU2_TR(0x5772d7);
__builtin_memmove((R+4),(R+8),4);
}
B5772d9:{NFSU2_TR(0x5772d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5772dc:{NFSU2_TR(0x5772dc);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5772de:{NFSU2_TR(0x5772de);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5772e2:{NFSU2_TR(0x5772e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5772e3:{NFSU2_TR(0x5772e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5772e7:{NFSU2_TR(0x5772e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5772e8:{NFSU2_TR(0x5772e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5772ec:{NFSU2_TR(0x5772ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5772ed:{NFSU2_TR(0x5772ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5772f1:{NFSU2_TR(0x5772f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5772f2:{NFSU2_TR(0x5772f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5772f3:{NFSU2_TR(0x5772f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5772f4:{NFSU2_TR(0x5772f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5772f9ull));
TAIL_STATIC(0x576d30u,576);
}
B5772f9:L5772f9:{c.instructions+=5;NFSU2_TR(0x5772f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5772fc:{NFSU2_TR(0x5772fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5772fd:{NFSU2_TR(0x5772fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5772fe:{NFSU2_TR(0x5772fe);
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
B577301:{NFSU2_TR(0x577301);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577310:L577310:{c.instructions+=6;NFSU2_TR(0x577310);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577311:{NFSU2_TR(0x577311);
__builtin_memmove((R+24),(R+4),4);
}
B577313:{NFSU2_TR(0x577313);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577314:{NFSU2_TR(0x577314);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B577316:{NFSU2_TR(0x577316);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B577318:{NFSU2_TR(0x577318);
if(r1(R+518)){{goto L57733d;}}
}
B57731a:L57731a:{c.instructions+=2;NFSU2_TR(0x57731a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B577320:{NFSU2_TR(0x577320);
if(r1(R+518)){{goto L577344;}}
}
B577322:L577322:{c.instructions+=3;NFSU2_TR(0x577322);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B577326:{NFSU2_TR(0x577326);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57732c:{NFSU2_TR(0x57732c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577331ull));
TAIL_STATIC(0x75bed4u,75b);
}
B577331:L577331:{c.instructions+=3;NFSU2_TR(0x577331);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
}
B577333:{NFSU2_TR(0x577333);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B577335:{NFSU2_TR(0x577335);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L577344;}}
}
B577337:L577337:{c.instructions+=1;NFSU2_TR(0x577337);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B57733d:L57733d:{c.instructions+=4;NFSU2_TR(0x57733d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57733e:{NFSU2_TR(0x57733e);
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
B577340:{NFSU2_TR(0x577340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577341:{NFSU2_TR(0x577341);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577344:L577344:{c.instructions+=3;NFSU2_TR(0x577344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B577346:{NFSU2_TR(0x577346);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B577348:{NFSU2_TR(0x577348);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57733du);}goto L57733d;}}
}
B57734a:L57734a:{c.instructions+=2;NFSU2_TR(0x57734a);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7fffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B577350:{NFSU2_TR(0x577350);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57733du);}goto L57733d;}}
}
B577352:L577352:{c.instructions+=4;NFSU2_TR(0x577352);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B577353:{NFSU2_TR(0x577353);
w4(R+0,u32(0x1ull));
}
B577358:{NFSU2_TR(0x577358);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577359:{NFSU2_TR(0x577359);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577360:L577360:{c.instructions+=6;NFSU2_TR(0x577360);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B577363:{NFSU2_TR(0x577363);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B577365:{NFSU2_TR(0x577365);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57736b:{NFSU2_TR(0x57736b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B57736f:{NFSU2_TR(0x57736f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B577373:{NFSU2_TR(0x577373);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577378ull));
TAIL_STATIC(0x75bed4u,75b);
}
B577378:L577378:{c.instructions+=7;NFSU2_TR(0x577378);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57737c:{NFSU2_TR(0x57737c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B577380:{NFSU2_TR(0x577380);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B577384:{NFSU2_TR(0x577384);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B577388:{NFSU2_TR(0x577388);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57738a:{NFSU2_TR(0x57738a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57738d:{NFSU2_TR(0x57738d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L577399;}}
}
B57738f:L57738f:{c.instructions+=2;NFSU2_TR(0x57738f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B577395:{NFSU2_TR(0x577395);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B577399:L577399:{c.instructions+=6;NFSU2_TR(0x577399);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57739d:{NFSU2_TR(0x57739d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5773a1:{NFSU2_TR(0x5773a1);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5773a7:{NFSU2_TR(0x5773a7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5773a9:{NFSU2_TR(0x5773a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5773ac:{NFSU2_TR(0x5773ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5773ba;}}
}
B5773ae:L5773ae:{c.instructions+=3;NFSU2_TR(0x5773ae);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5773b0:{NFSU2_TR(0x5773b0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5773b4:{NFSU2_TR(0x5773b4);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5773ba:L5773ba:{c.instructions+=4;NFSU2_TR(0x5773ba);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5773be:{NFSU2_TR(0x5773be);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5773c4:{NFSU2_TR(0x5773c4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5773c8:{NFSU2_TR(0x5773c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5773cdull));
TAIL_STATIC(0x75bed4u,75b);
}
B5773cd:L5773cd:{c.instructions+=6;NFSU2_TR(0x5773cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5773d1:{NFSU2_TR(0x5773d1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5773d5:{NFSU2_TR(0x5773d5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5773d9:{NFSU2_TR(0x5773d9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5773db:{NFSU2_TR(0x5773db);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5773de:{NFSU2_TR(0x5773de);
if(r1(R+514)){{goto L5773e6;}}
}
B5773e0:L5773e0:{c.instructions+=1;NFSU2_TR(0x5773e0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5773e6:L5773e6:{c.instructions+=3;NFSU2_TR(0x5773e6);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5773ec:{NFSU2_TR(0x5773ec);
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
B5773ef:{NFSU2_TR(0x5773ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577400:L577400:{c.instructions+=5;NFSU2_TR(0x577400);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577404:{NFSU2_TR(0x577404);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577405:{NFSU2_TR(0x577405);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577406:{NFSU2_TR(0x577406);
__builtin_memmove((R+24),(R+4),4);
}
B577408:{NFSU2_TR(0x577408);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57740dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577360u);}goto L577360;}
}
B57740d:L57740d:{c.instructions+=3;NFSU2_TR(0x57740d);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B577413:{NFSU2_TR(0x577413);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B577419:{NFSU2_TR(0x577419);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57741eull));
TAIL_STATIC(0x75bed4u,75b);
}
B57741e:L57741e:{c.instructions+=3;NFSU2_TR(0x57741e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B577420:{NFSU2_TR(0x577420);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577421:{NFSU2_TR(0x577421);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577430:L577430:{c.instructions+=9;NFSU2_TR(0x577430);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577431:{NFSU2_TR(0x577431);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577432:{NFSU2_TR(0x577432);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577437:{NFSU2_TR(0x577437);
u8 U[4];
w4(U+0,u32(0x570ab0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57743c:{NFSU2_TR(0x57743c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57743e:{NFSU2_TR(0x57743e);
__builtin_memmove((R+24),(R+4),4);
}
B577440:{NFSU2_TR(0x577440);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577442:{NFSU2_TR(0x577442);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577443:{NFSU2_TR(0x577443);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577448ull));
TAIL_STATIC(0x75c461u,75c);
}
B577448:L577448:{c.instructions+=9;NFSU2_TR(0x577448);
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
B57744a:{NFSU2_TR(0x57744a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57744d:{NFSU2_TR(0x57744d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577450:{NFSU2_TR(0x577450);
__builtin_memmove((R+28),(R+24),4);
}
B577452:{NFSU2_TR(0x577452);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B577456:{NFSU2_TR(0x577456);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x42700000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57745d:{NFSU2_TR(0x57745d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w4(U+4,u32(0xffff0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B577464:{NFSU2_TR(0x577464);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
w4(U+4,u32(0x40888889ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57746b:{NFSU2_TR(0x57746b);
w4(R+4,u32(0x10ull));
}
B577470:L577470:{c.instructions+=1;NFSU2_TR(0x577470);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L577472;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577470u);}goto L577470;}
}
B577472:L577472:{c.instructions+=4;NFSU2_TR(0x577472);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B577473:{NFSU2_TR(0x577473);
__builtin_memmove((R+0),(R+24),4);
}
B577475:{NFSU2_TR(0x577475);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577476:{NFSU2_TR(0x577476);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577480:L577480:{c.instructions+=6;NFSU2_TR(0x577480);
__builtin_memmove((R+0),(R+4),4);
}
B577482:{NFSU2_TR(0x577482);
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
B577484:{NFSU2_TR(0x577484);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577487:{NFSU2_TR(0x577487);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57748a:{NFSU2_TR(0x57748a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e4ull))));
w4(U+4,u32(0x800ull));
s4(u32(r4(U+0)),r4(U+4));
}
B577494:{NFSU2_TR(0x577494);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5774a0:L5774a0:{c.instructions+=3;NFSU2_TR(0x5774a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5774a3:{NFSU2_TR(0x5774a3);
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
B5774a5:{NFSU2_TR(0x5774a5);
if(r1(R+518)){{goto L5774b1;}}
}
B5774a7:L5774a7:{c.instructions+=3;NFSU2_TR(0x5774a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5774aa:{NFSU2_TR(0x5774aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5774ab:{NFSU2_TR(0x5774ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5774b0ull));
TAIL_STATIC(0x75c6dau,75c);
}
B5774b0:L5774b0:{c.instructions+=1;NFSU2_TR(0x5774b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5774b1:L5774b1:{c.instructions+=1;NFSU2_TR(0x5774b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5774c0:L5774c0:{c.instructions+=11;NFSU2_TR(0x5774c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5774c1:{NFSU2_TR(0x5774c1);
__builtin_memmove((R+20),(R+16),4);
}
B5774c3:{NFSU2_TR(0x5774c3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5774c6:{NFSU2_TR(0x5774c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
}
B5774c9:{NFSU2_TR(0x5774c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5774ca:{NFSU2_TR(0x5774ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5774cb:{NFSU2_TR(0x5774cb);
__builtin_memmove((R+24),(R+4),4);
}
B5774cd:{NFSU2_TR(0x5774cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5774d0:{NFSU2_TR(0x5774d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5774d2:{NFSU2_TR(0x5774d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5774d3:{NFSU2_TR(0x5774d3);
if(r1(R+518)){{goto L5774de;}}
}
B5774d5:L5774d5:{c.instructions+=1;NFSU2_TR(0x5774d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5774daull));
TAIL_STATIC(0x570240u,570);
}
B5774da:L5774da:{c.instructions+=1;NFSU2_TR(0x5774da);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5774de:L5774de:{c.instructions+=2;NFSU2_TR(0x5774de);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x0ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5774e3:{NFSU2_TR(0x5774e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5774f4;}}
}
B5774e5:L5774e5:{c.instructions+=7;NFSU2_TR(0x5774e5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5774eb:{NFSU2_TR(0x5774eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5774ec:{NFSU2_TR(0x5774ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5774ed:{NFSU2_TR(0x5774ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5774ee:{NFSU2_TR(0x5774ee);
__builtin_memmove((R+16),(R+20),4);
}
B5774f0:{NFSU2_TR(0x5774f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5774f1:{NFSU2_TR(0x5774f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5774f4:L5774f4:{c.instructions+=8;NFSU2_TR(0x5774f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5774f7:{NFSU2_TR(0x5774f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5774fa:{NFSU2_TR(0x5774fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5774fe:{NFSU2_TR(0x5774fe);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B577506:{NFSU2_TR(0x577506);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57750e:{NFSU2_TR(0x57750e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B577516:{NFSU2_TR(0x577516);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x3e6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57751e:{NFSU2_TR(0x57751e);
__builtin_memmove((R+28),(R+28),4);
}
B577520:L577520:{c.instructions+=7;NFSU2_TR(0x577520);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B577524:{NFSU2_TR(0x577524);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577526:{NFSU2_TR(0x577526);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577527:{NFSU2_TR(0x577527);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57752b:{NFSU2_TR(0x57752b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57752c:{NFSU2_TR(0x57752c);
__builtin_memmove((R+4),(R+24),4);
}
B57752e:{NFSU2_TR(0x57752e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577533ull));
TAIL_STATIC(0x570640u,570);
}
B577533:L577533:{c.instructions+=12;NFSU2_TR(0x577533);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B577537:{NFSU2_TR(0x577537);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57753b:{NFSU2_TR(0x57753b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57753f:{NFSU2_TR(0x57753f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577541:{NFSU2_TR(0x577541);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577545:{NFSU2_TR(0x577545);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577546:{NFSU2_TR(0x577546);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57754a:{NFSU2_TR(0x57754a);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57754e:{NFSU2_TR(0x57754e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57754f:{NFSU2_TR(0x57754f);
__builtin_memmove((R+4),(R+24),4);
}
B577551:{NFSU2_TR(0x577551);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577555:{NFSU2_TR(0x577555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57755aull));
TAIL_STATIC(0x570640u,570);
}
B57755a:L57755a:{c.instructions+=17;NFSU2_TR(0x57755a);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57755e:{NFSU2_TR(0x57755e);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B577562:{NFSU2_TR(0x577562);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B577566:{NFSU2_TR(0x577566);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B577568:{NFSU2_TR(0x577568);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B57756a:{NFSU2_TR(0x57756a);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B57756c:{NFSU2_TR(0x57756c);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B57756e:{NFSU2_TR(0x57756e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B577570:{NFSU2_TR(0x577570);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B577572:{NFSU2_TR(0x577572);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B577574:{NFSU2_TR(0x577574);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B577576:{NFSU2_TR(0x577576);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B577578:{NFSU2_TR(0x577578);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B57757c:{NFSU2_TR(0x57757c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B577582:{NFSU2_TR(0x577582);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B577584:{NFSU2_TR(0x577584);
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
B577587:{NFSU2_TR(0x577587);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5776fb;}}
}
B57758d:L57758d:{c.instructions+=24;NFSU2_TR(0x57758d);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57758f:{NFSU2_TR(0x57758f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B577593:{NFSU2_TR(0x577593);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B577596:{NFSU2_TR(0x577596);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B57759a:{NFSU2_TR(0x57759a);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57759d:{NFSU2_TR(0x57759d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5775a1:{NFSU2_TR(0x5775a1);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5775a3:{NFSU2_TR(0x5775a3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5775a5:{NFSU2_TR(0x5775a5);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5775a7:{NFSU2_TR(0x5775a7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5775a9:{NFSU2_TR(0x5775a9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5775ab:{NFSU2_TR(0x5775ab);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5775ad:{NFSU2_TR(0x5775ad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5775af:{NFSU2_TR(0x5775af);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5775b3:{NFSU2_TR(0x5775b3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5775b7:{NFSU2_TR(0x5775b7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5775b9:{NFSU2_TR(0x5775b9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5775bb:{NFSU2_TR(0x5775bb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5775bd:{NFSU2_TR(0x5775bd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5775c1:{NFSU2_TR(0x5775c1);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5775c3:{NFSU2_TR(0x5775c3);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5775c6:{NFSU2_TR(0x5775c6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5775c8:{NFSU2_TR(0x5775c8);
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
B5775cb:{NFSU2_TR(0x5775cb);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L577701;}}
}
B5775d1:L5775d1:{c.instructions+=5;NFSU2_TR(0x5775d1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5775d5:{NFSU2_TR(0x5775d5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5775db:{NFSU2_TR(0x5775db);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5775dd:{NFSU2_TR(0x5775dd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5775e0:{NFSU2_TR(0x5775e0);
if(r1(R+514)){{goto L5775e8;}}
}
B5775e2:L5775e2:{c.instructions+=2;NFSU2_TR(0x5775e2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5775e6:{NFSU2_TR(0x5775e6);
{goto L577607;}
}
B5775e8:L5775e8:{c.instructions+=8;NFSU2_TR(0x5775e8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5775ec:{NFSU2_TR(0x5775ec);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5775f0:{NFSU2_TR(0x5775f0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5775f4:{NFSU2_TR(0x5775f4);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5775f6:{NFSU2_TR(0x5775f6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5775fc:{NFSU2_TR(0x5775fc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5775fe:{NFSU2_TR(0x5775fe);
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
B577601:{NFSU2_TR(0x577601);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5776ff;}}
}
B577607:L577607:{c.instructions+=8;NFSU2_TR(0x577607);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B57760b:{NFSU2_TR(0x57760b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57760f:{NFSU2_TR(0x57760f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B577611:{NFSU2_TR(0x577611);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B577615:{NFSU2_TR(0x577615);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B577619:{NFSU2_TR(0x577619);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57761b:{NFSU2_TR(0x57761b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57761e:{NFSU2_TR(0x57761e);
if(r1(R+518)){{goto L577626;}}
}
B577620:L577620:{c.instructions+=2;NFSU2_TR(0x577620);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B577622:{NFSU2_TR(0x577622);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B577626:L577626:{c.instructions+=5;NFSU2_TR(0x577626);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57762a:{NFSU2_TR(0x57762a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B57762c:{NFSU2_TR(0x57762c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57762e:{NFSU2_TR(0x57762e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B577631:{NFSU2_TR(0x577631);
if(r1(R+514)){{goto L57763f;}}
}
B577633:L577633:{c.instructions+=4;NFSU2_TR(0x577633);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577637:{NFSU2_TR(0x577637);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B577639:{NFSU2_TR(0x577639);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57763d:{NFSU2_TR(0x57763d);
{goto L577643;}
}
B57763f:L57763f:{c.instructions+=1;NFSU2_TR(0x57763f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B577643:L577643:{c.instructions+=6;NFSU2_TR(0x577643);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B577647:{NFSU2_TR(0x577647);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57764a:{NFSU2_TR(0x57764a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57764c:{NFSU2_TR(0x57764c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B577650:{NFSU2_TR(0x577650);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B577654:{NFSU2_TR(0x577654);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57766b;}}
}
B577656:L577656:{c.instructions+=6;NFSU2_TR(0x577656);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B577659:{NFSU2_TR(0x577659);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B57765b:{NFSU2_TR(0x57765b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57765f:{NFSU2_TR(0x57765f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577660:{NFSU2_TR(0x577660);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577661:{NFSU2_TR(0x577661);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577666ull));
TAIL_STATIC(0x43c240u,43c);
}
B577666:L577666:{c.instructions+=2;NFSU2_TR(0x577666);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B577669:{NFSU2_TR(0x577669);
{goto L5776a8;}
}
B57766b:L57766b:{c.instructions+=2;NFSU2_TR(0x57766b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57766e:{NFSU2_TR(0x57766e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5776a8;}}
}
B577670:L577670:{c.instructions+=9;NFSU2_TR(0x577670);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B577673:{NFSU2_TR(0x577673);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577676:{NFSU2_TR(0x577676);
{u32 ea_=u32(u32(7996244u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B57767c:{NFSU2_TR(0x57767c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577680:{NFSU2_TR(0x577680);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B577684:{NFSU2_TR(0x577684);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B577688:{NFSU2_TR(0x577688);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57768a:{NFSU2_TR(0x57768a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57768d:{NFSU2_TR(0x57768d);
if(r1(R+518)){{goto L577695;}}
}
B57768f:L57768f:{c.instructions+=2;NFSU2_TR(0x57768f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B577691:{NFSU2_TR(0x577691);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B577695:L577695:{c.instructions+=5;NFSU2_TR(0x577695);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B577699:{NFSU2_TR(0x577699);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B57769b:{NFSU2_TR(0x57769b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57769d:{NFSU2_TR(0x57769d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5776a0:{NFSU2_TR(0x5776a0);
if(r1(R+514)){{goto L5776a8;}}
}
B5776a2:L5776a2:{c.instructions+=2;NFSU2_TR(0x5776a2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5776a4:{NFSU2_TR(0x5776a4);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5776a8:L5776a8:{c.instructions+=7;NFSU2_TR(0x5776a8);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5776ac:{NFSU2_TR(0x5776ac);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5776b0:{NFSU2_TR(0x5776b0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5776b4:{NFSU2_TR(0x5776b4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5776ba:{NFSU2_TR(0x5776ba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5776bc:{NFSU2_TR(0x5776bc);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5776bf:{NFSU2_TR(0x5776bf);
if(r1(R+514)){{goto L5776cf;}}
}
B5776c1:L5776c1:{c.instructions+=3;NFSU2_TR(0x5776c1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5776c5:{NFSU2_TR(0x5776c5);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5776cb:{NFSU2_TR(0x5776cb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5776cf:L5776cf:{c.instructions+=8;NFSU2_TR(0x5776cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5776d3:{NFSU2_TR(0x5776d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5776d7:{NFSU2_TR(0x5776d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5776db:{NFSU2_TR(0x5776db);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5776dc:{NFSU2_TR(0x5776dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5776e0:{NFSU2_TR(0x5776e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5776e4:{NFSU2_TR(0x5776e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5776e8:{NFSU2_TR(0x5776e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577520u);}goto L577520;}}
}
B5776ee:L5776ee:{c.instructions+=7;NFSU2_TR(0x5776ee);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5776f2:{NFSU2_TR(0x5776f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5776f3:{NFSU2_TR(0x5776f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5776f4:{NFSU2_TR(0x5776f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5776f5:{NFSU2_TR(0x5776f5);
__builtin_memmove((R+16),(R+20),4);
}
B5776f7:{NFSU2_TR(0x5776f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5776f8:{NFSU2_TR(0x5776f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5776fb:L5776fb:{c.instructions+=2;NFSU2_TR(0x5776fb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5776fd:{NFSU2_TR(0x5776fd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5776ff:L5776ff:{c.instructions+=1;NFSU2_TR(0x5776ff);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B577701:L577701:{c.instructions+=7;NFSU2_TR(0x577701);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B577705:{NFSU2_TR(0x577705);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B577706:{NFSU2_TR(0x577706);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577707:{NFSU2_TR(0x577707);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B577708:{NFSU2_TR(0x577708);
__builtin_memmove((R+16),(R+20),4);
}
B57770a:{NFSU2_TR(0x57770a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57770b:{NFSU2_TR(0x57770b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577710:L577710:{c.instructions+=14;NFSU2_TR(0x577710);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577711:{NFSU2_TR(0x577711);
__builtin_memmove((R+20),(R+16),4);
}
B577713:{NFSU2_TR(0x577713);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B577716:{NFSU2_TR(0x577716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B577719:{NFSU2_TR(0x577719);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57771a:{NFSU2_TR(0x57771a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57771b:{NFSU2_TR(0x57771b);
__builtin_memmove((R+28),(R+4),4);
}
B57771d:{NFSU2_TR(0x57771d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577720:{NFSU2_TR(0x577720);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B577723:{NFSU2_TR(0x577723);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577727:{NFSU2_TR(0x577727);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57772a:{NFSU2_TR(0x57772a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B57772d:{NFSU2_TR(0x57772d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577731:{NFSU2_TR(0x577731);
if(r1(R+518)){{goto L577756;}}
}
B577733:L577733:{c.instructions+=2;NFSU2_TR(0x577733);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B577736:{NFSU2_TR(0x577736);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L577764;}}
}
B577738:L577738:{c.instructions+=9;NFSU2_TR(0x577738);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B57773c:{NFSU2_TR(0x57773c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577740:{NFSU2_TR(0x577740);
w4(R+0,u32(0-u32(r4(R+0))));
}
B577742:{NFSU2_TR(0x577742);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577746:{NFSU2_TR(0x577746);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B57774a:{NFSU2_TR(0x57774a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57774e:{NFSU2_TR(0x57774e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B577752:{NFSU2_TR(0x577752);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B577754:{NFSU2_TR(0x577754);
{goto L577760;}
}
B577756:L577756:{c.instructions+=2;NFSU2_TR(0x577756);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57775a:{NFSU2_TR(0x57775a);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B577760:L577760:{c.instructions+=1;NFSU2_TR(0x577760);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B577764:L577764:{c.instructions+=5;NFSU2_TR(0x577764);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B577768:{NFSU2_TR(0x577768);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57776c:{NFSU2_TR(0x57776c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57776e:{NFSU2_TR(0x57776e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B577771:{NFSU2_TR(0x577771);
if(r1(R+518)){{goto L5777c6;}}
}
B577773:L577773:{c.instructions+=7;NFSU2_TR(0x577773);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B577777:{NFSU2_TR(0x577777);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577779:{NFSU2_TR(0x577779);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57777a:{NFSU2_TR(0x57777a);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57777e:{NFSU2_TR(0x57777e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57777f:{NFSU2_TR(0x57777f);
__builtin_memmove((R+4),(R+28),4);
}
B577781:{NFSU2_TR(0x577781);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577786ull));
TAIL_STATIC(0x570640u,570);
}
B577786:L577786:{c.instructions+=9;NFSU2_TR(0x577786);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57778a:{NFSU2_TR(0x57778a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57778e:{NFSU2_TR(0x57778e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577790:{NFSU2_TR(0x577790);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577791:{NFSU2_TR(0x577791);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B577795:{NFSU2_TR(0x577795);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577799:{NFSU2_TR(0x577799);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57779a:{NFSU2_TR(0x57779a);
__builtin_memmove((R+4),(R+28),4);
}
B57779c:{NFSU2_TR(0x57779c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5777a1ull));
TAIL_STATIC(0x570640u,570);
}
B5777a1:L5777a1:{c.instructions+=7;NFSU2_TR(0x5777a1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5777a5:{NFSU2_TR(0x5777a5);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5777a9:{NFSU2_TR(0x5777a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5777ad:{NFSU2_TR(0x5777ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5777b1:{NFSU2_TR(0x5777b1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5777b3:{NFSU2_TR(0x5777b3);
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
B5777b6:{NFSU2_TR(0x5777b6);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5777c6;}}
}
B5777b8:L5777b8:{c.instructions+=5;NFSU2_TR(0x5777b8);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5777bb:{NFSU2_TR(0x5777bb);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5777bf:{NFSU2_TR(0x5777bf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5777c1:{NFSU2_TR(0x5777c1);
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
B5777c4:{NFSU2_TR(0x5777c4);
if(r1(R+514)){{goto L5777d2;}}
}
B5777c6:L5777c6:{c.instructions+=6;NFSU2_TR(0x5777c6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5777ca:{NFSU2_TR(0x5777ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5777cb:{NFSU2_TR(0x5777cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5777cc:{NFSU2_TR(0x5777cc);
__builtin_memmove((R+16),(R+20),4);
}
B5777ce:{NFSU2_TR(0x5777ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5777cf:{NFSU2_TR(0x5777cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5777d2:L5777d2:{c.instructions+=5;NFSU2_TR(0x5777d2);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5777d5:{NFSU2_TR(0x5777d5);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5777d9:{NFSU2_TR(0x5777d9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5777db:{NFSU2_TR(0x5777db);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5777de:{NFSU2_TR(0x5777de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5777ec;}}
}
B5777e0:L5777e0:{c.instructions+=6;NFSU2_TR(0x5777e0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5777e4:{NFSU2_TR(0x5777e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5777e5:{NFSU2_TR(0x5777e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5777e6:{NFSU2_TR(0x5777e6);
__builtin_memmove((R+16),(R+20),4);
}
B5777e8:{NFSU2_TR(0x5777e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5777e9:{NFSU2_TR(0x5777e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5777ec:L5777ec:{c.instructions+=2;NFSU2_TR(0x5777ec);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5777ee:{NFSU2_TR(0x5777ee);
{goto L5777f2;}
}
B5777f0:L5777f0:{c.instructions+=1;NFSU2_TR(0x5777f0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5777f2:L5777f2:{c.instructions+=19;NFSU2_TR(0x5777f2);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5777f5:{NFSU2_TR(0x5777f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5777f7:{NFSU2_TR(0x5777f7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5777fb:{NFSU2_TR(0x5777fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5777ff:{NFSU2_TR(0x5777ff);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B577803:{NFSU2_TR(0x577803);
__builtin_memmove((R+4),(R+28),4);
}
B577805:{NFSU2_TR(0x577805);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B577809:{NFSU2_TR(0x577809);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B57780b:{NFSU2_TR(0x57780b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B577811:{NFSU2_TR(0x577811);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B577813:{NFSU2_TR(0x577813);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B577817:{NFSU2_TR(0x577817);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B577819:{NFSU2_TR(0x577819);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57781d:{NFSU2_TR(0x57781d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B57781f:{NFSU2_TR(0x57781f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B577823:{NFSU2_TR(0x577823);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B577827:{NFSU2_TR(0x577827);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577828:{NFSU2_TR(0x577828);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577829:{NFSU2_TR(0x577829);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57782eull));
TAIL_STATIC(0x570640u,570);
}
B57782e:L57782e:{c.instructions+=8;NFSU2_TR(0x57782e);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B577831:{NFSU2_TR(0x577831);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B577835:{NFSU2_TR(0x577835);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B577836:{NFSU2_TR(0x577836);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B577838:{NFSU2_TR(0x577838);
{u32 ea_=u32(u32(7986232u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B57783e:{NFSU2_TR(0x57783e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B577840:{NFSU2_TR(0x577840);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B577843:{NFSU2_TR(0x577843);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L57788a;}}
}
B577845:L577845:{c.instructions+=5;NFSU2_TR(0x577845);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B577848:{NFSU2_TR(0x577848);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57784c:{NFSU2_TR(0x57784c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57784e:{NFSU2_TR(0x57784e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B577851:{NFSU2_TR(0x577851);
if(r1(R+514)){{goto L577863;}}
}
B577853:L577853:{c.instructions+=4;NFSU2_TR(0x577853);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B577857:{NFSU2_TR(0x577857);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57785b:{NFSU2_TR(0x57785b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57785f:{NFSU2_TR(0x57785f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577863:L577863:{c.instructions+=5;NFSU2_TR(0x577863);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B577866:{NFSU2_TR(0x577866);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57786a:{NFSU2_TR(0x57786a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57786c:{NFSU2_TR(0x57786c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57786f:{NFSU2_TR(0x57786f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L577881;}}
}
B577871:L577871:{c.instructions+=4;NFSU2_TR(0x577871);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577875:{NFSU2_TR(0x577875);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B577879:{NFSU2_TR(0x577879);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57787d:{NFSU2_TR(0x57787d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577881:L577881:{c.instructions+=2;NFSU2_TR(0x577881);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x28ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B577884:{NFSU2_TR(0x577884);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5777f0u);}goto L5777f0;}}
}
B57788a:L57788a:{c.instructions+=3;NFSU2_TR(0x57788a);
__builtin_memmove((R+0),gp(0x864f1c),4);
}
B57788f:{NFSU2_TR(0x57788f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B577891:{NFSU2_TR(0x577891);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L577895;}}
}
B577893:L577893:{c.instructions+=1;NFSU2_TR(0x577893);
__builtin_memmove((R+24),(R+0),4);
}
B577895:L577895:{c.instructions+=6;NFSU2_TR(0x577895);
{u32 ea_=u32(u32(8802080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57789b:{NFSU2_TR(0x57789b);
__builtin_memmove(gp(0x864f1c),(R+24),4);
}
B5778a1:{NFSU2_TR(0x5778a1);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5778a3:{NFSU2_TR(0x5778a3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5778a5:{NFSU2_TR(0x5778a5);
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
B5778a8:{NFSU2_TR(0x5778a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5778b2;}}
}
B5778aa:L5778aa:{c.instructions+=2;NFSU2_TR(0x5778aa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5778ac:{NFSU2_TR(0x5778ac);
{u32 ea_=u32(u32(8802080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5778b2:L5778b2:{c.instructions+=7;NFSU2_TR(0x5778b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5778b3:{NFSU2_TR(0x5778b3);
{u32 ea_=u32(u32(8802080u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5778b9:{NFSU2_TR(0x5778b9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5778bd:{NFSU2_TR(0x5778bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5778be:{NFSU2_TR(0x5778be);
__builtin_memmove((R+16),(R+20),4);
}
B5778c0:{NFSU2_TR(0x5778c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5778c1:{NFSU2_TR(0x5778c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5778d0:L5778d0:{c.instructions+=13;NFSU2_TR(0x5778d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5778d1:{NFSU2_TR(0x5778d1);
__builtin_memmove((R+20),(R+16),4);
}
B5778d3:{NFSU2_TR(0x5778d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5778d6:{NFSU2_TR(0x5778d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x74ull))));
}
B5778d9:{NFSU2_TR(0x5778d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5778da:{NFSU2_TR(0x5778da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5778db:{NFSU2_TR(0x5778db);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5778dd:{NFSU2_TR(0x5778dd);
__builtin_memmove((R+24),(R+4),4);
}
B5778df:{NFSU2_TR(0x5778df);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+0))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5778e3:{NFSU2_TR(0x5778e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5778e4:{NFSU2_TR(0x5778e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5778ec:{NFSU2_TR(0x5778ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5778f0:{NFSU2_TR(0x5778f0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L577a32;}}
}
B5778f6:L5778f6:{c.instructions+=3;NFSU2_TR(0x5778f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5778f9:{NFSU2_TR(0x5778f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5778fd:{NFSU2_TR(0x5778fd);
__builtin_memmove((R+4),(R+4),4);
}
B577900:L577900:{c.instructions+=21;NFSU2_TR(0x577900);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577903:{NFSU2_TR(0x577903);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B577907:{NFSU2_TR(0x577907);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57790a:{NFSU2_TR(0x57790a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B57790c:{NFSU2_TR(0x57790c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57790f:{NFSU2_TR(0x57790f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B577913:{NFSU2_TR(0x577913);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B577916:{NFSU2_TR(0x577916);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577919:{NFSU2_TR(0x577919);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57791d:{NFSU2_TR(0x57791d);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B577921:{NFSU2_TR(0x577921);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B577923:{NFSU2_TR(0x577923);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B577925:{NFSU2_TR(0x577925);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577928:{NFSU2_TR(0x577928);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57792b:{NFSU2_TR(0x57792b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57792e:{NFSU2_TR(0x57792e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B577931:{NFSU2_TR(0x577931);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B577935:{NFSU2_TR(0x577935);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B577939:{NFSU2_TR(0x577939);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B57793d:{NFSU2_TR(0x57793d);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B577940:{NFSU2_TR(0x577940);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L577951;}}
}
B577942:L577942:{c.instructions+=5;NFSU2_TR(0x577942);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B577946:{NFSU2_TR(0x577946);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B577948:{NFSU2_TR(0x577948);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B577949:{NFSU2_TR(0x577949);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57794d:{NFSU2_TR(0x57794d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B577951:L577951:{c.instructions+=6;NFSU2_TR(0x577951);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B577953:{NFSU2_TR(0x577953);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B577955:{NFSU2_TR(0x577955);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B577957:{NFSU2_TR(0x577957);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B577959:{NFSU2_TR(0x577959);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B57795c:{NFSU2_TR(0x57795c);
if(r1(R+514)){{goto L577a12;}}
}
B577962:L577962:{c.instructions+=7;NFSU2_TR(0x577962);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577966:{NFSU2_TR(0x577966);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577968:{NFSU2_TR(0x577968);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577969:{NFSU2_TR(0x577969);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57796d:{NFSU2_TR(0x57796d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57796e:{NFSU2_TR(0x57796e);
__builtin_memmove((R+4),(R+24),4);
}
B577970:{NFSU2_TR(0x577970);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577975ull));
TAIL_STATIC(0x570640u,570);
}
B577975:L577975:{c.instructions+=10;NFSU2_TR(0x577975);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B577979:{NFSU2_TR(0x577979);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57797d:{NFSU2_TR(0x57797d);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B577981:{NFSU2_TR(0x577981);
w4(R+28,u32(0x1ull));
}
B577986:{NFSU2_TR(0x577986);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B577988:{NFSU2_TR(0x577988);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57798c:{NFSU2_TR(0x57798c);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577990:{NFSU2_TR(0x577990);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577994:{NFSU2_TR(0x577994);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577998:{NFSU2_TR(0x577998);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L577a12;}}
}
B57799a:L57799a:{c.instructions+=2;NFSU2_TR(0x57799a);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B57799d:{NFSU2_TR(0x57799d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5779a1:L5779a1:{c.instructions+=10;NFSU2_TR(0x5779a1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5779a5:{NFSU2_TR(0x5779a5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5779a7:{NFSU2_TR(0x5779a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5779a8:{NFSU2_TR(0x5779a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5779ac:{NFSU2_TR(0x5779ac);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5779b0:{NFSU2_TR(0x5779b0);
__builtin_memmove((R+4),(R+24),4);
}
B5779b2:{NFSU2_TR(0x5779b2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5779b6:{NFSU2_TR(0x5779b6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5779b9:{NFSU2_TR(0x5779b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5779ba:{NFSU2_TR(0x5779ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5779bfull));
TAIL_STATIC(0x570640u,570);
}
B5779bf:L5779bf:{c.instructions+=11;NFSU2_TR(0x5779bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5779c3:{NFSU2_TR(0x5779c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5779c7:{NFSU2_TR(0x5779c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5779cb:{NFSU2_TR(0x5779cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5779cf:{NFSU2_TR(0x5779cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5779d3:{NFSU2_TR(0x5779d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5779d7:{NFSU2_TR(0x5779d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5779d8:{NFSU2_TR(0x5779d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5779dc:{NFSU2_TR(0x5779dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5779dd:{NFSU2_TR(0x5779dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5779e1:{NFSU2_TR(0x5779e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5779e6ull));
TAIL_STATIC(0x43ce10u,43c);
}
B5779e6:L5779e6:{c.instructions+=13;NFSU2_TR(0x5779e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5779ea:{NFSU2_TR(0x5779ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5779ee:{NFSU2_TR(0x5779ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5779f2:{NFSU2_TR(0x5779f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5779f5:{NFSU2_TR(0x5779f5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5779f9:{NFSU2_TR(0x5779f9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5779fa:{NFSU2_TR(0x5779fa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5779fc:{NFSU2_TR(0x5779fc);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B577a00:{NFSU2_TR(0x577a00);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577a04:{NFSU2_TR(0x577a04);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577a08:{NFSU2_TR(0x577a08);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577a0c:{NFSU2_TR(0x577a0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577a10:{NFSU2_TR(0x577a10);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5779a1u);}goto L5779a1;}}
}
B577a12:L577a12:{c.instructions+=9;NFSU2_TR(0x577a12);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B577a16:{NFSU2_TR(0x577a16);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577a1a:{NFSU2_TR(0x577a1a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B577a1d:{NFSU2_TR(0x577a1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577a21:{NFSU2_TR(0x577a21);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B577a25:{NFSU2_TR(0x577a25);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B577a26:{NFSU2_TR(0x577a26);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B577a28:{NFSU2_TR(0x577a28);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577a2c:{NFSU2_TR(0x577a2c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577900u);}goto L577900;}}
}
B577a32:L577a32:{c.instructions+=4;NFSU2_TR(0x577a32);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577a36:{NFSU2_TR(0x577a36);
__builtin_memmove((R+4),(R+24),4);
}
B577a38:{NFSU2_TR(0x577a38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577a3b:{NFSU2_TR(0x577a3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577a40ull));
TAIL_STATIC(0x570240u,570);
}
B577a40:L577a40:{c.instructions+=7;NFSU2_TR(0x577a40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B577a41:{NFSU2_TR(0x577a41);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B577a45:{NFSU2_TR(0x577a45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577a46:{NFSU2_TR(0x577a46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B577a47:{NFSU2_TR(0x577a47);
__builtin_memmove((R+16),(R+20),4);
}
B577a49:{NFSU2_TR(0x577a49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B577a4a:{NFSU2_TR(0x577a4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577a50:L577a50:{c.instructions+=5;NFSU2_TR(0x577a50);
u8 U[9];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B577a55:{NFSU2_TR(0x577a55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577a56:{NFSU2_TR(0x577a56);
__builtin_memmove((R+24),(R+4),4);
}
B577a58:{NFSU2_TR(0x577a58);
u8 U[4];
w4(U+0,u32(0x7a0358ull));
s4(u32(r4(R+24)),r4(U+0));
}
B577a5e:{NFSU2_TR(0x577a5e);
if(r1(R+518)){{goto L577a69;}}
}
B577a60:L577a60:{c.instructions+=2;NFSU2_TR(0x577a60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577a61:{NFSU2_TR(0x577a61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577a66ull));
TAIL_STATIC(0x75c6dau,75c);
}
B577a66:L577a66:{c.instructions+=1;NFSU2_TR(0x577a66);
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
B577a69:L577a69:{c.instructions+=3;NFSU2_TR(0x577a69);
__builtin_memmove((R+0),(R+24),4);
}
B577a6b:{NFSU2_TR(0x577a6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577a6c:{NFSU2_TR(0x577a6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577a70:L577a70:{c.instructions+=5;NFSU2_TR(0x577a70);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577a75:{NFSU2_TR(0x577a75);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577a77:{NFSU2_TR(0x577a77);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577a79:{NFSU2_TR(0x577a79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577a7a:{NFSU2_TR(0x577a7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577a7full));
TAIL_STATIC(0x75c401u,75c);
}
B577a7f:L577a7f:{c.instructions+=1;NFSU2_TR(0x577a7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577a80:L577a80:{c.instructions+=4;NFSU2_TR(0x577a80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B577a83:{NFSU2_TR(0x577a83);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B577a85:{NFSU2_TR(0x577a85);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B577a87:{NFSU2_TR(0x577a87);
if(r1(R+518)){{goto L577a8c;}}
}
B577a89:L577a89:{c.instructions+=1;NFSU2_TR(0x577a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577a8c:L577a8c:{c.instructions+=4;NFSU2_TR(0x577a8c);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+0)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B577a8f:{NFSU2_TR(0x577a8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B577a93:{NFSU2_TR(0x577a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577a96:{NFSU2_TR(0x577a96);
if(r1(R+518)){{goto L577a9b;}}
}
B577a98:L577a98:{c.instructions+=1;NFSU2_TR(0x577a98);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B577a9b:L577a9b:{c.instructions+=3;NFSU2_TR(0x577a9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577a9f:{NFSU2_TR(0x577a9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577aa2:{NFSU2_TR(0x577aa2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577ab0:L577ab0:{c.instructions+=7;NFSU2_TR(0x577ab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577ab4:{NFSU2_TR(0x577ab4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577ab5:{NFSU2_TR(0x577ab5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B577ab9:{NFSU2_TR(0x577ab9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577aba:{NFSU2_TR(0x577aba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B577abd:{NFSU2_TR(0x577abd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B577abf:{NFSU2_TR(0x577abf);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L577ae3;}}
}
B577ac1:L577ac1:{c.instructions+=1;NFSU2_TR(0x577ac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577ac6ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B577ac6:L577ac6:{c.instructions+=2;NFSU2_TR(0x577ac6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577ac7:{NFSU2_TR(0x577ac7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577accull));
TAIL_STATIC(0x570d70u,570);
}
B577acc:L577acc:{c.instructions+=3;NFSU2_TR(0x577acc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B577acf:{NFSU2_TR(0x577acf);
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
B577ad1:{NFSU2_TR(0x577ad1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L577ad8;}}
}
B577ad3:L577ad3:{c.instructions+=1;NFSU2_TR(0x577ad3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577ad8ull));
TAIL_STATIC(0x43bd50u,43b);
}
B577ad8:L577ad8:{c.instructions+=4;NFSU2_TR(0x577ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B577adb:{NFSU2_TR(0x577adb);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B577adf:{NFSU2_TR(0x577adf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B577ae1:{NFSU2_TR(0x577ae1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577ac1u);}goto L577ac1;}}
}
B577ae3:L577ae3:{c.instructions+=5;NFSU2_TR(0x577ae3);
__builtin_memmove((R+0),gp(0x864f74),1);
}
B577ae8:{NFSU2_TR(0x577ae8);
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
B577aea:{NFSU2_TR(0x577aea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B577aeb:{NFSU2_TR(0x577aeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577aec:{NFSU2_TR(0x577aec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L577b0b;}}
}
B577aee:L577aee:{c.instructions+=1;NFSU2_TR(0x577aee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577af3ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B577af3:L577af3:{c.instructions+=3;NFSU2_TR(0x577af3);
__builtin_memmove((R+0),gp(0x82dab4),4);
}
B577af8:{NFSU2_TR(0x577af8);
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
B577afa:{NFSU2_TR(0x577afa);
if(r1(R+518)){{goto L577b06;}}
}
B577afc:L577afc:{c.instructions+=1;NFSU2_TR(0x577afc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577b01ull));
TAIL_STATIC(0x4022c0u,402);
}
B577b01:L577b01:{c.instructions+=1;NFSU2_TR(0x577b01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577b06ull));
TAIL_STATIC(0x4908f0u,490);
}
B577b06:L577b06:{c.instructions+=1;NFSU2_TR(0x577b06);
TAIL_STATIC(0x4887c0u,488);
}
B577b0b:L577b0b:{c.instructions+=1;NFSU2_TR(0x577b0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577b10:L577b10:{c.instructions+=3;NFSU2_TR(0x577b10);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x100ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x100ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B577b16:{NFSU2_TR(0x577b16);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577b17:{NFSU2_TR(0x577b17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577b1cull));
TAIL_STATIC(0x4022c0u,402);
}
B577b1c:L577b1c:{c.instructions+=5;NFSU2_TR(0x577b1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B577b23:{NFSU2_TR(0x577b23);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577b2a:{NFSU2_TR(0x577b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B577b2d:{NFSU2_TR(0x577b2d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B577b2f:{NFSU2_TR(0x577b2f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L577c19;}}
}
B577b35:L577b35:{c.instructions+=3;NFSU2_TR(0x577b35);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577b36:{NFSU2_TR(0x577b36);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577b37:{NFSU2_TR(0x577b37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577b38:L577b38:{c.instructions+=4;NFSU2_TR(0x577b38);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B577b3a:{NFSU2_TR(0x577b3a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B577b3c:{NFSU2_TR(0x577b3c);
__builtin_memmove((R+0),(R+8),4);
}
B577b3e:{NFSU2_TR(0x577b3e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L577b5f;}}
}
B577b40:L577b40:{c.instructions+=3;NFSU2_TR(0x577b40);
__builtin_memmove((R+24),(R+4),4);
}
B577b42:{NFSU2_TR(0x577b42);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x8000003full))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B577b48:{NFSU2_TR(0x577b48);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L577b4f;}}
}
B577b4a:L577b4a:{c.instructions+=3;NFSU2_TR(0x577b4a);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B577b4b:{NFSU2_TR(0x577b4b);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffc0ull))));
}
B577b4e:{NFSU2_TR(0x577b4e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B577b4f:L577b4f:{c.instructions+=6;NFSU2_TR(0x577b4f);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B577b53:{NFSU2_TR(0x577b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B577b56:{NFSU2_TR(0x577b56);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B577b5a:{NFSU2_TR(0x577b5a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B577b5b:{NFSU2_TR(0x577b5b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B577b5d:{NFSU2_TR(0x577b5d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577b40u);}goto L577b40;}}
}
B577b5f:L577b5f:{c.instructions+=3;NFSU2_TR(0x577b5f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B577b62:{NFSU2_TR(0x577b62);
__builtin_memmove((R+0),(R+4),4);
}
B577b64:{NFSU2_TR(0x577b64);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L577b6d;}}
}
B577b66:L577b66:{c.instructions+=2;NFSU2_TR(0x577b66);
w4(R+0,u32(0x40ull));
}
B577b6b:{NFSU2_TR(0x577b6b);
{goto L577b75;}
}
B577b6d:L577b6d:{c.instructions+=2;NFSU2_TR(0x577b6d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B577b6f:{NFSU2_TR(0x577b6f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L577c0e;}}
}
B577b75:L577b75:{c.instructions+=3;NFSU2_TR(0x577b75);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+12),(U+0),4);
}
B577b78:{NFSU2_TR(0x577b78);
__builtin_memmove((R+20),(R+0),4);
}
B577b7a:{NFSU2_TR(0x577b7a);
__builtin_memmove((R+12),(R+12),4);
}
B577b80:L577b80:{c.instructions+=3;NFSU2_TR(0x577b80);
__builtin_memmove((R+4),(R+12),4);
}
B577b82:{NFSU2_TR(0x577b82);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8000003full))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B577b88:{NFSU2_TR(0x577b88);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L577b8f;}}
}
B577b8a:L577b8a:{c.instructions+=3;NFSU2_TR(0x577b8a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B577b8b:{NFSU2_TR(0x577b8b);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffc0ull))));
}
B577b8e:{NFSU2_TR(0x577b8e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B577b8f:L577b8f:{c.instructions+=4;NFSU2_TR(0x577b8f);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B577b93:{NFSU2_TR(0x577b93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B577b95:{NFSU2_TR(0x577b95);
w4(R+0,u32(0x7faa0cull));
}
B577b9a:{NFSU2_TR(0x577b9a);
__builtin_memmove((R+12),(R+12),4);
}
B577ba0:L577ba0:{c.instructions+=2;NFSU2_TR(0x577ba0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B577ba2:{NFSU2_TR(0x577ba2);
if(r1(R+518)){{goto L577bd5;}}
}
B577ba4:L577ba4:{c.instructions+=3;NFSU2_TR(0x577ba4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B577ba7:{NFSU2_TR(0x577ba7);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7faa14ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7faa14ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B577bac:{NFSU2_TR(0x577bac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577ba0u);}goto L577ba0;}}
}
B577bae:L577bae:{c.instructions+=10;NFSU2_TR(0x577bae);
__builtin_memmove((R+0),gp(0x866610),4);
}
B577bb3:{NFSU2_TR(0x577bb3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B577bb4:{NFSU2_TR(0x577bb4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B577bb7:{NFSU2_TR(0x577bb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577bb8:{NFSU2_TR(0x577bb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B577bbb:{NFSU2_TR(0x577bbb);
__builtin_memmove(gp(0x866610),(R+0),4);
}
B577bc0:{NFSU2_TR(0x577bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8665c0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B577bc7:{NFSU2_TR(0x577bc7);
u8 U[4];
w4(U+0,u32(0x7a03a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577bcc:{NFSU2_TR(0x577bcc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577bcd:{NFSU2_TR(0x577bcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577bd2ull));
TAIL_STATIC(0x4400d0u,440);
}
B577bd2:L577bd2:{c.instructions+=1;NFSU2_TR(0x577bd2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B577bd5:L577bd5:{c.instructions+=1;NFSU2_TR(0x577bd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577bdaull));
TAIL_STATIC(0x43bdf0u,43b);
}
B577bda:L577bda:{c.instructions+=3;NFSU2_TR(0x577bda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B577bdc:{NFSU2_TR(0x577bdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B577bde:{NFSU2_TR(0x577bde);
if(r1(R+518)){{goto L577bff;}}
}
B577be0:L577be0:{c.instructions+=2;NFSU2_TR(0x577be0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577be1:{NFSU2_TR(0x577be1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577be6ull));
TAIL_STATIC(0x43c100u,43c);
}
B577be6:L577be6:{c.instructions+=3;NFSU2_TR(0x577be6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B577be9:{NFSU2_TR(0x577be9);
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
B577beb:{NFSU2_TR(0x577beb);
if(r1(R+518)){{goto L577c46;}}
}
B577bed:L577bed:{c.instructions+=3;NFSU2_TR(0x577bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577bf0:{NFSU2_TR(0x577bf0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577bf1:{NFSU2_TR(0x577bf1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577bf3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B577bf3:L577bf3:{c.instructions+=3;NFSU2_TR(0x577bf3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B577bf6:{NFSU2_TR(0x577bf6);
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
B577bf8:{NFSU2_TR(0x577bf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L577bff;}}
}
B577bfa:L577bfa:{c.instructions+=1;NFSU2_TR(0x577bfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577bffull));
TAIL_STATIC(0x43bd50u,43b);
}
B577bff:L577bff:{c.instructions+=3;NFSU2_TR(0x577bff);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B577c00:{NFSU2_TR(0x577c00);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B577c01:{NFSU2_TR(0x577c01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577b80u);}goto L577b80;}}
}
B577c07:L577c07:{c.instructions+=1;NFSU2_TR(0x577c07);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B577c0e:L577c0e:{c.instructions+=2;NFSU2_TR(0x577c0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B577c10:{NFSU2_TR(0x577c10);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577b38u);}goto L577b38;}}
}
B577c16:L577c16:{c.instructions+=3;NFSU2_TR(0x577c16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577c17:{NFSU2_TR(0x577c17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B577c18:{NFSU2_TR(0x577c18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B577c19:L577c19:{c.instructions+=4;NFSU2_TR(0x577c19);
__builtin_memmove((R+0),gp(0x864f74),1);
}
B577c1e:{NFSU2_TR(0x577c1e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B577c20:{NFSU2_TR(0x577c20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B577c21:{NFSU2_TR(0x577c21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L577c69;}}
}
B577c23:L577c23:{c.instructions+=1;NFSU2_TR(0x577c23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577c28ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B577c28:L577c28:{c.instructions+=3;NFSU2_TR(0x577c28);
__builtin_memmove((R+0),gp(0x82dab4),4);
}
B577c2d:{NFSU2_TR(0x577c2d);
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
B577c2f:{NFSU2_TR(0x577c2f);
if(r1(R+518)){{goto L577c3b;}}
}
B577c31:L577c31:{c.instructions+=1;NFSU2_TR(0x577c31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577c36ull));
TAIL_STATIC(0x4022c0u,402);
}
B577c36:L577c36:{c.instructions+=1;NFSU2_TR(0x577c36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577c3bull));
TAIL_STATIC(0x4908f0u,490);
}
B577c3b:L577c3b:{c.instructions+=2;NFSU2_TR(0x577c3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x100ull))));
}
B577c41:{NFSU2_TR(0x577c41);
TAIL_STATIC(0x4887c0u,488);
}
B577c46:L577c46:{c.instructions+=2;NFSU2_TR(0x577c46);
w4(R+24,u32(0x7fa8e8ull));
}
B577c4b:{NFSU2_TR(0x577c4b);
{goto L577c50;}
}
B577c50:L577c50:{c.instructions+=3;NFSU2_TR(0x577c50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B577c52:{NFSU2_TR(0x577c52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577c53:{NFSU2_TR(0x577c53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577c55ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B577c55:L577c55:{c.instructions+=3;NFSU2_TR(0x577c55);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B577c58:{NFSU2_TR(0x577c58);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B577c5a:{NFSU2_TR(0x577c5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577bffu);}goto L577bff;}}
}
B577c5c:L577c5c:{c.instructions+=3;NFSU2_TR(0x577c5c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B577c5f:{NFSU2_TR(0x577c5f);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x7fa978ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7fa978ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7fa978ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B577c65:{NFSU2_TR(0x577c65);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577c50u);}goto L577c50;}}
}
B577c67:L577c67:{c.instructions+=1;NFSU2_TR(0x577c67);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577bfau);}goto L577bfa;}
}
B577c69:L577c69:{c.instructions+=2;NFSU2_TR(0x577c69);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x100ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B577c6f:{NFSU2_TR(0x577c6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577c70:L577c70:{c.instructions+=11;NFSU2_TR(0x577c70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577c74:{NFSU2_TR(0x577c74);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B577c78:{NFSU2_TR(0x577c78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B577c7b:{NFSU2_TR(0x577c7b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577c7c:{NFSU2_TR(0x577c7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B577c7e:{NFSU2_TR(0x577c7e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577c7f:{NFSU2_TR(0x577c7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577c80:{NFSU2_TR(0x577c80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B577c82:{NFSU2_TR(0x577c82);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B577c84:{NFSU2_TR(0x577c84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577c85:{NFSU2_TR(0x577c85);
if(r1(R+518)){{goto L577d02;}}
}
B577c87:L577c87:{c.instructions+=2;NFSU2_TR(0x577c87);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B577c89:{NFSU2_TR(0x577c89);
if(r1(R+518)){{goto L577d02;}}
}
B577c8b:L577c8b:{c.instructions+=7;NFSU2_TR(0x577c8b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577c8d:{NFSU2_TR(0x577c8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577c8f:{NFSU2_TR(0x577c8f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577c91:{NFSU2_TR(0x577c91);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577c92:{NFSU2_TR(0x577c92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577c93:{NFSU2_TR(0x577c93);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577c95:{NFSU2_TR(0x577c95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577c9aull));
TAIL_STATIC(0x570dd0u,570);
}
B577c9a:L577c9a:{c.instructions+=7;NFSU2_TR(0x577c9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577c9e:{NFSU2_TR(0x577c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B577ca1:{NFSU2_TR(0x577ca1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B577ca4:{NFSU2_TR(0x577ca4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B577ca6:{NFSU2_TR(0x577ca6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B577cae:{NFSU2_TR(0x577cae);
__builtin_memmove((R+28),(R+24),4);
}
B577cb0:{NFSU2_TR(0x577cb0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L577cf3;}}
}
B577cb2:L577cb2:{c.instructions+=2;NFSU2_TR(0x577cb2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B577cb5:{NFSU2_TR(0x577cb5);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L577cdd;}}
}
B577cb7:L577cb7:{c.instructions+=11;NFSU2_TR(0x577cb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B577cbb:{NFSU2_TR(0x577cbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577cbe:{NFSU2_TR(0x577cbe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577cc0:{NFSU2_TR(0x577cc0);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x8ull))));
}
B577cc3:{NFSU2_TR(0x577cc3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577cc4:{NFSU2_TR(0x577cc4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577cc6:{NFSU2_TR(0x577cc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577cc7:{NFSU2_TR(0x577cc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B577cca:{NFSU2_TR(0x577cca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577ccb:{NFSU2_TR(0x577ccb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577ccd:{NFSU2_TR(0x577ccd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577cd2ull));
TAIL_STATIC(0x570dd0u,570);
}
B577cd2:L577cd2:{c.instructions+=3;NFSU2_TR(0x577cd2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B577cd5:{NFSU2_TR(0x577cd5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B577cd7:{NFSU2_TR(0x577cd7);
if(r1(R+518)){{goto L577cdd;}}
}
B577cd9:L577cd9:{c.instructions+=1;NFSU2_TR(0x577cd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577cdd:L577cdd:{c.instructions+=5;NFSU2_TR(0x577cdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577ce0:{NFSU2_TR(0x577ce0);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B577ce4:{NFSU2_TR(0x577ce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B577ce7:{NFSU2_TR(0x577ce7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B577ce9:{NFSU2_TR(0x577ce9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577cb2u);}goto L577cb2;}}
}
B577ceb:L577ceb:{c.instructions+=3;NFSU2_TR(0x577ceb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577cef:{NFSU2_TR(0x577cef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B577cf1:{NFSU2_TR(0x577cf1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L577d0c;}}
}
B577cf3:L577cf3:{c.instructions+=5;NFSU2_TR(0x577cf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B577cf7:{NFSU2_TR(0x577cf7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577cf8:{NFSU2_TR(0x577cf8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577cf9:{NFSU2_TR(0x577cf9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577cfa:{NFSU2_TR(0x577cfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577cffull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577ab0u);}goto L577ab0;}
}
B577cff:L577cff:{c.instructions+=1;NFSU2_TR(0x577cff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B577d02:L577d02:{c.instructions+=7;NFSU2_TR(0x577d02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B577d03:{NFSU2_TR(0x577d03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577d04:{NFSU2_TR(0x577d04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B577d05:{NFSU2_TR(0x577d05);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B577d07:{NFSU2_TR(0x577d07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B577d08:{NFSU2_TR(0x577d08);
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
B577d0b:{NFSU2_TR(0x577d0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577d0c:L577d0c:{c.instructions+=5;NFSU2_TR(0x577d0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B577d10:{NFSU2_TR(0x577d10);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577d14:{NFSU2_TR(0x577d14);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d15:{NFSU2_TR(0x577d15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d16:{NFSU2_TR(0x577d16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577d1bull));
TAIL_STATIC(0x440820u,440);
}
B577d1b:L577d1b:{c.instructions+=8;NFSU2_TR(0x577d1b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d1d:{NFSU2_TR(0x577d1d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d1f:{NFSU2_TR(0x577d1f);
__builtin_memmove((R+28),(R+0),4);
}
B577d21:{NFSU2_TR(0x577d21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d22:{NFSU2_TR(0x577d22);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d23:{NFSU2_TR(0x577d23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d24:{NFSU2_TR(0x577d24);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d26:{NFSU2_TR(0x577d26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577d2bull));
TAIL_STATIC(0x570dd0u,570);
}
B577d2b:L577d2b:{c.instructions+=3;NFSU2_TR(0x577d2b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d2c:{NFSU2_TR(0x577d2c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d2d:{NFSU2_TR(0x577d2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577d32ull));
TAIL_STATIC(0x570f00u,570);
}
B577d32:L577d32:{c.instructions+=5;NFSU2_TR(0x577d32);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B577d36:{NFSU2_TR(0x577d36);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d37:{NFSU2_TR(0x577d37);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d38:{NFSU2_TR(0x577d38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d39:{NFSU2_TR(0x577d39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577d3eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577ab0u);}goto L577ab0;}
}
B577d3e:L577d3e:{c.instructions+=5;NFSU2_TR(0x577d3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B577d42:{NFSU2_TR(0x577d42);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d43:{NFSU2_TR(0x577d43);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d44:{NFSU2_TR(0x577d44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d45:{NFSU2_TR(0x577d45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577d4aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577ab0u);}goto L577ab0;}
}
B577d4a:L577d4a:{c.instructions+=5;NFSU2_TR(0x577d4a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B577d4d:{NFSU2_TR(0x577d4d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d4e:{NFSU2_TR(0x577d4e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d4f:{NFSU2_TR(0x577d4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d50:{NFSU2_TR(0x577d50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577d55ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577b10u);}goto L577b10;}
}
B577d55:L577d55:{c.instructions+=2;NFSU2_TR(0x577d55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d56:{NFSU2_TR(0x577d56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577d5bull));
TAIL_STATIC(0x440540u,440);
}
B577d5b:L577d5b:{c.instructions+=13;NFSU2_TR(0x577d5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577d5f:{NFSU2_TR(0x577d5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B577d63:{NFSU2_TR(0x577d63);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B577d67:{NFSU2_TR(0x577d67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B577d6a:{NFSU2_TR(0x577d6a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B577d6c:{NFSU2_TR(0x577d6c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B577d6e:{NFSU2_TR(0x577d6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B577d6f:{NFSU2_TR(0x577d6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577d70:{NFSU2_TR(0x577d70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B577d71:{NFSU2_TR(0x577d71);
w1(R+0,u8(0x1ull));
}
B577d73:{NFSU2_TR(0x577d73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B577d74:{NFSU2_TR(0x577d74);
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
B577d77:{NFSU2_TR(0x577d77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577d80:L577d80:{c.instructions+=5;NFSU2_TR(0x577d80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d81:{NFSU2_TR(0x577d81);
__builtin_memmove((R+24),(R+4),4);
}
B577d83:{NFSU2_TR(0x577d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577d89:{NFSU2_TR(0x577d89);
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
B577d8b:{NFSU2_TR(0x577d8b);
if(r1(R+518)){{goto L577d96;}}
}
B577d8d:L577d8d:{c.instructions+=2;NFSU2_TR(0x577d8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577d8e:{NFSU2_TR(0x577d8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577d93ull));
TAIL_STATIC(0x4022c0u,402);
}
B577d93:L577d93:{c.instructions+=1;NFSU2_TR(0x577d93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B577d96:L577d96:{c.instructions+=3;NFSU2_TR(0x577d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577d9c:{NFSU2_TR(0x577d9c);
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
B577d9e:{NFSU2_TR(0x577d9e);
if(r1(R+518)){{goto L577dd8;}}
}
B577da0:L577da0:{c.instructions+=6;NFSU2_TR(0x577da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B577da6:{NFSU2_TR(0x577da6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B577da9:{NFSU2_TR(0x577da9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577daa:{NFSU2_TR(0x577daa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577dab:{NFSU2_TR(0x577dab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577dac:{NFSU2_TR(0x577dac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577db1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577b10u);}goto L577b10;}
}
B577db1:L577db1:{c.instructions+=4;NFSU2_TR(0x577db1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B577db4:{NFSU2_TR(0x577db4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B577db7:{NFSU2_TR(0x577db7);
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
B577db9:{NFSU2_TR(0x577db9);
if(r1(R+518)){{goto L577dd8;}}
}
B577dbb:L577dbb:{c.instructions+=3;NFSU2_TR(0x577dbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577dc1:{NFSU2_TR(0x577dc1);
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
B577dc3:{NFSU2_TR(0x577dc3);
if(r1(R+518)){{goto L577dd8;}}
}
B577dc5:L577dc5:{c.instructions+=2;NFSU2_TR(0x577dc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577dc6:{NFSU2_TR(0x577dc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577dcbull));
TAIL_STATIC(0x440540u,440);
}
B577dcb:L577dcb:{c.instructions+=2;NFSU2_TR(0x577dcb);
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
B577dce:{NFSU2_TR(0x577dce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B577dd8:L577dd8:{c.instructions+=2;NFSU2_TR(0x577dd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577dd9:{NFSU2_TR(0x577dd9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577de0:L577de0:{c.instructions+=5;NFSU2_TR(0x577de0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577de1:{NFSU2_TR(0x577de1);
__builtin_memmove((R+24),(R+4),4);
}
B577de3:{NFSU2_TR(0x577de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577de9:{NFSU2_TR(0x577de9);
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
B577deb:{NFSU2_TR(0x577deb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L577ea0;}}
}
B577df1:L577df1:{c.instructions+=3;NFSU2_TR(0x577df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577df7:{NFSU2_TR(0x577df7);
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
B577df9:{NFSU2_TR(0x577df9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L577ea0;}}
}
B577dff:L577dff:{c.instructions+=4;NFSU2_TR(0x577dff);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B577e03:{NFSU2_TR(0x577e03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577e04:{NFSU2_TR(0x577e04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577e05:{NFSU2_TR(0x577e05);
if(r1(R+518)){{goto L577e57;}}
}
B577e07:L577e07:{c.instructions+=3;NFSU2_TR(0x577e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B577e0d:{NFSU2_TR(0x577e0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B577e0f:{NFSU2_TR(0x577e0f);
if(r1(R+518)){{goto L577e57;}}
}
B577e11:L577e11:{c.instructions+=2;NFSU2_TR(0x577e11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577e12:{NFSU2_TR(0x577e12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577e17ull));
TAIL_STATIC(0x574630u,574);
}
B577e17:L577e17:{c.instructions+=3;NFSU2_TR(0x577e17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B577e1a:{NFSU2_TR(0x577e1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B577e1c:{NFSU2_TR(0x577e1c);
if(r1(R+518)){{goto L577e57;}}
}
B577e1e:L577e1e:{c.instructions+=5;NFSU2_TR(0x577e1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577e21:{NFSU2_TR(0x577e21);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B577e23:{NFSU2_TR(0x577e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577e29:{NFSU2_TR(0x577e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B577e33:{NFSU2_TR(0x577e33);
if(r1(R+518)){{goto L577e4e;}}
}
B577e35:L577e35:{c.instructions+=3;NFSU2_TR(0x577e35);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577e37:{NFSU2_TR(0x577e37);
__builtin_memmove((R+4),(R+24),4);
}
B577e39:{NFSU2_TR(0x577e39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577e3eull));
TAIL_STATIC(0x570fd0u,570);
}
B577e3e:L577e3e:{c.instructions+=4;NFSU2_TR(0x577e3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B577e44:{NFSU2_TR(0x577e44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577e45:{NFSU2_TR(0x577e45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577e46:{NFSU2_TR(0x577e46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577e4bull));
TAIL_STATIC(0x574670u,574);
}
B577e4b:L577e4b:{c.instructions+=1;NFSU2_TR(0x577e4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B577e4e:L577e4e:{c.instructions+=2;NFSU2_TR(0x577e4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577e4f:{NFSU2_TR(0x577e4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577e54ull));
TAIL_STATIC(0x440540u,440);
}
B577e54:L577e54:{c.instructions+=1;NFSU2_TR(0x577e54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B577e57:L577e57:{c.instructions+=9;NFSU2_TR(0x577e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B577e5d:{NFSU2_TR(0x577e5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((R+8),(U+0),4);
}
B577e63:{NFSU2_TR(0x577e63);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577e64:{NFSU2_TR(0x577e64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577e65:{NFSU2_TR(0x577e65);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((R+12),(U+0),4);
}
B577e6b:{NFSU2_TR(0x577e6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B577e71:{NFSU2_TR(0x577e71);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577e72:{NFSU2_TR(0x577e72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577e73:{NFSU2_TR(0x577e73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577e78ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577c70u);}goto L577c70;}
}
B577e78:L577e78:{c.instructions+=4;NFSU2_TR(0x577e78);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B577e7b:{NFSU2_TR(0x577e7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B577e7e:{NFSU2_TR(0x577e7e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B577e80:{NFSU2_TR(0x577e80);
if(r1(R+518)){{goto L577e94;}}
}
B577e82:L577e82:{c.instructions+=2;NFSU2_TR(0x577e82);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B577e85:{NFSU2_TR(0x577e85);
if(r1(R+518)){{goto L577e8e;}}
}
B577e87:L577e87:{c.instructions+=2;NFSU2_TR(0x577e87);
__builtin_memmove((R+4),(R+24),4);
}
B577e89:{NFSU2_TR(0x577e89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577e8eull));
TAIL_STATIC(0x571020u,571);
}
B577e8e:L577e8e:{c.instructions+=1;NFSU2_TR(0x577e8e);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B577e94:L577e94:{c.instructions+=3;NFSU2_TR(0x577e94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B577e95:{NFSU2_TR(0x577e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B577e9f:{NFSU2_TR(0x577e9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B577ea0:L577ea0:{c.instructions+=2;NFSU2_TR(0x577ea0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577ea1:{NFSU2_TR(0x577ea1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577eb0:L577eb0:{c.instructions+=6;NFSU2_TR(0x577eb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577eb1:{NFSU2_TR(0x577eb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577eb2:{NFSU2_TR(0x577eb2);
__builtin_memmove((R+24),gp(0x8651a8),4);
}
B577eb8:{NFSU2_TR(0x577eb8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577eb9:{NFSU2_TR(0x577eb9);
w4(R+4,u32(0x8651a4ull));
}
B577ebe:{NFSU2_TR(0x577ebe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577ec3ull));
TAIL_STATIC(0x502fd0u,502);
}
B577ec3:L577ec3:{c.instructions+=3;NFSU2_TR(0x577ec3);
__builtin_memmove((R+28),(R+0),4);
}
B577ec5:{NFSU2_TR(0x577ec5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B577ec7:{NFSU2_TR(0x577ec7);
if(r1(R+518)){{goto L577ee8;}}
}
B577ec9:L577ec9:{c.instructions+=2;NFSU2_TR(0x577ec9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B577ecd:{NFSU2_TR(0x577ecd);
__builtin_memmove((R+4),(R+4),4);
}
B577ed0:L577ed0:{c.instructions+=4;NFSU2_TR(0x577ed0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B577ed3:{NFSU2_TR(0x577ed3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577ed4:{NFSU2_TR(0x577ed4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577ed5:{NFSU2_TR(0x577ed5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577edaull));
TAIL_STATIC(0x43dc30u,43d);
}
B577eda:L577eda:{c.instructions+=3;NFSU2_TR(0x577eda);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B577edd:{NFSU2_TR(0x577edd);
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
B577edf:{NFSU2_TR(0x577edf);
if(r1(R+518)){{goto L577eee;}}
}
B577ee1:L577ee1:{c.instructions+=3;NFSU2_TR(0x577ee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B577ee4:{NFSU2_TR(0x577ee4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B577ee6:{NFSU2_TR(0x577ee6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577ed0u);}goto L577ed0;}}
}
B577ee8:L577ee8:{c.instructions+=5;NFSU2_TR(0x577ee8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B577ee9:{NFSU2_TR(0x577ee9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577eea:{NFSU2_TR(0x577eea);
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
B577eec:{NFSU2_TR(0x577eec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B577eed:{NFSU2_TR(0x577eed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577eee:L577eee:{c.instructions+=5;NFSU2_TR(0x577eee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B577eef:{NFSU2_TR(0x577eef);
__builtin_memmove((R+0),(R+24),4);
}
B577ef1:{NFSU2_TR(0x577ef1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577ef2:{NFSU2_TR(0x577ef2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B577ef3:{NFSU2_TR(0x577ef3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577f00:L577f00:{c.instructions+=4;NFSU2_TR(0x577f00);
__builtin_memmove((R+0),gp(0x827e8c),1);
}
B577f05:{NFSU2_TR(0x577f05);
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
B577f07:{NFSU2_TR(0x577f07);
w4(R+4,u32(0x827e88ull));
}
B577f0c:{NFSU2_TR(0x577f0c);
if(r1(R+518)){{goto L577f41;}}
}
B577f0e:L577f0e:{c.instructions+=1;NFSU2_TR(0x577f0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577f13ull));
TAIL_STATIC(0x43b930u,43b);
}
B577f13:L577f13:{c.instructions+=3;NFSU2_TR(0x577f13);
__builtin_memmove((R+0),gp(0x864f54),4);
}
B577f18:{NFSU2_TR(0x577f18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B577f1a:{NFSU2_TR(0x577f1a);
if(r1(R+518)){{goto L577f56;}}
}
B577f1c:L577f1c:{c.instructions+=3;NFSU2_TR(0x577f1c);
__builtin_memmove((R+0),gp(0x865498),1);
}
B577f21:{NFSU2_TR(0x577f21);
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
B577f23:{NFSU2_TR(0x577f23);
if(r1(R+518)){{goto L577f2c;}}
}
B577f25:L577f25:{c.instructions+=1;NFSU2_TR(0x577f25);
s1(0x865498,u8(0x0ull));
}
B577f2c:L577f2c:{c.instructions+=3;NFSU2_TR(0x577f2c);
s4(0x865484,u32(0x577f00ull));
}
B577f36:{NFSU2_TR(0x577f36);
s4(0x86548c,u32(0x7a0704ull));
}
B577f40:{NFSU2_TR(0x577f40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B577f41:L577f41:{c.instructions+=1;NFSU2_TR(0x577f41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577f46ull));
TAIL_STATIC(0x430550u,430);
}
B577f46:L577f46:{c.instructions+=2;NFSU2_TR(0x577f46);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B577f48:{NFSU2_TR(0x577f48);
if(r1(R+518)){{goto L577f56;}}
}
B577f4a:L577f4a:{c.instructions+=2;NFSU2_TR(0x577f4a);
w4(R+4,u32(0x827e88ull));
}
B577f4f:{NFSU2_TR(0x577f4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577f54ull));
TAIL_STATIC(0x43bb10u,43b);
}
B577f54:L577f54:{c.instructions+=1;NFSU2_TR(0x577f54);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x577f13u);}goto L577f13;}
}
B577f56:L577f56:{c.instructions+=2;NFSU2_TR(0x577f56);
w4(R+4,u32(0x8654a8ull));
}
B577f5b:{NFSU2_TR(0x577f5b);
TAIL_STATIC(0x57f2d0u,57f);
}
B577f60:L577f60:{c.instructions+=8;NFSU2_TR(0x577f60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B577f63:{NFSU2_TR(0x577f63);
w4(R+0,u32(m1(0x83aa1a)));
}
B577f6a:{NFSU2_TR(0x577f6a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577f6b:{NFSU2_TR(0x577f6b);
__builtin_memmove((R+20),(R+4),4);
}
B577f6d:{NFSU2_TR(0x577f6d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577f6f:{NFSU2_TR(0x577f6f);
w4(R+4,u32(0x89e7a0ull));
}
B577f74:{NFSU2_TR(0x577f74);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577f78:{NFSU2_TR(0x577f78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577f7dull));
TAIL_STATIC(0x5ed960u,5ed);
}
B577f7d:L577f7d:{c.instructions+=2;NFSU2_TR(0x577f7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B577f7f:{NFSU2_TR(0x577f7f);
if(r1(R+518)){{goto L577f86;}}
}
B577f81:L577f81:{c.instructions+=2;NFSU2_TR(0x577f81);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+523,sborrow<u8>(r1(U+1),u8(0x0ull)));
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+2))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B577f84:{NFSU2_TR(0x577f84);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L577f92;}}
}
B577f86:L577f86:{c.instructions+=3;NFSU2_TR(0x577f86);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577f88:{NFSU2_TR(0x577f88);
w4(R+4,u32(0x89e7a0ull));
}
B577f8d:{NFSU2_TR(0x577f8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577f92ull));
TAIL_STATIC(0x5ed960u,5ed);
}
B577f92:L577f92:{c.instructions+=2;NFSU2_TR(0x577f92);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B577f94:{NFSU2_TR(0x577f94);
if(r1(R+518)){TAIL_STATIC(0x578050u,578);}
}
B577f9a:L577f9a:{c.instructions+=2;NFSU2_TR(0x577f9a);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+523,sborrow<u8>(r1(U+1),u8(0x0ull)));
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+2))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B577f9d:{NFSU2_TR(0x577f9d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x578050u,578);}
}
B577fa3:L577fa3:{c.instructions+=7;NFSU2_TR(0x577fa3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577fa4:{NFSU2_TR(0x577fa4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577fa5:{NFSU2_TR(0x577fa5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577fa6:{NFSU2_TR(0x577fa6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B577fa9:{NFSU2_TR(0x577fa9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577fab:{NFSU2_TR(0x577fab);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B577fae:{NFSU2_TR(0x577fae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577fb3ull));
TAIL_STATIC(0x5b5350u,5b5);
}
B577fb3:L577fb3:{c.instructions+=7;NFSU2_TR(0x577fb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B577fb5:{NFSU2_TR(0x577fb5);
__builtin_memmove((R+28),(R+0),4);
}
B577fb7:{NFSU2_TR(0x577fb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B577fbb:{NFSU2_TR(0x577fbb);
u8 U[4];
w4(U+0,u32(0xa3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577fc0:{NFSU2_TR(0x577fc0);
__builtin_memmove((R+4),(R+24),4);
}
B577fc2:{NFSU2_TR(0x577fc2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x1f0ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x1f0ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1f0ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B577fc8:{NFSU2_TR(0x577fc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577fcdull));
TAIL_STATIC(0x6102f0u,610);
}
B577fcd:L577fcd:{c.instructions+=4;NFSU2_TR(0x577fcd);
__builtin_memmove((R+12),(R+0),4);
}
B577fcf:{NFSU2_TR(0x577fcf);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B577fd1:{NFSU2_TR(0x577fd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B577fd3:{NFSU2_TR(0x577fd3);
if(r1(R+518)){{goto L577fed;}}
}
B577fd5:L577fd5:{c.instructions+=3;NFSU2_TR(0x577fd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577fd6:{NFSU2_TR(0x577fd6);
u8 U[4];
w4(U+0,u32(0x798538ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577fdb:{NFSU2_TR(0x577fdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577fe0ull));
TAIL_STATIC(0x43db50u,43d);
}
B577fe0:L577fe0:{c.instructions+=4;NFSU2_TR(0x577fe0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B577fe3:{NFSU2_TR(0x577fe3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577fe4:{NFSU2_TR(0x577fe4);
__builtin_memmove((R+4),(R+12),4);
}
B577fe6:{NFSU2_TR(0x577fe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577febull));
TAIL_STATIC(0x61b500u,61b);
}
B577feb:L577feb:{c.instructions+=1;NFSU2_TR(0x577feb);
__builtin_memmove((R+24),(R+0),4);
}
B577fed:L577fed:{c.instructions+=5;NFSU2_TR(0x577fed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577fee:{NFSU2_TR(0x577fee);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B577ff2:{NFSU2_TR(0x577ff2);
u8 U[4];
w4(U+0,u32(0x7a0714ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577ff7:{NFSU2_TR(0x577ff7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577ff8:{NFSU2_TR(0x577ff8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x577ffdull));
TAIL_STATIC(0x4400d0u,440);
}
B577ffd:L577ffd:{c.instructions+=2;NFSU2_TR(0x577ffd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B577fff:{NFSU2_TR(0x577fff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x578001u,578);
}
XIT:NFSU2_TR_EXIT(0x577,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
