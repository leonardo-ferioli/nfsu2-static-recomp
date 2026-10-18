#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_74a(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_74f(u8* __restrict R,Cpu& c);
u32 body_751(u8* __restrict R,Cpu& c);
u32 body_757(u8* __restrict R,Cpu& c);
u32 body_758(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_770(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x750,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x750,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_750(u8* __restrict R,Cpu& c);
u32 page_750(Cpu& c){return body_750(c.regs.data(),c);}
__attribute__((noinline)) u32 body_750(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x750004:goto L750004;
case 0x750007:goto L750007;
case 0x750009:c.instructions+=3;goto B750009;
case 0x75000a:c.instructions+=2;goto B75000a;
case 0x75000c:c.instructions+=1;goto B75000c;
case 0x75000e:goto L75000e;
case 0x750015:c.instructions+=9;goto B750015;
case 0x750017:c.instructions+=8;goto B750017;
case 0x750019:c.instructions+=7;goto B750019;
case 0x75001d:c.instructions+=6;goto B75001d;
case 0x75001e:c.instructions+=5;goto B75001e;
case 0x750025:c.instructions+=4;goto B750025;
case 0x750029:c.instructions+=3;goto B750029;
case 0x75002d:c.instructions+=2;goto B75002d;
case 0x750030:c.instructions+=1;goto B750030;
case 0x750036:goto L750036;
case 0x75003d:c.instructions+=8;goto B75003d;
case 0x750041:c.instructions+=7;goto B750041;
case 0x750044:c.instructions+=6;goto B750044;
case 0x75004a:c.instructions+=5;goto B75004a;
case 0x750050:c.instructions+=4;goto B750050;
case 0x750052:c.instructions+=3;goto B750052;
case 0x750056:c.instructions+=2;goto B750056;
case 0x75005a:c.instructions+=1;goto B75005a;
case 0x750060:goto L750060;
case 0x750062:goto L750062;
case 0x750069:c.instructions+=8;goto B750069;
case 0x75006c:c.instructions+=7;goto B75006c;
case 0x75006d:c.instructions+=6;goto B75006d;
case 0x750070:c.instructions+=5;goto B750070;
case 0x750071:c.instructions+=4;goto B750071;
case 0x750074:c.instructions+=3;goto B750074;
case 0x750075:c.instructions+=2;goto B750075;
case 0x750078:c.instructions+=1;goto B750078;
case 0x75007b:goto L75007b;
case 0x750082:c.instructions+=6;goto B750082;
case 0x750086:c.instructions+=5;goto B750086;
case 0x750087:c.instructions+=4;goto B750087;
case 0x750088:c.instructions+=3;goto B750088;
case 0x750089:c.instructions+=2;goto B750089;
case 0x75008a:c.instructions+=1;goto B75008a;
case 0x75008f:goto L75008f;
case 0x750095:c.instructions+=1;goto B750095;
case 0x7500a0:goto L7500a0;
case 0x7500a4:c.instructions+=2;goto B7500a4;
case 0x7500a6:c.instructions+=1;goto B7500a6;
case 0x7500ac:goto L7500ac;
case 0x7500ad:c.instructions+=5;goto B7500ad;
case 0x7500b0:c.instructions+=4;goto B7500b0;
case 0x7500b3:c.instructions+=3;goto B7500b3;
case 0x7500b5:c.instructions+=2;goto B7500b5;
case 0x7500b9:c.instructions+=1;goto B7500b9;
case 0x7500bf:goto L7500bf;
case 0x7500c0:c.instructions+=5;goto B7500c0;
case 0x7500c4:c.instructions+=4;goto B7500c4;
case 0x7500c5:c.instructions+=3;goto B7500c5;
case 0x7500c9:c.instructions+=2;goto B7500c9;
case 0x7500ca:c.instructions+=1;goto B7500ca;
case 0x7500d0:goto L7500d0;
case 0x7500d3:c.instructions+=3;goto B7500d3;
case 0x7500d5:c.instructions+=2;goto B7500d5;
case 0x7500d8:c.instructions+=1;goto B7500d8;
case 0x7500da:goto L7500da;
case 0x7500e0:c.instructions+=3;goto B7500e0;
case 0x7500e2:c.instructions+=2;goto B7500e2;
case 0x7500e5:c.instructions+=1;goto B7500e5;
case 0x7500e7:goto L7500e7;
case 0x7500e9:c.instructions+=1;goto B7500e9;
case 0x7500eb:goto L7500eb;
case 0x7500ef:c.instructions+=1;goto B7500ef;
case 0x7500f1:goto L7500f1;
case 0x7500f3:c.instructions+=1;goto B7500f3;
case 0x7500f8:goto L7500f8;
case 0x7500fa:c.instructions+=1;goto B7500fa;
case 0x7500fc:goto L7500fc;
case 0x7500fe:c.instructions+=1;goto B7500fe;
case 0x750100:goto L750100;
case 0x750103:c.instructions+=1;goto B750103;
case 0x750105:goto L750105;
case 0x750107:c.instructions+=2;goto B750107;
case 0x750109:c.instructions+=1;goto B750109;
case 0x75010e:goto L75010e;
case 0x750110:c.instructions+=1;goto B750110;
case 0x750112:goto L750112;
case 0x750118:c.instructions+=2;goto B750118;
case 0x75011a:c.instructions+=1;goto B75011a;
case 0x75011c:goto L75011c;
case 0x750120:c.instructions+=3;goto B750120;
case 0x750126:c.instructions+=2;goto B750126;
case 0x750128:c.instructions+=1;goto B750128;
case 0x75012a:goto L75012a;
case 0x75012e:c.instructions+=5;goto B75012e;
case 0x75012f:c.instructions+=4;goto B75012f;
case 0x750130:c.instructions+=3;goto B750130;
case 0x750131:c.instructions+=2;goto B750131;
case 0x750132:c.instructions+=1;goto B750132;
case 0x750133:goto L750133;
case 0x750137:c.instructions+=2;goto B750137;
case 0x750139:c.instructions+=1;goto B750139;
case 0x75013b:goto L75013b;
case 0x750141:c.instructions+=1;goto B750141;
case 0x750143:goto L750143;
case 0x750149:c.instructions+=4;goto B750149;
case 0x75014a:c.instructions+=3;goto B75014a;
case 0x75014b:c.instructions+=2;goto B75014b;
case 0x75014f:c.instructions+=1;goto B75014f;
case 0x750150:goto L750150;
case 0x750151:goto L750151;
case 0x750155:c.instructions+=1;goto B750155;
case 0x750160:goto L750160;
case 0x750163:c.instructions+=7;goto B750163;
case 0x750168:c.instructions+=6;goto B750168;
case 0x75016c:c.instructions+=5;goto B75016c;
case 0x750171:c.instructions+=4;goto B750171;
case 0x750172:c.instructions+=3;goto B750172;
case 0x750174:c.instructions+=2;goto B750174;
case 0x750176:c.instructions+=1;goto B750176;
case 0x750178:goto L750178;
case 0x75017e:c.instructions+=3;goto B75017e;
case 0x75017f:c.instructions+=2;goto B75017f;
case 0x750183:c.instructions+=1;goto B750183;
case 0x750188:goto L750188;
case 0x75018b:c.instructions+=1;goto B75018b;
case 0x75018c:goto L75018c;
case 0x75018d:c.instructions+=2;goto B75018d;
case 0x75018f:c.instructions+=1;goto B75018f;
case 0x750194:goto L750194;
case 0x750196:c.instructions+=4;goto B750196;
case 0x750199:c.instructions+=3;goto B750199;
case 0x75019b:c.instructions+=2;goto B75019b;
case 0x75019d:c.instructions+=1;goto B75019d;
case 0x7501a3:goto L7501a3;
case 0x7501a4:c.instructions+=5;goto B7501a4;
case 0x7501a8:c.instructions+=4;goto B7501a8;
case 0x7501ab:c.instructions+=3;goto B7501ab;
case 0x7501ac:c.instructions+=2;goto B7501ac;
case 0x7501b1:c.instructions+=1;goto B7501b1;
case 0x7501b3:goto L7501b3;
case 0x7501b5:goto L7501b5;
case 0x7501b7:goto L7501b7;
case 0x7501bc:goto L7501bc;
case 0x7501c2:c.instructions+=2;goto B7501c2;
case 0x7501c3:c.instructions+=1;goto B7501c3;
case 0x7501c8:goto L7501c8;
case 0x7501ca:c.instructions+=4;goto B7501ca;
case 0x7501cd:c.instructions+=3;goto B7501cd;
case 0x7501cf:c.instructions+=2;goto B7501cf;
case 0x7501d2:c.instructions+=1;goto B7501d2;
case 0x7501d4:goto L7501d4;
case 0x7501d5:goto L7501d5;
case 0x7501da:goto L7501da;
case 0x7501dd:c.instructions+=7;goto B7501dd;
case 0x7501de:c.instructions+=6;goto B7501de;
case 0x7501df:c.instructions+=5;goto B7501df;
case 0x7501e0:c.instructions+=4;goto B7501e0;
case 0x7501e2:c.instructions+=3;goto B7501e2;
case 0x7501e3:c.instructions+=2;goto B7501e3;
case 0x7501e7:c.instructions+=1;goto B7501e7;
case 0x7501ec:goto L7501ec;
case 0x7501ef:c.instructions+=1;goto B7501ef;
case 0x7501f0:goto L7501f0;
case 0x7501f3:c.instructions+=5;goto B7501f3;
case 0x7501f6:c.instructions+=4;goto B7501f6;
case 0x7501f8:c.instructions+=3;goto B7501f8;
case 0x7501fa:c.instructions+=2;goto B7501fa;
case 0x7501fd:c.instructions+=1;goto B7501fd;
case 0x7501ff:goto L7501ff;
case 0x750201:goto L750201;
case 0x750203:c.instructions+=3;goto B750203;
case 0x750204:c.instructions+=2;goto B750204;
case 0x750207:c.instructions+=1;goto B750207;
case 0x750209:goto L750209;
case 0x75020b:goto L75020b;
case 0x750210:c.instructions+=3;goto B750210;
case 0x750212:c.instructions+=2;goto B750212;
case 0x750215:c.instructions+=1;goto B750215;
case 0x75021a:goto L75021a;
case 0x75021d:c.instructions+=4;goto B75021d;
case 0x75021f:c.instructions+=3;goto B75021f;
case 0x750221:c.instructions+=2;goto B750221;
case 0x750222:c.instructions+=1;goto B750222;
case 0x750224:goto L750224;
case 0x75022a:c.instructions+=2;goto B75022a;
case 0x750230:c.instructions+=1;goto B750230;
case 0x750235:goto L750235;
case 0x750236:c.instructions+=1;goto B750236;
case 0x75023b:goto L75023b;
case 0x75023d:c.instructions+=11;goto B75023d;
case 0x750241:c.instructions+=10;goto B750241;
case 0x750242:c.instructions+=9;goto B750242;
case 0x750247:c.instructions+=8;goto B750247;
case 0x750248:c.instructions+=7;goto B750248;
case 0x75024f:c.instructions+=6;goto B75024f;
case 0x750253:c.instructions+=5;goto B750253;
case 0x750257:c.instructions+=4;goto B750257;
case 0x75025b:c.instructions+=3;goto B75025b;
case 0x750260:c.instructions+=2;goto B750260;
case 0x750265:c.instructions+=1;goto B750265;
case 0x75026a:goto L75026a;
case 0x75026c:c.instructions+=25;goto B75026c;
case 0x750270:c.instructions+=24;goto B750270;
case 0x750274:c.instructions+=23;goto B750274;
case 0x750278:c.instructions+=22;goto B750278;
case 0x75027c:c.instructions+=21;goto B75027c;
case 0x750280:c.instructions+=20;goto B750280;
case 0x750285:c.instructions+=19;goto B750285;
case 0x75028a:c.instructions+=18;goto B75028a;
case 0x750291:c.instructions+=17;goto B750291;
case 0x750296:c.instructions+=16;goto B750296;
case 0x75029b:c.instructions+=15;goto B75029b;
case 0x75029f:c.instructions+=14;goto B75029f;
case 0x7502a2:c.instructions+=13;goto B7502a2;
case 0x7502a4:c.instructions+=12;goto B7502a4;
case 0x7502a8:c.instructions+=11;goto B7502a8;
case 0x7502a9:c.instructions+=10;goto B7502a9;
case 0x7502ac:c.instructions+=9;goto B7502ac;
case 0x7502ae:c.instructions+=8;goto B7502ae;
case 0x7502b0:c.instructions+=7;goto B7502b0;
case 0x7502b3:c.instructions+=6;goto B7502b3;
case 0x7502b5:c.instructions+=5;goto B7502b5;
case 0x7502b6:c.instructions+=4;goto B7502b6;
case 0x7502b9:c.instructions+=3;goto B7502b9;
case 0x7502bc:c.instructions+=2;goto B7502bc;
case 0x7502bf:c.instructions+=1;goto B7502bf;
case 0x7502c4:goto L7502c4;
case 0x7502c5:c.instructions+=1;goto B7502c5;
case 0x7502ca:goto L7502ca;
case 0x7502cd:c.instructions+=2;goto B7502cd;
case 0x7502cf:c.instructions+=1;goto B7502cf;
case 0x7502d4:goto L7502d4;
case 0x7502d5:c.instructions+=2;goto B7502d5;
case 0x7502d7:c.instructions+=1;goto B7502d7;
case 0x7502d8:goto L7502d8;
case 0x7502dc:c.instructions+=3;goto B7502dc;
case 0x7502dd:c.instructions+=2;goto B7502dd;
case 0x7502de:c.instructions+=1;goto B7502de;
case 0x7502e3:goto L7502e3;
case 0x7502e6:c.instructions+=1;goto B7502e6;
case 0x7502f0:goto L7502f0;
case 0x7502f1:c.instructions+=3;goto B7502f1;
case 0x7502f5:c.instructions+=2;goto B7502f5;
case 0x7502f7:c.instructions+=1;goto B7502f7;
case 0x7502fd:goto L7502fd;
case 0x750302:c.instructions+=2;goto B750302;
case 0x750305:c.instructions+=1;goto B750305;
case 0x750307:goto L750307;
case 0x750308:c.instructions+=3;goto B750308;
case 0x75030d:c.instructions+=2;goto B75030d;
case 0x75030e:c.instructions+=1;goto B75030e;
case 0x75030f:goto L75030f;
case 0x750312:c.instructions+=4;goto B750312;
case 0x750314:c.instructions+=3;goto B750314;
case 0x75031e:c.instructions+=2;goto B75031e;
case 0x750328:c.instructions+=1;goto B750328;
case 0x75032a:goto L75032a;
case 0x750330:goto L750330;
case 0x750333:c.instructions+=6;goto B750333;
case 0x750336:c.instructions+=5;goto B750336;
case 0x750337:c.instructions+=4;goto B750337;
case 0x75033a:c.instructions+=3;goto B75033a;
case 0x75033b:c.instructions+=2;goto B75033b;
case 0x75033c:c.instructions+=1;goto B75033c;
case 0x750341:goto L750341;
case 0x750344:c.instructions+=4;goto B750344;
case 0x750345:c.instructions+=3;goto B750345;
case 0x750347:c.instructions+=2;goto B750347;
case 0x750348:c.instructions+=1;goto B750348;
case 0x75034d:goto L75034d;
case 0x750350:c.instructions+=3;goto B750350;
case 0x750353:c.instructions+=2;goto B750353;
case 0x750355:c.instructions+=1;goto B750355;
case 0x750357:goto L750357;
case 0x750358:c.instructions+=1;goto B750358;
case 0x75035d:goto L75035d;
case 0x750360:c.instructions+=3;goto B750360;
case 0x750361:c.instructions+=2;goto B750361;
case 0x750368:c.instructions+=1;goto B750368;
case 0x75036d:goto L75036d;
case 0x75036e:c.instructions+=1;goto B75036e;
case 0x750373:goto L750373;
case 0x750374:c.instructions+=1;goto B750374;
case 0x750379:goto L750379;
case 0x75037c:c.instructions+=2;goto B75037c;
case 0x75037d:c.instructions+=1;goto B75037d;
case 0x750382:goto L750382;
case 0x750383:c.instructions+=1;goto B750383;
case 0x750388:goto L750388;
case 0x75038b:goto L75038b;
case 0x75038c:c.instructions+=1;goto B75038c;
case 0x750390:goto L750390;
case 0x750393:c.instructions+=10;goto B750393;
case 0x750397:c.instructions+=9;goto B750397;
case 0x750398:c.instructions+=8;goto B750398;
case 0x75039c:c.instructions+=7;goto B75039c;
case 0x75039d:c.instructions+=6;goto B75039d;
case 0x7503a2:c.instructions+=5;goto B7503a2;
case 0x7503a7:c.instructions+=4;goto B7503a7;
case 0x7503a8:c.instructions+=3;goto B7503a8;
case 0x7503a9:c.instructions+=2;goto B7503a9;
case 0x7503b1:c.instructions+=1;goto B7503b1;
case 0x7503b6:goto L7503b6;
case 0x7503b8:c.instructions+=1;goto B7503b8;
case 0x7503ba:goto L7503ba;
case 0x7503be:c.instructions+=14;goto B7503be;
case 0x7503c2:c.instructions+=13;goto B7503c2;
case 0x7503c3:c.instructions+=12;goto B7503c3;
case 0x7503c7:c.instructions+=11;goto B7503c7;
case 0x7503c8:c.instructions+=10;goto B7503c8;
case 0x7503cc:c.instructions+=9;goto B7503cc;
case 0x7503cd:c.instructions+=8;goto B7503cd;
case 0x7503d1:c.instructions+=7;goto B7503d1;
case 0x7503d2:c.instructions+=6;goto B7503d2;
case 0x7503d4:c.instructions+=5;goto B7503d4;
case 0x7503d5:c.instructions+=4;goto B7503d5;
case 0x7503d6:c.instructions+=3;goto B7503d6;
case 0x7503d7:c.instructions+=2;goto B7503d7;
case 0x7503d8:c.instructions+=1;goto B7503d8;
case 0x7503dd:goto L7503dd;
case 0x7503e0:c.instructions+=1;goto B7503e0;
case 0x7503f0:goto L7503f0;
case 0x7503f1:c.instructions+=10;goto B7503f1;
case 0x7503f3:c.instructions+=9;goto B7503f3;
case 0x7503f6:c.instructions+=8;goto B7503f6;
case 0x7503fc:c.instructions+=7;goto B7503fc;
case 0x750401:c.instructions+=6;goto B750401;
case 0x750402:c.instructions+=5;goto B750402;
case 0x750409:c.instructions+=4;goto B750409;
case 0x75040b:c.instructions+=3;goto B75040b;
case 0x750410:c.instructions+=2;goto B750410;
case 0x750415:c.instructions+=1;goto B750415;
case 0x750419:goto L750419;
case 0x75041b:goto L75041b;
case 0x75041e:c.instructions+=8;goto B75041e;
case 0x750422:c.instructions+=7;goto B750422;
case 0x750423:c.instructions+=6;goto B750423;
case 0x750425:c.instructions+=5;goto B750425;
case 0x750427:c.instructions+=4;goto B750427;
case 0x750429:c.instructions+=3;goto B750429;
case 0x75042a:c.instructions+=2;goto B75042a;
case 0x750432:c.instructions+=1;goto B750432;
case 0x750437:goto L750437;
case 0x750439:c.instructions+=1;goto B750439;
case 0x75043b:goto L75043b;
case 0x75043e:c.instructions+=2;goto B75043e;
case 0x750445:c.instructions+=1;goto B750445;
case 0x75044a:goto L75044a;
case 0x75044b:c.instructions+=3;goto B75044b;
case 0x75044d:c.instructions+=2;goto B75044d;
case 0x75044e:c.instructions+=1;goto B75044e;
case 0x75044f:goto L75044f;
case 0x750456:c.instructions+=2;goto B750456;
case 0x75045a:c.instructions+=1;goto B75045a;
case 0x75045f:goto L75045f;
case 0x750460:c.instructions+=3;goto B750460;
case 0x750462:c.instructions+=2;goto B750462;
case 0x750463:c.instructions+=1;goto B750463;
case 0x750470:goto L750470;
case 0x750471:c.instructions+=9;goto B750471;
case 0x750473:c.instructions+=8;goto B750473;
case 0x750476:c.instructions+=7;goto B750476;
case 0x75047c:c.instructions+=6;goto B75047c;
case 0x750481:c.instructions+=5;goto B750481;
case 0x750488:c.instructions+=4;goto B750488;
case 0x75048a:c.instructions+=3;goto B75048a;
case 0x75048b:c.instructions+=2;goto B75048b;
case 0x750490:c.instructions+=1;goto B750490;
case 0x750494:goto L750494;
case 0x750496:goto L750496;
case 0x75049b:c.instructions+=10;goto B75049b;
case 0x75049f:c.instructions+=9;goto B75049f;
case 0x7504a3:c.instructions+=8;goto B7504a3;
case 0x7504a7:c.instructions+=7;goto B7504a7;
case 0x7504af:c.instructions+=6;goto B7504af;
case 0x7504b7:c.instructions+=5;goto B7504b7;
case 0x7504bf:c.instructions+=4;goto B7504bf;
case 0x7504c7:c.instructions+=3;goto B7504c7;
case 0x7504cf:c.instructions+=2;goto B7504cf;
case 0x7504d1:c.instructions+=1;goto B7504d1;
case 0x7504d3:goto L7504d3;
case 0x7504d5:c.instructions+=4;goto B7504d5;
case 0x7504d8:c.instructions+=3;goto B7504d8;
case 0x7504d9:c.instructions+=2;goto B7504d9;
case 0x7504db:c.instructions+=1;goto B7504db;
case 0x7504dd:goto L7504dd;
case 0x7504e1:c.instructions+=1;goto B7504e1;
case 0x7504e4:goto L7504e4;
case 0x7504e6:c.instructions+=3;goto B7504e6;
case 0x7504e7:c.instructions+=2;goto B7504e7;
case 0x7504e9:c.instructions+=1;goto B7504e9;
case 0x7504eb:goto L7504eb;
case 0x7504ee:c.instructions+=12;goto B7504ee;
case 0x7504f0:c.instructions+=11;goto B7504f0;
case 0x7504f4:c.instructions+=10;goto B7504f4;
case 0x7504f8:c.instructions+=9;goto B7504f8;
case 0x7504f9:c.instructions+=8;goto B7504f9;
case 0x7504fc:c.instructions+=7;goto B7504fc;
case 0x7504fd:c.instructions+=6;goto B7504fd;
case 0x750500:c.instructions+=5;goto B750500;
case 0x750507:c.instructions+=4;goto B750507;
case 0x750508:c.instructions+=3;goto B750508;
case 0x750509:c.instructions+=2;goto B750509;
case 0x75050a:c.instructions+=1;goto B75050a;
case 0x75050f:goto L75050f;
case 0x750516:c.instructions+=1;goto B750516;
case 0x75051b:goto L75051b;
case 0x75051c:c.instructions+=3;goto B75051c;
case 0x75051e:c.instructions+=2;goto B75051e;
case 0x75051f:c.instructions+=1;goto B75051f;
case 0x750520:goto L750520;
case 0x750526:c.instructions+=4;goto B750526;
case 0x75052b:c.instructions+=3;goto B75052b;
case 0x750532:c.instructions+=2;goto B750532;
case 0x75053a:c.instructions+=1;goto B75053a;
case 0x750540:goto L750540;
case 0x750547:c.instructions+=3;goto B750547;
case 0x75054c:c.instructions+=2;goto B75054c;
case 0x75054d:c.instructions+=1;goto B75054d;
case 0x750553:goto L750553;
case 0x750554:c.instructions+=5;goto B750554;
case 0x75055b:c.instructions+=4;goto B75055b;
case 0x750561:c.instructions+=3;goto B750561;
case 0x750564:c.instructions+=2;goto B750564;
case 0x750565:c.instructions+=1;goto B750565;
case 0x750567:goto L750567;
case 0x75056d:c.instructions+=3;goto B75056d;
case 0x750573:c.instructions+=2;goto B750573;
case 0x750574:c.instructions+=1;goto B750574;
case 0x750579:goto L750579;
case 0x75057f:c.instructions+=7;goto B75057f;
case 0x750581:c.instructions+=6;goto B750581;
case 0x750583:c.instructions+=5;goto B750583;
case 0x750584:c.instructions+=4;goto B750584;
case 0x75058a:c.instructions+=3;goto B75058a;
case 0x75058b:c.instructions+=2;goto B75058b;
case 0x75058e:c.instructions+=1;goto B75058e;
case 0x750593:goto L750593;
case 0x750596:c.instructions+=5;goto B750596;
case 0x750597:c.instructions+=4;goto B750597;
case 0x750598:c.instructions+=3;goto B750598;
case 0x750599:c.instructions+=2;goto B750599;
case 0x7505a0:c.instructions+=1;goto B7505a0;
case 0x7505a5:goto L7505a5;
case 0x7505ab:c.instructions+=1;goto B7505ab;
case 0x7505ae:goto L7505ae;
case 0x7505b1:c.instructions+=2;goto B7505b1;
case 0x7505b2:c.instructions+=1;goto B7505b2;
case 0x7505b4:goto L7505b4;
case 0x7505ba:c.instructions+=3;goto B7505ba;
case 0x7505c0:c.instructions+=2;goto B7505c0;
case 0x7505c1:c.instructions+=1;goto B7505c1;
case 0x7505c6:goto L7505c6;
case 0x7505c9:c.instructions+=7;goto B7505c9;
case 0x7505cf:c.instructions+=6;goto B7505cf;
case 0x7505d1:c.instructions+=5;goto B7505d1;
case 0x7505d3:c.instructions+=4;goto B7505d3;
case 0x7505d4:c.instructions+=3;goto B7505d4;
case 0x7505d5:c.instructions+=2;goto B7505d5;
case 0x7505dc:c.instructions+=1;goto B7505dc;
case 0x7505e1:goto L7505e1;
case 0x7505e4:c.instructions+=2;goto B7505e4;
case 0x7505e6:c.instructions+=1;goto B7505e6;
case 0x7505ec:goto L7505ec;
case 0x7505ed:c.instructions+=6;goto B7505ed;
case 0x7505f0:c.instructions+=5;goto B7505f0;
case 0x7505f6:c.instructions+=4;goto B7505f6;
case 0x7505f7:c.instructions+=3;goto B7505f7;
case 0x7505fd:c.instructions+=2;goto B7505fd;
case 0x7505fe:c.instructions+=1;goto B7505fe;
case 0x750603:goto L750603;
case 0x750606:c.instructions+=3;goto B750606;
case 0x750608:c.instructions+=2;goto B750608;
case 0x75060e:c.instructions+=1;goto B75060e;
case 0x750614:goto L750614;
case 0x75061a:c.instructions+=3;goto B75061a;
case 0x75061f:c.instructions+=2;goto B75061f;
case 0x750621:c.instructions+=1;goto B750621;
case 0x750623:goto L750623;
case 0x750626:c.instructions+=2;goto B750626;
case 0x750627:c.instructions+=1;goto B750627;
case 0x75062c:goto L75062c;
case 0x75062f:c.instructions+=2;goto B75062f;
case 0x750632:c.instructions+=1;goto B750632;
case 0x750634:goto L750634;
case 0x75063a:c.instructions+=2;goto B75063a;
case 0x75063c:c.instructions+=1;goto B75063c;
case 0x75063e:goto L75063e;
case 0x750641:c.instructions+=4;goto B750641;
case 0x750643:c.instructions+=3;goto B750643;
case 0x750644:c.instructions+=2;goto B750644;
case 0x75064e:c.instructions+=1;goto B75064e;
case 0x750653:goto L750653;
case 0x750659:c.instructions+=4;goto B750659;
case 0x75065f:c.instructions+=3;goto B75065f;
case 0x750662:c.instructions+=2;goto B750662;
case 0x750663:c.instructions+=1;goto B750663;
case 0x750668:goto L750668;
case 0x75066e:c.instructions+=7;goto B75066e;
case 0x750670:c.instructions+=6;goto B750670;
case 0x750672:c.instructions+=5;goto B750672;
case 0x750673:c.instructions+=4;goto B750673;
case 0x750679:c.instructions+=3;goto B750679;
case 0x75067a:c.instructions+=2;goto B75067a;
case 0x75067d:c.instructions+=1;goto B75067d;
case 0x750682:goto L750682;
case 0x750685:c.instructions+=2;goto B750685;
case 0x750687:c.instructions+=1;goto B750687;
case 0x750689:goto L750689;
case 0x750693:goto L750693;
case 0x750694:c.instructions+=2;goto B750694;
case 0x750695:c.instructions+=1;goto B750695;
case 0x750696:goto L750696;
case 0x750697:goto L750697;
case 0x75069e:c.instructions+=1;goto B75069e;
case 0x7506a3:goto L7506a3;
case 0x7506a9:c.instructions+=1;goto B7506a9;
case 0x7506ac:goto L7506ac;
case 0x7506b2:c.instructions+=1;goto B7506b2;
case 0x7506b4:goto L7506b4;
case 0x7506b7:c.instructions+=2;goto B7506b7;
case 0x7506b8:c.instructions+=1;goto B7506b8;
case 0x7506bd:goto L7506bd;
case 0x7506c0:c.instructions+=2;goto B7506c0;
case 0x7506c3:c.instructions+=1;goto B7506c3;
case 0x7506c5:goto L7506c5;
case 0x7506cb:c.instructions+=2;goto B7506cb;
case 0x7506cd:c.instructions+=1;goto B7506cd;
case 0x7506cf:goto L7506cf;
case 0x7506d2:c.instructions+=4;goto B7506d2;
case 0x7506d4:c.instructions+=3;goto B7506d4;
case 0x7506d5:c.instructions+=2;goto B7506d5;
case 0x7506df:c.instructions+=1;goto B7506df;
case 0x7506e4:goto L7506e4;
case 0x7506ea:c.instructions+=4;goto B7506ea;
case 0x7506f0:c.instructions+=3;goto B7506f0;
case 0x7506f3:c.instructions+=2;goto B7506f3;
case 0x7506f4:c.instructions+=1;goto B7506f4;
case 0x7506f9:goto L7506f9;
case 0x7506fc:c.instructions+=7;goto B7506fc;
case 0x750702:c.instructions+=6;goto B750702;
case 0x750704:c.instructions+=5;goto B750704;
case 0x750706:c.instructions+=4;goto B750706;
case 0x750707:c.instructions+=3;goto B750707;
case 0x750708:c.instructions+=2;goto B750708;
case 0x75070f:c.instructions+=1;goto B75070f;
case 0x750714:goto L750714;
case 0x750717:c.instructions+=2;goto B750717;
case 0x750719:c.instructions+=1;goto B750719;
case 0x75071f:goto L75071f;
case 0x750720:c.instructions+=6;goto B750720;
case 0x750723:c.instructions+=5;goto B750723;
case 0x750729:c.instructions+=4;goto B750729;
case 0x75072a:c.instructions+=3;goto B75072a;
case 0x75072b:c.instructions+=2;goto B75072b;
case 0x750731:c.instructions+=1;goto B750731;
case 0x750736:goto L750736;
case 0x750739:c.instructions+=3;goto B750739;
case 0x75073b:c.instructions+=2;goto B75073b;
case 0x750741:c.instructions+=1;goto B750741;
case 0x750747:goto L750747;
case 0x75074a:c.instructions+=2;goto B75074a;
case 0x75074b:c.instructions+=1;goto B75074b;
case 0x750750:goto L750750;
case 0x750757:c.instructions+=1;goto B750757;
case 0x75075c:goto L75075c;
case 0x75075f:c.instructions+=2;goto B75075f;
case 0x750766:c.instructions+=1;goto B750766;
case 0x750768:goto L750768;
case 0x75076e:c.instructions+=2;goto B75076e;
case 0x750771:c.instructions+=1;goto B750771;
case 0x750773:goto L750773;
case 0x750776:c.instructions+=1;goto B750776;
case 0x75077c:goto L75077c;
case 0x750783:c.instructions+=5;goto B750783;
case 0x750785:c.instructions+=4;goto B750785;
case 0x750787:c.instructions+=3;goto B750787;
case 0x750788:c.instructions+=2;goto B750788;
case 0x75078e:c.instructions+=1;goto B75078e;
case 0x750793:goto L750793;
case 0x750799:c.instructions+=2;goto B750799;
case 0x75079b:c.instructions+=1;goto B75079b;
case 0x75079d:goto L75079d;
case 0x7507a2:goto L7507a2;
case 0x7507a8:goto L7507a8;
case 0x7507ae:c.instructions+=2;goto B7507ae;
case 0x7507b1:c.instructions+=1;goto B7507b1;
case 0x7507b7:goto L7507b7;
case 0x7507ba:c.instructions+=1;goto B7507ba;
case 0x7507c0:goto L7507c0;
case 0x7507c3:c.instructions+=1;goto B7507c3;
case 0x7507c5:goto L7507c5;
case 0x7507c8:c.instructions+=1;goto B7507c8;
case 0x7507ce:goto L7507ce;
case 0x7507d4:c.instructions+=2;goto B7507d4;
case 0x7507d5:c.instructions+=1;goto B7507d5;
case 0x7507da:goto L7507da;
case 0x7507dd:c.instructions+=2;goto B7507dd;
case 0x7507e0:c.instructions+=1;goto B7507e0;
case 0x7507e2:goto L7507e2;
case 0x7507e8:c.instructions+=2;goto B7507e8;
case 0x7507eb:c.instructions+=1;goto B7507eb;
case 0x7507ed:goto L7507ed;
case 0x7507ee:c.instructions+=1;goto B7507ee;
case 0x7507f3:goto L7507f3;
case 0x7507fd:c.instructions+=4;goto B7507fd;
case 0x750807:c.instructions+=3;goto B750807;
case 0x750808:c.instructions+=2;goto B750808;
case 0x75080f:c.instructions+=1;goto B75080f;
case 0x750814:goto L750814;
case 0x75081a:c.instructions+=1;goto B75081a;
case 0x75081d:goto L75081d;
case 0x75081e:c.instructions+=4;goto B75081e;
case 0x750822:c.instructions+=3;goto B750822;
case 0x750827:c.instructions+=2;goto B750827;
case 0x750828:c.instructions+=1;goto B750828;
case 0x75082e:goto L75082e;
case 0x750831:c.instructions+=4;goto B750831;
case 0x750835:c.instructions+=3;goto B750835;
case 0x750836:c.instructions+=2;goto B750836;
case 0x750837:c.instructions+=1;goto B750837;
case 0x75083c:goto L75083c;
case 0x75083f:c.instructions+=4;goto B75083f;
case 0x750849:c.instructions+=3;goto B750849;
case 0x75084a:c.instructions+=2;goto B75084a;
case 0x750851:c.instructions+=1;goto B750851;
case 0x750856:goto L750856;
case 0x75085c:c.instructions+=1;goto B75085c;
case 0x75085f:goto L75085f;
case 0x750865:c.instructions+=2;goto B750865;
case 0x750866:c.instructions+=1;goto B750866;
case 0x75086b:goto L75086b;
case 0x75086e:c.instructions+=2;goto B75086e;
case 0x750871:c.instructions+=1;goto B750871;
case 0x750877:goto L750877;
case 0x750878:c.instructions+=4;goto B750878;
case 0x75087c:c.instructions+=3;goto B75087c;
case 0x750881:c.instructions+=2;goto B750881;
case 0x750882:c.instructions+=1;goto B750882;
case 0x750888:goto L750888;
case 0x75088e:c.instructions+=3;goto B75088e;
case 0x750891:c.instructions+=2;goto B750891;
case 0x750894:c.instructions+=1;goto B750894;
case 0x750896:goto L750896;
case 0x750899:c.instructions+=4;goto B750899;
case 0x75089d:c.instructions+=3;goto B75089d;
case 0x75089e:c.instructions+=2;goto B75089e;
case 0x75089f:c.instructions+=1;goto B75089f;
case 0x7508a4:goto L7508a4;
case 0x7508a7:c.instructions+=4;goto B7508a7;
case 0x7508b1:c.instructions+=3;goto B7508b1;
case 0x7508b2:c.instructions+=2;goto B7508b2;
case 0x7508b9:c.instructions+=1;goto B7508b9;
case 0x7508be:goto L7508be;
case 0x7508c4:c.instructions+=1;goto B7508c4;
case 0x7508c7:goto L7508c7;
case 0x7508ca:c.instructions+=4;goto B7508ca;
case 0x7508ce:c.instructions+=3;goto B7508ce;
case 0x7508cf:c.instructions+=2;goto B7508cf;
case 0x7508d0:c.instructions+=1;goto B7508d0;
case 0x7508d5:goto L7508d5;
case 0x7508dc:c.instructions+=4;goto B7508dc;
case 0x7508df:c.instructions+=3;goto B7508df;
case 0x7508e9:c.instructions+=2;goto B7508e9;
case 0x7508ea:c.instructions+=1;goto B7508ea;
case 0x7508ef:goto L7508ef;
case 0x7508f5:c.instructions+=1;goto B7508f5;
case 0x750900:goto L750900;
case 0x750903:c.instructions+=9;goto B750903;
case 0x750904:c.instructions+=8;goto B750904;
case 0x750905:c.instructions+=7;goto B750905;
case 0x750907:c.instructions+=6;goto B750907;
case 0x750909:c.instructions+=5;goto B750909;
case 0x75090b:c.instructions+=4;goto B75090b;
case 0x75090d:c.instructions+=3;goto B75090d;
case 0x750911:c.instructions+=2;goto B750911;
case 0x750912:c.instructions+=1;goto B750912;
case 0x750918:goto L750918;
case 0x75091c:c.instructions+=6;goto B75091c;
case 0x75091f:c.instructions+=5;goto B75091f;
case 0x750920:c.instructions+=4;goto B750920;
case 0x750922:c.instructions+=3;goto B750922;
case 0x750927:c.instructions+=2;goto B750927;
case 0x750929:c.instructions+=1;goto B750929;
case 0x75092f:goto L75092f;
case 0x750930:c.instructions+=3;goto B750930;
case 0x750936:c.instructions+=2;goto B750936;
case 0x750937:c.instructions+=1;goto B750937;
case 0x75093c:goto L75093c;
case 0x75093f:c.instructions+=1;goto B75093f;
case 0x750941:goto L750941;
case 0x750947:c.instructions+=7;goto B750947;
case 0x750949:c.instructions+=6;goto B750949;
case 0x75094b:c.instructions+=5;goto B75094b;
case 0x75094d:c.instructions+=4;goto B75094d;
case 0x750951:c.instructions+=3;goto B750951;
case 0x750952:c.instructions+=2;goto B750952;
case 0x75095c:c.instructions+=1;goto B75095c;
case 0x75095e:goto L75095e;
case 0x750960:c.instructions+=1;goto B750960;
case 0x750962:goto L750962;
case 0x750963:c.instructions+=3;goto B750963;
case 0x750969:c.instructions+=2;goto B750969;
case 0x75096a:c.instructions+=1;goto B75096a;
case 0x750970:goto L750970;
case 0x750974:c.instructions+=2;goto B750974;
case 0x750975:c.instructions+=1;goto B750975;
case 0x750977:goto L750977;
case 0x75097b:c.instructions+=2;goto B75097b;
case 0x75097c:c.instructions+=1;goto B75097c;
case 0x75097e:goto L75097e;
case 0x750980:c.instructions+=5;goto B750980;
case 0x750982:c.instructions+=4;goto B750982;
case 0x750984:c.instructions+=3;goto B750984;
case 0x750988:c.instructions+=2;goto B750988;
case 0x750989:c.instructions+=1;goto B750989;
case 0x75098b:goto L75098b;
case 0x75098d:c.instructions+=1;goto B75098d;
case 0x75098f:goto L75098f;
case 0x750990:c.instructions+=1;goto B750990;
case 0x750991:goto L750991;
case 0x750992:c.instructions+=5;goto B750992;
case 0x75099c:c.instructions+=4;goto B75099c;
case 0x75099e:c.instructions+=3;goto B75099e;
case 0x75099f:c.instructions+=2;goto B75099f;
case 0x7509a2:c.instructions+=1;goto B7509a2;
case 0x7509b0:goto L7509b0;
case 0x7509b1:c.instructions+=5;goto B7509b1;
case 0x7509b2:c.instructions+=4;goto B7509b2;
case 0x7509b6:c.instructions+=3;goto B7509b6;
case 0x7509b9:c.instructions+=2;goto B7509b9;
case 0x7509ba:c.instructions+=1;goto B7509ba;
case 0x7509bf:goto L7509bf;
case 0x7509c5:c.instructions+=3;goto B7509c5;
case 0x7509c8:c.instructions+=2;goto B7509c8;
case 0x7509c9:c.instructions+=1;goto B7509c9;
case 0x7509ce:goto L7509ce;
case 0x7509d4:c.instructions+=7;goto B7509d4;
case 0x7509d6:c.instructions+=6;goto B7509d6;
case 0x7509d8:c.instructions+=5;goto B7509d8;
case 0x7509da:c.instructions+=4;goto B7509da;
case 0x7509df:c.instructions+=3;goto B7509df;
case 0x7509e0:c.instructions+=2;goto B7509e0;
case 0x7509e6:c.instructions+=1;goto B7509e6;
case 0x7509ec:goto L7509ec;
case 0x7509f2:c.instructions+=1;goto B7509f2;
case 0x7509f4:goto L7509f4;
case 0x7509f5:c.instructions+=2;goto B7509f5;
case 0x7509fb:c.instructions+=1;goto B7509fb;
case 0x750a00:goto L750a00;
case 0x750a02:c.instructions+=1;goto B750a02;
case 0x750a04:goto L750a04;
case 0x750a0a:c.instructions+=1;goto B750a0a;
case 0x750a0c:goto L750a0c;
case 0x750a0d:goto L750a0d;
case 0x750a0e:c.instructions+=2;goto B750a0e;
case 0x750a10:c.instructions+=1;goto B750a10;
case 0x750a16:goto L750a16;
case 0x750a17:c.instructions+=1;goto B750a17;
case 0x750a1d:goto L750a1d;
case 0x750a1e:c.instructions+=2;goto B750a1e;
case 0x750a1f:c.instructions+=1;goto B750a1f;
case 0x750a20:goto L750a20;
case 0x750a21:c.instructions+=16;goto B750a21;
case 0x750a23:c.instructions+=15;goto B750a23;
case 0x750a26:c.instructions+=14;goto B750a26;
case 0x750a2c:c.instructions+=13;goto B750a2c;
case 0x750a31:c.instructions+=12;goto B750a31;
case 0x750a32:c.instructions+=11;goto B750a32;
case 0x750a33:c.instructions+=10;goto B750a33;
case 0x750a3a:c.instructions+=9;goto B750a3a;
case 0x750a3d:c.instructions+=8;goto B750a3d;
case 0x750a3f:c.instructions+=7;goto B750a3f;
case 0x750a40:c.instructions+=6;goto B750a40;
case 0x750a43:c.instructions+=5;goto B750a43;
case 0x750a47:c.instructions+=4;goto B750a47;
case 0x750a4a:c.instructions+=3;goto B750a4a;
case 0x750a4e:c.instructions+=2;goto B750a4e;
case 0x750a52:c.instructions+=1;goto B750a52;
case 0x750a58:goto L750a58;
case 0x750a5b:c.instructions+=1;goto B750a5b;
case 0x750a61:goto L750a61;
case 0x750a64:c.instructions+=2;goto B750a64;
case 0x750a67:c.instructions+=1;goto B750a67;
case 0x750a6d:goto L750a6d;
case 0x750a70:goto L750a70;
case 0x750a72:c.instructions+=3;goto B750a72;
case 0x750a73:c.instructions+=2;goto B750a73;
case 0x750a75:c.instructions+=1;goto B750a75;
case 0x750a77:goto L750a77;
case 0x750a79:c.instructions+=3;goto B750a79;
case 0x750a7c:c.instructions+=2;goto B750a7c;
case 0x750a7e:c.instructions+=1;goto B750a7e;
case 0x750a84:goto L750a84;
case 0x750a87:c.instructions+=5;goto B750a87;
case 0x750a8a:c.instructions+=4;goto B750a8a;
case 0x750a8c:c.instructions+=3;goto B750a8c;
case 0x750a8e:c.instructions+=2;goto B750a8e;
case 0x750a92:c.instructions+=1;goto B750a92;
case 0x750a98:goto L750a98;
case 0x750aa0:goto L750aa0;
case 0x750aa6:c.instructions+=9;goto B750aa6;
case 0x750aaa:c.instructions+=8;goto B750aaa;
case 0x750aab:c.instructions+=7;goto B750aab;
case 0x750aaf:c.instructions+=6;goto B750aaf;
case 0x750ab0:c.instructions+=5;goto B750ab0;
case 0x750ab5:c.instructions+=4;goto B750ab5;
case 0x750aba:c.instructions+=3;goto B750aba;
case 0x750abb:c.instructions+=2;goto B750abb;
case 0x750abc:c.instructions+=1;goto B750abc;
case 0x750ac1:goto L750ac1;
case 0x750ac3:c.instructions+=1;goto B750ac3;
case 0x750ac9:goto L750ac9;
case 0x750acf:c.instructions+=2;goto B750acf;
case 0x750ad4:c.instructions+=1;goto B750ad4;
case 0x750ad8:goto L750ad8;
case 0x750ada:goto L750ada;
case 0x750ade:c.instructions+=8;goto B750ade;
case 0x750ae2:c.instructions+=7;goto B750ae2;
case 0x750ae3:c.instructions+=6;goto B750ae3;
case 0x750ae5:c.instructions+=5;goto B750ae5;
case 0x750ae6:c.instructions+=4;goto B750ae6;
case 0x750ae7:c.instructions+=3;goto B750ae7;
case 0x750ae8:c.instructions+=2;goto B750ae8;
case 0x750af0:c.instructions+=1;goto B750af0;
case 0x750af5:goto L750af5;
case 0x750afc:c.instructions+=2;goto B750afc;
case 0x750afe:c.instructions+=1;goto B750afe;
case 0x750b04:goto L750b04;
case 0x750b07:c.instructions+=4;goto B750b07;
case 0x750b0b:c.instructions+=3;goto B750b0b;
case 0x750b10:c.instructions+=2;goto B750b10;
case 0x750b15:c.instructions+=1;goto B750b15;
case 0x750b17:goto L750b17;
case 0x750b19:goto L750b19;
case 0x750b1d:c.instructions+=1;goto B750b1d;
case 0x750b1f:goto L750b1f;
case 0x750b21:c.instructions+=1;goto B750b21;
case 0x750b24:goto L750b24;
case 0x750b26:c.instructions+=3;goto B750b26;
case 0x750b27:c.instructions+=2;goto B750b27;
case 0x750b29:c.instructions+=1;goto B750b29;
case 0x750b2b:goto L750b2b;
case 0x750b2e:c.instructions+=4;goto B750b2e;
case 0x750b30:c.instructions+=3;goto B750b30;
case 0x750b33:c.instructions+=2;goto B750b33;
case 0x750b35:c.instructions+=1;goto B750b35;
case 0x750b3b:goto L750b3b;
case 0x750b3e:c.instructions+=2;goto B750b3e;
case 0x750b42:c.instructions+=1;goto B750b42;
case 0x750b44:goto L750b44;
case 0x750b47:c.instructions+=3;goto B750b47;
case 0x750b49:c.instructions+=2;goto B750b49;
case 0x750b4a:c.instructions+=1;goto B750b4a;
case 0x750b4b:goto L750b4b;
case 0x750b4d:c.instructions+=2;goto B750b4d;
case 0x750b4f:c.instructions+=1;goto B750b4f;
case 0x750b51:goto L750b51;
case 0x750b53:c.instructions+=4;goto B750b53;
case 0x750b56:c.instructions+=3;goto B750b56;
case 0x750b57:c.instructions+=2;goto B750b57;
case 0x750b59:c.instructions+=1;goto B750b59;
case 0x750b5b:goto L750b5b;
case 0x750b5d:c.instructions+=1;goto B750b5d;
case 0x750b60:goto L750b60;
case 0x750b62:c.instructions+=3;goto B750b62;
case 0x750b63:c.instructions+=2;goto B750b63;
case 0x750b65:c.instructions+=1;goto B750b65;
case 0x750b67:goto L750b67;
case 0x750b69:c.instructions+=4;goto B750b69;
case 0x750b6b:c.instructions+=3;goto B750b6b;
case 0x750b6d:c.instructions+=2;goto B750b6d;
case 0x750b70:c.instructions+=1;goto B750b70;
case 0x750b73:goto L750b73;
case 0x750b75:c.instructions+=3;goto B750b75;
case 0x750b76:c.instructions+=2;goto B750b76;
case 0x750b78:c.instructions+=1;goto B750b78;
case 0x750b7a:goto L750b7a;
case 0x750b7c:c.instructions+=3;goto B750b7c;
case 0x750b7e:c.instructions+=2;goto B750b7e;
case 0x750b81:c.instructions+=1;goto B750b81;
case 0x750b83:goto L750b83;
case 0x750b86:c.instructions+=3;goto B750b86;
case 0x750b87:c.instructions+=2;goto B750b87;
case 0x750b88:c.instructions+=1;goto B750b88;
case 0x750b8d:goto L750b8d;
case 0x750b90:c.instructions+=2;goto B750b90;
case 0x750b92:c.instructions+=1;goto B750b92;
case 0x750b94:goto L750b94;
case 0x750b98:c.instructions+=1;goto B750b98;
case 0x750b9b:goto L750b9b;
case 0x750b9e:c.instructions+=4;goto B750b9e;
case 0x750b9f:c.instructions+=3;goto B750b9f;
case 0x750ba1:c.instructions+=2;goto B750ba1;
case 0x750ba5:c.instructions+=1;goto B750ba5;
case 0x750bab:goto L750bab;
case 0x750bae:goto L750bae;
case 0x750bb1:c.instructions+=4;goto B750bb1;
case 0x750bb5:c.instructions+=3;goto B750bb5;
case 0x750bba:c.instructions+=2;goto B750bba;
case 0x750bc1:c.instructions+=1;goto B750bc1;
case 0x750bc6:goto L750bc6;
case 0x750bc7:c.instructions+=5;goto B750bc7;
case 0x750bc8:c.instructions+=4;goto B750bc8;
case 0x750bc9:c.instructions+=3;goto B750bc9;
case 0x750bcb:c.instructions+=2;goto B750bcb;
case 0x750bcc:c.instructions+=1;goto B750bcc;
case 0x750bcd:goto L750bcd;
case 0x750bd2:c.instructions+=2;goto B750bd2;
case 0x750bd9:c.instructions+=1;goto B750bd9;
case 0x750bde:goto L750bde;
case 0x750bdf:c.instructions+=5;goto B750bdf;
case 0x750be0:c.instructions+=4;goto B750be0;
case 0x750be1:c.instructions+=3;goto B750be1;
case 0x750be3:c.instructions+=2;goto B750be3;
case 0x750be4:c.instructions+=1;goto B750be4;
case 0x750be5:goto L750be5;
case 0x750be9:c.instructions+=6;goto B750be9;
case 0x750bec:c.instructions+=5;goto B750bec;
case 0x750bee:c.instructions+=4;goto B750bee;
case 0x750bef:c.instructions+=3;goto B750bef;
case 0x750bf4:c.instructions+=2;goto B750bf4;
case 0x750bf5:c.instructions+=1;goto B750bf5;
case 0x750bfb:goto L750bfb;
case 0x750bfe:c.instructions+=3;goto B750bfe;
case 0x750c03:c.instructions+=2;goto B750c03;
case 0x750c0a:c.instructions+=1;goto B750c0a;
case 0x750c0f:goto L750c0f;
case 0x750c10:c.instructions+=5;goto B750c10;
case 0x750c11:c.instructions+=4;goto B750c11;
case 0x750c12:c.instructions+=3;goto B750c12;
case 0x750c14:c.instructions+=2;goto B750c14;
case 0x750c15:c.instructions+=1;goto B750c15;
case 0x750c16:goto L750c16;
case 0x750c1d:c.instructions+=2;goto B750c1d;
case 0x750c20:c.instructions+=1;goto B750c20;
case 0x750c25:goto L750c25;
case 0x750c26:c.instructions+=5;goto B750c26;
case 0x750c27:c.instructions+=4;goto B750c27;
case 0x750c28:c.instructions+=3;goto B750c28;
case 0x750c2a:c.instructions+=2;goto B750c2a;
case 0x750c2b:c.instructions+=1;goto B750c2b;
case 0x750c30:goto L750c30;
case 0x750c33:c.instructions+=6;goto B750c33;
case 0x750c38:c.instructions+=5;goto B750c38;
case 0x750c39:c.instructions+=4;goto B750c39;
case 0x750c3d:c.instructions+=3;goto B750c3d;
case 0x750c41:c.instructions+=2;goto B750c41;
case 0x750c48:c.instructions+=1;goto B750c48;
case 0x750c4a:goto L750c4a;
case 0x750c4f:c.instructions+=3;goto B750c4f;
case 0x750c50:c.instructions+=2;goto B750c50;
case 0x750c54:c.instructions+=1;goto B750c54;
case 0x750c59:goto L750c59;
case 0x750c5c:c.instructions+=1;goto B750c5c;
case 0x750c5d:goto L750c5d;
case 0x750c61:c.instructions+=3;goto B750c61;
case 0x750c63:c.instructions+=2;goto B750c63;
case 0x750c65:c.instructions+=1;goto B750c65;
case 0x750c67:goto L750c67;
case 0x750c69:c.instructions+=1;goto B750c69;
case 0x750c6b:goto L750c6b;
case 0x750c6d:c.instructions+=6;goto B750c6d;
case 0x750c6f:c.instructions+=5;goto B750c6f;
case 0x750c73:c.instructions+=4;goto B750c73;
case 0x750c74:c.instructions+=3;goto B750c74;
case 0x750c75:c.instructions+=2;goto B750c75;
case 0x750c76:c.instructions+=1;goto B750c76;
case 0x750c7b:goto L750c7b;
case 0x750c7e:c.instructions+=1;goto B750c7e;
case 0x750c82:goto L750c82;
case 0x750c89:c.instructions+=3;goto B750c89;
case 0x750c8b:c.instructions+=2;goto B750c8b;
case 0x750c8d:c.instructions+=1;goto B750c8d;
case 0x750c8f:goto L750c8f;
case 0x750c90:goto L750c90;
case 0x750c92:c.instructions+=1;goto B750c92;
case 0x750c94:goto L750c94;
case 0x750c96:c.instructions+=10;goto B750c96;
case 0x750c98:c.instructions+=9;goto B750c98;
case 0x750c9b:c.instructions+=8;goto B750c9b;
case 0x750c9e:c.instructions+=7;goto B750c9e;
case 0x750ca1:c.instructions+=6;goto B750ca1;
case 0x750ca4:c.instructions+=5;goto B750ca4;
case 0x750ca5:c.instructions+=4;goto B750ca5;
case 0x750ca8:c.instructions+=3;goto B750ca8;
case 0x750caa:c.instructions+=2;goto B750caa;
case 0x750cac:c.instructions+=1;goto B750cac;
case 0x750cae:goto L750cae;
case 0x750cb1:c.instructions+=9;goto B750cb1;
case 0x750cb3:c.instructions+=8;goto B750cb3;
case 0x750cb5:c.instructions+=7;goto B750cb5;
case 0x750cba:c.instructions+=6;goto B750cba;
case 0x750cbb:c.instructions+=5;goto B750cbb;
case 0x750cbd:c.instructions+=4;goto B750cbd;
case 0x750cbe:c.instructions+=3;goto B750cbe;
case 0x750cc5:c.instructions+=2;goto B750cc5;
case 0x750ccf:c.instructions+=1;goto B750ccf;
case 0x750cd4:goto L750cd4;
case 0x750cd8:c.instructions+=3;goto B750cd8;
case 0x750cda:c.instructions+=2;goto B750cda;
case 0x750cdb:c.instructions+=1;goto B750cdb;
case 0x750ce0:goto L750ce0;
case 0x750ce3:c.instructions+=1;goto B750ce3;
case 0x750cf0:goto L750cf0;
case 0x750cf4:c.instructions+=3;goto B750cf4;
case 0x750cf7:c.instructions+=2;goto B750cf7;
case 0x750cfb:c.instructions+=1;goto B750cfb;
case 0x750d00:goto L750d00;
case 0x750d01:c.instructions+=3;goto B750d01;
case 0x750d05:c.instructions+=2;goto B750d05;
case 0x750d0c:c.instructions+=1;goto B750d0c;
case 0x750d0e:goto L750d0e;
case 0x750d13:c.instructions+=2;goto B750d13;
case 0x750d14:c.instructions+=1;goto B750d14;
case 0x750d15:goto L750d15;
case 0x750d19:c.instructions+=4;goto B750d19;
case 0x750d20:c.instructions+=3;goto B750d20;
case 0x750d22:c.instructions+=2;goto B750d22;
case 0x750d24:c.instructions+=1;goto B750d24;
case 0x750d26:goto L750d26;
case 0x750d28:c.instructions+=1;goto B750d28;
case 0x750d2a:goto L750d2a;
case 0x750d2c:c.instructions+=10;goto B750d2c;
case 0x750d2e:c.instructions+=9;goto B750d2e;
case 0x750d31:c.instructions+=8;goto B750d31;
case 0x750d34:c.instructions+=7;goto B750d34;
case 0x750d37:c.instructions+=6;goto B750d37;
case 0x750d3a:c.instructions+=5;goto B750d3a;
case 0x750d3b:c.instructions+=4;goto B750d3b;
case 0x750d3e:c.instructions+=3;goto B750d3e;
case 0x750d40:c.instructions+=2;goto B750d40;
case 0x750d42:c.instructions+=1;goto B750d42;
case 0x750d44:goto L750d44;
case 0x750d46:c.instructions+=2;goto B750d46;
case 0x750d47:c.instructions+=1;goto B750d47;
case 0x750d4c:goto L750d4c;
case 0x750d4f:c.instructions+=2;goto B750d4f;
case 0x750d51:c.instructions+=1;goto B750d51;
case 0x750d53:goto L750d53;
case 0x750d58:c.instructions+=2;goto B750d58;
case 0x750d59:c.instructions+=1;goto B750d59;
case 0x750d5a:goto L750d5a;
case 0x750d5b:c.instructions+=2;goto B750d5b;
case 0x750d61:c.instructions+=1;goto B750d61;
case 0x750d63:goto L750d63;
case 0x750d65:c.instructions+=4;goto B750d65;
case 0x750d68:c.instructions+=3;goto B750d68;
case 0x750d69:c.instructions+=2;goto B750d69;
case 0x750d6b:c.instructions+=1;goto B750d6b;
case 0x750d6d:goto L750d6d;
case 0x750d70:c.instructions+=8;goto B750d70;
case 0x750d72:c.instructions+=7;goto B750d72;
case 0x750d74:c.instructions+=6;goto B750d74;
case 0x750d79:c.instructions+=5;goto B750d79;
case 0x750d7a:c.instructions+=4;goto B750d7a;
case 0x750d7c:c.instructions+=3;goto B750d7c;
case 0x750d7d:c.instructions+=2;goto B750d7d;
case 0x750d87:c.instructions+=1;goto B750d87;
case 0x750d8c:goto L750d8c;
case 0x750d8e:c.instructions+=2;goto B750d8e;
case 0x750d8f:c.instructions+=1;goto B750d8f;
case 0x750d90:goto L750d90;
case 0x750d91:c.instructions+=4;goto B750d91;
case 0x750d95:c.instructions+=3;goto B750d95;
case 0x750d9b:c.instructions+=2;goto B750d9b;
case 0x750d9e:c.instructions+=1;goto B750d9e;
case 0x750da0:goto L750da0;
case 0x750da3:c.instructions+=1;goto B750da3;
case 0x750da5:goto L750da5;
case 0x750da8:c.instructions+=2;goto B750da8;
case 0x750da9:c.instructions+=1;goto B750da9;
case 0x750dae:goto L750dae;
case 0x750db1:goto L750db1;
case 0x750db7:c.instructions+=2;goto B750db7;
case 0x750dba:c.instructions+=1;goto B750dba;
case 0x750dbc:goto L750dbc;
case 0x750dbf:c.instructions+=1;goto B750dbf;
case 0x750dc1:goto L750dc1;
case 0x750dc4:c.instructions+=1;goto B750dc4;
case 0x750dc6:goto L750dc6;
case 0x750dcc:c.instructions+=2;goto B750dcc;
case 0x750dcd:c.instructions+=1;goto B750dcd;
case 0x750dd2:goto L750dd2;
case 0x750dd4:c.instructions+=2;goto B750dd4;
case 0x750dd5:c.instructions+=1;goto B750dd5;
case 0x750de0:goto L750de0;
case 0x750de4:c.instructions+=3;goto B750de4;
case 0x750dea:c.instructions+=2;goto B750dea;
case 0x750ded:c.instructions+=1;goto B750ded;
case 0x750def:goto L750def;
case 0x750df2:c.instructions+=1;goto B750df2;
case 0x750df4:goto L750df4;
case 0x750df7:c.instructions+=1;goto B750df7;
case 0x750df9:goto L750df9;
case 0x750dfc:c.instructions+=1;goto B750dfc;
case 0x750dfe:goto L750dfe;
case 0x750e01:c.instructions+=1;goto B750e01;
case 0x750e03:goto L750e03;
case 0x750e06:c.instructions+=1;goto B750e06;
case 0x750e08:goto L750e08;
case 0x750e0b:c.instructions+=1;goto B750e0b;
case 0x750e0d:goto L750e0d;
case 0x750e10:c.instructions+=2;goto B750e10;
case 0x750e14:c.instructions+=1;goto B750e14;
case 0x750e19:goto L750e19;
case 0x750e1e:c.instructions+=1;goto B750e1e;
case 0x750e1f:goto L750e1f;
case 0x750e24:c.instructions+=1;goto B750e24;
case 0x750e25:goto L750e25;
case 0x750e2a:c.instructions+=1;goto B750e2a;
case 0x750e2b:goto L750e2b;
case 0x750e30:c.instructions+=1;goto B750e30;
case 0x750e40:goto L750e40;
case 0x750e44:c.instructions+=3;goto B750e44;
case 0x750e47:c.instructions+=2;goto B750e47;
case 0x750e4b:c.instructions+=1;goto B750e4b;
case 0x750e50:goto L750e50;
case 0x750e54:c.instructions+=3;goto B750e54;
case 0x750e57:c.instructions+=2;goto B750e57;
case 0x750e5b:c.instructions+=1;goto B750e5b;
case 0x750e60:goto L750e60;
case 0x750e64:c.instructions+=3;goto B750e64;
case 0x750e67:c.instructions+=2;goto B750e67;
case 0x750e6b:c.instructions+=1;goto B750e6b;
case 0x750e70:goto L750e70;
case 0x750e71:c.instructions+=5;goto B750e71;
case 0x750e77:c.instructions+=4;goto B750e77;
case 0x750e78:c.instructions+=3;goto B750e78;
case 0x750e7d:c.instructions+=2;goto B750e7d;
case 0x750e7f:c.instructions+=1;goto B750e7f;
case 0x750e81:goto L750e81;
case 0x750e82:c.instructions+=1;goto B750e82;
case 0x750e88:goto L750e88;
case 0x750e8a:c.instructions+=3;goto B750e8a;
case 0x750e8c:c.instructions+=2;goto B750e8c;
case 0x750e8e:c.instructions+=1;goto B750e8e;
case 0x750e94:goto L750e94;
case 0x750e95:c.instructions+=2;goto B750e95;
case 0x750e9a:c.instructions+=1;goto B750e9a;
case 0x750e9c:goto L750e9c;
case 0x750e9e:goto L750e9e;
case 0x750ea4:c.instructions+=27;goto B750ea4;
case 0x750eab:c.instructions+=26;goto B750eab;
case 0x750eb2:c.instructions+=25;goto B750eb2;
case 0x750eb9:c.instructions+=24;goto B750eb9;
case 0x750ec0:c.instructions+=23;goto B750ec0;
case 0x750ec7:c.instructions+=22;goto B750ec7;
case 0x750ece:c.instructions+=21;goto B750ece;
case 0x750ed5:c.instructions+=20;goto B750ed5;
case 0x750edc:c.instructions+=19;goto B750edc;
case 0x750ee3:c.instructions+=18;goto B750ee3;
case 0x750eea:c.instructions+=17;goto B750eea;
case 0x750ef1:c.instructions+=16;goto B750ef1;
case 0x750ef8:c.instructions+=15;goto B750ef8;
case 0x750eff:c.instructions+=14;goto B750eff;
case 0x750f05:c.instructions+=13;goto B750f05;
case 0x750f08:c.instructions+=12;goto B750f08;
case 0x750f0a:c.instructions+=11;goto B750f0a;
case 0x750f10:c.instructions+=10;goto B750f10;
case 0x750f13:c.instructions+=9;goto B750f13;
case 0x750f19:c.instructions+=8;goto B750f19;
case 0x750f1a:c.instructions+=7;goto B750f1a;
case 0x750f1c:c.instructions+=6;goto B750f1c;
case 0x750f1d:c.instructions+=5;goto B750f1d;
case 0x750f22:c.instructions+=4;goto B750f22;
case 0x750f24:c.instructions+=3;goto B750f24;
case 0x750f26:c.instructions+=2;goto B750f26;
case 0x750f30:c.instructions+=1;goto B750f30;
case 0x750f36:goto L750f36;
case 0x750f37:c.instructions+=1;goto B750f37;
case 0x750f3d:goto L750f3d;
case 0x750f43:c.instructions+=2;goto B750f43;
case 0x750f45:c.instructions+=1;goto B750f45;
case 0x750f47:goto L750f47;
case 0x750f4d:c.instructions+=1;goto B750f4d;
case 0x750f50:goto L750f50;
case 0x750f52:c.instructions+=1;goto B750f52;
case 0x750f54:goto L750f54;
case 0x750f5a:c.instructions+=2;goto B750f5a;
case 0x750f5c:c.instructions+=1;goto B750f5c;
case 0x750f5e:goto L750f5e;
case 0x750f65:c.instructions+=2;goto B750f65;
case 0x750f66:c.instructions+=1;goto B750f66;
case 0x750f68:goto L750f68;
case 0x750f69:c.instructions+=2;goto B750f69;
case 0x750f6b:c.instructions+=1;goto B750f6b;
case 0x750f6d:goto L750f6d;
case 0x750f6e:c.instructions+=1;goto B750f6e;
case 0x750f74:goto L750f74;
case 0x750f75:c.instructions+=3;goto B750f75;
case 0x750f77:c.instructions+=2;goto B750f77;
case 0x750f78:c.instructions+=1;goto B750f78;
case 0x750f79:goto L750f79;
case 0x750f7d:c.instructions+=6;goto B750f7d;
case 0x750f81:c.instructions+=5;goto B750f81;
case 0x750f85:c.instructions+=4;goto B750f85;
case 0x750f86:c.instructions+=3;goto B750f86;
case 0x750f87:c.instructions+=2;goto B750f87;
case 0x750f88:c.instructions+=1;goto B750f88;
case 0x750f8d:goto L750f8d;
case 0x750f90:c.instructions+=6;goto B750f90;
case 0x750f93:c.instructions+=5;goto B750f93;
case 0x750f96:c.instructions+=4;goto B750f96;
case 0x750f9c:c.instructions+=3;goto B750f9c;
case 0x750fa2:c.instructions+=2;goto B750fa2;
case 0x750fac:c.instructions+=1;goto B750fac;
case 0x750fae:goto L750fae;
case 0x750faf:c.instructions+=2;goto B750faf;
case 0x750fb0:c.instructions+=1;goto B750fb0;
case 0x750fc0:goto L750fc0;
case 0x750fc3:c.instructions+=9;goto B750fc3;
case 0x750fc8:c.instructions+=8;goto B750fc8;
case 0x750fcb:c.instructions+=7;goto B750fcb;
case 0x750fcf:c.instructions+=6;goto B750fcf;
case 0x750fd1:c.instructions+=5;goto B750fd1;
case 0x750fd5:c.instructions+=4;goto B750fd5;
case 0x750fd6:c.instructions+=3;goto B750fd6;
case 0x750fdb:c.instructions+=2;goto B750fdb;
case 0x750fdc:c.instructions+=1;goto B750fdc;
case 0x750fe1:goto L750fe1;
case 0x750fe6:c.instructions+=8;goto B750fe6;
case 0x750feb:c.instructions+=7;goto B750feb;
case 0x750ff0:c.instructions+=6;goto B750ff0;
case 0x750ff3:c.instructions+=5;goto B750ff3;
case 0x750ff5:c.instructions+=4;goto B750ff5;
case 0x750ffa:c.instructions+=3;goto B750ffa;
case 0x750ffd:c.instructions+=2;goto B750ffd;
case 0x750fff:c.instructions+=1;goto B750fff;
default:missing_instruction(c.pc);}
B750004:L750004:{c.instructions+=1;NFSU2_TR(0x750004);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B750007:L750007:{c.instructions+=4;NFSU2_TR(0x750007);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B750009:{NFSU2_TR(0x750009);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75000a:{NFSU2_TR(0x75000a);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75000c:{NFSU2_TR(0x75000c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750007u);}goto L750007;}}
}
B75000e:L75000e:{c.instructions+=10;NFSU2_TR(0x75000e);
u8 U[8];
w4(U+0,u32(u32(u32(0x334ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750015:{NFSU2_TR(0x750015);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B750017:{NFSU2_TR(0x750017);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B750019:{NFSU2_TR(0x750019);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75001d:{NFSU2_TR(0x75001d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75001e:{NFSU2_TR(0x75001e);
u8 U[8];
w4(U+0,u32(u32(u32(0x334ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750025:{NFSU2_TR(0x750025);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750029:{NFSU2_TR(0x750029);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75002d:{NFSU2_TR(0x75002d);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B750030:{NFSU2_TR(0x750030);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x74fe50u,74f);}
}
B750036:L750036:{c.instructions+=9;NFSU2_TR(0x750036);
u8 U[8];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75003d:{NFSU2_TR(0x75003d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750041:{NFSU2_TR(0x750041);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750044:{NFSU2_TR(0x750044);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
}
B75004a:{NFSU2_TR(0x75004a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1a4ull))));
}
B750050:{NFSU2_TR(0x750050);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B750052:{NFSU2_TR(0x750052);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750056:{NFSU2_TR(0x750056);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75005a:{NFSU2_TR(0x75005a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x74fe00u,74f);}
}
B750060:L750060:{c.instructions+=1;NFSU2_TR(0x750060);
{goto L75007b;}
}
B750062:L750062:{c.instructions+=9;NFSU2_TR(0x750062);
u8 U[8];
w4(U+0,u32(u32(u32(0x330ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750069:{NFSU2_TR(0x750069);
u8 U[1];
w1(U+0,u8(0x2eull));
s1(u32(r4(R+0)),r1(U+0));
}
B75006c:{NFSU2_TR(0x75006c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75006d:{NFSU2_TR(0x75006d);
u8 U[1];
w1(U+0,u8(0x2eull));
s1(u32(r4(R+0)),r1(U+0));
}
B750070:{NFSU2_TR(0x750070);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B750071:{NFSU2_TR(0x750071);
u8 U[1];
w1(U+0,u8(0x2eull));
s1(u32(r4(R+0)),r1(U+0));
}
B750074:{NFSU2_TR(0x750074);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B750075:{NFSU2_TR(0x750075);
u8 U[1];
w1(U+0,u8(0xaull));
s1(u32(r4(R+0)),r1(U+0));
}
B750078:{NFSU2_TR(0x750078);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75007b:L75007b:{c.instructions+=7;NFSU2_TR(0x75007b);
u8 U[8];
w4(U+0,u32(u32(u32(0x31cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750082:{NFSU2_TR(0x750082);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750086:{NFSU2_TR(0x750086);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B750087:{NFSU2_TR(0x750087);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750088:{NFSU2_TR(0x750088);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B750089:{NFSU2_TR(0x750089);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75008a:{NFSU2_TR(0x75008a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75008full));
TAIL_STATIC(0x76115eu,761);
}
B75008f:L75008f:{c.instructions+=2;NFSU2_TR(0x75008f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x310ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x310ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x310ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B750095:{NFSU2_TR(0x750095);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7500a0:L7500a0:{c.instructions+=3;NFSU2_TR(0x7500a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7500a4:{NFSU2_TR(0x7500a4);
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
B7500a6:{NFSU2_TR(0x7500a6);
if(r1(R+518)){{goto L750151;}}
}
B7500ac:L7500ac:{c.instructions+=6;NFSU2_TR(0x7500ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7500ad:{NFSU2_TR(0x7500ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7500b0:{NFSU2_TR(0x7500b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7500b3:{NFSU2_TR(0x7500b3);
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
B7500b5:{NFSU2_TR(0x7500b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7500b9:{NFSU2_TR(0x7500b9);
if(r1(R+518)){{goto L750150;}}
}
B7500bf:L7500bf:{c.instructions+=6;NFSU2_TR(0x7500bf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7500c0:{NFSU2_TR(0x7500c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7500c4:{NFSU2_TR(0x7500c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7500c5:{NFSU2_TR(0x7500c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7500c9:{NFSU2_TR(0x7500c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7500ca:{NFSU2_TR(0x7500ca);
__builtin_memmove((R+12),(R+12),4);
}
B7500d0:L7500d0:{c.instructions+=4;NFSU2_TR(0x7500d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7500d3:{NFSU2_TR(0x7500d3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7500d5:{NFSU2_TR(0x7500d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7500d8:{NFSU2_TR(0x7500d8);
if(r1(R+518)){{goto L75011c;}}
}
B7500da:L7500da:{c.instructions+=4;NFSU2_TR(0x7500da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7500e0:{NFSU2_TR(0x7500e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7500e2:{NFSU2_TR(0x7500e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7500e5:{NFSU2_TR(0x7500e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75011c;}}
}
B7500e7:L7500e7:{c.instructions+=2;NFSU2_TR(0x7500e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7500e9:{NFSU2_TR(0x7500e9);
if(r1(R+518)){{goto L7500fc;}}
}
B7500eb:L7500eb:{c.instructions+=2;NFSU2_TR(0x7500eb);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7500ef:{NFSU2_TR(0x7500ef);
if(r1(R+518)){{goto L7500fc;}}
}
B7500f1:L7500f1:{c.instructions+=2;NFSU2_TR(0x7500f1);
__builtin_memmove((R+0),(R+20),4);
}
B7500f3:{NFSU2_TR(0x7500f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7500f8ull));
TAIL_STATIC(0x74f600u,74f);
}
B7500f8:L7500f8:{c.instructions+=2;NFSU2_TR(0x7500f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7500fa:{NFSU2_TR(0x7500fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75011c;}}
}
B7500fc:L7500fc:{c.instructions+=2;NFSU2_TR(0x7500fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7500fe:{NFSU2_TR(0x7500fe);
if(r1(R+518)){{goto L750112;}}
}
B750100:L750100:{c.instructions+=2;NFSU2_TR(0x750100);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B750103:{NFSU2_TR(0x750103);
if(r1(R+518)){{goto L750112;}}
}
B750105:L750105:{c.instructions+=3;NFSU2_TR(0x750105);
__builtin_memmove((R+8),(R+12),4);
}
B750107:{NFSU2_TR(0x750107);
__builtin_memmove((R+0),(R+28),4);
}
B750109:{NFSU2_TR(0x750109);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75010eull));
TAIL_STATIC(0x74f600u,74f);
}
B75010e:L75010e:{c.instructions+=2;NFSU2_TR(0x75010e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B750110:{NFSU2_TR(0x750110);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75011c;}}
}
B750112:L750112:{c.instructions+=3;NFSU2_TR(0x750112);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750118:{NFSU2_TR(0x750118);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75011a:{NFSU2_TR(0x75011a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L750133;}}
}
B75011c:L75011c:{c.instructions+=4;NFSU2_TR(0x75011c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750120:{NFSU2_TR(0x750120);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
}
B750126:{NFSU2_TR(0x750126);
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
B750128:{NFSU2_TR(0x750128);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7500d0u);}goto L7500d0;}}
}
B75012a:L75012a:{c.instructions+=6;NFSU2_TR(0x75012a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75012e:{NFSU2_TR(0x75012e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75012f:{NFSU2_TR(0x75012f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B750130:{NFSU2_TR(0x750130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B750131:{NFSU2_TR(0x750131);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750132:{NFSU2_TR(0x750132);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750133:L750133:{c.instructions+=3;NFSU2_TR(0x750133);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750137:{NFSU2_TR(0x750137);
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
B750139:{NFSU2_TR(0x750139);
if(r1(R+518)){{goto L750143;}}
}
B75013b:L75013b:{c.instructions+=2;NFSU2_TR(0x75013b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750141:{NFSU2_TR(0x750141);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B750143:L750143:{c.instructions+=5;NFSU2_TR(0x750143);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B750149:{NFSU2_TR(0x750149);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75014a:{NFSU2_TR(0x75014a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75014b:{NFSU2_TR(0x75014b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75014f:{NFSU2_TR(0x75014f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B750150:L750150:{c.instructions+=1;NFSU2_TR(0x750150);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750151:L750151:{c.instructions+=2;NFSU2_TR(0x750151);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750155:{NFSU2_TR(0x750155);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750160:L750160:{c.instructions+=8;NFSU2_TR(0x750160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B750163:{NFSU2_TR(0x750163);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B750168:{NFSU2_TR(0x750168);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75016c:{NFSU2_TR(0x75016c);
__builtin_memmove((R+0),gp(0x8b7e28),4);
}
B750171:{NFSU2_TR(0x750171);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750172:{NFSU2_TR(0x750172);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B750174:{NFSU2_TR(0x750174);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B750176:{NFSU2_TR(0x750176);
if(r1(R+518)){{goto L75018c;}}
}
B750178:L750178:{c.instructions+=4;NFSU2_TR(0x750178);
s4(0x8b7e24,u32(u32(m4(0x8b7e24))+u32(u32(0x1ull))));
}
B75017e:{NFSU2_TR(0x75017e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75017f:{NFSU2_TR(0x75017f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750183:{NFSU2_TR(0x750183);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750188ull));
TAIL_STATIC(0x76115eu,761);
}
B750188:L750188:{c.instructions+=2;NFSU2_TR(0x750188);
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
B75018b:{NFSU2_TR(0x75018b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75018c:L75018c:{c.instructions+=3;NFSU2_TR(0x75018c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75018d:{NFSU2_TR(0x75018d);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75018f:{NFSU2_TR(0x75018f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750194ull));
TAIL_STATIC(0x5832f0u,583);
}
B750194:L750194:{c.instructions+=5;NFSU2_TR(0x750194);
__builtin_memmove((R+24),(R+0),4);
}
B750196:{NFSU2_TR(0x750196);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B750199:{NFSU2_TR(0x750199);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75019b:{NFSU2_TR(0x75019b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75019d:{NFSU2_TR(0x75019d);
if(r1(R+518)){{goto L7502d8;}}
}
B7501a3:L7501a3:{c.instructions+=6;NFSU2_TR(0x7501a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7501a4:{NFSU2_TR(0x7501a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7501a8:{NFSU2_TR(0x7501a8);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7501ab:{NFSU2_TR(0x7501ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7501ac:{NFSU2_TR(0x7501ac);
w4(R+4,u32(0x14ull));
}
B7501b1:{NFSU2_TR(0x7501b1);
__builtin_memmove((R+28),(R+24),4);
}
B7501b3:L7501b3:{c.instructions+=1;NFSU2_TR(0x7501b3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7501b5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7501b3u);}goto L7501b3;}
}
B7501b5:L7501b5:{c.instructions+=1;NFSU2_TR(0x7501b5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7501bc;}}
}
B7501b7:L7501b7:{c.instructions+=1;NFSU2_TR(0x7501b7);
w4(R+12,u32(0x4ull));
}
B7501bc:L7501bc:{c.instructions+=3;NFSU2_TR(0x7501bc);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(s64(s32(u32(0x1a4ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+12)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B7501c2:{NFSU2_TR(0x7501c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7501c3:{NFSU2_TR(0x7501c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7501c8ull));
TAIL_STATIC(0x5832f0u,583);
}
B7501c8:L7501c8:{c.instructions+=5;NFSU2_TR(0x7501c8);
__builtin_memmove((R+28),(R+0),4);
}
B7501ca:{NFSU2_TR(0x7501ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7501cd:{NFSU2_TR(0x7501cd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7501cf:{NFSU2_TR(0x7501cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7501d2:{NFSU2_TR(0x7501d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7501f0;}}
}
B7501d4:L7501d4:{c.instructions+=1;NFSU2_TR(0x7501d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7501d5:L7501d5:{c.instructions+=1;NFSU2_TR(0x7501d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7501daull));
TAIL_STATIC(0x598ec0u,598);
}
B7501da:L7501da:{c.instructions+=8;NFSU2_TR(0x7501da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7501dd:{NFSU2_TR(0x7501dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7501de:{NFSU2_TR(0x7501de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7501df:{NFSU2_TR(0x7501df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7501e0:{NFSU2_TR(0x7501e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7501e2:{NFSU2_TR(0x7501e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7501e3:{NFSU2_TR(0x7501e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7501e7:{NFSU2_TR(0x7501e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7501ecull));
TAIL_STATIC(0x76115eu,761);
}
B7501ec:L7501ec:{c.instructions+=2;NFSU2_TR(0x7501ec);
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
B7501ef:{NFSU2_TR(0x7501ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7501f0:L7501f0:{c.instructions+=6;NFSU2_TR(0x7501f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7501f3:{NFSU2_TR(0x7501f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7501f6:{NFSU2_TR(0x7501f6);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B7501f8:{NFSU2_TR(0x7501f8);
__builtin_memmove((R+8),(R+4),4);
}
B7501fa:{NFSU2_TR(0x7501fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7501fd:{NFSU2_TR(0x7501fd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7501ff:L7501ff:{c.instructions+=1;NFSU2_TR(0x7501ff);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L750201;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7501ffu);}goto L7501ff;}
}
B750201:L750201:{c.instructions+=4;NFSU2_TR(0x750201);
__builtin_memmove((R+4),(R+8),4);
}
B750203:{NFSU2_TR(0x750203);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750204:{NFSU2_TR(0x750204);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B750207:{NFSU2_TR(0x750207);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750209:L750209:{c.instructions+=1;NFSU2_TR(0x750209);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L75020b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750209u);}goto L750209;}
}
B75020b:L75020b:{c.instructions+=4;NFSU2_TR(0x75020b);
w4(R+12,u32(0x1ull));
}
B750210:{NFSU2_TR(0x750210);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750212:{NFSU2_TR(0x750212);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750215:{NFSU2_TR(0x750215);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75021aull));
TAIL_STATIC(0x74a220u,74a);
}
B75021a:L75021a:{c.instructions+=5;NFSU2_TR(0x75021a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75021d:{NFSU2_TR(0x75021d);
__builtin_memmove((R+28),(R+0),4);
}
B75021f:{NFSU2_TR(0x75021f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B750221:{NFSU2_TR(0x750221);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750222:{NFSU2_TR(0x750222);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7501d5u);}goto L7501d5;}}
}
B750224:L750224:{c.instructions+=3;NFSU2_TR(0x750224);
__builtin_memmove(gp(0x8b7e28),(R+24),4);
}
B75022a:{NFSU2_TR(0x75022a);
__builtin_memmove(gp(0x8b7e24),(R+12),4);
}
B750230:{NFSU2_TR(0x750230);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750235ull));
TAIL_STATIC(0x74b740u,74b);
}
B750235:L750235:{c.instructions+=2;NFSU2_TR(0x750235);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750236:{NFSU2_TR(0x750236);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75023bull));
TAIL_STATIC(0x74b7e0u,74b);
}
B75023b:L75023b:{c.instructions+=12;NFSU2_TR(0x75023b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75023d:{NFSU2_TR(0x75023d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B750241:{NFSU2_TR(0x750241);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750242:{NFSU2_TR(0x750242);
u8 U[6];
w4(U+0,u32(u32(u32(0x32ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B750247:{NFSU2_TR(0x750247);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750248:{NFSU2_TR(0x750248);
u8 U[6];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B75024f:{NFSU2_TR(0x75024f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750253:{NFSU2_TR(0x750253);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750257:{NFSU2_TR(0x750257);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75025b:{NFSU2_TR(0x75025b);
u8 U[5];
w4(U+0,u32(u32(u32(0x36ull))+u32(r4(R+16))));
w1(U+4,u8(0x27ull));
s1(u32(r4(U+0)),r1(U+4));
}
B750260:{NFSU2_TR(0x750260);
u8 U[5];
w4(U+0,u32(u32(u32(0x37ull))+u32(r4(R+16))));
w1(U+4,u8(0xfull));
s1(u32(r4(U+0)),r1(U+4));
}
B750265:{NFSU2_TR(0x750265);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75026aull));
TAIL_STATIC(0x74a380u,74a);
}
B75026a:L75026a:{c.instructions+=26;NFSU2_TR(0x75026a);
w1(R+4,u8(0xffull));
}
B75026c:{NFSU2_TR(0x75026c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750270:{NFSU2_TR(0x750270);
u8 U[5];
w4(U+0,u32(u32(u32(0x2bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B750274:{NFSU2_TR(0x750274);
u8 U[5];
w4(U+0,u32(u32(u32(0x2aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B750278:{NFSU2_TR(0x750278);
u8 U[5];
w4(U+0,u32(u32(u32(0x29ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75027c:{NFSU2_TR(0x75027c);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B750280:{NFSU2_TR(0x750280);
u8 U[6];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B750285:{NFSU2_TR(0x750285);
u8 U[4];
w4(U+0,u32(0x74f6b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75028a:{NFSU2_TR(0x75028a);
u8 U[6];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B750291:{NFSU2_TR(0x750291);
u8 U[5];
w4(U+0,u32(u32(u32(0x2aull))+u32(r4(R+16))));
w1(U+4,u8(0x27ull));
s1(u32(r4(U+0)),r1(U+4));
}
B750296:{NFSU2_TR(0x750296);
u8 U[5];
w4(U+0,u32(u32(u32(0x2bull))+u32(r4(R+16))));
w1(U+4,u8(0xfull));
s1(u32(r4(U+0)),r1(U+4));
}
B75029b:{NFSU2_TR(0x75029b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75029f:{NFSU2_TR(0x75029f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B7502a2:{NFSU2_TR(0x7502a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B7502a4:{NFSU2_TR(0x7502a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7502a8:{NFSU2_TR(0x7502a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7502a9:{NFSU2_TR(0x7502a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7502ac:{NFSU2_TR(0x7502ac);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7502ae:{NFSU2_TR(0x7502ae);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7502b0:{NFSU2_TR(0x7502b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7502b3:{NFSU2_TR(0x7502b3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7502b5:{NFSU2_TR(0x7502b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7502b6:{NFSU2_TR(0x7502b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7502b9:{NFSU2_TR(0x7502b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7502bc:{NFSU2_TR(0x7502bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7502bf:{NFSU2_TR(0x7502bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7502c4ull));
TAIL_STATIC(0x74a960u,74a);
}
B7502c4:L7502c4:{c.instructions+=2;NFSU2_TR(0x7502c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7502c5:{NFSU2_TR(0x7502c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7502caull));
TAIL_STATIC(0x74b870u,74b);
}
B7502ca:L7502ca:{c.instructions+=3;NFSU2_TR(0x7502ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B7502cd:{NFSU2_TR(0x7502cd);
__builtin_memmove((R+8),(R+24),4);
}
B7502cf:{NFSU2_TR(0x7502cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7502d4ull));
TAIL_STATIC(0x74f640u,74f);
}
B7502d4:L7502d4:{c.instructions+=3;NFSU2_TR(0x7502d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7502d5:{NFSU2_TR(0x7502d5);
__builtin_memmove((R+0),(R+24),4);
}
B7502d7:{NFSU2_TR(0x7502d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7502d8:L7502d8:{c.instructions+=4;NFSU2_TR(0x7502d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7502dc:{NFSU2_TR(0x7502dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7502dd:{NFSU2_TR(0x7502dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7502de:{NFSU2_TR(0x7502de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7502e3ull));
TAIL_STATIC(0x76115eu,761);
}
B7502e3:L7502e3:{c.instructions+=2;NFSU2_TR(0x7502e3);
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
B7502e6:{NFSU2_TR(0x7502e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7502f0:L7502f0:{c.instructions+=4;NFSU2_TR(0x7502f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7502f1:{NFSU2_TR(0x7502f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7502f5:{NFSU2_TR(0x7502f5);
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
B7502f7:{NFSU2_TR(0x7502f7);
if(r1(R+518)){{goto L75038b;}}
}
B7502fd:L7502fd:{c.instructions+=3;NFSU2_TR(0x7502fd);
__builtin_memmove((R+0),gp(0x8b7e24),4);
}
B750302:{NFSU2_TR(0x750302);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B750305:{NFSU2_TR(0x750305);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75030f;}}
}
B750307:L750307:{c.instructions+=4;NFSU2_TR(0x750307);
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
B750308:{NFSU2_TR(0x750308);
__builtin_memmove(gp(0x8b7e24),(R+0),4);
}
B75030d:{NFSU2_TR(0x75030d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75030e:{NFSU2_TR(0x75030e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75030f:L75030f:{c.instructions+=5;NFSU2_TR(0x75030f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750312:{NFSU2_TR(0x750312);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B750314:{NFSU2_TR(0x750314);
s4(0x8b7e28,u32(0x0ull));
}
B75031e:{NFSU2_TR(0x75031e);
s4(0x8b7e24,u32(0x0ull));
}
B750328:{NFSU2_TR(0x750328);
if(r1(R+518)){{goto L750357;}}
}
B75032a:L75032a:{c.instructions+=1;NFSU2_TR(0x75032a);
__builtin_memmove((R+12),(R+12),4);
}
B750330:L750330:{c.instructions+=7;NFSU2_TR(0x750330);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750333:{NFSU2_TR(0x750333);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B750336:{NFSU2_TR(0x750336);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750337:{NFSU2_TR(0x750337);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B75033a:{NFSU2_TR(0x75033a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75033b:{NFSU2_TR(0x75033b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75033c:{NFSU2_TR(0x75033c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750341ull));
TAIL_STATIC(0x74fd20u,74f);
}
B750341:L750341:{c.instructions+=5;NFSU2_TR(0x750341);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B750344:{NFSU2_TR(0x750344);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750345:{NFSU2_TR(0x750345);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750347:{NFSU2_TR(0x750347);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750348:{NFSU2_TR(0x750348);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75034dull));
TAIL_STATIC(0x74f6b0u,74f);
}
B75034d:L75034d:{c.instructions+=4;NFSU2_TR(0x75034d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750350:{NFSU2_TR(0x750350);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B750353:{NFSU2_TR(0x750353);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B750355:{NFSU2_TR(0x750355);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750330u);}goto L750330;}}
}
B750357:L750357:{c.instructions+=2;NFSU2_TR(0x750357);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750358:{NFSU2_TR(0x750358);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75035dull));
TAIL_STATIC(0x74b7e0u,74b);
}
B75035d:L75035d:{c.instructions+=4;NFSU2_TR(0x75035d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750360:{NFSU2_TR(0x750360);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750361:{NFSU2_TR(0x750361);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750368:{NFSU2_TR(0x750368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75036dull));
TAIL_STATIC(0x74a2d0u,74a);
}
B75036d:L75036d:{c.instructions+=2;NFSU2_TR(0x75036d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75036e:{NFSU2_TR(0x75036e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750373ull));
TAIL_STATIC(0x74b870u,74b);
}
B750373:L750373:{c.instructions+=2;NFSU2_TR(0x750373);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750374:{NFSU2_TR(0x750374);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750379ull));
TAIL_STATIC(0x74b770u,74b);
}
B750379:L750379:{c.instructions+=3;NFSU2_TR(0x750379);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75037c:{NFSU2_TR(0x75037c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75037d:{NFSU2_TR(0x75037d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750382ull));
TAIL_STATIC(0x598ec0u,598);
}
B750382:L750382:{c.instructions+=2;NFSU2_TR(0x750382);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750383:{NFSU2_TR(0x750383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750388ull));
TAIL_STATIC(0x598ec0u,598);
}
B750388:L750388:{c.instructions+=1;NFSU2_TR(0x750388);
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
B75038b:L75038b:{c.instructions+=2;NFSU2_TR(0x75038b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75038c:{NFSU2_TR(0x75038c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750390:L750390:{c.instructions+=11;NFSU2_TR(0x750390);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B750393:{NFSU2_TR(0x750393);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B750397:{NFSU2_TR(0x750397);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750398:{NFSU2_TR(0x750398);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75039c:{NFSU2_TR(0x75039c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75039d:{NFSU2_TR(0x75039d);
u8 U[4];
w4(U+0,u32(0x20002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7503a2:{NFSU2_TR(0x7503a2);
u8 U[4];
w4(U+0,u32(0x10004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7503a7:{NFSU2_TR(0x7503a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7503a8:{NFSU2_TR(0x7503a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7503a9:{NFSU2_TR(0x7503a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7503b1:{NFSU2_TR(0x7503b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7503b6ull));
TAIL_STATIC(0x770d28u,770);
}
B7503b6:L7503b6:{c.instructions+=2;NFSU2_TR(0x7503b6);
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
B7503b8:{NFSU2_TR(0x7503b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7503dd;}}
}
B7503ba:L7503ba:{c.instructions+=15;NFSU2_TR(0x7503ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7503be:{NFSU2_TR(0x7503be);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7503c2:{NFSU2_TR(0x7503c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7503c3:{NFSU2_TR(0x7503c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7503c7:{NFSU2_TR(0x7503c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7503c8:{NFSU2_TR(0x7503c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7503cc:{NFSU2_TR(0x7503cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7503cd:{NFSU2_TR(0x7503cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7503d1:{NFSU2_TR(0x7503d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7503d2:{NFSU2_TR(0x7503d2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7503d4:{NFSU2_TR(0x7503d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7503d5:{NFSU2_TR(0x7503d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7503d6:{NFSU2_TR(0x7503d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7503d7:{NFSU2_TR(0x7503d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7503d8:{NFSU2_TR(0x7503d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7503ddull));
TAIL_STATIC(0x770d22u,770);
}
B7503dd:L7503dd:{c.instructions+=2;NFSU2_TR(0x7503dd);
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
B7503e0:{NFSU2_TR(0x7503e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7503f0:L7503f0:{c.instructions+=11;NFSU2_TR(0x7503f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7503f1:{NFSU2_TR(0x7503f1);
__builtin_memmove((R+20),(R+16),4);
}
B7503f3:{NFSU2_TR(0x7503f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B7503f6:{NFSU2_TR(0x7503f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x12cull))));
}
B7503fc:{NFSU2_TR(0x7503fc);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B750401:{NFSU2_TR(0x750401);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750402:{NFSU2_TR(0x750402);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750409:{NFSU2_TR(0x750409);
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
B75040b:{NFSU2_TR(0x75040b);
u8 U[4];
w4(U+0,u32(0x7d2fa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750410:{NFSU2_TR(0x750410);
w4(R+4,u32(0x47ull));
}
B750415:{NFSU2_TR(0x750415);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B750419:L750419:{c.instructions+=1;NFSU2_TR(0x750419);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L75041b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750419u);}goto L750419;}
}
B75041b:L75041b:{c.instructions+=9;NFSU2_TR(0x75041b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75041e:{NFSU2_TR(0x75041e);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B750422:{NFSU2_TR(0x750422);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750423:{NFSU2_TR(0x750423);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750425:{NFSU2_TR(0x750425);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750427:{NFSU2_TR(0x750427);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750429:{NFSU2_TR(0x750429);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75042a:{NFSU2_TR(0x75042a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x11cull));
s4(u32(r4(U+0)),r4(U+4));
}
B750432:{NFSU2_TR(0x750432);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750437ull));
TAIL_STATIC(0x770d34u,770);
}
B750437:L750437:{c.instructions+=2;NFSU2_TR(0x750437);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B750439:{NFSU2_TR(0x750439);
if(r1(R+518)){{goto L75044f;}}
}
B75043b:L75043b:{c.instructions+=3;NFSU2_TR(0x75043b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B75043e:{NFSU2_TR(0x75043e);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750445:{NFSU2_TR(0x750445);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75044aull));
TAIL_STATIC(0x76115eu,761);
}
B75044a:L75044a:{c.instructions+=4;NFSU2_TR(0x75044a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75044b:{NFSU2_TR(0x75044b);
__builtin_memmove((R+16),(R+20),4);
}
B75044d:{NFSU2_TR(0x75044d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75044e:{NFSU2_TR(0x75044e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75044f:L75044f:{c.instructions+=3;NFSU2_TR(0x75044f);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750456:{NFSU2_TR(0x750456);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75045a:{NFSU2_TR(0x75045a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75045full));
TAIL_STATIC(0x76115eu,761);
}
B75045f:L75045f:{c.instructions+=4;NFSU2_TR(0x75045f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B750460:{NFSU2_TR(0x750460);
__builtin_memmove((R+16),(R+20),4);
}
B750462:{NFSU2_TR(0x750462);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B750463:{NFSU2_TR(0x750463);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750470:L750470:{c.instructions+=10;NFSU2_TR(0x750470);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750471:{NFSU2_TR(0x750471);
__builtin_memmove((R+20),(R+16),4);
}
B750473:{NFSU2_TR(0x750473);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B750476:{NFSU2_TR(0x750476);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x47cull))));
}
B75047c:{NFSU2_TR(0x75047c);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B750481:{NFSU2_TR(0x750481);
u8 U[8];
w4(U+0,u32(u32(u32(0x478ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750488:{NFSU2_TR(0x750488);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75048a:{NFSU2_TR(0x75048a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75048b:{NFSU2_TR(0x75048b);
w4(R+4,u32(0x11cull));
}
B750490:{NFSU2_TR(0x750490);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B750494:L750494:{c.instructions+=1;NFSU2_TR(0x750494);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L750496;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750494u);}goto L750494;}
}
B750496:L750496:{c.instructions+=11;NFSU2_TR(0x750496);
w4(R+0,u32(0x1ull));
}
B75049b:{NFSU2_TR(0x75049b);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75049f:{NFSU2_TR(0x75049f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7504a3:{NFSU2_TR(0x7504a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7504a7:{NFSU2_TR(0x7504a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x470ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7504af:{NFSU2_TR(0x7504af);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7504b7:{NFSU2_TR(0x7504b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7504bf:{NFSU2_TR(0x7504bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7504c7:{NFSU2_TR(0x7504c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x70ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7504cf:{NFSU2_TR(0x7504cf);
__builtin_memmove((R+0),(R+24),4);
}
B7504d1:{NFSU2_TR(0x7504d1);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B7504d3:L7504d3:{c.instructions+=5;NFSU2_TR(0x7504d3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7504d5:{NFSU2_TR(0x7504d5);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7504d8:{NFSU2_TR(0x7504d8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7504d9:{NFSU2_TR(0x7504d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7504db:{NFSU2_TR(0x7504db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7504d3u);}goto L7504d3;}}
}
B7504dd:L7504dd:{c.instructions+=2;NFSU2_TR(0x7504dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7504e1:{NFSU2_TR(0x7504e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7504e4:L7504e4:{c.instructions+=4;NFSU2_TR(0x7504e4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7504e6:{NFSU2_TR(0x7504e6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7504e7:{NFSU2_TR(0x7504e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7504e9:{NFSU2_TR(0x7504e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7504e4u);}goto L7504e4;}}
}
B7504eb:L7504eb:{c.instructions+=13;NFSU2_TR(0x7504eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7504ee:{NFSU2_TR(0x7504ee);
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
B7504f0:{NFSU2_TR(0x7504f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7504f4:{NFSU2_TR(0x7504f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7504f8:{NFSU2_TR(0x7504f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7504f9:{NFSU2_TR(0x7504f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7504fc:{NFSU2_TR(0x7504fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7504fd:{NFSU2_TR(0x7504fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750500:{NFSU2_TR(0x750500);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B750507:{NFSU2_TR(0x750507);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750508:{NFSU2_TR(0x750508);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750509:{NFSU2_TR(0x750509);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75050a:{NFSU2_TR(0x75050a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75050full));
TAIL_STATIC(0x770d3au,770);
}
B75050f:L75050f:{c.instructions+=2;NFSU2_TR(0x75050f);
u8 U[8];
w4(U+0,u32(u32(u32(0x47cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750516:{NFSU2_TR(0x750516);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75051bull));
TAIL_STATIC(0x76115eu,761);
}
B75051b:L75051b:{c.instructions+=4;NFSU2_TR(0x75051b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75051c:{NFSU2_TR(0x75051c);
__builtin_memmove((R+16),(R+20),4);
}
B75051e:{NFSU2_TR(0x75051e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75051f:{NFSU2_TR(0x75051f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750520:L750520:{c.instructions+=5;NFSU2_TR(0x750520);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B750526:{NFSU2_TR(0x750526);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B75052b:{NFSU2_TR(0x75052b);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750532:{NFSU2_TR(0x750532);
u8 U[16];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75053a:{NFSU2_TR(0x75053a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L750697;}}
}
B750540:L750540:{c.instructions+=4;NFSU2_TR(0x750540);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750547:{NFSU2_TR(0x750547);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75054c:{NFSU2_TR(0x75054c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75054d:{NFSU2_TR(0x75054d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75075c;}}
}
B750553:L750553:{c.instructions+=6;NFSU2_TR(0x750553);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750554:{NFSU2_TR(0x750554);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75055b:{NFSU2_TR(0x75055b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750561:{NFSU2_TR(0x750561);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B750564:{NFSU2_TR(0x750564);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750565:{NFSU2_TR(0x750565);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7505ae;}}
}
B750567:L750567:{c.instructions+=4;NFSU2_TR(0x750567);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75056d:{NFSU2_TR(0x75056d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x84ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750573:{NFSU2_TR(0x750573);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750574:{NFSU2_TR(0x750574);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750579ull));
TAIL_STATIC(0x770d2eu,770);
}
B750579:L750579:{c.instructions+=8;NFSU2_TR(0x750579);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75057f:{NFSU2_TR(0x75057f);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750581:{NFSU2_TR(0x750581);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750583:{NFSU2_TR(0x750583);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750584:{NFSU2_TR(0x750584);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+24)),r4(U+0));
}
B75058a:{NFSU2_TR(0x75058a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75058b:{NFSU2_TR(0x75058b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75058e:{NFSU2_TR(0x75058e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750593ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750390u);}goto L750390;}
}
B750593:L750593:{c.instructions+=6;NFSU2_TR(0x750593);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B750596:{NFSU2_TR(0x750596);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B750597:{NFSU2_TR(0x750597);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B750598:{NFSU2_TR(0x750598);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750599:{NFSU2_TR(0x750599);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7505a0:{NFSU2_TR(0x7505a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7505a5ull));
TAIL_STATIC(0x76115eu,761);
}
B7505a5:L7505a5:{c.instructions+=2;NFSU2_TR(0x7505a5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7505ab:{NFSU2_TR(0x7505ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7505ae:L7505ae:{c.instructions+=3;NFSU2_TR(0x7505ae);
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
B7505b1:{NFSU2_TR(0x7505b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7505b2:{NFSU2_TR(0x7505b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L750614;}}
}
B7505b4:L7505b4:{c.instructions+=4;NFSU2_TR(0x7505b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7505ba:{NFSU2_TR(0x7505ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x84ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7505c0:{NFSU2_TR(0x7505c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7505c1:{NFSU2_TR(0x7505c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7505c6ull));
TAIL_STATIC(0x770d2eu,770);
}
B7505c6:L7505c6:{c.instructions+=8;NFSU2_TR(0x7505c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7505c9:{NFSU2_TR(0x7505c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7505cf:{NFSU2_TR(0x7505cf);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7505d1:{NFSU2_TR(0x7505d1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7505d3:{NFSU2_TR(0x7505d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7505d4:{NFSU2_TR(0x7505d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7505d5:{NFSU2_TR(0x7505d5);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+20)),r4(U+0));
}
B7505dc:{NFSU2_TR(0x7505dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7505e1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750390u);}goto L750390;}
}
B7505e1:L7505e1:{c.instructions+=3;NFSU2_TR(0x7505e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7505e4:{NFSU2_TR(0x7505e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7505e6:{NFSU2_TR(0x7505e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L750689;}}
}
B7505ec:L7505ec:{c.instructions+=7;NFSU2_TR(0x7505ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7505ed:{NFSU2_TR(0x7505ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7505f0:{NFSU2_TR(0x7505f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7505f6:{NFSU2_TR(0x7505f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7505f7:{NFSU2_TR(0x7505f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7505fd:{NFSU2_TR(0x7505fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7505fe:{NFSU2_TR(0x7505fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750603ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750470u);}goto L750470;}
}
B750603:L750603:{c.instructions+=4;NFSU2_TR(0x750603);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B750606:{NFSU2_TR(0x750606);
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
B750608:{NFSU2_TR(0x750608);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75060e:{NFSU2_TR(0x75060e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L750747;}}
}
B750614:L750614:{c.instructions+=4;NFSU2_TR(0x750614);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75061a:{NFSU2_TR(0x75061a);
w4(R+24,u32(0x5ull));
}
B75061f:{NFSU2_TR(0x75061f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B750621:{NFSU2_TR(0x750621);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L750693;}}
}
B750623:L750623:{c.instructions+=3;NFSU2_TR(0x750623);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B750626:{NFSU2_TR(0x750626);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750627:{NFSU2_TR(0x750627);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75062cull));
TAIL_STATIC(0x757e20u,757);
}
B75062c:L75062c:{c.instructions+=3;NFSU2_TR(0x75062c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75062f:{NFSU2_TR(0x75062f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B750632:{NFSU2_TR(0x750632);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7506ac;}}
}
B750634:L750634:{c.instructions+=3;NFSU2_TR(0x750634);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75063a:{NFSU2_TR(0x75063a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75063c:{NFSU2_TR(0x75063c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7506ac;}}
}
B75063e:L75063e:{c.instructions+=5;NFSU2_TR(0x75063e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750641:{NFSU2_TR(0x750641);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750643:{NFSU2_TR(0x750643);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750644:{NFSU2_TR(0x750644);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75064e:{NFSU2_TR(0x75064e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750653ull));
TAIL_STATIC(0x757910u,757);
}
B750653:L750653:{c.instructions+=5;NFSU2_TR(0x750653);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750659:{NFSU2_TR(0x750659);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x84ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75065f:{NFSU2_TR(0x75065f);
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
B750662:{NFSU2_TR(0x750662);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750663:{NFSU2_TR(0x750663);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750668ull));
TAIL_STATIC(0x770d2eu,770);
}
B750668:L750668:{c.instructions+=8;NFSU2_TR(0x750668);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75066e:{NFSU2_TR(0x75066e);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750670:{NFSU2_TR(0x750670);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750672:{NFSU2_TR(0x750672);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750673:{NFSU2_TR(0x750673);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+24)),r4(U+0));
}
B750679:{NFSU2_TR(0x750679);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75067a:{NFSU2_TR(0x75067a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75067d:{NFSU2_TR(0x75067d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750682ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750390u);}goto L750390;}
}
B750682:L750682:{c.instructions+=3;NFSU2_TR(0x750682);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B750685:{NFSU2_TR(0x750685);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B750687:{NFSU2_TR(0x750687);
if(r1(R+518)){{goto L750693;}}
}
B750689:L750689:{c.instructions+=1;NFSU2_TR(0x750689);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750693:L750693:{c.instructions+=3;NFSU2_TR(0x750693);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B750694:{NFSU2_TR(0x750694);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B750695:{NFSU2_TR(0x750695);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B750696:L750696:{c.instructions+=1;NFSU2_TR(0x750696);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750697:L750697:{c.instructions+=2;NFSU2_TR(0x750697);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75069e:{NFSU2_TR(0x75069e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7506a3ull));
TAIL_STATIC(0x76115eu,761);
}
B7506a3:L7506a3:{c.instructions+=2;NFSU2_TR(0x7506a3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7506a9:{NFSU2_TR(0x7506a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7506ac:L7506ac:{c.instructions+=2;NFSU2_TR(0x7506ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7506b2:{NFSU2_TR(0x7506b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750693u);}goto L750693;}}
}
B7506b4:L7506b4:{c.instructions+=3;NFSU2_TR(0x7506b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7506b7:{NFSU2_TR(0x7506b7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7506b8:{NFSU2_TR(0x7506b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7506bdull));
TAIL_STATIC(0x757e20u,757);
}
B7506bd:L7506bd:{c.instructions+=3;NFSU2_TR(0x7506bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7506c0:{NFSU2_TR(0x7506c0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7506c3:{NFSU2_TR(0x7506c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750693u);}goto L750693;}}
}
B7506c5:L7506c5:{c.instructions+=3;NFSU2_TR(0x7506c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7506cb:{NFSU2_TR(0x7506cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7506cd:{NFSU2_TR(0x7506cd);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750693u);}goto L750693;}}
}
B7506cf:L7506cf:{c.instructions+=5;NFSU2_TR(0x7506cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7506d2:{NFSU2_TR(0x7506d2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7506d4:{NFSU2_TR(0x7506d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7506d5:{NFSU2_TR(0x7506d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7506df:{NFSU2_TR(0x7506df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7506e4ull));
TAIL_STATIC(0x757910u,757);
}
B7506e4:L7506e4:{c.instructions+=5;NFSU2_TR(0x7506e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7506ea:{NFSU2_TR(0x7506ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x84ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7506f0:{NFSU2_TR(0x7506f0);
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
B7506f3:{NFSU2_TR(0x7506f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7506f4:{NFSU2_TR(0x7506f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7506f9ull));
TAIL_STATIC(0x770d2eu,770);
}
B7506f9:L7506f9:{c.instructions+=8;NFSU2_TR(0x7506f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7506fc:{NFSU2_TR(0x7506fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B750702:{NFSU2_TR(0x750702);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750704:{NFSU2_TR(0x750704);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750706:{NFSU2_TR(0x750706);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750707:{NFSU2_TR(0x750707);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750708:{NFSU2_TR(0x750708);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+20)),r4(U+0));
}
B75070f:{NFSU2_TR(0x75070f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750714ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750390u);}goto L750390;}
}
B750714:L750714:{c.instructions+=3;NFSU2_TR(0x750714);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B750717:{NFSU2_TR(0x750717);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B750719:{NFSU2_TR(0x750719);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750689u);}goto L750689;}}
}
B75071f:L75071f:{c.instructions+=7;NFSU2_TR(0x75071f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750720:{NFSU2_TR(0x750720);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B750723:{NFSU2_TR(0x750723);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((R+8),(U+0),4);
}
B750729:{NFSU2_TR(0x750729);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75072a:{NFSU2_TR(0x75072a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75072b:{NFSU2_TR(0x75072b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750731:{NFSU2_TR(0x750731);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750736ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750470u);}goto L750470;}
}
B750736:L750736:{c.instructions+=4;NFSU2_TR(0x750736);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B750739:{NFSU2_TR(0x750739);
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
B75073b:{NFSU2_TR(0x75073b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750741:{NFSU2_TR(0x750741);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750693u);}goto L750693;}}
}
B750747:L750747:{c.instructions+=3;NFSU2_TR(0x750747);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B75074a:{NFSU2_TR(0x75074a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75074b:{NFSU2_TR(0x75074b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750750ull));
TAIL_STATIC(0x770d2eu,770);
}
B750750:L750750:{c.instructions+=2;NFSU2_TR(0x750750);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+20)),r4(U+0));
}
B750757:{NFSU2_TR(0x750757);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750689u);}goto L750689;}
}
B75075c:L75075c:{c.instructions+=3;NFSU2_TR(0x75075c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75075f:{NFSU2_TR(0x75075f);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B750766:{NFSU2_TR(0x750766);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75079d;}}
}
B750768:L750768:{c.instructions+=3;NFSU2_TR(0x750768);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75076e:{NFSU2_TR(0x75076e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B750771:{NFSU2_TR(0x750771);
if(r1(R+518)){{goto L75077c;}}
}
B750773:L750773:{c.instructions+=2;NFSU2_TR(0x750773);
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
B750776:{NFSU2_TR(0x750776);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750696u);}goto L750696;}}
}
B75077c:L75077c:{c.instructions+=6;NFSU2_TR(0x75077c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750783:{NFSU2_TR(0x750783);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750785:{NFSU2_TR(0x750785);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750787:{NFSU2_TR(0x750787);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750788:{NFSU2_TR(0x750788);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75078e:{NFSU2_TR(0x75078e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750793ull));
TAIL_STATIC(0x770d40u,770);
}
B750793:L750793:{c.instructions+=3;NFSU2_TR(0x750793);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750799:{NFSU2_TR(0x750799);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75079b:{NFSU2_TR(0x75079b);
{goto L7507a2;}
}
B75079d:L75079d:{c.instructions+=1;NFSU2_TR(0x75079d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7507a2:L7507a2:{c.instructions+=1;NFSU2_TR(0x7507a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750696u);}goto L750696;}}
}
B7507a8:L7507a8:{c.instructions+=3;NFSU2_TR(0x7507a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7507ae:{NFSU2_TR(0x7507ae);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7507b1:{NFSU2_TR(0x7507b1);
if(r1(R+518)){{goto L75085f;}}
}
B7507b7:L7507b7:{c.instructions+=2;NFSU2_TR(0x7507b7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7507ba:{NFSU2_TR(0x7507ba);
if(r1(R+518)){{goto L75085f;}}
}
B7507c0:L7507c0:{c.instructions+=2;NFSU2_TR(0x7507c0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7507c3:{NFSU2_TR(0x7507c3);
if(r1(R+518)){{goto L7507ce;}}
}
B7507c5:L7507c5:{c.instructions+=2;NFSU2_TR(0x7507c5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7507c8:{NFSU2_TR(0x7507c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750696u);}goto L750696;}}
}
B7507ce:L7507ce:{c.instructions+=3;NFSU2_TR(0x7507ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7507d4:{NFSU2_TR(0x7507d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7507d5:{NFSU2_TR(0x7507d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7507daull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7503f0u);}goto L7503f0;}
}
B7507da:L7507da:{c.instructions+=3;NFSU2_TR(0x7507da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7507dd:{NFSU2_TR(0x7507dd);
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
B7507e0:{NFSU2_TR(0x7507e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75081d;}}
}
B7507e2:L7507e2:{c.instructions+=3;NFSU2_TR(0x7507e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7507e8:{NFSU2_TR(0x7507e8);
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
B7507eb:{NFSU2_TR(0x7507eb);
if(r1(R+518)){{goto L7507f3;}}
}
B7507ed:L7507ed:{c.instructions+=2;NFSU2_TR(0x7507ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7507ee:{NFSU2_TR(0x7507ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7507f3ull));
TAIL_STATIC(0x770d2eu,770);
}
B7507f3:L7507f3:{c.instructions+=5;NFSU2_TR(0x7507f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B7507fd:{NFSU2_TR(0x7507fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750807:{NFSU2_TR(0x750807);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750808:{NFSU2_TR(0x750808);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75080f:{NFSU2_TR(0x75080f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750814ull));
TAIL_STATIC(0x76115eu,761);
}
B750814:L750814:{c.instructions+=2;NFSU2_TR(0x750814);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75081a:{NFSU2_TR(0x75081a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75081d:L75081d:{c.instructions+=5;NFSU2_TR(0x75081d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75081e:{NFSU2_TR(0x75081e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B750822:{NFSU2_TR(0x750822);
u8 U[4];
w4(U+0,u32(0x7d2fb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750827:{NFSU2_TR(0x750827);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750828:{NFSU2_TR(0x750828);
u8 U[4];
__builtin_memmove((U+0),gp(0x78339c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75082eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75082e:L75082e:{c.instructions+=5;NFSU2_TR(0x75082e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B750831:{NFSU2_TR(0x750831);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B750835:{NFSU2_TR(0x750835);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750836:{NFSU2_TR(0x750836);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750837:{NFSU2_TR(0x750837);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75083cull));
TAIL_STATIC(0x757910u,757);
}
B75083c:L75083c:{c.instructions+=5;NFSU2_TR(0x75083c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B75083f:{NFSU2_TR(0x75083f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750849:{NFSU2_TR(0x750849);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75084a:{NFSU2_TR(0x75084a);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750851:{NFSU2_TR(0x750851);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750856ull));
TAIL_STATIC(0x76115eu,761);
}
B750856:L750856:{c.instructions+=2;NFSU2_TR(0x750856);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75085c:{NFSU2_TR(0x75085c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75085f:L75085f:{c.instructions+=3;NFSU2_TR(0x75085f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750865:{NFSU2_TR(0x750865);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750866:{NFSU2_TR(0x750866);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75086bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7503f0u);}goto L7503f0;}
}
B75086b:L75086b:{c.instructions+=3;NFSU2_TR(0x75086b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75086e:{NFSU2_TR(0x75086e);
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
B750871:{NFSU2_TR(0x750871);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7507e2u);}goto L7507e2;}}
}
B750877:L750877:{c.instructions+=5;NFSU2_TR(0x750877);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750878:{NFSU2_TR(0x750878);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75087c:{NFSU2_TR(0x75087c);
u8 U[4];
w4(U+0,u32(0x7d2fb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750881:{NFSU2_TR(0x750881);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750882:{NFSU2_TR(0x750882);
u8 U[4];
__builtin_memmove((U+0),gp(0x78339c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750888ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B750888:L750888:{c.instructions+=4;NFSU2_TR(0x750888);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75088e:{NFSU2_TR(0x75088e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B750891:{NFSU2_TR(0x750891);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B750894:{NFSU2_TR(0x750894);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7508c7;}}
}
B750896:L750896:{c.instructions+=5;NFSU2_TR(0x750896);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750899:{NFSU2_TR(0x750899);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75089d:{NFSU2_TR(0x75089d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75089e:{NFSU2_TR(0x75089e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75089f:{NFSU2_TR(0x75089f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7508a4ull));
TAIL_STATIC(0x757db0u,757);
}
B7508a4:L7508a4:{c.instructions+=5;NFSU2_TR(0x7508a4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7508a7:{NFSU2_TR(0x7508a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7508b1:{NFSU2_TR(0x7508b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7508b2:{NFSU2_TR(0x7508b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7508b9:{NFSU2_TR(0x7508b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7508beull));
TAIL_STATIC(0x76115eu,761);
}
B7508be:L7508be:{c.instructions+=2;NFSU2_TR(0x7508be);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7508c4:{NFSU2_TR(0x7508c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7508c7:L7508c7:{c.instructions+=5;NFSU2_TR(0x7508c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7508ca:{NFSU2_TR(0x7508ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7508ce:{NFSU2_TR(0x7508ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7508cf:{NFSU2_TR(0x7508cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7508d0:{NFSU2_TR(0x7508d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7508d5ull));
TAIL_STATIC(0x757cd0u,757);
}
B7508d5:L7508d5:{c.instructions+=5;NFSU2_TR(0x7508d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7508dc:{NFSU2_TR(0x7508dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7508df:{NFSU2_TR(0x7508df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7508e9:{NFSU2_TR(0x7508e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7508ea:{NFSU2_TR(0x7508ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7508efull));
TAIL_STATIC(0x76115eu,761);
}
B7508ef:L7508ef:{c.instructions+=2;NFSU2_TR(0x7508ef);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7508f5:{NFSU2_TR(0x7508f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750900:L750900:{c.instructions+=10;NFSU2_TR(0x750900);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x1cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B750903:{NFSU2_TR(0x750903);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750904:{NFSU2_TR(0x750904);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750905:{NFSU2_TR(0x750905);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750907:{NFSU2_TR(0x750907);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750909:{NFSU2_TR(0x750909);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75090b:{NFSU2_TR(0x75090b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75090d:{NFSU2_TR(0x75090d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B750911:{NFSU2_TR(0x750911);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750912:{NFSU2_TR(0x750912);
u8 U[4];
__builtin_memmove((U+0),gp(0x783330),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750918ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B750918:L750918:{c.instructions+=7;NFSU2_TR(0x750918);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75091c:{NFSU2_TR(0x75091c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((R+24),(U+0),4);
}
B75091f:{NFSU2_TR(0x75091f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750920:{NFSU2_TR(0x750920);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750922:{NFSU2_TR(0x750922);
u8 U[4];
w4(U+0,u32(0x750520ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750927:{NFSU2_TR(0x750927);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750929:{NFSU2_TR(0x750929);
u8 U[4];
__builtin_memmove((U+0),gp(0x783138),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75092full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75092f:L75092f:{c.instructions+=4;NFSU2_TR(0x75092f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750930:{NFSU2_TR(0x750930);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B750936:{NFSU2_TR(0x750936);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750937:{NFSU2_TR(0x750937);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75093cull));
TAIL_STATIC(0x770d46u,770);
}
B75093c:L75093c:{c.instructions+=2;NFSU2_TR(0x75093c);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
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
B75093f:{NFSU2_TR(0x75093f);
if(r1(R+518)){{goto L750991;}}
}
B750941:L750941:{c.instructions+=8;NFSU2_TR(0x750941);
__builtin_memmove((R+24),gp(0x783328),4);
}
B750947:{NFSU2_TR(0x750947);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750949:{NFSU2_TR(0x750949);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75094b:{NFSU2_TR(0x75094b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75094d:{NFSU2_TR(0x75094d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B750951:{NFSU2_TR(0x750951);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750952:{NFSU2_TR(0x750952);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8cull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75095c:{NFSU2_TR(0x75095c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75095eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75095e:L75095e:{c.instructions+=2;NFSU2_TR(0x75095e);
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
B750960:{NFSU2_TR(0x750960);
if(r1(R+518)){{goto L750991;}}
}
B750962:L750962:{c.instructions+=4;NFSU2_TR(0x750962);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750963:{NFSU2_TR(0x750963);
__builtin_memmove((R+12),gp(0x78332c),4);
}
B750969:{NFSU2_TR(0x750969);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75096a:{NFSU2_TR(0x75096a);
__builtin_memmove((R+28),gp(0x783334),4);
}
B750970:L750970:{c.instructions+=3;NFSU2_TR(0x750970);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B750974:{NFSU2_TR(0x750974);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750975:{NFSU2_TR(0x750975);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750977ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B750977:L750977:{c.instructions+=3;NFSU2_TR(0x750977);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75097b:{NFSU2_TR(0x75097b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75097c:{NFSU2_TR(0x75097c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75097eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75097e:L75097e:{c.instructions+=6;NFSU2_TR(0x75097e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750980:{NFSU2_TR(0x750980);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750982:{NFSU2_TR(0x750982);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750984:{NFSU2_TR(0x750984);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B750988:{NFSU2_TR(0x750988);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750989:{NFSU2_TR(0x750989);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75098bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75098b:L75098b:{c.instructions+=2;NFSU2_TR(0x75098b);
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
B75098d:{NFSU2_TR(0x75098d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750970u);}goto L750970;}}
}
B75098f:L75098f:{c.instructions+=2;NFSU2_TR(0x75098f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B750990:{NFSU2_TR(0x750990);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B750991:L750991:{c.instructions+=6;NFSU2_TR(0x750991);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750992:{NFSU2_TR(0x750992);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75099c:{NFSU2_TR(0x75099c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75099e:{NFSU2_TR(0x75099e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75099f:{NFSU2_TR(0x75099f);
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
B7509a2:{NFSU2_TR(0x7509a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7509b0:L7509b0:{c.instructions+=6;NFSU2_TR(0x7509b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7509b1:{NFSU2_TR(0x7509b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7509b2:{NFSU2_TR(0x7509b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7509b6:{NFSU2_TR(0x7509b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7509b9:{NFSU2_TR(0x7509b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7509ba:{NFSU2_TR(0x7509ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7509bfull));
TAIL_STATIC(0x757700u,757);
}
B7509bf:L7509bf:{c.instructions+=4;NFSU2_TR(0x7509bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7509c5:{NFSU2_TR(0x7509c5);
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
B7509c8:{NFSU2_TR(0x7509c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7509c9:{NFSU2_TR(0x7509c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7509ceull));
TAIL_STATIC(0x770d4cu,770);
}
B7509ce:L7509ce:{c.instructions+=8;NFSU2_TR(0x7509ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7509d4:{NFSU2_TR(0x7509d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7509d6:{NFSU2_TR(0x7509d6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7509d8:{NFSU2_TR(0x7509d8);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7509da:{NFSU2_TR(0x7509da);
w4(R+12,u32(0x9ull));
}
B7509df:{NFSU2_TR(0x7509df);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7509e0:{NFSU2_TR(0x7509e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7509e6:{NFSU2_TR(0x7509e6);
u8 U[4];
__builtin_memmove((U+0),gp(0x783378),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7509ecull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7509ec:L7509ec:{c.instructions+=2;NFSU2_TR(0x7509ec);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
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
B7509f2:{NFSU2_TR(0x7509f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L750a0d;}}
}
B7509f4:L7509f4:{c.instructions+=3;NFSU2_TR(0x7509f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7509f5:{NFSU2_TR(0x7509f5);
__builtin_memmove((R+28),gp(0x783150),4);
}
B7509fb:{NFSU2_TR(0x7509fb);
{goto L750a00;}
}
B750a00:L750a00:{c.instructions+=2;NFSU2_TR(0x750a00);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750a02:{NFSU2_TR(0x750a02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750a04ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B750a04:L750a04:{c.instructions+=2;NFSU2_TR(0x750a04);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
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
B750a0a:{NFSU2_TR(0x750a0a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750a00u);}goto L750a00;}}
}
B750a0c:L750a0c:{c.instructions+=1;NFSU2_TR(0x750a0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B750a0d:L750a0d:{c.instructions+=3;NFSU2_TR(0x750a0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750a0e:{NFSU2_TR(0x750a0e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750a10:{NFSU2_TR(0x750a10);
u8 U[4];
__builtin_memmove((U+0),gp(0x783258),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750a16ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B750a16:L750a16:{c.instructions+=2;NFSU2_TR(0x750a16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750a17:{NFSU2_TR(0x750a17);
u8 U[4];
__builtin_memmove((U+0),gp(0x783254),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750a1dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B750a1d:L750a1d:{c.instructions+=3;NFSU2_TR(0x750a1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750a1e:{NFSU2_TR(0x750a1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B750a1f:{NFSU2_TR(0x750a1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750a20:L750a20:{c.instructions+=17;NFSU2_TR(0x750a20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750a21:{NFSU2_TR(0x750a21);
__builtin_memmove((R+20),(R+16),4);
}
B750a23:{NFSU2_TR(0x750a23);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B750a26:{NFSU2_TR(0x750a26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x424ull))));
}
B750a2c:{NFSU2_TR(0x750a2c);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B750a31:{NFSU2_TR(0x750a31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750a32:{NFSU2_TR(0x750a32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750a33:{NFSU2_TR(0x750a33);
u8 U[8];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750a3a:{NFSU2_TR(0x750a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750a3d:{NFSU2_TR(0x750a3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B750a3f:{NFSU2_TR(0x750a3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750a40:{NFSU2_TR(0x750a40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B750a43:{NFSU2_TR(0x750a43);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750a47:{NFSU2_TR(0x750a47);
u8 U[1];
w1(U+0,u8(0x2aull));
s1(u32(r4(R+28)),r1(U+0));
}
B750a4a:{NFSU2_TR(0x750a4a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B750a4e:{NFSU2_TR(0x750a4e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B750a52:{NFSU2_TR(0x750a52);
if(r1(R+518)){{goto L750c16;}}
}
B750a58:L750a58:{c.instructions+=2;NFSU2_TR(0x750a58);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B750a5b:{NFSU2_TR(0x750a5b);
if(r1(R+518)){{goto L750c16;}}
}
B750a61:L750a61:{c.instructions+=3;NFSU2_TR(0x750a61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B750a64:{NFSU2_TR(0x750a64);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B750a67:{NFSU2_TR(0x750a67);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L750bcd;}}
}
B750a6d:L750a6d:{c.instructions+=1;NFSU2_TR(0x750a6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B750a70:L750a70:{c.instructions+=4;NFSU2_TR(0x750a70);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B750a72:{NFSU2_TR(0x750a72);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B750a73:{NFSU2_TR(0x750a73);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B750a75:{NFSU2_TR(0x750a75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750a70u);}goto L750a70;}}
}
B750a77:L750a77:{c.instructions+=4;NFSU2_TR(0x750a77);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B750a79:{NFSU2_TR(0x750a79);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B750a7c:{NFSU2_TR(0x750a7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B750a7e:{NFSU2_TR(0x750a7e);
if(r1(R+512)){{goto L750bcd;}}
}
B750a84:L750a84:{c.instructions+=6;NFSU2_TR(0x750a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B750a87:{NFSU2_TR(0x750a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750a8a:{NFSU2_TR(0x750a8a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B750a8c:{NFSU2_TR(0x750a8c);
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
B750a8e:{NFSU2_TR(0x750a8e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750a92:{NFSU2_TR(0x750a92);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L750bae;}}
}
B750a98:L750a98:{c.instructions+=1;NFSU2_TR(0x750a98);
{goto L750aa0;}
}
B750aa0:L750aa0:{c.instructions+=10;NFSU2_TR(0x750aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B750aa6:{NFSU2_TR(0x750aa6);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B750aaa:{NFSU2_TR(0x750aaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750aab:{NFSU2_TR(0x750aab);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B750aaf:{NFSU2_TR(0x750aaf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750ab0:{NFSU2_TR(0x750ab0);
u8 U[4];
w4(U+0,u32(0x20002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750ab5:{NFSU2_TR(0x750ab5);
u8 U[4];
w4(U+0,u32(0x10004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750aba:{NFSU2_TR(0x750aba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750abb:{NFSU2_TR(0x750abb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750abc:{NFSU2_TR(0x750abc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750ac1ull));
TAIL_STATIC(0x770d28u,770);
}
B750ac1:L750ac1:{c.instructions+=2;NFSU2_TR(0x750ac1);
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
B750ac3:{NFSU2_TR(0x750ac3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L750b9b;}}
}
B750ac9:L750ac9:{c.instructions+=3;NFSU2_TR(0x750ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B750acf:{NFSU2_TR(0x750acf);
w4(R+4,u32(0x100ull));
}
B750ad4:{NFSU2_TR(0x750ad4);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B750ad8:L750ad8:{c.instructions+=1;NFSU2_TR(0x750ad8);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L750ada;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750ad8u);}goto L750ad8;}
}
B750ada:L750ada:{c.instructions+=9;NFSU2_TR(0x750ada);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750ade:{NFSU2_TR(0x750ade);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B750ae2:{NFSU2_TR(0x750ae2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750ae3:{NFSU2_TR(0x750ae3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750ae5:{NFSU2_TR(0x750ae5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750ae6:{NFSU2_TR(0x750ae6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750ae7:{NFSU2_TR(0x750ae7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750ae8:{NFSU2_TR(0x750ae8);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x400ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750af0:{NFSU2_TR(0x750af0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750af5ull));
TAIL_STATIC(0x770d52u,770);
}
B750af5:L750af5:{c.instructions+=3;NFSU2_TR(0x750af5);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750afc:{NFSU2_TR(0x750afc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B750afe:{NFSU2_TR(0x750afe);
if(r1(R+518)){{goto L750b9b;}}
}
B750b04:L750b04:{c.instructions+=5;NFSU2_TR(0x750b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B750b07:{NFSU2_TR(0x750b07);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B750b0b:{NFSU2_TR(0x750b0b);
w4(R+28,u32(0x7d2fc4ull));
}
B750b10:{NFSU2_TR(0x750b10);
w4(R+4,u32(0xaull));
}
B750b15:{NFSU2_TR(0x750b15);
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
B750b17:L750b17:{c.instructions+=1;NFSU2_TR(0x750b17);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L750b19;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750b17u);}goto L750b17;}}
}
B750b19:L750b19:{c.instructions+=2;NFSU2_TR(0x750b19);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B750b1d:{NFSU2_TR(0x750b1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L750b83;}}
}
B750b1f:L750b1f:{c.instructions+=2;NFSU2_TR(0x750b1f);
__builtin_memmove((R+0),(R+12),4);
}
B750b21:{NFSU2_TR(0x750b21);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B750b24:L750b24:{c.instructions+=4;NFSU2_TR(0x750b24);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B750b26:{NFSU2_TR(0x750b26);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B750b27:{NFSU2_TR(0x750b27);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B750b29:{NFSU2_TR(0x750b29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750b24u);}goto L750b24;}}
}
B750b2b:L750b2b:{c.instructions+=5;NFSU2_TR(0x750b2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B750b2e:{NFSU2_TR(0x750b2e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B750b30:{NFSU2_TR(0x750b30);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B750b33:{NFSU2_TR(0x750b33);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B750b35:{NFSU2_TR(0x750b35);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L750bcd;}}
}
B750b3b:L750b3b:{c.instructions+=3;NFSU2_TR(0x750b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B750b3e:{NFSU2_TR(0x750b3e);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B750b42:{NFSU2_TR(0x750b42);
if(r1(R+518)){{goto L750b4b;}}
}
B750b44:L750b44:{c.instructions+=4;NFSU2_TR(0x750b44);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B750b47:{NFSU2_TR(0x750b47);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B750b49:{NFSU2_TR(0x750b49);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B750b4a:{NFSU2_TR(0x750b4a);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B750b4b:L750b4b:{c.instructions+=3;NFSU2_TR(0x750b4b);
__builtin_memmove((R+8),(R+24),4);
}
B750b4d:{NFSU2_TR(0x750b4d);
__builtin_memmove((R+0),(R+12),4);
}
B750b4f:{NFSU2_TR(0x750b4f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B750b51:L750b51:{c.instructions+=5;NFSU2_TR(0x750b51);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B750b53:{NFSU2_TR(0x750b53);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B750b56:{NFSU2_TR(0x750b56);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B750b57:{NFSU2_TR(0x750b57);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B750b59:{NFSU2_TR(0x750b59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750b51u);}goto L750b51;}}
}
B750b5b:L750b5b:{c.instructions+=2;NFSU2_TR(0x750b5b);
__builtin_memmove((R+0),(R+12),4);
}
B750b5d:{NFSU2_TR(0x750b5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B750b60:L750b60:{c.instructions+=4;NFSU2_TR(0x750b60);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B750b62:{NFSU2_TR(0x750b62);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B750b63:{NFSU2_TR(0x750b63);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B750b65:{NFSU2_TR(0x750b65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750b60u);}goto L750b60;}}
}
B750b67:L750b67:{c.instructions+=5;NFSU2_TR(0x750b67);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B750b69:{NFSU2_TR(0x750b69);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B750b6b:{NFSU2_TR(0x750b6b);
__builtin_memmove((R+0),(R+12),4);
}
B750b6d:{NFSU2_TR(0x750b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750b70:{NFSU2_TR(0x750b70);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B750b73:L750b73:{c.instructions+=4;NFSU2_TR(0x750b73);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B750b75:{NFSU2_TR(0x750b75);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B750b76:{NFSU2_TR(0x750b76);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B750b78:{NFSU2_TR(0x750b78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750b73u);}goto L750b73;}}
}
B750b7a:L750b7a:{c.instructions+=4;NFSU2_TR(0x750b7a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B750b7c:{NFSU2_TR(0x750b7c);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B750b7e:{NFSU2_TR(0x750b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750b81:{NFSU2_TR(0x750b81);
{goto L750b94;}
}
B750b83:L750b83:{c.instructions+=4;NFSU2_TR(0x750b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B750b86:{NFSU2_TR(0x750b86);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750b87:{NFSU2_TR(0x750b87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750b88:{NFSU2_TR(0x750b88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750b8dull));
TAIL_STATIC(0x75dd6fu,75d);
}
B750b8d:L750b8d:{c.instructions+=3;NFSU2_TR(0x750b8d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B750b90:{NFSU2_TR(0x750b90);
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
B750b92:{NFSU2_TR(0x750b92);
if(r1(R+518)){{goto L750be5;}}
}
B750b94:L750b94:{c.instructions+=2;NFSU2_TR(0x750b94);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B750b98:{NFSU2_TR(0x750b98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B750b9b:L750b9b:{c.instructions+=5;NFSU2_TR(0x750b9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750b9e:{NFSU2_TR(0x750b9e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B750b9f:{NFSU2_TR(0x750b9f);
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
B750ba1:{NFSU2_TR(0x750ba1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750ba5:{NFSU2_TR(0x750ba5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750aa0u);}goto L750aa0;}}
}
B750bab:L750bab:{c.instructions+=1;NFSU2_TR(0x750bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B750bae:L750bae:{c.instructions+=5;NFSU2_TR(0x750bae);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+28)),r1(U+0));
}
B750bb1:{NFSU2_TR(0x750bb1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B750bb5:{NFSU2_TR(0x750bb5);
w4(R+0,u32(0x1ull));
}
B750bba:{NFSU2_TR(0x750bba);
u8 U[8];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750bc1:{NFSU2_TR(0x750bc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750bc6ull));
TAIL_STATIC(0x76115eu,761);
}
B750bc6:L750bc6:{c.instructions+=6;NFSU2_TR(0x750bc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B750bc7:{NFSU2_TR(0x750bc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750bc8:{NFSU2_TR(0x750bc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B750bc9:{NFSU2_TR(0x750bc9);
__builtin_memmove((R+16),(R+20),4);
}
B750bcb:{NFSU2_TR(0x750bcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B750bcc:{NFSU2_TR(0x750bcc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750bcd:L750bcd:{c.instructions+=3;NFSU2_TR(0x750bcd);
w4(R+0,u32(0xfffffffaull));
}
B750bd2:{NFSU2_TR(0x750bd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750bd9:{NFSU2_TR(0x750bd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750bdeull));
TAIL_STATIC(0x76115eu,761);
}
B750bde:L750bde:{c.instructions+=6;NFSU2_TR(0x750bde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B750bdf:{NFSU2_TR(0x750bdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750be0:{NFSU2_TR(0x750be0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B750be1:{NFSU2_TR(0x750be1);
__builtin_memmove((R+16),(R+20),4);
}
B750be3:{NFSU2_TR(0x750be3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B750be4:{NFSU2_TR(0x750be4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750be5:L750be5:{c.instructions+=7;NFSU2_TR(0x750be5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750be9:{NFSU2_TR(0x750be9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750bec:{NFSU2_TR(0x750bec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750bee:{NFSU2_TR(0x750bee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750bef:{NFSU2_TR(0x750bef);
u8 U[4];
w4(U+0,u32(0x7d2fbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750bf4:{NFSU2_TR(0x750bf4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750bf5:{NFSU2_TR(0x750bf5);
u8 U[4];
__builtin_memmove((U+0),gp(0x78339c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750bfbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B750bfb:L750bfb:{c.instructions+=4;NFSU2_TR(0x750bfb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B750bfe:{NFSU2_TR(0x750bfe);
w4(R+0,u32(0x1ull));
}
B750c03:{NFSU2_TR(0x750c03);
u8 U[8];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750c0a:{NFSU2_TR(0x750c0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750c0full));
TAIL_STATIC(0x76115eu,761);
}
B750c0f:L750c0f:{c.instructions+=6;NFSU2_TR(0x750c0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B750c10:{NFSU2_TR(0x750c10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750c11:{NFSU2_TR(0x750c11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B750c12:{NFSU2_TR(0x750c12);
__builtin_memmove((R+16),(R+20),4);
}
B750c14:{NFSU2_TR(0x750c14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B750c15:{NFSU2_TR(0x750c15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750c16:L750c16:{c.instructions+=3;NFSU2_TR(0x750c16);
u8 U[8];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750c1d:{NFSU2_TR(0x750c1d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B750c20:{NFSU2_TR(0x750c20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750c25ull));
TAIL_STATIC(0x76115eu,761);
}
B750c25:L750c25:{c.instructions+=6;NFSU2_TR(0x750c25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B750c26:{NFSU2_TR(0x750c26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750c27:{NFSU2_TR(0x750c27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B750c28:{NFSU2_TR(0x750c28);
__builtin_memmove((R+16),(R+20),4);
}
B750c2a:{NFSU2_TR(0x750c2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B750c2b:{NFSU2_TR(0x750c2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750c30:L750c30:{c.instructions+=7;NFSU2_TR(0x750c30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B750c33:{NFSU2_TR(0x750c33);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B750c38:{NFSU2_TR(0x750c38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750c39:{NFSU2_TR(0x750c39);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B750c3d:{NFSU2_TR(0x750c3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750c41:{NFSU2_TR(0x750c41);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B750c48:{NFSU2_TR(0x750c48);
if(r1(R+518)){{goto L750c5d;}}
}
B750c4a:L750c4a:{c.instructions+=4;NFSU2_TR(0x750c4a);
w4(R+0,u32(0xfffffffeull));
}
B750c4f:{NFSU2_TR(0x750c4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750c50:{NFSU2_TR(0x750c50);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750c54:{NFSU2_TR(0x750c54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750c59ull));
TAIL_STATIC(0x76115eu,761);
}
B750c59:L750c59:{c.instructions+=2;NFSU2_TR(0x750c59);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B750c5c:{NFSU2_TR(0x750c5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750c5d:L750c5d:{c.instructions+=4;NFSU2_TR(0x750c5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750c61:{NFSU2_TR(0x750c61);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B750c63:{NFSU2_TR(0x750c63);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B750c65:{NFSU2_TR(0x750c65);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L750c6b;}}
}
B750c67:L750c67:{c.instructions+=2;NFSU2_TR(0x750c67);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B750c69:{NFSU2_TR(0x750c69);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L750c82;}}
}
B750c6b:L750c6b:{c.instructions+=7;NFSU2_TR(0x750c6b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750c6d:{NFSU2_TR(0x750c6d);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750c6f:{NFSU2_TR(0x750c6f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B750c73:{NFSU2_TR(0x750c73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750c74:{NFSU2_TR(0x750c74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750c75:{NFSU2_TR(0x750c75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750c76:{NFSU2_TR(0x750c76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750c7bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750a20u);}goto L750a20;}
}
B750c7b:L750c7b:{c.instructions+=2;NFSU2_TR(0x750c7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B750c7e:{NFSU2_TR(0x750c7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B750c82:L750c82:{c.instructions+=4;NFSU2_TR(0x750c82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750c89:{NFSU2_TR(0x750c89);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B750c8b:{NFSU2_TR(0x750c8b);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B750c8d:{NFSU2_TR(0x750c8d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L750cae;}}
}
B750c8f:L750c8f:{c.instructions+=1;NFSU2_TR(0x750c8f);
}
B750c90:L750c90:{c.instructions+=2;NFSU2_TR(0x750c90);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B750c92:{NFSU2_TR(0x750c92);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L750cae;}}
}
B750c94:L750c94:{c.instructions+=11;NFSU2_TR(0x750c94);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B750c96:{NFSU2_TR(0x750c96);
__builtin_memmove((R+8),(R+0),1);
}
B750c98:{NFSU2_TR(0x750c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750c9b:{NFSU2_TR(0x750c9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B750c9e:{NFSU2_TR(0x750c9e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B750ca1:{NFSU2_TR(0x750ca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B750ca4:{NFSU2_TR(0x750ca4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B750ca5:{NFSU2_TR(0x750ca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750ca8:{NFSU2_TR(0x750ca8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B750caa:{NFSU2_TR(0x750caa);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B750cac:{NFSU2_TR(0x750cac);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750c90u);}goto L750c90;}}
}
B750cae:L750cae:{c.instructions+=10;NFSU2_TR(0x750cae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750cb1:{NFSU2_TR(0x750cb1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750cb3:{NFSU2_TR(0x750cb3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750cb5:{NFSU2_TR(0x750cb5);
u8 U[4];
w4(U+0,u32(0x4000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750cba:{NFSU2_TR(0x750cba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750cbb:{NFSU2_TR(0x750cbb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750cbd:{NFSU2_TR(0x750cbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750cbe:{NFSU2_TR(0x750cbe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B750cc5:{NFSU2_TR(0x750cc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750ccf:{NFSU2_TR(0x750ccf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750cd4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750520u);}goto L750520;}
}
B750cd4:L750cd4:{c.instructions+=4;NFSU2_TR(0x750cd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750cd8:{NFSU2_TR(0x750cd8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B750cda:{NFSU2_TR(0x750cda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750cdb:{NFSU2_TR(0x750cdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750ce0ull));
TAIL_STATIC(0x76115eu,761);
}
B750ce0:L750ce0:{c.instructions+=2;NFSU2_TR(0x750ce0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B750ce3:{NFSU2_TR(0x750ce3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750cf0:L750cf0:{c.instructions+=4;NFSU2_TR(0x750cf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750cf4:{NFSU2_TR(0x750cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750cf7:{NFSU2_TR(0x750cf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750cfb:{NFSU2_TR(0x750cfb);
TAIL_STATIC(0x757d30u,757);
}
B750d00:L750d00:{c.instructions+=4;NFSU2_TR(0x750d00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750d01:{NFSU2_TR(0x750d01);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B750d05:{NFSU2_TR(0x750d05);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B750d0c:{NFSU2_TR(0x750d0c);
if(r1(R+518)){{goto L750d15;}}
}
B750d0e:L750d0e:{c.instructions+=3;NFSU2_TR(0x750d0e);
w4(R+0,u32(0xfffffffeull));
}
B750d13:{NFSU2_TR(0x750d13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750d14:{NFSU2_TR(0x750d14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750d15:L750d15:{c.instructions+=5;NFSU2_TR(0x750d15);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750d19:{NFSU2_TR(0x750d19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750d20:{NFSU2_TR(0x750d20);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B750d22:{NFSU2_TR(0x750d22);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B750d24:{NFSU2_TR(0x750d24);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L750d44;}}
}
B750d26:L750d26:{c.instructions+=2;NFSU2_TR(0x750d26);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B750d28:{NFSU2_TR(0x750d28);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L750d44;}}
}
B750d2a:L750d2a:{c.instructions+=11;NFSU2_TR(0x750d2a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B750d2c:{NFSU2_TR(0x750d2c);
__builtin_memmove((R+8),(R+0),1);
}
B750d2e:{NFSU2_TR(0x750d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750d31:{NFSU2_TR(0x750d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B750d34:{NFSU2_TR(0x750d34);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B750d37:{NFSU2_TR(0x750d37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B750d3a:{NFSU2_TR(0x750d3a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B750d3b:{NFSU2_TR(0x750d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750d3e:{NFSU2_TR(0x750d3e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B750d40:{NFSU2_TR(0x750d40);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B750d42:{NFSU2_TR(0x750d42);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750d26u);}goto L750d26;}}
}
B750d44:L750d44:{c.instructions+=3;NFSU2_TR(0x750d44);
u8 U[4];
w4(U+0,u32(0x3aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750d46:{NFSU2_TR(0x750d46);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750d47:{NFSU2_TR(0x750d47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750d4cull));
TAIL_STATIC(0x75cf10u,75c);
}
B750d4c:L750d4c:{c.instructions+=3;NFSU2_TR(0x750d4c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B750d4f:{NFSU2_TR(0x750d4f);
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
B750d51:{NFSU2_TR(0x750d51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L750d5a;}}
}
B750d53:L750d53:{c.instructions+=3;NFSU2_TR(0x750d53);
w4(R+0,u32(0xfffffffdull));
}
B750d58:{NFSU2_TR(0x750d58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750d59:{NFSU2_TR(0x750d59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750d5a:L750d5a:{c.instructions+=3;NFSU2_TR(0x750d5a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B750d5b:{NFSU2_TR(0x750d5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((R+8),(U+0),4);
}
B750d61:{NFSU2_TR(0x750d61);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B750d63:L750d63:{c.instructions+=5;NFSU2_TR(0x750d63);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B750d65:{NFSU2_TR(0x750d65);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B750d68:{NFSU2_TR(0x750d68);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B750d69:{NFSU2_TR(0x750d69);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B750d6b:{NFSU2_TR(0x750d6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750d63u);}goto L750d63;}}
}
B750d6d:L750d6d:{c.instructions+=9;NFSU2_TR(0x750d6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750d70:{NFSU2_TR(0x750d70);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750d72:{NFSU2_TR(0x750d72);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750d74:{NFSU2_TR(0x750d74);
u8 U[4];
w4(U+0,u32(0x4000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750d79:{NFSU2_TR(0x750d79);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750d7a:{NFSU2_TR(0x750d7a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750d7c:{NFSU2_TR(0x750d7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750d7d:{NFSU2_TR(0x750d7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750d87:{NFSU2_TR(0x750d87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750d8cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750520u);}goto L750520;}
}
B750d8c:L750d8c:{c.instructions+=3;NFSU2_TR(0x750d8c);
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
B750d8e:{NFSU2_TR(0x750d8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750d8f:{NFSU2_TR(0x750d8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750d90:L750d90:{c.instructions+=5;NFSU2_TR(0x750d90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750d91:{NFSU2_TR(0x750d91);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B750d95:{NFSU2_TR(0x750d95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750d9b:{NFSU2_TR(0x750d9b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B750d9e:{NFSU2_TR(0x750d9e);
if(r1(R+518)){{goto L750da5;}}
}
B750da0:L750da0:{c.instructions+=2;NFSU2_TR(0x750da0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B750da3:{NFSU2_TR(0x750da3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L750db1;}}
}
B750da5:L750da5:{c.instructions+=3;NFSU2_TR(0x750da5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750da8:{NFSU2_TR(0x750da8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750da9:{NFSU2_TR(0x750da9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750daeull));
TAIL_STATIC(0x757e10u,757);
}
B750dae:L750dae:{c.instructions+=1;NFSU2_TR(0x750dae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B750db1:L750db1:{c.instructions+=3;NFSU2_TR(0x750db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750db7:{NFSU2_TR(0x750db7);
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
B750dba:{NFSU2_TR(0x750dba);
if(r1(R+518)){{goto L750dc6;}}
}
B750dbc:L750dbc:{c.instructions+=2;NFSU2_TR(0x750dbc);
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
B750dbf:{NFSU2_TR(0x750dbf);
if(r1(R+518)){{goto L750dc6;}}
}
B750dc1:L750dc1:{c.instructions+=2;NFSU2_TR(0x750dc1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B750dc4:{NFSU2_TR(0x750dc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L750dd2;}}
}
B750dc6:L750dc6:{c.instructions+=3;NFSU2_TR(0x750dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750dcc:{NFSU2_TR(0x750dcc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750dcd:{NFSU2_TR(0x750dcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750dd2ull));
TAIL_STATIC(0x770d2eu,770);
}
B750dd2:L750dd2:{c.instructions+=3;NFSU2_TR(0x750dd2);
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
B750dd4:{NFSU2_TR(0x750dd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750dd5:{NFSU2_TR(0x750dd5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750de0:L750de0:{c.instructions+=4;NFSU2_TR(0x750de0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750de4:{NFSU2_TR(0x750de4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750dea:{NFSU2_TR(0x750dea);
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
B750ded:{NFSU2_TR(0x750ded);
if(r1(R+518)){{goto L750e2b;}}
}
B750def:L750def:{c.instructions+=2;NFSU2_TR(0x750def);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B750df2:{NFSU2_TR(0x750df2);
if(r1(R+518)){{goto L750e2b;}}
}
B750df4:L750df4:{c.instructions+=2;NFSU2_TR(0x750df4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B750df7:{NFSU2_TR(0x750df7);
if(r1(R+518)){{goto L750e25;}}
}
B750df9:L750df9:{c.instructions+=2;NFSU2_TR(0x750df9);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B750dfc:{NFSU2_TR(0x750dfc);
if(r1(R+518)){{goto L750e25;}}
}
B750dfe:L750dfe:{c.instructions+=2;NFSU2_TR(0x750dfe);
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
B750e01:{NFSU2_TR(0x750e01);
if(r1(R+518)){{goto L750e1f;}}
}
B750e03:L750e03:{c.instructions+=2;NFSU2_TR(0x750e03);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B750e06:{NFSU2_TR(0x750e06);
if(r1(R+518)){{goto L750e1f;}}
}
B750e08:L750e08:{c.instructions+=2;NFSU2_TR(0x750e08);
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
B750e0b:{NFSU2_TR(0x750e0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L750e19;}}
}
B750e0d:L750e0d:{c.instructions+=3;NFSU2_TR(0x750e0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750e10:{NFSU2_TR(0x750e10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750e14:{NFSU2_TR(0x750e14);
TAIL_STATIC(0x757e20u,757);
}
B750e19:L750e19:{c.instructions+=2;NFSU2_TR(0x750e19);
w4(R+0,u32(0x4ull));
}
B750e1e:{NFSU2_TR(0x750e1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750e1f:L750e1f:{c.instructions+=2;NFSU2_TR(0x750e1f);
w4(R+0,u32(0x3ull));
}
B750e24:{NFSU2_TR(0x750e24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750e25:L750e25:{c.instructions+=2;NFSU2_TR(0x750e25);
w4(R+0,u32(0x1ull));
}
B750e2a:{NFSU2_TR(0x750e2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750e2b:L750e2b:{c.instructions+=2;NFSU2_TR(0x750e2b);
w4(R+0,u32(0x2ull));
}
B750e30:{NFSU2_TR(0x750e30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750e40:L750e40:{c.instructions+=4;NFSU2_TR(0x750e40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B750e44:{NFSU2_TR(0x750e44);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750e47:{NFSU2_TR(0x750e47);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750e4b:{NFSU2_TR(0x750e4b);
TAIL_STATIC(0x757e60u,757);
}
B750e50:L750e50:{c.instructions+=4;NFSU2_TR(0x750e50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750e54:{NFSU2_TR(0x750e54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750e57:{NFSU2_TR(0x750e57);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750e5b:{NFSU2_TR(0x750e5b);
TAIL_STATIC(0x757fa0u,757);
}
B750e60:L750e60:{c.instructions+=4;NFSU2_TR(0x750e60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750e64:{NFSU2_TR(0x750e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750e67:{NFSU2_TR(0x750e67);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750e6b:{NFSU2_TR(0x750e6b);
TAIL_STATIC(0x758020u,758);
}
B750e70:L750e70:{c.instructions+=6;NFSU2_TR(0x750e70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750e71:{NFSU2_TR(0x750e71);
__builtin_memmove((R+12),gp(0x783258),4);
}
B750e77:{NFSU2_TR(0x750e77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750e78:{NFSU2_TR(0x750e78);
u8 U[4];
w4(U+0,u32(0x198ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750e7d:{NFSU2_TR(0x750e7d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750e7f:{NFSU2_TR(0x750e7f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750e81ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B750e81:L750e81:{c.instructions+=2;NFSU2_TR(0x750e81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750e82:{NFSU2_TR(0x750e82);
u8 U[4];
__builtin_memmove((U+0),gp(0x78325c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750e88ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B750e88:L750e88:{c.instructions+=4;NFSU2_TR(0x750e88);
__builtin_memmove((R+24),(R+0),4);
}
B750e8a:{NFSU2_TR(0x750e8a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B750e8c:{NFSU2_TR(0x750e8c);
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
B750e8e:{NFSU2_TR(0x750e8e);
if(r1(R+518)){{goto L750fae;}}
}
B750e94:L750e94:{c.instructions+=3;NFSU2_TR(0x750e94);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750e95:{NFSU2_TR(0x750e95);
w4(R+4,u32(0x66ull));
}
B750e9a:{NFSU2_TR(0x750e9a);
__builtin_memmove((R+28),(R+24),4);
}
B750e9c:L750e9c:{c.instructions+=1;NFSU2_TR(0x750e9c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L750e9e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750e9cu);}goto L750e9c;}
}
B750e9e:L750e9e:{c.instructions+=28;NFSU2_TR(0x750e9e);
u8 U[4];
w4(U+0,u32(0x750e70ull));
s4(u32(r4(R+24)),r4(U+0));
}
B750ea4:{NFSU2_TR(0x750ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x7509b0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750eab:{NFSU2_TR(0x750eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x750a20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750eb2:{NFSU2_TR(0x750eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x757900ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750eb9:{NFSU2_TR(0x750eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x750c30ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750ec0:{NFSU2_TR(0x750ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x750cf0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750ec7:{NFSU2_TR(0x750ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x750d00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750ece:{NFSU2_TR(0x750ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x750d90ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750ed5:{NFSU2_TR(0x750ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x757900ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750edc:{NFSU2_TR(0x750edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x750de0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750ee3:{NFSU2_TR(0x750ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x754c40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750eea:{NFSU2_TR(0x750eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x750e40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750ef1:{NFSU2_TR(0x750ef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w4(U+4,u32(0x750e50ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750ef8:{NFSU2_TR(0x750ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w4(U+4,u32(0x750e60ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750eff:{NFSU2_TR(0x750eff);
__builtin_memmove((R+4),gp(0x7d2fd0),4);
}
B750f05:{NFSU2_TR(0x750f05);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+0),(U+0),4);
}
B750f08:{NFSU2_TR(0x750f08);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B750f0a:{NFSU2_TR(0x750f0a);
__builtin_memmove((R+8),gp(0x7d2fd4),1);
}
B750f10:{NFSU2_TR(0x750f10);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B750f13:{NFSU2_TR(0x750f13);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((R+0),(U+0),4);
}
B750f19:{NFSU2_TR(0x750f19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750f1a:{NFSU2_TR(0x750f1a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750f1c:{NFSU2_TR(0x750f1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750f1d:{NFSU2_TR(0x750f1d);
u8 U[4];
w4(U+0,u32(0x750900ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750f22:{NFSU2_TR(0x750f22);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750f24:{NFSU2_TR(0x750f24);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750f26:{NFSU2_TR(0x750f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750f30:{NFSU2_TR(0x750f30);
u8 U[4];
__builtin_memmove((U+0),gp(0x783248),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750f36ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B750f36:L750f36:{c.instructions+=2;NFSU2_TR(0x750f36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750f37:{NFSU2_TR(0x750f37);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750f3dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B750f3d:L750f3d:{c.instructions+=3;NFSU2_TR(0x750f3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750f43:{NFSU2_TR(0x750f43);
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
B750f45:{NFSU2_TR(0x750f45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L750f5e;}}
}
B750f47:L750f47:{c.instructions+=2;NFSU2_TR(0x750f47);
__builtin_memmove((R+28),gp(0x783150),4);
}
B750f4d:{NFSU2_TR(0x750f4d);
__builtin_memmove((R+4),(R+4),4);
}
B750f50:L750f50:{c.instructions+=2;NFSU2_TR(0x750f50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750f52:{NFSU2_TR(0x750f52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750f54ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B750f54:L750f54:{c.instructions+=3;NFSU2_TR(0x750f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750f5a:{NFSU2_TR(0x750f5a);
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
B750f5c:{NFSU2_TR(0x750f5c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x750f50u);}goto L750f50;}}
}
B750f5e:L750f5e:{c.instructions+=3;NFSU2_TR(0x750f5e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B750f65:{NFSU2_TR(0x750f65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B750f66:{NFSU2_TR(0x750f66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L750f79;}}
}
B750f68:L750f68:{c.instructions+=3;NFSU2_TR(0x750f68);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750f69:{NFSU2_TR(0x750f69);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750f6b:{NFSU2_TR(0x750f6b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750f6dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B750f6d:L750f6d:{c.instructions+=2;NFSU2_TR(0x750f6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750f6e:{NFSU2_TR(0x750f6e);
u8 U[4];
__builtin_memmove((U+0),gp(0x783254),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750f74ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B750f74:L750f74:{c.instructions+=4;NFSU2_TR(0x750f74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750f75:{NFSU2_TR(0x750f75);
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
B750f77:{NFSU2_TR(0x750f77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B750f78:{NFSU2_TR(0x750f78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750f79:L750f79:{c.instructions+=7;NFSU2_TR(0x750f79);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750f7d:{NFSU2_TR(0x750f7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B750f81:{NFSU2_TR(0x750f81);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B750f85:{NFSU2_TR(0x750f85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750f86:{NFSU2_TR(0x750f86);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750f87:{NFSU2_TR(0x750f87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750f88:{NFSU2_TR(0x750f88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750f8dull));
TAIL_STATIC(0x758070u,758);
}
B750f8d:L750f8d:{c.instructions+=7;NFSU2_TR(0x750f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750f90:{NFSU2_TR(0x750f90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B750f93:{NFSU2_TR(0x750f93);
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
B750f96:{NFSU2_TR(0x750f96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750f9c:{NFSU2_TR(0x750f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750fa2:{NFSU2_TR(0x750fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B750fac:{NFSU2_TR(0x750fac);
__builtin_memmove((R+0),(R+24),4);
}
B750fae:L750fae:{c.instructions+=3;NFSU2_TR(0x750fae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B750faf:{NFSU2_TR(0x750faf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B750fb0:{NFSU2_TR(0x750fb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B750fc0:L750fc0:{c.instructions+=10;NFSU2_TR(0x750fc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B750fc3:{NFSU2_TR(0x750fc3);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B750fc8:{NFSU2_TR(0x750fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B750fcb:{NFSU2_TR(0x750fcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B750fcf:{NFSU2_TR(0x750fcf);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750fd1:{NFSU2_TR(0x750fd1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B750fd5:{NFSU2_TR(0x750fd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750fd6:{NFSU2_TR(0x750fd6);
u8 U[4];
w4(U+0,u32(0x70656572ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750fdb:{NFSU2_TR(0x750fdb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B750fdc:{NFSU2_TR(0x750fdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x750fe1ull));
TAIL_STATIC(0x74a760u,74a);
}
B750fe1:L750fe1:{c.instructions+=9;NFSU2_TR(0x750fe1);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B750fe6:{NFSU2_TR(0x750fe6);
u8 U[5];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B750feb:{NFSU2_TR(0x750feb);
u8 U[5];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B750ff0:{NFSU2_TR(0x750ff0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B750ff3:{NFSU2_TR(0x750ff3);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B750ff5:{NFSU2_TR(0x750ff5);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B750ffa:{NFSU2_TR(0x750ffa);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B750ffd:{NFSU2_TR(0x750ffd);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B750fff:{NFSU2_TR(0x750fff);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
TAIL_STATIC(0x751002u,751);
}
XIT:NFSU2_TR_EXIT(0x750,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
