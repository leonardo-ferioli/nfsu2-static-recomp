#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_748(u8* __restrict R,Cpu& c);
u32 body_74a(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_755(u8* __restrict R,Cpu& c);
u32 body_756(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x749,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x749,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_749(u8* __restrict R,Cpu& c);
u32 page_749(Cpu& c){return body_749(c.regs.data(),c);}
__attribute__((noinline)) u32 body_749(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x749000:goto L749000;
case 0x749001:c.instructions+=3;goto B749001;
case 0x749006:c.instructions+=2;goto B749006;
case 0x74900b:c.instructions+=1;goto B74900b;
case 0x749010:goto L749010;
case 0x749013:c.instructions+=2;goto B749013;
case 0x749014:c.instructions+=1;goto B749014;
case 0x749019:goto L749019;
case 0x74901c:c.instructions+=2;goto B74901c;
case 0x74901e:c.instructions+=1;goto B74901e;
case 0x749020:goto L749020;
case 0x749022:c.instructions+=4;goto B749022;
case 0x749026:c.instructions+=3;goto B749026;
case 0x749027:c.instructions+=2;goto B749027;
case 0x749028:c.instructions+=1;goto B749028;
case 0x74902d:goto L74902d;
case 0x74902f:c.instructions+=3;goto B74902f;
case 0x749032:c.instructions+=2;goto B749032;
case 0x749034:c.instructions+=1;goto B749034;
case 0x749036:goto L749036;
case 0x74903b:c.instructions+=2;goto B74903b;
case 0x74903c:c.instructions+=1;goto B74903c;
case 0x749041:goto L749041;
case 0x749043:c.instructions+=3;goto B749043;
case 0x749046:c.instructions+=2;goto B749046;
case 0x749048:c.instructions+=1;goto B749048;
case 0x74904a:goto L74904a;
case 0x74904e:c.instructions+=2;goto B74904e;
case 0x749051:c.instructions+=1;goto B749051;
case 0x749054:goto L749054;
case 0x749056:c.instructions+=3;goto B749056;
case 0x749057:c.instructions+=2;goto B749057;
case 0x749059:c.instructions+=1;goto B749059;
case 0x74905b:goto L74905b;
case 0x74905d:c.instructions+=5;goto B74905d;
case 0x74905f:c.instructions+=4;goto B74905f;
case 0x749060:c.instructions+=3;goto B749060;
case 0x749065:c.instructions+=2;goto B749065;
case 0x749066:c.instructions+=1;goto B749066;
case 0x74906b:goto L74906b;
case 0x74906e:c.instructions+=1;goto B74906e;
case 0x749071:goto L749071;
case 0x749076:c.instructions+=8;goto B749076;
case 0x749078:c.instructions+=7;goto B749078;
case 0x74907c:c.instructions+=6;goto B74907c;
case 0x74907d:c.instructions+=5;goto B74907d;
case 0x74907f:c.instructions+=4;goto B74907f;
case 0x749084:c.instructions+=3;goto B749084;
case 0x749085:c.instructions+=2;goto B749085;
case 0x74908d:c.instructions+=1;goto B74908d;
case 0x749092:goto L749092;
case 0x749095:c.instructions+=2;goto B749095;
case 0x749096:c.instructions+=1;goto B749096;
case 0x74909b:goto L74909b;
case 0x74909e:c.instructions+=2;goto B74909e;
case 0x7490a0:c.instructions+=1;goto B7490a0;
case 0x7490a6:goto L7490a6;
case 0x7490aa:c.instructions+=3;goto B7490aa;
case 0x7490ac:c.instructions+=2;goto B7490ac;
case 0x7490ad:c.instructions+=1;goto B7490ad;
case 0x7490b2:goto L7490b2;
case 0x7490b4:c.instructions+=3;goto B7490b4;
case 0x7490b7:c.instructions+=2;goto B7490b7;
case 0x7490b9:c.instructions+=1;goto B7490b9;
case 0x7490bf:goto L7490bf;
case 0x7490c3:c.instructions+=5;goto B7490c3;
case 0x7490c6:c.instructions+=4;goto B7490c6;
case 0x7490c8:c.instructions+=3;goto B7490c8;
case 0x7490c9:c.instructions+=2;goto B7490c9;
case 0x7490ca:c.instructions+=1;goto B7490ca;
case 0x7490cf:goto L7490cf;
case 0x7490d2:c.instructions+=2;goto B7490d2;
case 0x7490d4:c.instructions+=1;goto B7490d4;
case 0x7490d6:goto L7490d6;
case 0x7490da:c.instructions+=2;goto B7490da;
case 0x7490dd:c.instructions+=1;goto B7490dd;
case 0x7490e0:goto L7490e0;
case 0x7490e2:c.instructions+=3;goto B7490e2;
case 0x7490e3:c.instructions+=2;goto B7490e3;
case 0x7490e5:c.instructions+=1;goto B7490e5;
case 0x7490e7:goto L7490e7;
case 0x7490ec:c.instructions+=9;goto B7490ec;
case 0x7490f1:c.instructions+=8;goto B7490f1;
case 0x7490f8:c.instructions+=7;goto B7490f8;
case 0x7490f9:c.instructions+=6;goto B7490f9;
case 0x7490fb:c.instructions+=5;goto B7490fb;
case 0x7490fe:c.instructions+=4;goto B7490fe;
case 0x7490ff:c.instructions+=3;goto B7490ff;
case 0x749101:c.instructions+=2;goto B749101;
case 0x749102:c.instructions+=1;goto B749102;
case 0x749107:goto L749107;
case 0x74910a:c.instructions+=2;goto B74910a;
case 0x74910b:c.instructions+=1;goto B74910b;
case 0x749110:goto L749110;
case 0x749117:c.instructions+=7;goto B749117;
case 0x749118:c.instructions+=6;goto B749118;
case 0x74911c:c.instructions+=5;goto B74911c;
case 0x74911d:c.instructions+=4;goto B74911d;
case 0x749122:c.instructions+=3;goto B749122;
case 0x749123:c.instructions+=2;goto B749123;
case 0x749126:c.instructions+=1;goto B749126;
case 0x74912b:goto L74912b;
case 0x74912e:goto L74912e;
case 0x749132:c.instructions+=10;goto B749132;
case 0x749137:c.instructions+=9;goto B749137;
case 0x749139:c.instructions+=8;goto B749139;
case 0x74913d:c.instructions+=7;goto B74913d;
case 0x74913e:c.instructions+=6;goto B74913e;
case 0x74913f:c.instructions+=5;goto B74913f;
case 0x749140:c.instructions+=4;goto B749140;
case 0x749145:c.instructions+=3;goto B749145;
case 0x749146:c.instructions+=2;goto B749146;
case 0x74914a:c.instructions+=1;goto B74914a;
case 0x74914f:goto L74914f;
case 0x749152:c.instructions+=2;goto B749152;
case 0x749153:c.instructions+=1;goto B749153;
case 0x749158:goto L749158;
case 0x74915b:c.instructions+=2;goto B74915b;
case 0x74915d:c.instructions+=1;goto B74915d;
case 0x749163:goto L749163;
case 0x749168:c.instructions+=6;goto B749168;
case 0x74916d:c.instructions+=5;goto B74916d;
case 0x749171:c.instructions+=4;goto B749171;
case 0x749172:c.instructions+=3;goto B749172;
case 0x749177:c.instructions+=2;goto B749177;
case 0x749178:c.instructions+=1;goto B749178;
case 0x74917d:goto L74917d;
case 0x749180:c.instructions+=2;goto B749180;
case 0x749181:c.instructions+=1;goto B749181;
case 0x749186:goto L749186;
case 0x749189:c.instructions+=8;goto B749189;
case 0x74918d:c.instructions+=7;goto B74918d;
case 0x74918e:c.instructions+=6;goto B74918e;
case 0x749193:c.instructions+=5;goto B749193;
case 0x749195:c.instructions+=4;goto B749195;
case 0x749196:c.instructions+=3;goto B749196;
case 0x74919b:c.instructions+=2;goto B74919b;
case 0x74919c:c.instructions+=1;goto B74919c;
case 0x7491a1:goto L7491a1;
case 0x7491a4:c.instructions+=2;goto B7491a4;
case 0x7491a5:c.instructions+=1;goto B7491a5;
case 0x7491aa:goto L7491aa;
case 0x7491ad:c.instructions+=8;goto B7491ad;
case 0x7491b1:c.instructions+=7;goto B7491b1;
case 0x7491b2:c.instructions+=6;goto B7491b2;
case 0x7491b7:c.instructions+=5;goto B7491b7;
case 0x7491b9:c.instructions+=4;goto B7491b9;
case 0x7491ba:c.instructions+=3;goto B7491ba;
case 0x7491bf:c.instructions+=2;goto B7491bf;
case 0x7491c0:c.instructions+=1;goto B7491c0;
case 0x7491c5:goto L7491c5;
case 0x7491c8:c.instructions+=2;goto B7491c8;
case 0x7491c9:c.instructions+=1;goto B7491c9;
case 0x7491ce:goto L7491ce;
case 0x7491d2:c.instructions+=3;goto B7491d2;
case 0x7491d5:c.instructions+=2;goto B7491d5;
case 0x7491d7:c.instructions+=1;goto B7491d7;
case 0x7491d9:goto L7491d9;
case 0x7491db:c.instructions+=8;goto B7491db;
case 0x7491dc:c.instructions+=7;goto B7491dc;
case 0x7491dd:c.instructions+=6;goto B7491dd;
case 0x7491e0:c.instructions+=5;goto B7491e0;
case 0x7491e1:c.instructions+=4;goto B7491e1;
case 0x7491eb:c.instructions+=3;goto B7491eb;
case 0x7491ec:c.instructions+=2;goto B7491ec;
case 0x7491f3:c.instructions+=1;goto B7491f3;
case 0x7491f8:goto L7491f8;
case 0x7491fe:c.instructions+=1;goto B7491fe;
case 0x7491ff:goto L7491ff;
case 0x749201:c.instructions+=3;goto B749201;
case 0x749206:c.instructions+=2;goto B749206;
case 0x749207:c.instructions+=1;goto B749207;
case 0x74920c:goto L74920c;
case 0x74920f:c.instructions+=2;goto B74920f;
case 0x749210:c.instructions+=1;goto B749210;
case 0x749215:goto L749215;
case 0x749217:c.instructions+=3;goto B749217;
case 0x74921a:c.instructions+=2;goto B74921a;
case 0x74921d:c.instructions+=1;goto B74921d;
case 0x74921f:goto L74921f;
case 0x749224:c.instructions+=1;goto B749224;
case 0x749226:goto L749226;
case 0x749229:c.instructions+=1;goto B749229;
case 0x74922b:goto L74922b;
case 0x749230:goto L749230;
case 0x749235:goto L749235;
case 0x74923b:c.instructions+=6;goto B74923b;
case 0x74923d:c.instructions+=5;goto B74923d;
case 0x74923f:c.instructions+=4;goto B74923f;
case 0x749244:c.instructions+=3;goto B749244;
case 0x749245:c.instructions+=2;goto B749245;
case 0x74924b:c.instructions+=1;goto B74924b;
case 0x749250:goto L749250;
case 0x749253:c.instructions+=2;goto B749253;
case 0x749254:c.instructions+=1;goto B749254;
case 0x749259:goto L749259;
case 0x74925b:c.instructions+=3;goto B74925b;
case 0x74925e:c.instructions+=2;goto B74925e;
case 0x749260:c.instructions+=1;goto B749260;
case 0x749262:goto L749262;
case 0x749264:c.instructions+=1;goto B749264;
case 0x749266:goto L749266;
case 0x749269:c.instructions+=1;goto B749269;
case 0x74926b:goto L74926b;
case 0x749270:goto L749270;
case 0x749275:goto L749275;
case 0x74927b:c.instructions+=6;goto B74927b;
case 0x74927d:c.instructions+=5;goto B74927d;
case 0x749283:c.instructions+=4;goto B749283;
case 0x749287:c.instructions+=3;goto B749287;
case 0x749289:c.instructions+=2;goto B749289;
case 0x74928a:c.instructions+=1;goto B74928a;
case 0x74928f:goto L74928f;
case 0x749291:c.instructions+=3;goto B749291;
case 0x749294:c.instructions+=2;goto B749294;
case 0x749296:c.instructions+=1;goto B749296;
case 0x74929c:goto L74929c;
case 0x74929e:goto L74929e;
case 0x7492a5:goto L7492a5;
case 0x7492a8:c.instructions+=3;goto B7492a8;
case 0x7492aa:c.instructions+=2;goto B7492aa;
case 0x7492ab:c.instructions+=1;goto B7492ab;
case 0x7492b0:goto L7492b0;
case 0x7492b3:c.instructions+=3;goto B7492b3;
case 0x7492b5:c.instructions+=2;goto B7492b5;
case 0x7492b9:c.instructions+=1;goto B7492b9;
case 0x7492bf:goto L7492bf;
case 0x7492c1:c.instructions+=3;goto B7492c1;
case 0x7492c2:c.instructions+=2;goto B7492c2;
case 0x7492c5:c.instructions+=1;goto B7492c5;
case 0x7492cb:goto L7492cb;
case 0x7492cd:c.instructions+=3;goto B7492cd;
case 0x7492cf:c.instructions+=2;goto B7492cf;
case 0x7492d2:c.instructions+=1;goto B7492d2;
case 0x7492d6:goto L7492d6;
case 0x7492d8:goto L7492d8;
case 0x7492da:c.instructions+=2;goto B7492da;
case 0x7492dd:c.instructions+=1;goto B7492dd;
case 0x7492e2:goto L7492e2;
case 0x7492e4:goto L7492e4;
case 0x7492e9:c.instructions+=7;goto B7492e9;
case 0x7492ee:c.instructions+=6;goto B7492ee;
case 0x7492f5:c.instructions+=5;goto B7492f5;
case 0x7492f6:c.instructions+=4;goto B7492f6;
case 0x7492fa:c.instructions+=3;goto B7492fa;
case 0x7492fb:c.instructions+=2;goto B7492fb;
case 0x7492fc:c.instructions+=1;goto B7492fc;
case 0x749301:goto L749301;
case 0x749304:c.instructions+=2;goto B749304;
case 0x749305:c.instructions+=1;goto B749305;
case 0x74930a:goto L74930a;
case 0x749311:c.instructions+=6;goto B749311;
case 0x749312:c.instructions+=5;goto B749312;
case 0x749314:c.instructions+=4;goto B749314;
case 0x749318:c.instructions+=3;goto B749318;
case 0x74931a:c.instructions+=2;goto B74931a;
case 0x74931b:c.instructions+=1;goto B74931b;
case 0x749320:goto L749320;
case 0x749324:c.instructions+=3;goto B749324;
case 0x749327:c.instructions+=2;goto B749327;
case 0x74932a:c.instructions+=1;goto B74932a;
case 0x749330:goto L749330;
case 0x749332:c.instructions+=3;goto B749332;
case 0x749333:c.instructions+=2;goto B749333;
case 0x749335:c.instructions+=1;goto B749335;
case 0x749337:goto L749337;
case 0x749339:c.instructions+=3;goto B749339;
case 0x74933b:c.instructions+=2;goto B74933b;
case 0x74933d:c.instructions+=1;goto B74933d;
case 0x74933f:goto L74933f;
case 0x749340:goto L749340;
case 0x749345:c.instructions+=1;goto B749345;
case 0x749347:goto L749347;
case 0x749348:c.instructions+=3;goto B749348;
case 0x74934a:c.instructions+=2;goto B74934a;
case 0x74934f:c.instructions+=1;goto B74934f;
case 0x749351:goto L749351;
case 0x749355:c.instructions+=3;goto B749355;
case 0x749358:c.instructions+=2;goto B749358;
case 0x74935a:c.instructions+=1;goto B74935a;
case 0x74935c:goto L74935c;
case 0x749360:goto L749360;
case 0x749363:c.instructions+=3;goto B749363;
case 0x749364:c.instructions+=2;goto B749364;
case 0x749366:c.instructions+=1;goto B749366;
case 0x749368:goto L749368;
case 0x74936a:c.instructions+=5;goto B74936a;
case 0x74936e:c.instructions+=4;goto B74936e;
case 0x749370:c.instructions+=3;goto B749370;
case 0x749372:c.instructions+=2;goto B749372;
case 0x749378:c.instructions+=1;goto B749378;
case 0x74937a:goto L74937a;
case 0x74937c:c.instructions+=6;goto B74937c;
case 0x74937d:c.instructions+=5;goto B74937d;
case 0x74937e:c.instructions+=4;goto B74937e;
case 0x74937f:c.instructions+=3;goto B74937f;
case 0x749382:c.instructions+=2;goto B749382;
case 0x749383:c.instructions+=1;goto B749383;
case 0x749388:goto L749388;
case 0x74938a:c.instructions+=4;goto B74938a;
case 0x74938c:c.instructions+=3;goto B74938c;
case 0x74938f:c.instructions+=2;goto B74938f;
case 0x749393:c.instructions+=1;goto B749393;
case 0x749395:goto L749395;
case 0x749397:goto L749397;
case 0x749399:c.instructions+=4;goto B749399;
case 0x74939d:c.instructions+=3;goto B74939d;
case 0x7493a0:c.instructions+=2;goto B7493a0;
case 0x7493a2:c.instructions+=1;goto B7493a2;
case 0x7493a3:goto L7493a3;
case 0x7493a5:goto L7493a5;
case 0x7493aa:goto L7493aa;
case 0x7493ac:c.instructions+=3;goto B7493ac;
case 0x7493af:c.instructions+=2;goto B7493af;
case 0x7493b1:c.instructions+=1;goto B7493b1;
case 0x7493b7:goto L7493b7;
case 0x7493be:goto L7493be;
case 0x7493c3:c.instructions+=2;goto B7493c3;
case 0x7493c4:c.instructions+=1;goto B7493c4;
case 0x7493c9:goto L7493c9;
case 0x7493cf:c.instructions+=4;goto B7493cf;
case 0x7493d2:c.instructions+=3;goto B7493d2;
case 0x7493d4:c.instructions+=2;goto B7493d4;
case 0x7493d8:c.instructions+=1;goto B7493d8;
case 0x7493da:goto L7493da;
case 0x7493db:c.instructions+=3;goto B7493db;
case 0x7493dc:c.instructions+=2;goto B7493dc;
case 0x7493dd:c.instructions+=1;goto B7493dd;
case 0x7493e2:goto L7493e2;
case 0x7493e4:goto L7493e4;
case 0x7493e6:c.instructions+=3;goto B7493e6;
case 0x7493e7:c.instructions+=2;goto B7493e7;
case 0x7493e8:c.instructions+=1;goto B7493e8;
case 0x7493ed:goto L7493ed;
case 0x7493f0:c.instructions+=2;goto B7493f0;
case 0x7493f2:c.instructions+=1;goto B7493f2;
case 0x7493f4:goto L7493f4;
case 0x7493f6:c.instructions+=8;goto B7493f6;
case 0x7493f7:c.instructions+=7;goto B7493f7;
case 0x7493f8:c.instructions+=6;goto B7493f8;
case 0x7493fb:c.instructions+=5;goto B7493fb;
case 0x7493fc:c.instructions+=4;goto B7493fc;
case 0x749406:c.instructions+=3;goto B749406;
case 0x749407:c.instructions+=2;goto B749407;
case 0x74940e:c.instructions+=1;goto B74940e;
case 0x749413:goto L749413;
case 0x749419:c.instructions+=1;goto B749419;
case 0x74941a:goto L74941a;
case 0x749421:c.instructions+=6;goto B749421;
case 0x749422:c.instructions+=5;goto B749422;
case 0x749423:c.instructions+=4;goto B749423;
case 0x749424:c.instructions+=3;goto B749424;
case 0x74942e:c.instructions+=2;goto B74942e;
case 0x74942f:c.instructions+=1;goto B74942f;
case 0x749434:goto L749434;
case 0x74943a:c.instructions+=1;goto B74943a;
case 0x749440:goto L749440;
case 0x749441:c.instructions+=3;goto B749441;
case 0x749445:c.instructions+=2;goto B749445;
case 0x74944c:c.instructions+=1;goto B74944c;
case 0x74944e:goto L74944e;
case 0x749454:c.instructions+=2;goto B749454;
case 0x749455:c.instructions+=1;goto B749455;
case 0x74945a:goto L74945a;
case 0x749460:c.instructions+=3;goto B749460;
case 0x749465:c.instructions+=2;goto B749465;
case 0x749466:c.instructions+=1;goto B749466;
case 0x74946b:goto L74946b;
case 0x74946e:c.instructions+=2;goto B74946e;
case 0x749470:c.instructions+=1;goto B749470;
case 0x749472:goto L749472;
case 0x74947c:c.instructions+=1;goto B74947c;
case 0x74947e:goto L74947e;
case 0x749480:goto L749480;
case 0x749486:c.instructions+=3;goto B749486;
case 0x74948b:c.instructions+=2;goto B74948b;
case 0x74948c:c.instructions+=1;goto B74948c;
case 0x749491:goto L749491;
case 0x749496:c.instructions+=6;goto B749496;
case 0x749499:c.instructions+=5;goto B749499;
case 0x74949b:c.instructions+=4;goto B74949b;
case 0x74949d:c.instructions+=3;goto B74949d;
case 0x7494a0:c.instructions+=2;goto B7494a0;
case 0x7494a3:c.instructions+=1;goto B7494a3;
case 0x7494a9:goto L7494a9;
case 0x7494b0:c.instructions+=1;goto B7494b0;
case 0x7494b6:goto L7494b6;
case 0x7494bc:c.instructions+=2;goto B7494bc;
case 0x7494bd:c.instructions+=1;goto B7494bd;
case 0x7494c2:goto L7494c2;
case 0x7494c8:c.instructions+=7;goto B7494c8;
case 0x7494ce:c.instructions+=6;goto B7494ce;
case 0x7494d4:c.instructions+=5;goto B7494d4;
case 0x7494d5:c.instructions+=4;goto B7494d5;
case 0x7494d7:c.instructions+=3;goto B7494d7;
case 0x7494d8:c.instructions+=2;goto B7494d8;
case 0x7494d9:c.instructions+=1;goto B7494d9;
case 0x7494de:goto L7494de;
case 0x7494e1:c.instructions+=2;goto B7494e1;
case 0x7494e4:c.instructions+=1;goto B7494e4;
case 0x7494e6:goto L7494e6;
case 0x7494f0:c.instructions+=2;goto B7494f0;
case 0x7494f1:c.instructions+=1;goto B7494f1;
case 0x7494f2:goto L7494f2;
case 0x7494f4:c.instructions+=1;goto B7494f4;
case 0x7494f6:goto L7494f6;
case 0x7494f8:goto L7494f8;
case 0x7494f9:c.instructions+=5;goto B7494f9;
case 0x7494fa:c.instructions+=4;goto B7494fa;
case 0x7494fc:c.instructions+=3;goto B7494fc;
case 0x7494fe:c.instructions+=2;goto B7494fe;
case 0x749500:c.instructions+=1;goto B749500;
case 0x749502:goto L749502;
case 0x749508:c.instructions+=3;goto B749508;
case 0x74950b:c.instructions+=2;goto B74950b;
case 0x74950e:c.instructions+=1;goto B74950e;
case 0x749510:goto L749510;
case 0x749513:c.instructions+=1;goto B749513;
case 0x749514:goto L749514;
case 0x749515:c.instructions+=2;goto B749515;
case 0x749517:c.instructions+=1;goto B749517;
case 0x749519:goto L749519;
case 0x74951f:c.instructions+=11;goto B74951f;
case 0x749525:c.instructions+=10;goto B749525;
case 0x749527:c.instructions+=9;goto B749527;
case 0x749529:c.instructions+=8;goto B749529;
case 0x74952b:c.instructions+=7;goto B74952b;
case 0x749531:c.instructions+=6;goto B749531;
case 0x749537:c.instructions+=5;goto B749537;
case 0x74953a:c.instructions+=4;goto B74953a;
case 0x749541:c.instructions+=3;goto B749541;
case 0x749542:c.instructions+=2;goto B749542;
case 0x749543:c.instructions+=1;goto B749543;
case 0x749545:goto L749545;
case 0x74954f:goto L74954f;
case 0x749550:c.instructions+=1;goto B749550;
case 0x749560:goto L749560;
case 0x749561:c.instructions+=10;goto B749561;
case 0x749562:c.instructions+=9;goto B749562;
case 0x749566:c.instructions+=8;goto B749566;
case 0x749567:c.instructions+=7;goto B749567;
case 0x74956b:c.instructions+=6;goto B74956b;
case 0x74956c:c.instructions+=5;goto B74956c;
case 0x749571:c.instructions+=4;goto B749571;
case 0x749573:c.instructions+=3;goto B749573;
case 0x749578:c.instructions+=2;goto B749578;
case 0x74957a:c.instructions+=1;goto B74957a;
case 0x74957c:goto L74957c;
case 0x74957e:goto L74957e;
case 0x74957f:c.instructions+=5;goto B74957f;
case 0x749585:c.instructions+=4;goto B749585;
case 0x74958a:c.instructions+=3;goto B74958a;
case 0x74958b:c.instructions+=2;goto B74958b;
case 0x74958c:c.instructions+=1;goto B74958c;
case 0x749591:goto L749591;
case 0x749594:c.instructions+=2;goto B749594;
case 0x749595:c.instructions+=1;goto B749595;
case 0x74959a:goto L74959a;
case 0x74959d:c.instructions+=7;goto B74959d;
case 0x7495a2:c.instructions+=6;goto B7495a2;
case 0x7495a7:c.instructions+=5;goto B7495a7;
case 0x7495aa:c.instructions+=4;goto B7495aa;
case 0x7495ab:c.instructions+=3;goto B7495ab;
case 0x7495b0:c.instructions+=2;goto B7495b0;
case 0x7495b1:c.instructions+=1;goto B7495b1;
case 0x7495b6:goto L7495b6;
case 0x7495b9:c.instructions+=2;goto B7495b9;
case 0x7495ba:c.instructions+=1;goto B7495ba;
case 0x7495bf:goto L7495bf;
case 0x7495c2:c.instructions+=4;goto B7495c2;
case 0x7495c4:c.instructions+=3;goto B7495c4;
case 0x7495c9:c.instructions+=2;goto B7495c9;
case 0x7495ca:c.instructions+=1;goto B7495ca;
case 0x7495cf:goto L7495cf;
case 0x7495d2:c.instructions+=2;goto B7495d2;
case 0x7495d3:c.instructions+=1;goto B7495d3;
case 0x7495d8:goto L7495d8;
case 0x7495da:c.instructions+=12;goto B7495da;
case 0x7495dd:c.instructions+=11;goto B7495dd;
case 0x7495e3:c.instructions+=10;goto B7495e3;
case 0x7495e5:c.instructions+=9;goto B7495e5;
case 0x7495e7:c.instructions+=8;goto B7495e7;
case 0x7495ea:c.instructions+=7;goto B7495ea;
case 0x7495ed:c.instructions+=6;goto B7495ed;
case 0x7495f0:c.instructions+=5;goto B7495f0;
case 0x7495f2:c.instructions+=4;goto B7495f2;
case 0x7495f8:c.instructions+=3;goto B7495f8;
case 0x7495fe:c.instructions+=2;goto B7495fe;
case 0x749604:c.instructions+=1;goto B749604;
case 0x749606:goto L749606;
case 0x749608:c.instructions+=1;goto B749608;
case 0x74960a:goto L74960a;
case 0x749611:goto L749611;
case 0x749613:c.instructions+=9;goto B749613;
case 0x749619:c.instructions+=8;goto B749619;
case 0x74961a:c.instructions+=7;goto B74961a;
case 0x74961c:c.instructions+=6;goto B74961c;
case 0x749622:c.instructions+=5;goto B749622;
case 0x749623:c.instructions+=4;goto B749623;
case 0x749629:c.instructions+=3;goto B749629;
case 0x74962a:c.instructions+=2;goto B74962a;
case 0x74962b:c.instructions+=1;goto B74962b;
case 0x749630:goto L749630;
case 0x749633:c.instructions+=5;goto B749633;
case 0x749634:c.instructions+=4;goto B749634;
case 0x749635:c.instructions+=3;goto B749635;
case 0x749636:c.instructions+=2;goto B749636;
case 0x749637:c.instructions+=1;goto B749637;
case 0x749640:goto L749640;
case 0x749641:c.instructions+=14;goto B749641;
case 0x749645:c.instructions+=13;goto B749645;
case 0x749646:c.instructions+=12;goto B749646;
case 0x749647:c.instructions+=11;goto B749647;
case 0x74964b:c.instructions+=10;goto B74964b;
case 0x74964c:c.instructions+=9;goto B74964c;
case 0x749651:c.instructions+=8;goto B749651;
case 0x749653:c.instructions+=7;goto B749653;
case 0x749654:c.instructions+=6;goto B749654;
case 0x74965a:c.instructions+=5;goto B74965a;
case 0x74965c:c.instructions+=4;goto B74965c;
case 0x749661:c.instructions+=3;goto B749661;
case 0x749666:c.instructions+=2;goto B749666;
case 0x749668:c.instructions+=1;goto B749668;
case 0x749669:goto L749669;
case 0x74966b:goto L74966b;
case 0x749670:goto L749670;
case 0x749673:c.instructions+=2;goto B749673;
case 0x749674:c.instructions+=1;goto B749674;
case 0x749679:goto L749679;
case 0x74967c:c.instructions+=7;goto B74967c;
case 0x749681:c.instructions+=6;goto B749681;
case 0x749686:c.instructions+=5;goto B749686;
case 0x749689:c.instructions+=4;goto B749689;
case 0x74968a:c.instructions+=3;goto B74968a;
case 0x74968f:c.instructions+=2;goto B74968f;
case 0x749690:c.instructions+=1;goto B749690;
case 0x749695:goto L749695;
case 0x749698:c.instructions+=2;goto B749698;
case 0x749699:c.instructions+=1;goto B749699;
case 0x74969e:goto L74969e;
case 0x7496a1:c.instructions+=4;goto B7496a1;
case 0x7496a3:c.instructions+=3;goto B7496a3;
case 0x7496a8:c.instructions+=2;goto B7496a8;
case 0x7496a9:c.instructions+=1;goto B7496a9;
case 0x7496ae:goto L7496ae;
case 0x7496b1:c.instructions+=2;goto B7496b1;
case 0x7496b2:c.instructions+=1;goto B7496b2;
case 0x7496b7:goto L7496b7;
case 0x7496b9:c.instructions+=12;goto B7496b9;
case 0x7496bc:c.instructions+=11;goto B7496bc;
case 0x7496c2:c.instructions+=10;goto B7496c2;
case 0x7496c4:c.instructions+=9;goto B7496c4;
case 0x7496c6:c.instructions+=8;goto B7496c6;
case 0x7496c9:c.instructions+=7;goto B7496c9;
case 0x7496cc:c.instructions+=6;goto B7496cc;
case 0x7496cf:c.instructions+=5;goto B7496cf;
case 0x7496d1:c.instructions+=4;goto B7496d1;
case 0x7496d7:c.instructions+=3;goto B7496d7;
case 0x7496dd:c.instructions+=2;goto B7496dd;
case 0x7496e3:c.instructions+=1;goto B7496e3;
case 0x7496e5:goto L7496e5;
case 0x7496e7:c.instructions+=1;goto B7496e7;
case 0x7496e9:goto L7496e9;
case 0x7496f0:goto L7496f0;
case 0x7496f2:c.instructions+=9;goto B7496f2;
case 0x7496f8:c.instructions+=8;goto B7496f8;
case 0x7496f9:c.instructions+=7;goto B7496f9;
case 0x7496fb:c.instructions+=6;goto B7496fb;
case 0x749701:c.instructions+=5;goto B749701;
case 0x749702:c.instructions+=4;goto B749702;
case 0x749708:c.instructions+=3;goto B749708;
case 0x749709:c.instructions+=2;goto B749709;
case 0x74970a:c.instructions+=1;goto B74970a;
case 0x74970f:goto L74970f;
case 0x749711:c.instructions+=9;goto B749711;
case 0x749717:c.instructions+=8;goto B749717;
case 0x749718:c.instructions+=7;goto B749718;
case 0x74971a:c.instructions+=6;goto B74971a;
case 0x749720:c.instructions+=5;goto B749720;
case 0x749721:c.instructions+=4;goto B749721;
case 0x749727:c.instructions+=3;goto B749727;
case 0x749728:c.instructions+=2;goto B749728;
case 0x749729:c.instructions+=1;goto B749729;
case 0x74972e:goto L74972e;
case 0x749730:c.instructions+=9;goto B749730;
case 0x749736:c.instructions+=8;goto B749736;
case 0x749737:c.instructions+=7;goto B749737;
case 0x749739:c.instructions+=6;goto B749739;
case 0x74973f:c.instructions+=5;goto B74973f;
case 0x749740:c.instructions+=4;goto B749740;
case 0x749746:c.instructions+=3;goto B749746;
case 0x749747:c.instructions+=2;goto B749747;
case 0x749748:c.instructions+=1;goto B749748;
case 0x74974d:goto L74974d;
case 0x749750:c.instructions+=10;goto B749750;
case 0x749752:c.instructions+=9;goto B749752;
case 0x749758:c.instructions+=8;goto B749758;
case 0x749759:c.instructions+=7;goto B749759;
case 0x74975b:c.instructions+=6;goto B74975b;
case 0x749761:c.instructions+=5;goto B749761;
case 0x749762:c.instructions+=4;goto B749762;
case 0x749768:c.instructions+=3;goto B749768;
case 0x749769:c.instructions+=2;goto B749769;
case 0x74976a:c.instructions+=1;goto B74976a;
case 0x74976f:goto L74976f;
case 0x749771:c.instructions+=3;goto B749771;
case 0x749774:c.instructions+=2;goto B749774;
case 0x749776:c.instructions+=1;goto B749776;
case 0x749778:goto L749778;
case 0x74977e:c.instructions+=4;goto B74977e;
case 0x749781:c.instructions+=3;goto B749781;
case 0x749787:c.instructions+=2;goto B749787;
case 0x74978a:c.instructions+=1;goto B74978a;
case 0x74978e:goto L74978e;
case 0x74978f:c.instructions+=4;goto B74978f;
case 0x749790:c.instructions+=3;goto B749790;
case 0x749791:c.instructions+=2;goto B749791;
case 0x749792:c.instructions+=1;goto B749792;
case 0x7497a0:goto L7497a0;
case 0x7497a1:c.instructions+=14;goto B7497a1;
case 0x7497a2:c.instructions+=13;goto B7497a2;
case 0x7497a6:c.instructions+=12;goto B7497a6;
case 0x7497a7:c.instructions+=11;goto B7497a7;
case 0x7497ab:c.instructions+=10;goto B7497ab;
case 0x7497ac:c.instructions+=9;goto B7497ac;
case 0x7497b1:c.instructions+=8;goto B7497b1;
case 0x7497b3:c.instructions+=7;goto B7497b3;
case 0x7497b4:c.instructions+=6;goto B7497b4;
case 0x7497ba:c.instructions+=5;goto B7497ba;
case 0x7497bc:c.instructions+=4;goto B7497bc;
case 0x7497c1:c.instructions+=3;goto B7497c1;
case 0x7497c6:c.instructions+=2;goto B7497c6;
case 0x7497c8:c.instructions+=1;goto B7497c8;
case 0x7497c9:goto L7497c9;
case 0x7497cb:goto L7497cb;
case 0x7497d0:goto L7497d0;
case 0x7497d3:c.instructions+=2;goto B7497d3;
case 0x7497d4:c.instructions+=1;goto B7497d4;
case 0x7497d9:goto L7497d9;
case 0x7497dc:c.instructions+=7;goto B7497dc;
case 0x7497e1:c.instructions+=6;goto B7497e1;
case 0x7497e6:c.instructions+=5;goto B7497e6;
case 0x7497e9:c.instructions+=4;goto B7497e9;
case 0x7497ea:c.instructions+=3;goto B7497ea;
case 0x7497ef:c.instructions+=2;goto B7497ef;
case 0x7497f0:c.instructions+=1;goto B7497f0;
case 0x7497f5:goto L7497f5;
case 0x7497f8:c.instructions+=2;goto B7497f8;
case 0x7497f9:c.instructions+=1;goto B7497f9;
case 0x7497fe:goto L7497fe;
case 0x749801:c.instructions+=4;goto B749801;
case 0x749803:c.instructions+=3;goto B749803;
case 0x749808:c.instructions+=2;goto B749808;
case 0x749809:c.instructions+=1;goto B749809;
case 0x74980e:goto L74980e;
case 0x749811:c.instructions+=2;goto B749811;
case 0x749812:c.instructions+=1;goto B749812;
case 0x749817:goto L749817;
case 0x749819:c.instructions+=12;goto B749819;
case 0x74981c:c.instructions+=11;goto B74981c;
case 0x749822:c.instructions+=10;goto B749822;
case 0x749824:c.instructions+=9;goto B749824;
case 0x749826:c.instructions+=8;goto B749826;
case 0x749829:c.instructions+=7;goto B749829;
case 0x74982c:c.instructions+=6;goto B74982c;
case 0x74982f:c.instructions+=5;goto B74982f;
case 0x749831:c.instructions+=4;goto B749831;
case 0x749837:c.instructions+=3;goto B749837;
case 0x74983d:c.instructions+=2;goto B74983d;
case 0x749843:c.instructions+=1;goto B749843;
case 0x749845:goto L749845;
case 0x749847:c.instructions+=1;goto B749847;
case 0x749849:goto L749849;
case 0x749850:goto L749850;
case 0x749855:c.instructions+=6;goto B749855;
case 0x749857:c.instructions+=5;goto B749857;
case 0x74985d:c.instructions+=4;goto B74985d;
case 0x74985e:c.instructions+=3;goto B74985e;
case 0x749863:c.instructions+=2;goto B749863;
case 0x749864:c.instructions+=1;goto B749864;
case 0x749869:goto L749869;
case 0x74986c:c.instructions+=2;goto B74986c;
case 0x74986d:c.instructions+=1;goto B74986d;
case 0x749872:goto L749872;
case 0x749875:c.instructions+=7;goto B749875;
case 0x74987a:c.instructions+=6;goto B74987a;
case 0x74987c:c.instructions+=5;goto B74987c;
case 0x749882:c.instructions+=4;goto B749882;
case 0x749883:c.instructions+=3;goto B749883;
case 0x749888:c.instructions+=2;goto B749888;
case 0x749889:c.instructions+=1;goto B749889;
case 0x74988e:goto L74988e;
case 0x749891:c.instructions+=2;goto B749891;
case 0x749892:c.instructions+=1;goto B749892;
case 0x749897:goto L749897;
case 0x74989a:c.instructions+=7;goto B74989a;
case 0x74989f:c.instructions+=6;goto B74989f;
case 0x7498a1:c.instructions+=5;goto B7498a1;
case 0x7498a7:c.instructions+=4;goto B7498a7;
case 0x7498a8:c.instructions+=3;goto B7498a8;
case 0x7498ad:c.instructions+=2;goto B7498ad;
case 0x7498ae:c.instructions+=1;goto B7498ae;
case 0x7498b3:goto L7498b3;
case 0x7498b6:c.instructions+=2;goto B7498b6;
case 0x7498b7:c.instructions+=1;goto B7498b7;
case 0x7498bc:goto L7498bc;
case 0x7498bf:c.instructions+=7;goto B7498bf;
case 0x7498c4:c.instructions+=6;goto B7498c4;
case 0x7498c6:c.instructions+=5;goto B7498c6;
case 0x7498cc:c.instructions+=4;goto B7498cc;
case 0x7498cd:c.instructions+=3;goto B7498cd;
case 0x7498d2:c.instructions+=2;goto B7498d2;
case 0x7498d3:c.instructions+=1;goto B7498d3;
case 0x7498d8:goto L7498d8;
case 0x7498db:c.instructions+=2;goto B7498db;
case 0x7498dc:c.instructions+=1;goto B7498dc;
case 0x7498e1:goto L7498e1;
case 0x7498e4:c.instructions+=7;goto B7498e4;
case 0x7498e9:c.instructions+=6;goto B7498e9;
case 0x7498eb:c.instructions+=5;goto B7498eb;
case 0x7498f1:c.instructions+=4;goto B7498f1;
case 0x7498f2:c.instructions+=3;goto B7498f2;
case 0x7498f7:c.instructions+=2;goto B7498f7;
case 0x7498f8:c.instructions+=1;goto B7498f8;
case 0x7498fd:goto L7498fd;
case 0x749900:c.instructions+=2;goto B749900;
case 0x749901:c.instructions+=1;goto B749901;
case 0x749906:goto L749906;
case 0x749909:c.instructions+=7;goto B749909;
case 0x74990e:c.instructions+=6;goto B74990e;
case 0x749910:c.instructions+=5;goto B749910;
case 0x749916:c.instructions+=4;goto B749916;
case 0x749917:c.instructions+=3;goto B749917;
case 0x74991c:c.instructions+=2;goto B74991c;
case 0x74991d:c.instructions+=1;goto B74991d;
case 0x749922:goto L749922;
case 0x749925:c.instructions+=2;goto B749925;
case 0x749926:c.instructions+=1;goto B749926;
case 0x74992b:goto L74992b;
case 0x74992e:c.instructions+=7;goto B74992e;
case 0x749933:c.instructions+=6;goto B749933;
case 0x749935:c.instructions+=5;goto B749935;
case 0x74993b:c.instructions+=4;goto B74993b;
case 0x74993c:c.instructions+=3;goto B74993c;
case 0x749941:c.instructions+=2;goto B749941;
case 0x749942:c.instructions+=1;goto B749942;
case 0x749947:goto L749947;
case 0x74994a:c.instructions+=2;goto B74994a;
case 0x74994b:c.instructions+=1;goto B74994b;
case 0x749950:goto L749950;
case 0x749953:c.instructions+=7;goto B749953;
case 0x749958:c.instructions+=6;goto B749958;
case 0x74995a:c.instructions+=5;goto B74995a;
case 0x749960:c.instructions+=4;goto B749960;
case 0x749961:c.instructions+=3;goto B749961;
case 0x749966:c.instructions+=2;goto B749966;
case 0x749967:c.instructions+=1;goto B749967;
case 0x74996c:goto L74996c;
case 0x74996f:c.instructions+=2;goto B74996f;
case 0x749970:c.instructions+=1;goto B749970;
case 0x749975:goto L749975;
case 0x749978:c.instructions+=7;goto B749978;
case 0x74997d:c.instructions+=6;goto B74997d;
case 0x74997f:c.instructions+=5;goto B74997f;
case 0x749985:c.instructions+=4;goto B749985;
case 0x749986:c.instructions+=3;goto B749986;
case 0x74998b:c.instructions+=2;goto B74998b;
case 0x74998c:c.instructions+=1;goto B74998c;
case 0x749991:goto L749991;
case 0x749994:c.instructions+=2;goto B749994;
case 0x749995:c.instructions+=1;goto B749995;
case 0x74999a:goto L74999a;
case 0x74999d:c.instructions+=7;goto B74999d;
case 0x7499a2:c.instructions+=6;goto B7499a2;
case 0x7499a4:c.instructions+=5;goto B7499a4;
case 0x7499aa:c.instructions+=4;goto B7499aa;
case 0x7499ab:c.instructions+=3;goto B7499ab;
case 0x7499b0:c.instructions+=2;goto B7499b0;
case 0x7499b1:c.instructions+=1;goto B7499b1;
case 0x7499b6:goto L7499b6;
case 0x7499b9:c.instructions+=2;goto B7499b9;
case 0x7499ba:c.instructions+=1;goto B7499ba;
case 0x7499bf:goto L7499bf;
case 0x7499c2:c.instructions+=7;goto B7499c2;
case 0x7499c7:c.instructions+=6;goto B7499c7;
case 0x7499c9:c.instructions+=5;goto B7499c9;
case 0x7499cf:c.instructions+=4;goto B7499cf;
case 0x7499d0:c.instructions+=3;goto B7499d0;
case 0x7499d5:c.instructions+=2;goto B7499d5;
case 0x7499d6:c.instructions+=1;goto B7499d6;
case 0x7499db:goto L7499db;
case 0x7499de:c.instructions+=2;goto B7499de;
case 0x7499df:c.instructions+=1;goto B7499df;
case 0x7499e4:goto L7499e4;
case 0x7499e7:c.instructions+=7;goto B7499e7;
case 0x7499ec:c.instructions+=6;goto B7499ec;
case 0x7499ee:c.instructions+=5;goto B7499ee;
case 0x7499f4:c.instructions+=4;goto B7499f4;
case 0x7499f5:c.instructions+=3;goto B7499f5;
case 0x7499fa:c.instructions+=2;goto B7499fa;
case 0x7499fb:c.instructions+=1;goto B7499fb;
case 0x749a00:goto L749a00;
case 0x749a03:c.instructions+=2;goto B749a03;
case 0x749a04:c.instructions+=1;goto B749a04;
case 0x749a09:goto L749a09;
case 0x749a0c:c.instructions+=4;goto B749a0c;
case 0x749a0e:c.instructions+=3;goto B749a0e;
case 0x749a13:c.instructions+=2;goto B749a13;
case 0x749a14:c.instructions+=1;goto B749a14;
case 0x749a19:goto L749a19;
case 0x749a1c:c.instructions+=2;goto B749a1c;
case 0x749a1d:c.instructions+=1;goto B749a1d;
case 0x749a22:goto L749a22;
case 0x749a25:c.instructions+=5;goto B749a25;
case 0x749a2a:c.instructions+=4;goto B749a2a;
case 0x749a2f:c.instructions+=3;goto B749a2f;
case 0x749a30:c.instructions+=2;goto B749a30;
case 0x749a36:c.instructions+=1;goto B749a36;
case 0x749a3b:goto L749a3b;
case 0x749a3e:c.instructions+=2;goto B749a3e;
case 0x749a3f:c.instructions+=1;goto B749a3f;
case 0x749a44:goto L749a44;
case 0x749a46:c.instructions+=10;goto B749a46;
case 0x749a4c:c.instructions+=9;goto B749a4c;
case 0x749a52:c.instructions+=8;goto B749a52;
case 0x749a53:c.instructions+=7;goto B749a53;
case 0x749a55:c.instructions+=6;goto B749a55;
case 0x749a5b:c.instructions+=5;goto B749a5b;
case 0x749a5c:c.instructions+=4;goto B749a5c;
case 0x749a62:c.instructions+=3;goto B749a62;
case 0x749a63:c.instructions+=2;goto B749a63;
case 0x749a64:c.instructions+=1;goto B749a64;
case 0x749a69:goto L749a69;
case 0x749a6b:c.instructions+=9;goto B749a6b;
case 0x749a71:c.instructions+=8;goto B749a71;
case 0x749a72:c.instructions+=7;goto B749a72;
case 0x749a74:c.instructions+=6;goto B749a74;
case 0x749a7a:c.instructions+=5;goto B749a7a;
case 0x749a7b:c.instructions+=4;goto B749a7b;
case 0x749a81:c.instructions+=3;goto B749a81;
case 0x749a82:c.instructions+=2;goto B749a82;
case 0x749a83:c.instructions+=1;goto B749a83;
case 0x749a88:goto L749a88;
case 0x749a8a:c.instructions+=9;goto B749a8a;
case 0x749a90:c.instructions+=8;goto B749a90;
case 0x749a91:c.instructions+=7;goto B749a91;
case 0x749a93:c.instructions+=6;goto B749a93;
case 0x749a99:c.instructions+=5;goto B749a99;
case 0x749a9a:c.instructions+=4;goto B749a9a;
case 0x749aa0:c.instructions+=3;goto B749aa0;
case 0x749aa1:c.instructions+=2;goto B749aa1;
case 0x749aa2:c.instructions+=1;goto B749aa2;
case 0x749aa7:goto L749aa7;
case 0x749aaa:c.instructions+=10;goto B749aaa;
case 0x749aac:c.instructions+=9;goto B749aac;
case 0x749ab2:c.instructions+=8;goto B749ab2;
case 0x749ab3:c.instructions+=7;goto B749ab3;
case 0x749ab5:c.instructions+=6;goto B749ab5;
case 0x749abb:c.instructions+=5;goto B749abb;
case 0x749abc:c.instructions+=4;goto B749abc;
case 0x749ac2:c.instructions+=3;goto B749ac2;
case 0x749ac3:c.instructions+=2;goto B749ac3;
case 0x749ac4:c.instructions+=1;goto B749ac4;
case 0x749ac9:goto L749ac9;
case 0x749acc:c.instructions+=5;goto B749acc;
case 0x749acd:c.instructions+=4;goto B749acd;
case 0x749ace:c.instructions+=3;goto B749ace;
case 0x749acf:c.instructions+=2;goto B749acf;
case 0x749ad0:c.instructions+=1;goto B749ad0;
case 0x749ae0:goto L749ae0;
case 0x749ae1:c.instructions+=10;goto B749ae1;
case 0x749ae5:c.instructions+=9;goto B749ae5;
case 0x749ae6:c.instructions+=8;goto B749ae6;
case 0x749aea:c.instructions+=7;goto B749aea;
case 0x749af0:c.instructions+=6;goto B749af0;
case 0x749af1:c.instructions+=5;goto B749af1;
case 0x749af6:c.instructions+=4;goto B749af6;
case 0x749afc:c.instructions+=3;goto B749afc;
case 0x749b01:c.instructions+=2;goto B749b01;
case 0x749b02:c.instructions+=1;goto B749b02;
case 0x749b07:goto L749b07;
case 0x749b0d:c.instructions+=5;goto B749b0d;
case 0x749b0e:c.instructions+=4;goto B749b0e;
case 0x749b13:c.instructions+=3;goto B749b13;
case 0x749b18:c.instructions+=2;goto B749b18;
case 0x749b19:c.instructions+=1;goto B749b19;
case 0x749b1e:goto L749b1e;
case 0x749b24:c.instructions+=5;goto B749b24;
case 0x749b25:c.instructions+=4;goto B749b25;
case 0x749b2a:c.instructions+=3;goto B749b2a;
case 0x749b2f:c.instructions+=2;goto B749b2f;
case 0x749b30:c.instructions+=1;goto B749b30;
case 0x749b35:goto L749b35;
case 0x749b3b:c.instructions+=5;goto B749b3b;
case 0x749b3c:c.instructions+=4;goto B749b3c;
case 0x749b41:c.instructions+=3;goto B749b41;
case 0x749b46:c.instructions+=2;goto B749b46;
case 0x749b47:c.instructions+=1;goto B749b47;
case 0x749b4c:goto L749b4c;
case 0x749b4f:c.instructions+=6;goto B749b4f;
case 0x749b55:c.instructions+=5;goto B749b55;
case 0x749b56:c.instructions+=4;goto B749b56;
case 0x749b5b:c.instructions+=3;goto B749b5b;
case 0x749b60:c.instructions+=2;goto B749b60;
case 0x749b61:c.instructions+=1;goto B749b61;
case 0x749b66:goto L749b66;
case 0x749b6c:c.instructions+=5;goto B749b6c;
case 0x749b6d:c.instructions+=4;goto B749b6d;
case 0x749b72:c.instructions+=3;goto B749b72;
case 0x749b77:c.instructions+=2;goto B749b77;
case 0x749b78:c.instructions+=1;goto B749b78;
case 0x749b7d:goto L749b7d;
case 0x749b83:c.instructions+=5;goto B749b83;
case 0x749b84:c.instructions+=4;goto B749b84;
case 0x749b89:c.instructions+=3;goto B749b89;
case 0x749b8e:c.instructions+=2;goto B749b8e;
case 0x749b8f:c.instructions+=1;goto B749b8f;
case 0x749b94:goto L749b94;
case 0x749b9a:c.instructions+=5;goto B749b9a;
case 0x749b9b:c.instructions+=4;goto B749b9b;
case 0x749ba0:c.instructions+=3;goto B749ba0;
case 0x749ba5:c.instructions+=2;goto B749ba5;
case 0x749ba6:c.instructions+=1;goto B749ba6;
case 0x749bab:goto L749bab;
case 0x749bae:c.instructions+=6;goto B749bae;
case 0x749bb4:c.instructions+=5;goto B749bb4;
case 0x749bb5:c.instructions+=4;goto B749bb5;
case 0x749bba:c.instructions+=3;goto B749bba;
case 0x749bbf:c.instructions+=2;goto B749bbf;
case 0x749bc0:c.instructions+=1;goto B749bc0;
case 0x749bc5:goto L749bc5;
case 0x749bcb:c.instructions+=5;goto B749bcb;
case 0x749bcc:c.instructions+=4;goto B749bcc;
case 0x749bd1:c.instructions+=3;goto B749bd1;
case 0x749bd6:c.instructions+=2;goto B749bd6;
case 0x749bd7:c.instructions+=1;goto B749bd7;
case 0x749bdc:goto L749bdc;
case 0x749be2:c.instructions+=5;goto B749be2;
case 0x749be3:c.instructions+=4;goto B749be3;
case 0x749be8:c.instructions+=3;goto B749be8;
case 0x749bed:c.instructions+=2;goto B749bed;
case 0x749bee:c.instructions+=1;goto B749bee;
case 0x749bf3:goto L749bf3;
case 0x749bf9:c.instructions+=5;goto B749bf9;
case 0x749bfa:c.instructions+=4;goto B749bfa;
case 0x749bff:c.instructions+=3;goto B749bff;
case 0x749c04:c.instructions+=2;goto B749c04;
case 0x749c05:c.instructions+=1;goto B749c05;
case 0x749c0a:goto L749c0a;
case 0x749c10:c.instructions+=6;goto B749c10;
case 0x749c13:c.instructions+=5;goto B749c13;
case 0x749c14:c.instructions+=4;goto B749c14;
case 0x749c19:c.instructions+=3;goto B749c19;
case 0x749c1e:c.instructions+=2;goto B749c1e;
case 0x749c1f:c.instructions+=1;goto B749c1f;
case 0x749c24:goto L749c24;
case 0x749c2a:c.instructions+=5;goto B749c2a;
case 0x749c2b:c.instructions+=4;goto B749c2b;
case 0x749c30:c.instructions+=3;goto B749c30;
case 0x749c35:c.instructions+=2;goto B749c35;
case 0x749c36:c.instructions+=1;goto B749c36;
case 0x749c3b:goto L749c3b;
case 0x749c3e:c.instructions+=3;goto B749c3e;
case 0x749c3f:c.instructions+=2;goto B749c3f;
case 0x749c40:c.instructions+=1;goto B749c40;
case 0x749c50:goto L749c50;
case 0x749c51:c.instructions+=8;goto B749c51;
case 0x749c52:c.instructions+=7;goto B749c52;
case 0x749c56:c.instructions+=6;goto B749c56;
case 0x749c57:c.instructions+=5;goto B749c57;
case 0x749c5b:c.instructions+=4;goto B749c5b;
case 0x749c5c:c.instructions+=3;goto B749c5c;
case 0x749c5e:c.instructions+=2;goto B749c5e;
case 0x749c63:c.instructions+=1;goto B749c63;
case 0x749c65:goto L749c65;
case 0x749c67:goto L749c67;
case 0x749c6c:c.instructions+=8;goto B749c6c;
case 0x749c6e:c.instructions+=7;goto B749c6e;
case 0x749c6f:c.instructions+=6;goto B749c6f;
case 0x749c71:c.instructions+=5;goto B749c71;
case 0x749c77:c.instructions+=4;goto B749c77;
case 0x749c7c:c.instructions+=3;goto B749c7c;
case 0x749c7d:c.instructions+=2;goto B749c7d;
case 0x749c7e:c.instructions+=1;goto B749c7e;
case 0x749c83:goto L749c83;
case 0x749c86:c.instructions+=2;goto B749c86;
case 0x749c87:c.instructions+=1;goto B749c87;
case 0x749c8c:goto L749c8c;
case 0x749c8f:c.instructions+=7;goto B749c8f;
case 0x749c94:c.instructions+=6;goto B749c94;
case 0x749c99:c.instructions+=5;goto B749c99;
case 0x749c9c:c.instructions+=4;goto B749c9c;
case 0x749c9d:c.instructions+=3;goto B749c9d;
case 0x749ca2:c.instructions+=2;goto B749ca2;
case 0x749ca3:c.instructions+=1;goto B749ca3;
case 0x749ca8:goto L749ca8;
case 0x749cab:c.instructions+=2;goto B749cab;
case 0x749cac:c.instructions+=1;goto B749cac;
case 0x749cb1:goto L749cb1;
case 0x749cb4:c.instructions+=4;goto B749cb4;
case 0x749cb6:c.instructions+=3;goto B749cb6;
case 0x749cbb:c.instructions+=2;goto B749cbb;
case 0x749cbc:c.instructions+=1;goto B749cbc;
case 0x749cc1:goto L749cc1;
case 0x749cc4:c.instructions+=2;goto B749cc4;
case 0x749cc5:c.instructions+=1;goto B749cc5;
case 0x749cca:goto L749cca;
case 0x749ccc:c.instructions+=12;goto B749ccc;
case 0x749ccf:c.instructions+=11;goto B749ccf;
case 0x749cd5:c.instructions+=10;goto B749cd5;
case 0x749cd7:c.instructions+=9;goto B749cd7;
case 0x749cd9:c.instructions+=8;goto B749cd9;
case 0x749cdc:c.instructions+=7;goto B749cdc;
case 0x749cdf:c.instructions+=6;goto B749cdf;
case 0x749ce2:c.instructions+=5;goto B749ce2;
case 0x749ce4:c.instructions+=4;goto B749ce4;
case 0x749cea:c.instructions+=3;goto B749cea;
case 0x749cf0:c.instructions+=2;goto B749cf0;
case 0x749cf6:c.instructions+=1;goto B749cf6;
case 0x749cf8:goto L749cf8;
case 0x749cfa:c.instructions+=1;goto B749cfa;
case 0x749cfc:goto L749cfc;
case 0x749d03:goto L749d03;
case 0x749d08:c.instructions+=6;goto B749d08;
case 0x749d0a:c.instructions+=5;goto B749d0a;
case 0x749d10:c.instructions+=4;goto B749d10;
case 0x749d11:c.instructions+=3;goto B749d11;
case 0x749d16:c.instructions+=2;goto B749d16;
case 0x749d17:c.instructions+=1;goto B749d17;
case 0x749d1c:goto L749d1c;
case 0x749d1f:c.instructions+=2;goto B749d1f;
case 0x749d20:c.instructions+=1;goto B749d20;
case 0x749d25:goto L749d25;
case 0x749d27:c.instructions+=9;goto B749d27;
case 0x749d2d:c.instructions+=8;goto B749d2d;
case 0x749d2e:c.instructions+=7;goto B749d2e;
case 0x749d30:c.instructions+=6;goto B749d30;
case 0x749d36:c.instructions+=5;goto B749d36;
case 0x749d37:c.instructions+=4;goto B749d37;
case 0x749d3d:c.instructions+=3;goto B749d3d;
case 0x749d3e:c.instructions+=2;goto B749d3e;
case 0x749d3f:c.instructions+=1;goto B749d3f;
case 0x749d44:goto L749d44;
case 0x749d46:c.instructions+=9;goto B749d46;
case 0x749d4c:c.instructions+=8;goto B749d4c;
case 0x749d4d:c.instructions+=7;goto B749d4d;
case 0x749d4f:c.instructions+=6;goto B749d4f;
case 0x749d55:c.instructions+=5;goto B749d55;
case 0x749d56:c.instructions+=4;goto B749d56;
case 0x749d5c:c.instructions+=3;goto B749d5c;
case 0x749d5d:c.instructions+=2;goto B749d5d;
case 0x749d5e:c.instructions+=1;goto B749d5e;
case 0x749d63:goto L749d63;
case 0x749d66:c.instructions+=10;goto B749d66;
case 0x749d68:c.instructions+=9;goto B749d68;
case 0x749d6e:c.instructions+=8;goto B749d6e;
case 0x749d6f:c.instructions+=7;goto B749d6f;
case 0x749d71:c.instructions+=6;goto B749d71;
case 0x749d77:c.instructions+=5;goto B749d77;
case 0x749d78:c.instructions+=4;goto B749d78;
case 0x749d7e:c.instructions+=3;goto B749d7e;
case 0x749d7f:c.instructions+=2;goto B749d7f;
case 0x749d80:c.instructions+=1;goto B749d80;
case 0x749d85:goto L749d85;
case 0x749d87:c.instructions+=9;goto B749d87;
case 0x749d8d:c.instructions+=8;goto B749d8d;
case 0x749d8e:c.instructions+=7;goto B749d8e;
case 0x749d90:c.instructions+=6;goto B749d90;
case 0x749d96:c.instructions+=5;goto B749d96;
case 0x749d97:c.instructions+=4;goto B749d97;
case 0x749d9d:c.instructions+=3;goto B749d9d;
case 0x749d9e:c.instructions+=2;goto B749d9e;
case 0x749d9f:c.instructions+=1;goto B749d9f;
case 0x749da4:goto L749da4;
case 0x749da7:c.instructions+=5;goto B749da7;
case 0x749da8:c.instructions+=4;goto B749da8;
case 0x749da9:c.instructions+=3;goto B749da9;
case 0x749daa:c.instructions+=2;goto B749daa;
case 0x749dab:c.instructions+=1;goto B749dab;
case 0x749db0:goto L749db0;
case 0x749db4:c.instructions+=8;goto B749db4;
case 0x749db8:c.instructions+=7;goto B749db8;
case 0x749dbd:c.instructions+=6;goto B749dbd;
case 0x749dbe:c.instructions+=5;goto B749dbe;
case 0x749dc3:c.instructions+=4;goto B749dc3;
case 0x749dc9:c.instructions+=3;goto B749dc9;
case 0x749dce:c.instructions+=2;goto B749dce;
case 0x749dcf:c.instructions+=1;goto B749dcf;
case 0x749dd4:goto L749dd4;
case 0x749dd7:c.instructions+=1;goto B749dd7;
case 0x749de0:goto L749de0;
case 0x749de1:c.instructions+=7;goto B749de1;
case 0x749de5:c.instructions+=6;goto B749de5;
case 0x749de6:c.instructions+=5;goto B749de6;
case 0x749deb:c.instructions+=4;goto B749deb;
case 0x749ded:c.instructions+=3;goto B749ded;
case 0x749def:c.instructions+=2;goto B749def;
case 0x749df4:c.instructions+=1;goto B749df4;
case 0x749df6:goto L749df6;
case 0x749df8:goto L749df8;
case 0x749dfc:c.instructions+=5;goto B749dfc;
case 0x749dfd:c.instructions+=4;goto B749dfd;
case 0x749e03:c.instructions+=3;goto B749e03;
case 0x749e08:c.instructions+=2;goto B749e08;
case 0x749e09:c.instructions+=1;goto B749e09;
case 0x749e0e:goto L749e0e;
case 0x749e11:c.instructions+=2;goto B749e11;
case 0x749e12:c.instructions+=1;goto B749e12;
case 0x749e17:goto L749e17;
case 0x749e19:c.instructions+=9;goto B749e19;
case 0x749e1c:c.instructions+=8;goto B749e1c;
case 0x749e1d:c.instructions+=7;goto B749e1d;
case 0x749e1f:c.instructions+=6;goto B749e1f;
case 0x749e22:c.instructions+=5;goto B749e22;
case 0x749e23:c.instructions+=4;goto B749e23;
case 0x749e26:c.instructions+=3;goto B749e26;
case 0x749e27:c.instructions+=2;goto B749e27;
case 0x749e28:c.instructions+=1;goto B749e28;
case 0x749e2d:goto L749e2d;
case 0x749e2f:c.instructions+=9;goto B749e2f;
case 0x749e35:c.instructions+=8;goto B749e35;
case 0x749e36:c.instructions+=7;goto B749e36;
case 0x749e38:c.instructions+=6;goto B749e38;
case 0x749e3b:c.instructions+=5;goto B749e3b;
case 0x749e3c:c.instructions+=4;goto B749e3c;
case 0x749e3f:c.instructions+=3;goto B749e3f;
case 0x749e40:c.instructions+=2;goto B749e40;
case 0x749e41:c.instructions+=1;goto B749e41;
case 0x749e46:goto L749e46;
case 0x749e49:c.instructions+=10;goto B749e49;
case 0x749e4b:c.instructions+=9;goto B749e4b;
case 0x749e51:c.instructions+=8;goto B749e51;
case 0x749e52:c.instructions+=7;goto B749e52;
case 0x749e54:c.instructions+=6;goto B749e54;
case 0x749e5a:c.instructions+=5;goto B749e5a;
case 0x749e5b:c.instructions+=4;goto B749e5b;
case 0x749e61:c.instructions+=3;goto B749e61;
case 0x749e62:c.instructions+=2;goto B749e62;
case 0x749e63:c.instructions+=1;goto B749e63;
case 0x749e68:goto L749e68;
case 0x749e6a:c.instructions+=9;goto B749e6a;
case 0x749e70:c.instructions+=8;goto B749e70;
case 0x749e71:c.instructions+=7;goto B749e71;
case 0x749e73:c.instructions+=6;goto B749e73;
case 0x749e79:c.instructions+=5;goto B749e79;
case 0x749e7a:c.instructions+=4;goto B749e7a;
case 0x749e80:c.instructions+=3;goto B749e80;
case 0x749e81:c.instructions+=2;goto B749e81;
case 0x749e82:c.instructions+=1;goto B749e82;
case 0x749e87:goto L749e87;
case 0x749e8d:c.instructions+=4;goto B749e8d;
case 0x749e90:c.instructions+=3;goto B749e90;
case 0x749e91:c.instructions+=2;goto B749e91;
case 0x749e92:c.instructions+=1;goto B749e92;
case 0x749ea0:goto L749ea0;
case 0x749ea1:c.instructions+=4;goto B749ea1;
case 0x749ea2:c.instructions+=3;goto B749ea2;
case 0x749ea6:c.instructions+=2;goto B749ea6;
case 0x749ea8:c.instructions+=1;goto B749ea8;
case 0x749eaa:goto L749eaa;
case 0x749eaf:c.instructions+=1;goto B749eaf;
case 0x749eb1:goto L749eb1;
case 0x749eb7:c.instructions+=1;goto B749eb7;
case 0x749eb9:goto L749eb9;
case 0x749ebe:c.instructions+=1;goto B749ebe;
case 0x749ec0:goto L749ec0;
case 0x749ec6:c.instructions+=1;goto B749ec6;
case 0x749ec8:goto L749ec8;
case 0x749ecd:goto L749ecd;
case 0x749ed2:c.instructions+=1;goto B749ed2;
case 0x749ed7:goto L749ed7;
case 0x749ed9:c.instructions+=3;goto B749ed9;
case 0x749edc:c.instructions+=2;goto B749edc;
case 0x749ede:c.instructions+=1;goto B749ede;
case 0x749ee0:goto L749ee0;
case 0x749ee5:c.instructions+=2;goto B749ee5;
case 0x749eef:c.instructions+=1;goto B749eef;
case 0x749ef4:goto L749ef4;
case 0x749ef5:c.instructions+=2;goto B749ef5;
case 0x749efb:c.instructions+=1;goto B749efb;
case 0x749f00:goto L749f00;
case 0x749f06:c.instructions+=5;goto B749f06;
case 0x749f09:c.instructions+=4;goto B749f09;
case 0x749f0b:c.instructions+=3;goto B749f0b;
case 0x749f0d:c.instructions+=2;goto B749f0d;
case 0x749f10:c.instructions+=1;goto B749f10;
case 0x749f12:goto L749f12;
case 0x749f14:c.instructions+=1;goto B749f14;
case 0x749f16:goto L749f16;
case 0x749f18:c.instructions+=1;goto B749f18;
case 0x749f1a:goto L749f1a;
case 0x749f1b:c.instructions+=1;goto B749f1b;
case 0x749f20:goto L749f20;
case 0x749f23:goto L749f23;
case 0x749f25:c.instructions+=2;goto B749f25;
case 0x749f27:c.instructions+=1;goto B749f27;
case 0x749f29:goto L749f29;
case 0x749f2a:c.instructions+=1;goto B749f2a;
case 0x749f2f:goto L749f2f;
case 0x749f32:goto L749f32;
case 0x749f33:c.instructions+=1;goto B749f33;
case 0x749f38:goto L749f38;
case 0x749f3b:c.instructions+=4;goto B749f3b;
case 0x749f3c:c.instructions+=3;goto B749f3c;
case 0x749f3e:c.instructions+=2;goto B749f3e;
case 0x749f3f:c.instructions+=1;goto B749f3f;
case 0x749f40:goto L749f40;
case 0x749f41:c.instructions+=3;goto B749f41;
case 0x749f43:c.instructions+=2;goto B749f43;
case 0x749f44:c.instructions+=1;goto B749f44;
case 0x749f50:goto L749f50;
case 0x749f51:c.instructions+=5;goto B749f51;
case 0x749f52:c.instructions+=4;goto B749f52;
case 0x749f56:c.instructions+=3;goto B749f56;
case 0x749f57:c.instructions+=2;goto B749f57;
case 0x749f59:c.instructions+=1;goto B749f59;
case 0x749f5e:goto L749f5e;
case 0x749f64:c.instructions+=3;goto B749f64;
case 0x749f67:c.instructions+=2;goto B749f67;
case 0x749f6a:c.instructions+=1;goto B749f6a;
case 0x749f6c:goto L749f6c;
case 0x749f6e:c.instructions+=3;goto B749f6e;
case 0x749f70:c.instructions+=2;goto B749f70;
case 0x749f71:c.instructions+=1;goto B749f71;
case 0x749f74:goto L749f74;
case 0x749f76:c.instructions+=3;goto B749f76;
case 0x749f77:c.instructions+=2;goto B749f77;
case 0x749f79:c.instructions+=1;goto B749f79;
case 0x749f7b:goto L749f7b;
case 0x749f80:c.instructions+=8;goto B749f80;
case 0x749f82:c.instructions+=7;goto B749f82;
case 0x749f87:c.instructions+=6;goto B749f87;
case 0x749f89:c.instructions+=5;goto B749f89;
case 0x749f8e:c.instructions+=4;goto B749f8e;
case 0x749f94:c.instructions+=3;goto B749f94;
case 0x749f95:c.instructions+=2;goto B749f95;
case 0x749f98:c.instructions+=1;goto B749f98;
case 0x749f9d:goto L749f9d;
case 0x749fa0:c.instructions+=3;goto B749fa0;
case 0x749fa6:c.instructions+=2;goto B749fa6;
case 0x749fac:c.instructions+=1;goto B749fac;
case 0x749fad:goto L749fad;
case 0x749fb4:c.instructions+=1;goto B749fb4;
case 0x749fb6:goto L749fb6;
case 0x749fbb:c.instructions+=4;goto B749fbb;
case 0x749fc0:c.instructions+=3;goto B749fc0;
case 0x749fc5:c.instructions+=2;goto B749fc5;
case 0x749fc6:c.instructions+=1;goto B749fc6;
case 0x749fcb:goto L749fcb;
case 0x749fce:c.instructions+=1;goto B749fce;
case 0x749fd4:goto L749fd4;
case 0x749fda:c.instructions+=1;goto B749fda;
case 0x749fdc:goto L749fdc;
case 0x749fe1:goto L749fe1;
case 0x749fe7:c.instructions+=1;goto B749fe7;
case 0x749fe9:goto L749fe9;
case 0x749fee:c.instructions+=4;goto B749fee;
case 0x749ff3:c.instructions+=3;goto B749ff3;
case 0x749ff8:c.instructions+=2;goto B749ff8;
case 0x749ff9:c.instructions+=1;goto B749ff9;
case 0x749ffe:goto L749ffe;
default:missing_instruction(c.pc);}
B749000:L749000:{c.instructions+=4;NFSU2_TR(0x749000);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749001:{NFSU2_TR(0x749001);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x25ull));
s1(u32(r4(U+0)),r1(U+4));
}
B749006:{NFSU2_TR(0x749006);
u8 U[5];
w4(U+0,u32(u32(u32(0x29ull))+u32(r4(R+16))));
w1(U+4,u8(0x7bull));
s1(u32(r4(U+0)),r1(U+4));
}
B74900b:{NFSU2_TR(0x74900b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749010ull));
TAIL_STATIC(0x7414a0u,741);
}
B749010:L749010:{c.instructions+=3;NFSU2_TR(0x749010);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749013:{NFSU2_TR(0x749013);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749014:{NFSU2_TR(0x749014);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749019ull));
TAIL_STATIC(0x742360u,742);
}
B749019:L749019:{c.instructions+=3;NFSU2_TR(0x749019);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74901c:{NFSU2_TR(0x74901c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74901e:{NFSU2_TR(0x74901e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L749071;}}
}
B749020:L749020:{c.instructions+=5;NFSU2_TR(0x749020);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B749022:{NFSU2_TR(0x749022);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B749026:{NFSU2_TR(0x749026);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749027:{NFSU2_TR(0x749027);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749028:{NFSU2_TR(0x749028);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74902dull));
TAIL_STATIC(0x75f140u,75f);
}
B74902d:L74902d:{c.instructions+=4;NFSU2_TR(0x74902d);
__builtin_memmove((R+12),(R+0),4);
}
B74902f:{NFSU2_TR(0x74902f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749032:{NFSU2_TR(0x749032);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B749034:{NFSU2_TR(0x749034);
if(r1(R+518)){{goto L749071;}}
}
B749036:L749036:{c.instructions+=3;NFSU2_TR(0x749036);
u8 U[4];
w4(U+0,u32(0x7d2c20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74903b:{NFSU2_TR(0x74903b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74903c:{NFSU2_TR(0x74903c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749041ull));
TAIL_STATIC(0x75f140u,75f);
}
B749041:L749041:{c.instructions+=4;NFSU2_TR(0x749041);
__builtin_memmove((R+24),(R+0),4);
}
B749043:{NFSU2_TR(0x749043);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749046:{NFSU2_TR(0x749046);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B749048:{NFSU2_TR(0x749048);
if(r1(R+518)){{goto L749071;}}
}
B74904a:L74904a:{c.instructions+=3;NFSU2_TR(0x74904a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74904e:{NFSU2_TR(0x74904e);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B749051:{NFSU2_TR(0x749051);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B749054:L749054:{c.instructions+=4;NFSU2_TR(0x749054);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B749056:{NFSU2_TR(0x749056);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B749057:{NFSU2_TR(0x749057);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B749059:{NFSU2_TR(0x749059);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x749054u);}goto L749054;}}
}
B74905b:L74905b:{c.instructions+=6;NFSU2_TR(0x74905b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B74905d:{NFSU2_TR(0x74905d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B74905f:{NFSU2_TR(0x74905f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749060:{NFSU2_TR(0x749060);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749065:{NFSU2_TR(0x749065);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749066:{NFSU2_TR(0x749066);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74906bull));
TAIL_STATIC(0x741ec0u,741);
}
B74906b:L74906b:{c.instructions+=2;NFSU2_TR(0x74906b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74906e:{NFSU2_TR(0x74906e);
u8 U[1];
w1(U+0,u8(0x25ull));
s1(u32(r4(R+24)),r1(U+0));
}
B749071:L749071:{c.instructions+=9;NFSU2_TR(0x749071);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749076:{NFSU2_TR(0x749076);
u8 U[4];
w4(U+0,u32(0x3eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749078:{NFSU2_TR(0x749078);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74907c:{NFSU2_TR(0x74907c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74907d:{NFSU2_TR(0x74907d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74907f:{NFSU2_TR(0x74907f);
u8 U[4];
w4(U+0,u32(0x7a15e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749084:{NFSU2_TR(0x749084);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749085:{NFSU2_TR(0x749085);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74908d:{NFSU2_TR(0x74908d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749092ull));
TAIL_STATIC(0x741570u,741);
}
B749092:L749092:{c.instructions+=3;NFSU2_TR(0x749092);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B749095:{NFSU2_TR(0x749095);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749096:{NFSU2_TR(0x749096);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74909bull));
TAIL_STATIC(0x742360u,742);
}
B74909b:L74909b:{c.instructions+=3;NFSU2_TR(0x74909b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74909e:{NFSU2_TR(0x74909e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7490a0:{NFSU2_TR(0x7490a0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L749163;}}
}
B7490a6:L7490a6:{c.instructions+=4;NFSU2_TR(0x7490a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7490aa:{NFSU2_TR(0x7490aa);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7490ac:{NFSU2_TR(0x7490ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7490ad:{NFSU2_TR(0x7490ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7490b2ull));
TAIL_STATIC(0x75cf10u,75c);
}
B7490b2:L7490b2:{c.instructions+=4;NFSU2_TR(0x7490b2);
__builtin_memmove((R+24),(R+0),4);
}
B7490b4:{NFSU2_TR(0x7490b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7490b7:{NFSU2_TR(0x7490b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7490b9:{NFSU2_TR(0x7490b9);
if(r1(R+518)){{goto L749163;}}
}
B7490bf:L7490bf:{c.instructions+=6;NFSU2_TR(0x7490bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7490c3:{NFSU2_TR(0x7490c3);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B7490c6:{NFSU2_TR(0x7490c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7490c8:{NFSU2_TR(0x7490c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7490c9:{NFSU2_TR(0x7490c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7490ca:{NFSU2_TR(0x7490ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7490cfull));
TAIL_STATIC(0x75f140u,75f);
}
B7490cf:L7490cf:{c.instructions+=3;NFSU2_TR(0x7490cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7490d2:{NFSU2_TR(0x7490d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7490d4:{NFSU2_TR(0x7490d4);
if(r1(R+518)){{goto L74912e;}}
}
B7490d6:L7490d6:{c.instructions+=3;NFSU2_TR(0x7490d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7490da:{NFSU2_TR(0x7490da);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7490dd:{NFSU2_TR(0x7490dd);
__builtin_memmove((R+4),(R+4),4);
}
B7490e0:L7490e0:{c.instructions+=4;NFSU2_TR(0x7490e0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B7490e2:{NFSU2_TR(0x7490e2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7490e3:{NFSU2_TR(0x7490e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7490e5:{NFSU2_TR(0x7490e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7490e0u);}goto L7490e0;}}
}
B7490e7:L7490e7:{c.instructions+=10;NFSU2_TR(0x7490e7);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7490ec:{NFSU2_TR(0x7490ec);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7490f1:{NFSU2_TR(0x7490f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7490f8:{NFSU2_TR(0x7490f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7490f9:{NFSU2_TR(0x7490f9);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B7490fb:{NFSU2_TR(0x7490fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7490fe:{NFSU2_TR(0x7490fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7490ff:{NFSU2_TR(0x7490ff);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B749101:{NFSU2_TR(0x749101);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749102:{NFSU2_TR(0x749102);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749107ull));
TAIL_STATIC(0x7414a0u,741);
}
B749107:L749107:{c.instructions+=3;NFSU2_TR(0x749107);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74910a:{NFSU2_TR(0x74910a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74910b:{NFSU2_TR(0x74910b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749110ull));
TAIL_STATIC(0x742360u,742);
}
B749110:L749110:{c.instructions+=8;NFSU2_TR(0x749110);
u8 U[4];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B749117:{NFSU2_TR(0x749117);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749118:{NFSU2_TR(0x749118);
u8 U[4];
w4(U+0,u32(u32(u32(0x2aull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74911c:{NFSU2_TR(0x74911c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74911d:{NFSU2_TR(0x74911d);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749122:{NFSU2_TR(0x749122);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749123:{NFSU2_TR(0x749123);
u8 U[1];
w1(U+0,u8(0x2eull));
s1(u32(r4(R+24)),r1(U+0));
}
B749126:{NFSU2_TR(0x749126);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74912bull));
TAIL_STATIC(0x741a50u,741);
}
B74912b:L74912b:{c.instructions+=1;NFSU2_TR(0x74912b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B74912e:L74912e:{c.instructions+=11;NFSU2_TR(0x74912e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B749132:{NFSU2_TR(0x749132);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749137:{NFSU2_TR(0x749137);
u8 U[4];
w4(U+0,u32(0x3eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749139:{NFSU2_TR(0x749139);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74913d:{NFSU2_TR(0x74913d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74913e:{NFSU2_TR(0x74913e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74913f:{NFSU2_TR(0x74913f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749140:{NFSU2_TR(0x749140);
u8 U[4];
w4(U+0,u32(0x7a15e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749145:{NFSU2_TR(0x749145);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749146:{NFSU2_TR(0x749146);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74914a:{NFSU2_TR(0x74914a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74914full));
TAIL_STATIC(0x741570u,741);
}
B74914f:L74914f:{c.instructions+=3;NFSU2_TR(0x74914f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B749152:{NFSU2_TR(0x749152);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749153:{NFSU2_TR(0x749153);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749158ull));
TAIL_STATIC(0x742360u,742);
}
B749158:L749158:{c.instructions+=3;NFSU2_TR(0x749158);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74915b:{NFSU2_TR(0x74915b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74915d:{NFSU2_TR(0x74915d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7490a6u);}goto L7490a6;}}
}
B749163:L749163:{c.instructions+=7;NFSU2_TR(0x749163);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749168:{NFSU2_TR(0x749168);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74916d:{NFSU2_TR(0x74916d);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B749171:{NFSU2_TR(0x749171);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749172:{NFSU2_TR(0x749172);
u8 U[4];
w4(U+0,u32(0x7d2c5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749177:{NFSU2_TR(0x749177);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749178:{NFSU2_TR(0x749178);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74917dull));
TAIL_STATIC(0x7414a0u,741);
}
B74917d:L74917d:{c.instructions+=3;NFSU2_TR(0x74917d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749180:{NFSU2_TR(0x749180);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749181:{NFSU2_TR(0x749181);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749186ull));
TAIL_STATIC(0x742360u,742);
}
B749186:L749186:{c.instructions+=9;NFSU2_TR(0x749186);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B749189:{NFSU2_TR(0x749189);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74918d:{NFSU2_TR(0x74918d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74918e:{NFSU2_TR(0x74918e);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749193:{NFSU2_TR(0x749193);
__builtin_memmove((R+8),(R+4),4);
}
B749195:{NFSU2_TR(0x749195);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749196:{NFSU2_TR(0x749196);
u8 U[4];
w4(U+0,u32(0x7d2c54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74919b:{NFSU2_TR(0x74919b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74919c:{NFSU2_TR(0x74919c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7491a1ull));
TAIL_STATIC(0x7414a0u,741);
}
B7491a1:L7491a1:{c.instructions+=3;NFSU2_TR(0x7491a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7491a4:{NFSU2_TR(0x7491a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7491a5:{NFSU2_TR(0x7491a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7491aaull));
TAIL_STATIC(0x742360u,742);
}
B7491aa:L7491aa:{c.instructions+=9;NFSU2_TR(0x7491aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7491ad:{NFSU2_TR(0x7491ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7491b1:{NFSU2_TR(0x7491b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7491b2:{NFSU2_TR(0x7491b2);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7491b7:{NFSU2_TR(0x7491b7);
__builtin_memmove((R+4),(R+0),4);
}
B7491b9:{NFSU2_TR(0x7491b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7491ba:{NFSU2_TR(0x7491ba);
u8 U[4];
w4(U+0,u32(0x7d2c48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7491bf:{NFSU2_TR(0x7491bf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7491c0:{NFSU2_TR(0x7491c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7491c5ull));
TAIL_STATIC(0x7414a0u,741);
}
B7491c5:L7491c5:{c.instructions+=3;NFSU2_TR(0x7491c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7491c8:{NFSU2_TR(0x7491c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7491c9:{NFSU2_TR(0x7491c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7491ceull));
TAIL_STATIC(0x742360u,742);
}
B7491ce:L7491ce:{c.instructions+=4;NFSU2_TR(0x7491ce);
u8 U[5];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7491d2:{NFSU2_TR(0x7491d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7491d5:{NFSU2_TR(0x7491d5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7491d7:{NFSU2_TR(0x7491d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7491ff;}}
}
B7491d9:L7491d9:{c.instructions+=9;NFSU2_TR(0x7491d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7491db:{NFSU2_TR(0x7491db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7491dc:{NFSU2_TR(0x7491dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7491dd:{NFSU2_TR(0x7491dd);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+8)),r1(U+0));
}
B7491e0:{NFSU2_TR(0x7491e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7491e1:{NFSU2_TR(0x7491e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x510ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7491eb:{NFSU2_TR(0x7491eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7491ec:{NFSU2_TR(0x7491ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x244ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7491f3:{NFSU2_TR(0x7491f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7491f8ull));
TAIL_STATIC(0x76115eu,761);
}
B7491f8:L7491f8:{c.instructions+=2;NFSU2_TR(0x7491f8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x248ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x248ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x248ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7491fe:{NFSU2_TR(0x7491fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7491ff:L7491ff:{c.instructions+=4;NFSU2_TR(0x7491ff);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749201:{NFSU2_TR(0x749201);
u8 U[4];
w4(U+0,u32(0x7a16b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749206:{NFSU2_TR(0x749206);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749207:{NFSU2_TR(0x749207);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74920cull));
TAIL_STATIC(0x7414a0u,741);
}
B74920c:L74920c:{c.instructions+=3;NFSU2_TR(0x74920c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74920f:{NFSU2_TR(0x74920f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749210:{NFSU2_TR(0x749210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749215ull));
TAIL_STATIC(0x7420b0u,742);
}
B749215:L749215:{c.instructions+=4;NFSU2_TR(0x749215);
__builtin_memmove((R+24),(R+0),4);
}
B749217:{NFSU2_TR(0x749217);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74921a:{NFSU2_TR(0x74921a);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B74921d:{NFSU2_TR(0x74921d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L749226;}}
}
B74921f:L74921f:{c.instructions+=2;NFSU2_TR(0x74921f);
w4(R+24,u32(0x2ull));
}
B749224:{NFSU2_TR(0x749224);
{goto L749230;}
}
B749226:L749226:{c.instructions+=2;NFSU2_TR(0x749226);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x3cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B749229:{NFSU2_TR(0x749229);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L749230;}}
}
B74922b:L74922b:{c.instructions+=1;NFSU2_TR(0x74922b);
w4(R+24,u32(0x3cull));
}
B749230:L749230:{c.instructions+=1;NFSU2_TR(0x749230);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749235ull));
TAIL_STATIC(0x74b730u,74b);
}
B749235:L749235:{c.instructions+=7;NFSU2_TR(0x749235);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B74923b:{NFSU2_TR(0x74923b);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74923d:{NFSU2_TR(0x74923d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B74923f:{NFSU2_TR(0x74923f);
u8 U[4];
w4(U+0,u32(0x7d2c40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749244:{NFSU2_TR(0x749244);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749245:{NFSU2_TR(0x749245);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x530ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74924b:{NFSU2_TR(0x74924b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749250ull));
TAIL_STATIC(0x7414a0u,741);
}
B749250:L749250:{c.instructions+=3;NFSU2_TR(0x749250);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749253:{NFSU2_TR(0x749253);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749254:{NFSU2_TR(0x749254);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749259ull));
TAIL_STATIC(0x7420b0u,742);
}
B749259:L749259:{c.instructions+=4;NFSU2_TR(0x749259);
__builtin_memmove((R+24),(R+0),4);
}
B74925b:{NFSU2_TR(0x74925b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74925e:{NFSU2_TR(0x74925e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B749260:{NFSU2_TR(0x749260);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L749266;}}
}
B749262:L749262:{c.instructions+=2;NFSU2_TR(0x749262);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B749264:{NFSU2_TR(0x749264);
{goto L749270;}
}
B749266:L749266:{c.instructions+=2;NFSU2_TR(0x749266);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x3cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B749269:{NFSU2_TR(0x749269);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L749270;}}
}
B74926b:L74926b:{c.instructions+=1;NFSU2_TR(0x74926b);
w4(R+24,u32(0x3cull));
}
B749270:L749270:{c.instructions+=1;NFSU2_TR(0x749270);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749275ull));
TAIL_STATIC(0x74b730u,74b);
}
B749275:L749275:{c.instructions+=7;NFSU2_TR(0x749275);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B74927b:{NFSU2_TR(0x74927b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B74927d:{NFSU2_TR(0x74927d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x534ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B749283:{NFSU2_TR(0x749283);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B749287:{NFSU2_TR(0x749287);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749289:{NFSU2_TR(0x749289);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74928a:{NFSU2_TR(0x74928a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74928full));
TAIL_STATIC(0x75cf10u,75c);
}
B74928f:L74928f:{c.instructions+=4;NFSU2_TR(0x74928f);
__builtin_memmove((R+12),(R+0),4);
}
B749291:{NFSU2_TR(0x749291);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749294:{NFSU2_TR(0x749294);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B749296:{NFSU2_TR(0x749296);
if(r1(R+518)){{goto L7493be;}}
}
B74929c:L74929c:{c.instructions+=1;NFSU2_TR(0x74929c);
{goto L7492a5;}
}
B74929e:L74929e:{c.instructions+=1;NFSU2_TR(0x74929e);
u8 U[8];
w4(U+0,u32(u32(u32(0x25cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7492a5:L7492a5:{c.instructions+=4;NFSU2_TR(0x7492a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7492a8:{NFSU2_TR(0x7492a8);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7492aa:{NFSU2_TR(0x7492aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7492ab:{NFSU2_TR(0x7492ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7492b0ull));
TAIL_STATIC(0x75cf10u,75c);
}
B7492b0:L7492b0:{c.instructions+=4;NFSU2_TR(0x7492b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7492b3:{NFSU2_TR(0x7492b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7492b5:{NFSU2_TR(0x7492b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7492b9:{NFSU2_TR(0x7492b9);
if(r1(R+518)){{goto L7493be;}}
}
B7492bf:L7492bf:{c.instructions+=4;NFSU2_TR(0x7492bf);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B7492c1:{NFSU2_TR(0x7492c1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B7492c2:{NFSU2_TR(0x7492c2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7492c5:{NFSU2_TR(0x7492c5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7493be;}}
}
B7492cb:L7492cb:{c.instructions+=4;NFSU2_TR(0x7492cb);
__builtin_memmove((R+4),(R+0),4);
}
B7492cd:{NFSU2_TR(0x7492cd);
__builtin_memmove((R+8),(R+4),4);
}
B7492cf:{NFSU2_TR(0x7492cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7492d2:{NFSU2_TR(0x7492d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B7492d6:L7492d6:{c.instructions+=1;NFSU2_TR(0x7492d6);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7492d8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7492d6u);}goto L7492d6;}
}
B7492d8:L7492d8:{c.instructions+=3;NFSU2_TR(0x7492d8);
__builtin_memmove((R+4),(R+8),4);
}
B7492da:{NFSU2_TR(0x7492da);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7492dd:{NFSU2_TR(0x7492dd);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7492e2:L7492e2:{c.instructions+=1;NFSU2_TR(0x7492e2);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7492e4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7492e2u);}goto L7492e2;}
}
B7492e4:L7492e4:{c.instructions+=8;NFSU2_TR(0x7492e4);
u8 U[13];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B7492e9:{NFSU2_TR(0x7492e9);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7492ee:{NFSU2_TR(0x7492ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7492f5:{NFSU2_TR(0x7492f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7492f6:{NFSU2_TR(0x7492f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7492fa:{NFSU2_TR(0x7492fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7492fb:{NFSU2_TR(0x7492fb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7492fc:{NFSU2_TR(0x7492fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749301ull));
TAIL_STATIC(0x7414a0u,741);
}
B749301:L749301:{c.instructions+=3;NFSU2_TR(0x749301);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749304:{NFSU2_TR(0x749304);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749305:{NFSU2_TR(0x749305);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74930aull));
TAIL_STATIC(0x742360u,742);
}
B74930a:L74930a:{c.instructions+=7;NFSU2_TR(0x74930a);
u8 U[4];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B749311:{NFSU2_TR(0x749311);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749312:{NFSU2_TR(0x749312);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749314:{NFSU2_TR(0x749314);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B749318:{NFSU2_TR(0x749318);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74931a:{NFSU2_TR(0x74931a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74931b:{NFSU2_TR(0x74931b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749320ull));
TAIL_STATIC(0x741a50u,741);
}
B749320:L749320:{c.instructions+=4;NFSU2_TR(0x749320);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B749324:{NFSU2_TR(0x749324);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B749327:{NFSU2_TR(0x749327);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74932a:{NFSU2_TR(0x74932a);
__builtin_memmove((R+12),(R+12),4);
}
B749330:L749330:{c.instructions+=4;NFSU2_TR(0x749330);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B749332:{NFSU2_TR(0x749332);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B749333:{NFSU2_TR(0x749333);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B749335:{NFSU2_TR(0x749335);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x749330u);}goto L749330;}}
}
B749337:L749337:{c.instructions+=4;NFSU2_TR(0x749337);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B749339:{NFSU2_TR(0x749339);
__builtin_memmove((R+24),(R+0),4);
}
B74933b:{NFSU2_TR(0x74933b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74933d:{NFSU2_TR(0x74933d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L749351;}}
}
B74933f:L74933f:{c.instructions+=1;NFSU2_TR(0x74933f);
}
B749340:L749340:{c.instructions+=2;NFSU2_TR(0x749340);
u8 U[15];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(R+523,sborrow<u8>(r1(U+13),u8(0x20ull)));
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+14))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B749345:{NFSU2_TR(0x749345);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L749351;}}
}
B749347:L749347:{c.instructions+=4;NFSU2_TR(0x749347);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B749348:{NFSU2_TR(0x749348);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74934a:{NFSU2_TR(0x74934a);
u8 U[13];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B74934f:{NFSU2_TR(0x74934f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x749340u);}goto L749340;}}
}
B749351:L749351:{c.instructions+=4;NFSU2_TR(0x749351);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B749355:{NFSU2_TR(0x749355);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B749358:{NFSU2_TR(0x749358);
__builtin_memmove((R+0),(R+4),4);
}
B74935a:{NFSU2_TR(0x74935a);
if(r1(R+518)){{goto L749368;}}
}
B74935c:L74935c:{c.instructions+=1;NFSU2_TR(0x74935c);
__builtin_memmove((R+16),(R+16),4);
}
B749360:L749360:{c.instructions+=4;NFSU2_TR(0x749360);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B749363:{NFSU2_TR(0x749363);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B749364:{NFSU2_TR(0x749364);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B749366:{NFSU2_TR(0x749366);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x749360u);}goto L749360;}}
}
B749368:L749368:{c.instructions+=6;NFSU2_TR(0x749368);
__builtin_memmove((R+8),(R+0),4);
}
B74936a:{NFSU2_TR(0x74936a);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B74936e:{NFSU2_TR(0x74936e);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B749370:{NFSU2_TR(0x749370);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B749372:{NFSU2_TR(0x749372);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x100ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B749378:{NFSU2_TR(0x749378);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7493b7;}}
}
B74937a:L74937a:{c.instructions+=7;NFSU2_TR(0x74937a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B74937c:{NFSU2_TR(0x74937c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74937d:{NFSU2_TR(0x74937d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74937e:{NFSU2_TR(0x74937e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74937f:{NFSU2_TR(0x74937f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B749382:{NFSU2_TR(0x749382);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749383:{NFSU2_TR(0x749383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749388ull));
TAIL_STATIC(0x75cfd0u,75c);
}
B749388:L749388:{c.instructions+=5;NFSU2_TR(0x749388);
__builtin_memmove((R+4),(R+24),4);
}
B74938a:{NFSU2_TR(0x74938a);
__builtin_memmove((R+8),(R+4),4);
}
B74938c:{NFSU2_TR(0x74938c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B74938f:{NFSU2_TR(0x74938f);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B749393:{NFSU2_TR(0x749393);
__builtin_memmove((R+28),(R+12),4);
}
B749395:L749395:{c.instructions+=1;NFSU2_TR(0x749395);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L749397;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x749395u);}goto L749395;}
}
B749397:L749397:{c.instructions+=5;NFSU2_TR(0x749397);
__builtin_memmove((R+4),(R+8),4);
}
B749399:{NFSU2_TR(0x749399);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74939d:{NFSU2_TR(0x74939d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7493a0:{NFSU2_TR(0x7493a0);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7493a2:{NFSU2_TR(0x7493a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7493a3:L7493a3:{c.instructions+=1;NFSU2_TR(0x7493a3);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7493a5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7493a3u);}goto L7493a3;}
}
B7493a5:L7493a5:{c.instructions+=1;NFSU2_TR(0x7493a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7493aaull));
TAIL_STATIC(0x75cf10u,75c);
}
B7493aa:L7493aa:{c.instructions+=4;NFSU2_TR(0x7493aa);
__builtin_memmove((R+12),(R+0),4);
}
B7493ac:{NFSU2_TR(0x7493ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B7493af:{NFSU2_TR(0x7493af);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7493b1:{NFSU2_TR(0x7493b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74929eu);}goto L74929e;}}
}
B7493b7:L7493b7:{c.instructions+=1;NFSU2_TR(0x7493b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x25cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7493be:L7493be:{c.instructions+=3;NFSU2_TR(0x7493be);
u8 U[4];
w4(U+0,u32(0x7d2c54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7493c3:{NFSU2_TR(0x7493c3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7493c4:{NFSU2_TR(0x7493c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7493c9ull));
TAIL_STATIC(0x7414a0u,741);
}
B7493c9:L7493c9:{c.instructions+=5;NFSU2_TR(0x7493c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x524ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7493cf:{NFSU2_TR(0x7493cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7493d2:{NFSU2_TR(0x7493d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7493d4:{NFSU2_TR(0x7493d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7493d8:{NFSU2_TR(0x7493d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7493e4;}}
}
B7493da:L7493da:{c.instructions+=4;NFSU2_TR(0x7493da);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7493db:{NFSU2_TR(0x7493db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7493dc:{NFSU2_TR(0x7493dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7493dd:{NFSU2_TR(0x7493dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7493e2ull));
TAIL_STATIC(0x7560a0u,756);
}
B7493e2:L7493e2:{c.instructions+=1;NFSU2_TR(0x7493e2);
{goto L7493ed;}
}
B7493e4:L7493e4:{c.instructions+=4;NFSU2_TR(0x7493e4);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7493e6:{NFSU2_TR(0x7493e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7493e7:{NFSU2_TR(0x7493e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7493e8:{NFSU2_TR(0x7493e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7493edull));
TAIL_STATIC(0x755a80u,755);
}
B7493ed:L7493ed:{c.instructions+=3;NFSU2_TR(0x7493ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7493f0:{NFSU2_TR(0x7493f0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7493f2:{NFSU2_TR(0x7493f2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74941a;}}
}
B7493f4:L7493f4:{c.instructions+=9;NFSU2_TR(0x7493f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7493f6:{NFSU2_TR(0x7493f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7493f7:{NFSU2_TR(0x7493f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7493f8:{NFSU2_TR(0x7493f8);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B7493fb:{NFSU2_TR(0x7493fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7493fc:{NFSU2_TR(0x7493fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x510ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B749406:{NFSU2_TR(0x749406);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B749407:{NFSU2_TR(0x749407);
u8 U[8];
w4(U+0,u32(u32(u32(0x244ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74940e:{NFSU2_TR(0x74940e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749413ull));
TAIL_STATIC(0x76115eu,761);
}
B749413:L749413:{c.instructions+=2;NFSU2_TR(0x749413);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x248ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x248ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x248ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B749419:{NFSU2_TR(0x749419);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74941a:L74941a:{c.instructions+=7;NFSU2_TR(0x74941a);
u8 U[8];
w4(U+0,u32(u32(u32(0x254ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B749421:{NFSU2_TR(0x749421);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B749422:{NFSU2_TR(0x749422);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B749423:{NFSU2_TR(0x749423);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B749424:{NFSU2_TR(0x749424);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x538ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74942e:{NFSU2_TR(0x74942e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74942f:{NFSU2_TR(0x74942f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749434ull));
TAIL_STATIC(0x76115eu,761);
}
B749434:L749434:{c.instructions+=2;NFSU2_TR(0x749434);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x248ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x248ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x248ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74943a:{NFSU2_TR(0x74943a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B749440:L749440:{c.instructions+=4;NFSU2_TR(0x749440);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749441:{NFSU2_TR(0x749441);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B749445:{NFSU2_TR(0x749445);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x538ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74944c:{NFSU2_TR(0x74944c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7494a9;}}
}
B74944e:L74944e:{c.instructions+=3;NFSU2_TR(0x74944e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x524ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B749454:{NFSU2_TR(0x749454);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749455:{NFSU2_TR(0x749455);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74945aull));
TAIL_STATIC(0x7555c0u,755);
}
B74945a:L74945a:{c.instructions+=4;NFSU2_TR(0x74945a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x524ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B749460:{NFSU2_TR(0x749460);
u8 U[4];
w4(U+0,u32(0x64617461ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749465:{NFSU2_TR(0x749465);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749466:{NFSU2_TR(0x749466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74946bull));
TAIL_STATIC(0x755e80u,755);
}
B74946b:L74946b:{c.instructions+=3;NFSU2_TR(0x74946b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74946e:{NFSU2_TR(0x74946e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B749470:{NFSU2_TR(0x749470);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74947e;}}
}
B749472:L749472:{c.instructions+=2;NFSU2_TR(0x749472);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x538ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74947c:{NFSU2_TR(0x74947c);
{goto L7494a9;}
}
B74947e:L74947e:{c.instructions+=1;NFSU2_TR(0x74947e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7494a9;}}
}
B749480:L749480:{c.instructions+=4;NFSU2_TR(0x749480);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x524ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B749486:{NFSU2_TR(0x749486);
u8 U[4];
w4(U+0,u32(0x636f6465ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74948b:{NFSU2_TR(0x74948b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74948c:{NFSU2_TR(0x74948c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749491ull));
TAIL_STATIC(0x755e80u,755);
}
B749491:L749491:{c.instructions+=7;NFSU2_TR(0x749491);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xc8ull))));
}
B749496:{NFSU2_TR(0x749496);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749499:{NFSU2_TR(0x749499);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B74949b:{NFSU2_TR(0x74949b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B74949d:{NFSU2_TR(0x74949d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
}
B7494a0:{NFSU2_TR(0x7494a0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B7494a3:{NFSU2_TR(0x7494a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x538ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7494a9:L7494a9:{c.instructions+=2;NFSU2_TR(0x7494a9);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x538ull))));
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
B7494b0:{NFSU2_TR(0x7494b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74954f;}}
}
B7494b6:L7494b6:{c.instructions+=3;NFSU2_TR(0x7494b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x524ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7494bc:{NFSU2_TR(0x7494bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7494bd:{NFSU2_TR(0x7494bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7494c2ull));
TAIL_STATIC(0x7555c0u,755);
}
B7494c2:L7494c2:{c.instructions+=8;NFSU2_TR(0x7494c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7494c8:{NFSU2_TR(0x7494c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x528ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7494ce:{NFSU2_TR(0x7494ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x524ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7494d4:{NFSU2_TR(0x7494d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7494d5:{NFSU2_TR(0x7494d5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7494d7:{NFSU2_TR(0x7494d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7494d8:{NFSU2_TR(0x7494d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7494d9:{NFSU2_TR(0x7494d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7494deull));
TAIL_STATIC(0x755f50u,755);
}
B7494de:L7494de:{c.instructions+=3;NFSU2_TR(0x7494de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B7494e1:{NFSU2_TR(0x7494e1);
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
B7494e4:{NFSU2_TR(0x7494e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7494f2;}}
}
B7494e6:L7494e6:{c.instructions+=3;NFSU2_TR(0x7494e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x538ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7494f0:{NFSU2_TR(0x7494f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7494f1:{NFSU2_TR(0x7494f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7494f2:L7494f2:{c.instructions+=2;NFSU2_TR(0x7494f2);
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
B7494f4:{NFSU2_TR(0x7494f4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L749545;}}
}
B7494f6:L7494f6:{c.instructions+=1;NFSU2_TR(0x7494f6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74954f;}}
}
B7494f8:L7494f8:{c.instructions+=6;NFSU2_TR(0x7494f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7494f9:{NFSU2_TR(0x7494f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7494fa:{NFSU2_TR(0x7494fa);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7494fc:{NFSU2_TR(0x7494fc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7494fe:{NFSU2_TR(0x7494fe);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B749500:{NFSU2_TR(0x749500);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L749519;}}
}
B749502:L749502:{c.instructions+=4;NFSU2_TR(0x749502);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x528ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B749508:{NFSU2_TR(0x749508);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B74950b:{NFSU2_TR(0x74950b);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xdull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74950e:{NFSU2_TR(0x74950e);
if(r1(R+518)){{goto L749514;}}
}
B749510:L749510:{c.instructions+=2;NFSU2_TR(0x749510);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B749513:{NFSU2_TR(0x749513);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B749514:L749514:{c.instructions+=3;NFSU2_TR(0x749514);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B749515:{NFSU2_TR(0x749515);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B749517:{NFSU2_TR(0x749517);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x749502u);}goto L749502;}}
}
B749519:L749519:{c.instructions+=12;NFSU2_TR(0x749519);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x528ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74951f:{NFSU2_TR(0x74951f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B749525:{NFSU2_TR(0x749525);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B749527:{NFSU2_TR(0x749527);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B749529:{NFSU2_TR(0x749529);
__builtin_memmove((R+0),(R+8),4);
}
B74952b:{NFSU2_TR(0x74952b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B749531:{NFSU2_TR(0x749531);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x528ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B749537:{NFSU2_TR(0x749537);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74953a:{NFSU2_TR(0x74953a);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52cull))));
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
B749541:{NFSU2_TR(0x749541);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B749542:{NFSU2_TR(0x749542);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B749543:{NFSU2_TR(0x749543);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74954f;}}
}
B749545:L749545:{c.instructions+=1;NFSU2_TR(0x749545);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x538ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74954f:L74954f:{c.instructions+=2;NFSU2_TR(0x74954f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B749550:{NFSU2_TR(0x749550);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B749560:L749560:{c.instructions+=11;NFSU2_TR(0x749560);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749561:{NFSU2_TR(0x749561);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749562:{NFSU2_TR(0x749562);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B749566:{NFSU2_TR(0x749566);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749567:{NFSU2_TR(0x749567);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74956b:{NFSU2_TR(0x74956b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74956c:{NFSU2_TR(0x74956c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749571:{NFSU2_TR(0x749571);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B749573:{NFSU2_TR(0x749573);
w4(R+4,u32(0x9cull));
}
B749578:{NFSU2_TR(0x749578);
__builtin_memmove((R+28),(R+24),4);
}
B74957a:{NFSU2_TR(0x74957a);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74957c:L74957c:{c.instructions+=1;NFSU2_TR(0x74957c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L74957e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74957cu);}goto L74957c;}
}
B74957e:L74957e:{c.instructions+=6;NFSU2_TR(0x74957e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74957f:{NFSU2_TR(0x74957f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x110ull))));
__builtin_memmove((R+12),(U+0),4);
}
B749585:{NFSU2_TR(0x749585);
u8 U[4];
w4(U+0,u32(0x7d2c88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74958a:{NFSU2_TR(0x74958a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74958b:{NFSU2_TR(0x74958b);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B74958c:{NFSU2_TR(0x74958c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749591ull));
TAIL_STATIC(0x7414a0u,741);
}
B749591:L749591:{c.instructions+=3;NFSU2_TR(0x749591);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749594:{NFSU2_TR(0x749594);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749595:{NFSU2_TR(0x749595);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74959aull));
TAIL_STATIC(0x742360u,742);
}
B74959a:L74959a:{c.instructions+=8;NFSU2_TR(0x74959a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74959d:{NFSU2_TR(0x74959d);
u8 U[4];
w4(U+0,u32(0x7d2c7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7495a2:{NFSU2_TR(0x7495a2);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7495a7:{NFSU2_TR(0x7495a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7495aa:{NFSU2_TR(0x7495aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7495ab:{NFSU2_TR(0x7495ab);
u8 U[4];
w4(U+0,u32(0x7d2038ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7495b0:{NFSU2_TR(0x7495b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7495b1:{NFSU2_TR(0x7495b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7495b6ull));
TAIL_STATIC(0x7414a0u,741);
}
B7495b6:L7495b6:{c.instructions+=3;NFSU2_TR(0x7495b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7495b9:{NFSU2_TR(0x7495b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7495ba:{NFSU2_TR(0x7495ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7495bfull));
TAIL_STATIC(0x742360u,742);
}
B7495bf:L7495bf:{c.instructions+=5;NFSU2_TR(0x7495bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7495c2:{NFSU2_TR(0x7495c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7495c4:{NFSU2_TR(0x7495c4);
u8 U[4];
w4(U+0,u32(0x7d2c70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7495c9:{NFSU2_TR(0x7495c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7495ca:{NFSU2_TR(0x7495ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7495cfull));
TAIL_STATIC(0x7414a0u,741);
}
B7495cf:L7495cf:{c.instructions+=3;NFSU2_TR(0x7495cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7495d2:{NFSU2_TR(0x7495d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7495d3:{NFSU2_TR(0x7495d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7495d8ull));
TAIL_STATIC(0x742140u,742);
}
B7495d8:L7495d8:{c.instructions+=13;NFSU2_TR(0x7495d8);
__builtin_memmove((R+8),(R+0),4);
}
B7495da:{NFSU2_TR(0x7495da);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B7495dd:{NFSU2_TR(0x7495dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7495e3:{NFSU2_TR(0x7495e3);
__builtin_memmove((R+4),(R+0),4);
}
B7495e5:{NFSU2_TR(0x7495e5);
__builtin_memmove((R+8),(R+0),4);
}
B7495e7:{NFSU2_TR(0x7495e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7495ea:{NFSU2_TR(0x7495ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B7495ed:{NFSU2_TR(0x7495ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7495f0:{NFSU2_TR(0x7495f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7495f2:{NFSU2_TR(0x7495f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x243ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7495f8:{NFSU2_TR(0x7495f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x241ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7495fe:{NFSU2_TR(0x7495fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x242ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B749604:{NFSU2_TR(0x749604);
if(r1(R+518)){{goto L749611;}}
}
B749606:L749606:{c.instructions+=2;NFSU2_TR(0x749606);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B749608:{NFSU2_TR(0x749608);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L749611;}}
}
B74960a:L74960a:{c.instructions+=1;NFSU2_TR(0x74960a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x243ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B749611:L749611:{c.instructions+=10;NFSU2_TR(0x749611);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749613:{NFSU2_TR(0x749613);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26dull))));
__builtin_memmove((R+0),(U+0),4);
}
B749619:{NFSU2_TR(0x749619);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74961a:{NFSU2_TR(0x74961a);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74961c:{NFSU2_TR(0x74961c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x245ull))));
__builtin_memmove((R+4),(U+0),4);
}
B749622:{NFSU2_TR(0x749622);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749623:{NFSU2_TR(0x749623);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x244ull))));
}
B749629:{NFSU2_TR(0x749629);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74962a:{NFSU2_TR(0x74962a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74962b:{NFSU2_TR(0x74962b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749630ull));
TAIL_STATIC(0x7488d0u,748);
}
B749630:L749630:{c.instructions+=6;NFSU2_TR(0x749630);
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
B749633:{NFSU2_TR(0x749633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B749634:{NFSU2_TR(0x749634);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B749635:{NFSU2_TR(0x749635);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B749636:{NFSU2_TR(0x749636);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B749637:{NFSU2_TR(0x749637);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B749640:L749640:{c.instructions+=15;NFSU2_TR(0x749640);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749641:{NFSU2_TR(0x749641);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B749645:{NFSU2_TR(0x749645);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749646:{NFSU2_TR(0x749646);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749647:{NFSU2_TR(0x749647);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74964b:{NFSU2_TR(0x74964b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74964c:{NFSU2_TR(0x74964c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749651:{NFSU2_TR(0x749651);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749653:{NFSU2_TR(0x749653);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749654:{NFSU2_TR(0x749654);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74965a:{NFSU2_TR(0x74965a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74965c:{NFSU2_TR(0x74965c);
u8 U[4];
w4(U+0,u32(0x7d2c88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749661:{NFSU2_TR(0x749661);
w4(R+4,u32(0xbeull));
}
B749666:{NFSU2_TR(0x749666);
__builtin_memmove((R+28),(R+24),4);
}
B749668:{NFSU2_TR(0x749668);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749669:L749669:{c.instructions+=1;NFSU2_TR(0x749669);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L74966b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x749669u);}goto L749669;}
}
B74966b:L74966b:{c.instructions+=1;NFSU2_TR(0x74966b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749670ull));
TAIL_STATIC(0x7414a0u,741);
}
B749670:L749670:{c.instructions+=3;NFSU2_TR(0x749670);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749673:{NFSU2_TR(0x749673);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749674:{NFSU2_TR(0x749674);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749679ull));
TAIL_STATIC(0x742360u,742);
}
B749679:L749679:{c.instructions+=8;NFSU2_TR(0x749679);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74967c:{NFSU2_TR(0x74967c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749681:{NFSU2_TR(0x749681);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749686:{NFSU2_TR(0x749686);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B749689:{NFSU2_TR(0x749689);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74968a:{NFSU2_TR(0x74968a);
u8 U[4];
w4(U+0,u32(0x7d2038ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74968f:{NFSU2_TR(0x74968f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749690:{NFSU2_TR(0x749690);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749695ull));
TAIL_STATIC(0x7414a0u,741);
}
B749695:L749695:{c.instructions+=3;NFSU2_TR(0x749695);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749698:{NFSU2_TR(0x749698);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749699:{NFSU2_TR(0x749699);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74969eull));
TAIL_STATIC(0x742360u,742);
}
B74969e:L74969e:{c.instructions+=5;NFSU2_TR(0x74969e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7496a1:{NFSU2_TR(0x7496a1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7496a3:{NFSU2_TR(0x7496a3);
u8 U[4];
w4(U+0,u32(0x7d2c70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7496a8:{NFSU2_TR(0x7496a8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7496a9:{NFSU2_TR(0x7496a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7496aeull));
TAIL_STATIC(0x7414a0u,741);
}
B7496ae:L7496ae:{c.instructions+=3;NFSU2_TR(0x7496ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7496b1:{NFSU2_TR(0x7496b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7496b2:{NFSU2_TR(0x7496b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7496b7ull));
TAIL_STATIC(0x742140u,742);
}
B7496b7:L7496b7:{c.instructions+=13;NFSU2_TR(0x7496b7);
__builtin_memmove((R+8),(R+0),4);
}
B7496b9:{NFSU2_TR(0x7496b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B7496bc:{NFSU2_TR(0x7496bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7496c2:{NFSU2_TR(0x7496c2);
__builtin_memmove((R+4),(R+0),4);
}
B7496c4:{NFSU2_TR(0x7496c4);
__builtin_memmove((R+8),(R+0),4);
}
B7496c6:{NFSU2_TR(0x7496c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7496c9:{NFSU2_TR(0x7496c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B7496cc:{NFSU2_TR(0x7496cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7496cf:{NFSU2_TR(0x7496cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7496d1:{NFSU2_TR(0x7496d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x243ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7496d7:{NFSU2_TR(0x7496d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x241ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7496dd:{NFSU2_TR(0x7496dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x242ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7496e3:{NFSU2_TR(0x7496e3);
if(r1(R+518)){{goto L7496f0;}}
}
B7496e5:L7496e5:{c.instructions+=2;NFSU2_TR(0x7496e5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7496e7:{NFSU2_TR(0x7496e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7496f0;}}
}
B7496e9:L7496e9:{c.instructions+=1;NFSU2_TR(0x7496e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x243ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B7496f0:L7496f0:{c.instructions+=10;NFSU2_TR(0x7496f0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7496f2:{NFSU2_TR(0x7496f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26dull))));
__builtin_memmove((R+0),(U+0),4);
}
B7496f8:{NFSU2_TR(0x7496f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7496f9:{NFSU2_TR(0x7496f9);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7496fb:{NFSU2_TR(0x7496fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x245ull))));
__builtin_memmove((R+28),(U+0),4);
}
B749701:{NFSU2_TR(0x749701);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749702:{NFSU2_TR(0x749702);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((R+20),(U+0),4);
}
B749708:{NFSU2_TR(0x749708);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749709:{NFSU2_TR(0x749709);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74970a:{NFSU2_TR(0x74970a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74970full));
TAIL_STATIC(0x7488d0u,748);
}
B74970f:L74970f:{c.instructions+=10;NFSU2_TR(0x74970f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749711:{NFSU2_TR(0x749711);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29aull))));
__builtin_memmove((R+4),(U+0),4);
}
B749717:{NFSU2_TR(0x749717);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749718:{NFSU2_TR(0x749718);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74971a:{NFSU2_TR(0x74971a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x272ull))));
__builtin_memmove((R+8),(U+0),4);
}
B749720:{NFSU2_TR(0x749720);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749721:{NFSU2_TR(0x749721);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x271ull))));
__builtin_memmove((R+0),(U+0),4);
}
B749727:{NFSU2_TR(0x749727);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749728:{NFSU2_TR(0x749728);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749729:{NFSU2_TR(0x749729);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74972eull));
TAIL_STATIC(0x7488d0u,748);
}
B74972e:L74972e:{c.instructions+=10;NFSU2_TR(0x74972e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749730:{NFSU2_TR(0x749730);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c7ull))));
__builtin_memmove((R+4),(U+0),4);
}
B749736:{NFSU2_TR(0x749736);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749737:{NFSU2_TR(0x749737);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749739:{NFSU2_TR(0x749739);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29full))));
__builtin_memmove((R+8),(U+0),4);
}
B74973f:{NFSU2_TR(0x74973f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749740:{NFSU2_TR(0x749740);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29eull))));
__builtin_memmove((R+0),(U+0),4);
}
B749746:{NFSU2_TR(0x749746);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749747:{NFSU2_TR(0x749747);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749748:{NFSU2_TR(0x749748);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74974dull));
TAIL_STATIC(0x7488d0u,748);
}
B74974d:L74974d:{c.instructions+=11;NFSU2_TR(0x74974d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B749750:{NFSU2_TR(0x749750);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749752:{NFSU2_TR(0x749752);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B749758:{NFSU2_TR(0x749758);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749759:{NFSU2_TR(0x749759);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74975b:{NFSU2_TR(0x74975b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ccull))));
__builtin_memmove((R+8),(U+0),4);
}
B749761:{NFSU2_TR(0x749761);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749762:{NFSU2_TR(0x749762);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2cbull))));
}
B749768:{NFSU2_TR(0x749768);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749769:{NFSU2_TR(0x749769);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74976a:{NFSU2_TR(0x74976a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74976full));
TAIL_STATIC(0x7488d0u,748);
}
B74976f:L74976f:{c.instructions+=4;NFSU2_TR(0x74976f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B749771:{NFSU2_TR(0x749771);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B749774:{NFSU2_TR(0x749774);
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
B749776:{NFSU2_TR(0x749776);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74978e;}}
}
B749778:L749778:{c.instructions+=5;NFSU2_TR(0x749778);
__builtin_memmove((R+0),gp(0x7d2c90),2);
}
B74977e:{NFSU2_TR(0x74977e);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+28)),r2(U+0));
}
B749781:{NFSU2_TR(0x749781);
__builtin_memmove((R+4),gp(0x7d2c92),1);
}
B749787:{NFSU2_TR(0x749787);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74978a:{NFSU2_TR(0x74978a);
u8 U[1];
w1(U+0,u8(0x20ull));
s1(u32(r4(R+20)),r1(U+0));
}
B74978e:L74978e:{c.instructions+=5;NFSU2_TR(0x74978e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74978f:{NFSU2_TR(0x74978f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B749790:{NFSU2_TR(0x749790);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B749791:{NFSU2_TR(0x749791);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B749792:{NFSU2_TR(0x749792);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7497a0:L7497a0:{c.instructions+=15;NFSU2_TR(0x7497a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7497a1:{NFSU2_TR(0x7497a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7497a2:{NFSU2_TR(0x7497a2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7497a6:{NFSU2_TR(0x7497a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7497a7:{NFSU2_TR(0x7497a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7497ab:{NFSU2_TR(0x7497ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7497ac:{NFSU2_TR(0x7497ac);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7497b1:{NFSU2_TR(0x7497b1);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7497b3:{NFSU2_TR(0x7497b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7497b4:{NFSU2_TR(0x7497b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x110ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7497ba:{NFSU2_TR(0x7497ba);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7497bc:{NFSU2_TR(0x7497bc);
u8 U[4];
w4(U+0,u32(0x7d2c88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7497c1:{NFSU2_TR(0x7497c1);
w4(R+4,u32(0x148ull));
}
B7497c6:{NFSU2_TR(0x7497c6);
__builtin_memmove((R+28),(R+24),4);
}
B7497c8:{NFSU2_TR(0x7497c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7497c9:L7497c9:{c.instructions+=1;NFSU2_TR(0x7497c9);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7497cb;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7497c9u);}goto L7497c9;}
}
B7497cb:L7497cb:{c.instructions+=1;NFSU2_TR(0x7497cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7497d0ull));
TAIL_STATIC(0x7414a0u,741);
}
B7497d0:L7497d0:{c.instructions+=3;NFSU2_TR(0x7497d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7497d3:{NFSU2_TR(0x7497d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7497d4:{NFSU2_TR(0x7497d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7497d9ull));
TAIL_STATIC(0x742360u,742);
}
B7497d9:L7497d9:{c.instructions+=8;NFSU2_TR(0x7497d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7497dc:{NFSU2_TR(0x7497dc);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7497e1:{NFSU2_TR(0x7497e1);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7497e6:{NFSU2_TR(0x7497e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7497e9:{NFSU2_TR(0x7497e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7497ea:{NFSU2_TR(0x7497ea);
u8 U[4];
w4(U+0,u32(0x7d2038ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7497ef:{NFSU2_TR(0x7497ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7497f0:{NFSU2_TR(0x7497f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7497f5ull));
TAIL_STATIC(0x7414a0u,741);
}
B7497f5:L7497f5:{c.instructions+=3;NFSU2_TR(0x7497f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7497f8:{NFSU2_TR(0x7497f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7497f9:{NFSU2_TR(0x7497f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7497feull));
TAIL_STATIC(0x742360u,742);
}
B7497fe:L7497fe:{c.instructions+=5;NFSU2_TR(0x7497fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B749801:{NFSU2_TR(0x749801);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749803:{NFSU2_TR(0x749803);
u8 U[4];
w4(U+0,u32(0x7d2c70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749808:{NFSU2_TR(0x749808);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749809:{NFSU2_TR(0x749809);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74980eull));
TAIL_STATIC(0x7414a0u,741);
}
B74980e:L74980e:{c.instructions+=3;NFSU2_TR(0x74980e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749811:{NFSU2_TR(0x749811);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749812:{NFSU2_TR(0x749812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749817ull));
TAIL_STATIC(0x742140u,742);
}
B749817:L749817:{c.instructions+=13;NFSU2_TR(0x749817);
__builtin_memmove((R+8),(R+0),4);
}
B749819:{NFSU2_TR(0x749819);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B74981c:{NFSU2_TR(0x74981c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B749822:{NFSU2_TR(0x749822);
__builtin_memmove((R+4),(R+0),4);
}
B749824:{NFSU2_TR(0x749824);
__builtin_memmove((R+8),(R+0),4);
}
B749826:{NFSU2_TR(0x749826);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B749829:{NFSU2_TR(0x749829);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B74982c:{NFSU2_TR(0x74982c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74982f:{NFSU2_TR(0x74982f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B749831:{NFSU2_TR(0x749831);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x243ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B749837:{NFSU2_TR(0x749837);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x241ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74983d:{NFSU2_TR(0x74983d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x242ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B749843:{NFSU2_TR(0x749843);
if(r1(R+518)){{goto L749850;}}
}
B749845:L749845:{c.instructions+=2;NFSU2_TR(0x749845);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B749847:{NFSU2_TR(0x749847);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L749850;}}
}
B749849:L749849:{c.instructions+=1;NFSU2_TR(0x749849);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x243ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B749850:L749850:{c.instructions+=7;NFSU2_TR(0x749850);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749855:{NFSU2_TR(0x749855);
u8 U[4];
w4(U+0,u32(0x33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749857:{NFSU2_TR(0x749857);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74985d:{NFSU2_TR(0x74985d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74985e:{NFSU2_TR(0x74985e);
u8 U[4];
w4(U+0,u32(0x7d2d20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749863:{NFSU2_TR(0x749863);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749864:{NFSU2_TR(0x749864);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749869ull));
TAIL_STATIC(0x7414a0u,741);
}
B749869:L749869:{c.instructions+=3;NFSU2_TR(0x749869);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74986c:{NFSU2_TR(0x74986c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74986d:{NFSU2_TR(0x74986d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749872ull));
TAIL_STATIC(0x742360u,742);
}
B749872:L749872:{c.instructions+=8;NFSU2_TR(0x749872);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B749875:{NFSU2_TR(0x749875);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74987a:{NFSU2_TR(0x74987a);
u8 U[4];
w4(U+0,u32(0x33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74987c:{NFSU2_TR(0x74987c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x32bull))));
__builtin_memmove((R+4),(U+0),4);
}
B749882:{NFSU2_TR(0x749882);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749883:{NFSU2_TR(0x749883);
u8 U[4];
w4(U+0,u32(0x7d2d14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749888:{NFSU2_TR(0x749888);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749889:{NFSU2_TR(0x749889);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74988eull));
TAIL_STATIC(0x7414a0u,741);
}
B74988e:L74988e:{c.instructions+=3;NFSU2_TR(0x74988e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749891:{NFSU2_TR(0x749891);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749892:{NFSU2_TR(0x749892);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749897ull));
TAIL_STATIC(0x742360u,742);
}
B749897:L749897:{c.instructions+=8;NFSU2_TR(0x749897);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74989a:{NFSU2_TR(0x74989a);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74989f:{NFSU2_TR(0x74989f);
u8 U[4];
w4(U+0,u32(0x66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7498a1:{NFSU2_TR(0x7498a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x35eull))));
__builtin_memmove((R+8),(U+0),4);
}
B7498a7:{NFSU2_TR(0x7498a7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7498a8:{NFSU2_TR(0x7498a8);
u8 U[4];
w4(U+0,u32(0x7d2d08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7498ad:{NFSU2_TR(0x7498ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7498ae:{NFSU2_TR(0x7498ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7498b3ull));
TAIL_STATIC(0x7414a0u,741);
}
B7498b3:L7498b3:{c.instructions+=3;NFSU2_TR(0x7498b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7498b6:{NFSU2_TR(0x7498b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7498b7:{NFSU2_TR(0x7498b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7498bcull));
TAIL_STATIC(0x742360u,742);
}
B7498bc:L7498bc:{c.instructions+=8;NFSU2_TR(0x7498bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7498bf:{NFSU2_TR(0x7498bf);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7498c4:{NFSU2_TR(0x7498c4);
u8 U[4];
w4(U+0,u32(0x33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7498c6:{NFSU2_TR(0x7498c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3c4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7498cc:{NFSU2_TR(0x7498cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7498cd:{NFSU2_TR(0x7498cd);
u8 U[4];
w4(U+0,u32(0x7d2cfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7498d2:{NFSU2_TR(0x7498d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7498d3:{NFSU2_TR(0x7498d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7498d8ull));
TAIL_STATIC(0x7414a0u,741);
}
B7498d8:L7498d8:{c.instructions+=3;NFSU2_TR(0x7498d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7498db:{NFSU2_TR(0x7498db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7498dc:{NFSU2_TR(0x7498dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7498e1ull));
TAIL_STATIC(0x742360u,742);
}
B7498e1:L7498e1:{c.instructions+=8;NFSU2_TR(0x7498e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7498e4:{NFSU2_TR(0x7498e4);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7498e9:{NFSU2_TR(0x7498e9);
u8 U[4];
w4(U+0,u32(0x33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7498eb:{NFSU2_TR(0x7498eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3f7ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7498f1:{NFSU2_TR(0x7498f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7498f2:{NFSU2_TR(0x7498f2);
u8 U[4];
w4(U+0,u32(0x7d2cf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7498f7:{NFSU2_TR(0x7498f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7498f8:{NFSU2_TR(0x7498f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7498fdull));
TAIL_STATIC(0x7414a0u,741);
}
B7498fd:L7498fd:{c.instructions+=3;NFSU2_TR(0x7498fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749900:{NFSU2_TR(0x749900);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749901:{NFSU2_TR(0x749901);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749906ull));
TAIL_STATIC(0x742360u,742);
}
B749906:L749906:{c.instructions+=8;NFSU2_TR(0x749906);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B749909:{NFSU2_TR(0x749909);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74990e:{NFSU2_TR(0x74990e);
u8 U[4];
w4(U+0,u32(0x33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749910:{NFSU2_TR(0x749910);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42aull))));
__builtin_memmove((R+8),(U+0),4);
}
B749916:{NFSU2_TR(0x749916);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749917:{NFSU2_TR(0x749917);
u8 U[4];
w4(U+0,u32(0x7d2ce8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74991c:{NFSU2_TR(0x74991c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74991d:{NFSU2_TR(0x74991d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749922ull));
TAIL_STATIC(0x7414a0u,741);
}
B749922:L749922:{c.instructions+=3;NFSU2_TR(0x749922);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749925:{NFSU2_TR(0x749925);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749926:{NFSU2_TR(0x749926);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74992bull));
TAIL_STATIC(0x742360u,742);
}
B74992b:L74992b:{c.instructions+=8;NFSU2_TR(0x74992b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74992e:{NFSU2_TR(0x74992e);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749933:{NFSU2_TR(0x749933);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749935:{NFSU2_TR(0x749935);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45dull))));
__builtin_memmove((R+0),(U+0),4);
}
B74993b:{NFSU2_TR(0x74993b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74993c:{NFSU2_TR(0x74993c);
u8 U[4];
w4(U+0,u32(0x7d2ce0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749941:{NFSU2_TR(0x749941);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749942:{NFSU2_TR(0x749942);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749947ull));
TAIL_STATIC(0x7414a0u,741);
}
B749947:L749947:{c.instructions+=3;NFSU2_TR(0x749947);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74994a:{NFSU2_TR(0x74994a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74994b:{NFSU2_TR(0x74994b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749950ull));
TAIL_STATIC(0x742360u,742);
}
B749950:L749950:{c.instructions+=8;NFSU2_TR(0x749950);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B749953:{NFSU2_TR(0x749953);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749958:{NFSU2_TR(0x749958);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74995a:{NFSU2_TR(0x74995a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x47cull))));
__builtin_memmove((R+4),(U+0),4);
}
B749960:{NFSU2_TR(0x749960);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749961:{NFSU2_TR(0x749961);
u8 U[4];
w4(U+0,u32(0x7d2cd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749966:{NFSU2_TR(0x749966);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749967:{NFSU2_TR(0x749967);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74996cull));
TAIL_STATIC(0x7414a0u,741);
}
B74996c:L74996c:{c.instructions+=3;NFSU2_TR(0x74996c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74996f:{NFSU2_TR(0x74996f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749970:{NFSU2_TR(0x749970);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749975ull));
TAIL_STATIC(0x742360u,742);
}
B749975:L749975:{c.instructions+=8;NFSU2_TR(0x749975);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B749978:{NFSU2_TR(0x749978);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74997d:{NFSU2_TR(0x74997d);
u8 U[4];
w4(U+0,u32(0x33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74997f:{NFSU2_TR(0x74997f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x487ull))));
__builtin_memmove((R+8),(U+0),4);
}
B749985:{NFSU2_TR(0x749985);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749986:{NFSU2_TR(0x749986);
u8 U[4];
w4(U+0,u32(0x7d2cccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74998b:{NFSU2_TR(0x74998b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74998c:{NFSU2_TR(0x74998c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749991ull));
TAIL_STATIC(0x7414a0u,741);
}
B749991:L749991:{c.instructions+=3;NFSU2_TR(0x749991);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749994:{NFSU2_TR(0x749994);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749995:{NFSU2_TR(0x749995);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74999aull));
TAIL_STATIC(0x742360u,742);
}
B74999a:L74999a:{c.instructions+=8;NFSU2_TR(0x74999a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74999d:{NFSU2_TR(0x74999d);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7499a2:{NFSU2_TR(0x7499a2);
u8 U[4];
w4(U+0,u32(0x33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7499a4:{NFSU2_TR(0x7499a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4baull))));
__builtin_memmove((R+0),(U+0),4);
}
B7499aa:{NFSU2_TR(0x7499aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7499ab:{NFSU2_TR(0x7499ab);
u8 U[4];
w4(U+0,u32(0x7d2cc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7499b0:{NFSU2_TR(0x7499b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7499b1:{NFSU2_TR(0x7499b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7499b6ull));
TAIL_STATIC(0x7414a0u,741);
}
B7499b6:L7499b6:{c.instructions+=3;NFSU2_TR(0x7499b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7499b9:{NFSU2_TR(0x7499b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7499ba:{NFSU2_TR(0x7499ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7499bfull));
TAIL_STATIC(0x742360u,742);
}
B7499bf:L7499bf:{c.instructions+=8;NFSU2_TR(0x7499bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7499c2:{NFSU2_TR(0x7499c2);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7499c7:{NFSU2_TR(0x7499c7);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7499c9:{NFSU2_TR(0x7499c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4edull))));
__builtin_memmove((R+4),(U+0),4);
}
B7499cf:{NFSU2_TR(0x7499cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7499d0:{NFSU2_TR(0x7499d0);
u8 U[4];
w4(U+0,u32(0x7d2cb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7499d5:{NFSU2_TR(0x7499d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7499d6:{NFSU2_TR(0x7499d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7499dbull));
TAIL_STATIC(0x7414a0u,741);
}
B7499db:L7499db:{c.instructions+=3;NFSU2_TR(0x7499db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7499de:{NFSU2_TR(0x7499de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7499df:{NFSU2_TR(0x7499df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7499e4ull));
TAIL_STATIC(0x742360u,742);
}
B7499e4:L7499e4:{c.instructions+=8;NFSU2_TR(0x7499e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7499e7:{NFSU2_TR(0x7499e7);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7499ec:{NFSU2_TR(0x7499ec);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7499ee:{NFSU2_TR(0x7499ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x501ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7499f4:{NFSU2_TR(0x7499f4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7499f5:{NFSU2_TR(0x7499f5);
u8 U[4];
w4(U+0,u32(0x7d2cacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7499fa:{NFSU2_TR(0x7499fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7499fb:{NFSU2_TR(0x7499fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749a00ull));
TAIL_STATIC(0x7414a0u,741);
}
B749a00:L749a00:{c.instructions+=3;NFSU2_TR(0x749a00);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749a03:{NFSU2_TR(0x749a03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a04:{NFSU2_TR(0x749a04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749a09ull));
TAIL_STATIC(0x742360u,742);
}
B749a09:L749a09:{c.instructions+=5;NFSU2_TR(0x749a09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B749a0c:{NFSU2_TR(0x749a0c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a0e:{NFSU2_TR(0x749a0e);
u8 U[4];
w4(U+0,u32(0x7d2ca0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a13:{NFSU2_TR(0x749a13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a14:{NFSU2_TR(0x749a14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749a19ull));
TAIL_STATIC(0x7414a0u,741);
}
B749a19:L749a19:{c.instructions+=3;NFSU2_TR(0x749a19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749a1c:{NFSU2_TR(0x749a1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a1d:{NFSU2_TR(0x749a1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749a22ull));
TAIL_STATIC(0x7420b0u,742);
}
B749a22:L749a22:{c.instructions+=6;NFSU2_TR(0x749a22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749a25:{NFSU2_TR(0x749a25);
u8 U[4];
w4(U+0,u32(0x7d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a2a:{NFSU2_TR(0x749a2a);
u8 U[4];
w4(U+0,u32(0x7d2c94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a2f:{NFSU2_TR(0x749a2f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a30:{NFSU2_TR(0x749a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x518ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B749a36:{NFSU2_TR(0x749a36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749a3bull));
TAIL_STATIC(0x7414a0u,741);
}
B749a3b:L749a3b:{c.instructions+=3;NFSU2_TR(0x749a3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749a3e:{NFSU2_TR(0x749a3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a3f:{NFSU2_TR(0x749a3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749a44ull));
TAIL_STATIC(0x7420b0u,742);
}
B749a44:L749a44:{c.instructions+=11;NFSU2_TR(0x749a44);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a46:{NFSU2_TR(0x749a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B749a4c:{NFSU2_TR(0x749a4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26dull))));
__builtin_memmove((R+0),(U+0),4);
}
B749a52:{NFSU2_TR(0x749a52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a53:{NFSU2_TR(0x749a53);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a55:{NFSU2_TR(0x749a55);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x245ull))));
__builtin_memmove((R+4),(U+0),4);
}
B749a5b:{NFSU2_TR(0x749a5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a5c:{NFSU2_TR(0x749a5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((R+8),(U+0),4);
}
B749a62:{NFSU2_TR(0x749a62);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a63:{NFSU2_TR(0x749a63);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a64:{NFSU2_TR(0x749a64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749a69ull));
TAIL_STATIC(0x7488d0u,748);
}
B749a69:L749a69:{c.instructions+=10;NFSU2_TR(0x749a69);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a6b:{NFSU2_TR(0x749a6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29aull))));
__builtin_memmove((R+0),(U+0),4);
}
B749a71:{NFSU2_TR(0x749a71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a72:{NFSU2_TR(0x749a72);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a74:{NFSU2_TR(0x749a74);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x272ull))));
__builtin_memmove((R+4),(U+0),4);
}
B749a7a:{NFSU2_TR(0x749a7a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a7b:{NFSU2_TR(0x749a7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x271ull))));
__builtin_memmove((R+8),(U+0),4);
}
B749a81:{NFSU2_TR(0x749a81);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a82:{NFSU2_TR(0x749a82);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a83:{NFSU2_TR(0x749a83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749a88ull));
TAIL_STATIC(0x7488d0u,748);
}
B749a88:L749a88:{c.instructions+=10;NFSU2_TR(0x749a88);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a8a:{NFSU2_TR(0x749a8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c7ull))));
__builtin_memmove((R+0),(U+0),4);
}
B749a90:{NFSU2_TR(0x749a90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a91:{NFSU2_TR(0x749a91);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a93:{NFSU2_TR(0x749a93);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29full))));
__builtin_memmove((R+4),(U+0),4);
}
B749a99:{NFSU2_TR(0x749a99);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749a9a:{NFSU2_TR(0x749a9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29eull))));
__builtin_memmove((R+8),(U+0),4);
}
B749aa0:{NFSU2_TR(0x749aa0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749aa1:{NFSU2_TR(0x749aa1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749aa2:{NFSU2_TR(0x749aa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749aa7ull));
TAIL_STATIC(0x7488d0u,748);
}
B749aa7:L749aa7:{c.instructions+=11;NFSU2_TR(0x749aa7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
}
B749aaa:{NFSU2_TR(0x749aaa);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749aac:{NFSU2_TR(0x749aac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B749ab2:{NFSU2_TR(0x749ab2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749ab3:{NFSU2_TR(0x749ab3);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749ab5:{NFSU2_TR(0x749ab5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ccull))));
__builtin_memmove((R+4),(U+0),4);
}
B749abb:{NFSU2_TR(0x749abb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749abc:{NFSU2_TR(0x749abc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2cbull))));
}
B749ac2:{NFSU2_TR(0x749ac2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749ac3:{NFSU2_TR(0x749ac3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749ac4:{NFSU2_TR(0x749ac4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749ac9ull));
TAIL_STATIC(0x7488d0u,748);
}
B749ac9:L749ac9:{c.instructions+=6;NFSU2_TR(0x749ac9);
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
B749acc:{NFSU2_TR(0x749acc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B749acd:{NFSU2_TR(0x749acd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B749ace:{NFSU2_TR(0x749ace);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B749acf:{NFSU2_TR(0x749acf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B749ad0:{NFSU2_TR(0x749ad0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B749ae0:L749ae0:{c.instructions+=11;NFSU2_TR(0x749ae0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749ae1:{NFSU2_TR(0x749ae1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B749ae5:{NFSU2_TR(0x749ae5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749ae6:{NFSU2_TR(0x749ae6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B749aea:{NFSU2_TR(0x749aea);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2f8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B749af0:{NFSU2_TR(0x749af0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749af1:{NFSU2_TR(0x749af1);
u8 U[4];
w4(U+0,u32(0x7d2d20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749af6:{NFSU2_TR(0x749af6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x110ull))));
}
B749afc:{NFSU2_TR(0x749afc);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b01:{NFSU2_TR(0x749b01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b02:{NFSU2_TR(0x749b02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749b07ull));
TAIL_STATIC(0x741a50u,741);
}
B749b07:L749b07:{c.instructions+=6;NFSU2_TR(0x749b07);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x32bull))));
__builtin_memmove((R+4),(U+0),4);
}
B749b0d:{NFSU2_TR(0x749b0d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b0e:{NFSU2_TR(0x749b0e);
u8 U[4];
w4(U+0,u32(0x7d2d14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b13:{NFSU2_TR(0x749b13);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b18:{NFSU2_TR(0x749b18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b19:{NFSU2_TR(0x749b19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749b1eull));
TAIL_STATIC(0x741a50u,741);
}
B749b1e:L749b1e:{c.instructions+=6;NFSU2_TR(0x749b1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x35eull))));
__builtin_memmove((R+8),(U+0),4);
}
B749b24:{NFSU2_TR(0x749b24);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b25:{NFSU2_TR(0x749b25);
u8 U[4];
w4(U+0,u32(0x7d2d08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b2a:{NFSU2_TR(0x749b2a);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b2f:{NFSU2_TR(0x749b2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b30:{NFSU2_TR(0x749b30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749b35ull));
TAIL_STATIC(0x741a50u,741);
}
B749b35:L749b35:{c.instructions+=6;NFSU2_TR(0x749b35);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3c4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B749b3b:{NFSU2_TR(0x749b3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b3c:{NFSU2_TR(0x749b3c);
u8 U[4];
w4(U+0,u32(0x7d2cfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b41:{NFSU2_TR(0x749b41);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b46:{NFSU2_TR(0x749b46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b47:{NFSU2_TR(0x749b47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749b4cull));
TAIL_STATIC(0x741a50u,741);
}
B749b4c:L749b4c:{c.instructions+=7;NFSU2_TR(0x749b4c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B749b4f:{NFSU2_TR(0x749b4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3f7ull))));
__builtin_memmove((R+4),(U+0),4);
}
B749b55:{NFSU2_TR(0x749b55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b56:{NFSU2_TR(0x749b56);
u8 U[4];
w4(U+0,u32(0x7d2cf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b5b:{NFSU2_TR(0x749b5b);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b60:{NFSU2_TR(0x749b60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b61:{NFSU2_TR(0x749b61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749b66ull));
TAIL_STATIC(0x741a50u,741);
}
B749b66:L749b66:{c.instructions+=6;NFSU2_TR(0x749b66);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x42aull))));
__builtin_memmove((R+8),(U+0),4);
}
B749b6c:{NFSU2_TR(0x749b6c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b6d:{NFSU2_TR(0x749b6d);
u8 U[4];
w4(U+0,u32(0x7d2ce8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b72:{NFSU2_TR(0x749b72);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b77:{NFSU2_TR(0x749b77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b78:{NFSU2_TR(0x749b78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749b7dull));
TAIL_STATIC(0x741a50u,741);
}
B749b7d:L749b7d:{c.instructions+=6;NFSU2_TR(0x749b7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x45dull))));
__builtin_memmove((R+0),(U+0),4);
}
B749b83:{NFSU2_TR(0x749b83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b84:{NFSU2_TR(0x749b84);
u8 U[4];
w4(U+0,u32(0x7d2ce0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b89:{NFSU2_TR(0x749b89);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b8e:{NFSU2_TR(0x749b8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b8f:{NFSU2_TR(0x749b8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749b94ull));
TAIL_STATIC(0x741a50u,741);
}
B749b94:L749b94:{c.instructions+=6;NFSU2_TR(0x749b94);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x47cull))));
__builtin_memmove((R+4),(U+0),4);
}
B749b9a:{NFSU2_TR(0x749b9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749b9b:{NFSU2_TR(0x749b9b);
u8 U[4];
w4(U+0,u32(0x7d2cd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749ba0:{NFSU2_TR(0x749ba0);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749ba5:{NFSU2_TR(0x749ba5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749ba6:{NFSU2_TR(0x749ba6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749babull));
TAIL_STATIC(0x741a50u,741);
}
B749bab:L749bab:{c.instructions+=7;NFSU2_TR(0x749bab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B749bae:{NFSU2_TR(0x749bae);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x487ull))));
__builtin_memmove((R+8),(U+0),4);
}
B749bb4:{NFSU2_TR(0x749bb4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749bb5:{NFSU2_TR(0x749bb5);
u8 U[4];
w4(U+0,u32(0x7d2cccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749bba:{NFSU2_TR(0x749bba);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749bbf:{NFSU2_TR(0x749bbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749bc0:{NFSU2_TR(0x749bc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749bc5ull));
TAIL_STATIC(0x741a50u,741);
}
B749bc5:L749bc5:{c.instructions+=6;NFSU2_TR(0x749bc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4baull))));
__builtin_memmove((R+0),(U+0),4);
}
B749bcb:{NFSU2_TR(0x749bcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749bcc:{NFSU2_TR(0x749bcc);
u8 U[4];
w4(U+0,u32(0x7d2cc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749bd1:{NFSU2_TR(0x749bd1);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749bd6:{NFSU2_TR(0x749bd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749bd7:{NFSU2_TR(0x749bd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749bdcull));
TAIL_STATIC(0x741a50u,741);
}
B749bdc:L749bdc:{c.instructions+=6;NFSU2_TR(0x749bdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4edull))));
__builtin_memmove((R+4),(U+0),4);
}
B749be2:{NFSU2_TR(0x749be2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749be3:{NFSU2_TR(0x749be3);
u8 U[4];
w4(U+0,u32(0x7d2cb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749be8:{NFSU2_TR(0x749be8);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749bed:{NFSU2_TR(0x749bed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749bee:{NFSU2_TR(0x749bee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749bf3ull));
TAIL_STATIC(0x741a50u,741);
}
B749bf3:L749bf3:{c.instructions+=6;NFSU2_TR(0x749bf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x501ull))));
__builtin_memmove((R+8),(U+0),4);
}
B749bf9:{NFSU2_TR(0x749bf9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749bfa:{NFSU2_TR(0x749bfa);
u8 U[4];
w4(U+0,u32(0x7d2cacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749bff:{NFSU2_TR(0x749bff);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c04:{NFSU2_TR(0x749c04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c05:{NFSU2_TR(0x749c05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749c0aull));
TAIL_STATIC(0x741a50u,741);
}
B749c0a:L749c0a:{c.instructions+=7;NFSU2_TR(0x749c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x518ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B749c10:{NFSU2_TR(0x749c10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B749c13:{NFSU2_TR(0x749c13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c14:{NFSU2_TR(0x749c14);
u8 U[4];
w4(U+0,u32(0x7d2ca0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c19:{NFSU2_TR(0x749c19);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c1e:{NFSU2_TR(0x749c1e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c1f:{NFSU2_TR(0x749c1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749c24ull));
TAIL_STATIC(0x741690u,741);
}
B749c24:L749c24:{c.instructions+=6;NFSU2_TR(0x749c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x51cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B749c2a:{NFSU2_TR(0x749c2a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c2b:{NFSU2_TR(0x749c2b);
u8 U[4];
w4(U+0,u32(0x7d2c94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c30:{NFSU2_TR(0x749c30);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c35:{NFSU2_TR(0x749c35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c36:{NFSU2_TR(0x749c36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749c3bull));
TAIL_STATIC(0x741690u,741);
}
B749c3b:L749c3b:{c.instructions+=4;NFSU2_TR(0x749c3b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B749c3e:{NFSU2_TR(0x749c3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B749c3f:{NFSU2_TR(0x749c3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B749c40:{NFSU2_TR(0x749c40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B749c50:L749c50:{c.instructions+=9;NFSU2_TR(0x749c50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c51:{NFSU2_TR(0x749c51);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c52:{NFSU2_TR(0x749c52);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B749c56:{NFSU2_TR(0x749c56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c57:{NFSU2_TR(0x749c57);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B749c5b:{NFSU2_TR(0x749c5b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c5c:{NFSU2_TR(0x749c5c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B749c5e:{NFSU2_TR(0x749c5e);
w4(R+4,u32(0xcaull));
}
B749c63:{NFSU2_TR(0x749c63);
__builtin_memmove((R+28),(R+24),4);
}
B749c65:L749c65:{c.instructions+=1;NFSU2_TR(0x749c65);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L749c67;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x749c65u);}goto L749c65;}
}
B749c67:L749c67:{c.instructions+=9;NFSU2_TR(0x749c67);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c6c:{NFSU2_TR(0x749c6c);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c6e:{NFSU2_TR(0x749c6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c6f:{NFSU2_TR(0x749c6f);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B749c71:{NFSU2_TR(0x749c71);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x110ull))));
__builtin_memmove((R+12),(U+0),4);
}
B749c77:{NFSU2_TR(0x749c77);
u8 U[4];
w4(U+0,u32(0x7d2c88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c7c:{NFSU2_TR(0x749c7c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c7d:{NFSU2_TR(0x749c7d);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B749c7e:{NFSU2_TR(0x749c7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749c83ull));
TAIL_STATIC(0x7414a0u,741);
}
B749c83:L749c83:{c.instructions+=3;NFSU2_TR(0x749c83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749c86:{NFSU2_TR(0x749c86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c87:{NFSU2_TR(0x749c87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749c8cull));
TAIL_STATIC(0x742360u,742);
}
B749c8c:L749c8c:{c.instructions+=8;NFSU2_TR(0x749c8c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B749c8f:{NFSU2_TR(0x749c8f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c94:{NFSU2_TR(0x749c94);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c99:{NFSU2_TR(0x749c99);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B749c9c:{NFSU2_TR(0x749c9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749c9d:{NFSU2_TR(0x749c9d);
u8 U[4];
w4(U+0,u32(0x7d2038ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749ca2:{NFSU2_TR(0x749ca2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749ca3:{NFSU2_TR(0x749ca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749ca8ull));
TAIL_STATIC(0x7414a0u,741);
}
B749ca8:L749ca8:{c.instructions+=3;NFSU2_TR(0x749ca8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749cab:{NFSU2_TR(0x749cab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749cac:{NFSU2_TR(0x749cac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749cb1ull));
TAIL_STATIC(0x742360u,742);
}
B749cb1:L749cb1:{c.instructions+=5;NFSU2_TR(0x749cb1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B749cb4:{NFSU2_TR(0x749cb4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749cb6:{NFSU2_TR(0x749cb6);
u8 U[4];
w4(U+0,u32(0x7d2c70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749cbb:{NFSU2_TR(0x749cbb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749cbc:{NFSU2_TR(0x749cbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749cc1ull));
TAIL_STATIC(0x7414a0u,741);
}
B749cc1:L749cc1:{c.instructions+=3;NFSU2_TR(0x749cc1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749cc4:{NFSU2_TR(0x749cc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749cc5:{NFSU2_TR(0x749cc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749ccaull));
TAIL_STATIC(0x742140u,742);
}
B749cca:L749cca:{c.instructions+=13;NFSU2_TR(0x749cca);
__builtin_memmove((R+8),(R+0),4);
}
B749ccc:{NFSU2_TR(0x749ccc);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B749ccf:{NFSU2_TR(0x749ccf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B749cd5:{NFSU2_TR(0x749cd5);
__builtin_memmove((R+4),(R+0),4);
}
B749cd7:{NFSU2_TR(0x749cd7);
__builtin_memmove((R+8),(R+0),4);
}
B749cd9:{NFSU2_TR(0x749cd9);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B749cdc:{NFSU2_TR(0x749cdc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B749cdf:{NFSU2_TR(0x749cdf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749ce2:{NFSU2_TR(0x749ce2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B749ce4:{NFSU2_TR(0x749ce4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x243ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B749cea:{NFSU2_TR(0x749cea);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x241ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B749cf0:{NFSU2_TR(0x749cf0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x242ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B749cf6:{NFSU2_TR(0x749cf6);
if(r1(R+518)){{goto L749d03;}}
}
B749cf8:L749cf8:{c.instructions+=2;NFSU2_TR(0x749cf8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B749cfa:{NFSU2_TR(0x749cfa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L749d03;}}
}
B749cfc:L749cfc:{c.instructions+=1;NFSU2_TR(0x749cfc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x243ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B749d03:L749d03:{c.instructions+=7;NFSU2_TR(0x749d03);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d08:{NFSU2_TR(0x749d08);
u8 U[4];
w4(U+0,u32(0x33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d0a:{NFSU2_TR(0x749d0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B749d10:{NFSU2_TR(0x749d10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d11:{NFSU2_TR(0x749d11);
u8 U[4];
w4(U+0,u32(0x7d2d2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d16:{NFSU2_TR(0x749d16);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d17:{NFSU2_TR(0x749d17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749d1cull));
TAIL_STATIC(0x7414a0u,741);
}
B749d1c:L749d1c:{c.instructions+=3;NFSU2_TR(0x749d1c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749d1f:{NFSU2_TR(0x749d1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d20:{NFSU2_TR(0x749d20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749d25ull));
TAIL_STATIC(0x742360u,742);
}
B749d25:L749d25:{c.instructions+=10;NFSU2_TR(0x749d25);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d27:{NFSU2_TR(0x749d27);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26dull))));
__builtin_memmove((R+4),(U+0),4);
}
B749d2d:{NFSU2_TR(0x749d2d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d2e:{NFSU2_TR(0x749d2e);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d30:{NFSU2_TR(0x749d30);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x245ull))));
__builtin_memmove((R+8),(U+0),4);
}
B749d36:{NFSU2_TR(0x749d36);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d37:{NFSU2_TR(0x749d37);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((R+0),(U+0),4);
}
B749d3d:{NFSU2_TR(0x749d3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d3e:{NFSU2_TR(0x749d3e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d3f:{NFSU2_TR(0x749d3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749d44ull));
TAIL_STATIC(0x7488d0u,748);
}
B749d44:L749d44:{c.instructions+=10;NFSU2_TR(0x749d44);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d46:{NFSU2_TR(0x749d46);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29aull))));
__builtin_memmove((R+4),(U+0),4);
}
B749d4c:{NFSU2_TR(0x749d4c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d4d:{NFSU2_TR(0x749d4d);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d4f:{NFSU2_TR(0x749d4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x272ull))));
__builtin_memmove((R+8),(U+0),4);
}
B749d55:{NFSU2_TR(0x749d55);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d56:{NFSU2_TR(0x749d56);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x271ull))));
__builtin_memmove((R+0),(U+0),4);
}
B749d5c:{NFSU2_TR(0x749d5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d5d:{NFSU2_TR(0x749d5d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d5e:{NFSU2_TR(0x749d5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749d63ull));
TAIL_STATIC(0x7488d0u,748);
}
B749d63:L749d63:{c.instructions+=11;NFSU2_TR(0x749d63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B749d66:{NFSU2_TR(0x749d66);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d68:{NFSU2_TR(0x749d68);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c7ull))));
__builtin_memmove((R+4),(U+0),4);
}
B749d6e:{NFSU2_TR(0x749d6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d6f:{NFSU2_TR(0x749d6f);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d71:{NFSU2_TR(0x749d71);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29full))));
__builtin_memmove((R+8),(U+0),4);
}
B749d77:{NFSU2_TR(0x749d77);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d78:{NFSU2_TR(0x749d78);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29eull))));
__builtin_memmove((R+0),(U+0),4);
}
B749d7e:{NFSU2_TR(0x749d7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d7f:{NFSU2_TR(0x749d7f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d80:{NFSU2_TR(0x749d80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749d85ull));
TAIL_STATIC(0x7488d0u,748);
}
B749d85:L749d85:{c.instructions+=10;NFSU2_TR(0x749d85);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d87:{NFSU2_TR(0x749d87);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B749d8d:{NFSU2_TR(0x749d8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d8e:{NFSU2_TR(0x749d8e);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d90:{NFSU2_TR(0x749d90);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ccull))));
__builtin_memmove((R+8),(U+0),4);
}
B749d96:{NFSU2_TR(0x749d96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d97:{NFSU2_TR(0x749d97);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2cbull))));
}
B749d9d:{NFSU2_TR(0x749d9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d9e:{NFSU2_TR(0x749d9e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749d9f:{NFSU2_TR(0x749d9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749da4ull));
TAIL_STATIC(0x7488d0u,748);
}
B749da4:L749da4:{c.instructions+=6;NFSU2_TR(0x749da4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B749da7:{NFSU2_TR(0x749da7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B749da8:{NFSU2_TR(0x749da8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B749da9:{NFSU2_TR(0x749da9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B749daa:{NFSU2_TR(0x749daa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B749dab:{NFSU2_TR(0x749dab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B749db0:L749db0:{c.instructions+=9;NFSU2_TR(0x749db0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B749db4:{NFSU2_TR(0x749db4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B749db8:{NFSU2_TR(0x749db8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2f8ull))));
}
B749dbd:{NFSU2_TR(0x749dbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749dbe:{NFSU2_TR(0x749dbe);
u8 U[4];
w4(U+0,u32(0x7d2d2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749dc3:{NFSU2_TR(0x749dc3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x110ull))));
}
B749dc9:{NFSU2_TR(0x749dc9);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749dce:{NFSU2_TR(0x749dce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749dcf:{NFSU2_TR(0x749dcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749dd4ull));
TAIL_STATIC(0x741a50u,741);
}
B749dd4:L749dd4:{c.instructions+=2;NFSU2_TR(0x749dd4);
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
B749dd7:{NFSU2_TR(0x749dd7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B749de0:L749de0:{c.instructions+=8;NFSU2_TR(0x749de0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749de1:{NFSU2_TR(0x749de1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B749de5:{NFSU2_TR(0x749de5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749de6:{NFSU2_TR(0x749de6);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749deb:{NFSU2_TR(0x749deb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B749ded:{NFSU2_TR(0x749ded);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749def:{NFSU2_TR(0x749def);
w4(R+4,u32(0x3eull));
}
B749df4:{NFSU2_TR(0x749df4);
__builtin_memmove((R+28),(R+24),4);
}
B749df6:L749df6:{c.instructions+=1;NFSU2_TR(0x749df6);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L749df8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x749df6u);}goto L749df6;}
}
B749df8:L749df8:{c.instructions+=6;NFSU2_TR(0x749df8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B749dfc:{NFSU2_TR(0x749dfc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749dfd:{NFSU2_TR(0x749dfd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x110ull))));
__builtin_memmove((R+0),(U+0),4);
}
B749e03:{NFSU2_TR(0x749e03);
u8 U[4];
w4(U+0,u32(0x7d2c88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e08:{NFSU2_TR(0x749e08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e09:{NFSU2_TR(0x749e09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749e0eull));
TAIL_STATIC(0x7414a0u,741);
}
B749e0e:L749e0e:{c.instructions+=3;NFSU2_TR(0x749e0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749e11:{NFSU2_TR(0x749e11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e12:{NFSU2_TR(0x749e12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749e17ull));
TAIL_STATIC(0x742360u,742);
}
B749e17:L749e17:{c.instructions+=10;NFSU2_TR(0x749e17);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e19:{NFSU2_TR(0x749e19);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69ull))));
__builtin_memmove((R+4),(U+0),4);
}
B749e1c:{NFSU2_TR(0x749e1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e1d:{NFSU2_TR(0x749e1d);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e1f:{NFSU2_TR(0x749e1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((R+8),(U+0),4);
}
B749e22:{NFSU2_TR(0x749e22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e23:{NFSU2_TR(0x749e23);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B749e26:{NFSU2_TR(0x749e26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e27:{NFSU2_TR(0x749e27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e28:{NFSU2_TR(0x749e28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749e2dull));
TAIL_STATIC(0x7488d0u,748);
}
B749e2d:L749e2d:{c.instructions+=10;NFSU2_TR(0x749e2d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e2f:{NFSU2_TR(0x749e2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x96ull))));
__builtin_memmove((R+4),(U+0),4);
}
B749e35:{NFSU2_TR(0x749e35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e36:{NFSU2_TR(0x749e36);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e38:{NFSU2_TR(0x749e38);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6eull))));
__builtin_memmove((R+8),(U+0),4);
}
B749e3b:{NFSU2_TR(0x749e3b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e3c:{NFSU2_TR(0x749e3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6dull))));
__builtin_memmove((R+0),(U+0),4);
}
B749e3f:{NFSU2_TR(0x749e3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e40:{NFSU2_TR(0x749e40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e41:{NFSU2_TR(0x749e41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749e46ull));
TAIL_STATIC(0x7488d0u,748);
}
B749e46:L749e46:{c.instructions+=11;NFSU2_TR(0x749e46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B749e49:{NFSU2_TR(0x749e49);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e4b:{NFSU2_TR(0x749e4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B749e51:{NFSU2_TR(0x749e51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e52:{NFSU2_TR(0x749e52);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e54:{NFSU2_TR(0x749e54);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9bull))));
__builtin_memmove((R+8),(U+0),4);
}
B749e5a:{NFSU2_TR(0x749e5a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e5b:{NFSU2_TR(0x749e5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9aull))));
__builtin_memmove((R+0),(U+0),4);
}
B749e61:{NFSU2_TR(0x749e61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e62:{NFSU2_TR(0x749e62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e63:{NFSU2_TR(0x749e63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749e68ull));
TAIL_STATIC(0x7488d0u,748);
}
B749e68:L749e68:{c.instructions+=10;NFSU2_TR(0x749e68);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e6a:{NFSU2_TR(0x749e6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B749e70:{NFSU2_TR(0x749e70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e71:{NFSU2_TR(0x749e71);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e73:{NFSU2_TR(0x749e73);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B749e79:{NFSU2_TR(0x749e79);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e7a:{NFSU2_TR(0x749e7a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xc7ull))));
}
B749e80:{NFSU2_TR(0x749e80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e81:{NFSU2_TR(0x749e81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749e82:{NFSU2_TR(0x749e82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749e87ull));
TAIL_STATIC(0x7488d0u,748);
}
B749e87:L749e87:{c.instructions+=5;NFSU2_TR(0x749e87);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x51cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B749e8d:{NFSU2_TR(0x749e8d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B749e90:{NFSU2_TR(0x749e90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B749e91:{NFSU2_TR(0x749e91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B749e92:{NFSU2_TR(0x749e92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B749ea0:L749ea0:{c.instructions+=5;NFSU2_TR(0x749ea0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749ea1:{NFSU2_TR(0x749ea1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749ea2:{NFSU2_TR(0x749ea2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B749ea6:{NFSU2_TR(0x749ea6);
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
B749ea8:{NFSU2_TR(0x749ea8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L749eb1;}}
}
B749eaa:L749eaa:{c.instructions+=2;NFSU2_TR(0x749eaa);
w4(R+28,u32(0x25800ull));
}
B749eaf:{NFSU2_TR(0x749eaf);
{goto L749ecd;}
}
B749eb1:L749eb1:{c.instructions+=2;NFSU2_TR(0x749eb1);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x1000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B749eb7:{NFSU2_TR(0x749eb7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L749ec0;}}
}
B749eb9:L749eb9:{c.instructions+=2;NFSU2_TR(0x749eb9);
w4(R+28,u32(0x1000ull));
}
B749ebe:{NFSU2_TR(0x749ebe);
{goto L749ecd;}
}
B749ec0:L749ec0:{c.instructions+=2;NFSU2_TR(0x749ec0);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xf4240ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xf4240ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xf4240ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B749ec6:{NFSU2_TR(0x749ec6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L749ecd;}}
}
B749ec8:L749ec8:{c.instructions+=1;NFSU2_TR(0x749ec8);
w4(R+28,u32(0xf4240ull));
}
B749ecd:L749ecd:{c.instructions+=2;NFSU2_TR(0x749ecd);
u8 U[4];
w4(U+0,u32(0x53cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749ed2:{NFSU2_TR(0x749ed2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749ed7ull));
TAIL_STATIC(0x5832f0u,583);
}
B749ed7:L749ed7:{c.instructions+=4;NFSU2_TR(0x749ed7);
__builtin_memmove((R+24),(R+0),4);
}
B749ed9:{NFSU2_TR(0x749ed9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B749edc:{NFSU2_TR(0x749edc);
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
B749ede:{NFSU2_TR(0x749ede);
if(r1(R+518)){{goto L749f40;}}
}
B749ee0:L749ee0:{c.instructions+=3;NFSU2_TR(0x749ee0);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749ee5:{NFSU2_TR(0x749ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x538ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B749eef:{NFSU2_TR(0x749eef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749ef4ull));
TAIL_STATIC(0x755500u,755);
}
B749ef4:L749ef4:{c.instructions+=3;NFSU2_TR(0x749ef4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749ef5:{NFSU2_TR(0x749ef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x524ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B749efb:{NFSU2_TR(0x749efb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749f00ull));
TAIL_STATIC(0x5832f0u,583);
}
B749f00:L749f00:{c.instructions+=6;NFSU2_TR(0x749f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x524ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B749f06:{NFSU2_TR(0x749f06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B749f09:{NFSU2_TR(0x749f09);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B749f0b:{NFSU2_TR(0x749f0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B749f0d:{NFSU2_TR(0x749f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B749f10:{NFSU2_TR(0x749f10);
if(r1(R+518)){{goto L749f23;}}
}
B749f12:L749f12:{c.instructions+=2;NFSU2_TR(0x749f12);
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
B749f14:{NFSU2_TR(0x749f14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L749f40;}}
}
B749f16:L749f16:{c.instructions+=2;NFSU2_TR(0x749f16);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B749f18:{NFSU2_TR(0x749f18);
if(r1(R+518)){{goto L749f23;}}
}
B749f1a:L749f1a:{c.instructions+=2;NFSU2_TR(0x749f1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749f1b:{NFSU2_TR(0x749f1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749f20ull));
TAIL_STATIC(0x755590u,755);
}
B749f20:L749f20:{c.instructions+=1;NFSU2_TR(0x749f20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B749f23:L749f23:{c.instructions+=3;NFSU2_TR(0x749f23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B749f25:{NFSU2_TR(0x749f25);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B749f27:{NFSU2_TR(0x749f27);
if(r1(R+518)){{goto L749f32;}}
}
B749f29:L749f29:{c.instructions+=2;NFSU2_TR(0x749f29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749f2a:{NFSU2_TR(0x749f2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749f2full));
TAIL_STATIC(0x598ec0u,598);
}
B749f2f:L749f2f:{c.instructions+=1;NFSU2_TR(0x749f2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B749f32:L749f32:{c.instructions+=2;NFSU2_TR(0x749f32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749f33:{NFSU2_TR(0x749f33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749f38ull));
TAIL_STATIC(0x598ec0u,598);
}
B749f38:L749f38:{c.instructions+=5;NFSU2_TR(0x749f38);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B749f3b:{NFSU2_TR(0x749f3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B749f3c:{NFSU2_TR(0x749f3c);
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
B749f3e:{NFSU2_TR(0x749f3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B749f3f:{NFSU2_TR(0x749f3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B749f40:L749f40:{c.instructions+=4;NFSU2_TR(0x749f40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B749f41:{NFSU2_TR(0x749f41);
__builtin_memmove((R+0),(R+24),4);
}
B749f43:{NFSU2_TR(0x749f43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B749f44:{NFSU2_TR(0x749f44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B749f50:L749f50:{c.instructions+=6;NFSU2_TR(0x749f50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749f51:{NFSU2_TR(0x749f51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749f52:{NFSU2_TR(0x749f52);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B749f56:{NFSU2_TR(0x749f56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749f57:{NFSU2_TR(0x749f57);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B749f59:{NFSU2_TR(0x749f59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749f5eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x749440u);}goto L749440;}
}
B749f5e:L749f5e:{c.instructions+=4;NFSU2_TR(0x749f5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x538ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B749f64:{NFSU2_TR(0x749f64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B749f67:{NFSU2_TR(0x749f67);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B749f6a:{NFSU2_TR(0x749f6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L749fad;}}
}
B749f6c:L749f6c:{c.instructions+=4;NFSU2_TR(0x749f6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B749f6e:{NFSU2_TR(0x749f6e);
__builtin_memmove((R+0),(R+4),4);
}
B749f70:{NFSU2_TR(0x749f70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749f71:{NFSU2_TR(0x749f71);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B749f74:L749f74:{c.instructions+=4;NFSU2_TR(0x749f74);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B749f76:{NFSU2_TR(0x749f76);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B749f77:{NFSU2_TR(0x749f77);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B749f79:{NFSU2_TR(0x749f79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x749f74u);}goto L749f74;}}
}
B749f7b:L749f7b:{c.instructions+=9;NFSU2_TR(0x749f7b);
u8 U[4];
w4(U+0,u32(0x7d2c28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749f80:{NFSU2_TR(0x749f80);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B749f82:{NFSU2_TR(0x749f82);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749f87:{NFSU2_TR(0x749f87);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B749f89:{NFSU2_TR(0x749f89);
u8 U[4];
w4(U+0,u32(0x7d2d54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749f8e:{NFSU2_TR(0x749f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x528ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B749f94:{NFSU2_TR(0x749f94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749f95:{NFSU2_TR(0x749f95);
u8 U[1];
w1(U+0,u8(0xaull));
s1(u32(r4(R+0)),r1(U+0));
}
B749f98:{NFSU2_TR(0x749f98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749f9dull));
TAIL_STATIC(0x748990u,748);
}
B749f9d:L749f9d:{c.instructions+=4;NFSU2_TR(0x749f9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B749fa0:{NFSU2_TR(0x749fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x528ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B749fa6:{NFSU2_TR(0x749fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x538ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B749fac:{NFSU2_TR(0x749fac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B749fad:L749fad:{c.instructions+=2;NFSU2_TR(0x749fad);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x538ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B749fb4:{NFSU2_TR(0x749fb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L749fd4;}}
}
B749fb6:L749fb6:{c.instructions+=5;NFSU2_TR(0x749fb6);
u8 U[4];
w4(U+0,u32(0x7d2c28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749fbb:{NFSU2_TR(0x749fbb);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749fc0:{NFSU2_TR(0x749fc0);
u8 U[4];
w4(U+0,u32(0x7d2d44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749fc5:{NFSU2_TR(0x749fc5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749fc6:{NFSU2_TR(0x749fc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749fcbull));
TAIL_STATIC(0x748990u,748);
}
B749fcb:L749fcb:{c.instructions+=2;NFSU2_TR(0x749fcb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B749fce:{NFSU2_TR(0x749fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x538ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B749fd4:L749fd4:{c.instructions+=2;NFSU2_TR(0x749fd4);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x538ull))));
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
B749fda:{NFSU2_TR(0x749fda);
if(r1(R+518)){TAIL_STATIC(0x74a00fu,74a);}
}
B749fdc:L749fdc:{c.instructions+=1;NFSU2_TR(0x749fdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749fe1ull));
TAIL_STATIC(0x74b730u,74b);
}
B749fe1:L749fe1:{c.instructions+=2;NFSU2_TR(0x749fe1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x530ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B749fe7:{NFSU2_TR(0x749fe7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x74a007u,74a);}
}
B749fe9:L749fe9:{c.instructions+=5;NFSU2_TR(0x749fe9);
u8 U[4];
w4(U+0,u32(0x7d2c28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749fee:{NFSU2_TR(0x749fee);
u8 U[4];
w4(U+0,u32(0x7d2d44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749ff3:{NFSU2_TR(0x749ff3);
u8 U[4];
w4(U+0,u32(0x7d2d34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749ff8:{NFSU2_TR(0x749ff8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B749ff9:{NFSU2_TR(0x749ff9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x749ffeull));
TAIL_STATIC(0x748990u,748);
}
B749ffe:L749ffe:{c.instructions+=1;NFSU2_TR(0x749ffe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
TAIL_STATIC(0x74a001u,74a);
}
XIT:NFSU2_TR_EXIT(0x749,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
