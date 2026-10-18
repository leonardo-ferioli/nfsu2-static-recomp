#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_441(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_4ca(u8* __restrict R,Cpu& c);
u32 body_4ec(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_5de(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e2(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5e8(u8* __restrict R,Cpu& c);
u32 body_5e9(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_5f3(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_5fb(u8* __restrict R,Cpu& c);
u32 body_5ff(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x600,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x600,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_600(u8* __restrict R,Cpu& c);
u32 page_600(Cpu& c){return body_600(c.regs.data(),c);}
__attribute__((noinline)) u32 body_600(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x600002:goto L600002;
case 0x600005:c.instructions+=6;goto B600005;
case 0x600007:c.instructions+=5;goto B600007;
case 0x60000d:c.instructions+=4;goto B60000d;
case 0x600013:c.instructions+=3;goto B600013;
case 0x600015:c.instructions+=2;goto B600015;
case 0x600018:c.instructions+=1;goto B600018;
case 0x60001a:goto L60001a;
case 0x600020:c.instructions+=2;goto B600020;
case 0x600025:c.instructions+=1;goto B600025;
case 0x60002a:goto L60002a;
case 0x60002c:c.instructions+=1;goto B60002c;
case 0x60002e:goto L60002e;
case 0x600030:c.instructions+=5;goto B600030;
case 0x600031:c.instructions+=4;goto B600031;
case 0x600033:c.instructions+=3;goto B600033;
case 0x600034:c.instructions+=2;goto B600034;
case 0x600035:c.instructions+=1;goto B600035;
case 0x600036:goto L600036;
case 0x60003b:goto L60003b;
case 0x60003f:c.instructions+=3;goto B60003f;
case 0x600041:c.instructions+=2;goto B600041;
case 0x600043:c.instructions+=1;goto B600043;
case 0x600045:goto L600045;
case 0x60004c:c.instructions+=5;goto B60004c;
case 0x60004d:c.instructions+=4;goto B60004d;
case 0x60004f:c.instructions+=3;goto B60004f;
case 0x600050:c.instructions+=2;goto B600050;
case 0x600051:c.instructions+=1;goto B600051;
case 0x600052:goto L600052;
case 0x600057:c.instructions+=6;goto B600057;
case 0x600059:c.instructions+=5;goto B600059;
case 0x60005e:c.instructions+=4;goto B60005e;
case 0x600061:c.instructions+=3;goto B600061;
case 0x600064:c.instructions+=2;goto B600064;
case 0x600066:c.instructions+=1;goto B600066;
case 0x600068:goto L600068;
case 0x60006d:c.instructions+=2;goto B60006d;
case 0x60006f:c.instructions+=1;goto B60006f;
case 0x600071:goto L600071;
case 0x600076:c.instructions+=2;goto B600076;
case 0x600078:c.instructions+=1;goto B600078;
case 0x60007a:goto L60007a;
case 0x60007c:goto L60007c;
case 0x60007d:c.instructions+=4;goto B60007d;
case 0x60007f:c.instructions+=3;goto B60007f;
case 0x600080:c.instructions+=2;goto B600080;
case 0x600081:c.instructions+=1;goto B600081;
case 0x600090:goto L600090;
case 0x600093:c.instructions+=8;goto B600093;
case 0x600094:c.instructions+=7;goto B600094;
case 0x600096:c.instructions+=6;goto B600096;
case 0x600099:c.instructions+=5;goto B600099;
case 0x60009b:c.instructions+=4;goto B60009b;
case 0x60009c:c.instructions+=3;goto B60009c;
case 0x60009d:c.instructions+=2;goto B60009d;
case 0x6000a1:c.instructions+=1;goto B6000a1;
case 0x6000a7:goto L6000a7;
case 0x6000ad:c.instructions+=2;goto B6000ad;
case 0x6000af:c.instructions+=1;goto B6000af;
case 0x6000b1:goto L6000b1;
case 0x6000b4:c.instructions+=3;goto B6000b4;
case 0x6000b7:c.instructions+=2;goto B6000b7;
case 0x6000ba:c.instructions+=1;goto B6000ba;
case 0x6000bc:goto L6000bc;
case 0x6000c3:c.instructions+=1;goto B6000c3;
case 0x6000ca:goto L6000ca;
case 0x6000cb:c.instructions+=6;goto B6000cb;
case 0x6000cc:c.instructions+=5;goto B6000cc;
case 0x6000d1:c.instructions+=4;goto B6000d1;
case 0x6000d3:c.instructions+=3;goto B6000d3;
case 0x6000d4:c.instructions+=2;goto B6000d4;
case 0x6000d7:c.instructions+=1;goto B6000d7;
case 0x6000d8:goto L6000d8;
case 0x6000db:c.instructions+=2;goto B6000db;
case 0x6000de:c.instructions+=1;goto B6000de;
case 0x6000e4:goto L6000e4;
case 0x6000e7:c.instructions+=1;goto B6000e7;
case 0x6000e9:goto L6000e9;
case 0x6000ec:c.instructions+=1;goto B6000ec;
case 0x6000f2:goto L6000f2;
case 0x6000f8:c.instructions+=2;goto B6000f8;
case 0x6000fa:c.instructions+=1;goto B6000fa;
case 0x6000fc:goto L6000fc;
case 0x600102:c.instructions+=2;goto B600102;
case 0x600105:c.instructions+=1;goto B600105;
case 0x60010b:goto L60010b;
case 0x600110:c.instructions+=2;goto B600110;
case 0x600112:c.instructions+=1;goto B600112;
case 0x600118:goto L600118;
case 0x60011d:c.instructions+=1;goto B60011d;
case 0x600122:goto L600122;
case 0x600124:c.instructions+=1;goto B600124;
case 0x60012a:goto L60012a;
case 0x60012f:c.instructions+=1;goto B60012f;
case 0x600134:goto L600134;
case 0x600136:c.instructions+=1;goto B600136;
case 0x60013c:goto L60013c;
case 0x600141:c.instructions+=2;goto B600141;
case 0x600143:c.instructions+=1;goto B600143;
case 0x600145:goto L600145;
case 0x60014a:goto L60014a;
case 0x60014c:c.instructions+=1;goto B60014c;
case 0x600152:goto L600152;
case 0x600155:c.instructions+=4;goto B600155;
case 0x600157:c.instructions+=3;goto B600157;
case 0x600159:c.instructions+=2;goto B600159;
case 0x60015e:c.instructions+=1;goto B60015e;
case 0x600160:goto L600160;
case 0x600163:c.instructions+=1;goto B600163;
case 0x600165:goto L600165;
case 0x600168:c.instructions+=1;goto B600168;
case 0x60016e:goto L60016e;
case 0x600174:c.instructions+=3;goto B600174;
case 0x600176:c.instructions+=2;goto B600176;
case 0x600179:c.instructions+=1;goto B600179;
case 0x60017b:goto L60017b;
case 0x60017d:c.instructions+=1;goto B60017d;
case 0x600182:goto L600182;
case 0x600185:c.instructions+=1;goto B600185;
case 0x600187:goto L600187;
case 0x600189:c.instructions+=1;goto B600189;
case 0x60018e:goto L60018e;
case 0x600191:c.instructions+=1;goto B600191;
case 0x600193:goto L600193;
case 0x600195:c.instructions+=1;goto B600195;
case 0x60019a:goto L60019a;
case 0x6001a0:c.instructions+=3;goto B6001a0;
case 0x6001a2:c.instructions+=2;goto B6001a2;
case 0x6001a5:c.instructions+=1;goto B6001a5;
case 0x6001ab:goto L6001ab;
case 0x6001ae:c.instructions+=1;goto B6001ae;
case 0x6001b4:goto L6001b4;
case 0x6001b7:c.instructions+=1;goto B6001b7;
case 0x6001bd:goto L6001bd;
case 0x6001c4:c.instructions+=1;goto B6001c4;
case 0x6001ca:goto L6001ca;
case 0x6001d0:c.instructions+=2;goto B6001d0;
case 0x6001d2:c.instructions+=1;goto B6001d2;
case 0x6001d4:goto L6001d4;
case 0x6001d5:c.instructions+=5;goto B6001d5;
case 0x6001d6:c.instructions+=4;goto B6001d6;
case 0x6001d8:c.instructions+=3;goto B6001d8;
case 0x6001d9:c.instructions+=2;goto B6001d9;
case 0x6001dc:c.instructions+=1;goto B6001dc;
case 0x6001e1:goto L6001e1;
case 0x6001e4:c.instructions+=1;goto B6001e4;
case 0x6001ea:goto L6001ea;
case 0x6001ec:c.instructions+=1;goto B6001ec;
case 0x6001f1:goto L6001f1;
case 0x6001f3:c.instructions+=7;goto B6001f3;
case 0x6001f6:c.instructions+=6;goto B6001f6;
case 0x6001f8:c.instructions+=5;goto B6001f8;
case 0x6001fb:c.instructions+=4;goto B6001fb;
case 0x600202:c.instructions+=3;goto B600202;
case 0x600208:c.instructions+=2;goto B600208;
case 0x60020a:c.instructions+=1;goto B60020a;
case 0x600210:goto L600210;
case 0x600212:c.instructions+=1;goto B600212;
case 0x600217:goto L600217;
case 0x600218:c.instructions+=4;goto B600218;
case 0x60021d:c.instructions+=3;goto B60021d;
case 0x60021f:c.instructions+=2;goto B60021f;
case 0x600221:c.instructions+=1;goto B600221;
case 0x600226:goto L600226;
case 0x600228:c.instructions+=1;goto B600228;
case 0x60022a:goto L60022a;
case 0x60022f:c.instructions+=1;goto B60022f;
case 0x600234:goto L600234;
case 0x600236:c.instructions+=1;goto B600236;
case 0x600238:goto L600238;
case 0x60023b:c.instructions+=2;goto B60023b;
case 0x60023e:c.instructions+=1;goto B60023e;
case 0x600243:goto L600243;
case 0x600249:c.instructions+=3;goto B600249;
case 0x60024b:c.instructions+=2;goto B60024b;
case 0x60024e:c.instructions+=1;goto B60024e;
case 0x600250:goto L600250;
case 0x600256:goto L600256;
case 0x60025b:c.instructions+=1;goto B60025b;
case 0x600260:goto L600260;
case 0x600262:c.instructions+=1;goto B600262;
case 0x600268:goto L600268;
case 0x60026e:c.instructions+=1;goto B60026e;
case 0x600273:goto L600273;
case 0x600275:c.instructions+=1;goto B600275;
case 0x60027a:goto L60027a;
case 0x60027c:c.instructions+=1;goto B60027c;
case 0x60027e:goto L60027e;
case 0x600283:c.instructions+=4;goto B600283;
case 0x600285:c.instructions+=3;goto B600285;
case 0x600288:c.instructions+=2;goto B600288;
case 0x60028d:c.instructions+=1;goto B60028d;
case 0x600293:goto L600293;
case 0x600296:c.instructions+=2;goto B600296;
case 0x600298:c.instructions+=1;goto B600298;
case 0x60029e:goto L60029e;
case 0x6002a3:c.instructions+=3;goto B6002a3;
case 0x6002a6:c.instructions+=2;goto B6002a6;
case 0x6002a9:c.instructions+=1;goto B6002a9;
case 0x6002af:goto L6002af;
case 0x6002b4:c.instructions+=2;goto B6002b4;
case 0x6002b6:c.instructions+=1;goto B6002b6;
case 0x6002bc:goto L6002bc;
case 0x6002c1:c.instructions+=1;goto B6002c1;
case 0x6002c6:goto L6002c6;
case 0x6002cc:c.instructions+=2;goto B6002cc;
case 0x6002ce:c.instructions+=1;goto B6002ce;
case 0x6002d4:goto L6002d4;
case 0x6002da:c.instructions+=2;goto B6002da;
case 0x6002dd:c.instructions+=1;goto B6002dd;
case 0x6002df:goto L6002df;
case 0x6002e1:c.instructions+=1;goto B6002e1;
case 0x6002e6:goto L6002e6;
case 0x6002e8:c.instructions+=1;goto B6002e8;
case 0x6002ea:goto L6002ea;
case 0x6002ef:c.instructions+=1;goto B6002ef;
case 0x6002f1:goto L6002f1;
case 0x6002f6:c.instructions+=1;goto B6002f6;
case 0x6002fb:goto L6002fb;
case 0x6002fd:c.instructions+=1;goto B6002fd;
case 0x600303:goto L600303;
case 0x600309:c.instructions+=1;goto B600309;
case 0x60030e:goto L60030e;
case 0x600315:c.instructions+=1;goto B600315;
case 0x600317:goto L600317;
case 0x60031c:c.instructions+=1;goto B60031c;
case 0x600321:goto L600321;
case 0x600323:c.instructions+=1;goto B600323;
case 0x600325:goto L600325;
case 0x60032a:c.instructions+=1;goto B60032a;
case 0x60032f:goto L60032f;
case 0x600331:c.instructions+=1;goto B600331;
case 0x600333:goto L600333;
case 0x600338:c.instructions+=1;goto B600338;
case 0x60033d:goto L60033d;
case 0x600342:c.instructions+=1;goto B600342;
case 0x600347:goto L600347;
case 0x600349:c.instructions+=1;goto B600349;
case 0x60034b:goto L60034b;
case 0x60034e:goto L60034e;
case 0x600353:c.instructions+=1;goto B600353;
case 0x600358:goto L600358;
case 0x60035a:c.instructions+=1;goto B60035a;
case 0x60035c:goto L60035c;
case 0x60035f:goto L60035f;
case 0x600364:c.instructions+=1;goto B600364;
case 0x600369:goto L600369;
case 0x60036b:c.instructions+=1;goto B60036b;
case 0x600371:goto L600371;
case 0x600374:c.instructions+=1;goto B600374;
case 0x600379:goto L600379;
case 0x60037c:c.instructions+=2;goto B60037c;
case 0x60037f:c.instructions+=1;goto B60037f;
case 0x600385:goto L600385;
case 0x600388:c.instructions+=1;goto B600388;
case 0x60038e:goto L60038e;
case 0x600392:c.instructions+=2;goto B600392;
case 0x600395:c.instructions+=1;goto B600395;
case 0x600397:goto L600397;
case 0x600398:c.instructions+=1;goto B600398;
case 0x60039a:goto L60039a;
case 0x60039d:c.instructions+=1;goto B60039d;
case 0x6003a3:goto L6003a3;
case 0x6003a5:c.instructions+=1;goto B6003a5;
case 0x6003aa:goto L6003aa;
case 0x6003af:c.instructions+=4;goto B6003af;
case 0x6003b0:c.instructions+=3;goto B6003b0;
case 0x6003b2:c.instructions+=2;goto B6003b2;
case 0x6003b4:c.instructions+=1;goto B6003b4;
case 0x6003b9:goto L6003b9;
case 0x6003c0:c.instructions+=1;goto B6003c0;
case 0x6003c6:goto L6003c6;
case 0x6003cb:c.instructions+=2;goto B6003cb;
case 0x6003cd:c.instructions+=1;goto B6003cd;
case 0x6003cf:goto L6003cf;
case 0x6003d4:c.instructions+=2;goto B6003d4;
case 0x6003d6:c.instructions+=1;goto B6003d6;
case 0x6003d8:goto L6003d8;
case 0x6003dd:goto L6003dd;
case 0x6003e2:c.instructions+=2;goto B6003e2;
case 0x6003e4:c.instructions+=1;goto B6003e4;
case 0x6003ea:goto L6003ea;
case 0x6003ef:c.instructions+=2;goto B6003ef;
case 0x6003f1:c.instructions+=1;goto B6003f1;
case 0x6003f6:goto L6003f6;
case 0x6003fb:c.instructions+=2;goto B6003fb;
case 0x6003fd:c.instructions+=1;goto B6003fd;
case 0x6003ff:goto L6003ff;
case 0x600400:c.instructions+=5;goto B600400;
case 0x600401:c.instructions+=4;goto B600401;
case 0x600403:c.instructions+=3;goto B600403;
case 0x600404:c.instructions+=2;goto B600404;
case 0x600407:c.instructions+=1;goto B600407;
case 0x60040c:goto L60040c;
case 0x600412:c.instructions+=5;goto B600412;
case 0x600414:c.instructions+=4;goto B600414;
case 0x600419:c.instructions+=3;goto B600419;
case 0x60041e:c.instructions+=2;goto B60041e;
case 0x600422:c.instructions+=1;goto B600422;
case 0x600424:goto L600424;
case 0x600426:c.instructions+=1;goto B600426;
case 0x600429:goto L600429;
case 0x60042b:c.instructions+=1;goto B60042b;
case 0x60042d:goto L60042d;
case 0x600432:c.instructions+=1;goto B600432;
case 0x600436:goto L600436;
case 0x600438:c.instructions+=1;goto B600438;
case 0x60043d:goto L60043d;
case 0x60043f:c.instructions+=3;goto B60043f;
case 0x600441:c.instructions+=2;goto B600441;
case 0x600445:c.instructions+=1;goto B600445;
case 0x60044a:goto L60044a;
case 0x60044e:c.instructions+=5;goto B60044e;
case 0x600450:c.instructions+=4;goto B600450;
case 0x600454:c.instructions+=3;goto B600454;
case 0x600456:c.instructions+=2;goto B600456;
case 0x60045a:c.instructions+=1;goto B60045a;
case 0x60045f:goto L60045f;
case 0x600463:c.instructions+=8;goto B600463;
case 0x600465:c.instructions+=7;goto B600465;
case 0x600469:c.instructions+=6;goto B600469;
case 0x60046b:c.instructions+=5;goto B60046b;
case 0x60046f:c.instructions+=4;goto B60046f;
case 0x600471:c.instructions+=3;goto B600471;
case 0x600473:c.instructions+=2;goto B600473;
case 0x600475:c.instructions+=1;goto B600475;
case 0x60047a:goto L60047a;
case 0x60047c:c.instructions+=4;goto B60047c;
case 0x600481:c.instructions+=3;goto B600481;
case 0x600483:c.instructions+=2;goto B600483;
case 0x600485:c.instructions+=1;goto B600485;
case 0x600487:goto L600487;
case 0x60048d:c.instructions+=2;goto B60048d;
case 0x60048f:c.instructions+=1;goto B60048f;
case 0x600491:goto L600491;
case 0x600494:c.instructions+=4;goto B600494;
case 0x600497:c.instructions+=3;goto B600497;
case 0x60049e:c.instructions+=2;goto B60049e;
case 0x6004a0:c.instructions+=1;goto B6004a0;
case 0x6004a2:goto L6004a2;
case 0x6004a5:c.instructions+=1;goto B6004a5;
case 0x6004a7:goto L6004a7;
case 0x6004ad:goto L6004ad;
case 0x6004b2:c.instructions+=1;goto B6004b2;
case 0x6004b7:goto L6004b7;
case 0x6004b9:c.instructions+=1;goto B6004b9;
case 0x6004bb:goto L6004bb;
case 0x6004c0:c.instructions+=1;goto B6004c0;
case 0x6004c5:goto L6004c5;
case 0x6004c7:c.instructions+=1;goto B6004c7;
case 0x6004c9:goto L6004c9;
case 0x6004cc:goto L6004cc;
case 0x6004d3:c.instructions+=1;goto B6004d3;
case 0x6004d5:goto L6004d5;
case 0x6004d7:c.instructions+=4;goto B6004d7;
case 0x6004dc:c.instructions+=3;goto B6004dc;
case 0x6004de:c.instructions+=2;goto B6004de;
case 0x6004e0:c.instructions+=1;goto B6004e0;
case 0x6004e2:goto L6004e2;
case 0x6004e8:c.instructions+=1;goto B6004e8;
case 0x6004ee:goto L6004ee;
case 0x6004f4:goto L6004f4;
case 0x6004fb:c.instructions+=1;goto B6004fb;
case 0x6004fd:goto L6004fd;
case 0x600502:c.instructions+=2;goto B600502;
case 0x600504:c.instructions+=1;goto B600504;
case 0x600506:goto L600506;
case 0x60050c:c.instructions+=1;goto B60050c;
case 0x60050e:goto L60050e;
case 0x600513:c.instructions+=1;goto B600513;
case 0x600515:goto L600515;
case 0x60051a:goto L60051a;
case 0x60051c:goto L60051c;
case 0x600522:c.instructions+=3;goto B600522;
case 0x600524:c.instructions+=2;goto B600524;
case 0x600527:c.instructions+=1;goto B600527;
case 0x600529:goto L600529;
case 0x60052e:c.instructions+=2;goto B60052e;
case 0x600530:c.instructions+=1;goto B600530;
case 0x600532:goto L600532;
case 0x600537:c.instructions+=1;goto B600537;
case 0x60053c:goto L60053c;
case 0x60053e:c.instructions+=1;goto B60053e;
case 0x600540:goto L600540;
case 0x600543:c.instructions+=1;goto B600543;
case 0x600545:goto L600545;
case 0x600549:c.instructions+=3;goto B600549;
case 0x60054f:c.instructions+=2;goto B60054f;
case 0x600551:c.instructions+=1;goto B600551;
case 0x600553:goto L600553;
case 0x600559:goto L600559;
case 0x60055b:c.instructions+=6;goto B60055b;
case 0x60055c:c.instructions+=5;goto B60055c;
case 0x60055e:c.instructions+=4;goto B60055e;
case 0x60055f:c.instructions+=3;goto B60055f;
case 0x600560:c.instructions+=2;goto B600560;
case 0x600563:c.instructions+=1;goto B600563;
case 0x600564:goto L600564;
case 0x600565:c.instructions+=6;goto B600565;
case 0x600566:c.instructions+=5;goto B600566;
case 0x600568:c.instructions+=4;goto B600568;
case 0x60056a:c.instructions+=3;goto B60056a;
case 0x60056b:c.instructions+=2;goto B60056b;
case 0x60056e:c.instructions+=1;goto B60056e;
case 0x600590:goto L600590;
case 0x600591:c.instructions+=4;goto B600591;
case 0x600592:c.instructions+=3;goto B600592;
case 0x600593:c.instructions+=2;goto B600593;
case 0x600595:c.instructions+=1;goto B600595;
case 0x60059a:goto L60059a;
case 0x60059c:c.instructions+=3;goto B60059c;
case 0x6005a2:c.instructions+=2;goto B6005a2;
case 0x6005a4:c.instructions+=1;goto B6005a4;
case 0x6005a6:goto L6005a6;
case 0x6005ac:c.instructions+=1;goto B6005ac;
case 0x6005ae:goto L6005ae;
case 0x6005b4:c.instructions+=2;goto B6005b4;
case 0x6005b6:c.instructions+=1;goto B6005b6;
case 0x6005b8:goto L6005b8;
case 0x6005b9:c.instructions+=3;goto B6005b9;
case 0x6005ba:c.instructions+=2;goto B6005ba;
case 0x6005bb:c.instructions+=1;goto B6005bb;
case 0x6005c0:goto L6005c0;
case 0x6005c6:c.instructions+=1;goto B6005c6;
case 0x6005cc:goto L6005cc;
case 0x6005d2:c.instructions+=2;goto B6005d2;
case 0x6005d4:c.instructions+=1;goto B6005d4;
case 0x6005d6:goto L6005d6;
case 0x6005d9:c.instructions+=3;goto B6005d9;
case 0x6005da:c.instructions+=2;goto B6005da;
case 0x6005db:c.instructions+=1;goto B6005db;
case 0x6005e0:goto L6005e0;
case 0x6005e1:c.instructions+=3;goto B6005e1;
case 0x6005e2:c.instructions+=2;goto B6005e2;
case 0x6005e3:c.instructions+=1;goto B6005e3;
case 0x6005f0:goto L6005f0;
case 0x6005f5:c.instructions+=5;goto B6005f5;
case 0x6005f7:c.instructions+=4;goto B6005f7;
case 0x6005fa:c.instructions+=3;goto B6005fa;
case 0x6005fb:c.instructions+=2;goto B6005fb;
case 0x6005fd:c.instructions+=1;goto B6005fd;
case 0x6005ff:goto L6005ff;
case 0x600605:c.instructions+=2;goto B600605;
case 0x600607:c.instructions+=1;goto B600607;
case 0x600609:goto L600609;
case 0x60060f:c.instructions+=2;goto B60060f;
case 0x600611:c.instructions+=1;goto B600611;
case 0x600613:goto L600613;
case 0x600619:c.instructions+=2;goto B600619;
case 0x60061c:c.instructions+=1;goto B60061c;
case 0x60061e:goto L60061e;
case 0x600624:c.instructions+=4;goto B600624;
case 0x60062a:c.instructions+=3;goto B60062a;
case 0x60062c:c.instructions+=2;goto B60062c;
case 0x60062f:c.instructions+=1;goto B60062f;
case 0x600631:goto L600631;
case 0x600633:c.instructions+=2;goto B600633;
case 0x600635:c.instructions+=1;goto B600635;
case 0x60063a:goto L60063a;
case 0x60063c:goto L60063c;
case 0x60063f:c.instructions+=1;goto B60063f;
case 0x600641:goto L600641;
case 0x600647:c.instructions+=2;goto B600647;
case 0x600649:c.instructions+=1;goto B600649;
case 0x60064b:goto L60064b;
case 0x600651:c.instructions+=2;goto B600651;
case 0x600653:c.instructions+=1;goto B600653;
case 0x600655:goto L600655;
case 0x600657:c.instructions+=2;goto B600657;
case 0x600659:c.instructions+=1;goto B600659;
case 0x60065e:goto L60065e;
case 0x600660:goto L600660;
case 0x600666:c.instructions+=2;goto B600666;
case 0x600668:c.instructions+=1;goto B600668;
case 0x60066a:goto L60066a;
case 0x60066d:c.instructions+=1;goto B60066d;
case 0x60066f:goto L60066f;
case 0x600676:goto L600676;
case 0x60067c:c.instructions+=3;goto B60067c;
case 0x60067e:c.instructions+=2;goto B60067e;
case 0x600681:c.instructions+=1;goto B600681;
case 0x600683:goto L600683;
case 0x600686:c.instructions+=1;goto B600686;
case 0x600688:goto L600688;
case 0x60068a:c.instructions+=1;goto B60068a;
case 0x60068f:goto L60068f;
case 0x600696:c.instructions+=1;goto B600696;
case 0x600698:goto L600698;
case 0x60069d:c.instructions+=1;goto B60069d;
case 0x6006a2:goto L6006a2;
case 0x6006a4:c.instructions+=1;goto B6006a4;
case 0x6006a6:goto L6006a6;
case 0x6006ac:c.instructions+=2;goto B6006ac;
case 0x6006ae:c.instructions+=1;goto B6006ae;
case 0x6006b0:goto L6006b0;
case 0x6006b5:goto L6006b5;
case 0x6006b7:c.instructions+=1;goto B6006b7;
case 0x6006b9:goto L6006b9;
case 0x6006bb:c.instructions+=1;goto B6006bb;
case 0x6006c0:goto L6006c0;
case 0x6006c7:c.instructions+=1;goto B6006c7;
case 0x6006c9:goto L6006c9;
case 0x6006ce:c.instructions+=2;goto B6006ce;
case 0x6006d0:c.instructions+=1;goto B6006d0;
case 0x6006d2:goto L6006d2;
case 0x6006d7:goto L6006d7;
case 0x6006d9:c.instructions+=1;goto B6006d9;
case 0x6006db:goto L6006db;
case 0x6006e0:c.instructions+=2;goto B6006e0;
case 0x6006e3:c.instructions+=1;goto B6006e3;
case 0x6006e5:goto L6006e5;
case 0x6006eb:c.instructions+=2;goto B6006eb;
case 0x6006ed:c.instructions+=1;goto B6006ed;
case 0x6006ef:goto L6006ef;
case 0x6006f3:c.instructions+=1;goto B6006f3;
case 0x6006f5:goto L6006f5;
case 0x6006f7:c.instructions+=3;goto B6006f7;
case 0x6006f9:c.instructions+=2;goto B6006f9;
case 0x6006fb:c.instructions+=1;goto B6006fb;
case 0x600700:goto L600700;
case 0x600702:c.instructions+=1;goto B600702;
case 0x600707:goto L600707;
case 0x600709:c.instructions+=2;goto B600709;
case 0x60070a:c.instructions+=1;goto B60070a;
case 0x600710:goto L600710;
case 0x600711:c.instructions+=5;goto B600711;
case 0x600713:c.instructions+=4;goto B600713;
case 0x600716:c.instructions+=3;goto B600716;
case 0x60071c:c.instructions+=2;goto B60071c;
case 0x60071e:c.instructions+=1;goto B60071e;
case 0x600720:goto L600720;
case 0x600725:c.instructions+=3;goto B600725;
case 0x600726:c.instructions+=2;goto B600726;
case 0x60072b:c.instructions+=1;goto B60072b;
case 0x600730:goto L600730;
case 0x600732:c.instructions+=1;goto B600732;
case 0x600734:goto L600734;
case 0x600736:c.instructions+=2;goto B600736;
case 0x600739:c.instructions+=1;goto B600739;
case 0x60073b:goto L60073b;
case 0x60073e:c.instructions+=1;goto B60073e;
case 0x600740:goto L600740;
case 0x600743:c.instructions+=2;goto B600743;
case 0x600744:c.instructions+=1;goto B600744;
case 0x600749:goto L600749;
case 0x60074b:c.instructions+=2;goto B60074b;
case 0x60074c:c.instructions+=1;goto B60074c;
case 0x60074f:goto L60074f;
case 0x600755:c.instructions+=7;goto B600755;
case 0x60075b:c.instructions+=6;goto B60075b;
case 0x60075c:c.instructions+=5;goto B60075c;
case 0x600763:c.instructions+=4;goto B600763;
case 0x600764:c.instructions+=3;goto B600764;
case 0x600765:c.instructions+=2;goto B600765;
case 0x600766:c.instructions+=1;goto B600766;
case 0x60076b:goto L60076b;
case 0x60076e:c.instructions+=7;goto B60076e;
case 0x600773:c.instructions+=6;goto B600773;
case 0x60077d:c.instructions+=5;goto B60077d;
case 0x60077f:c.instructions+=4;goto B60077f;
case 0x600782:c.instructions+=3;goto B600782;
case 0x600787:c.instructions+=2;goto B600787;
case 0x600788:c.instructions+=1;goto B600788;
case 0x60078d:goto L60078d;
case 0x60078f:c.instructions+=1;goto B60078f;
case 0x600791:goto L600791;
case 0x600793:c.instructions+=2;goto B600793;
case 0x600795:c.instructions+=1;goto B600795;
case 0x60079b:goto L60079b;
case 0x60079e:c.instructions+=1;goto B60079e;
case 0x6007a0:goto L6007a0;
case 0x6007a3:c.instructions+=4;goto B6007a3;
case 0x6007a6:c.instructions+=3;goto B6007a6;
case 0x6007a7:c.instructions+=2;goto B6007a7;
case 0x6007a8:c.instructions+=1;goto B6007a8;
case 0x6007ad:goto L6007ad;
case 0x6007b0:c.instructions+=3;goto B6007b0;
case 0x6007ba:c.instructions+=2;goto B6007ba;
case 0x6007bc:c.instructions+=1;goto B6007bc;
case 0x6007be:goto L6007be;
case 0x6007c1:c.instructions+=1;goto B6007c1;
case 0x6007c3:goto L6007c3;
case 0x6007c6:c.instructions+=1;goto B6007c6;
case 0x6007c8:goto L6007c8;
case 0x6007cb:c.instructions+=2;goto B6007cb;
case 0x6007cc:c.instructions+=1;goto B6007cc;
case 0x6007d1:goto L6007d1;
case 0x6007d3:c.instructions+=1;goto B6007d3;
case 0x6007d9:goto L6007d9;
case 0x6007da:c.instructions+=4;goto B6007da;
case 0x6007dc:c.instructions+=3;goto B6007dc;
case 0x6007de:c.instructions+=2;goto B6007de;
case 0x6007e3:c.instructions+=1;goto B6007e3;
case 0x6007e5:goto L6007e5;
case 0x6007e7:goto L6007e7;
case 0x6007eb:c.instructions+=2;goto B6007eb;
case 0x6007ed:c.instructions+=1;goto B6007ed;
case 0x6007ef:goto L6007ef;
case 0x6007f5:c.instructions+=2;goto B6007f5;
case 0x6007fb:c.instructions+=1;goto B6007fb;
case 0x600800:goto L600800;
case 0x600802:c.instructions+=8;goto B600802;
case 0x600807:c.instructions+=7;goto B600807;
case 0x600809:c.instructions+=6;goto B600809;
case 0x60080b:c.instructions+=5;goto B60080b;
case 0x60080e:c.instructions+=4;goto B60080e;
case 0x600810:c.instructions+=3;goto B600810;
case 0x600813:c.instructions+=2;goto B600813;
case 0x600815:c.instructions+=1;goto B600815;
case 0x600817:goto L600817;
case 0x60081d:c.instructions+=2;goto B60081d;
case 0x600823:c.instructions+=1;goto B600823;
case 0x600828:goto L600828;
case 0x60082a:c.instructions+=10;goto B60082a;
case 0x60082f:c.instructions+=9;goto B60082f;
case 0x600831:c.instructions+=8;goto B600831;
case 0x600833:c.instructions+=7;goto B600833;
case 0x600836:c.instructions+=6;goto B600836;
case 0x600838:c.instructions+=5;goto B600838;
case 0x60083b:c.instructions+=4;goto B60083b;
case 0x60083d:c.instructions+=3;goto B60083d;
case 0x600840:c.instructions+=2;goto B600840;
case 0x600841:c.instructions+=1;goto B600841;
case 0x600847:goto L600847;
case 0x60084a:c.instructions+=7;goto B60084a;
case 0x600850:c.instructions+=6;goto B600850;
case 0x600856:c.instructions+=5;goto B600856;
case 0x600858:c.instructions+=4;goto B600858;
case 0x60085e:c.instructions+=3;goto B60085e;
case 0x600860:c.instructions+=2;goto B600860;
case 0x600863:c.instructions+=1;goto B600863;
case 0x600865:goto L600865;
case 0x600868:c.instructions+=4;goto B600868;
case 0x60086b:c.instructions+=3;goto B60086b;
case 0x60086c:c.instructions+=2;goto B60086c;
case 0x60086d:c.instructions+=1;goto B60086d;
case 0x600872:goto L600872;
case 0x600875:c.instructions+=3;goto B600875;
case 0x600877:c.instructions+=2;goto B600877;
case 0x60087c:c.instructions+=1;goto B60087c;
case 0x60087e:goto L60087e;
case 0x600883:c.instructions+=1;goto B600883;
case 0x600888:goto L600888;
case 0x60088b:c.instructions+=2;goto B60088b;
case 0x60088d:c.instructions+=1;goto B60088d;
case 0x60088f:goto L60088f;
case 0x600891:c.instructions+=1;goto B600891;
case 0x600893:goto L600893;
case 0x600899:c.instructions+=2;goto B600899;
case 0x60089a:c.instructions+=1;goto B60089a;
case 0x60089f:goto L60089f;
case 0x6008a2:c.instructions+=1;goto B6008a2;
case 0x6008a4:goto L6008a4;
case 0x6008aa:c.instructions+=2;goto B6008aa;
case 0x6008b0:c.instructions+=1;goto B6008b0;
case 0x6008b5:goto L6008b5;
case 0x6008b7:c.instructions+=9;goto B6008b7;
case 0x6008bc:c.instructions+=8;goto B6008bc;
case 0x6008be:c.instructions+=7;goto B6008be;
case 0x6008c0:c.instructions+=6;goto B6008c0;
case 0x6008c3:c.instructions+=5;goto B6008c3;
case 0x6008c5:c.instructions+=4;goto B6008c5;
case 0x6008c8:c.instructions+=3;goto B6008c8;
case 0x6008ca:c.instructions+=2;goto B6008ca;
case 0x6008cd:c.instructions+=1;goto B6008cd;
case 0x6008cf:goto L6008cf;
case 0x6008d0:c.instructions+=4;goto B6008d0;
case 0x6008d1:c.instructions+=3;goto B6008d1;
case 0x6008d3:c.instructions+=2;goto B6008d3;
case 0x6008d4:c.instructions+=1;goto B6008d4;
case 0x6008d7:goto L6008d7;
case 0x6008d9:c.instructions+=1;goto B6008d9;
case 0x6008db:goto L6008db;
case 0x6008dc:c.instructions+=4;goto B6008dc;
case 0x6008dd:c.instructions+=3;goto B6008dd;
case 0x6008df:c.instructions+=2;goto B6008df;
case 0x6008e0:c.instructions+=1;goto B6008e0;
case 0x6008e3:goto L6008e3;
case 0x6008e5:c.instructions+=1;goto B6008e5;
case 0x6008e7:goto L6008e7;
case 0x6008ea:c.instructions+=2;goto B6008ea;
case 0x6008f1:c.instructions+=1;goto B6008f1;
case 0x6008f3:goto L6008f3;
case 0x6008f4:c.instructions+=4;goto B6008f4;
case 0x6008f5:c.instructions+=3;goto B6008f5;
case 0x6008fa:c.instructions+=2;goto B6008fa;
case 0x6008fb:c.instructions+=1;goto B6008fb;
case 0x600900:goto L600900;
case 0x600905:c.instructions+=5;goto B600905;
case 0x600906:c.instructions+=4;goto B600906;
case 0x600908:c.instructions+=3;goto B600908;
case 0x60090a:c.instructions+=2;goto B60090a;
case 0x600914:c.instructions+=1;goto B600914;
case 0x600916:goto L600916;
case 0x600920:goto L600920;
case 0x600927:c.instructions+=1;goto B600927;
case 0x60092c:goto L60092c;
case 0x600931:c.instructions+=3;goto B600931;
case 0x600932:c.instructions+=2;goto B600932;
case 0x600934:c.instructions+=1;goto B600934;
case 0x600936:goto L600936;
case 0x60093c:c.instructions+=2;goto B60093c;
case 0x60093e:c.instructions+=1;goto B60093e;
case 0x600940:goto L600940;
case 0x600942:c.instructions+=1;goto B600942;
case 0x600944:goto L600944;
case 0x600949:c.instructions+=5;goto B600949;
case 0x60094a:c.instructions+=4;goto B60094a;
case 0x60094f:c.instructions+=3;goto B60094f;
case 0x600951:c.instructions+=2;goto B600951;
case 0x600953:c.instructions+=1;goto B600953;
case 0x600955:goto L600955;
case 0x60095b:c.instructions+=2;goto B60095b;
case 0x60095d:c.instructions+=1;goto B60095d;
case 0x600962:goto L600962;
case 0x600965:c.instructions+=2;goto B600965;
case 0x600967:c.instructions+=1;goto B600967;
case 0x600969:goto L600969;
case 0x60096b:c.instructions+=5;goto B60096b;
case 0x60096e:c.instructions+=4;goto B60096e;
case 0x60096f:c.instructions+=3;goto B60096f;
case 0x600971:c.instructions+=2;goto B600971;
case 0x600976:c.instructions+=1;goto B600976;
case 0x60097b:goto L60097b;
case 0x60097e:goto L60097e;
case 0x600980:c.instructions+=1;goto B600980;
case 0x600985:goto L600985;
case 0x600988:c.instructions+=3;goto B600988;
case 0x60098b:c.instructions+=2;goto B60098b;
case 0x60098d:c.instructions+=1;goto B60098d;
case 0x60098f:goto L60098f;
case 0x600990:c.instructions+=1;goto B600990;
case 0x600995:goto L600995;
case 0x600996:c.instructions+=1;goto B600996;
case 0x6009a0:goto L6009a0;
case 0x6009a1:c.instructions+=17;goto B6009a1;
case 0x6009a3:c.instructions+=16;goto B6009a3;
case 0x6009a6:c.instructions+=15;goto B6009a6;
case 0x6009a8:c.instructions+=14;goto B6009a8;
case 0x6009ad:c.instructions+=13;goto B6009ad;
case 0x6009b3:c.instructions+=12;goto B6009b3;
case 0x6009b4:c.instructions+=11;goto B6009b4;
case 0x6009bb:c.instructions+=10;goto B6009bb;
case 0x6009c1:c.instructions+=9;goto B6009c1;
case 0x6009c2:c.instructions+=8;goto B6009c2;
case 0x6009c4:c.instructions+=7;goto B6009c4;
case 0x6009c7:c.instructions+=6;goto B6009c7;
case 0x6009ca:c.instructions+=5;goto B6009ca;
case 0x6009cb:c.instructions+=4;goto B6009cb;
case 0x6009ce:c.instructions+=3;goto B6009ce;
case 0x6009cf:c.instructions+=2;goto B6009cf;
case 0x6009d3:c.instructions+=1;goto B6009d3;
case 0x6009d5:goto L6009d5;
case 0x6009d8:c.instructions+=1;goto B6009d8;
case 0x6009da:goto L6009da;
case 0x6009dc:c.instructions+=2;goto B6009dc;
case 0x6009de:c.instructions+=1;goto B6009de;
case 0x6009e3:goto L6009e3;
case 0x6009e8:c.instructions+=2;goto B6009e8;
case 0x6009ea:c.instructions+=1;goto B6009ea;
case 0x6009ec:goto L6009ec;
case 0x6009f1:c.instructions+=2;goto B6009f1;
case 0x6009f3:c.instructions+=1;goto B6009f3;
case 0x6009f5:goto L6009f5;
case 0x6009f8:c.instructions+=2;goto B6009f8;
case 0x6009fe:c.instructions+=1;goto B6009fe;
case 0x600a03:goto L600a03;
case 0x600a09:c.instructions+=4;goto B600a09;
case 0x600a0f:c.instructions+=3;goto B600a0f;
case 0x600a11:c.instructions+=2;goto B600a11;
case 0x600a14:c.instructions+=1;goto B600a14;
case 0x600a16:goto L600a16;
case 0x600a1a:c.instructions+=1;goto B600a1a;
case 0x600a1c:goto L600a1c;
case 0x600a1e:c.instructions+=1;goto B600a1e;
case 0x600a26:goto L600a26;
case 0x600a2b:c.instructions+=2;goto B600a2b;
case 0x600a2d:c.instructions+=1;goto B600a2d;
case 0x600a2f:goto L600a2f;
case 0x600a35:c.instructions+=3;goto B600a35;
case 0x600a3b:c.instructions+=2;goto B600a3b;
case 0x600a3f:c.instructions+=1;goto B600a3f;
case 0x600a41:goto L600a41;
case 0x600a44:c.instructions+=3;goto B600a44;
case 0x600a47:c.instructions+=2;goto B600a47;
case 0x600a49:c.instructions+=1;goto B600a49;
case 0x600a4b:goto L600a4b;
case 0x600a4d:c.instructions+=6;goto B600a4d;
case 0x600a50:c.instructions+=5;goto B600a50;
case 0x600a54:c.instructions+=4;goto B600a54;
case 0x600a57:c.instructions+=3;goto B600a57;
case 0x600a58:c.instructions+=2;goto B600a58;
case 0x600a59:c.instructions+=1;goto B600a59;
case 0x600a5e:goto L600a5e;
case 0x600a60:c.instructions+=3;goto B600a60;
case 0x600a63:c.instructions+=2;goto B600a63;
case 0x600a67:c.instructions+=1;goto B600a67;
case 0x600a69:goto L600a69;
case 0x600a6f:c.instructions+=2;goto B600a6f;
case 0x600a75:c.instructions+=1;goto B600a75;
case 0x600a79:goto L600a79;
case 0x600a7d:c.instructions+=8;goto B600a7d;
case 0x600a83:c.instructions+=7;goto B600a83;
case 0x600a85:c.instructions+=6;goto B600a85;
case 0x600a8b:c.instructions+=5;goto B600a8b;
case 0x600a8d:c.instructions+=4;goto B600a8d;
case 0x600a93:c.instructions+=3;goto B600a93;
case 0x600a95:c.instructions+=2;goto B600a95;
case 0x600a98:c.instructions+=1;goto B600a98;
case 0x600a9a:goto L600a9a;
case 0x600a9c:c.instructions+=1;goto B600a9c;
case 0x600aa2:goto L600aa2;
case 0x600aa6:c.instructions+=5;goto B600aa6;
case 0x600aaa:c.instructions+=4;goto B600aaa;
case 0x600ab0:c.instructions+=3;goto B600ab0;
case 0x600ab2:c.instructions+=2;goto B600ab2;
case 0x600ab5:c.instructions+=1;goto B600ab5;
case 0x600ab7:goto L600ab7;
case 0x600abc:c.instructions+=1;goto B600abc;
case 0x600ac0:goto L600ac0;
case 0x600ac3:c.instructions+=4;goto B600ac3;
case 0x600ac6:c.instructions+=3;goto B600ac6;
case 0x600ac8:c.instructions+=2;goto B600ac8;
case 0x600ad0:c.instructions+=1;goto B600ad0;
case 0x600ad2:goto L600ad2;
case 0x600ad7:c.instructions+=2;goto B600ad7;
case 0x600ad9:c.instructions+=1;goto B600ad9;
case 0x600adb:goto L600adb;
case 0x600ae0:goto L600ae0;
case 0x600ae3:c.instructions+=3;goto B600ae3;
case 0x600ae6:c.instructions+=2;goto B600ae6;
case 0x600ae8:c.instructions+=1;goto B600ae8;
case 0x600aea:goto L600aea;
case 0x600aec:goto L600aec;
case 0x600aef:c.instructions+=2;goto B600aef;
case 0x600af1:c.instructions+=1;goto B600af1;
case 0x600af3:goto L600af3;
case 0x600afb:goto L600afb;
case 0x600afd:c.instructions+=5;goto B600afd;
case 0x600b00:c.instructions+=4;goto B600b00;
case 0x600b02:c.instructions+=3;goto B600b02;
case 0x600b03:c.instructions+=2;goto B600b03;
case 0x600b08:c.instructions+=1;goto B600b08;
case 0x600b0d:goto L600b0d;
case 0x600b0f:c.instructions+=1;goto B600b0f;
case 0x600b11:goto L600b11;
case 0x600b14:c.instructions+=9;goto B600b14;
case 0x600b17:c.instructions+=8;goto B600b17;
case 0x600b1a:c.instructions+=7;goto B600b1a;
case 0x600b1e:c.instructions+=6;goto B600b1e;
case 0x600b22:c.instructions+=5;goto B600b22;
case 0x600b25:c.instructions+=4;goto B600b25;
case 0x600b26:c.instructions+=3;goto B600b26;
case 0x600b27:c.instructions+=2;goto B600b27;
case 0x600b2f:c.instructions+=1;goto B600b2f;
case 0x600b34:goto L600b34;
case 0x600b37:c.instructions+=7;goto B600b37;
case 0x600b39:c.instructions+=6;goto B600b39;
case 0x600b3d:c.instructions+=5;goto B600b3d;
case 0x600b3e:c.instructions+=4;goto B600b3e;
case 0x600b43:c.instructions+=3;goto B600b43;
case 0x600b44:c.instructions+=2;goto B600b44;
case 0x600b45:c.instructions+=1;goto B600b45;
case 0x600b4a:goto L600b4a;
case 0x600b4d:c.instructions+=3;goto B600b4d;
case 0x600b50:c.instructions+=2;goto B600b50;
case 0x600b52:c.instructions+=1;goto B600b52;
case 0x600b58:goto L600b58;
case 0x600b5c:c.instructions+=17;goto B600b5c;
case 0x600b5f:c.instructions+=16;goto B600b5f;
case 0x600b61:c.instructions+=15;goto B600b61;
case 0x600b65:c.instructions+=14;goto B600b65;
case 0x600b68:c.instructions+=13;goto B600b68;
case 0x600b6b:c.instructions+=12;goto B600b6b;
case 0x600b6f:c.instructions+=11;goto B600b6f;
case 0x600b74:c.instructions+=10;goto B600b74;
case 0x600b78:c.instructions+=9;goto B600b78;
case 0x600b79:c.instructions+=8;goto B600b79;
case 0x600b7f:c.instructions+=7;goto B600b7f;
case 0x600b85:c.instructions+=6;goto B600b85;
case 0x600b89:c.instructions+=5;goto B600b89;
case 0x600b8a:c.instructions+=4;goto B600b8a;
case 0x600b8e:c.instructions+=3;goto B600b8e;
case 0x600b8f:c.instructions+=2;goto B600b8f;
case 0x600b93:c.instructions+=1;goto B600b93;
case 0x600b98:goto L600b98;
case 0x600b9b:c.instructions+=20;goto B600b9b;
case 0x600b9e:c.instructions+=19;goto B600b9e;
case 0x600ba1:c.instructions+=18;goto B600ba1;
case 0x600ba5:c.instructions+=17;goto B600ba5;
case 0x600ba9:c.instructions+=16;goto B600ba9;
case 0x600bab:c.instructions+=15;goto B600bab;
case 0x600bae:c.instructions+=14;goto B600bae;
case 0x600bb0:c.instructions+=13;goto B600bb0;
case 0x600bb4:c.instructions+=12;goto B600bb4;
case 0x600bb8:c.instructions+=11;goto B600bb8;
case 0x600bba:c.instructions+=10;goto B600bba;
case 0x600bbe:c.instructions+=9;goto B600bbe;
case 0x600bc0:c.instructions+=8;goto B600bc0;
case 0x600bc2:c.instructions+=7;goto B600bc2;
case 0x600bc6:c.instructions+=6;goto B600bc6;
case 0x600bca:c.instructions+=5;goto B600bca;
case 0x600bce:c.instructions+=4;goto B600bce;
case 0x600bd2:c.instructions+=3;goto B600bd2;
case 0x600bd8:c.instructions+=2;goto B600bd8;
case 0x600bdc:c.instructions+=1;goto B600bdc;
case 0x600be1:goto L600be1;
case 0x600be3:c.instructions+=1;goto B600be3;
case 0x600be9:goto L600be9;
case 0x600bed:c.instructions+=1;goto B600bed;
case 0x600bf2:goto L600bf2;
case 0x600bf8:c.instructions+=3;goto B600bf8;
case 0x600bfa:c.instructions+=2;goto B600bfa;
case 0x600c05:c.instructions+=1;goto B600c05;
case 0x600c07:goto L600c07;
case 0x600c08:c.instructions+=2;goto B600c08;
case 0x600c0c:c.instructions+=1;goto B600c0c;
case 0x600c11:goto L600c11;
case 0x600c13:c.instructions+=8;goto B600c13;
case 0x600c15:c.instructions+=7;goto B600c15;
case 0x600c17:c.instructions+=6;goto B600c17;
case 0x600c1b:c.instructions+=5;goto B600c1b;
case 0x600c1c:c.instructions+=4;goto B600c1c;
case 0x600c20:c.instructions+=3;goto B600c20;
case 0x600c21:c.instructions+=2;goto B600c21;
case 0x600c25:c.instructions+=1;goto B600c25;
case 0x600c2a:goto L600c2a;
case 0x600c2c:c.instructions+=1;goto B600c2c;
case 0x600c2e:goto L600c2e;
case 0x600c33:c.instructions+=4;goto B600c33;
case 0x600c37:c.instructions+=3;goto B600c37;
case 0x600c38:c.instructions+=2;goto B600c38;
case 0x600c3c:c.instructions+=1;goto B600c3c;
case 0x600c41:goto L600c41;
case 0x600c43:c.instructions+=1;goto B600c43;
case 0x600c49:goto L600c49;
case 0x600c4f:c.instructions+=8;goto B600c4f;
case 0x600c51:c.instructions+=7;goto B600c51;
case 0x600c52:c.instructions+=6;goto B600c52;
case 0x600c57:c.instructions+=5;goto B600c57;
case 0x600c5b:c.instructions+=4;goto B600c5b;
case 0x600c5c:c.instructions+=3;goto B600c5c;
case 0x600c5d:c.instructions+=2;goto B600c5d;
case 0x600c61:c.instructions+=1;goto B600c61;
case 0x600c66:goto L600c66;
case 0x600c69:c.instructions+=2;goto B600c69;
case 0x600c6b:c.instructions+=1;goto B600c6b;
case 0x600c6d:goto L600c6d;
case 0x600c71:c.instructions+=4;goto B600c71;
case 0x600c75:c.instructions+=3;goto B600c75;
case 0x600c76:c.instructions+=2;goto B600c76;
case 0x600c78:c.instructions+=1;goto B600c78;
case 0x600c7d:goto L600c7d;
case 0x600c82:c.instructions+=3;goto B600c82;
case 0x600c84:c.instructions+=2;goto B600c84;
case 0x600c86:c.instructions+=1;goto B600c86;
case 0x600c88:goto L600c88;
case 0x600c8d:goto L600c8d;
case 0x600c90:c.instructions+=4;goto B600c90;
case 0x600c94:c.instructions+=3;goto B600c94;
case 0x600c97:c.instructions+=2;goto B600c97;
case 0x600c99:c.instructions+=1;goto B600c99;
case 0x600c9b:goto L600c9b;
case 0x600ca3:c.instructions+=1;goto B600ca3;
case 0x600ca5:goto L600ca5;
case 0x600ca9:c.instructions+=2;goto B600ca9;
case 0x600caa:c.instructions+=1;goto B600caa;
case 0x600caf:goto L600caf;
case 0x600cb3:c.instructions+=10;goto B600cb3;
case 0x600cb9:c.instructions+=9;goto B600cb9;
case 0x600cbd:c.instructions+=8;goto B600cbd;
case 0x600cc1:c.instructions+=7;goto B600cc1;
case 0x600cc9:c.instructions+=6;goto B600cc9;
case 0x600ccf:c.instructions+=5;goto B600ccf;
case 0x600cd1:c.instructions+=4;goto B600cd1;
case 0x600cd7:c.instructions+=3;goto B600cd7;
case 0x600cd9:c.instructions+=2;goto B600cd9;
case 0x600cdc:c.instructions+=1;goto B600cdc;
case 0x600cde:goto L600cde;
case 0x600ce6:goto L600ce6;
case 0x600cea:c.instructions+=2;goto B600cea;
case 0x600cf5:c.instructions+=1;goto B600cf5;
case 0x600cfa:goto L600cfa;
case 0x600cfe:c.instructions+=4;goto B600cfe;
case 0x600cff:c.instructions+=3;goto B600cff;
case 0x600d03:c.instructions+=2;goto B600d03;
case 0x600d04:c.instructions+=1;goto B600d04;
case 0x600d09:goto L600d09;
case 0x600d0f:c.instructions+=4;goto B600d0f;
case 0x600d12:c.instructions+=3;goto B600d12;
case 0x600d14:c.instructions+=2;goto B600d14;
case 0x600d17:c.instructions+=1;goto B600d17;
case 0x600d1d:goto L600d1d;
case 0x600d20:c.instructions+=2;goto B600d20;
case 0x600d22:c.instructions+=1;goto B600d22;
case 0x600d25:goto L600d25;
case 0x600d2a:c.instructions+=3;goto B600d2a;
case 0x600d2c:c.instructions+=2;goto B600d2c;
case 0x600d34:c.instructions+=1;goto B600d34;
case 0x600d36:goto L600d36;
case 0x600d3b:c.instructions+=2;goto B600d3b;
case 0x600d3d:c.instructions+=1;goto B600d3d;
case 0x600d3f:goto L600d3f;
case 0x600d41:c.instructions+=1;goto B600d41;
case 0x600d46:goto L600d46;
case 0x600d49:c.instructions+=10;goto B600d49;
case 0x600d4e:c.instructions+=9;goto B600d4e;
case 0x600d53:c.instructions+=8;goto B600d53;
case 0x600d55:c.instructions+=7;goto B600d55;
case 0x600d58:c.instructions+=6;goto B600d58;
case 0x600d59:c.instructions+=5;goto B600d59;
case 0x600d5a:c.instructions+=4;goto B600d5a;
case 0x600d5d:c.instructions+=3;goto B600d5d;
case 0x600d5e:c.instructions+=2;goto B600d5e;
case 0x600d5f:c.instructions+=1;goto B600d5f;
case 0x600d64:goto L600d64;
case 0x600d67:c.instructions+=2;goto B600d67;
case 0x600d6a:c.instructions+=1;goto B600d6a;
case 0x600d6c:goto L600d6c;
case 0x600d6d:c.instructions+=1;goto B600d6d;
case 0x600d72:goto L600d72;
case 0x600d75:goto L600d75;
case 0x600d77:c.instructions+=1;goto B600d77;
case 0x600d79:goto L600d79;
case 0x600d7c:c.instructions+=1;goto B600d7c;
case 0x600d7e:goto L600d7e;
case 0x600d7f:c.instructions+=2;goto B600d7f;
case 0x600d81:c.instructions+=1;goto B600d81;
case 0x600d86:goto L600d86;
case 0x600d8a:goto L600d8a;
case 0x600d8e:c.instructions+=11;goto B600d8e;
case 0x600d92:c.instructions+=10;goto B600d92;
case 0x600d96:c.instructions+=9;goto B600d96;
case 0x600d97:c.instructions+=8;goto B600d97;
case 0x600d99:c.instructions+=7;goto B600d99;
case 0x600d9b:c.instructions+=6;goto B600d9b;
case 0x600d9c:c.instructions+=5;goto B600d9c;
case 0x600d9e:c.instructions+=4;goto B600d9e;
case 0x600d9f:c.instructions+=3;goto B600d9f;
case 0x600da0:c.instructions+=2;goto B600da0;
case 0x600da2:c.instructions+=1;goto B600da2;
case 0x600da7:goto L600da7;
case 0x600da8:c.instructions+=2;goto B600da8;
case 0x600daa:c.instructions+=1;goto B600daa;
case 0x600daf:goto L600daf;
case 0x600db6:c.instructions+=7;goto B600db6;
case 0x600dbd:c.instructions+=6;goto B600dbd;
case 0x600dbe:c.instructions+=5;goto B600dbe;
case 0x600dbf:c.instructions+=4;goto B600dbf;
case 0x600dc0:c.instructions+=3;goto B600dc0;
case 0x600dc2:c.instructions+=2;goto B600dc2;
case 0x600dc3:c.instructions+=1;goto B600dc3;
case 0x600dc4:goto L600dc4;
case 0x600dca:c.instructions+=3;goto B600dca;
case 0x600dcb:c.instructions+=2;goto B600dcb;
case 0x600dd0:c.instructions+=1;goto B600dd0;
case 0x600dd2:goto L600dd2;
case 0x600dd3:c.instructions+=2;goto B600dd3;
case 0x600dd6:c.instructions+=1;goto B600dd6;
case 0x600dd7:goto L600dd7;
case 0x600dd9:c.instructions+=8;goto B600dd9;
case 0x600de1:c.instructions+=7;goto B600de1;
case 0x600de3:c.instructions+=6;goto B600de3;
case 0x600de6:c.instructions+=5;goto B600de6;
case 0x600de9:c.instructions+=4;goto B600de9;
case 0x600deb:c.instructions+=3;goto B600deb;
case 0x600dec:c.instructions+=2;goto B600dec;
case 0x600dee:c.instructions+=1;goto B600dee;
case 0x600def:goto L600def;
case 0x600df1:c.instructions+=1;goto B600df1;
case 0x600df6:goto L600df6;
case 0x600dfd:c.instructions+=7;goto B600dfd;
case 0x600dfe:c.instructions+=6;goto B600dfe;
case 0x600dff:c.instructions+=5;goto B600dff;
case 0x600e06:c.instructions+=4;goto B600e06;
case 0x600e07:c.instructions+=3;goto B600e07;
case 0x600e09:c.instructions+=2;goto B600e09;
case 0x600e0a:c.instructions+=1;goto B600e0a;
case 0x600e10:goto L600e10;
case 0x600e11:c.instructions+=13;goto B600e11;
case 0x600e13:c.instructions+=12;goto B600e13;
case 0x600e16:c.instructions+=11;goto B600e16;
case 0x600e18:c.instructions+=10;goto B600e18;
case 0x600e1d:c.instructions+=9;goto B600e1d;
case 0x600e23:c.instructions+=8;goto B600e23;
case 0x600e24:c.instructions+=7;goto B600e24;
case 0x600e2b:c.instructions+=6;goto B600e2b;
case 0x600e31:c.instructions+=5;goto B600e31;
case 0x600e36:c.instructions+=4;goto B600e36;
case 0x600e38:c.instructions+=3;goto B600e38;
case 0x600e39:c.instructions+=2;goto B600e39;
case 0x600e3b:c.instructions+=1;goto B600e3b;
case 0x600e41:goto L600e41;
case 0x600e46:c.instructions+=6;goto B600e46;
case 0x600e49:c.instructions+=5;goto B600e49;
case 0x600e4a:c.instructions+=4;goto B600e4a;
case 0x600e4e:c.instructions+=3;goto B600e4e;
case 0x600e53:c.instructions+=2;goto B600e53;
case 0x600e54:c.instructions+=1;goto B600e54;
case 0x600e59:goto L600e59;
case 0x600e5d:c.instructions+=2;goto B600e5d;
case 0x600e5e:c.instructions+=1;goto B600e5e;
case 0x600e63:goto L600e63;
case 0x600e66:c.instructions+=2;goto B600e66;
case 0x600e68:c.instructions+=1;goto B600e68;
case 0x600e6a:goto L600e6a;
case 0x600e6c:c.instructions+=4;goto B600e6c;
case 0x600e70:c.instructions+=3;goto B600e70;
case 0x600e71:c.instructions+=2;goto B600e71;
case 0x600e78:c.instructions+=1;goto B600e78;
case 0x600e7d:goto L600e7d;
case 0x600e82:c.instructions+=3;goto B600e82;
case 0x600e86:c.instructions+=2;goto B600e86;
case 0x600e91:c.instructions+=1;goto B600e91;
case 0x600e96:goto L600e96;
case 0x600e98:c.instructions+=1;goto B600e98;
case 0x600e9a:goto L600e9a;
case 0x600e9e:c.instructions+=3;goto B600e9e;
case 0x600e9f:c.instructions+=2;goto B600e9f;
case 0x600ea3:c.instructions+=1;goto B600ea3;
case 0x600ea8:goto L600ea8;
case 0x600eac:c.instructions+=1;goto B600eac;
case 0x600eb1:goto L600eb1;
case 0x600eb5:c.instructions+=1;goto B600eb5;
case 0x600eba:goto L600eba;
case 0x600ebd:c.instructions+=6;goto B600ebd;
case 0x600ebf:c.instructions+=5;goto B600ebf;
case 0x600ec3:c.instructions+=4;goto B600ec3;
case 0x600ec4:c.instructions+=3;goto B600ec4;
case 0x600ec6:c.instructions+=2;goto B600ec6;
case 0x600ec7:c.instructions+=1;goto B600ec7;
case 0x600ecc:goto L600ecc;
case 0x600ed0:c.instructions+=2;goto B600ed0;
case 0x600edb:c.instructions+=1;goto B600edb;
case 0x600ee0:goto L600ee0;
case 0x600ee2:goto L600ee2;
case 0x600ee7:c.instructions+=2;goto B600ee7;
case 0x600ee9:c.instructions+=1;goto B600ee9;
case 0x600eeb:goto L600eeb;
case 0x600eee:c.instructions+=7;goto B600eee;
case 0x600ef0:c.instructions+=6;goto B600ef0;
case 0x600ef6:c.instructions+=5;goto B600ef6;
case 0x600ef8:c.instructions+=4;goto B600ef8;
case 0x600ef9:c.instructions+=3;goto B600ef9;
case 0x600efb:c.instructions+=2;goto B600efb;
case 0x600f00:c.instructions+=1;goto B600f00;
case 0x600f05:goto L600f05;
case 0x600f0c:c.instructions+=1;goto B600f0c;
case 0x600f11:goto L600f11;
case 0x600f18:c.instructions+=5;goto B600f18;
case 0x600f1f:c.instructions+=4;goto B600f1f;
case 0x600f20:c.instructions+=3;goto B600f20;
case 0x600f22:c.instructions+=2;goto B600f22;
case 0x600f23:c.instructions+=1;goto B600f23;
case 0x600f30:goto L600f30;
case 0x600f31:c.instructions+=8;goto B600f31;
case 0x600f33:c.instructions+=7;goto B600f33;
case 0x600f36:c.instructions+=6;goto B600f36;
case 0x600f39:c.instructions+=5;goto B600f39;
case 0x600f3e:c.instructions+=4;goto B600f3e;
case 0x600f40:c.instructions+=3;goto B600f40;
case 0x600f41:c.instructions+=2;goto B600f41;
case 0x600f43:c.instructions+=1;goto B600f43;
case 0x600f45:goto L600f45;
case 0x600f48:c.instructions+=12;goto B600f48;
case 0x600f4b:c.instructions+=11;goto B600f4b;
case 0x600f4d:c.instructions+=10;goto B600f4d;
case 0x600f51:c.instructions+=9;goto B600f51;
case 0x600f55:c.instructions+=8;goto B600f55;
case 0x600f58:c.instructions+=7;goto B600f58;
case 0x600f5b:c.instructions+=6;goto B600f5b;
case 0x600f5d:c.instructions+=5;goto B600f5d;
case 0x600f5f:c.instructions+=4;goto B600f5f;
case 0x600f63:c.instructions+=3;goto B600f63;
case 0x600f64:c.instructions+=2;goto B600f64;
case 0x600f68:c.instructions+=1;goto B600f68;
case 0x600f6d:goto L600f6d;
case 0x600f72:c.instructions+=1;goto B600f72;
case 0x600f77:goto L600f77;
case 0x600f79:c.instructions+=6;goto B600f79;
case 0x600f7b:c.instructions+=5;goto B600f7b;
case 0x600f7d:c.instructions+=4;goto B600f7d;
case 0x600f81:c.instructions+=3;goto B600f81;
case 0x600f82:c.instructions+=2;goto B600f82;
case 0x600f85:c.instructions+=1;goto B600f85;
case 0x600f8a:goto L600f8a;
case 0x600f94:goto L600f94;
case 0x600f95:c.instructions+=3;goto B600f95;
case 0x600f97:c.instructions+=2;goto B600f97;
case 0x600f98:c.instructions+=1;goto B600f98;
case 0x600fa0:goto L600fa0;
case 0x600fa1:c.instructions+=6;goto B600fa1;
case 0x600fa2:c.instructions+=5;goto B600fa2;
case 0x600fa4:c.instructions+=4;goto B600fa4;
case 0x600fa7:c.instructions+=3;goto B600fa7;
case 0x600faa:c.instructions+=2;goto B600faa;
case 0x600fac:c.instructions+=1;goto B600fac;
case 0x600fae:goto L600fae;
case 0x600faf:c.instructions+=10;goto B600faf;
case 0x600fb0:c.instructions+=9;goto B600fb0;
case 0x600fb5:c.instructions+=8;goto B600fb5;
case 0x600fb7:c.instructions+=7;goto B600fb7;
case 0x600fb9:c.instructions+=6;goto B600fb9;
case 0x600fbc:c.instructions+=5;goto B600fbc;
case 0x600fbe:c.instructions+=4;goto B600fbe;
case 0x600fc1:c.instructions+=3;goto B600fc1;
case 0x600fc4:c.instructions+=2;goto B600fc4;
case 0x600fc7:c.instructions+=1;goto B600fc7;
case 0x600fc9:goto L600fc9;
case 0x600fcc:c.instructions+=3;goto B600fcc;
case 0x600fce:c.instructions+=2;goto B600fce;
case 0x600fd4:c.instructions+=1;goto B600fd4;
case 0x600fd7:goto L600fd7;
case 0x600fda:c.instructions+=6;goto B600fda;
case 0x600fdd:c.instructions+=5;goto B600fdd;
case 0x600fdf:c.instructions+=4;goto B600fdf;
case 0x600fe0:c.instructions+=3;goto B600fe0;
case 0x600fe1:c.instructions+=2;goto B600fe1;
case 0x600fe3:c.instructions+=1;goto B600fe3;
case 0x600fea:goto L600fea;
case 0x600fee:c.instructions+=1;goto B600fee;
case 0x600ff0:goto L600ff0;
case 0x600ff6:goto L600ff6;
case 0x600ffd:c.instructions+=1;goto B600ffd;
default:missing_instruction(c.pc);}
B600002:L600002:{c.instructions+=7;NFSU2_TR(0x600002);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B600005:{NFSU2_TR(0x600005);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B600007:{NFSU2_TR(0x600007);
{u32 ea_=u32(u32(7894460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60000d:{NFSU2_TR(0x60000d);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B600013:{NFSU2_TR(0x600013);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B600015:{NFSU2_TR(0x600015);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B600018:{NFSU2_TR(0x600018);
if(r1(R+514)){{goto L600036;}}
}
B60001a:L60001a:{c.instructions+=3;NFSU2_TR(0x60001a);
__builtin_memmove((R+4),gp(0x890118),4);
}
B600020:{NFSU2_TR(0x600020);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B600025:{NFSU2_TR(0x600025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60002aull));
TAIL_STATIC(0x5f85b0u,5f8);
}
B60002a:L60002a:{c.instructions+=2;NFSU2_TR(0x60002a);
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
B60002c:{NFSU2_TR(0x60002c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60003b;}}
}
B60002e:L60002e:{c.instructions+=6;NFSU2_TR(0x60002e);
w1(R+12,u8(0x1ull));
}
B600030:{NFSU2_TR(0x600030);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B600031:{NFSU2_TR(0x600031);
__builtin_memmove((R+0),(R+12),1);
}
B600033:{NFSU2_TR(0x600033);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B600034:{NFSU2_TR(0x600034);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B600035:{NFSU2_TR(0x600035);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B600036:L600036:{c.instructions+=1;NFSU2_TR(0x600036);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60003b:L60003b:{c.instructions+=4;NFSU2_TR(0x60003b);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60003f:{NFSU2_TR(0x60003f);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B600041:{NFSU2_TR(0x600041);
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
B600043:{NFSU2_TR(0x600043);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60007c;}}
}
B600045:L600045:{c.instructions+=6;NFSU2_TR(0x600045);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60004c:{NFSU2_TR(0x60004c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60004d:{NFSU2_TR(0x60004d);
__builtin_memmove((R+0),(R+12),1);
}
B60004f:{NFSU2_TR(0x60004f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B600050:{NFSU2_TR(0x600050);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B600051:{NFSU2_TR(0x600051);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B600052:L600052:{c.instructions+=7;NFSU2_TR(0x600052);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B600057:{NFSU2_TR(0x600057);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B600059:{NFSU2_TR(0x600059);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B60005e:{NFSU2_TR(0x60005e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B600061:{NFSU2_TR(0x600061);
__builtin_memmove((R+12),(R+518),1);
}
B600064:{NFSU2_TR(0x600064);
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
B600066:{NFSU2_TR(0x600066);
if(r1(R+518)){{goto L60007c;}}
}
B600068:L600068:{c.instructions+=3;NFSU2_TR(0x600068);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B60006d:{NFSU2_TR(0x60006d);
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
B60006f:{NFSU2_TR(0x60006f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60007c;}}
}
B600071:L600071:{c.instructions+=3;NFSU2_TR(0x600071);
__builtin_memmove((R+0),gp(0x890108),4);
}
B600076:{NFSU2_TR(0x600076);
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
B600078:{NFSU2_TR(0x600078);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60007c;}}
}
B60007a:L60007a:{c.instructions+=1;NFSU2_TR(0x60007a);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60007c:L60007c:{c.instructions+=5;NFSU2_TR(0x60007c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60007d:{NFSU2_TR(0x60007d);
__builtin_memmove((R+0),(R+12),1);
}
B60007f:{NFSU2_TR(0x60007f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B600080:{NFSU2_TR(0x600080);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B600081:{NFSU2_TR(0x600081);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B600090:L600090:{c.instructions+=9;NFSU2_TR(0x600090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B600093:{NFSU2_TR(0x600093);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600094:{NFSU2_TR(0x600094);
__builtin_memmove((R+12),(R+4),4);
}
B600096:{NFSU2_TR(0x600096);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600099:{NFSU2_TR(0x600099);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60009b:{NFSU2_TR(0x60009b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60009c:{NFSU2_TR(0x60009c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60009d:{NFSU2_TR(0x60009d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6000a1:{NFSU2_TR(0x6000a1);
if(r1(R+518)){{goto L600564;}}
}
B6000a7:L6000a7:{c.instructions+=3;NFSU2_TR(0x6000a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6000ad:{NFSU2_TR(0x6000ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6000af:{NFSU2_TR(0x6000af);
if(r1(R+518)){{goto L6000d8;}}
}
B6000b1:L6000b1:{c.instructions+=4;NFSU2_TR(0x6000b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6000b4:{NFSU2_TR(0x6000b4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
}
B6000b7:{NFSU2_TR(0x6000b7);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6000ba:{NFSU2_TR(0x6000ba);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6000d8;}}
}
B6000bc:L6000bc:{c.instructions+=2;NFSU2_TR(0x6000bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60057cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6000c3:{NFSU2_TR(0x6000c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x600570ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6000ca:L6000ca:{c.instructions+=7;NFSU2_TR(0x6000ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6000cb:{NFSU2_TR(0x6000cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6000cc:{NFSU2_TR(0x6000cc);
w4(R+0,u32(0x1ull));
}
B6000d1:{NFSU2_TR(0x6000d1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6000d3:{NFSU2_TR(0x6000d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6000d4:{NFSU2_TR(0x6000d4);
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
B6000d7:{NFSU2_TR(0x6000d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6000d8:L6000d8:{c.instructions+=3;NFSU2_TR(0x6000d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6000db:{NFSU2_TR(0x6000db);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6000de:{NFSU2_TR(0x6000de);
if(r1(R+518)){{goto L600564;}}
}
B6000e4:L6000e4:{c.instructions+=2;NFSU2_TR(0x6000e4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6000e7:{NFSU2_TR(0x6000e7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6000f2;}}
}
B6000e9:L6000e9:{c.instructions+=2;NFSU2_TR(0x6000e9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6000ec:{NFSU2_TR(0x6000ec);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L600564;}}
}
B6000f2:L6000f2:{c.instructions+=3;NFSU2_TR(0x6000f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6000f8:{NFSU2_TR(0x6000f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6000fa:{NFSU2_TR(0x6000fa);
if(r1(R+518)){{goto L60010b;}}
}
B6000fc:L6000fc:{c.instructions+=3;NFSU2_TR(0x6000fc);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B600102:{NFSU2_TR(0x600102);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B600105:{NFSU2_TR(0x600105);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600564;}}
}
B60010b:L60010b:{c.instructions+=3;NFSU2_TR(0x60010b);
__builtin_memmove((R+0),gp(0x82a3a4),4);
}
B600110:{NFSU2_TR(0x600110);
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
B600112:{NFSU2_TR(0x600112);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L600564;}}
}
B600118:L600118:{c.instructions+=2;NFSU2_TR(0x600118);
w4(R+4,u32(0x85ef50ull));
}
B60011d:{NFSU2_TR(0x60011d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600122ull));
TAIL_STATIC(0x5012c0u,501);
}
B600122:L600122:{c.instructions+=2;NFSU2_TR(0x600122);
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
B600124:{NFSU2_TR(0x600124);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600564;}}
}
B60012a:L60012a:{c.instructions+=2;NFSU2_TR(0x60012a);
w4(R+4,u32(0x85ef50ull));
}
B60012f:{NFSU2_TR(0x60012f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600134ull));
TAIL_STATIC(0x5012d0u,501);
}
B600134:L600134:{c.instructions+=2;NFSU2_TR(0x600134);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B600136:{NFSU2_TR(0x600136);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600564;}}
}
B60013c:L60013c:{c.instructions+=3;NFSU2_TR(0x60013c);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B600141:{NFSU2_TR(0x600141);
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
B600143:{NFSU2_TR(0x600143);
if(r1(R+518)){{goto L600152;}}
}
B600145:L600145:{c.instructions+=1;NFSU2_TR(0x600145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60014aull));
TAIL_STATIC(0x510050u,510);
}
B60014a:L60014a:{c.instructions+=2;NFSU2_TR(0x60014a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60014c:{NFSU2_TR(0x60014c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600564;}}
}
B600152:L600152:{c.instructions+=5;NFSU2_TR(0x600152);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600155:{NFSU2_TR(0x600155);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B600157:{NFSU2_TR(0x600157);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600159:{NFSU2_TR(0x600159);
w4(R+24,u32(0x40000ull));
}
B60015e:{NFSU2_TR(0x60015e);
if(r1(R+518)){{goto L60016e;}}
}
B600160:L600160:{c.instructions+=2;NFSU2_TR(0x600160);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B600163:{NFSU2_TR(0x600163);
if(r1(R+518)){{goto L60016e;}}
}
B600165:L600165:{c.instructions+=2;NFSU2_TR(0x600165);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B600168:{NFSU2_TR(0x600168);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60051c;}}
}
B60016e:L60016e:{c.instructions+=4;NFSU2_TR(0x60016e);
__builtin_memmove((R+8),gp(0x8900d8),4);
}
B600174:{NFSU2_TR(0x600174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B600176:{NFSU2_TR(0x600176);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B600179:{NFSU2_TR(0x600179);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600182;}}
}
B60017b:L60017b:{c.instructions+=2;NFSU2_TR(0x60017b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B60017d:{NFSU2_TR(0x60017d);
{goto L60051a;}
}
B600182:L600182:{c.instructions+=2;NFSU2_TR(0x600182);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B600185:{NFSU2_TR(0x600185);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60018e;}}
}
B600187:L600187:{c.instructions+=2;NFSU2_TR(0x600187);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B600189:{NFSU2_TR(0x600189);
{goto L60051a;}
}
B60018e:L60018e:{c.instructions+=2;NFSU2_TR(0x60018e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B600191:{NFSU2_TR(0x600191);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60019a;}}
}
B600193:L600193:{c.instructions+=2;NFSU2_TR(0x600193);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B600195:{NFSU2_TR(0x600195);
{goto L60051a;}
}
B60019a:L60019a:{c.instructions+=4;NFSU2_TR(0x60019a);
__builtin_memmove((R+4),gp(0x890118),4);
}
B6001a0:{NFSU2_TR(0x6001a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6001a2:{NFSU2_TR(0x6001a2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6001a5:{NFSU2_TR(0x6001a5);
if(r1(R+518)){{goto L600515;}}
}
B6001ab:L6001ab:{c.instructions+=2;NFSU2_TR(0x6001ab);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6001ae:{NFSU2_TR(0x6001ae);
if(r1(R+518)){{goto L600515;}}
}
B6001b4:L6001b4:{c.instructions+=2;NFSU2_TR(0x6001b4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6001b7:{NFSU2_TR(0x6001b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600273;}}
}
B6001bd:L6001bd:{c.instructions+=2;NFSU2_TR(0x6001bd);
u8 U[8];
__builtin_memmove((U+0),gp(0x8900bc),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6001c4:{NFSU2_TR(0x6001c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600273;}}
}
B6001ca:L6001ca:{c.instructions+=3;NFSU2_TR(0x6001ca);
__builtin_memmove((R+4),gp(0x89e7e6),1);
}
B6001d0:{NFSU2_TR(0x6001d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6001d2:{NFSU2_TR(0x6001d2);
if(r1(R+518)){{goto L6001e1;}}
}
B6001d4:L6001d4:{c.instructions+=6;NFSU2_TR(0x6001d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6001d5:{NFSU2_TR(0x6001d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6001d6:{NFSU2_TR(0x6001d6);
__builtin_memmove((R+4),(R+12),4);
}
B6001d8:{NFSU2_TR(0x6001d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6001d9:{NFSU2_TR(0x6001d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6001dc:{NFSU2_TR(0x6001dc);
TAIL_STATIC(0x5f34c0u,5f3);
}
B6001e1:L6001e1:{c.instructions+=2;NFSU2_TR(0x6001e1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6001e4:{NFSU2_TR(0x6001e4);
if(r1(R+518)){{goto L60051c;}}
}
B6001ea:L6001ea:{c.instructions+=2;NFSU2_TR(0x6001ea);
__builtin_memmove((R+4),(R+12),4);
}
B6001ec:{NFSU2_TR(0x6001ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6001f1ull));
TAIL_STATIC(0x5ea8c0u,5ea);
}
B6001f1:L6001f1:{c.instructions+=8;NFSU2_TR(0x6001f1);
__builtin_memmove((R+24),(R+0),4);
}
B6001f3:{NFSU2_TR(0x6001f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6001f6:{NFSU2_TR(0x6001f6);
__builtin_memmove((R+28),(R+8),4);
}
B6001f8:{NFSU2_TR(0x6001f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6001fb:{NFSU2_TR(0x6001fb);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa64ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B600202:{NFSU2_TR(0x600202);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x40000ull))));
}
B600208:{NFSU2_TR(0x600208);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60020a:{NFSU2_TR(0x60020a);
if(r1(R+518)){{goto L60051c;}}
}
B600210:L600210:{c.instructions+=2;NFSU2_TR(0x600210);
__builtin_memmove((R+4),(R+12),4);
}
B600212:{NFSU2_TR(0x600212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600217ull));
TAIL_STATIC(0x5ea930u,5ea);
}
B600217:L600217:{c.instructions+=5;NFSU2_TR(0x600217);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B600218:{NFSU2_TR(0x600218);
w4(R+4,u32(0x89e7a0ull));
}
B60021d:{NFSU2_TR(0x60021d);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B60021f:{NFSU2_TR(0x60021f);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+8))));
}
B600221:{NFSU2_TR(0x600221);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600226ull));
TAIL_STATIC(0x401910u,401);
}
B600226:L600226:{c.instructions+=2;NFSU2_TR(0x600226);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B600228:{NFSU2_TR(0x600228);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600256;}}
}
B60022a:L60022a:{c.instructions+=2;NFSU2_TR(0x60022a);
w4(R+4,u32(0x89e7a0ull));
}
B60022f:{NFSU2_TR(0x60022f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600234ull));
TAIL_STATIC(0x401930u,401);
}
B600234:L600234:{c.instructions+=2;NFSU2_TR(0x600234);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B600236:{NFSU2_TR(0x600236);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600256;}}
}
B600238:L600238:{c.instructions+=3;NFSU2_TR(0x600238);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60023b:{NFSU2_TR(0x60023b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B60023e:{NFSU2_TR(0x60023e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600243ull));
TAIL_STATIC(0x401860u,401);
}
B600243:L600243:{c.instructions+=4;NFSU2_TR(0x600243);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B600249:{NFSU2_TR(0x600249);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60024b:{NFSU2_TR(0x60024b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60024e:{NFSU2_TR(0x60024e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600256;}}
}
B600250:L600250:{c.instructions+=1;NFSU2_TR(0x600250);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x40000ull))));
}
B600256:L600256:{c.instructions+=2;NFSU2_TR(0x600256);
w4(R+4,u32(0x89e7a0ull));
}
B60025b:{NFSU2_TR(0x60025b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600260ull));
TAIL_STATIC(0x4018f0u,401);
}
B600260:L600260:{c.instructions+=2;NFSU2_TR(0x600260);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B600262:{NFSU2_TR(0x600262);
if(r1(R+518)){{goto L60051c;}}
}
B600268:L600268:{c.instructions+=2;NFSU2_TR(0x600268);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x20000000ull))));
}
B60026e:{NFSU2_TR(0x60026e);
{goto L60051c;}
}
B600273:L600273:{c.instructions+=2;NFSU2_TR(0x600273);
__builtin_memmove((R+4),(R+12),4);
}
B600275:{NFSU2_TR(0x600275);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60027aull));
TAIL_STATIC(0x5fff50u,5ff);
}
B60027a:L60027a:{c.instructions+=2;NFSU2_TR(0x60027a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60027c:{NFSU2_TR(0x60027c);
if(r1(R+518)){{goto L6002c6;}}
}
B60027e:L60027e:{c.instructions+=5;NFSU2_TR(0x60027e);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B600283:{NFSU2_TR(0x600283);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B600285:{NFSU2_TR(0x600285);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B600288:{NFSU2_TR(0x600288);
w4(R+24,u32(0x40004ull));
}
B60028d:{NFSU2_TR(0x60028d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60051c;}}
}
B600293:L600293:{c.instructions+=3;NFSU2_TR(0x600293);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600296:{NFSU2_TR(0x600296);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600298:{NFSU2_TR(0x600298);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60051c;}}
}
B60029e:L60029e:{c.instructions+=4;NFSU2_TR(0x60029e);
__builtin_memmove((R+0),gp(0x890118),4);
}
B6002a3:{NFSU2_TR(0x6002a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6002a6:{NFSU2_TR(0x6002a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6002a9:{NFSU2_TR(0x6002a9);
if(r1(R+518)){{goto L60051c;}}
}
B6002af:L6002af:{c.instructions+=3;NFSU2_TR(0x6002af);
__builtin_memmove((R+0),gp(0x83aa1b),1);
}
B6002b4:{NFSU2_TR(0x6002b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6002b6:{NFSU2_TR(0x6002b6);
if(r1(R+518)){{goto L60051c;}}
}
B6002bc:L6002bc:{c.instructions+=2;NFSU2_TR(0x6002bc);
w4(R+24,u32(0x40005ull));
}
B6002c1:{NFSU2_TR(0x6002c1);
{goto L60051a;}
}
B6002c6:L6002c6:{c.instructions+=3;NFSU2_TR(0x6002c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6002cc:{NFSU2_TR(0x6002cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6002ce:{NFSU2_TR(0x6002ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600515;}}
}
B6002d4:L6002d4:{c.instructions+=3;NFSU2_TR(0x6002d4);
__builtin_memmove((R+8),gp(0x8900d8),4);
}
B6002da:{NFSU2_TR(0x6002da);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6002dd:{NFSU2_TR(0x6002dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60030e;}}
}
B6002df:L6002df:{c.instructions+=2;NFSU2_TR(0x6002df);
__builtin_memmove((R+4),(R+8),4);
}
B6002e1:{NFSU2_TR(0x6002e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6002e6ull));
TAIL_STATIC(0x5ea190u,5ea);
}
B6002e6:L6002e6:{c.instructions+=2;NFSU2_TR(0x6002e6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6002e8:{NFSU2_TR(0x6002e8);
if(r1(R+518)){{goto L6002f1;}}
}
B6002ea:L6002ea:{c.instructions+=2;NFSU2_TR(0x6002ea);
w4(R+24,u32(0x2040000ull));
}
B6002ef:{NFSU2_TR(0x6002ef);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6002f1:L6002f1:{c.instructions+=2;NFSU2_TR(0x6002f1);
w4(R+4,u32(0x89cf48ull));
}
B6002f6:{NFSU2_TR(0x6002f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6002fbull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B6002fb:L6002fb:{c.instructions+=2;NFSU2_TR(0x6002fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6002fd:{NFSU2_TR(0x6002fd);
if(r1(R+518)){{goto L60051c;}}
}
B600303:L600303:{c.instructions+=2;NFSU2_TR(0x600303);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x4000ull))));
}
B600309:{NFSU2_TR(0x600309);
{goto L60051c;}
}
B60030e:L60030e:{c.instructions+=2;NFSU2_TR(0x60030e);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B600315:{NFSU2_TR(0x600315);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600379;}}
}
B600317:L600317:{c.instructions+=2;NFSU2_TR(0x600317);
w4(R+4,u32(0x861e7cull));
}
B60031c:{NFSU2_TR(0x60031c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600321ull));
TAIL_STATIC(0x502420u,502);
}
B600321:L600321:{c.instructions+=2;NFSU2_TR(0x600321);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B600323:{NFSU2_TR(0x600323);
if(r1(R+518)){{goto L600379;}}
}
B600325:L600325:{c.instructions+=2;NFSU2_TR(0x600325);
w4(R+4,u32(0x861e7cull));
}
B60032a:{NFSU2_TR(0x60032a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60032full));
TAIL_STATIC(0x502440u,502);
}
B60032f:L60032f:{c.instructions+=2;NFSU2_TR(0x60032f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B600331:{NFSU2_TR(0x600331);
if(r1(R+518)){{goto L60033d;}}
}
B600333:L600333:{c.instructions+=2;NFSU2_TR(0x600333);
w4(R+24,u32(0x40000ull));
}
B600338:{NFSU2_TR(0x600338);
w4(R+28,u32(0x2ull));
}
B60033d:L60033d:{c.instructions+=2;NFSU2_TR(0x60033d);
w4(R+4,u32(0x861e7cull));
}
B600342:{NFSU2_TR(0x600342);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600347ull));
TAIL_STATIC(0x502460u,502);
}
B600347:L600347:{c.instructions+=2;NFSU2_TR(0x600347);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B600349:{NFSU2_TR(0x600349);
if(r1(R+518)){{goto L60034e;}}
}
B60034b:L60034b:{c.instructions+=1;NFSU2_TR(0x60034b);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x2ull))));
}
B60034e:L60034e:{c.instructions+=2;NFSU2_TR(0x60034e);
w4(R+4,u32(0x861e7cull));
}
B600353:{NFSU2_TR(0x600353);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600358ull));
TAIL_STATIC(0x502490u,502);
}
B600358:L600358:{c.instructions+=2;NFSU2_TR(0x600358);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60035a:{NFSU2_TR(0x60035a);
if(r1(R+518)){{goto L60035f;}}
}
B60035c:L60035c:{c.instructions+=1;NFSU2_TR(0x60035c);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x1ull))));
}
B60035f:L60035f:{c.instructions+=2;NFSU2_TR(0x60035f);
w4(R+4,u32(0x861e7cull));
}
B600364:{NFSU2_TR(0x600364);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600369ull));
TAIL_STATIC(0x5024b0u,502);
}
B600369:L600369:{c.instructions+=2;NFSU2_TR(0x600369);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60036b:{NFSU2_TR(0x60036b);
if(r1(R+518)){{goto L60051c;}}
}
B600371:L600371:{c.instructions+=2;NFSU2_TR(0x600371);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x60ull))));
}
B600374:{NFSU2_TR(0x600374);
{goto L60051c;}
}
B600379:L600379:{c.instructions+=3;NFSU2_TR(0x600379);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60037c:{NFSU2_TR(0x60037c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60037f:{NFSU2_TR(0x60037f);
if(r1(R+518)){{goto L60050e;}}
}
B600385:L600385:{c.instructions+=2;NFSU2_TR(0x600385);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B600388:{NFSU2_TR(0x600388);
if(r1(R+518)){{goto L60050e;}}
}
B60038e:L60038e:{c.instructions+=3;NFSU2_TR(0x60038e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B600392:{NFSU2_TR(0x600392);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B600395:{NFSU2_TR(0x600395);
if(r1(R+518)){{goto L6003f6;}}
}
B600397:L600397:{c.instructions+=2;NFSU2_TR(0x600397);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B600398:{NFSU2_TR(0x600398);
if(r1(R+518)){{goto L6003b9;}}
}
B60039a:L60039a:{c.instructions+=2;NFSU2_TR(0x60039a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B60039d:{NFSU2_TR(0x60039d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6004cc;}}
}
B6003a3:L6003a3:{c.instructions+=2;NFSU2_TR(0x6003a3);
__builtin_memmove((R+4),(R+12),4);
}
B6003a5:{NFSU2_TR(0x6003a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6003aaull));
TAIL_STATIC(0x5ea930u,5ea);
}
B6003aa:L6003aa:{c.instructions+=5;NFSU2_TR(0x6003aa);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x40000ull))));
}
B6003af:{NFSU2_TR(0x6003af);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6003b0:{NFSU2_TR(0x6003b0);
__builtin_memmove((R+24),(R+0),4);
}
B6003b2:{NFSU2_TR(0x6003b2);
__builtin_memmove((R+28),(R+8),4);
}
B6003b4:{NFSU2_TR(0x6003b4);
{goto L6004cc;}
}
B6003b9:L6003b9:{c.instructions+=2;NFSU2_TR(0x6003b9);
u8 U[8];
__builtin_memmove((U+0),gp(0x8900bc),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6003c0:{NFSU2_TR(0x6003c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6004cc;}}
}
B6003c6:L6003c6:{c.instructions+=3;NFSU2_TR(0x6003c6);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B6003cb:{NFSU2_TR(0x6003cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6003cd:{NFSU2_TR(0x6003cd);
if(r1(R+518)){{goto L6003dd;}}
}
B6003cf:L6003cf:{c.instructions+=3;NFSU2_TR(0x6003cf);
__builtin_memmove((R+0),gp(0x83aa1b),1);
}
B6003d4:{NFSU2_TR(0x6003d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6003d6:{NFSU2_TR(0x6003d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6003ea;}}
}
B6003d8:L6003d8:{c.instructions+=1;NFSU2_TR(0x6003d8);
{goto L6004f4;}
}
B6003dd:L6003dd:{c.instructions+=3;NFSU2_TR(0x6003dd);
__builtin_memmove((R+0),gp(0x83aa1c),1);
}
B6003e2:{NFSU2_TR(0x6003e2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6003e4:{NFSU2_TR(0x6003e4);
if(r1(R+518)){{goto L6004f4;}}
}
B6003ea:L6003ea:{c.instructions+=3;NFSU2_TR(0x6003ea);
w4(R+24,u32(0x40001ull));
}
B6003ef:{NFSU2_TR(0x6003ef);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6003f1:{NFSU2_TR(0x6003f1);
{goto L6004f4;}
}
B6003f6:L6003f6:{c.instructions+=3;NFSU2_TR(0x6003f6);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B6003fb:{NFSU2_TR(0x6003fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6003fd:{NFSU2_TR(0x6003fd);
if(r1(R+518)){{goto L60040c;}}
}
B6003ff:L6003ff:{c.instructions+=6;NFSU2_TR(0x6003ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B600400:{NFSU2_TR(0x600400);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B600401:{NFSU2_TR(0x600401);
__builtin_memmove((R+4),(R+12),4);
}
B600403:{NFSU2_TR(0x600403);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B600404:{NFSU2_TR(0x600404);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B600407:{NFSU2_TR(0x600407);
TAIL_STATIC(0x5f34c0u,5f3);
}
B60040c:L60040c:{c.instructions+=6;NFSU2_TR(0x60040c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600412:{NFSU2_TR(0x600412);
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
B600414:{NFSU2_TR(0x600414);
w4(R+28,u32(0x80ull));
}
B600419:{NFSU2_TR(0x600419);
w4(R+24,u32(0x140000ull));
}
B60041e:{NFSU2_TR(0x60041e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600422:{NFSU2_TR(0x600422);
if(r1(R+518)){{goto L600436;}}
}
B600424:L600424:{c.instructions+=2;NFSU2_TR(0x600424);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B600426:{NFSU2_TR(0x600426);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600429ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B600429:L600429:{c.instructions+=2;NFSU2_TR(0x600429);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60042b:{NFSU2_TR(0x60042b);
if(r1(R+518)){{goto L600436;}}
}
B60042d:L60042d:{c.instructions+=2;NFSU2_TR(0x60042d);
w4(R+24,u32(0x40000ull));
}
B600432:{NFSU2_TR(0x600432);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600436:L600436:{c.instructions+=2;NFSU2_TR(0x600436);
__builtin_memmove((R+4),(R+12),4);
}
B600438:{NFSU2_TR(0x600438);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60043dull));
TAIL_STATIC(0x5ea8e0u,5ea);
}
B60043d:L60043d:{c.instructions+=4;NFSU2_TR(0x60043d);
__builtin_memmove((R+28),(R+0),4);
}
B60043f:{NFSU2_TR(0x60043f);
__builtin_memmove((R+0),(R+8),4);
}
B600441:{NFSU2_TR(0x600441);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600445:{NFSU2_TR(0x600445);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60044aull));
TAIL_STATIC(0x5f33b0u,5f3);
}
B60044a:L60044a:{c.instructions+=6;NFSU2_TR(0x60044a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60044e:{NFSU2_TR(0x60044e);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B600450:{NFSU2_TR(0x600450);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600454:{NFSU2_TR(0x600454);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B600456:{NFSU2_TR(0x600456);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60045a:{NFSU2_TR(0x60045a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60045full));
TAIL_STATIC(0x5ea8c0u,5ea);
}
B60045f:L60045f:{c.instructions+=9;NFSU2_TR(0x60045f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B600463:{NFSU2_TR(0x600463);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B600465:{NFSU2_TR(0x600465);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600469:{NFSU2_TR(0x600469);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B60046b:{NFSU2_TR(0x60046b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60046f:{NFSU2_TR(0x60046f);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B600471:{NFSU2_TR(0x600471);
__builtin_memmove((R+4),(R+12),4);
}
B600473:{NFSU2_TR(0x600473);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B600475:{NFSU2_TR(0x600475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60047aull));
TAIL_STATIC(0x5f32a0u,5f3);
}
B60047a:L60047a:{c.instructions+=5;NFSU2_TR(0x60047a);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B60047c:{NFSU2_TR(0x60047c);
__builtin_memmove((R+0),gp(0x83aa18),1);
}
B600481:{NFSU2_TR(0x600481);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+8))));
}
B600483:{NFSU2_TR(0x600483);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B600485:{NFSU2_TR(0x600485);
if(r1(R+518)){{goto L6004ad;}}
}
B600487:L600487:{c.instructions+=3;NFSU2_TR(0x600487);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x249ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60048d:{NFSU2_TR(0x60048d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60048f:{NFSU2_TR(0x60048f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6004ad;}}
}
B600491:L600491:{c.instructions+=5;NFSU2_TR(0x600491);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600494:{NFSU2_TR(0x600494);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B600497:{NFSU2_TR(0x600497);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa74ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B60049e:{NFSU2_TR(0x60049e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6004a0:{NFSU2_TR(0x6004a0);
if(r1(R+518)){{goto L6004a7;}}
}
B6004a2:L6004a2:{c.instructions+=2;NFSU2_TR(0x6004a2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6004a5:{NFSU2_TR(0x6004a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6004ad;}}
}
B6004a7:L6004a7:{c.instructions+=1;NFSU2_TR(0x6004a7);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x1000ull))));
}
B6004ad:L6004ad:{c.instructions+=2;NFSU2_TR(0x6004ad);
w4(R+4,u32(0x85b940ull));
}
B6004b2:{NFSU2_TR(0x6004b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6004b7ull));
TAIL_STATIC(0x501690u,501);
}
B6004b7:L6004b7:{c.instructions+=2;NFSU2_TR(0x6004b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6004b9:{NFSU2_TR(0x6004b9);
if(r1(R+518)){{goto L6004cc;}}
}
B6004bb:L6004bb:{c.instructions+=2;NFSU2_TR(0x6004bb);
w4(R+4,u32(0x85b940ull));
}
B6004c0:{NFSU2_TR(0x6004c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6004c5ull));
TAIL_STATIC(0x501680u,501);
}
B6004c5:L6004c5:{c.instructions+=2;NFSU2_TR(0x6004c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6004c7:{NFSU2_TR(0x6004c7);
if(r1(R+518)){{goto L6004cc;}}
}
B6004c9:L6004c9:{c.instructions+=1;NFSU2_TR(0x6004c9);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x4ull))));
}
B6004cc:L6004cc:{c.instructions+=2;NFSU2_TR(0x6004cc);
u8 U[8];
__builtin_memmove((U+0),gp(0x8900bc),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6004d3:{NFSU2_TR(0x6004d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6004f4;}}
}
B6004d5:L6004d5:{c.instructions+=5;NFSU2_TR(0x6004d5);
__builtin_memmove((R+0),(R+24),4);
}
B6004d7:{NFSU2_TR(0x6004d7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4000000ull))));
}
B6004dc:{NFSU2_TR(0x6004dc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6004de:{NFSU2_TR(0x6004de);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6004e0:{NFSU2_TR(0x6004e0);
if(r1(R+518)){{goto L6004ee;}}
}
B6004e2:L6004e2:{c.instructions+=2;NFSU2_TR(0x6004e2);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfbffffffull))));
}
B6004e8:{NFSU2_TR(0x6004e8);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x8000ull))));
}
B6004ee:L6004ee:{c.instructions+=1;NFSU2_TR(0x6004ee);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffefffffull))));
}
B6004f4:L6004f4:{c.instructions+=2;NFSU2_TR(0x6004f4);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6004fb:{NFSU2_TR(0x6004fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60051c;}}
}
B6004fd:L6004fd:{c.instructions+=3;NFSU2_TR(0x6004fd);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B600502:{NFSU2_TR(0x600502);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600504:{NFSU2_TR(0x600504);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60051c;}}
}
B600506:L600506:{c.instructions+=2;NFSU2_TR(0x600506);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x80000ull))));
}
B60050c:{NFSU2_TR(0x60050c);
{goto L60051c;}
}
B60050e:L60050e:{c.instructions+=2;NFSU2_TR(0x60050e);
w4(R+24,u32(0x42000ull));
}
B600513:{NFSU2_TR(0x600513);
{goto L60051a;}
}
B600515:L600515:{c.instructions+=1;NFSU2_TR(0x600515);
w4(R+24,u32(0x2000000ull));
}
B60051a:L60051a:{c.instructions+=1;NFSU2_TR(0x60051a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B60051c:L60051c:{c.instructions+=4;NFSU2_TR(0x60051c);
__builtin_memmove((R+8),gp(0x8900d8),4);
}
B600522:{NFSU2_TR(0x600522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B600524:{NFSU2_TR(0x600524);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B600527:{NFSU2_TR(0x600527);
if(r1(R+518)){{goto L600559;}}
}
B600529:L600529:{c.instructions+=3;NFSU2_TR(0x600529);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B60052e:{NFSU2_TR(0x60052e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600530:{NFSU2_TR(0x600530);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600540;}}
}
B600532:L600532:{c.instructions+=2;NFSU2_TR(0x600532);
w4(R+4,u32(0x83a9d0ull));
}
B600537:{NFSU2_TR(0x600537);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60053cull));
TAIL_STATIC(0x457ba0u,457);
}
B60053c:L60053c:{c.instructions+=2;NFSU2_TR(0x60053c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60053e:{NFSU2_TR(0x60053e);
if(r1(R+518)){{goto L600559;}}
}
B600540:L600540:{c.instructions+=2;NFSU2_TR(0x600540);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B600543:{NFSU2_TR(0x600543);
if(r1(R+518)){{goto L600559;}}
}
B600545:L600545:{c.instructions+=4;NFSU2_TR(0x600545);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600549:{NFSU2_TR(0x600549);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60054f:{NFSU2_TR(0x60054f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600551:{NFSU2_TR(0x600551);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600559;}}
}
B600553:L600553:{c.instructions+=1;NFSU2_TR(0x600553);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x20000ull))));
}
B600559:L600559:{c.instructions+=7;NFSU2_TR(0x600559);
__builtin_memmove((R+8),(R+28),4);
}
B60055b:{NFSU2_TR(0x60055b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60055c:{NFSU2_TR(0x60055c);
__builtin_memmove((R+0),(R+24),4);
}
B60055e:{NFSU2_TR(0x60055e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60055f:{NFSU2_TR(0x60055f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B600560:{NFSU2_TR(0x600560);
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
B600563:{NFSU2_TR(0x600563);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B600564:L600564:{c.instructions+=7;NFSU2_TR(0x600564);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B600565:{NFSU2_TR(0x600565);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B600566:{NFSU2_TR(0x600566);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B600568:{NFSU2_TR(0x600568);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B60056a:{NFSU2_TR(0x60056a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60056b:{NFSU2_TR(0x60056b);
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
B60056e:{NFSU2_TR(0x60056e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B600590:L600590:{c.instructions+=5;NFSU2_TR(0x600590);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600591:{NFSU2_TR(0x600591);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600592:{NFSU2_TR(0x600592);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600593:{NFSU2_TR(0x600593);
__builtin_memmove((R+24),(R+4),4);
}
B600595:{NFSU2_TR(0x600595);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60059aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x600090u);}goto L600090;}
}
B60059a:L60059a:{c.instructions+=4;NFSU2_TR(0x60059a);
__builtin_memmove((R+28),(R+0),4);
}
B60059c:{NFSU2_TR(0x60059c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x258ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6005a2:{NFSU2_TR(0x6005a2);
__builtin_memmove((R+12),(R+8),4);
}
B6005a4:{NFSU2_TR(0x6005a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6005ae;}}
}
B6005a6:L6005a6:{c.instructions+=2;NFSU2_TR(0x6005a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6005ac:{NFSU2_TR(0x6005ac);
if(r1(R+518)){{goto L6005cc;}}
}
B6005ae:L6005ae:{c.instructions+=3;NFSU2_TR(0x6005ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6005b4:{NFSU2_TR(0x6005b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6005b6:{NFSU2_TR(0x6005b6);
if(r1(R+518)){{goto L6005c0;}}
}
B6005b8:L6005b8:{c.instructions+=4;NFSU2_TR(0x6005b8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6005b9:{NFSU2_TR(0x6005b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6005ba:{NFSU2_TR(0x6005ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6005bb:{NFSU2_TR(0x6005bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6005c0ull));
TAIL_STATIC(0x4ca090u,4ca);
}
B6005c0:L6005c0:{c.instructions+=2;NFSU2_TR(0x6005c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x258ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6005c6:{NFSU2_TR(0x6005c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6005cc:L6005cc:{c.instructions+=3;NFSU2_TR(0x6005cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6005d2:{NFSU2_TR(0x6005d2);
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
B6005d4:{NFSU2_TR(0x6005d4);
if(r1(R+518)){{goto L6005e0;}}
}
B6005d6:L6005d6:{c.instructions+=4;NFSU2_TR(0x6005d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6005d9:{NFSU2_TR(0x6005d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6005da:{NFSU2_TR(0x6005da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6005db:{NFSU2_TR(0x6005db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6005e0ull));
TAIL_STATIC(0x4ec5a0u,4ec);
}
B6005e0:L6005e0:{c.instructions+=4;NFSU2_TR(0x6005e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6005e1:{NFSU2_TR(0x6005e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6005e2:{NFSU2_TR(0x6005e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6005e3:{NFSU2_TR(0x6005e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6005f0:L6005f0:{c.instructions+=6;NFSU2_TR(0x6005f0);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B6005f5:{NFSU2_TR(0x6005f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6005f7:{NFSU2_TR(0x6005f7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6005fa:{NFSU2_TR(0x6005fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6005fb:{NFSU2_TR(0x6005fb);
__builtin_memmove((R+24),(R+4),4);
}
B6005fd:{NFSU2_TR(0x6005fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60063c;}}
}
B6005ff:L6005ff:{c.instructions+=3;NFSU2_TR(0x6005ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600605:{NFSU2_TR(0x600605);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600607:{NFSU2_TR(0x600607);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600676;}}
}
B600609:L600609:{c.instructions+=3;NFSU2_TR(0x600609);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60060f:{NFSU2_TR(0x60060f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600611:{NFSU2_TR(0x600611);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600676;}}
}
B600613:L600613:{c.instructions+=3;NFSU2_TR(0x600613);
__builtin_memmove((R+4),gp(0x890118),4);
}
B600619:{NFSU2_TR(0x600619);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B60061c:{NFSU2_TR(0x60061c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600631;}}
}
B60061e:L60061e:{c.instructions+=5;NFSU2_TR(0x60061e);
{u32 ea_=u32(u32(9037752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B600624:{NFSU2_TR(0x600624);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60062a:{NFSU2_TR(0x60062a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60062c:{NFSU2_TR(0x60062c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60062f:{NFSU2_TR(0x60062f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600676;}}
}
B600631:L600631:{c.instructions+=3;NFSU2_TR(0x600631);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600633:{NFSU2_TR(0x600633);
__builtin_memmove((R+4),(R+24),4);
}
B600635:{NFSU2_TR(0x600635);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60063aull));
TAIL_STATIC(0x5fa820u,5fa);
}
B60063a:L60063a:{c.instructions+=1;NFSU2_TR(0x60063a);
{goto L600676;}
}
B60063c:L60063c:{c.instructions+=2;NFSU2_TR(0x60063c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60063f:{NFSU2_TR(0x60063f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600660;}}
}
B600641:L600641:{c.instructions+=3;NFSU2_TR(0x600641);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600647:{NFSU2_TR(0x600647);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600649:{NFSU2_TR(0x600649);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600676;}}
}
B60064b:L60064b:{c.instructions+=3;NFSU2_TR(0x60064b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600651:{NFSU2_TR(0x600651);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600653:{NFSU2_TR(0x600653);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600676;}}
}
B600655:L600655:{c.instructions+=3;NFSU2_TR(0x600655);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600657:{NFSU2_TR(0x600657);
__builtin_memmove((R+4),(R+24),4);
}
B600659:{NFSU2_TR(0x600659);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60065eull));
TAIL_STATIC(0x5fa820u,5fa);
}
B60065e:L60065e:{c.instructions+=1;NFSU2_TR(0x60065e);
{goto L600676;}
}
B600660:L600660:{c.instructions+=3;NFSU2_TR(0x600660);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B600666:{NFSU2_TR(0x600666);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B600668:{NFSU2_TR(0x600668);
if(r1(R+518)){{goto L600676;}}
}
B60066a:L60066a:{c.instructions+=2;NFSU2_TR(0x60066a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60066d:{NFSU2_TR(0x60066d);
if(r1(R+518)){{goto L600676;}}
}
B60066f:L60066f:{c.instructions+=1;NFSU2_TR(0x60066f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24aull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B600676:L600676:{c.instructions+=4;NFSU2_TR(0x600676);
__builtin_memmove((R+8),gp(0x8900d8),4);
}
B60067c:{NFSU2_TR(0x60067c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60067e:{NFSU2_TR(0x60067e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B600681:{NFSU2_TR(0x600681);
if(r1(R+518)){{goto L600688;}}
}
B600683:L600683:{c.instructions+=2;NFSU2_TR(0x600683);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B600686:{NFSU2_TR(0x600686);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60068f;}}
}
B600688:L600688:{c.instructions+=2;NFSU2_TR(0x600688);
__builtin_memmove((R+4),(R+24),4);
}
B60068a:{NFSU2_TR(0x60068a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60068full));
TAIL_STATIC(0x5fabc0u,5fa);
}
B60068f:L60068f:{c.instructions+=2;NFSU2_TR(0x60068f);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B600696:{NFSU2_TR(0x600696);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600700;}}
}
B600698:L600698:{c.instructions+=2;NFSU2_TR(0x600698);
w4(R+4,u32(0x865480ull));
}
B60069d:{NFSU2_TR(0x60069d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6006a2ull));
TAIL_STATIC(0x571250u,571);
}
B6006a2:L6006a2:{c.instructions+=2;NFSU2_TR(0x6006a2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6006a4:{NFSU2_TR(0x6006a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6006c0;}}
}
B6006a6:L6006a6:{c.instructions+=3;NFSU2_TR(0x6006a6);
__builtin_memmove((R+4),gp(0x890080),4);
}
B6006ac:{NFSU2_TR(0x6006ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6006ae:{NFSU2_TR(0x6006ae);
if(r1(R+518)){{goto L6006c0;}}
}
B6006b0:L6006b0:{c.instructions+=1;NFSU2_TR(0x6006b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6006b5ull));
TAIL_STATIC(0x5ea320u,5ea);
}
B6006b5:L6006b5:{c.instructions+=2;NFSU2_TR(0x6006b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6006b7:{NFSU2_TR(0x6006b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6006c0;}}
}
B6006b9:L6006b9:{c.instructions+=2;NFSU2_TR(0x6006b9);
__builtin_memmove((R+4),(R+24),4);
}
B6006bb:{NFSU2_TR(0x6006bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6006c0ull));
TAIL_STATIC(0x5fb050u,5fb);
}
B6006c0:L6006c0:{c.instructions+=2;NFSU2_TR(0x6006c0);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6006c7:{NFSU2_TR(0x6006c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600700;}}
}
B6006c9:L6006c9:{c.instructions+=3;NFSU2_TR(0x6006c9);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B6006ce:{NFSU2_TR(0x6006ce);
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
B6006d0:{NFSU2_TR(0x6006d0);
if(r1(R+518)){{goto L600700;}}
}
B6006d2:L6006d2:{c.instructions+=1;NFSU2_TR(0x6006d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6006d7ull));
TAIL_STATIC(0x510050u,510);
}
B6006d7:L6006d7:{c.instructions+=2;NFSU2_TR(0x6006d7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6006d9:{NFSU2_TR(0x6006d9);
if(r1(R+518)){{goto L600700;}}
}
B6006db:L6006db:{c.instructions+=3;NFSU2_TR(0x6006db);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B6006e0:{NFSU2_TR(0x6006e0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6006e3:{NFSU2_TR(0x6006e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600700;}}
}
B6006e5:L6006e5:{c.instructions+=3;NFSU2_TR(0x6006e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6006eb:{NFSU2_TR(0x6006eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6006ed:{NFSU2_TR(0x6006ed);
if(r1(R+518)){{goto L6006f5;}}
}
B6006ef:L6006ef:{c.instructions+=2;NFSU2_TR(0x6006ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x15ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6006f3:{NFSU2_TR(0x6006f3);
if(r1(R+518)){{goto L600700;}}
}
B6006f5:L6006f5:{c.instructions+=4;NFSU2_TR(0x6006f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6006f7:{NFSU2_TR(0x6006f7);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6006f9:{NFSU2_TR(0x6006f9);
__builtin_memmove((R+4),(R+24),4);
}
B6006fb:{NFSU2_TR(0x6006fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600700ull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B600700:L600700:{c.instructions+=2;NFSU2_TR(0x600700);
__builtin_memmove((R+4),(R+24),4);
}
B600702:{NFSU2_TR(0x600702);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600707ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x600590u);}goto L600590;}
}
B600707:L600707:{c.instructions+=3;NFSU2_TR(0x600707);
__builtin_memmove((R+4),(R+24),4);
}
B600709:{NFSU2_TR(0x600709);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60070a:{NFSU2_TR(0x60070a);
TAIL_STATIC(0x5eb450u,5eb);
}
B600710:L600710:{c.instructions+=6;NFSU2_TR(0x600710);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600711:{NFSU2_TR(0x600711);
__builtin_memmove((R+12),(R+4),4);
}
B600713:{NFSU2_TR(0x600713);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600716:{NFSU2_TR(0x600716);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60071c:{NFSU2_TR(0x60071c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60071e:{NFSU2_TR(0x60071e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60074f;}}
}
B600720:L600720:{c.instructions+=4;NFSU2_TR(0x600720);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8d8ull))));
}
B600725:{NFSU2_TR(0x600725);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600726:{NFSU2_TR(0x600726);
w4(R+4,u32(0x88f298ull));
}
B60072b:{NFSU2_TR(0x60072b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600730ull));
TAIL_STATIC(0x5ded10u,5de);
}
B600730:L600730:{c.instructions+=2;NFSU2_TR(0x600730);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600732:{NFSU2_TR(0x600732);
if(r1(R+518)){{goto L600749;}}
}
B600734:L600734:{c.instructions+=3;NFSU2_TR(0x600734);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B600736:{NFSU2_TR(0x600736);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B600739:{NFSU2_TR(0x600739);
if(r1(R+518)){{goto L600740;}}
}
B60073b:L60073b:{c.instructions+=2;NFSU2_TR(0x60073b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60073e:{NFSU2_TR(0x60073e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600749;}}
}
B600740:L600740:{c.instructions+=3;NFSU2_TR(0x600740);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600743:{NFSU2_TR(0x600743);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600744:{NFSU2_TR(0x600744);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600749ull));
TAIL_STATIC(0x5fbe00u,5fb);
}
B600749:L600749:{c.instructions+=3;NFSU2_TR(0x600749);
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
B60074b:{NFSU2_TR(0x60074b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60074c:{NFSU2_TR(0x60074c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60074f:L60074f:{c.instructions+=8;NFSU2_TR(0x60074f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x904ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600755:{NFSU2_TR(0x600755);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60075b:{NFSU2_TR(0x60075b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60075c:{NFSU2_TR(0x60075c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+20),(U+4),2);
}
B600763:{NFSU2_TR(0x600763);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600764:{NFSU2_TR(0x600764);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600765:{NFSU2_TR(0x600765);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600766:{NFSU2_TR(0x600766);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60076bull));
TAIL_STATIC(0x43e6d0u,43e);
}
B60076b:L60076b:{c.instructions+=8;NFSU2_TR(0x60076b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B60076e:{NFSU2_TR(0x60076e);
w4(R+4,u32(0x88f298ull));
}
B600773:{NFSU2_TR(0x600773);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60077d:{NFSU2_TR(0x60077d);
__builtin_memmove((R+28),(R+0),4);
}
B60077f:{NFSU2_TR(0x60077f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600782:{NFSU2_TR(0x600782);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8d8ull))));
}
B600787:{NFSU2_TR(0x600787);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600788:{NFSU2_TR(0x600788);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60078dull));
TAIL_STATIC(0x5ded10u,5de);
}
B60078d:L60078d:{c.instructions+=2;NFSU2_TR(0x60078d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60078f:{NFSU2_TR(0x60078f);
if(r1(R+518)){{goto L6007d9;}}
}
B600791:L600791:{c.instructions+=3;NFSU2_TR(0x600791);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B600793:{NFSU2_TR(0x600793);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600795:{NFSU2_TR(0x600795);
if(r1(R+518)){{goto L6008cf;}}
}
B60079b:L60079b:{c.instructions+=2;NFSU2_TR(0x60079b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60079e:{NFSU2_TR(0x60079e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6007be;}}
}
B6007a0:L6007a0:{c.instructions+=5;NFSU2_TR(0x6007a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6007a3:{NFSU2_TR(0x6007a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6007a6:{NFSU2_TR(0x6007a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6007a7:{NFSU2_TR(0x6007a7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6007a8:{NFSU2_TR(0x6007a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6007adull));
TAIL_STATIC(0x43e6d0u,43e);
}
B6007ad:L6007ad:{c.instructions+=4;NFSU2_TR(0x6007ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6007b0:{NFSU2_TR(0x6007b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6007ba:{NFSU2_TR(0x6007ba);
__builtin_memmove((R+28),(R+0),4);
}
B6007bc:{NFSU2_TR(0x6007bc);
{goto L6007d9;}
}
B6007be:L6007be:{c.instructions+=2;NFSU2_TR(0x6007be);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6007c1:{NFSU2_TR(0x6007c1);
if(r1(R+518)){{goto L6007c8;}}
}
B6007c3:L6007c3:{c.instructions+=2;NFSU2_TR(0x6007c3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6007c6:{NFSU2_TR(0x6007c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6007d9;}}
}
B6007c8:L6007c8:{c.instructions+=3;NFSU2_TR(0x6007c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6007cb:{NFSU2_TR(0x6007cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6007cc:{NFSU2_TR(0x6007cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6007d1ull));
TAIL_STATIC(0x5fbe00u,5fb);
}
B6007d1:L6007d1:{c.instructions+=2;NFSU2_TR(0x6007d1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6007d3:{NFSU2_TR(0x6007d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6008cf;}}
}
B6007d9:L6007d9:{c.instructions+=5;NFSU2_TR(0x6007d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6007da:{NFSU2_TR(0x6007da);
__builtin_memmove((R+24),(R+28),4);
}
B6007dc:{NFSU2_TR(0x6007dc);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+20))));
}
B6007de:{NFSU2_TR(0x6007de);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w1(R+512,u8((r2(U+0))<(u16(0x8000ull))));
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x8000ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B6007e3:{NFSU2_TR(0x6007e3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6007e7;}}
}
B6007e5:L6007e5:{c.instructions+=1;NFSU2_TR(0x6007e5);
w4(R+24,u32(0-u32(r4(R+24))));
}
B6007e7:L6007e7:{c.instructions+=3;NFSU2_TR(0x6007e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6007eb:{NFSU2_TR(0x6007eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6007ed:{NFSU2_TR(0x6007ed);
if(r1(R+518)){{goto L600817;}}
}
B6007ef:L6007ef:{c.instructions+=3;NFSU2_TR(0x6007ef);
{u32 ea_=u32(u32(8017276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6007f5:{NFSU2_TR(0x6007f5);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6007fb:{NFSU2_TR(0x6007fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600800ull));
TAIL_STATIC(0x75bed4u,75b);
}
B600800:L600800:{c.instructions+=9;NFSU2_TR(0x600800);
__builtin_memmove((R+4),(R+0),4);
}
B600802:{NFSU2_TR(0x600802);
w4(R+0,u32(0xb60b60b7ull));
}
B600807:{NFSU2_TR(0x600807);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B600809:{NFSU2_TR(0x600809);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B60080b:{NFSU2_TR(0x60080b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B60080e:{NFSU2_TR(0x60080e);
__builtin_memmove((R+0),(R+8),4);
}
B600810:{NFSU2_TR(0x600810);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B600813:{NFSU2_TR(0x600813);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B600815:{NFSU2_TR(0x600815);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B600817:L600817:{c.instructions+=3;NFSU2_TR(0x600817);
{u32 ea_=u32(u32(8017268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60081d:{NFSU2_TR(0x60081d);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B600823:{NFSU2_TR(0x600823);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600828ull));
TAIL_STATIC(0x75bed4u,75b);
}
B600828:L600828:{c.instructions+=11;NFSU2_TR(0x600828);
__builtin_memmove((R+4),(R+0),4);
}
B60082a:{NFSU2_TR(0x60082a);
w4(R+0,u32(0xb60b60b7ull));
}
B60082f:{NFSU2_TR(0x60082f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B600831:{NFSU2_TR(0x600831);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B600833:{NFSU2_TR(0x600833);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B600836:{NFSU2_TR(0x600836);
__builtin_memmove((R+4),(R+8),4);
}
B600838:{NFSU2_TR(0x600838);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B60083b:{NFSU2_TR(0x60083b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B60083d:{NFSU2_TR(0x60083d);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
w1(R+512,u8((r2(R+24))<(r2(U+0))));
}
B600840:{NFSU2_TR(0x600840);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B600841:{NFSU2_TR(0x600841);
if(r1(R+512)){{goto L6008cf;}}
}
B600847:L600847:{c.instructions+=8;NFSU2_TR(0x600847);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60084a:{NFSU2_TR(0x60084a);
{u32 ea_=u32(r4(R+4)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B600850:{NFSU2_TR(0x600850);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B600856:{NFSU2_TR(0x600856);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B600858:{NFSU2_TR(0x600858);
{u32 ea_=u32(u32(8017280u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60085e:{NFSU2_TR(0x60085e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B600860:{NFSU2_TR(0x600860);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B600863:{NFSU2_TR(0x600863);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6008d7;}}
}
B600865:L600865:{c.instructions+=5;NFSU2_TR(0x600865);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B600868:{NFSU2_TR(0x600868);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60086b:{NFSU2_TR(0x60086b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60086c:{NFSU2_TR(0x60086c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60086d:{NFSU2_TR(0x60086d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600872ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B600872:L600872:{c.instructions+=4;NFSU2_TR(0x600872);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B600875:{NFSU2_TR(0x600875);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B600877:{NFSU2_TR(0x600877);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w1(R+512,u8((r2(U+0))<(u16(0x8000ull))));
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x8000ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B60087c:{NFSU2_TR(0x60087c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L60088f;}}
}
B60087e:L60087e:{c.instructions+=2;NFSU2_TR(0x60087e);
u8 U[4];
w4(U+0,u32(0x43b40000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600883:{NFSU2_TR(0x600883);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600888ull));
TAIL_STATIC(0x401020u,401);
}
B600888:L600888:{c.instructions+=3;NFSU2_TR(0x600888);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60088b:{NFSU2_TR(0x60088b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B60088d:{NFSU2_TR(0x60088d);
__builtin_memmove((R+28),(R+0),4);
}
B60088f:L60088f:{c.instructions+=2;NFSU2_TR(0x60088f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600891:{NFSU2_TR(0x600891);
if(r1(R+518)){{goto L6008a4;}}
}
B600893:L600893:{c.instructions+=3;NFSU2_TR(0x600893);
__builtin_memmove((R+4),gp(0x7a557c),4);
}
B600899:{NFSU2_TR(0x600899);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60089a:{NFSU2_TR(0x60089a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60089full));
TAIL_STATIC(0x401020u,401);
}
B60089f:L60089f:{c.instructions+=2;NFSU2_TR(0x60089f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6008a2:{NFSU2_TR(0x6008a2);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6008a4:L6008a4:{c.instructions+=3;NFSU2_TR(0x6008a4);
{u32 ea_=u32(u32(8017272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6008aa:{NFSU2_TR(0x6008aa);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6008b0:{NFSU2_TR(0x6008b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6008b5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B6008b5:L6008b5:{c.instructions+=10;NFSU2_TR(0x6008b5);
__builtin_memmove((R+4),(R+0),4);
}
B6008b7:{NFSU2_TR(0x6008b7);
w4(R+0,u32(0xb60b60b7ull));
}
B6008bc:{NFSU2_TR(0x6008bc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B6008be:{NFSU2_TR(0x6008be);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6008c0:{NFSU2_TR(0x6008c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B6008c3:{NFSU2_TR(0x6008c3);
__builtin_memmove((R+0),(R+8),4);
}
B6008c5:{NFSU2_TR(0x6008c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6008c8:{NFSU2_TR(0x6008c8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6008ca:{NFSU2_TR(0x6008ca);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
w1(R+512,u8((r2(R+28))<(r2(U+0))));
}
B6008cd:{NFSU2_TR(0x6008cd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6008e3;}}
}
B6008cf:L6008cf:{c.instructions+=5;NFSU2_TR(0x6008cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6008d0:{NFSU2_TR(0x6008d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6008d1:{NFSU2_TR(0x6008d1);
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
B6008d3:{NFSU2_TR(0x6008d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6008d4:{NFSU2_TR(0x6008d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6008d7:L6008d7:{c.instructions+=2;NFSU2_TR(0x6008d7);
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
B6008d9:{NFSU2_TR(0x6008d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6008f3;}}
}
B6008db:L6008db:{c.instructions+=5;NFSU2_TR(0x6008db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6008dc:{NFSU2_TR(0x6008dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6008dd:{NFSU2_TR(0x6008dd);
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
B6008df:{NFSU2_TR(0x6008df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6008e0:{NFSU2_TR(0x6008e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6008e3:L6008e3:{c.instructions+=2;NFSU2_TR(0x6008e3);
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
B6008e5:{NFSU2_TR(0x6008e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6008f3;}}
}
B6008e7:L6008e7:{c.instructions+=3;NFSU2_TR(0x6008e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6008ea:{NFSU2_TR(0x6008ea);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6008f1:{NFSU2_TR(0x6008f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6008cfu);}goto L6008cf;}}
}
B6008f3:L6008f3:{c.instructions+=5;NFSU2_TR(0x6008f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6008f4:{NFSU2_TR(0x6008f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6008f5:{NFSU2_TR(0x6008f5);
w4(R+0,u32(0x1ull));
}
B6008fa:{NFSU2_TR(0x6008fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6008fb:{NFSU2_TR(0x6008fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B600900:L600900:{c.instructions+=6;NFSU2_TR(0x600900);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B600905:{NFSU2_TR(0x600905);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600906:{NFSU2_TR(0x600906);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B600908:{NFSU2_TR(0x600908);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60090a:{NFSU2_TR(0x60090a);
s4(0x8900c0,u32(0x0ull));
}
B600914:{NFSU2_TR(0x600914);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L600936;}}
}
B600916:L600916:{c.instructions+=1;NFSU2_TR(0x600916);
{goto L600920;}
}
B600920:L600920:{c.instructions+=2;NFSU2_TR(0x600920);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B600927:{NFSU2_TR(0x600927);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60092cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6005f0u);}goto L6005f0;}
}
B60092c:L60092c:{c.instructions+=4;NFSU2_TR(0x60092c);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B600931:{NFSU2_TR(0x600931);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B600932:{NFSU2_TR(0x600932);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B600934:{NFSU2_TR(0x600934);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x600920u);}goto L600920;}}
}
B600936:L600936:{c.instructions+=3;NFSU2_TR(0x600936);
__builtin_memmove((R+4),gp(0x883de0),4);
}
B60093c:{NFSU2_TR(0x60093c);
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
B60093e:{NFSU2_TR(0x60093e);
if(r1(R+518)){{goto L600995;}}
}
B600940:L600940:{c.instructions+=2;NFSU2_TR(0x600940);
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
B600942:{NFSU2_TR(0x600942);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L600995;}}
}
B600944:L600944:{c.instructions+=6;NFSU2_TR(0x600944);
__builtin_memmove((R+0),gp(0x86514c),4);
}
B600949:{NFSU2_TR(0x600949);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B60094a:{NFSU2_TR(0x60094a);
w4(R+4,u32(0xaull));
}
B60094f:{NFSU2_TR(0x60094f);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x60094f);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x60094f);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B600951:{NFSU2_TR(0x600951);
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
B600953:{NFSU2_TR(0x600953);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600995;}}
}
B600955:L600955:{c.instructions+=3;NFSU2_TR(0x600955);
__builtin_memmove((R+24),gp(0x8900b4),4);
}
B60095b:{NFSU2_TR(0x60095b);
__builtin_memmove((R+4),(R+24),4);
}
B60095d:{NFSU2_TR(0x60095d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600962ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6005f0u);}goto L6005f0;}
}
B600962:L600962:{c.instructions+=3;NFSU2_TR(0x600962);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B600965:{NFSU2_TR(0x600965);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600967:{NFSU2_TR(0x600967);
if(r1(R+518)){{goto L60097e;}}
}
B600969:L600969:{c.instructions+=6;NFSU2_TR(0x600969);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60096b:{NFSU2_TR(0x60096b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x60ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60096e:{NFSU2_TR(0x60096e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60096f:{NFSU2_TR(0x60096f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600971:{NFSU2_TR(0x600971);
u8 U[4];
w4(U+0,u32(0x787568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600976:{NFSU2_TR(0x600976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60097bull));
TAIL_STATIC(0x4022c0u,402);
}
B60097b:L60097b:{c.instructions+=1;NFSU2_TR(0x60097b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B60097e:L60097e:{c.instructions+=2;NFSU2_TR(0x60097e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600980:{NFSU2_TR(0x600980);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600985ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B600985:L600985:{c.instructions+=4;NFSU2_TR(0x600985);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600988:{NFSU2_TR(0x600988);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60098b:{NFSU2_TR(0x60098b);
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
B60098d:{NFSU2_TR(0x60098d);
if(r1(R+518)){{goto L600995;}}
}
B60098f:L60098f:{c.instructions+=2;NFSU2_TR(0x60098f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B600990:{NFSU2_TR(0x600990);
TAIL_STATIC(0x441120u,441);
}
B600995:L600995:{c.instructions+=2;NFSU2_TR(0x600995);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B600996:{NFSU2_TR(0x600996);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6009a0:L6009a0:{c.instructions+=18;NFSU2_TR(0x6009a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6009a1:{NFSU2_TR(0x6009a1);
__builtin_memmove((R+20),(R+16),4);
}
B6009a3:{NFSU2_TR(0x6009a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B6009a6:{NFSU2_TR(0x6009a6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6009a8:{NFSU2_TR(0x6009a8);
u8 U[4];
w4(U+0,u32(0x779fcbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6009ad:{NFSU2_TR(0x6009ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6009b3:{NFSU2_TR(0x6009b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6009b4:{NFSU2_TR(0x6009b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6009bb:{NFSU2_TR(0x6009bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x378ull))));
}
B6009c1:{NFSU2_TR(0x6009c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6009c2:{NFSU2_TR(0x6009c2);
__builtin_memmove((R+12),(R+4),4);
}
B6009c4:{NFSU2_TR(0x6009c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6009c7:{NFSU2_TR(0x6009c7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6009ca:{NFSU2_TR(0x6009ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6009cb:{NFSU2_TR(0x6009cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6009ce:{NFSU2_TR(0x6009ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6009cf:{NFSU2_TR(0x6009cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6009d3:{NFSU2_TR(0x6009d3);
if(r1(R+518)){{goto L6009da;}}
}
B6009d5:L6009d5:{c.instructions+=2;NFSU2_TR(0x6009d5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6009d8:{NFSU2_TR(0x6009d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6009e3;}}
}
B6009da:L6009da:{c.instructions+=3;NFSU2_TR(0x6009da);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6009dc:{NFSU2_TR(0x6009dc);
__builtin_memmove((R+4),(R+12),4);
}
B6009de:{NFSU2_TR(0x6009de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6009e3ull));
TAIL_STATIC(0x5ffe70u,5ff);
}
B6009e3:L6009e3:{c.instructions+=3;NFSU2_TR(0x6009e3);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B6009e8:{NFSU2_TR(0x6009e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6009ea:{NFSU2_TR(0x6009ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6009f5;}}
}
B6009ec:L6009ec:{c.instructions+=3;NFSU2_TR(0x6009ec);
__builtin_memmove((R+0),gp(0x890104),4);
}
B6009f1:{NFSU2_TR(0x6009f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6009f3:{NFSU2_TR(0x6009f3);
if(r1(R+518)){{goto L600a03;}}
}
B6009f5:L6009f5:{c.instructions+=3;NFSU2_TR(0x6009f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6009f8:{NFSU2_TR(0x6009f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6009fe:{NFSU2_TR(0x6009fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600a03ull));
TAIL_STATIC(0x56dfa0u,56d);
}
B600a03:L600a03:{c.instructions+=5;NFSU2_TR(0x600a03);
{u32 ea_=u32(r4(R+24)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B600a09:{NFSU2_TR(0x600a09);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B600a0f:{NFSU2_TR(0x600a0f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B600a11:{NFSU2_TR(0x600a11);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B600a14:{NFSU2_TR(0x600a14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600a1c;}}
}
B600a16:L600a16:{c.instructions+=2;NFSU2_TR(0x600a16);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B600a1a:{NFSU2_TR(0x600a1a);
{goto L600a26;}
}
B600a1c:L600a1c:{c.instructions+=2;NFSU2_TR(0x600a1c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B600a1e:{NFSU2_TR(0x600a1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B600a26:L600a26:{c.instructions+=3;NFSU2_TR(0x600a26);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B600a2b:{NFSU2_TR(0x600a2b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B600a2d:{NFSU2_TR(0x600a2d);
if(r1(R+518)){{goto L600a41;}}
}
B600a2f:L600a2f:{c.instructions+=4;NFSU2_TR(0x600a2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x904ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600a35:{NFSU2_TR(0x600a35);
{u32 ea_=u32(r4(R+24)+u32(2304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B600a3b:{NFSU2_TR(0x600a3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600a3f:{NFSU2_TR(0x600a3f);
{goto L600a79;}
}
B600a41:L600a41:{c.instructions+=4;NFSU2_TR(0x600a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600a44:{NFSU2_TR(0x600a44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600a47:{NFSU2_TR(0x600a47);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600a49:{NFSU2_TR(0x600a49);
if(r1(R+518)){{goto L600a69;}}
}
B600a4b:L600a4b:{c.instructions+=7;NFSU2_TR(0x600a4b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B600a4d:{NFSU2_TR(0x600a4d);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+8))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B600a50:{NFSU2_TR(0x600a50);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B600a54:{NFSU2_TR(0x600a54);
__builtin_memmove((R+8),(R+518),1);
}
B600a57:{NFSU2_TR(0x600a57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600a58:{NFSU2_TR(0x600a58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600a59:{NFSU2_TR(0x600a59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600a5eull));
TAIL_STATIC(0x401b20u,401);
}
B600a5e:L600a5e:{c.instructions+=4;NFSU2_TR(0x600a5e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B600a60:{NFSU2_TR(0x600a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600a63:{NFSU2_TR(0x600a63);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600a67:{NFSU2_TR(0x600a67);
{goto L600a79;}
}
B600a69:L600a69:{c.instructions+=3;NFSU2_TR(0x600a69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B600a6f:{NFSU2_TR(0x600a6f);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B600a75:{NFSU2_TR(0x600a75);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600a79:L600a79:{c.instructions+=9;NFSU2_TR(0x600a79);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B600a7d:{NFSU2_TR(0x600a7d);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B600a83:{NFSU2_TR(0x600a83);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B600a85:{NFSU2_TR(0x600a85);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B600a8b:{NFSU2_TR(0x600a8b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B600a8d:{NFSU2_TR(0x600a8d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B600a93:{NFSU2_TR(0x600a93);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B600a95:{NFSU2_TR(0x600a95);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B600a98:{NFSU2_TR(0x600a98);
if(r1(R+518)){{goto L600aa2;}}
}
B600a9a:L600a9a:{c.instructions+=2;NFSU2_TR(0x600a9a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B600a9c:{NFSU2_TR(0x600a9c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B600aa2:L600aa2:{c.instructions+=6;NFSU2_TR(0x600aa2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B600aa6:{NFSU2_TR(0x600aa6);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B600aaa:{NFSU2_TR(0x600aaa);
{u32 ea_=u32(u32(8397260u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B600ab0:{NFSU2_TR(0x600ab0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B600ab2:{NFSU2_TR(0x600ab2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B600ab5:{NFSU2_TR(0x600ab5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L600ac0;}}
}
B600ab7:L600ab7:{c.instructions+=2;NFSU2_TR(0x600ab7);
__builtin_memmove((R+0),gp(0x8021cc),4);
}
B600abc:{NFSU2_TR(0x600abc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600ac0:L600ac0:{c.instructions+=5;NFSU2_TR(0x600ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600ac3:{NFSU2_TR(0x600ac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600ac6:{NFSU2_TR(0x600ac6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600ac8:{NFSU2_TR(0x600ac8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B600ad0:{NFSU2_TR(0x600ad0);
if(r1(R+518)){{goto L600afb;}}
}
B600ad2:L600ad2:{c.instructions+=3;NFSU2_TR(0x600ad2);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B600ad7:{NFSU2_TR(0x600ad7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B600ad9:{NFSU2_TR(0x600ad9);
if(r1(R+518)){{goto L600aec;}}
}
B600adb:L600adb:{c.instructions+=1;NFSU2_TR(0x600adb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600ae0ull));
TAIL_STATIC(0x40f690u,40f);
}
B600ae0:L600ae0:{c.instructions+=4;NFSU2_TR(0x600ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600ae3:{NFSU2_TR(0x600ae3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x2ull))));
}
B600ae6:{NFSU2_TR(0x600ae6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B600ae8:{NFSU2_TR(0x600ae8);
if(r1(R+518)){{goto L600afb;}}
}
B600aea:L600aea:{c.instructions+=1;NFSU2_TR(0x600aea);
{goto L600af3;}
}
B600aec:L600aec:{c.instructions+=3;NFSU2_TR(0x600aec);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B600aef:{NFSU2_TR(0x600aef);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B600af1:{NFSU2_TR(0x600af1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600afb;}}
}
B600af3:L600af3:{c.instructions+=1;NFSU2_TR(0x600af3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B600afb:L600afb:{c.instructions+=6;NFSU2_TR(0x600afb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600afd:{NFSU2_TR(0x600afd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B600b00:{NFSU2_TR(0x600b00);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600b02:{NFSU2_TR(0x600b02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600b03:{NFSU2_TR(0x600b03);
w4(R+4,u32(0x88f298ull));
}
B600b08:{NFSU2_TR(0x600b08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600b0dull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B600b0d:L600b0d:{c.instructions+=2;NFSU2_TR(0x600b0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600b0f:{NFSU2_TR(0x600b0f);
if(r1(R+518)){{goto L600b4a;}}
}
B600b11:L600b11:{c.instructions+=10;NFSU2_TR(0x600b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B600b14:{NFSU2_TR(0x600b14);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B600b17:{NFSU2_TR(0x600b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600b1a:{NFSU2_TR(0x600b1a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B600b1e:{NFSU2_TR(0x600b1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600b22:{NFSU2_TR(0x600b22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B600b25:{NFSU2_TR(0x600b25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600b26:{NFSU2_TR(0x600b26);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600b27:{NFSU2_TR(0x600b27);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B600b2f:{NFSU2_TR(0x600b2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600b34ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B600b34:L600b34:{c.instructions+=8;NFSU2_TR(0x600b34);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B600b37:{NFSU2_TR(0x600b37);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600b39:{NFSU2_TR(0x600b39);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B600b3d:{NFSU2_TR(0x600b3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600b3e:{NFSU2_TR(0x600b3e);
__builtin_memmove((R+0),gp(0x8021cc),4);
}
B600b43:{NFSU2_TR(0x600b43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600b44:{NFSU2_TR(0x600b44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600b45:{NFSU2_TR(0x600b45);
{goto L600def;}
}
B600b4a:L600b4a:{c.instructions+=4;NFSU2_TR(0x600b4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600b4d:{NFSU2_TR(0x600b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B600b50:{NFSU2_TR(0x600b50);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600b52:{NFSU2_TR(0x600b52);
if(r1(R+518)){{goto L600dc4;}}
}
B600b58:L600b58:{c.instructions+=18;NFSU2_TR(0x600b58);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B600b5c:{NFSU2_TR(0x600b5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600b5f:{NFSU2_TR(0x600b5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B600b61:{NFSU2_TR(0x600b61);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600b65:{NFSU2_TR(0x600b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600b68:{NFSU2_TR(0x600b68);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B600b6b:{NFSU2_TR(0x600b6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600b6f:{NFSU2_TR(0x600b6f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
}
B600b74:{NFSU2_TR(0x600b74);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B600b78:{NFSU2_TR(0x600b78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600b79:{NFSU2_TR(0x600b79);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B600b7f:{NFSU2_TR(0x600b7f);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B600b85:{NFSU2_TR(0x600b85);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600b89:{NFSU2_TR(0x600b89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600b8a:{NFSU2_TR(0x600b8a);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B600b8e:{NFSU2_TR(0x600b8e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600b8f:{NFSU2_TR(0x600b8f);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B600b93:{NFSU2_TR(0x600b93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600b98ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B600b98:L600b98:{c.instructions+=21;NFSU2_TR(0x600b98);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B600b9b:{NFSU2_TR(0x600b9b);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B600b9e:{NFSU2_TR(0x600b9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600ba1:{NFSU2_TR(0x600ba1);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B600ba5:{NFSU2_TR(0x600ba5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600ba9:{NFSU2_TR(0x600ba9);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B600bab:{NFSU2_TR(0x600bab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B600bae:{NFSU2_TR(0x600bae);
__builtin_memmove((R+4),(R+12),4);
}
B600bb0:{NFSU2_TR(0x600bb0);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B600bb4:{NFSU2_TR(0x600bb4);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B600bb8:{NFSU2_TR(0x600bb8);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B600bba:{NFSU2_TR(0x600bba);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B600bbe:{NFSU2_TR(0x600bbe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B600bc0:{NFSU2_TR(0x600bc0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B600bc2:{NFSU2_TR(0x600bc2);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B600bc6:{NFSU2_TR(0x600bc6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B600bca:{NFSU2_TR(0x600bca);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B600bce:{NFSU2_TR(0x600bce);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B600bd2:{NFSU2_TR(0x600bd2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B600bd8:{NFSU2_TR(0x600bd8);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B600bdc:{NFSU2_TR(0x600bdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600be1ull));
TAIL_STATIC(0x5eaec0u,5ea);
}
B600be1:L600be1:{c.instructions+=2;NFSU2_TR(0x600be1);
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
B600be3:{NFSU2_TR(0x600be3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600cfa;}}
}
B600be9:L600be9:{c.instructions+=2;NFSU2_TR(0x600be9);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B600bed:{NFSU2_TR(0x600bed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600bf2ull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B600bf2:L600bf2:{c.instructions+=4;NFSU2_TR(0x600bf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5c4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B600bf8:{NFSU2_TR(0x600bf8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600bfa:{NFSU2_TR(0x600bfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x38cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B600c05:{NFSU2_TR(0x600c05);
if(r1(R+518)){{goto L600c11;}}
}
B600c07:L600c07:{c.instructions+=3;NFSU2_TR(0x600c07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600c08:{NFSU2_TR(0x600c08);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B600c0c:{NFSU2_TR(0x600c0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600c11ull));
TAIL_STATIC(0x401680u,401);
}
B600c11:L600c11:{c.instructions+=9;NFSU2_TR(0x600c11);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600c13:{NFSU2_TR(0x600c13);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600c15:{NFSU2_TR(0x600c15);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600c17:{NFSU2_TR(0x600c17);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B600c1b:{NFSU2_TR(0x600c1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600c1c:{NFSU2_TR(0x600c1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B600c20:{NFSU2_TR(0x600c20);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600c21:{NFSU2_TR(0x600c21);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B600c25:{NFSU2_TR(0x600c25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600c2aull));
TAIL_STATIC(0x5e7ed0u,5e7);
}
B600c2a:L600c2a:{c.instructions+=2;NFSU2_TR(0x600c2a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B600c2c:{NFSU2_TR(0x600c2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600c49;}}
}
B600c2e:L600c2e:{c.instructions+=5;NFSU2_TR(0x600c2e);
u8 U[4];
w4(U+0,u32(0x3fc00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600c33:{NFSU2_TR(0x600c33);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B600c37:{NFSU2_TR(0x600c37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600c38:{NFSU2_TR(0x600c38);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B600c3c:{NFSU2_TR(0x600c3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600c41ull));
TAIL_STATIC(0x5e8110u,5e8);
}
B600c41:L600c41:{c.instructions+=2;NFSU2_TR(0x600c41);
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
B600c43:{NFSU2_TR(0x600c43);
if(r1(R+518)){{goto L600ce6;}}
}
B600c49:L600c49:{c.instructions+=9;NFSU2_TR(0x600c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600c4f:{NFSU2_TR(0x600c4f);
__builtin_memmove((R+8),(R+4),4);
}
B600c51:{NFSU2_TR(0x600c51);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600c52:{NFSU2_TR(0x600c52);
u8 U[4];
w4(U+0,u32(0x1020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600c57:{NFSU2_TR(0x600c57);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B600c5b:{NFSU2_TR(0x600c5b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600c5c:{NFSU2_TR(0x600c5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600c5d:{NFSU2_TR(0x600c5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600c61:{NFSU2_TR(0x600c61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600c66ull));
TAIL_STATIC(0x40f180u,40f);
}
B600c66:L600c66:{c.instructions+=3;NFSU2_TR(0x600c66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B600c69:{NFSU2_TR(0x600c69);
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
B600c6b:{NFSU2_TR(0x600c6b);
if(r1(R+518)){{goto L600ce6;}}
}
B600c6d:L600c6d:{c.instructions+=5;NFSU2_TR(0x600c6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B600c71:{NFSU2_TR(0x600c71);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B600c75:{NFSU2_TR(0x600c75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600c76:{NFSU2_TR(0x600c76);
__builtin_memmove((R+4),(R+28),4);
}
B600c78:{NFSU2_TR(0x600c78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600c7dull));
TAIL_STATIC(0x401a00u,401);
}
B600c7d:L600c7d:{c.instructions+=4;NFSU2_TR(0x600c7d);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B600c82:{NFSU2_TR(0x600c82);
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
B600c84:{NFSU2_TR(0x600c84);
__builtin_memmove((R+4),(R+28),4);
}
B600c86:{NFSU2_TR(0x600c86);
if(r1(R+518)){{goto L600ca5;}}
}
B600c88:L600c88:{c.instructions+=1;NFSU2_TR(0x600c88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600c8dull));
TAIL_STATIC(0x5d8990u,5d8);
}
B600c8d:L600c8d:{c.instructions+=5;NFSU2_TR(0x600c8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B600c90:{NFSU2_TR(0x600c90);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B600c94:{NFSU2_TR(0x600c94);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x2ull))));
}
B600c97:{NFSU2_TR(0x600c97);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B600c99:{NFSU2_TR(0x600c99);
if(r1(R+518)){{goto L600cde;}}
}
B600c9b:L600c9b:{c.instructions+=2;NFSU2_TR(0x600c9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B600ca3:{NFSU2_TR(0x600ca3);
{goto L600ce6;}
}
B600ca5:L600ca5:{c.instructions+=3;NFSU2_TR(0x600ca5);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B600ca9:{NFSU2_TR(0x600ca9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600caa:{NFSU2_TR(0x600caa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600cafull));
TAIL_STATIC(0x401a60u,401);
}
B600caf:L600caf:{c.instructions+=11;NFSU2_TR(0x600caf);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B600cb3:{NFSU2_TR(0x600cb3);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B600cb9:{NFSU2_TR(0x600cb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B600cbd:{NFSU2_TR(0x600cbd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B600cc1:{NFSU2_TR(0x600cc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B600cc9:{NFSU2_TR(0x600cc9);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B600ccf:{NFSU2_TR(0x600ccf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B600cd1:{NFSU2_TR(0x600cd1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B600cd7:{NFSU2_TR(0x600cd7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B600cd9:{NFSU2_TR(0x600cd9);
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
B600cdc:{NFSU2_TR(0x600cdc);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L600ce6;}}
}
B600cde:L600cde:{c.instructions+=1;NFSU2_TR(0x600cde);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B600ce6:L600ce6:{c.instructions+=3;NFSU2_TR(0x600ce6);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B600cea:{NFSU2_TR(0x600cea);
u8 U[8];
w4(U+0,u32(u32(u32(0x38cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B600cf5:{NFSU2_TR(0x600cf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600cfaull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B600cfa:L600cfa:{c.instructions+=5;NFSU2_TR(0x600cfa);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B600cfe:{NFSU2_TR(0x600cfe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600cff:{NFSU2_TR(0x600cff);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B600d03:{NFSU2_TR(0x600d03);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600d04:{NFSU2_TR(0x600d04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600d09ull));
TAIL_STATIC(0x43ce10u,43c);
}
B600d09:L600d09:{c.instructions+=5;NFSU2_TR(0x600d09);
{u32 ea_=u32(u32(7906692u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B600d0f:{NFSU2_TR(0x600d0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B600d12:{NFSU2_TR(0x600d12);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B600d14:{NFSU2_TR(0x600d14);
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
B600d17:{NFSU2_TR(0x600d17);
if(r1(R+514)){{goto L600dc4;}}
}
B600d1d:L600d1d:{c.instructions+=3;NFSU2_TR(0x600d1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600d20:{NFSU2_TR(0x600d20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B600d22:{NFSU2_TR(0x600d22);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600d25ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B600d25:L600d25:{c.instructions+=4;NFSU2_TR(0x600d25);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B600d2a:{NFSU2_TR(0x600d2a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B600d2c:{NFSU2_TR(0x600d2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B600d34:{NFSU2_TR(0x600d34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600d3f;}}
}
B600d36:L600d36:{c.instructions+=3;NFSU2_TR(0x600d36);
__builtin_memmove((R+0),gp(0x890108),4);
}
B600d3b:{NFSU2_TR(0x600d3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600d3d:{NFSU2_TR(0x600d3d);
if(r1(R+518)){{goto L600d8a;}}
}
B600d3f:L600d3f:{c.instructions+=2;NFSU2_TR(0x600d3f);
__builtin_memmove((R+4),(R+28),4);
}
B600d41:{NFSU2_TR(0x600d41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600d46ull));
TAIL_STATIC(0x5d8990u,5d8);
}
B600d46:L600d46:{c.instructions+=11;NFSU2_TR(0x600d46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B600d49:{NFSU2_TR(0x600d49);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600d4e:{NFSU2_TR(0x600d4e);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600d53:{NFSU2_TR(0x600d53);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B600d55:{NFSU2_TR(0x600d55);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x1ull))));
}
B600d58:{NFSU2_TR(0x600d58);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600d59:{NFSU2_TR(0x600d59);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600d5a:{NFSU2_TR(0x600d5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B600d5d:{NFSU2_TR(0x600d5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600d5e:{NFSU2_TR(0x600d5e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600d5f:{NFSU2_TR(0x600d5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600d64ull));
TAIL_STATIC(0x40f4a0u,40f);
}
B600d64:L600d64:{c.instructions+=3;NFSU2_TR(0x600d64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B600d67:{NFSU2_TR(0x600d67);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B600d6a:{NFSU2_TR(0x600d6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600d75;}}
}
B600d6c:L600d6c:{c.instructions+=2;NFSU2_TR(0x600d6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600d6d:{NFSU2_TR(0x600d6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600d72ull));
TAIL_STATIC(0x403db0u,403);
}
B600d72:L600d72:{c.instructions+=1;NFSU2_TR(0x600d72);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B600d75:L600d75:{c.instructions+=2;NFSU2_TR(0x600d75);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600d77:{NFSU2_TR(0x600d77);
if(r1(R+518)){{goto L600d8a;}}
}
B600d79:L600d79:{c.instructions+=2;NFSU2_TR(0x600d79);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B600d7c:{NFSU2_TR(0x600d7c);
if(r1(R+518)){{goto L600d8a;}}
}
B600d7e:L600d7e:{c.instructions+=3;NFSU2_TR(0x600d7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600d7f:{NFSU2_TR(0x600d7f);
__builtin_memmove((R+4),(R+28),4);
}
B600d81:{NFSU2_TR(0x600d81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600d86ull));
TAIL_STATIC(0x5e2da0u,5e2);
}
B600d86:L600d86:{c.instructions+=1;NFSU2_TR(0x600d86);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B600d8a:L600d8a:{c.instructions+=12;NFSU2_TR(0x600d8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600d8e:{NFSU2_TR(0x600d8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B600d92:{NFSU2_TR(0x600d92);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600d96:{NFSU2_TR(0x600d96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600d97:{NFSU2_TR(0x600d97);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600d99:{NFSU2_TR(0x600d99);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600d9b:{NFSU2_TR(0x600d9b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600d9c:{NFSU2_TR(0x600d9c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600d9e:{NFSU2_TR(0x600d9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600d9f:{NFSU2_TR(0x600d9f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600da0:{NFSU2_TR(0x600da0);
__builtin_memmove((R+4),(R+28),4);
}
B600da2:{NFSU2_TR(0x600da2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600da7ull));
TAIL_STATIC(0x5d8990u,5d8);
}
B600da7:L600da7:{c.instructions+=3;NFSU2_TR(0x600da7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600da8:{NFSU2_TR(0x600da8);
__builtin_memmove((R+4),(R+24),4);
}
B600daa:{NFSU2_TR(0x600daa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600dafull));
TAIL_STATIC(0x5fbed0u,5fb);
}
B600daf:L600daf:{c.instructions+=8;NFSU2_TR(0x600daf);
u8 U[8];
w4(U+0,u32(u32(u32(0x384ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600db6:{NFSU2_TR(0x600db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600dbd:{NFSU2_TR(0x600dbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B600dbe:{NFSU2_TR(0x600dbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B600dbf:{NFSU2_TR(0x600dbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B600dc0:{NFSU2_TR(0x600dc0);
__builtin_memmove((R+16),(R+20),4);
}
B600dc2:{NFSU2_TR(0x600dc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B600dc3:{NFSU2_TR(0x600dc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B600dc4:L600dc4:{c.instructions+=4;NFSU2_TR(0x600dc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600dca:{NFSU2_TR(0x600dca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B600dcb:{NFSU2_TR(0x600dcb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B600dd0:{NFSU2_TR(0x600dd0);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L600dd7;}}
}
B600dd2:L600dd2:{c.instructions+=3;NFSU2_TR(0x600dd2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B600dd3:{NFSU2_TR(0x600dd3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffffffcull))));
}
B600dd6:{NFSU2_TR(0x600dd6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B600dd7:L600dd7:{c.instructions+=9;NFSU2_TR(0x600dd7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B600dd9:{NFSU2_TR(0x600dd9);
u8 U[14];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+4),(U+12),2);
}
B600de1:{NFSU2_TR(0x600de1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600de3:{NFSU2_TR(0x600de3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B600de6:{NFSU2_TR(0x600de6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B600de9:{NFSU2_TR(0x600de9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B600deb:{NFSU2_TR(0x600deb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600dec:{NFSU2_TR(0x600dec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600dee:{NFSU2_TR(0x600dee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600def:L600def:{c.instructions+=2;NFSU2_TR(0x600def);
__builtin_memmove((R+4),(R+24),4);
}
B600df1:{NFSU2_TR(0x600df1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600df6ull));
TAIL_STATIC(0x5fbd60u,5fb);
}
B600df6:L600df6:{c.instructions+=8;NFSU2_TR(0x600df6);
u8 U[8];
w4(U+0,u32(u32(u32(0x384ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600dfd:{NFSU2_TR(0x600dfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B600dfe:{NFSU2_TR(0x600dfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B600dff:{NFSU2_TR(0x600dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600e06:{NFSU2_TR(0x600e06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B600e07:{NFSU2_TR(0x600e07);
__builtin_memmove((R+16),(R+20),4);
}
B600e09:{NFSU2_TR(0x600e09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B600e0a:{NFSU2_TR(0x600e0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B600e10:L600e10:{c.instructions+=14;NFSU2_TR(0x600e10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600e11:{NFSU2_TR(0x600e11);
__builtin_memmove((R+20),(R+16),4);
}
B600e13:{NFSU2_TR(0x600e13);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B600e16:{NFSU2_TR(0x600e16);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600e18:{NFSU2_TR(0x600e18);
u8 U[4];
w4(U+0,u32(0x779e8bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600e1d:{NFSU2_TR(0x600e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600e23:{NFSU2_TR(0x600e23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600e24:{NFSU2_TR(0x600e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600e2b:{NFSU2_TR(0x600e2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2e0ull))));
}
B600e31:{NFSU2_TR(0x600e31);
__builtin_memmove((R+0),gp(0x8900cd),1);
}
B600e36:{NFSU2_TR(0x600e36);
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
B600e38:{NFSU2_TR(0x600e38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600e39:{NFSU2_TR(0x600e39);
__builtin_memmove((R+24),(R+4),4);
}
B600e3b:{NFSU2_TR(0x600e3b);
if(r1(R+518)){{goto L600f11;}}
}
B600e41:L600e41:{c.instructions+=7;NFSU2_TR(0x600e41);
__builtin_memmove((R+0),gp(0x883dac),4);
}
B600e46:{NFSU2_TR(0x600e46);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B600e49:{NFSU2_TR(0x600e49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600e4a:{NFSU2_TR(0x600e4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B600e4e:{NFSU2_TR(0x600e4e);
u8 U[4];
w4(U+0,u32(0x7a5c40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600e53:{NFSU2_TR(0x600e53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600e54:{NFSU2_TR(0x600e54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600e59ull));
TAIL_STATIC(0x4400d0u,440);
}
B600e59:L600e59:{c.instructions+=3;NFSU2_TR(0x600e59);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B600e5d:{NFSU2_TR(0x600e5d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600e5e:{NFSU2_TR(0x600e5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600e63ull));
TAIL_STATIC(0x57cac0u,57c);
}
B600e63:L600e63:{c.instructions+=3;NFSU2_TR(0x600e63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B600e66:{NFSU2_TR(0x600e66);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600e68:{NFSU2_TR(0x600e68);
if(r1(R+518)){{goto L600ee2;}}
}
B600e6a:L600e6a:{c.instructions+=5;NFSU2_TR(0x600e6a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600e6c:{NFSU2_TR(0x600e6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B600e70:{NFSU2_TR(0x600e70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600e71:{NFSU2_TR(0x600e71);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B600e78:{NFSU2_TR(0x600e78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600e7dull));
TAIL_STATIC(0x440840u,440);
}
B600e7d:L600e7d:{c.instructions+=4;NFSU2_TR(0x600e7d);
u8 U[4];
w4(U+0,u32(0x7a6400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600e82:{NFSU2_TR(0x600e82);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B600e86:{NFSU2_TR(0x600e86);
u8 U[8];
w4(U+0,u32(u32(u32(0x2f0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B600e91:{NFSU2_TR(0x600e91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600e96ull));
TAIL_STATIC(0x43e4a0u,43e);
}
B600e96:L600e96:{c.instructions+=2;NFSU2_TR(0x600e96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B600e98:{NFSU2_TR(0x600e98);
if(r1(R+518)){{goto L600ecc;}}
}
B600e9a:L600e9a:{c.instructions+=4;NFSU2_TR(0x600e9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B600e9e:{NFSU2_TR(0x600e9e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600e9f:{NFSU2_TR(0x600e9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B600ea3:{NFSU2_TR(0x600ea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600ea8ull));
TAIL_STATIC(0x440260u,440);
}
B600ea8:L600ea8:{c.instructions+=2;NFSU2_TR(0x600ea8);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B600eac:{NFSU2_TR(0x600eac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600eb1ull));
TAIL_STATIC(0x440160u,440);
}
B600eb1:L600eb1:{c.instructions+=2;NFSU2_TR(0x600eb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B600eb5:{NFSU2_TR(0x600eb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600ebaull));
TAIL_STATIC(0x440210u,440);
}
B600eba:L600eba:{c.instructions+=7;NFSU2_TR(0x600eba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600ebd:{NFSU2_TR(0x600ebd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600ebf:{NFSU2_TR(0x600ebf);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B600ec3:{NFSU2_TR(0x600ec3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600ec4:{NFSU2_TR(0x600ec4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600ec6:{NFSU2_TR(0x600ec6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600ec7:{NFSU2_TR(0x600ec7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600eccull));
TAIL_STATIC(0x5fbd60u,5fb);
}
B600ecc:L600ecc:{c.instructions+=3;NFSU2_TR(0x600ecc);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B600ed0:{NFSU2_TR(0x600ed0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2ecull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B600edb:{NFSU2_TR(0x600edb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600ee0ull));
TAIL_STATIC(0x43e060u,43e);
}
B600ee0:L600ee0:{c.instructions+=1;NFSU2_TR(0x600ee0);
{goto L600f05;}
}
B600ee2:L600ee2:{c.instructions+=3;NFSU2_TR(0x600ee2);
__builtin_memmove((R+0),gp(0x8900ce),1);
}
B600ee7:{NFSU2_TR(0x600ee7);
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
B600ee9:{NFSU2_TR(0x600ee9);
if(r1(R+518)){{goto L600f05;}}
}
B600eeb:L600eeb:{c.instructions+=8;NFSU2_TR(0x600eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600eee:{NFSU2_TR(0x600eee);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B600ef0:{NFSU2_TR(0x600ef0);
__builtin_memmove((R+0),gp(0x8900d0),2);
}
B600ef6:{NFSU2_TR(0x600ef6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600ef8:{NFSU2_TR(0x600ef8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600ef9:{NFSU2_TR(0x600ef9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600efb:{NFSU2_TR(0x600efb);
u8 U[4];
w4(U+0,u32(0x890140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600f00:{NFSU2_TR(0x600f00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600f05ull));
TAIL_STATIC(0x5fbd60u,5fb);
}
B600f05:L600f05:{c.instructions+=2;NFSU2_TR(0x600f05);
s1(0x8900cd,u8(0x0ull));
}
B600f0c:{NFSU2_TR(0x600f0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600f11ull));
TAIL_STATIC(0x4022c0u,402);
}
B600f11:L600f11:{c.instructions+=6;NFSU2_TR(0x600f11);
u8 U[8];
w4(U+0,u32(u32(u32(0x2e4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600f18:{NFSU2_TR(0x600f18);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600f1f:{NFSU2_TR(0x600f1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B600f20:{NFSU2_TR(0x600f20);
__builtin_memmove((R+16),(R+20),4);
}
B600f22:{NFSU2_TR(0x600f22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B600f23:{NFSU2_TR(0x600f23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B600f30:L600f30:{c.instructions+=9;NFSU2_TR(0x600f30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600f31:{NFSU2_TR(0x600f31);
__builtin_memmove((R+20),(R+16),4);
}
B600f33:{NFSU2_TR(0x600f33);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B600f36:{NFSU2_TR(0x600f36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B600f39:{NFSU2_TR(0x600f39);
__builtin_memmove((R+0),gp(0x8900d4),4);
}
B600f3e:{NFSU2_TR(0x600f3e);
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
B600f40:{NFSU2_TR(0x600f40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600f41:{NFSU2_TR(0x600f41);
__builtin_memmove((R+24),(R+4),4);
}
B600f43:{NFSU2_TR(0x600f43);
if(r1(R+518)){{goto L600f94;}}
}
B600f45:L600f45:{c.instructions+=13;NFSU2_TR(0x600f45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600f48:{NFSU2_TR(0x600f48);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B600f4b:{NFSU2_TR(0x600f4b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600f4d:{NFSU2_TR(0x600f4d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B600f51:{NFSU2_TR(0x600f51);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600f55:{NFSU2_TR(0x600f55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B600f58:{NFSU2_TR(0x600f58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600f5b:{NFSU2_TR(0x600f5b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600f5d:{NFSU2_TR(0x600f5d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600f5f:{NFSU2_TR(0x600f5f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B600f63:{NFSU2_TR(0x600f63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600f64:{NFSU2_TR(0x600f64);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600f68:{NFSU2_TR(0x600f68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600f6dull));
TAIL_STATIC(0x5fbd60u,5fb);
}
B600f6d:L600f6d:{c.instructions+=2;NFSU2_TR(0x600f6d);
w4(R+4,u32(0x88eb00ull));
}
B600f72:{NFSU2_TR(0x600f72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600f77ull));
TAIL_STATIC(0x5e9650u,5e9);
}
B600f77:L600f77:{c.instructions+=7;NFSU2_TR(0x600f77);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600f79:{NFSU2_TR(0x600f79);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600f7b:{NFSU2_TR(0x600f7b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600f7d:{NFSU2_TR(0x600f7d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B600f81:{NFSU2_TR(0x600f81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600f82:{NFSU2_TR(0x600f82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600f85:{NFSU2_TR(0x600f85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600f8aull));
TAIL_STATIC(0x5fbd60u,5fb);
}
B600f8a:L600f8a:{c.instructions+=1;NFSU2_TR(0x600f8a);
s4(0x8900d4,u32(0x0ull));
}
B600f94:L600f94:{c.instructions+=4;NFSU2_TR(0x600f94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B600f95:{NFSU2_TR(0x600f95);
__builtin_memmove((R+16),(R+20),4);
}
B600f97:{NFSU2_TR(0x600f97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B600f98:{NFSU2_TR(0x600f98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B600fa0:L600fa0:{c.instructions+=7;NFSU2_TR(0x600fa0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600fa1:{NFSU2_TR(0x600fa1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600fa2:{NFSU2_TR(0x600fa2);
__builtin_memmove((R+28),(R+4),4);
}
B600fa4:{NFSU2_TR(0x600fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600fa7:{NFSU2_TR(0x600fa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+12),(U+0),4);
}
B600faa:{NFSU2_TR(0x600faa);
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
B600fac:{NFSU2_TR(0x600fac);
if(r1(R+518)){TAIL_STATIC(0x601015u,601);}
}
B600fae:L600fae:{c.instructions+=11;NFSU2_TR(0x600fae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600faf:{NFSU2_TR(0x600faf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600fb0:{NFSU2_TR(0x600fb0);
w4(R+20,u32(0x1ull));
}
B600fb5:{NFSU2_TR(0x600fb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B600fb7:{NFSU2_TR(0x600fb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B600fb9:{NFSU2_TR(0x600fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600fbc:{NFSU2_TR(0x600fbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B600fbe:{NFSU2_TR(0x600fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600fc1:{NFSU2_TR(0x600fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600fc4:{NFSU2_TR(0x600fc4);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+20)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B600fc7:{NFSU2_TR(0x600fc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600fd7;}}
}
B600fc9:L600fc9:{c.instructions+=4;NFSU2_TR(0x600fc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600fcc:{NFSU2_TR(0x600fcc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B600fce:{NFSU2_TR(0x600fce);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B600fd4:{NFSU2_TR(0x600fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B600fd7:L600fd7:{c.instructions+=7;NFSU2_TR(0x600fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B600fda:{NFSU2_TR(0x600fda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B600fdd:{NFSU2_TR(0x600fdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B600fdf:{NFSU2_TR(0x600fdf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600fe0:{NFSU2_TR(0x600fe0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B600fe1:{NFSU2_TR(0x600fe1);
__builtin_memmove((R+4),(R+28),4);
}
B600fe3:{NFSU2_TR(0x600fe3);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80214cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x600feaull));
{u32 t_=u32(r4(U+12));TAIL_DYNAMIC(t_);}
}
B600fea:L600fea:{c.instructions+=2;NFSU2_TR(0x600fea);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B600fee:{NFSU2_TR(0x600fee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L600ff6;}}
}
B600ff0:L600ff0:{c.instructions+=1;NFSU2_TR(0x600ff0);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B600ff6:L600ff6:{c.instructions+=2;NFSU2_TR(0x600ff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B600ffd:{NFSU2_TR(0x600ffd);
__builtin_memmove((R+8),gp(0x8900dc),4);
TAIL_STATIC(0x601003u,601);
}
XIT:NFSU2_TR_EXIT(0x600,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
