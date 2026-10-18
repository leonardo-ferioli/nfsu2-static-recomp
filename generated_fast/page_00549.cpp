#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_522(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_53c(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_544(u8* __restrict R,Cpu& c);
u32 body_54a(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x549,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x549,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_549(u8* __restrict R,Cpu& c);
u32 page_549(Cpu& c){return body_549(c.regs.data(),c);}
__attribute__((noinline)) u32 body_549(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x549000:goto L549000;
case 0x549003:c.instructions+=9;goto B549003;
case 0x549004:c.instructions+=8;goto B549004;
case 0x549005:c.instructions+=7;goto B549005;
case 0x549006:c.instructions+=6;goto B549006;
case 0x549007:c.instructions+=5;goto B549007;
case 0x549009:c.instructions+=4;goto B549009;
case 0x54900c:c.instructions+=3;goto B54900c;
case 0x549011:c.instructions+=2;goto B549011;
case 0x549012:c.instructions+=1;goto B549012;
case 0x549017:goto L549017;
case 0x54901b:c.instructions+=4;goto B54901b;
case 0x54901e:c.instructions+=3;goto B54901e;
case 0x54901f:c.instructions+=2;goto B54901f;
case 0x549024:c.instructions+=1;goto B549024;
case 0x549029:goto L549029;
case 0x54902a:c.instructions+=3;goto B54902a;
case 0x54902f:c.instructions+=2;goto B54902f;
case 0x549030:c.instructions+=1;goto B549030;
case 0x549035:goto L549035;
case 0x549038:c.instructions+=3;goto B549038;
case 0x549039:c.instructions+=2;goto B549039;
case 0x54903e:c.instructions+=1;goto B54903e;
case 0x549043:goto L549043;
case 0x549044:c.instructions+=3;goto B549044;
case 0x549049:c.instructions+=2;goto B549049;
case 0x54904a:c.instructions+=1;goto B54904a;
case 0x54904f:goto L54904f;
case 0x549052:c.instructions+=3;goto B549052;
case 0x549053:c.instructions+=2;goto B549053;
case 0x549058:c.instructions+=1;goto B549058;
case 0x54905d:goto L54905d;
case 0x54905e:c.instructions+=3;goto B54905e;
case 0x549063:c.instructions+=2;goto B549063;
case 0x549064:c.instructions+=1;goto B549064;
case 0x549069:goto L549069;
case 0x54906c:c.instructions+=4;goto B54906c;
case 0x54906f:c.instructions+=3;goto B54906f;
case 0x549070:c.instructions+=2;goto B549070;
case 0x549075:c.instructions+=1;goto B549075;
case 0x54907a:goto L54907a;
case 0x54907b:c.instructions+=3;goto B54907b;
case 0x549080:c.instructions+=2;goto B549080;
case 0x549081:c.instructions+=1;goto B549081;
case 0x549086:goto L549086;
case 0x549089:c.instructions+=3;goto B549089;
case 0x54908a:c.instructions+=2;goto B54908a;
case 0x54908f:c.instructions+=1;goto B54908f;
case 0x549094:goto L549094;
case 0x549095:c.instructions+=3;goto B549095;
case 0x54909a:c.instructions+=2;goto B54909a;
case 0x54909b:c.instructions+=1;goto B54909b;
case 0x5490a0:goto L5490a0;
case 0x5490a2:c.instructions+=1;goto B5490a2;
case 0x5490a7:goto L5490a7;
case 0x5490aa:c.instructions+=3;goto B5490aa;
case 0x5490ac:c.instructions+=2;goto B5490ac;
case 0x5490af:c.instructions+=1;goto B5490af;
case 0x5490b4:goto L5490b4;
case 0x5490b6:c.instructions+=4;goto B5490b6;
case 0x5490b8:c.instructions+=3;goto B5490b8;
case 0x5490bd:c.instructions+=2;goto B5490bd;
case 0x5490c2:c.instructions+=1;goto B5490c2;
case 0x5490c6:goto L5490c6;
case 0x5490c8:goto L5490c8;
case 0x5490ca:c.instructions+=5;goto B5490ca;
case 0x5490cb:c.instructions+=4;goto B5490cb;
case 0x5490cd:c.instructions+=3;goto B5490cd;
case 0x5490d2:c.instructions+=2;goto B5490d2;
case 0x5490d7:c.instructions+=1;goto B5490d7;
case 0x5490db:goto L5490db;
case 0x5490dd:goto L5490dd;
case 0x5490df:c.instructions+=9;goto B5490df;
case 0x5490e5:c.instructions+=8;goto B5490e5;
case 0x5490e6:c.instructions+=7;goto B5490e6;
case 0x5490e9:c.instructions+=6;goto B5490e9;
case 0x5490ef:c.instructions+=5;goto B5490ef;
case 0x5490f3:c.instructions+=4;goto B5490f3;
case 0x5490f4:c.instructions+=3;goto B5490f4;
case 0x5490f6:c.instructions+=2;goto B5490f6;
case 0x5490f9:c.instructions+=1;goto B5490f9;
case 0x5490fb:goto L5490fb;
case 0x549100:c.instructions+=2;goto B549100;
case 0x549101:c.instructions+=1;goto B549101;
case 0x549106:goto L549106;
case 0x549109:c.instructions+=5;goto B549109;
case 0x54910f:c.instructions+=4;goto B54910f;
case 0x549112:c.instructions+=3;goto B549112;
case 0x549114:c.instructions+=2;goto B549114;
case 0x549117:c.instructions+=1;goto B549117;
case 0x549119:goto L549119;
case 0x54911e:c.instructions+=3;goto B54911e;
case 0x549122:c.instructions+=2;goto B549122;
case 0x549123:c.instructions+=1;goto B549123;
case 0x549128:goto L549128;
case 0x54912d:c.instructions+=1;goto B54912d;
case 0x549132:goto L549132;
case 0x549135:c.instructions+=4;goto B549135;
case 0x54913b:c.instructions+=3;goto B54913b;
case 0x54913d:c.instructions+=2;goto B54913d;
case 0x549140:c.instructions+=1;goto B549140;
case 0x549142:goto L549142;
case 0x549147:c.instructions+=2;goto B549147;
case 0x549148:c.instructions+=1;goto B549148;
case 0x54914d:goto L54914d;
case 0x549150:c.instructions+=5;goto B549150;
case 0x549156:c.instructions+=4;goto B549156;
case 0x549159:c.instructions+=3;goto B549159;
case 0x54915b:c.instructions+=2;goto B54915b;
case 0x54915e:c.instructions+=1;goto B54915e;
case 0x549160:goto L549160;
case 0x549165:c.instructions+=3;goto B549165;
case 0x549169:c.instructions+=2;goto B549169;
case 0x54916a:c.instructions+=1;goto B54916a;
case 0x54916c:goto L54916c;
case 0x549171:c.instructions+=1;goto B549171;
case 0x549173:goto L549173;
case 0x549176:c.instructions+=4;goto B549176;
case 0x54917c:c.instructions+=3;goto B54917c;
case 0x54917e:c.instructions+=2;goto B54917e;
case 0x549181:c.instructions+=1;goto B549181;
case 0x549183:goto L549183;
case 0x549188:c.instructions+=2;goto B549188;
case 0x549189:c.instructions+=1;goto B549189;
case 0x54918e:goto L54918e;
case 0x549191:c.instructions+=5;goto B549191;
case 0x549197:c.instructions+=4;goto B549197;
case 0x54919a:c.instructions+=3;goto B54919a;
case 0x54919c:c.instructions+=2;goto B54919c;
case 0x54919f:c.instructions+=1;goto B54919f;
case 0x5491a1:goto L5491a1;
case 0x5491a6:c.instructions+=3;goto B5491a6;
case 0x5491aa:c.instructions+=2;goto B5491aa;
case 0x5491ab:c.instructions+=1;goto B5491ab;
case 0x5491ad:goto L5491ad;
case 0x5491b2:c.instructions+=1;goto B5491b2;
case 0x5491b4:goto L5491b4;
case 0x5491b9:c.instructions+=2;goto B5491b9;
case 0x5491ba:c.instructions+=1;goto B5491ba;
case 0x5491bf:goto L5491bf;
case 0x5491c2:c.instructions+=5;goto B5491c2;
case 0x5491c8:c.instructions+=4;goto B5491c8;
case 0x5491cb:c.instructions+=3;goto B5491cb;
case 0x5491cd:c.instructions+=2;goto B5491cd;
case 0x5491d0:c.instructions+=1;goto B5491d0;
case 0x5491d2:goto L5491d2;
case 0x5491d7:c.instructions+=3;goto B5491d7;
case 0x5491db:c.instructions+=2;goto B5491db;
case 0x5491dc:c.instructions+=1;goto B5491dc;
case 0x5491de:goto L5491de;
case 0x5491e3:goto L5491e3;
case 0x5491e7:c.instructions+=1;goto B5491e7;
case 0x5491e8:goto L5491e8;
case 0x5491ed:goto L5491ed;
case 0x5491f1:c.instructions+=3;goto B5491f1;
case 0x5491f4:c.instructions+=2;goto B5491f4;
case 0x5491f5:c.instructions+=1;goto B5491f5;
case 0x5491fa:goto L5491fa;
case 0x5491fe:c.instructions+=3;goto B5491fe;
case 0x5491ff:c.instructions+=2;goto B5491ff;
case 0x549201:c.instructions+=1;goto B549201;
case 0x549206:goto L549206;
case 0x549207:c.instructions+=4;goto B549207;
case 0x54920a:c.instructions+=3;goto B54920a;
case 0x54920f:c.instructions+=2;goto B54920f;
case 0x549210:c.instructions+=1;goto B549210;
case 0x549215:goto L549215;
case 0x549218:c.instructions+=3;goto B549218;
case 0x54921d:c.instructions+=2;goto B54921d;
case 0x54921e:c.instructions+=1;goto B54921e;
case 0x549223:goto L549223;
case 0x549226:c.instructions+=2;goto B549226;
case 0x549228:c.instructions+=1;goto B549228;
case 0x54922a:goto L54922a;
case 0x54922d:c.instructions+=1;goto B54922d;
case 0x54922f:goto L54922f;
case 0x549232:c.instructions+=3;goto B549232;
case 0x549238:c.instructions+=2;goto B549238;
case 0x54923b:c.instructions+=1;goto B54923b;
case 0x54923e:goto L54923e;
case 0x549244:c.instructions+=1;goto B549244;
case 0x549249:goto L549249;
case 0x54924b:c.instructions+=2;goto B54924b;
case 0x54924e:c.instructions+=1;goto B54924e;
case 0x549250:goto L549250;
case 0x549255:c.instructions+=1;goto B549255;
case 0x549257:goto L549257;
case 0x54925c:goto L54925c;
case 0x549261:c.instructions+=2;goto B549261;
case 0x549262:c.instructions+=1;goto B549262;
case 0x549267:goto L549267;
case 0x54926a:c.instructions+=2;goto B54926a;
case 0x54926b:c.instructions+=1;goto B54926b;
case 0x549270:goto L549270;
case 0x549273:c.instructions+=6;goto B549273;
case 0x549274:c.instructions+=5;goto B549274;
case 0x549275:c.instructions+=4;goto B549275;
case 0x549276:c.instructions+=3;goto B549276;
case 0x549277:c.instructions+=2;goto B549277;
case 0x54927a:c.instructions+=1;goto B54927a;
case 0x549280:goto L549280;
case 0x549281:c.instructions+=19;goto B549281;
case 0x549283:c.instructions+=18;goto B549283;
case 0x549285:c.instructions+=17;goto B549285;
case 0x54928a:c.instructions+=16;goto B54928a;
case 0x549290:c.instructions+=15;goto B549290;
case 0x549291:c.instructions+=14;goto B549291;
case 0x549298:c.instructions+=13;goto B549298;
case 0x54929b:c.instructions+=12;goto B54929b;
case 0x54929c:c.instructions+=11;goto B54929c;
case 0x54929d:c.instructions+=10;goto B54929d;
case 0x54929e:c.instructions+=9;goto B54929e;
case 0x5492a1:c.instructions+=8;goto B5492a1;
case 0x5492a3:c.instructions+=7;goto B5492a3;
case 0x5492a7:c.instructions+=6;goto B5492a7;
case 0x5492aa:c.instructions+=5;goto B5492aa;
case 0x5492ac:c.instructions+=4;goto B5492ac;
case 0x5492ae:c.instructions+=3;goto B5492ae;
case 0x5492b1:c.instructions+=2;goto B5492b1;
case 0x5492b4:c.instructions+=1;goto B5492b4;
case 0x5492b6:goto L5492b6;
case 0x5492b8:c.instructions+=5;goto B5492b8;
case 0x5492bb:c.instructions+=4;goto B5492bb;
case 0x5492bd:c.instructions+=3;goto B5492bd;
case 0x5492be:c.instructions+=2;goto B5492be;
case 0x5492c1:c.instructions+=1;goto B5492c1;
case 0x5492c6:goto L5492c6;
case 0x5492c8:c.instructions+=3;goto B5492c8;
case 0x5492cb:c.instructions+=2;goto B5492cb;
case 0x5492cd:c.instructions+=1;goto B5492cd;
case 0x5492cf:goto L5492cf;
case 0x5492d2:c.instructions+=15;goto B5492d2;
case 0x5492d5:c.instructions+=14;goto B5492d5;
case 0x5492d7:c.instructions+=13;goto B5492d7;
case 0x5492da:c.instructions+=12;goto B5492da;
case 0x5492dd:c.instructions+=11;goto B5492dd;
case 0x5492e0:c.instructions+=10;goto B5492e0;
case 0x5492e2:c.instructions+=9;goto B5492e2;
case 0x5492e5:c.instructions+=8;goto B5492e5;
case 0x5492e8:c.instructions+=7;goto B5492e8;
case 0x5492ef:c.instructions+=6;goto B5492ef;
case 0x5492f2:c.instructions+=5;goto B5492f2;
case 0x5492f5:c.instructions+=4;goto B5492f5;
case 0x5492f8:c.instructions+=3;goto B5492f8;
case 0x5492fa:c.instructions+=2;goto B5492fa;
case 0x5492fd:c.instructions+=1;goto B5492fd;
case 0x5492ff:goto L5492ff;
case 0x549300:c.instructions+=1;goto B549300;
case 0x549302:goto L549302;
case 0x549303:c.instructions+=1;goto B549303;
case 0x549305:goto L549305;
case 0x54930a:c.instructions+=1;goto B54930a;
case 0x54930c:goto L54930c;
case 0x549311:goto L549311;
case 0x549314:goto L549314;
case 0x549315:c.instructions+=5;goto B549315;
case 0x549316:c.instructions+=4;goto B549316;
case 0x549319:c.instructions+=3;goto B549319;
case 0x54931a:c.instructions+=2;goto B54931a;
case 0x54931b:c.instructions+=1;goto B54931b;
case 0x549320:goto L549320;
case 0x549323:c.instructions+=4;goto B549323;
case 0x549326:c.instructions+=3;goto B549326;
case 0x549329:c.instructions+=2;goto B549329;
case 0x54932b:c.instructions+=1;goto B54932b;
case 0x54932d:goto L54932d;
case 0x549330:c.instructions+=2;goto B549330;
case 0x549337:c.instructions+=1;goto B549337;
case 0x54933c:goto L54933c;
case 0x54933d:c.instructions+=7;goto B54933d;
case 0x54933e:c.instructions+=6;goto B54933e;
case 0x54933f:c.instructions+=5;goto B54933f;
case 0x549342:c.instructions+=4;goto B549342;
case 0x549349:c.instructions+=3;goto B549349;
case 0x54934b:c.instructions+=2;goto B54934b;
case 0x54934c:c.instructions+=1;goto B54934c;
case 0x54934f:goto L54934f;
case 0x549354:c.instructions+=2;goto B549354;
case 0x549359:c.instructions+=1;goto B549359;
case 0x54935e:goto L54935e;
case 0x549360:c.instructions+=1;goto B549360;
case 0x549362:goto L549362;
case 0x549364:c.instructions+=3;goto B549364;
case 0x549369:c.instructions+=2;goto B549369;
case 0x54936b:c.instructions+=1;goto B54936b;
case 0x549370:goto L549370;
case 0x549373:c.instructions+=1;goto B549373;
case 0x549375:goto L549375;
case 0x549376:c.instructions+=2;goto B549376;
case 0x54937b:c.instructions+=1;goto B54937b;
case 0x549380:goto L549380;
case 0x549383:c.instructions+=4;goto B549383;
case 0x549388:c.instructions+=3;goto B549388;
case 0x54938b:c.instructions+=2;goto B54938b;
case 0x54938e:c.instructions+=1;goto B54938e;
case 0x549393:goto L549393;
case 0x549395:c.instructions+=2;goto B549395;
case 0x549398:c.instructions+=1;goto B549398;
case 0x54939e:goto L54939e;
case 0x5493a0:goto L5493a0;
case 0x5493a3:c.instructions+=3;goto B5493a3;
case 0x5493a6:c.instructions+=2;goto B5493a6;
case 0x5493a7:c.instructions+=1;goto B5493a7;
case 0x5493ac:goto L5493ac;
case 0x5493ae:c.instructions+=1;goto B5493ae;
case 0x5493b4:goto L5493b4;
case 0x5493b7:c.instructions+=5;goto B5493b7;
case 0x5493ba:c.instructions+=4;goto B5493ba;
case 0x5493bd:c.instructions+=3;goto B5493bd;
case 0x5493be:c.instructions+=2;goto B5493be;
case 0x5493c3:c.instructions+=1;goto B5493c3;
case 0x5493c8:goto L5493c8;
case 0x5493cb:c.instructions+=3;goto B5493cb;
case 0x5493cd:c.instructions+=2;goto B5493cd;
case 0x5493cf:c.instructions+=1;goto B5493cf;
case 0x5493d1:goto L5493d1;
case 0x5493d2:c.instructions+=1;goto B5493d2;
case 0x5493d7:goto L5493d7;
case 0x5493da:c.instructions+=2;goto B5493da;
case 0x5493dc:c.instructions+=1;goto B5493dc;
case 0x5493de:goto L5493de;
case 0x5493df:c.instructions+=2;goto B5493df;
case 0x5493e1:c.instructions+=1;goto B5493e1;
case 0x5493e6:goto L5493e6;
case 0x5493e8:c.instructions+=1;goto B5493e8;
case 0x5493ea:goto L5493ea;
case 0x5493ef:c.instructions+=2;goto B5493ef;
case 0x5493f1:c.instructions+=1;goto B5493f1;
case 0x5493f7:goto L5493f7;
case 0x5493fa:c.instructions+=3;goto B5493fa;
case 0x5493fb:c.instructions+=2;goto B5493fb;
case 0x5493fc:c.instructions+=1;goto B5493fc;
case 0x549401:goto L549401;
case 0x549403:c.instructions+=2;goto B549403;
case 0x549405:c.instructions+=1;goto B549405;
case 0x54940b:goto L54940b;
case 0x54940f:c.instructions+=1;goto B54940f;
case 0x549415:goto L549415;
case 0x549416:c.instructions+=1;goto B549416;
case 0x54941b:goto L54941b;
case 0x54941d:c.instructions+=1;goto B54941d;
case 0x549422:goto L549422;
case 0x549425:c.instructions+=2;goto B549425;
case 0x549427:c.instructions+=1;goto B549427;
case 0x549429:goto L549429;
case 0x54942c:c.instructions+=6;goto B54942c;
case 0x54942f:c.instructions+=5;goto B54942f;
case 0x549432:c.instructions+=4;goto B549432;
case 0x549435:c.instructions+=3;goto B549435;
case 0x549438:c.instructions+=2;goto B549438;
case 0x54943a:c.instructions+=1;goto B54943a;
case 0x54943c:goto L54943c;
case 0x54943e:goto L54943e;
case 0x549441:c.instructions+=9;goto B549441;
case 0x549444:c.instructions+=8;goto B549444;
case 0x549446:c.instructions+=7;goto B549446;
case 0x549449:c.instructions+=6;goto B549449;
case 0x54944b:c.instructions+=5;goto B54944b;
case 0x54944e:c.instructions+=4;goto B54944e;
case 0x549450:c.instructions+=3;goto B549450;
case 0x549453:c.instructions+=2;goto B549453;
case 0x549458:c.instructions+=1;goto B549458;
case 0x54945d:goto L54945d;
case 0x549460:c.instructions+=4;goto B549460;
case 0x549462:c.instructions+=3;goto B549462;
case 0x549467:c.instructions+=2;goto B549467;
case 0x54946a:c.instructions+=1;goto B54946a;
case 0x54946f:goto L54946f;
case 0x549472:c.instructions+=4;goto B549472;
case 0x549474:c.instructions+=3;goto B549474;
case 0x549479:c.instructions+=2;goto B549479;
case 0x54947c:c.instructions+=1;goto B54947c;
case 0x549481:goto L549481;
case 0x549484:c.instructions+=7;goto B549484;
case 0x549487:c.instructions+=6;goto B549487;
case 0x54948a:c.instructions+=5;goto B54948a;
case 0x549491:c.instructions+=4;goto B549491;
case 0x549498:c.instructions+=3;goto B549498;
case 0x54949b:c.instructions+=2;goto B54949b;
case 0x54949e:c.instructions+=1;goto B54949e;
case 0x5494a0:goto L5494a0;
case 0x5494a3:c.instructions+=4;goto B5494a3;
case 0x5494a4:c.instructions+=3;goto B5494a4;
case 0x5494a7:c.instructions+=2;goto B5494a7;
case 0x5494a8:c.instructions+=1;goto B5494a8;
case 0x5494ad:goto L5494ad;
case 0x5494b0:c.instructions+=2;goto B5494b0;
case 0x5494b2:c.instructions+=1;goto B5494b2;
case 0x5494b4:goto L5494b4;
case 0x5494bb:goto L5494bb;
case 0x5494bd:c.instructions+=5;goto B5494bd;
case 0x5494c0:c.instructions+=4;goto B5494c0;
case 0x5494c1:c.instructions+=3;goto B5494c1;
case 0x5494c3:c.instructions+=2;goto B5494c3;
case 0x5494c5:c.instructions+=1;goto B5494c5;
case 0x5494ca:goto L5494ca;
case 0x5494cd:c.instructions+=8;goto B5494cd;
case 0x5494d0:c.instructions+=7;goto B5494d0;
case 0x5494d3:c.instructions+=6;goto B5494d3;
case 0x5494d6:c.instructions+=5;goto B5494d6;
case 0x5494d7:c.instructions+=4;goto B5494d7;
case 0x5494d9:c.instructions+=3;goto B5494d9;
case 0x5494db:c.instructions+=2;goto B5494db;
case 0x5494de:c.instructions+=1;goto B5494de;
case 0x5494e0:goto L5494e0;
case 0x5494e2:c.instructions+=3;goto B5494e2;
case 0x5494e5:c.instructions+=2;goto B5494e5;
case 0x5494e8:c.instructions+=1;goto B5494e8;
case 0x5494eb:goto L5494eb;
case 0x5494ed:c.instructions+=2;goto B5494ed;
case 0x5494f0:c.instructions+=1;goto B5494f0;
case 0x5494f6:goto L5494f6;
case 0x5494f9:c.instructions+=2;goto B5494f9;
case 0x5494fc:c.instructions+=1;goto B5494fc;
case 0x549502:goto L549502;
case 0x549504:goto L549504;
case 0x549507:c.instructions+=4;goto B549507;
case 0x54950a:c.instructions+=3;goto B54950a;
case 0x54950b:c.instructions+=2;goto B54950b;
case 0x549510:c.instructions+=1;goto B549510;
case 0x549515:goto L549515;
case 0x549518:c.instructions+=3;goto B549518;
case 0x54951a:c.instructions+=2;goto B54951a;
case 0x54951c:c.instructions+=1;goto B54951c;
case 0x54951e:goto L54951e;
case 0x54951f:c.instructions+=1;goto B54951f;
case 0x549524:goto L549524;
case 0x549527:c.instructions+=2;goto B549527;
case 0x549529:c.instructions+=1;goto B549529;
case 0x54952b:goto L54952b;
case 0x549532:c.instructions+=7;goto B549532;
case 0x549535:c.instructions+=6;goto B549535;
case 0x549536:c.instructions+=5;goto B549536;
case 0x549538:c.instructions+=4;goto B549538;
case 0x54953c:c.instructions+=3;goto B54953c;
case 0x54953f:c.instructions+=2;goto B54953f;
case 0x549546:c.instructions+=1;goto B549546;
case 0x54954b:goto L54954b;
case 0x54954e:c.instructions+=4;goto B54954e;
case 0x549550:c.instructions+=3;goto B549550;
case 0x549554:c.instructions+=2;goto B549554;
case 0x54955b:c.instructions+=1;goto B54955b;
case 0x54955d:goto L54955d;
case 0x549562:c.instructions+=2;goto B549562;
case 0x549564:c.instructions+=1;goto B549564;
case 0x549566:goto L549566;
case 0x549569:c.instructions+=3;goto B549569;
case 0x54956a:c.instructions+=2;goto B54956a;
case 0x54956b:c.instructions+=1;goto B54956b;
case 0x549570:goto L549570;
case 0x549572:c.instructions+=1;goto B549572;
case 0x549574:goto L549574;
case 0x54957a:c.instructions+=2;goto B54957a;
case 0x54957c:c.instructions+=1;goto B54957c;
case 0x54957e:goto L54957e;
case 0x549582:c.instructions+=1;goto B549582;
case 0x549584:goto L549584;
case 0x54958b:goto L54958b;
case 0x54958f:c.instructions+=1;goto B54958f;
case 0x549591:goto L549591;
case 0x549594:c.instructions+=3;goto B549594;
case 0x549597:c.instructions+=2;goto B549597;
case 0x549599:c.instructions+=1;goto B549599;
case 0x54959b:goto L54959b;
case 0x54959d:c.instructions+=1;goto B54959d;
case 0x5495a0:goto L5495a0;
case 0x5495a1:c.instructions+=1;goto B5495a1;
case 0x5495a6:goto L5495a6;
case 0x5495a9:c.instructions+=3;goto B5495a9;
case 0x5495ac:c.instructions+=2;goto B5495ac;
case 0x5495ad:c.instructions+=1;goto B5495ad;
case 0x5495af:goto L5495af;
case 0x5495b0:c.instructions+=2;goto B5495b0;
case 0x5495b3:c.instructions+=1;goto B5495b3;
case 0x5495b9:goto L5495b9;
case 0x5495bc:c.instructions+=4;goto B5495bc;
case 0x5495be:c.instructions+=3;goto B5495be;
case 0x5495c0:c.instructions+=2;goto B5495c0;
case 0x5495c3:c.instructions+=1;goto B5495c3;
case 0x5495c9:goto L5495c9;
case 0x5495cc:c.instructions+=3;goto B5495cc;
case 0x5495cf:c.instructions+=2;goto B5495cf;
case 0x5495d1:c.instructions+=1;goto B5495d1;
case 0x5495d3:goto L5495d3;
case 0x5495d5:c.instructions+=1;goto B5495d5;
case 0x5495d8:goto L5495d8;
case 0x5495db:c.instructions+=3;goto B5495db;
case 0x5495e0:c.instructions+=2;goto B5495e0;
case 0x5495e3:c.instructions+=1;goto B5495e3;
case 0x5495e5:goto L5495e5;
case 0x5495e8:c.instructions+=2;goto B5495e8;
case 0x5495ea:c.instructions+=1;goto B5495ea;
case 0x5495ec:goto L5495ec;
case 0x5495ee:c.instructions+=1;goto B5495ee;
case 0x5495f0:goto L5495f0;
case 0x5495f2:goto L5495f2;
case 0x5495f5:c.instructions+=5;goto B5495f5;
case 0x5495f8:c.instructions+=4;goto B5495f8;
case 0x5495fa:c.instructions+=3;goto B5495fa;
case 0x5495fb:c.instructions+=2;goto B5495fb;
case 0x5495fd:c.instructions+=1;goto B5495fd;
case 0x5495ff:goto L5495ff;
case 0x549601:c.instructions+=1;goto B549601;
case 0x549603:goto L549603;
case 0x549604:c.instructions+=1;goto B549604;
case 0x549609:goto L549609;
case 0x54960c:c.instructions+=2;goto B54960c;
case 0x54960e:c.instructions+=1;goto B54960e;
case 0x549610:goto L549610;
case 0x549617:c.instructions+=7;goto B549617;
case 0x54961a:c.instructions+=6;goto B54961a;
case 0x54961b:c.instructions+=5;goto B54961b;
case 0x54961d:c.instructions+=4;goto B54961d;
case 0x549621:c.instructions+=3;goto B549621;
case 0x549624:c.instructions+=2;goto B549624;
case 0x54962b:c.instructions+=1;goto B54962b;
case 0x549630:goto L549630;
case 0x549633:c.instructions+=4;goto B549633;
case 0x549635:c.instructions+=3;goto B549635;
case 0x549639:c.instructions+=2;goto B549639;
case 0x549640:c.instructions+=1;goto B549640;
case 0x549642:goto L549642;
case 0x549644:c.instructions+=1;goto B549644;
case 0x549646:goto L549646;
case 0x54964b:c.instructions+=2;goto B54964b;
case 0x54964d:c.instructions+=1;goto B54964d;
case 0x54964f:goto L54964f;
case 0x549652:c.instructions+=3;goto B549652;
case 0x549653:c.instructions+=2;goto B549653;
case 0x549654:c.instructions+=1;goto B549654;
case 0x549659:goto L549659;
case 0x54965b:c.instructions+=1;goto B54965b;
case 0x54965d:goto L54965d;
case 0x54965f:goto L54965f;
case 0x549661:c.instructions+=1;goto B549661;
case 0x549663:goto L549663;
case 0x549668:c.instructions+=3;goto B549668;
case 0x54966b:c.instructions+=2;goto B54966b;
case 0x54966d:c.instructions+=1;goto B54966d;
case 0x549670:goto L549670;
case 0x549673:c.instructions+=2;goto B549673;
case 0x549675:c.instructions+=1;goto B549675;
case 0x549677:goto L549677;
case 0x549679:c.instructions+=1;goto B549679;
case 0x54967b:goto L54967b;
case 0x54967d:goto L54967d;
case 0x549680:c.instructions+=5;goto B549680;
case 0x549682:c.instructions+=4;goto B549682;
case 0x549685:c.instructions+=3;goto B549685;
case 0x549686:c.instructions+=2;goto B549686;
case 0x549688:c.instructions+=1;goto B549688;
case 0x54968a:goto L54968a;
case 0x54968d:c.instructions+=2;goto B54968d;
case 0x54968f:c.instructions+=1;goto B54968f;
case 0x549691:goto L549691;
case 0x549694:c.instructions+=1;goto B549694;
case 0x549696:goto L549696;
case 0x549699:c.instructions+=2;goto B549699;
case 0x54969b:c.instructions+=1;goto B54969b;
case 0x54969d:goto L54969d;
case 0x54969f:goto L54969f;
case 0x5496a1:c.instructions+=1;goto B5496a1;
case 0x5496a3:goto L5496a3;
case 0x5496a6:c.instructions+=1;goto B5496a6;
case 0x5496a8:goto L5496a8;
case 0x5496aa:c.instructions+=2;goto B5496aa;
case 0x5496ad:c.instructions+=1;goto B5496ad;
case 0x5496b2:goto L5496b2;
case 0x5496b5:c.instructions+=1;goto B5496b5;
case 0x5496bc:goto L5496bc;
case 0x5496c3:goto L5496c3;
case 0x5496c6:c.instructions+=8;goto B5496c6;
case 0x5496c9:c.instructions+=7;goto B5496c9;
case 0x5496cc:c.instructions+=6;goto B5496cc;
case 0x5496cf:c.instructions+=5;goto B5496cf;
case 0x5496d0:c.instructions+=4;goto B5496d0;
case 0x5496d3:c.instructions+=3;goto B5496d3;
case 0x5496d4:c.instructions+=2;goto B5496d4;
case 0x5496d5:c.instructions+=1;goto B5496d5;
case 0x5496da:goto L5496da;
case 0x5496dd:c.instructions+=7;goto B5496dd;
case 0x5496e0:c.instructions+=6;goto B5496e0;
case 0x5496e3:c.instructions+=5;goto B5496e3;
case 0x5496e4:c.instructions+=4;goto B5496e4;
case 0x5496e7:c.instructions+=3;goto B5496e7;
case 0x5496e8:c.instructions+=2;goto B5496e8;
case 0x5496e9:c.instructions+=1;goto B5496e9;
case 0x5496ee:goto L5496ee;
case 0x5496f1:c.instructions+=9;goto B5496f1;
case 0x5496f7:c.instructions+=8;goto B5496f7;
case 0x5496fa:c.instructions+=7;goto B5496fa;
case 0x5496fd:c.instructions+=6;goto B5496fd;
case 0x549701:c.instructions+=5;goto B549701;
case 0x549704:c.instructions+=4;goto B549704;
case 0x54970a:c.instructions+=3;goto B54970a;
case 0x54970d:c.instructions+=2;goto B54970d;
case 0x54970e:c.instructions+=1;goto B54970e;
case 0x549713:goto L549713;
case 0x549716:goto L549716;
case 0x549719:c.instructions+=4;goto B549719;
case 0x54971c:c.instructions+=3;goto B54971c;
case 0x54971e:c.instructions+=2;goto B54971e;
case 0x549725:c.instructions+=1;goto B549725;
case 0x549727:goto L549727;
case 0x549729:c.instructions+=6;goto B549729;
case 0x54972b:c.instructions+=5;goto B54972b;
case 0x54972e:c.instructions+=4;goto B54972e;
case 0x549730:c.instructions+=3;goto B549730;
case 0x549731:c.instructions+=2;goto B549731;
case 0x549734:c.instructions+=1;goto B549734;
case 0x549739:goto L549739;
case 0x54973c:c.instructions+=4;goto B54973c;
case 0x54973f:c.instructions+=3;goto B54973f;
case 0x549742:c.instructions+=2;goto B549742;
case 0x549744:c.instructions+=1;goto B549744;
case 0x549746:goto L549746;
case 0x549749:c.instructions+=7;goto B549749;
case 0x54974a:c.instructions+=6;goto B54974a;
case 0x54974b:c.instructions+=5;goto B54974b;
case 0x54974c:c.instructions+=4;goto B54974c;
case 0x549753:c.instructions+=3;goto B549753;
case 0x549755:c.instructions+=2;goto B549755;
case 0x549756:c.instructions+=1;goto B549756;
case 0x549760:goto L549760;
case 0x549761:c.instructions+=2;goto B549761;
case 0x549763:c.instructions+=1;goto B549763;
case 0x549768:goto L549768;
case 0x54976d:c.instructions+=2;goto B54976d;
case 0x549770:c.instructions+=1;goto B549770;
case 0x549776:goto L549776;
case 0x54977d:goto L54977d;
case 0x549782:c.instructions+=5;goto B549782;
case 0x549783:c.instructions+=4;goto B549783;
case 0x549786:c.instructions+=3;goto B549786;
case 0x54978b:c.instructions+=2;goto B54978b;
case 0x54978c:c.instructions+=1;goto B54978c;
case 0x549791:goto L549791;
case 0x549794:c.instructions+=2;goto B549794;
case 0x549795:c.instructions+=1;goto B549795;
case 0x549796:goto L549796;
case 0x54979b:c.instructions+=5;goto B54979b;
case 0x54979c:c.instructions+=4;goto B54979c;
case 0x54979f:c.instructions+=3;goto B54979f;
case 0x5497a4:c.instructions+=2;goto B5497a4;
case 0x5497a5:c.instructions+=1;goto B5497a5;
case 0x5497aa:goto L5497aa;
case 0x5497ad:c.instructions+=2;goto B5497ad;
case 0x5497ae:c.instructions+=1;goto B5497ae;
case 0x5497af:goto L5497af;
case 0x5497b4:c.instructions+=5;goto B5497b4;
case 0x5497b5:c.instructions+=4;goto B5497b5;
case 0x5497b8:c.instructions+=3;goto B5497b8;
case 0x5497bd:c.instructions+=2;goto B5497bd;
case 0x5497be:c.instructions+=1;goto B5497be;
case 0x5497c3:goto L5497c3;
case 0x5497c6:c.instructions+=2;goto B5497c6;
case 0x5497c7:c.instructions+=1;goto B5497c7;
case 0x5497c8:goto L5497c8;
case 0x5497cd:c.instructions+=5;goto B5497cd;
case 0x5497ce:c.instructions+=4;goto B5497ce;
case 0x5497d1:c.instructions+=3;goto B5497d1;
case 0x5497d6:c.instructions+=2;goto B5497d6;
case 0x5497d7:c.instructions+=1;goto B5497d7;
case 0x5497dc:goto L5497dc;
case 0x5497df:c.instructions+=2;goto B5497df;
case 0x5497e0:c.instructions+=1;goto B5497e0;
case 0x5497e1:goto L5497e1;
case 0x5497e6:c.instructions+=5;goto B5497e6;
case 0x5497e7:c.instructions+=4;goto B5497e7;
case 0x5497ea:c.instructions+=3;goto B5497ea;
case 0x5497ef:c.instructions+=2;goto B5497ef;
case 0x5497f0:c.instructions+=1;goto B5497f0;
case 0x5497f5:goto L5497f5;
case 0x5497f8:c.instructions+=2;goto B5497f8;
case 0x5497f9:c.instructions+=1;goto B5497f9;
case 0x5497fa:goto L5497fa;
case 0x5497fd:c.instructions+=4;goto B5497fd;
case 0x549802:c.instructions+=3;goto B549802;
case 0x549807:c.instructions+=2;goto B549807;
case 0x549808:c.instructions+=1;goto B549808;
case 0x54980d:goto L54980d;
case 0x549810:c.instructions+=2;goto B549810;
case 0x549811:c.instructions+=1;goto B549811;
case 0x549830:goto L549830;
case 0x549834:c.instructions+=5;goto B549834;
case 0x549836:c.instructions+=4;goto B549836;
case 0x54983b:c.instructions+=3;goto B54983b;
case 0x549840:c.instructions+=2;goto B549840;
case 0x549841:c.instructions+=1;goto B549841;
case 0x549846:goto L549846;
case 0x549849:c.instructions+=1;goto B549849;
case 0x549850:goto L549850;
case 0x549851:c.instructions+=14;goto B549851;
case 0x549853:c.instructions+=13;goto B549853;
case 0x549859:c.instructions+=12;goto B549859;
case 0x54985b:c.instructions+=11;goto B54985b;
case 0x549860:c.instructions+=10;goto B549860;
case 0x549861:c.instructions+=9;goto B549861;
case 0x549868:c.instructions+=8;goto B549868;
case 0x549869:c.instructions+=7;goto B549869;
case 0x54986c:c.instructions+=6;goto B54986c;
case 0x54986d:c.instructions+=5;goto B54986d;
case 0x54986e:c.instructions+=4;goto B54986e;
case 0x549870:c.instructions+=3;goto B549870;
case 0x549876:c.instructions+=2;goto B549876;
case 0x549877:c.instructions+=1;goto B549877;
case 0x54987c:goto L54987c;
case 0x54987e:c.instructions+=1;goto B54987e;
case 0x549880:goto L549880;
case 0x549883:c.instructions+=8;goto B549883;
case 0x549886:c.instructions+=7;goto B549886;
case 0x54988d:c.instructions+=6;goto B54988d;
case 0x54988e:c.instructions+=5;goto B54988e;
case 0x54988f:c.instructions+=4;goto B54988f;
case 0x549890:c.instructions+=3;goto B549890;
case 0x549892:c.instructions+=2;goto B549892;
case 0x549893:c.instructions+=1;goto B549893;
case 0x549896:goto L549896;
case 0x54989b:c.instructions+=1;goto B54989b;
case 0x5498a0:goto L5498a0;
case 0x5498a2:c.instructions+=5;goto B5498a2;
case 0x5498a5:c.instructions+=4;goto B5498a5;
case 0x5498a8:c.instructions+=3;goto B5498a8;
case 0x5498aa:c.instructions+=2;goto B5498aa;
case 0x5498b1:c.instructions+=1;goto B5498b1;
case 0x5498b3:goto L5498b3;
case 0x5498b9:c.instructions+=2;goto B5498b9;
case 0x5498ba:c.instructions+=1;goto B5498ba;
case 0x5498bf:goto L5498bf;
case 0x5498c2:c.instructions+=19;goto B5498c2;
case 0x5498c5:c.instructions+=18;goto B5498c5;
case 0x5498c8:c.instructions+=17;goto B5498c8;
case 0x5498cb:c.instructions+=16;goto B5498cb;
case 0x5498cc:c.instructions+=15;goto B5498cc;
case 0x5498cf:c.instructions+=14;goto B5498cf;
case 0x5498d0:c.instructions+=13;goto B5498d0;
case 0x5498d1:c.instructions+=12;goto B5498d1;
case 0x5498d2:c.instructions+=11;goto B5498d2;
case 0x5498d8:c.instructions+=10;goto B5498d8;
case 0x5498d9:c.instructions+=9;goto B5498d9;
case 0x5498df:c.instructions+=8;goto B5498df;
case 0x5498e0:c.instructions+=7;goto B5498e0;
case 0x5498e6:c.instructions+=6;goto B5498e6;
case 0x5498e7:c.instructions+=5;goto B5498e7;
case 0x5498ed:c.instructions+=4;goto B5498ed;
case 0x5498ee:c.instructions+=3;goto B5498ee;
case 0x5498ef:c.instructions+=2;goto B5498ef;
case 0x5498f1:c.instructions+=1;goto B5498f1;
case 0x5498f6:goto L5498f6;
case 0x5498f8:c.instructions+=1;goto B5498f8;
case 0x5498fa:goto L5498fa;
case 0x5498fc:goto L5498fc;
case 0x549902:c.instructions+=4;goto B549902;
case 0x549903:c.instructions+=3;goto B549903;
case 0x549905:c.instructions+=2;goto B549905;
case 0x54990c:c.instructions+=1;goto B54990c;
case 0x549911:goto L549911;
case 0x549914:c.instructions+=4;goto B549914;
case 0x54991a:c.instructions+=3;goto B54991a;
case 0x54991b:c.instructions+=2;goto B54991b;
case 0x54991d:c.instructions+=1;goto B54991d;
case 0x549922:goto L549922;
case 0x549928:c.instructions+=4;goto B549928;
case 0x549929:c.instructions+=3;goto B549929;
case 0x54992a:c.instructions+=2;goto B54992a;
case 0x54992c:c.instructions+=1;goto B54992c;
case 0x549931:goto L549931;
case 0x549932:c.instructions+=3;goto B549932;
case 0x549937:c.instructions+=2;goto B549937;
case 0x549939:c.instructions+=1;goto B549939;
case 0x54993e:goto L54993e;
case 0x549944:c.instructions+=4;goto B549944;
case 0x549945:c.instructions+=3;goto B549945;
case 0x549946:c.instructions+=2;goto B549946;
case 0x549948:c.instructions+=1;goto B549948;
case 0x54994d:goto L54994d;
case 0x54994e:c.instructions+=4;goto B54994e;
case 0x549954:c.instructions+=3;goto B549954;
case 0x549955:c.instructions+=2;goto B549955;
case 0x549957:c.instructions+=1;goto B549957;
case 0x54995c:goto L54995c;
case 0x549962:c.instructions+=4;goto B549962;
case 0x549963:c.instructions+=3;goto B549963;
case 0x549964:c.instructions+=2;goto B549964;
case 0x549966:c.instructions+=1;goto B549966;
case 0x54996b:goto L54996b;
case 0x549971:c.instructions+=4;goto B549971;
case 0x549972:c.instructions+=3;goto B549972;
case 0x549973:c.instructions+=2;goto B549973;
case 0x549975:c.instructions+=1;goto B549975;
case 0x54997a:goto L54997a;
case 0x54997b:c.instructions+=2;goto B54997b;
case 0x54997d:c.instructions+=1;goto B54997d;
case 0x549982:goto L549982;
case 0x549988:c.instructions+=3;goto B549988;
case 0x549989:c.instructions+=2;goto B549989;
case 0x54998b:c.instructions+=1;goto B54998b;
case 0x549990:goto L549990;
case 0x549992:c.instructions+=2;goto B549992;
case 0x549995:c.instructions+=1;goto B549995;
case 0x54999a:goto L54999a;
case 0x54999f:c.instructions+=2;goto B54999f;
case 0x5499a1:c.instructions+=1;goto B5499a1;
case 0x5499a6:goto L5499a6;
case 0x5499ab:c.instructions+=3;goto B5499ab;
case 0x5499ad:c.instructions+=2;goto B5499ad;
case 0x5499b0:c.instructions+=1;goto B5499b0;
case 0x5499b5:goto L5499b5;
case 0x5499b8:c.instructions+=2;goto B5499b8;
case 0x5499bb:c.instructions+=1;goto B5499bb;
case 0x5499bd:goto L5499bd;
case 0x5499c0:c.instructions+=1;goto B5499c0;
case 0x5499c2:goto L5499c2;
case 0x5499c7:c.instructions+=2;goto B5499c7;
case 0x5499c9:c.instructions+=1;goto B5499c9;
case 0x5499ce:goto L5499ce;
case 0x5499d1:goto L5499d1;
case 0x5499d7:c.instructions+=3;goto B5499d7;
case 0x5499d8:c.instructions+=2;goto B5499d8;
case 0x5499da:c.instructions+=1;goto B5499da;
case 0x5499df:goto L5499df;
case 0x5499e2:c.instructions+=4;goto B5499e2;
case 0x5499e8:c.instructions+=3;goto B5499e8;
case 0x5499e9:c.instructions+=2;goto B5499e9;
case 0x5499eb:c.instructions+=1;goto B5499eb;
case 0x5499f0:goto L5499f0;
case 0x5499f3:c.instructions+=5;goto B5499f3;
case 0x5499f6:c.instructions+=4;goto B5499f6;
case 0x5499f8:c.instructions+=3;goto B5499f8;
case 0x5499fb:c.instructions+=2;goto B5499fb;
case 0x549a00:c.instructions+=1;goto B549a00;
case 0x549a02:goto L549a02;
case 0x549a04:c.instructions+=2;goto B549a04;
case 0x549a09:c.instructions+=1;goto B549a09;
case 0x549a0b:goto L549a0b;
case 0x549a0e:c.instructions+=1;goto B549a0e;
case 0x549a10:goto L549a10;
case 0x549a13:c.instructions+=3;goto B549a13;
case 0x549a15:c.instructions+=2;goto B549a15;
case 0x549a18:c.instructions+=1;goto B549a18;
case 0x549a1b:goto L549a1b;
case 0x549a1e:c.instructions+=2;goto B549a1e;
case 0x549a20:c.instructions+=1;goto B549a20;
case 0x549a22:goto L549a22;
case 0x549a24:goto L549a24;
case 0x549a26:c.instructions+=1;goto B549a26;
case 0x549a28:goto L549a28;
case 0x549a2b:c.instructions+=3;goto B549a2b;
case 0x549a30:c.instructions+=2;goto B549a30;
case 0x549a32:c.instructions+=1;goto B549a32;
case 0x549a34:goto L549a34;
case 0x549a37:c.instructions+=1;goto B549a37;
case 0x549a3a:goto L549a3a;
case 0x549a3d:c.instructions+=2;goto B549a3d;
case 0x549a3f:c.instructions+=1;goto B549a3f;
case 0x549a41:goto L549a41;
case 0x549a46:goto L549a46;
case 0x549a49:c.instructions+=1;goto B549a49;
case 0x549a4b:goto L549a4b;
case 0x549a4e:c.instructions+=1;goto B549a4e;
case 0x549a51:goto L549a51;
case 0x549a54:c.instructions+=21;goto B549a54;
case 0x549a57:c.instructions+=20;goto B549a57;
case 0x549a5a:c.instructions+=19;goto B549a5a;
case 0x549a5c:c.instructions+=18;goto B549a5c;
case 0x549a5f:c.instructions+=17;goto B549a5f;
case 0x549a61:c.instructions+=16;goto B549a61;
case 0x549a64:c.instructions+=15;goto B549a64;
case 0x549a6a:c.instructions+=14;goto B549a6a;
case 0x549a70:c.instructions+=13;goto B549a70;
case 0x549a76:c.instructions+=12;goto B549a76;
case 0x549a77:c.instructions+=11;goto B549a77;
case 0x549a7d:c.instructions+=10;goto B549a7d;
case 0x549a83:c.instructions+=9;goto B549a83;
case 0x549a85:c.instructions+=8;goto B549a85;
case 0x549a8b:c.instructions+=7;goto B549a8b;
case 0x549a91:c.instructions+=6;goto B549a91;
case 0x549a97:c.instructions+=5;goto B549a97;
case 0x549a9d:c.instructions+=4;goto B549a9d;
case 0x549aa3:c.instructions+=3;goto B549aa3;
case 0x549aa5:c.instructions+=2;goto B549aa5;
case 0x549aaf:c.instructions+=1;goto B549aaf;
case 0x549ab2:goto L549ab2;
case 0x549ab5:c.instructions+=6;goto B549ab5;
case 0x549ab8:c.instructions+=5;goto B549ab8;
case 0x549ab9:c.instructions+=4;goto B549ab9;
case 0x549abc:c.instructions+=3;goto B549abc;
case 0x549abd:c.instructions+=2;goto B549abd;
case 0x549abe:c.instructions+=1;goto B549abe;
case 0x549ac3:goto L549ac3;
case 0x549ac9:c.instructions+=7;goto B549ac9;
case 0x549acb:c.instructions+=6;goto B549acb;
case 0x549ace:c.instructions+=5;goto B549ace;
case 0x549ad0:c.instructions+=4;goto B549ad0;
case 0x549ad3:c.instructions+=3;goto B549ad3;
case 0x549ad9:c.instructions+=2;goto B549ad9;
case 0x549adb:c.instructions+=1;goto B549adb;
case 0x549ade:goto L549ade;
case 0x549ae0:c.instructions+=2;goto B549ae0;
case 0x549ae2:c.instructions+=1;goto B549ae2;
case 0x549ae5:goto L549ae5;
case 0x549ae8:c.instructions+=6;goto B549ae8;
case 0x549aeb:c.instructions+=5;goto B549aeb;
case 0x549aec:c.instructions+=4;goto B549aec;
case 0x549aef:c.instructions+=3;goto B549aef;
case 0x549af0:c.instructions+=2;goto B549af0;
case 0x549af1:c.instructions+=1;goto B549af1;
case 0x549af6:goto L549af6;
case 0x549af9:c.instructions+=6;goto B549af9;
case 0x549afc:c.instructions+=5;goto B549afc;
case 0x549afd:c.instructions+=4;goto B549afd;
case 0x549b00:c.instructions+=3;goto B549b00;
case 0x549b01:c.instructions+=2;goto B549b01;
case 0x549b02:c.instructions+=1;goto B549b02;
case 0x549b07:goto L549b07;
case 0x549b0a:c.instructions+=16;goto B549b0a;
case 0x549b0d:c.instructions+=15;goto B549b0d;
case 0x549b10:c.instructions+=14;goto B549b10;
case 0x549b13:c.instructions+=13;goto B549b13;
case 0x549b16:c.instructions+=12;goto B549b16;
case 0x549b18:c.instructions+=11;goto B549b18;
case 0x549b1a:c.instructions+=10;goto B549b1a;
case 0x549b1d:c.instructions+=9;goto B549b1d;
case 0x549b23:c.instructions+=8;goto B549b23;
case 0x549b24:c.instructions+=7;goto B549b24;
case 0x549b25:c.instructions+=6;goto B549b25;
case 0x549b26:c.instructions+=5;goto B549b26;
case 0x549b2d:c.instructions+=4;goto B549b2d;
case 0x549b2e:c.instructions+=3;goto B549b2e;
case 0x549b30:c.instructions+=2;goto B549b30;
case 0x549b31:c.instructions+=1;goto B549b31;
case 0x549b40:goto L549b40;
case 0x549b41:c.instructions+=7;goto B549b41;
case 0x549b43:c.instructions+=6;goto B549b43;
case 0x549b45:c.instructions+=5;goto B549b45;
case 0x549b4a:c.instructions+=4;goto B549b4a;
case 0x549b4f:c.instructions+=3;goto B549b4f;
case 0x549b51:c.instructions+=2;goto B549b51;
case 0x549b53:c.instructions+=1;goto B549b53;
case 0x549b58:goto L549b58;
case 0x549b5a:c.instructions+=6;goto B549b5a;
case 0x549b5c:c.instructions+=5;goto B549b5c;
case 0x549b61:c.instructions+=4;goto B549b61;
case 0x549b66:c.instructions+=3;goto B549b66;
case 0x549b68:c.instructions+=2;goto B549b68;
case 0x549b6a:c.instructions+=1;goto B549b6a;
case 0x549b6f:goto L549b6f;
case 0x549b71:c.instructions+=6;goto B549b71;
case 0x549b73:c.instructions+=5;goto B549b73;
case 0x549b78:c.instructions+=4;goto B549b78;
case 0x549b7d:c.instructions+=3;goto B549b7d;
case 0x549b7f:c.instructions+=2;goto B549b7f;
case 0x549b81:c.instructions+=1;goto B549b81;
case 0x549b86:goto L549b86;
case 0x549b88:c.instructions+=6;goto B549b88;
case 0x549b8a:c.instructions+=5;goto B549b8a;
case 0x549b8f:c.instructions+=4;goto B549b8f;
case 0x549b94:c.instructions+=3;goto B549b94;
case 0x549b96:c.instructions+=2;goto B549b96;
case 0x549b98:c.instructions+=1;goto B549b98;
case 0x549b9d:goto L549b9d;
case 0x549b9f:c.instructions+=6;goto B549b9f;
case 0x549ba1:c.instructions+=5;goto B549ba1;
case 0x549ba6:c.instructions+=4;goto B549ba6;
case 0x549bab:c.instructions+=3;goto B549bab;
case 0x549bad:c.instructions+=2;goto B549bad;
case 0x549baf:c.instructions+=1;goto B549baf;
case 0x549bb4:goto L549bb4;
case 0x549bb6:c.instructions+=6;goto B549bb6;
case 0x549bb8:c.instructions+=5;goto B549bb8;
case 0x549bbd:c.instructions+=4;goto B549bbd;
case 0x549bc2:c.instructions+=3;goto B549bc2;
case 0x549bc4:c.instructions+=2;goto B549bc4;
case 0x549bc6:c.instructions+=1;goto B549bc6;
case 0x549bcb:goto L549bcb;
case 0x549bcd:c.instructions+=6;goto B549bcd;
case 0x549bcf:c.instructions+=5;goto B549bcf;
case 0x549bd4:c.instructions+=4;goto B549bd4;
case 0x549bd9:c.instructions+=3;goto B549bd9;
case 0x549bdb:c.instructions+=2;goto B549bdb;
case 0x549bdd:c.instructions+=1;goto B549bdd;
case 0x549be2:goto L549be2;
case 0x549be4:c.instructions+=6;goto B549be4;
case 0x549be6:c.instructions+=5;goto B549be6;
case 0x549beb:c.instructions+=4;goto B549beb;
case 0x549bf0:c.instructions+=3;goto B549bf0;
case 0x549bf2:c.instructions+=2;goto B549bf2;
case 0x549bf4:c.instructions+=1;goto B549bf4;
case 0x549bf9:goto L549bf9;
case 0x549bfb:c.instructions+=6;goto B549bfb;
case 0x549bfd:c.instructions+=5;goto B549bfd;
case 0x549c02:c.instructions+=4;goto B549c02;
case 0x549c07:c.instructions+=3;goto B549c07;
case 0x549c09:c.instructions+=2;goto B549c09;
case 0x549c0b:c.instructions+=1;goto B549c0b;
case 0x549c10:goto L549c10;
case 0x549c11:c.instructions+=1;goto B549c11;
case 0x549c20:goto L549c20;
case 0x549c21:c.instructions+=8;goto B549c21;
case 0x549c22:c.instructions+=7;goto B549c22;
case 0x549c24:c.instructions+=6;goto B549c24;
case 0x549c26:c.instructions+=5;goto B549c26;
case 0x549c28:c.instructions+=4;goto B549c28;
case 0x549c2a:c.instructions+=3;goto B549c2a;
case 0x549c2c:c.instructions+=2;goto B549c2c;
case 0x549c2e:c.instructions+=1;goto B549c2e;
case 0x549c33:goto L549c33;
case 0x549c35:c.instructions+=6;goto B549c35;
case 0x549c37:c.instructions+=5;goto B549c37;
case 0x549c39:c.instructions+=4;goto B549c39;
case 0x549c3b:c.instructions+=3;goto B549c3b;
case 0x549c3d:c.instructions+=2;goto B549c3d;
case 0x549c3f:c.instructions+=1;goto B549c3f;
case 0x549c44:goto L549c44;
case 0x549c46:c.instructions+=6;goto B549c46;
case 0x549c48:c.instructions+=5;goto B549c48;
case 0x549c4a:c.instructions+=4;goto B549c4a;
case 0x549c4c:c.instructions+=3;goto B549c4c;
case 0x549c4e:c.instructions+=2;goto B549c4e;
case 0x549c50:c.instructions+=1;goto B549c50;
case 0x549c55:goto L549c55;
case 0x549c57:c.instructions+=6;goto B549c57;
case 0x549c59:c.instructions+=5;goto B549c59;
case 0x549c5b:c.instructions+=4;goto B549c5b;
case 0x549c5d:c.instructions+=3;goto B549c5d;
case 0x549c5f:c.instructions+=2;goto B549c5f;
case 0x549c61:c.instructions+=1;goto B549c61;
case 0x549c66:goto L549c66;
case 0x549c68:c.instructions+=6;goto B549c68;
case 0x549c6a:c.instructions+=5;goto B549c6a;
case 0x549c6c:c.instructions+=4;goto B549c6c;
case 0x549c6e:c.instructions+=3;goto B549c6e;
case 0x549c70:c.instructions+=2;goto B549c70;
case 0x549c72:c.instructions+=1;goto B549c72;
case 0x549c77:goto L549c77;
case 0x549c79:c.instructions+=6;goto B549c79;
case 0x549c7b:c.instructions+=5;goto B549c7b;
case 0x549c7d:c.instructions+=4;goto B549c7d;
case 0x549c7f:c.instructions+=3;goto B549c7f;
case 0x549c81:c.instructions+=2;goto B549c81;
case 0x549c83:c.instructions+=1;goto B549c83;
case 0x549c88:goto L549c88;
case 0x549c8e:c.instructions+=8;goto B549c8e;
case 0x549c91:c.instructions+=7;goto B549c91;
case 0x549c93:c.instructions+=6;goto B549c93;
case 0x549c98:c.instructions+=5;goto B549c98;
case 0x549c9b:c.instructions+=4;goto B549c9b;
case 0x549ca0:c.instructions+=3;goto B549ca0;
case 0x549ca1:c.instructions+=2;goto B549ca1;
case 0x549ca4:c.instructions+=1;goto B549ca4;
case 0x549ca9:goto L549ca9;
case 0x549cac:c.instructions+=10;goto B549cac;
case 0x549cae:c.instructions+=9;goto B549cae;
case 0x549cb0:c.instructions+=8;goto B549cb0;
case 0x549cb2:c.instructions+=7;goto B549cb2;
case 0x549cb5:c.instructions+=6;goto B549cb5;
case 0x549cb8:c.instructions+=5;goto B549cb8;
case 0x549cb9:c.instructions+=4;goto B549cb9;
case 0x549cbe:c.instructions+=3;goto B549cbe;
case 0x549cc3:c.instructions+=2;goto B549cc3;
case 0x549cc4:c.instructions+=1;goto B549cc4;
case 0x549cc9:goto L549cc9;
case 0x549ccc:c.instructions+=10;goto B549ccc;
case 0x549cce:c.instructions+=9;goto B549cce;
case 0x549cd0:c.instructions+=8;goto B549cd0;
case 0x549cd2:c.instructions+=7;goto B549cd2;
case 0x549cd5:c.instructions+=6;goto B549cd5;
case 0x549cd8:c.instructions+=5;goto B549cd8;
case 0x549cd9:c.instructions+=4;goto B549cd9;
case 0x549cde:c.instructions+=3;goto B549cde;
case 0x549ce3:c.instructions+=2;goto B549ce3;
case 0x549ce4:c.instructions+=1;goto B549ce4;
case 0x549ce9:goto L549ce9;
case 0x549ceb:c.instructions+=10;goto B549ceb;
case 0x549ced:c.instructions+=9;goto B549ced;
case 0x549cef:c.instructions+=8;goto B549cef;
case 0x549cf2:c.instructions+=7;goto B549cf2;
case 0x549cf5:c.instructions+=6;goto B549cf5;
case 0x549cf6:c.instructions+=5;goto B549cf6;
case 0x549cf9:c.instructions+=4;goto B549cf9;
case 0x549cfe:c.instructions+=3;goto B549cfe;
case 0x549d03:c.instructions+=2;goto B549d03;
case 0x549d04:c.instructions+=1;goto B549d04;
case 0x549d09:goto L549d09;
case 0x549d0c:c.instructions+=11;goto B549d0c;
case 0x549d0f:c.instructions+=10;goto B549d0f;
case 0x549d11:c.instructions+=9;goto B549d11;
case 0x549d13:c.instructions+=8;goto B549d13;
case 0x549d15:c.instructions+=7;goto B549d15;
case 0x549d18:c.instructions+=6;goto B549d18;
case 0x549d1e:c.instructions+=5;goto B549d1e;
case 0x549d1f:c.instructions+=4;goto B549d1f;
case 0x549d24:c.instructions+=3;goto B549d24;
case 0x549d29:c.instructions+=2;goto B549d29;
case 0x549d2a:c.instructions+=1;goto B549d2a;
case 0x549d2f:goto L549d2f;
case 0x549d32:c.instructions+=10;goto B549d32;
case 0x549d34:c.instructions+=9;goto B549d34;
case 0x549d36:c.instructions+=8;goto B549d36;
case 0x549d38:c.instructions+=7;goto B549d38;
case 0x549d3b:c.instructions+=6;goto B549d3b;
case 0x549d40:c.instructions+=5;goto B549d40;
case 0x549d41:c.instructions+=4;goto B549d41;
case 0x549d46:c.instructions+=3;goto B549d46;
case 0x549d4b:c.instructions+=2;goto B549d4b;
case 0x549d4c:c.instructions+=1;goto B549d4c;
case 0x549d51:goto L549d51;
case 0x549d54:c.instructions+=10;goto B549d54;
case 0x549d56:c.instructions+=9;goto B549d56;
case 0x549d58:c.instructions+=8;goto B549d58;
case 0x549d5a:c.instructions+=7;goto B549d5a;
case 0x549d60:c.instructions+=6;goto B549d60;
case 0x549d66:c.instructions+=5;goto B549d66;
case 0x549d67:c.instructions+=4;goto B549d67;
case 0x549d6c:c.instructions+=3;goto B549d6c;
case 0x549d71:c.instructions+=2;goto B549d71;
case 0x549d72:c.instructions+=1;goto B549d72;
case 0x549d77:goto L549d77;
case 0x549d7a:c.instructions+=9;goto B549d7a;
case 0x549d7c:c.instructions+=8;goto B549d7c;
case 0x549d7e:c.instructions+=7;goto B549d7e;
case 0x549d84:c.instructions+=6;goto B549d84;
case 0x549d8a:c.instructions+=5;goto B549d8a;
case 0x549d8b:c.instructions+=4;goto B549d8b;
case 0x549d90:c.instructions+=3;goto B549d90;
case 0x549d95:c.instructions+=2;goto B549d95;
case 0x549d96:c.instructions+=1;goto B549d96;
case 0x549d9b:goto L549d9b;
case 0x549d9e:c.instructions+=7;goto B549d9e;
case 0x549da3:c.instructions+=6;goto B549da3;
case 0x549da5:c.instructions+=5;goto B549da5;
case 0x549daa:c.instructions+=4;goto B549daa;
case 0x549daf:c.instructions+=3;goto B549daf;
case 0x549db1:c.instructions+=2;goto B549db1;
case 0x549db3:c.instructions+=1;goto B549db3;
case 0x549db8:goto L549db8;
case 0x549db9:c.instructions+=2;goto B549db9;
case 0x549dba:c.instructions+=1;goto B549dba;
case 0x549dc0:goto L549dc0;
case 0x549dc1:c.instructions+=7;goto B549dc1;
case 0x549dc3:c.instructions+=6;goto B549dc3;
case 0x549dc5:c.instructions+=5;goto B549dc5;
case 0x549dca:c.instructions+=4;goto B549dca;
case 0x549dcf:c.instructions+=3;goto B549dcf;
case 0x549dd1:c.instructions+=2;goto B549dd1;
case 0x549dd3:c.instructions+=1;goto B549dd3;
case 0x549dd8:goto L549dd8;
case 0x549dda:c.instructions+=6;goto B549dda;
case 0x549ddc:c.instructions+=5;goto B549ddc;
case 0x549de1:c.instructions+=4;goto B549de1;
case 0x549de6:c.instructions+=3;goto B549de6;
case 0x549de8:c.instructions+=2;goto B549de8;
case 0x549dea:c.instructions+=1;goto B549dea;
case 0x549def:goto L549def;
case 0x549df0:c.instructions+=1;goto B549df0;
case 0x549e00:goto L549e00;
case 0x549e01:c.instructions+=7;goto B549e01;
case 0x549e03:c.instructions+=6;goto B549e03;
case 0x549e05:c.instructions+=5;goto B549e05;
case 0x549e0a:c.instructions+=4;goto B549e0a;
case 0x549e0f:c.instructions+=3;goto B549e0f;
case 0x549e11:c.instructions+=2;goto B549e11;
case 0x549e13:c.instructions+=1;goto B549e13;
case 0x549e18:goto L549e18;
case 0x549e1a:c.instructions+=6;goto B549e1a;
case 0x549e1c:c.instructions+=5;goto B549e1c;
case 0x549e21:c.instructions+=4;goto B549e21;
case 0x549e26:c.instructions+=3;goto B549e26;
case 0x549e28:c.instructions+=2;goto B549e28;
case 0x549e2a:c.instructions+=1;goto B549e2a;
case 0x549e2f:goto L549e2f;
case 0x549e31:c.instructions+=6;goto B549e31;
case 0x549e33:c.instructions+=5;goto B549e33;
case 0x549e38:c.instructions+=4;goto B549e38;
case 0x549e3d:c.instructions+=3;goto B549e3d;
case 0x549e3f:c.instructions+=2;goto B549e3f;
case 0x549e41:c.instructions+=1;goto B549e41;
case 0x549e46:goto L549e46;
case 0x549e47:c.instructions+=1;goto B549e47;
case 0x549e50:goto L549e50;
case 0x549e53:c.instructions+=5;goto B549e53;
case 0x549e54:c.instructions+=4;goto B549e54;
case 0x549e55:c.instructions+=3;goto B549e55;
case 0x549e57:c.instructions+=2;goto B549e57;
case 0x549e59:c.instructions+=1;goto B549e59;
case 0x549e5e:goto L549e5e;
case 0x549e60:c.instructions+=3;goto B549e60;
case 0x549e63:c.instructions+=2;goto B549e63;
case 0x549e65:c.instructions+=1;goto B549e65;
case 0x549e67:goto L549e67;
case 0x549e6a:c.instructions+=14;goto B549e6a;
case 0x549e6d:c.instructions+=13;goto B549e6d;
case 0x549e70:c.instructions+=12;goto B549e70;
case 0x549e73:c.instructions+=11;goto B549e73;
case 0x549e7a:c.instructions+=10;goto B549e7a;
case 0x549e7f:c.instructions+=9;goto B549e7f;
case 0x549e82:c.instructions+=8;goto B549e82;
case 0x549e85:c.instructions+=7;goto B549e85;
case 0x549e88:c.instructions+=6;goto B549e88;
case 0x549e8b:c.instructions+=5;goto B549e8b;
case 0x549e8e:c.instructions+=4;goto B549e8e;
case 0x549e95:c.instructions+=3;goto B549e95;
case 0x549e98:c.instructions+=2;goto B549e98;
case 0x549e9b:c.instructions+=1;goto B549e9b;
case 0x549e9d:goto L549e9d;
case 0x549ea0:c.instructions+=14;goto B549ea0;
case 0x549ea6:c.instructions+=13;goto B549ea6;
case 0x549ea9:c.instructions+=12;goto B549ea9;
case 0x549eac:c.instructions+=11;goto B549eac;
case 0x549eb2:c.instructions+=10;goto B549eb2;
case 0x549eb3:c.instructions+=9;goto B549eb3;
case 0x549eb7:c.instructions+=8;goto B549eb7;
case 0x549eba:c.instructions+=7;goto B549eba;
case 0x549ebd:c.instructions+=6;goto B549ebd;
case 0x549ebe:c.instructions+=5;goto B549ebe;
case 0x549ebf:c.instructions+=4;goto B549ebf;
case 0x549ec4:c.instructions+=3;goto B549ec4;
case 0x549ec8:c.instructions+=2;goto B549ec8;
case 0x549ecc:c.instructions+=1;goto B549ecc;
case 0x549ed1:goto L549ed1;
case 0x549ed4:c.instructions+=4;goto B549ed4;
case 0x549ed5:c.instructions+=3;goto B549ed5;
case 0x549eda:c.instructions+=2;goto B549eda;
case 0x549ede:c.instructions+=1;goto B549ede;
case 0x549ee3:goto L549ee3;
case 0x549ee6:c.instructions+=4;goto B549ee6;
case 0x549ee7:c.instructions+=3;goto B549ee7;
case 0x549eec:c.instructions+=2;goto B549eec;
case 0x549ef0:c.instructions+=1;goto B549ef0;
case 0x549ef5:goto L549ef5;
case 0x549ef9:c.instructions+=4;goto B549ef9;
case 0x549efc:c.instructions+=3;goto B549efc;
case 0x549efd:c.instructions+=2;goto B549efd;
case 0x549f02:c.instructions+=1;goto B549f02;
case 0x549f07:goto L549f07;
case 0x549f0b:c.instructions+=6;goto B549f0b;
case 0x549f0e:c.instructions+=5;goto B549f0e;
case 0x549f0f:c.instructions+=4;goto B549f0f;
case 0x549f12:c.instructions+=3;goto B549f12;
case 0x549f13:c.instructions+=2;goto B549f13;
case 0x549f15:c.instructions+=1;goto B549f15;
case 0x549f1a:goto L549f1a;
case 0x549f1e:c.instructions+=4;goto B549f1e;
case 0x549f1f:c.instructions+=3;goto B549f1f;
case 0x549f20:c.instructions+=2;goto B549f20;
case 0x549f22:c.instructions+=1;goto B549f22;
case 0x549f27:goto L549f27;
case 0x549f2b:c.instructions+=4;goto B549f2b;
case 0x549f2c:c.instructions+=3;goto B549f2c;
case 0x549f2d:c.instructions+=2;goto B549f2d;
case 0x549f2f:c.instructions+=1;goto B549f2f;
case 0x549f34:goto L549f34;
case 0x549f38:c.instructions+=4;goto B549f38;
case 0x549f39:c.instructions+=3;goto B549f39;
case 0x549f3a:c.instructions+=2;goto B549f3a;
case 0x549f3c:c.instructions+=1;goto B549f3c;
case 0x549f41:goto L549f41;
case 0x549f44:c.instructions+=41;goto B549f44;
case 0x549f47:c.instructions+=40;goto B549f47;
case 0x549f4a:c.instructions+=39;goto B549f4a;
case 0x549f4e:c.instructions+=38;goto B549f4e;
case 0x549f52:c.instructions+=37;goto B549f52;
case 0x549f55:c.instructions+=36;goto B549f55;
case 0x549f59:c.instructions+=35;goto B549f59;
case 0x549f5c:c.instructions+=34;goto B549f5c;
case 0x549f60:c.instructions+=33;goto B549f60;
case 0x549f63:c.instructions+=32;goto B549f63;
case 0x549f66:c.instructions+=31;goto B549f66;
case 0x549f69:c.instructions+=30;goto B549f69;
case 0x549f6d:c.instructions+=29;goto B549f6d;
case 0x549f70:c.instructions+=28;goto B549f70;
case 0x549f73:c.instructions+=27;goto B549f73;
case 0x549f76:c.instructions+=26;goto B549f76;
case 0x549f79:c.instructions+=25;goto B549f79;
case 0x549f7c:c.instructions+=24;goto B549f7c;
case 0x549f80:c.instructions+=23;goto B549f80;
case 0x549f83:c.instructions+=22;goto B549f83;
case 0x549f87:c.instructions+=21;goto B549f87;
case 0x549f8d:c.instructions+=20;goto B549f8d;
case 0x549f90:c.instructions+=19;goto B549f90;
case 0x549f93:c.instructions+=18;goto B549f93;
case 0x549f95:c.instructions+=17;goto B549f95;
case 0x549f98:c.instructions+=16;goto B549f98;
case 0x549f9b:c.instructions+=15;goto B549f9b;
case 0x549f9d:c.instructions+=14;goto B549f9d;
case 0x549fa0:c.instructions+=13;goto B549fa0;
case 0x549fa6:c.instructions+=12;goto B549fa6;
case 0x549fa9:c.instructions+=11;goto B549fa9;
case 0x549fac:c.instructions+=10;goto B549fac;
case 0x549faf:c.instructions+=9;goto B549faf;
case 0x549fb2:c.instructions+=8;goto B549fb2;
case 0x549fb8:c.instructions+=7;goto B549fb8;
case 0x549fb9:c.instructions+=6;goto B549fb9;
case 0x549fbb:c.instructions+=5;goto B549fbb;
case 0x549fbc:c.instructions+=4;goto B549fbc;
case 0x549fbf:c.instructions+=3;goto B549fbf;
case 0x549fc2:c.instructions+=2;goto B549fc2;
case 0x549fc3:c.instructions+=1;goto B549fc3;
case 0x549fc5:goto L549fc5;
case 0x549fc8:goto L549fc8;
case 0x549fc9:c.instructions+=3;goto B549fc9;
case 0x549fca:c.instructions+=2;goto B549fca;
case 0x549fcd:c.instructions+=1;goto B549fcd;
case 0x549fd0:goto L549fd0;
case 0x549fd1:c.instructions+=11;goto B549fd1;
case 0x549fd3:c.instructions+=10;goto B549fd3;
case 0x549fd6:c.instructions+=9;goto B549fd6;
case 0x549fd7:c.instructions+=8;goto B549fd7;
case 0x549fda:c.instructions+=7;goto B549fda;
case 0x549fdb:c.instructions+=6;goto B549fdb;
case 0x549fdc:c.instructions+=5;goto B549fdc;
case 0x549fe1:c.instructions+=4;goto B549fe1;
case 0x549fe6:c.instructions+=3;goto B549fe6;
case 0x549fe7:c.instructions+=2;goto B549fe7;
case 0x549fea:c.instructions+=1;goto B549fea;
case 0x549fef:goto L549fef;
case 0x549ff2:c.instructions+=3;goto B549ff2;
case 0x549ff4:c.instructions+=2;goto B549ff4;
case 0x549ff9:c.instructions+=1;goto B549ff9;
case 0x549ffe:goto L549ffe;
default:missing_instruction(c.pc);}
B549000:L549000:{c.instructions+=10;NFSU2_TR(0x549000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B549003:{NFSU2_TR(0x549003);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549004:{NFSU2_TR(0x549004);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549005:{NFSU2_TR(0x549005);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549006:{NFSU2_TR(0x549006);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549007:{NFSU2_TR(0x549007);
__builtin_memmove((R+24),(R+4),4);
}
B549009:{NFSU2_TR(0x549009);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54900c:{NFSU2_TR(0x54900c);
u8 U[4];
w4(U+0,u32(0xed03d1d3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549011:{NFSU2_TR(0x549011);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549012:{NFSU2_TR(0x549012);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549017ull));
TAIL_STATIC(0x495520u,495);
}
B549017:L549017:{c.instructions+=5;NFSU2_TR(0x549017);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54901b:{NFSU2_TR(0x54901b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54901e:{NFSU2_TR(0x54901e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54901f:{NFSU2_TR(0x54901f);
u8 U[4];
w4(U+0,u32(0x79c528ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549024:{NFSU2_TR(0x549024);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549029ull));
TAIL_STATIC(0x50b990u,50b);
}
B549029:L549029:{c.instructions+=4;NFSU2_TR(0x549029);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54902a:{NFSU2_TR(0x54902a);
u8 U[4];
w4(U+0,u32(0x6d5fe871ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54902f:{NFSU2_TR(0x54902f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549030:{NFSU2_TR(0x549030);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549035ull));
TAIL_STATIC(0x495430u,495);
}
B549035:L549035:{c.instructions+=4;NFSU2_TR(0x549035);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B549038:{NFSU2_TR(0x549038);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549039:{NFSU2_TR(0x549039);
u8 U[4];
w4(U+0,u32(0x79c508ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54903e:{NFSU2_TR(0x54903e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549043ull));
TAIL_STATIC(0x50b990u,50b);
}
B549043:L549043:{c.instructions+=4;NFSU2_TR(0x549043);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549044:{NFSU2_TR(0x549044);
u8 U[4];
w4(U+0,u32(0x6d5ece44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549049:{NFSU2_TR(0x549049);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54904a:{NFSU2_TR(0x54904a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54904full));
TAIL_STATIC(0x495430u,495);
}
B54904f:L54904f:{c.instructions+=4;NFSU2_TR(0x54904f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B549052:{NFSU2_TR(0x549052);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549053:{NFSU2_TR(0x549053);
u8 U[4];
w4(U+0,u32(0x79c4e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549058:{NFSU2_TR(0x549058);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54905dull));
TAIL_STATIC(0x50b990u,50b);
}
B54905d:L54905d:{c.instructions+=4;NFSU2_TR(0x54905d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54905e:{NFSU2_TR(0x54905e);
u8 U[4];
w4(U+0,u32(0x19c99185ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549063:{NFSU2_TR(0x549063);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549064:{NFSU2_TR(0x549064);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549069ull));
TAIL_STATIC(0x495430u,495);
}
B549069:L549069:{c.instructions+=5;NFSU2_TR(0x549069);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54906c:{NFSU2_TR(0x54906c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B54906f:{NFSU2_TR(0x54906f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549070:{NFSU2_TR(0x549070);
u8 U[4];
w4(U+0,u32(0x79c4ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549075:{NFSU2_TR(0x549075);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54907aull));
TAIL_STATIC(0x50b990u,50b);
}
B54907a:L54907a:{c.instructions+=4;NFSU2_TR(0x54907a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54907b:{NFSU2_TR(0x54907b);
u8 U[4];
w4(U+0,u32(0x5d19f25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549080:{NFSU2_TR(0x549080);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549081:{NFSU2_TR(0x549081);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549086ull));
TAIL_STATIC(0x495430u,495);
}
B549086:L549086:{c.instructions+=4;NFSU2_TR(0x549086);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B549089:{NFSU2_TR(0x549089);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54908a:{NFSU2_TR(0x54908a);
u8 U[4];
w4(U+0,u32(0x79c4acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54908f:{NFSU2_TR(0x54908f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549094ull));
TAIL_STATIC(0x50b990u,50b);
}
B549094:L549094:{c.instructions+=4;NFSU2_TR(0x549094);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549095:{NFSU2_TR(0x549095);
u8 U[4];
w4(U+0,u32(0xf0250dacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54909a:{NFSU2_TR(0x54909a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54909b:{NFSU2_TR(0x54909b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5490a0ull));
TAIL_STATIC(0x495430u,495);
}
B5490a0:L5490a0:{c.instructions+=2;NFSU2_TR(0x5490a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5490a2:{NFSU2_TR(0x5490a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5490a7ull));
TAIL_STATIC(0x4a7890u,4a7);
}
B5490a7:L5490a7:{c.instructions+=4;NFSU2_TR(0x5490a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B5490aa:{NFSU2_TR(0x5490aa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5490ac:{NFSU2_TR(0x5490ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5490af:{NFSU2_TR(0x5490af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5490b4ull));
TAIL_STATIC(0x5b5350u,5b5);
}
B5490b4:L5490b4:{c.instructions+=5;NFSU2_TR(0x5490b4);
__builtin_memmove((R+12),(R+0),4);
}
B5490b6:{NFSU2_TR(0x5490b6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5490b8:{NFSU2_TR(0x5490b8);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5490bd:{NFSU2_TR(0x5490bd);
w4(R+4,u32(0x7ull));
}
B5490c2:{NFSU2_TR(0x5490c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x31ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5490c6:L5490c6:{c.instructions+=1;NFSU2_TR(0x5490c6);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5490c8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5490c6u);}goto L5490c6;}
}
B5490c8:L5490c8:{c.instructions+=6;NFSU2_TR(0x5490c8);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B5490ca:{NFSU2_TR(0x5490ca);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B5490cb:{NFSU2_TR(0x5490cb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5490cd:{NFSU2_TR(0x5490cd);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5490d2:{NFSU2_TR(0x5490d2);
w4(R+4,u32(0x7ull));
}
B5490d7:{NFSU2_TR(0x5490d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5490db:L5490db:{c.instructions+=1;NFSU2_TR(0x5490db);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5490dd;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5490dbu);}goto L5490db;}
}
B5490dd:L5490dd:{c.instructions+=10;NFSU2_TR(0x5490dd);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B5490df:{NFSU2_TR(0x5490df);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1f0ull))));
}
B5490e5:{NFSU2_TR(0x5490e5);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B5490e6:{NFSU2_TR(0x5490e6);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5490e9:{NFSU2_TR(0x5490e9);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5490ef:{NFSU2_TR(0x5490ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5490f3:{NFSU2_TR(0x5490f3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5490f4:{NFSU2_TR(0x5490f4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5490f6:{NFSU2_TR(0x5490f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5490f9:{NFSU2_TR(0x5490f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L549132;}}
}
B5490fb:L5490fb:{c.instructions+=3;NFSU2_TR(0x5490fb);
u8 U[4];
w4(U+0,u32(0x79c488ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549100:{NFSU2_TR(0x549100);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549101:{NFSU2_TR(0x549101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549106ull));
TAIL_STATIC(0x4400d0u,440);
}
B549106:L549106:{c.instructions+=6;NFSU2_TR(0x549106);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B549109:{NFSU2_TR(0x549109);
{u32 ea_=u32(u32(7913876u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B54910f:{NFSU2_TR(0x54910f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B549112:{NFSU2_TR(0x549112);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B549114:{NFSU2_TR(0x549114);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B549117:{NFSU2_TR(0x549117);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L549128;}}
}
B549119:L549119:{c.instructions+=4;NFSU2_TR(0x549119);
u8 U[4];
w4(U+0,u32(0x79c470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54911e:{NFSU2_TR(0x54911e);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B549122:{NFSU2_TR(0x549122);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549123:{NFSU2_TR(0x549123);
{goto L5491e8;}
}
B549128:L549128:{c.instructions+=2;NFSU2_TR(0x549128);
u8 U[4];
w4(U+0,u32(0x79c458ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54912d:{NFSU2_TR(0x54912d);
{goto L5491e3;}
}
B549132:L549132:{c.instructions+=5;NFSU2_TR(0x549132);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B549135:{NFSU2_TR(0x549135);
{u32 ea_=u32(u32(7913876u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B54913b:{NFSU2_TR(0x54913b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54913d:{NFSU2_TR(0x54913d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B549140:{NFSU2_TR(0x549140);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L549173;}}
}
B549142:L549142:{c.instructions+=3;NFSU2_TR(0x549142);
u8 U[4];
w4(U+0,u32(0x79c438ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549147:{NFSU2_TR(0x549147);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549148:{NFSU2_TR(0x549148);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54914dull));
TAIL_STATIC(0x4400d0u,440);
}
B54914d:L54914d:{c.instructions+=6;NFSU2_TR(0x54914d);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B549150:{NFSU2_TR(0x549150);
{u32 ea_=u32(u32(7980084u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B549156:{NFSU2_TR(0x549156);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B549159:{NFSU2_TR(0x549159);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54915b:{NFSU2_TR(0x54915b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54915e:{NFSU2_TR(0x54915e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54916c;}}
}
B549160:L549160:{c.instructions+=4;NFSU2_TR(0x549160);
u8 U[4];
w4(U+0,u32(0x79c41cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549165:{NFSU2_TR(0x549165);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B549169:{NFSU2_TR(0x549169);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54916a:{NFSU2_TR(0x54916a);
{goto L5491e8;}
}
B54916c:L54916c:{c.instructions+=2;NFSU2_TR(0x54916c);
u8 U[4];
w4(U+0,u32(0x79c404ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549171:{NFSU2_TR(0x549171);
{goto L5491e3;}
}
B549173:L549173:{c.instructions+=5;NFSU2_TR(0x549173);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B549176:{NFSU2_TR(0x549176);
{u32 ea_=u32(u32(7980084u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B54917c:{NFSU2_TR(0x54917c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54917e:{NFSU2_TR(0x54917e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B549181:{NFSU2_TR(0x549181);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5491b4;}}
}
B549183:L549183:{c.instructions+=3;NFSU2_TR(0x549183);
u8 U[4];
w4(U+0,u32(0x79c3e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549188:{NFSU2_TR(0x549188);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549189:{NFSU2_TR(0x549189);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54918eull));
TAIL_STATIC(0x4400d0u,440);
}
B54918e:L54918e:{c.instructions+=6;NFSU2_TR(0x54918e);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B549191:{NFSU2_TR(0x549191);
{u32 ea_=u32(u32(7908344u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B549197:{NFSU2_TR(0x549197);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54919a:{NFSU2_TR(0x54919a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54919c:{NFSU2_TR(0x54919c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54919f:{NFSU2_TR(0x54919f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5491ad;}}
}
B5491a1:L5491a1:{c.instructions+=4;NFSU2_TR(0x5491a1);
u8 U[4];
w4(U+0,u32(0x79c3ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5491a6:{NFSU2_TR(0x5491a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5491aa:{NFSU2_TR(0x5491aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5491ab:{NFSU2_TR(0x5491ab);
{goto L5491e8;}
}
B5491ad:L5491ad:{c.instructions+=2;NFSU2_TR(0x5491ad);
u8 U[4];
w4(U+0,u32(0x79c3b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5491b2:{NFSU2_TR(0x5491b2);
{goto L5491e3;}
}
B5491b4:L5491b4:{c.instructions+=3;NFSU2_TR(0x5491b4);
u8 U[4];
w4(U+0,u32(0x79c394ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5491b9:{NFSU2_TR(0x5491b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5491ba:{NFSU2_TR(0x5491ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5491bfull));
TAIL_STATIC(0x4400d0u,440);
}
B5491bf:L5491bf:{c.instructions+=6;NFSU2_TR(0x5491bf);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5491c2:{NFSU2_TR(0x5491c2);
{u32 ea_=u32(u32(7905248u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5491c8:{NFSU2_TR(0x5491c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5491cb:{NFSU2_TR(0x5491cb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5491cd:{NFSU2_TR(0x5491cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5491d0:{NFSU2_TR(0x5491d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5491de;}}
}
B5491d2:L5491d2:{c.instructions+=4;NFSU2_TR(0x5491d2);
u8 U[4];
w4(U+0,u32(0x79c37cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5491d7:{NFSU2_TR(0x5491d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5491db:{NFSU2_TR(0x5491db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5491dc:{NFSU2_TR(0x5491dc);
{goto L5491e8;}
}
B5491de:L5491de:{c.instructions+=1;NFSU2_TR(0x5491de);
u8 U[4];
w4(U+0,u32(0x79c364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5491e3:L5491e3:{c.instructions+=2;NFSU2_TR(0x5491e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5491e7:{NFSU2_TR(0x5491e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5491e8:L5491e8:{c.instructions+=1;NFSU2_TR(0x5491e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5491edull));
TAIL_STATIC(0x4400d0u,440);
}
B5491ed:L5491ed:{c.instructions+=4;NFSU2_TR(0x5491ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5491f1:{NFSU2_TR(0x5491f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5491f4:{NFSU2_TR(0x5491f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5491f5:{NFSU2_TR(0x5491f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5491faull));
TAIL_STATIC(0x43db50u,43d);
}
B5491fa:L5491fa:{c.instructions+=4;NFSU2_TR(0x5491fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5491fe:{NFSU2_TR(0x5491fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5491ff:{NFSU2_TR(0x5491ff);
__builtin_memmove((R+28),(R+0),4);
}
B549201:{NFSU2_TR(0x549201);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549206ull));
TAIL_STATIC(0x43db50u,43d);
}
B549206:L549206:{c.instructions+=5;NFSU2_TR(0x549206);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549207:{NFSU2_TR(0x549207);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54920a:{NFSU2_TR(0x54920a);
u8 U[4];
w4(U+0,u32(0x1d9051aaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54920f:{NFSU2_TR(0x54920f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549210:{NFSU2_TR(0x549210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549215ull));
TAIL_STATIC(0x495430u,495);
}
B549215:L549215:{c.instructions+=4;NFSU2_TR(0x549215);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549218:{NFSU2_TR(0x549218);
u8 U[4];
w4(U+0,u32(0x7985a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54921d:{NFSU2_TR(0x54921d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54921e:{NFSU2_TR(0x54921e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549223ull));
TAIL_STATIC(0x4953e0u,495);
}
B549223:L549223:{c.instructions+=3;NFSU2_TR(0x549223);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B549226:{NFSU2_TR(0x549226);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B549228:{NFSU2_TR(0x549228);
if(r1(R+518)){{goto L54923e;}}
}
B54922a:L54922a:{c.instructions+=2;NFSU2_TR(0x54922a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54922d:{NFSU2_TR(0x54922d);
if(r1(R+518)){{goto L54923e;}}
}
B54922f:L54922f:{c.instructions+=4;NFSU2_TR(0x54922f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549232:{NFSU2_TR(0x549232);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400000ull))));
}
B549238:{NFSU2_TR(0x549238);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54923b:{NFSU2_TR(0x54923b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54923e:L54923e:{c.instructions+=2;NFSU2_TR(0x54923e);
__builtin_memmove((R+4),gp(0x8900b4),4);
}
B549244:{NFSU2_TR(0x549244);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549249ull));
TAIL_STATIC(0x5ea8b0u,5ea);
}
B549249:L549249:{c.instructions+=3;NFSU2_TR(0x549249);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54924b:{NFSU2_TR(0x54924b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54924e:{NFSU2_TR(0x54924e);
if(r1(R+518)){{goto L549257;}}
}
B549250:L549250:{c.instructions+=2;NFSU2_TR(0x549250);
u8 U[4];
w4(U+0,u32(0x8569a25full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549255:{NFSU2_TR(0x549255);
{goto L54925c;}
}
B549257:L549257:{c.instructions+=1;NFSU2_TR(0x549257);
u8 U[4];
w4(U+0,u32(0x8569ab44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54925c:L54925c:{c.instructions+=3;NFSU2_TR(0x54925c);
u8 U[4];
w4(U+0,u32(0x7985fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549261:{NFSU2_TR(0x549261);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549262:{NFSU2_TR(0x549262);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549267ull));
TAIL_STATIC(0x4953c0u,495);
}
B549267:L549267:{c.instructions+=3;NFSU2_TR(0x549267);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54926a:{NFSU2_TR(0x54926a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54926b:{NFSU2_TR(0x54926b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549270ull));
TAIL_STATIC(0x50c900u,50c);
}
B549270:L549270:{c.instructions+=7;NFSU2_TR(0x549270);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B549273:{NFSU2_TR(0x549273);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B549274:{NFSU2_TR(0x549274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B549275:{NFSU2_TR(0x549275);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B549276:{NFSU2_TR(0x549276);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B549277:{NFSU2_TR(0x549277);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54927a:{NFSU2_TR(0x54927a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B549280:L549280:{c.instructions+=20;NFSU2_TR(0x549280);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549281:{NFSU2_TR(0x549281);
__builtin_memmove((R+20),(R+16),4);
}
B549283:{NFSU2_TR(0x549283);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549285:{NFSU2_TR(0x549285);
u8 U[4];
w4(U+0,u32(0x777a98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54928a:{NFSU2_TR(0x54928a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549290:{NFSU2_TR(0x549290);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549291:{NFSU2_TR(0x549291);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549298:{NFSU2_TR(0x549298);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B54929b:{NFSU2_TR(0x54929b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54929c:{NFSU2_TR(0x54929c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54929d:{NFSU2_TR(0x54929d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54929e:{NFSU2_TR(0x54929e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5492a1:{NFSU2_TR(0x5492a1);
__builtin_memmove((R+24),(R+4),4);
}
B5492a3:{NFSU2_TR(0x5492a3);
u8 U[12];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5492a7:{NFSU2_TR(0x5492a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B5492aa:{NFSU2_TR(0x5492aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5492ac:{NFSU2_TR(0x5492ac);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5492ae:{NFSU2_TR(0x5492ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5492b1:{NFSU2_TR(0x5492b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5492b4:{NFSU2_TR(0x5492b4);
if(r1(R+518)){{goto L5492cf;}}
}
B5492b6:L5492b6:{c.instructions+=6;NFSU2_TR(0x5492b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5492b8:{NFSU2_TR(0x5492b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5492bb:{NFSU2_TR(0x5492bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5492bd:{NFSU2_TR(0x5492bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5492be:{NFSU2_TR(0x5492be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5492c1:{NFSU2_TR(0x5492c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5492c6ull));
TAIL_STATIC(0x575630u,575);
}
B5492c6:L5492c6:{c.instructions+=4;NFSU2_TR(0x5492c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5492c8:{NFSU2_TR(0x5492c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5492cb:{NFSU2_TR(0x5492cb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5492cd:{NFSU2_TR(0x5492cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5492b6u);}goto L5492b6;}}
}
B5492cf:L5492cf:{c.instructions+=16;NFSU2_TR(0x5492cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5492d2:{NFSU2_TR(0x5492d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5492d5:{NFSU2_TR(0x5492d5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5492d7:{NFSU2_TR(0x5492d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5492da:{NFSU2_TR(0x5492da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5492dd:{NFSU2_TR(0x5492dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5492e0:{NFSU2_TR(0x5492e0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5492e2:{NFSU2_TR(0x5492e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5492e5:{NFSU2_TR(0x5492e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5492e8:{NFSU2_TR(0x5492e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5492ef:{NFSU2_TR(0x5492ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5492f2:{NFSU2_TR(0x5492f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5492f5:{NFSU2_TR(0x5492f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5492f8:{NFSU2_TR(0x5492f8);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5492fa:{NFSU2_TR(0x5492fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5492fd:{NFSU2_TR(0x5492fd);
if(r1(R+518)){{goto L54930c;}}
}
B5492ff:L5492ff:{c.instructions+=2;NFSU2_TR(0x5492ff);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B549300:{NFSU2_TR(0x549300);
if(r1(R+518)){{goto L549305;}}
}
B549302:L549302:{c.instructions+=2;NFSU2_TR(0x549302);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B549303:{NFSU2_TR(0x549303);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L549314;}}
}
B549305:L549305:{c.instructions+=2;NFSU2_TR(0x549305);
w4(R+12,u32(0xa6ull));
}
B54930a:{NFSU2_TR(0x54930a);
{goto L549311;}
}
B54930c:L54930c:{c.instructions+=1;NFSU2_TR(0x54930c);
w4(R+12,u32(0xa4ull));
}
B549311:L549311:{c.instructions+=1;NFSU2_TR(0x549311);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549314:L549314:{c.instructions+=6;NFSU2_TR(0x549314);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549315:{NFSU2_TR(0x549315);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549316:{NFSU2_TR(0x549316);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B549319:{NFSU2_TR(0x549319);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54931a:{NFSU2_TR(0x54931a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54931b:{NFSU2_TR(0x54931b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549320ull));
TAIL_STATIC(0x5449c0u,544);
}
B549320:L549320:{c.instructions+=5;NFSU2_TR(0x549320);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549323:{NFSU2_TR(0x549323);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B549326:{NFSU2_TR(0x549326);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B549329:{NFSU2_TR(0x549329);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B54932b:{NFSU2_TR(0x54932b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54934f;}}
}
B54932d:L54932d:{c.instructions+=3;NFSU2_TR(0x54932d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B549330:{NFSU2_TR(0x549330);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B549337:{NFSU2_TR(0x549337);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54933cull));
TAIL_STATIC(0x4def30u,4de);
}
B54933c:L54933c:{c.instructions+=8;NFSU2_TR(0x54933c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54933d:{NFSU2_TR(0x54933d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54933e:{NFSU2_TR(0x54933e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54933f:{NFSU2_TR(0x54933f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549342:{NFSU2_TR(0x549342);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549349:{NFSU2_TR(0x549349);
__builtin_memmove((R+16),(R+20),4);
}
B54934b:{NFSU2_TR(0x54934b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54934c:{NFSU2_TR(0x54934c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54934f:L54934f:{c.instructions+=3;NFSU2_TR(0x54934f);
u8 U[4];
w4(U+0,u32(0xa3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549354:{NFSU2_TR(0x549354);
w4(R+4,u32(0x8392c0ull));
}
B549359:{NFSU2_TR(0x549359);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54935eull));
TAIL_STATIC(0x6102f0u,610);
}
B54935e:L54935e:{c.instructions+=2;NFSU2_TR(0x54935e);
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
B549360:{NFSU2_TR(0x549360);
if(r1(R+518)){{goto L549380;}}
}
B549362:L549362:{c.instructions+=4;NFSU2_TR(0x549362);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549364:{NFSU2_TR(0x549364);
u8 U[4];
w4(U+0,u32(0x311151f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549369:{NFSU2_TR(0x549369);
__builtin_memmove((R+4),(R+0),4);
}
B54936b:{NFSU2_TR(0x54936b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549370ull));
TAIL_STATIC(0x61b500u,61b);
}
B549370:L549370:{c.instructions+=2;NFSU2_TR(0x549370);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
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
B549373:{NFSU2_TR(0x549373);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L549380;}}
}
B549375:L549375:{c.instructions+=3;NFSU2_TR(0x549375);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549376:{NFSU2_TR(0x549376);
w4(R+4,u32(0x8392c0ull));
}
B54937b:{NFSU2_TR(0x54937b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549380ull));
TAIL_STATIC(0x6102f0u,610);
}
B549380:L549380:{c.instructions+=5;NFSU2_TR(0x549380);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B549383:{NFSU2_TR(0x549383);
w4(R+24,u32(0x1ull));
}
B549388:{NFSU2_TR(0x549388);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54938b:{NFSU2_TR(0x54938b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54938e:{NFSU2_TR(0x54938e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549393ull));
TAIL_STATIC(0x502fd0u,502);
}
B549393:L549393:{c.instructions+=3;NFSU2_TR(0x549393);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B549395:{NFSU2_TR(0x549395);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549398:{NFSU2_TR(0x549398);
if(r1(R+518)){{goto L549504;}}
}
B54939e:L54939e:{c.instructions+=1;NFSU2_TR(0x54939e);
__builtin_memmove((R+28),(R+28),4);
}
B5493a0:L5493a0:{c.instructions+=4;NFSU2_TR(0x5493a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5493a3:{NFSU2_TR(0x5493a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5493a6:{NFSU2_TR(0x5493a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5493a7:{NFSU2_TR(0x5493a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5493acull));
TAIL_STATIC(0x530940u,530);
}
B5493ac:L5493ac:{c.instructions+=2;NFSU2_TR(0x5493ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5493ae:{NFSU2_TR(0x5493ae);
if(r1(R+518)){{goto L5494eb;}}
}
B5493b4:L5493b4:{c.instructions+=6;NFSU2_TR(0x5493b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5493b7:{NFSU2_TR(0x5493b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5493ba:{NFSU2_TR(0x5493ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5493bd:{NFSU2_TR(0x5493bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5493be:{NFSU2_TR(0x5493be);
u8 U[4];
w4(U+0,u32(0x79c344ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5493c3:{NFSU2_TR(0x5493c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5493c8ull));
TAIL_STATIC(0x50b990u,50b);
}
B5493c8:L5493c8:{c.instructions+=4;NFSU2_TR(0x5493c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5493cb:{NFSU2_TR(0x5493cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5493cd:{NFSU2_TR(0x5493cd);
__builtin_memmove((R+24),(R+0),4);
}
B5493cf:{NFSU2_TR(0x5493cf);
if(r1(R+518)){{goto L5493ea;}}
}
B5493d1:L5493d1:{c.instructions+=2;NFSU2_TR(0x5493d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5493d2:{NFSU2_TR(0x5493d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5493d7ull));
TAIL_STATIC(0x52cef0u,52c);
}
B5493d7:L5493d7:{c.instructions+=3;NFSU2_TR(0x5493d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5493da:{NFSU2_TR(0x5493da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5493dc:{NFSU2_TR(0x5493dc);
if(r1(R+518)){{goto L5493ea;}}
}
B5493de:L5493de:{c.instructions+=3;NFSU2_TR(0x5493de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5493df:{NFSU2_TR(0x5493df);
__builtin_memmove((R+4),(R+0),4);
}
B5493e1:{NFSU2_TR(0x5493e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5493e6ull));
TAIL_STATIC(0x517f80u,517);
}
B5493e6:L5493e6:{c.instructions+=2;NFSU2_TR(0x5493e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5493e8:{NFSU2_TR(0x5493e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L549401;}}
}
B5493ea:L5493ea:{c.instructions+=3;NFSU2_TR(0x5493ea);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B5493ef:{NFSU2_TR(0x5493ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5493f1:{NFSU2_TR(0x5493f1);
if(r1(R+518)){{goto L5494eb;}}
}
B5493f7:L5493f7:{c.instructions+=4;NFSU2_TR(0x5493f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5493fa:{NFSU2_TR(0x5493fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5493fb:{NFSU2_TR(0x5493fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5493fc:{NFSU2_TR(0x5493fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549401ull));
TAIL_STATIC(0x52c570u,52c);
}
B549401:L549401:{c.instructions+=3;NFSU2_TR(0x549401);
__builtin_memmove((R+12),(R+0),4);
}
B549403:{NFSU2_TR(0x549403);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B549405:{NFSU2_TR(0x549405);
if(r1(R+518)){{goto L5494eb;}}
}
B54940b:L54940b:{c.instructions+=2;NFSU2_TR(0x54940b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54940f:{NFSU2_TR(0x54940f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5494eb;}}
}
B549415:L549415:{c.instructions+=2;NFSU2_TR(0x549415);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549416:{NFSU2_TR(0x549416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54941bull));
TAIL_STATIC(0x50ca50u,50c);
}
B54941b:L54941b:{c.instructions+=2;NFSU2_TR(0x54941b);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54941d:{NFSU2_TR(0x54941d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549422ull));
TAIL_STATIC(0x575620u,575);
}
B549422:L549422:{c.instructions+=3;NFSU2_TR(0x549422);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B549425:{NFSU2_TR(0x549425);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B549427:{NFSU2_TR(0x549427);
if(r1(R+518)){{goto L54943c;}}
}
B549429:L549429:{c.instructions+=7;NFSU2_TR(0x549429);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54942c:{NFSU2_TR(0x54942c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54942f:{NFSU2_TR(0x54942f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549432:{NFSU2_TR(0x549432);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549435:{NFSU2_TR(0x549435);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549438:{NFSU2_TR(0x549438);
__builtin_memmove((R+24),(R+0),4);
}
B54943a:{NFSU2_TR(0x54943a);
{goto L54943e;}
}
B54943c:L54943c:{c.instructions+=1;NFSU2_TR(0x54943c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B54943e:L54943e:{c.instructions+=10;NFSU2_TR(0x54943e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549441:{NFSU2_TR(0x549441);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549444:{NFSU2_TR(0x549444);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B549446:{NFSU2_TR(0x549446);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549449:{NFSU2_TR(0x549449);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54944b:{NFSU2_TR(0x54944b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54944e:{NFSU2_TR(0x54944e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B549450:{NFSU2_TR(0x549450);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549453:{NFSU2_TR(0x549453);
u8 U[4];
w4(U+0,u32(0xd99aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549458:{NFSU2_TR(0x549458);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54945dull));
TAIL_STATIC(0x61b500u,61b);
}
B54945d:L54945d:{c.instructions+=5;NFSU2_TR(0x54945d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549460:{NFSU2_TR(0x549460);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549462:{NFSU2_TR(0x549462);
u8 U[4];
w4(U+0,u32(0x136707ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549467:{NFSU2_TR(0x549467);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54946a:{NFSU2_TR(0x54946a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54946full));
TAIL_STATIC(0x61b500u,61b);
}
B54946f:L54946f:{c.instructions+=5;NFSU2_TR(0x54946f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549472:{NFSU2_TR(0x549472);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549474:{NFSU2_TR(0x549474);
u8 U[4];
w4(U+0,u32(0x2ddc8f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549479:{NFSU2_TR(0x549479);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54947c:{NFSU2_TR(0x54947c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549481ull));
TAIL_STATIC(0x61b500u,61b);
}
B549481:L549481:{c.instructions+=8;NFSU2_TR(0x549481);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549484:{NFSU2_TR(0x549484);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B549487:{NFSU2_TR(0x549487);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54948a:{NFSU2_TR(0x54948a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x100ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B549491:{NFSU2_TR(0x549491);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0xffull));
s4(u32(r4(U+0)),r4(U+4));
}
B549498:{NFSU2_TR(0x549498);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54949b:{NFSU2_TR(0x54949b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54949e:{NFSU2_TR(0x54949e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5494ca;}}
}
B5494a0:L5494a0:{c.instructions+=5;NFSU2_TR(0x5494a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5494a3:{NFSU2_TR(0x5494a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5494a4:{NFSU2_TR(0x5494a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5494a7:{NFSU2_TR(0x5494a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5494a8:{NFSU2_TR(0x5494a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5494adull));
TAIL_STATIC(0x504640u,504);
}
B5494ad:L5494ad:{c.instructions+=3;NFSU2_TR(0x5494ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5494b0:{NFSU2_TR(0x5494b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5494b2:{NFSU2_TR(0x5494b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5494bb;}}
}
B5494b4:L5494b4:{c.instructions+=1;NFSU2_TR(0x5494b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5494bb:L5494bb:{c.instructions+=6;NFSU2_TR(0x5494bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5494bd:{NFSU2_TR(0x5494bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5494c0:{NFSU2_TR(0x5494c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5494c1:{NFSU2_TR(0x5494c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5494c3:{NFSU2_TR(0x5494c3);
__builtin_memmove((R+4),(R+12),4);
}
B5494c5:{NFSU2_TR(0x5494c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5494caull));
TAIL_STATIC(0x517ad0u,517);
}
B5494ca:L5494ca:{c.instructions+=9;NFSU2_TR(0x5494ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5494cd:{NFSU2_TR(0x5494cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5494d0:{NFSU2_TR(0x5494d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5494d3:{NFSU2_TR(0x5494d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5494d6:{NFSU2_TR(0x5494d6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5494d7:{NFSU2_TR(0x5494d7);
__builtin_memmove((R+4),(R+12),4);
}
B5494d9:{NFSU2_TR(0x5494d9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5494db:{NFSU2_TR(0x5494db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5494de:{NFSU2_TR(0x5494de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5494eb;}}
}
B5494e0:L5494e0:{c.instructions+=4;NFSU2_TR(0x5494e0);
__builtin_memmove((R+8),(R+0),4);
}
B5494e2:{NFSU2_TR(0x5494e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5494e5:{NFSU2_TR(0x5494e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5494e8:{NFSU2_TR(0x5494e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5494eb:L5494eb:{c.instructions+=3;NFSU2_TR(0x5494eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5494ed:{NFSU2_TR(0x5494ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5494f0:{NFSU2_TR(0x5494f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5493a0u);}goto L5493a0;}}
}
B5494f6:L5494f6:{c.instructions+=3;NFSU2_TR(0x5494f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5494f9:{NFSU2_TR(0x5494f9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xdull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5494fc:{NFSU2_TR(0x5494fc);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5495b9;}}
}
B549502:L549502:{c.instructions+=1;NFSU2_TR(0x549502);
__builtin_memmove((R+24),(R+0),4);
}
B549504:L549504:{c.instructions+=5;NFSU2_TR(0x549504);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549507:{NFSU2_TR(0x549507);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54950a:{NFSU2_TR(0x54950a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54950b:{NFSU2_TR(0x54950b);
u8 U[4];
w4(U+0,u32(0x79c344ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549510:{NFSU2_TR(0x549510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549515ull));
TAIL_STATIC(0x50b990u,50b);
}
B549515:L549515:{c.instructions+=4;NFSU2_TR(0x549515);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B549518:{NFSU2_TR(0x549518);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54951a:{NFSU2_TR(0x54951a);
__builtin_memmove((R+12),(R+0),4);
}
B54951c:{NFSU2_TR(0x54951c);
if(r1(R+518)){{goto L54955d;}}
}
B54951e:L54951e:{c.instructions+=2;NFSU2_TR(0x54951e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54951f:{NFSU2_TR(0x54951f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549524ull));
TAIL_STATIC(0x52cef0u,52c);
}
B549524:L549524:{c.instructions+=3;NFSU2_TR(0x549524);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B549527:{NFSU2_TR(0x549527);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B549529:{NFSU2_TR(0x549529);
if(r1(R+518)){{goto L54955d;}}
}
B54952b:L54952b:{c.instructions+=8;NFSU2_TR(0x54952b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x79aaf4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B549532:{NFSU2_TR(0x549532);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B549535:{NFSU2_TR(0x549535);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549536:{NFSU2_TR(0x549536);
__builtin_memmove((R+4),(R+0),4);
}
B549538:{NFSU2_TR(0x549538);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54953c:{NFSU2_TR(0x54953c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54953f:{NFSU2_TR(0x54953f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B549546:{NFSU2_TR(0x549546);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54954bull));
TAIL_STATIC(0x504880u,504);
}
B54954b:L54954b:{c.instructions+=5;NFSU2_TR(0x54954b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54954e:{NFSU2_TR(0x54954e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B549550:{NFSU2_TR(0x549550);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B549554:{NFSU2_TR(0x549554);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x79aa4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B54955b:{NFSU2_TR(0x54955b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L549574;}}
}
B54955d:L54955d:{c.instructions+=3;NFSU2_TR(0x54955d);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B549562:{NFSU2_TR(0x549562);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B549564:{NFSU2_TR(0x549564);
if(r1(R+518)){{goto L5495af;}}
}
B549566:L549566:{c.instructions+=4;NFSU2_TR(0x549566);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549569:{NFSU2_TR(0x549569);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54956a:{NFSU2_TR(0x54956a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54956b:{NFSU2_TR(0x54956b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549570ull));
TAIL_STATIC(0x52c570u,52c);
}
B549570:L549570:{c.instructions+=2;NFSU2_TR(0x549570);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B549572:{NFSU2_TR(0x549572);
if(r1(R+518)){{goto L5495af;}}
}
B549574:L549574:{c.instructions+=3;NFSU2_TR(0x549574);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B54957a:{NFSU2_TR(0x54957a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54957c:{NFSU2_TR(0x54957c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L549584;}}
}
B54957e:L54957e:{c.instructions+=2;NFSU2_TR(0x54957e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B549582:{NFSU2_TR(0x549582);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54958b;}}
}
B549584:L549584:{c.instructions+=1;NFSU2_TR(0x549584);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B54958b:L54958b:{c.instructions+=2;NFSU2_TR(0x54958b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54958f:{NFSU2_TR(0x54958f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5495af;}}
}
B549591:L549591:{c.instructions+=4;NFSU2_TR(0x549591);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B549594:{NFSU2_TR(0x549594);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549597:{NFSU2_TR(0x549597);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B549599:{NFSU2_TR(0x549599);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5495af;}}
}
B54959b:L54959b:{c.instructions+=2;NFSU2_TR(0x54959b);
__builtin_memmove((R+28),(R+0),4);
}
B54959d:{NFSU2_TR(0x54959d);
__builtin_memmove((R+4),(R+4),4);
}
B5495a0:L5495a0:{c.instructions+=2;NFSU2_TR(0x5495a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5495a1:{NFSU2_TR(0x5495a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5495a6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B5495a6:L5495a6:{c.instructions+=4;NFSU2_TR(0x5495a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5495a9:{NFSU2_TR(0x5495a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5495ac:{NFSU2_TR(0x5495ac);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5495ad:{NFSU2_TR(0x5495ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5495a0u);}goto L5495a0;}}
}
B5495af:L5495af:{c.instructions+=3;NFSU2_TR(0x5495af);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5495b0:{NFSU2_TR(0x5495b0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xdull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5495b3:{NFSU2_TR(0x5495b3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549504u);}goto L549504;}}
}
B5495b9:L5495b9:{c.instructions+=5;NFSU2_TR(0x5495b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5495bc:{NFSU2_TR(0x5495bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5495be:{NFSU2_TR(0x5495be);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5495c0:{NFSU2_TR(0x5495c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5495c3:{NFSU2_TR(0x5495c3);
if(r1(R+518)){{goto L549716;}}
}
B5495c9:L5495c9:{c.instructions+=4;NFSU2_TR(0x5495c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5495cc:{NFSU2_TR(0x5495cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5495cf:{NFSU2_TR(0x5495cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5495d1:{NFSU2_TR(0x5495d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5495d8;}}
}
B5495d3:L5495d3:{c.instructions+=2;NFSU2_TR(0x5495d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5495d5:{NFSU2_TR(0x5495d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5495d8:L5495d8:{c.instructions+=4;NFSU2_TR(0x5495d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5495db:{NFSU2_TR(0x5495db);
w4(R+4,u32(0x79c548ull));
}
B5495e0:{NFSU2_TR(0x5495e0);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B5495e3:{NFSU2_TR(0x5495e3);
w1(R+0,u8(0x50ull));
}
B5495e5:L5495e5:{c.instructions+=3;NFSU2_TR(0x5495e5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B5495e8:{NFSU2_TR(0x5495e8);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5495ea:{NFSU2_TR(0x5495ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5495f2;}}
}
B5495ec:L5495ec:{c.instructions+=2;NFSU2_TR(0x5495ec);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5495ee:{NFSU2_TR(0x5495ee);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5495f2;}}
}
B5495f0:L5495f0:{c.instructions+=1;NFSU2_TR(0x5495f0);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B5495f2:L5495f2:{c.instructions+=6;NFSU2_TR(0x5495f2);
w4(R+8,u32(r1(R+0)));
}
B5495f5:{NFSU2_TR(0x5495f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5495f8:{NFSU2_TR(0x5495f8);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B5495fa:{NFSU2_TR(0x5495fa);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5495fb:{NFSU2_TR(0x5495fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5495fd:{NFSU2_TR(0x5495fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5495e5u);}goto L5495e5;}}
}
B5495ff:L5495ff:{c.instructions+=2;NFSU2_TR(0x5495ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B549601:{NFSU2_TR(0x549601);
if(r1(R+518)){{goto L549646;}}
}
B549603:L549603:{c.instructions+=2;NFSU2_TR(0x549603);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549604:{NFSU2_TR(0x549604);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549609ull));
TAIL_STATIC(0x52cef0u,52c);
}
B549609:L549609:{c.instructions+=3;NFSU2_TR(0x549609);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54960c:{NFSU2_TR(0x54960c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54960e:{NFSU2_TR(0x54960e);
if(r1(R+518)){{goto L549646;}}
}
B549610:L549610:{c.instructions+=8;NFSU2_TR(0x549610);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x79aaf4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B549617:{NFSU2_TR(0x549617);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54961a:{NFSU2_TR(0x54961a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54961b:{NFSU2_TR(0x54961b);
__builtin_memmove((R+4),(R+0),4);
}
B54961d:{NFSU2_TR(0x54961d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B549621:{NFSU2_TR(0x549621);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549624:{NFSU2_TR(0x549624);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54962b:{NFSU2_TR(0x54962b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549630ull));
TAIL_STATIC(0x504880u,504);
}
B549630:L549630:{c.instructions+=5;NFSU2_TR(0x549630);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549633:{NFSU2_TR(0x549633);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B549635:{NFSU2_TR(0x549635);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B549639:{NFSU2_TR(0x549639);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x79aa4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B549640:{NFSU2_TR(0x549640);
if(r1(R+518)){{goto L549646;}}
}
B549642:L549642:{c.instructions+=2;NFSU2_TR(0x549642);
__builtin_memmove((R+12),(R+0),4);
}
B549644:{NFSU2_TR(0x549644);
{goto L54965f;}
}
B549646:L549646:{c.instructions+=3;NFSU2_TR(0x549646);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B54964b:{NFSU2_TR(0x54964b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54964d:{NFSU2_TR(0x54964d);
if(r1(R+518)){{goto L54965d;}}
}
B54964f:L54964f:{c.instructions+=4;NFSU2_TR(0x54964f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549652:{NFSU2_TR(0x549652);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549653:{NFSU2_TR(0x549653);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549654:{NFSU2_TR(0x549654);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549659ull));
TAIL_STATIC(0x52c570u,52c);
}
B549659:L549659:{c.instructions+=2;NFSU2_TR(0x549659);
__builtin_memmove((R+12),(R+0),4);
}
B54965b:{NFSU2_TR(0x54965b);
{goto L54965f;}
}
B54965d:L54965d:{c.instructions+=1;NFSU2_TR(0x54965d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B54965f:L54965f:{c.instructions+=2;NFSU2_TR(0x54965f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B549661:{NFSU2_TR(0x549661);
if(r1(R+518)){{goto L5496c3;}}
}
B549663:L549663:{c.instructions+=4;NFSU2_TR(0x549663);
w4(R+8,u32(0x78f228ull));
}
B549668:{NFSU2_TR(0x549668);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B54966b:{NFSU2_TR(0x54966b);
w1(R+0,u8(0x48ull));
}
B54966d:{NFSU2_TR(0x54966d);
__builtin_memmove((R+4),(R+4),4);
}
B549670:L549670:{c.instructions+=3;NFSU2_TR(0x549670);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B549673:{NFSU2_TR(0x549673);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B549675:{NFSU2_TR(0x549675);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54967d;}}
}
B549677:L549677:{c.instructions+=2;NFSU2_TR(0x549677);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B549679:{NFSU2_TR(0x549679);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L54967d;}}
}
B54967b:L54967b:{c.instructions+=1;NFSU2_TR(0x54967b);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B54967d:L54967d:{c.instructions+=6;NFSU2_TR(0x54967d);
w4(R+0,u32(r1(R+0)));
}
B549680:{NFSU2_TR(0x549680);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B549682:{NFSU2_TR(0x549682);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B549685:{NFSU2_TR(0x549685);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B549686:{NFSU2_TR(0x549686);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B549688:{NFSU2_TR(0x549688);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549670u);}goto L549670;}}
}
B54968a:L54968a:{c.instructions+=3;NFSU2_TR(0x54968a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54968d:{NFSU2_TR(0x54968d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54968f:{NFSU2_TR(0x54968f);
if(r1(R+518)){{goto L5496c3;}}
}
B549691:L549691:{c.instructions+=2;NFSU2_TR(0x549691);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B549694:{NFSU2_TR(0x549694);
if(r1(R+518)){{goto L54969f;}}
}
B549696:L549696:{c.instructions+=3;NFSU2_TR(0x549696);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B549699:{NFSU2_TR(0x549699);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54969b:{NFSU2_TR(0x54969b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549691u);}goto L549691;}}
}
B54969d:L54969d:{c.instructions+=1;NFSU2_TR(0x54969d);
{goto L5496c3;}
}
B54969f:L54969f:{c.instructions+=2;NFSU2_TR(0x54969f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5496a1:{NFSU2_TR(0x5496a1);
if(r1(R+518)){{goto L5496c3;}}
}
B5496a3:L5496a3:{c.instructions+=2;NFSU2_TR(0x5496a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5496a6:{NFSU2_TR(0x5496a6);
if(r1(R+518)){{goto L5496bc;}}
}
B5496a8:L5496a8:{c.instructions+=3;NFSU2_TR(0x5496a8);
__builtin_memmove((R+4),(R+12),4);
}
B5496aa:{NFSU2_TR(0x5496aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5496ad:{NFSU2_TR(0x5496ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5496b2ull));
TAIL_STATIC(0x517720u,517);
}
B5496b2:L5496b2:{c.instructions+=2;NFSU2_TR(0x5496b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5496b5:{NFSU2_TR(0x5496b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5496bc:L5496bc:{c.instructions+=1;NFSU2_TR(0x5496bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5496c3:L5496c3:{c.instructions+=9;NFSU2_TR(0x5496c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5496c6:{NFSU2_TR(0x5496c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5496c9:{NFSU2_TR(0x5496c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5496cc:{NFSU2_TR(0x5496cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5496cf:{NFSU2_TR(0x5496cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5496d0:{NFSU2_TR(0x5496d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5496d3:{NFSU2_TR(0x5496d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5496d4:{NFSU2_TR(0x5496d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5496d5:{NFSU2_TR(0x5496d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5496daull));
TAIL_STATIC(0x51d620u,51d);
}
B5496da:L5496da:{c.instructions+=8;NFSU2_TR(0x5496da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5496dd:{NFSU2_TR(0x5496dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5496e0:{NFSU2_TR(0x5496e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5496e3:{NFSU2_TR(0x5496e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5496e4:{NFSU2_TR(0x5496e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5496e7:{NFSU2_TR(0x5496e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5496e8:{NFSU2_TR(0x5496e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5496e9:{NFSU2_TR(0x5496e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5496eeull));
TAIL_STATIC(0x51d620u,51d);
}
B5496ee:L5496ee:{c.instructions+=10;NFSU2_TR(0x5496ee);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5496f1:{NFSU2_TR(0x5496f1);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5496f7:{NFSU2_TR(0x5496f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5496fa:{NFSU2_TR(0x5496fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5496fd:{NFSU2_TR(0x5496fd);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B549701:{NFSU2_TR(0x549701);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B549704:{NFSU2_TR(0x549704);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54970a:{NFSU2_TR(0x54970a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54970d:{NFSU2_TR(0x54970d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54970e:{NFSU2_TR(0x54970e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549713ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B549713:L549713:{c.instructions+=1;NFSU2_TR(0x549713);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B549716:L549716:{c.instructions+=5;NFSU2_TR(0x549716);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549719:{NFSU2_TR(0x549719);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54971c:{NFSU2_TR(0x54971c);
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
B54971e:{NFSU2_TR(0x54971e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B549725:{NFSU2_TR(0x549725);
if(r1(R+518)){{goto L549746;}}
}
B549727:L549727:{c.instructions+=7;NFSU2_TR(0x549727);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B549729:{NFSU2_TR(0x549729);
__builtin_memmove((R+8),(R+0),4);
}
B54972b:{NFSU2_TR(0x54972b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54972e:{NFSU2_TR(0x54972e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B549730:{NFSU2_TR(0x549730);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549731:{NFSU2_TR(0x549731);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549734:{NFSU2_TR(0x549734);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549739ull));
TAIL_STATIC(0x575630u,575);
}
B549739:L549739:{c.instructions+=5;NFSU2_TR(0x549739);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54973c:{NFSU2_TR(0x54973c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B54973f:{NFSU2_TR(0x54973f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B549742:{NFSU2_TR(0x549742);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B549744:{NFSU2_TR(0x549744);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549727u);}goto L549727;}}
}
B549746:L549746:{c.instructions+=8;NFSU2_TR(0x549746);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549749:{NFSU2_TR(0x549749);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54974a:{NFSU2_TR(0x54974a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54974b:{NFSU2_TR(0x54974b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54974c:{NFSU2_TR(0x54974c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549753:{NFSU2_TR(0x549753);
__builtin_memmove((R+16),(R+20),4);
}
B549755:{NFSU2_TR(0x549755);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B549756:{NFSU2_TR(0x549756);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B549760:L549760:{c.instructions+=3;NFSU2_TR(0x549760);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549761:{NFSU2_TR(0x549761);
__builtin_memmove((R+24),(R+4),4);
}
B549763:{NFSU2_TR(0x549763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549768ull));
TAIL_STATIC(0x50da50u,50d);
}
B549768:L549768:{c.instructions+=3;NFSU2_TR(0x549768);
__builtin_memmove((R+0),gp(0x83a63c),4);
}
B54976d:{NFSU2_TR(0x54976d);
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
B549770:{NFSU2_TR(0x549770);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5497fa;}}
}
B549776:L549776:{c.instructions+=1;NFSU2_TR(0x549776);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x549814ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54977d:L54977d:{c.instructions+=6;NFSU2_TR(0x54977d);
w4(R+0,u32(0x5ae1d9e5ull));
}
B549782:{NFSU2_TR(0x549782);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549783:{NFSU2_TR(0x549783);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549786:{NFSU2_TR(0x549786);
u8 U[4];
w4(U+0,u32(0x242217c1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54978b:{NFSU2_TR(0x54978b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54978c:{NFSU2_TR(0x54978c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549791ull));
TAIL_STATIC(0x495460u,495);
}
B549791:L549791:{c.instructions+=3;NFSU2_TR(0x549791);
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
B549794:{NFSU2_TR(0x549794);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B549795:{NFSU2_TR(0x549795);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B549796:L549796:{c.instructions+=6;NFSU2_TR(0x549796);
w4(R+0,u32(0x5b4967f0ull));
}
B54979b:{NFSU2_TR(0x54979b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54979c:{NFSU2_TR(0x54979c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54979f:{NFSU2_TR(0x54979f);
u8 U[4];
w4(U+0,u32(0x242217c1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5497a4:{NFSU2_TR(0x5497a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5497a5:{NFSU2_TR(0x5497a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5497aaull));
TAIL_STATIC(0x495460u,495);
}
B5497aa:L5497aa:{c.instructions+=3;NFSU2_TR(0x5497aa);
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
B5497ad:{NFSU2_TR(0x5497ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5497ae:{NFSU2_TR(0x5497ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5497af:L5497af:{c.instructions+=6;NFSU2_TR(0x5497af);
w4(R+0,u32(0xc476882bull));
}
B5497b4:{NFSU2_TR(0x5497b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5497b5:{NFSU2_TR(0x5497b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5497b8:{NFSU2_TR(0x5497b8);
u8 U[4];
w4(U+0,u32(0x242217c1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5497bd:{NFSU2_TR(0x5497bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5497be:{NFSU2_TR(0x5497be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5497c3ull));
TAIL_STATIC(0x495460u,495);
}
B5497c3:L5497c3:{c.instructions+=3;NFSU2_TR(0x5497c3);
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
B5497c6:{NFSU2_TR(0x5497c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5497c7:{NFSU2_TR(0x5497c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5497c8:L5497c8:{c.instructions+=6;NFSU2_TR(0x5497c8);
w4(R+0,u32(0xca169c60ull));
}
B5497cd:{NFSU2_TR(0x5497cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5497ce:{NFSU2_TR(0x5497ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5497d1:{NFSU2_TR(0x5497d1);
u8 U[4];
w4(U+0,u32(0x242217c1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5497d6:{NFSU2_TR(0x5497d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5497d7:{NFSU2_TR(0x5497d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5497dcull));
TAIL_STATIC(0x495460u,495);
}
B5497dc:L5497dc:{c.instructions+=3;NFSU2_TR(0x5497dc);
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
B5497df:{NFSU2_TR(0x5497df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5497e0:{NFSU2_TR(0x5497e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5497e1:L5497e1:{c.instructions+=6;NFSU2_TR(0x5497e1);
w4(R+0,u32(0xcc76dee5ull));
}
B5497e6:{NFSU2_TR(0x5497e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5497e7:{NFSU2_TR(0x5497e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5497ea:{NFSU2_TR(0x5497ea);
u8 U[4];
w4(U+0,u32(0x242217c1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5497ef:{NFSU2_TR(0x5497ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5497f0:{NFSU2_TR(0x5497f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5497f5ull));
TAIL_STATIC(0x495460u,495);
}
B5497f5:L5497f5:{c.instructions+=3;NFSU2_TR(0x5497f5);
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
B5497f8:{NFSU2_TR(0x5497f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5497f9:{NFSU2_TR(0x5497f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5497fa:L5497fa:{c.instructions+=5;NFSU2_TR(0x5497fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5497fd:{NFSU2_TR(0x5497fd);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549802:{NFSU2_TR(0x549802);
u8 U[4];
w4(U+0,u32(0x242217c1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549807:{NFSU2_TR(0x549807);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549808:{NFSU2_TR(0x549808);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54980dull));
TAIL_STATIC(0x537b80u,537);
}
B54980d:L54980d:{c.instructions+=3;NFSU2_TR(0x54980d);
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
B549810:{NFSU2_TR(0x549810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B549811:{NFSU2_TR(0x549811);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B549830:L549830:{c.instructions+=6;NFSU2_TR(0x549830);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549834:{NFSU2_TR(0x549834);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549836:{NFSU2_TR(0x549836);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54983b:{NFSU2_TR(0x54983b);
u8 U[4];
w4(U+0,u32(0x79c558ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549840:{NFSU2_TR(0x549840);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549841:{NFSU2_TR(0x549841);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549846ull));
TAIL_STATIC(0x5426c0u,542);
}
B549846:L549846:{c.instructions+=2;NFSU2_TR(0x549846);
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
B549849:{NFSU2_TR(0x549849);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B549850:L549850:{c.instructions+=15;NFSU2_TR(0x549850);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549851:{NFSU2_TR(0x549851);
__builtin_memmove((R+20),(R+16),4);
}
B549853:{NFSU2_TR(0x549853);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549859:{NFSU2_TR(0x549859);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54985b:{NFSU2_TR(0x54985b);
u8 U[4];
w4(U+0,u32(0x777ac4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549860:{NFSU2_TR(0x549860);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549861:{NFSU2_TR(0x549861);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549868:{NFSU2_TR(0x549868);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549869:{NFSU2_TR(0x549869);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54986c:{NFSU2_TR(0x54986c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54986d:{NFSU2_TR(0x54986d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54986e:{NFSU2_TR(0x54986e);
__builtin_memmove((R+24),(R+4),4);
}
B549870:{NFSU2_TR(0x549870);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B549876:{NFSU2_TR(0x549876);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549877:{NFSU2_TR(0x549877);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54987cull));
TAIL_STATIC(0x59b080u,59b);
}
B54987c:L54987c:{c.instructions+=2;NFSU2_TR(0x54987c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54987e:{NFSU2_TR(0x54987e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L549896;}}
}
B549880:L549880:{c.instructions+=9;NFSU2_TR(0x549880);
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
B549883:{NFSU2_TR(0x549883);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549886:{NFSU2_TR(0x549886);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54988d:{NFSU2_TR(0x54988d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54988e:{NFSU2_TR(0x54988e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54988f:{NFSU2_TR(0x54988f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B549890:{NFSU2_TR(0x549890);
__builtin_memmove((R+16),(R+20),4);
}
B549892:{NFSU2_TR(0x549892);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B549893:{NFSU2_TR(0x549893);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B549896:L549896:{c.instructions+=2;NFSU2_TR(0x549896);
u8 U[4];
w4(U+0,u32(0xc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54989b:{NFSU2_TR(0x54989b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5498a0ull));
TAIL_STATIC(0x575620u,575);
}
B5498a0:L5498a0:{c.instructions+=6;NFSU2_TR(0x5498a0);
__builtin_memmove((R+28),(R+0),4);
}
B5498a2:{NFSU2_TR(0x5498a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5498a5:{NFSU2_TR(0x5498a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5498a8:{NFSU2_TR(0x5498a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5498aa:{NFSU2_TR(0x5498aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5498b1:{NFSU2_TR(0x5498b1);
if(r1(R+518)){{goto L5498fa;}}
}
B5498b3:L5498b3:{c.instructions+=3;NFSU2_TR(0x5498b3);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B5498b9:{NFSU2_TR(0x5498b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5498ba:{NFSU2_TR(0x5498ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5498bfull));
TAIL_STATIC(0x59b080u,59b);
}
B5498bf:L5498bf:{c.instructions+=20;NFSU2_TR(0x5498bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5498c2:{NFSU2_TR(0x5498c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5498c5:{NFSU2_TR(0x5498c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5498c8:{NFSU2_TR(0x5498c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5498cb:{NFSU2_TR(0x5498cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5498cc:{NFSU2_TR(0x5498cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5498cf:{NFSU2_TR(0x5498cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5498d0:{NFSU2_TR(0x5498d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5498d1:{NFSU2_TR(0x5498d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5498d2:{NFSU2_TR(0x5498d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5498d8:{NFSU2_TR(0x5498d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5498d9:{NFSU2_TR(0x5498d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5498df:{NFSU2_TR(0x5498df);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5498e0:{NFSU2_TR(0x5498e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5498e6:{NFSU2_TR(0x5498e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5498e7:{NFSU2_TR(0x5498e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5498ed:{NFSU2_TR(0x5498ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5498ee:{NFSU2_TR(0x5498ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5498ef:{NFSU2_TR(0x5498ef);
__builtin_memmove((R+4),(R+28),4);
}
B5498f1:{NFSU2_TR(0x5498f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5498f6ull));
TAIL_STATIC(0x522af0u,522);
}
B5498f6:L5498f6:{c.instructions+=2;NFSU2_TR(0x5498f6);
__builtin_memmove((R+28),(R+0),4);
}
B5498f8:{NFSU2_TR(0x5498f8);
{goto L5498fc;}
}
B5498fa:L5498fa:{c.instructions+=1;NFSU2_TR(0x5498fa);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5498fc:L5498fc:{c.instructions+=5;NFSU2_TR(0x5498fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B549902:{NFSU2_TR(0x549902);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549903:{NFSU2_TR(0x549903);
__builtin_memmove((R+4),(R+24),4);
}
B549905:{NFSU2_TR(0x549905);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B54990c:{NFSU2_TR(0x54990c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549911ull));
TAIL_STATIC(0x544550u,544);
}
B549911:L549911:{c.instructions+=5;NFSU2_TR(0x549911);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549914:{NFSU2_TR(0x549914);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54991a:{NFSU2_TR(0x54991a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54991b:{NFSU2_TR(0x54991b);
__builtin_memmove((R+4),(R+24),4);
}
B54991d:{NFSU2_TR(0x54991d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549922ull));
TAIL_STATIC(0x5445a0u,544);
}
B549922:L549922:{c.instructions+=5;NFSU2_TR(0x549922);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549928:{NFSU2_TR(0x549928);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549929:{NFSU2_TR(0x549929);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54992a:{NFSU2_TR(0x54992a);
__builtin_memmove((R+4),(R+24),4);
}
B54992c:{NFSU2_TR(0x54992c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549931ull));
TAIL_STATIC(0x5445a0u,544);
}
B549931:L549931:{c.instructions+=4;NFSU2_TR(0x549931);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549932:{NFSU2_TR(0x549932);
u8 U[4];
w4(U+0,u32(0x79c5a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549937:{NFSU2_TR(0x549937);
__builtin_memmove((R+4),(R+24),4);
}
B549939:{NFSU2_TR(0x549939);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54993eull));
TAIL_STATIC(0x5445a0u,544);
}
B54993e:L54993e:{c.instructions+=5;NFSU2_TR(0x54993e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B549944:{NFSU2_TR(0x549944);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549945:{NFSU2_TR(0x549945);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549946:{NFSU2_TR(0x549946);
__builtin_memmove((R+4),(R+24),4);
}
B549948:{NFSU2_TR(0x549948);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54994dull));
TAIL_STATIC(0x5445a0u,544);
}
B54994d:L54994d:{c.instructions+=5;NFSU2_TR(0x54994d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54994e:{NFSU2_TR(0x54994e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549954:{NFSU2_TR(0x549954);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549955:{NFSU2_TR(0x549955);
__builtin_memmove((R+4),(R+24),4);
}
B549957:{NFSU2_TR(0x549957);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54995cull));
TAIL_STATIC(0x544550u,544);
}
B54995c:L54995c:{c.instructions+=5;NFSU2_TR(0x54995c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549962:{NFSU2_TR(0x549962);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549963:{NFSU2_TR(0x549963);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549964:{NFSU2_TR(0x549964);
__builtin_memmove((R+4),(R+24),4);
}
B549966:{NFSU2_TR(0x549966);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54996bull));
TAIL_STATIC(0x5445a0u,544);
}
B54996b:L54996b:{c.instructions+=5;NFSU2_TR(0x54996b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B549971:{NFSU2_TR(0x549971);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549972:{NFSU2_TR(0x549972);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549973:{NFSU2_TR(0x549973);
__builtin_memmove((R+4),(R+24),4);
}
B549975:{NFSU2_TR(0x549975);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54997aull));
TAIL_STATIC(0x5445a0u,544);
}
B54997a:L54997a:{c.instructions+=3;NFSU2_TR(0x54997a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54997b:{NFSU2_TR(0x54997b);
__builtin_memmove((R+4),(R+28),4);
}
B54997d:{NFSU2_TR(0x54997d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549982ull));
TAIL_STATIC(0x530d20u,530);
}
B549982:L549982:{c.instructions+=4;NFSU2_TR(0x549982);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549988:{NFSU2_TR(0x549988);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549989:{NFSU2_TR(0x549989);
__builtin_memmove((R+4),(R+24),4);
}
B54998b:{NFSU2_TR(0x54998b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549990ull));
TAIL_STATIC(0x5445f0u,544);
}
B549990:L549990:{c.instructions+=3;NFSU2_TR(0x549990);
__builtin_memmove((R+4),(R+28),4);
}
B549992:{NFSU2_TR(0x549992);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549995:{NFSU2_TR(0x549995);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54999aull));
TAIL_STATIC(0x530d90u,530);
}
B54999a:L54999a:{c.instructions+=3;NFSU2_TR(0x54999a);
u8 U[4];
w4(U+0,u32(0x79c594ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54999f:{NFSU2_TR(0x54999f);
__builtin_memmove((R+4),(R+24),4);
}
B5499a1:{NFSU2_TR(0x5499a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5499a6ull));
TAIL_STATIC(0x544550u,544);
}
B5499a6:L5499a6:{c.instructions+=4;NFSU2_TR(0x5499a6);
u8 U[4];
w4(U+0,u32(0x79c584ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5499ab:{NFSU2_TR(0x5499ab);
__builtin_memmove((R+4),(R+24),4);
}
B5499ad:{NFSU2_TR(0x5499ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5499b0:{NFSU2_TR(0x5499b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5499b5ull));
TAIL_STATIC(0x544550u,544);
}
B5499b5:L5499b5:{c.instructions+=3;NFSU2_TR(0x5499b5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5499b8:{NFSU2_TR(0x5499b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5499bb:{NFSU2_TR(0x5499bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5499c2;}}
}
B5499bd:L5499bd:{c.instructions+=2;NFSU2_TR(0x5499bd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5499c0:{NFSU2_TR(0x5499c0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5499d1;}}
}
B5499c2:L5499c2:{c.instructions+=3;NFSU2_TR(0x5499c2);
u8 U[4];
w4(U+0,u32(0x79c578ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5499c7:{NFSU2_TR(0x5499c7);
__builtin_memmove((R+4),(R+24),4);
}
B5499c9:{NFSU2_TR(0x5499c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5499ceull));
TAIL_STATIC(0x544550u,544);
}
B5499ce:L5499ce:{c.instructions+=1;NFSU2_TR(0x5499ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5499d1:L5499d1:{c.instructions+=4;NFSU2_TR(0x5499d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5499d7:{NFSU2_TR(0x5499d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5499d8:{NFSU2_TR(0x5499d8);
__builtin_memmove((R+4),(R+24),4);
}
B5499da:{NFSU2_TR(0x5499da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5499dfull));
TAIL_STATIC(0x5445a0u,544);
}
B5499df:L5499df:{c.instructions+=5;NFSU2_TR(0x5499df);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5499e2:{NFSU2_TR(0x5499e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5499e8:{NFSU2_TR(0x5499e8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5499e9:{NFSU2_TR(0x5499e9);
__builtin_memmove((R+4),(R+24),4);
}
B5499eb:{NFSU2_TR(0x5499eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5499f0ull));
TAIL_STATIC(0x5445a0u,544);
}
B5499f0:L5499f0:{c.instructions+=6;NFSU2_TR(0x5499f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5499f3:{NFSU2_TR(0x5499f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5499f6:{NFSU2_TR(0x5499f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5499f8:{NFSU2_TR(0x5499f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5499fb:{NFSU2_TR(0x5499fb);
w4(R+8,u32(0x400000ull));
}
B549a00:{NFSU2_TR(0x549a00);
if(r1(R+518)){{goto L549a24;}}
}
B549a02:L549a02:{c.instructions+=3;NFSU2_TR(0x549a02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B549a04:{NFSU2_TR(0x549a04);
w4(R+4,u32(0x9943d584ull));
}
B549a09:{NFSU2_TR(0x549a09);
if(r1(R+518)){{goto L549a1b;}}
}
B549a0b:L549a0b:{c.instructions+=2;NFSU2_TR(0x549a0b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B549a0e:{NFSU2_TR(0x549a0e);
if(r1(R+518)){{goto L549a1b;}}
}
B549a10:L549a10:{c.instructions+=4;NFSU2_TR(0x549a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B549a13:{NFSU2_TR(0x549a13);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+8))));
}
B549a15:{NFSU2_TR(0x549a15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549a18:{NFSU2_TR(0x549a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549a1b:L549a1b:{c.instructions+=3;NFSU2_TR(0x549a1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549a1e:{NFSU2_TR(0x549a1e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B549a20:{NFSU2_TR(0x549a20);
if(r1(R+518)){{goto L549a51;}}
}
B549a22:L549a22:{c.instructions+=1;NFSU2_TR(0x549a22);
{goto L549a46;}
}
B549a24:L549a24:{c.instructions+=2;NFSU2_TR(0x549a24);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B549a26:{NFSU2_TR(0x549a26);
if(r1(R+518)){{goto L549a3a;}}
}
B549a28:L549a28:{c.instructions+=4;NFSU2_TR(0x549a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B549a2b:{NFSU2_TR(0x549a2b);
w4(R+4,u32(0x374f6465ull));
}
B549a30:{NFSU2_TR(0x549a30);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B549a32:{NFSU2_TR(0x549a32);
if(r1(R+518)){{goto L549a3a;}}
}
B549a34:L549a34:{c.instructions+=2;NFSU2_TR(0x549a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549a37:{NFSU2_TR(0x549a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B549a3a:L549a3a:{c.instructions+=3;NFSU2_TR(0x549a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549a3d:{NFSU2_TR(0x549a3d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B549a3f:{NFSU2_TR(0x549a3f);
if(r1(R+518)){{goto L549a51;}}
}
B549a41:L549a41:{c.instructions+=1;NFSU2_TR(0x549a41);
w4(R+4,u32(0x760bdc9dull));
}
B549a46:L549a46:{c.instructions+=2;NFSU2_TR(0x549a46);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B549a49:{NFSU2_TR(0x549a49);
if(r1(R+518)){{goto L549a51;}}
}
B549a4b:L549a4b:{c.instructions+=2;NFSU2_TR(0x549a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549a4e:{NFSU2_TR(0x549a4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B549a51:L549a51:{c.instructions+=22;NFSU2_TR(0x549a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B549a54:{NFSU2_TR(0x549a54);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B549a57:{NFSU2_TR(0x549a57);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B549a5a:{NFSU2_TR(0x549a5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B549a5c:{NFSU2_TR(0x549a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549a5f:{NFSU2_TR(0x549a5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B549a61:{NFSU2_TR(0x549a61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549a64:{NFSU2_TR(0x549a64);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B549a6a:{NFSU2_TR(0x549a6a);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B549a70:{NFSU2_TR(0x549a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549a76:{NFSU2_TR(0x549a76);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B549a77:{NFSU2_TR(0x549a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549a7d:{NFSU2_TR(0x549a7d);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B549a83:{NFSU2_TR(0x549a83);
__builtin_memmove((R+4),(R+28),4);
}
B549a85:{NFSU2_TR(0x549a85);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B549a8b:{NFSU2_TR(0x549a8b);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B549a91:{NFSU2_TR(0x549a91);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B549a97:{NFSU2_TR(0x549a97);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B549a9d:{NFSU2_TR(0x549a9d);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B549aa3:{NFSU2_TR(0x549aa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B549aa5:{NFSU2_TR(0x549aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xacull))));
w4(U+4,u32(0x40800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B549aaf:{NFSU2_TR(0x549aaf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549ab2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B549ab2:L549ab2:{c.instructions+=7;NFSU2_TR(0x549ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549ab5:{NFSU2_TR(0x549ab5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B549ab8:{NFSU2_TR(0x549ab8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549ab9:{NFSU2_TR(0x549ab9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+8),(U+0),4);
}
B549abc:{NFSU2_TR(0x549abc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549abd:{NFSU2_TR(0x549abd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549abe:{NFSU2_TR(0x549abe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549ac3ull));
TAIL_STATIC(0x51d730u,51d);
}
B549ac3:L549ac3:{c.instructions+=8;NFSU2_TR(0x549ac3);
{u32 ea_=u32(r4(R+28)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B549ac9:{NFSU2_TR(0x549ac9);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B549acb:{NFSU2_TR(0x549acb);
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
B549ace:{NFSU2_TR(0x549ace);
__builtin_memmove((R+4),(R+28),4);
}
B549ad0:{NFSU2_TR(0x549ad0);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B549ad3:{NFSU2_TR(0x549ad3);
{u32 ea_=u32(r4(R+28)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B549ad9:{NFSU2_TR(0x549ad9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B549adb:{NFSU2_TR(0x549adb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549adeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B549ade:L549ade:{c.instructions+=3;NFSU2_TR(0x549ade);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B549ae0:{NFSU2_TR(0x549ae0);
__builtin_memmove((R+4),(R+28),4);
}
B549ae2:{NFSU2_TR(0x549ae2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549ae5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B549ae5:L549ae5:{c.instructions+=7;NFSU2_TR(0x549ae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549ae8:{NFSU2_TR(0x549ae8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B549aeb:{NFSU2_TR(0x549aeb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549aec:{NFSU2_TR(0x549aec);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B549aef:{NFSU2_TR(0x549aef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549af0:{NFSU2_TR(0x549af0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549af1:{NFSU2_TR(0x549af1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549af6ull));
TAIL_STATIC(0x51d070u,51d);
}
B549af6:L549af6:{c.instructions+=7;NFSU2_TR(0x549af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549af9:{NFSU2_TR(0x549af9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B549afc:{NFSU2_TR(0x549afc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549afd:{NFSU2_TR(0x549afd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+8),(U+0),4);
}
B549b00:{NFSU2_TR(0x549b00);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b01:{NFSU2_TR(0x549b01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b02:{NFSU2_TR(0x549b02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549b07ull));
TAIL_STATIC(0x51d730u,51d);
}
B549b07:L549b07:{c.instructions+=17;NFSU2_TR(0x549b07);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B549b0a:{NFSU2_TR(0x549b0a);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B549b0d:{NFSU2_TR(0x549b0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549b10:{NFSU2_TR(0x549b10);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B549b13:{NFSU2_TR(0x549b13);
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B549b16:{NFSU2_TR(0x549b16);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B549b18:{NFSU2_TR(0x549b18);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B549b1a:{NFSU2_TR(0x549b1a);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B549b1d:{NFSU2_TR(0x549b1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549b23:{NFSU2_TR(0x549b23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B549b24:{NFSU2_TR(0x549b24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B549b25:{NFSU2_TR(0x549b25);
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
B549b26:{NFSU2_TR(0x549b26);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549b2d:{NFSU2_TR(0x549b2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B549b2e:{NFSU2_TR(0x549b2e);
__builtin_memmove((R+16),(R+20),4);
}
B549b30:{NFSU2_TR(0x549b30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B549b31:{NFSU2_TR(0x549b31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B549b40:L549b40:{c.instructions+=8;NFSU2_TR(0x549b40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b41:{NFSU2_TR(0x549b41);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b43:{NFSU2_TR(0x549b43);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b45:{NFSU2_TR(0x549b45);
u8 U[4];
w4(U+0,u32(0xe66708f3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b4a:{NFSU2_TR(0x549b4a);
u8 U[4];
w4(U+0,u32(0x26033125ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b4f:{NFSU2_TR(0x549b4f);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b51:{NFSU2_TR(0x549b51);
__builtin_memmove((R+24),(R+4),4);
}
B549b53:{NFSU2_TR(0x549b53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549b58ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549b58:L549b58:{c.instructions+=7;NFSU2_TR(0x549b58);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b5a:{NFSU2_TR(0x549b5a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b5c:{NFSU2_TR(0x549b5c);
u8 U[4];
w4(U+0,u32(0xe66708f3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b61:{NFSU2_TR(0x549b61);
u8 U[4];
w4(U+0,u32(0x26033125ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b66:{NFSU2_TR(0x549b66);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b68:{NFSU2_TR(0x549b68);
__builtin_memmove((R+4),(R+24),4);
}
B549b6a:{NFSU2_TR(0x549b6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549b6full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549b6f:L549b6f:{c.instructions+=7;NFSU2_TR(0x549b6f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b71:{NFSU2_TR(0x549b71);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b73:{NFSU2_TR(0x549b73);
u8 U[4];
w4(U+0,u32(0xe666e852ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b78:{NFSU2_TR(0x549b78);
u8 U[4];
w4(U+0,u32(0xe66d2a8full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b7d:{NFSU2_TR(0x549b7d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b7f:{NFSU2_TR(0x549b7f);
__builtin_memmove((R+4),(R+24),4);
}
B549b81:{NFSU2_TR(0x549b81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549b86ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549b86:L549b86:{c.instructions+=7;NFSU2_TR(0x549b86);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b88:{NFSU2_TR(0x549b88);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b8a:{NFSU2_TR(0x549b8a);
u8 U[4];
w4(U+0,u32(0xe666e852ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b8f:{NFSU2_TR(0x549b8f);
u8 U[4];
w4(U+0,u32(0xe66d2a8full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b94:{NFSU2_TR(0x549b94);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b96:{NFSU2_TR(0x549b96);
__builtin_memmove((R+4),(R+24),4);
}
B549b98:{NFSU2_TR(0x549b98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549b9dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549b9d:L549b9d:{c.instructions+=7;NFSU2_TR(0x549b9d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549b9f:{NFSU2_TR(0x549b9f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549ba1:{NFSU2_TR(0x549ba1);
u8 U[4];
w4(U+0,u32(0xe666e852ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549ba6:{NFSU2_TR(0x549ba6);
u8 U[4];
w4(U+0,u32(0xe66d2a8full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549bab:{NFSU2_TR(0x549bab);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549bad:{NFSU2_TR(0x549bad);
__builtin_memmove((R+4),(R+24),4);
}
B549baf:{NFSU2_TR(0x549baf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549bb4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549bb4:L549bb4:{c.instructions+=7;NFSU2_TR(0x549bb4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549bb6:{NFSU2_TR(0x549bb6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549bb8:{NFSU2_TR(0x549bb8);
u8 U[4];
w4(U+0,u32(0xe666e852ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549bbd:{NFSU2_TR(0x549bbd);
u8 U[4];
w4(U+0,u32(0xe66d2a8full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549bc2:{NFSU2_TR(0x549bc2);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549bc4:{NFSU2_TR(0x549bc4);
__builtin_memmove((R+4),(R+24),4);
}
B549bc6:{NFSU2_TR(0x549bc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549bcbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549bcb:L549bcb:{c.instructions+=7;NFSU2_TR(0x549bcb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549bcd:{NFSU2_TR(0x549bcd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549bcf:{NFSU2_TR(0x549bcf);
u8 U[4];
w4(U+0,u32(0xe666e852ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549bd4:{NFSU2_TR(0x549bd4);
u8 U[4];
w4(U+0,u32(0xe66d2a8full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549bd9:{NFSU2_TR(0x549bd9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549bdb:{NFSU2_TR(0x549bdb);
__builtin_memmove((R+4),(R+24),4);
}
B549bdd:{NFSU2_TR(0x549bdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549be2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549be2:L549be2:{c.instructions+=7;NFSU2_TR(0x549be2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549be4:{NFSU2_TR(0x549be4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549be6:{NFSU2_TR(0x549be6);
u8 U[4];
w4(U+0,u32(0xe666e852ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549beb:{NFSU2_TR(0x549beb);
u8 U[4];
w4(U+0,u32(0xe66d2a8full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549bf0:{NFSU2_TR(0x549bf0);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549bf2:{NFSU2_TR(0x549bf2);
__builtin_memmove((R+4),(R+24),4);
}
B549bf4:{NFSU2_TR(0x549bf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549bf9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549bf9:L549bf9:{c.instructions+=7;NFSU2_TR(0x549bf9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549bfb:{NFSU2_TR(0x549bfb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549bfd:{NFSU2_TR(0x549bfd);
u8 U[4];
w4(U+0,u32(0xe669e1c6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c02:{NFSU2_TR(0x549c02);
u8 U[4];
w4(U+0,u32(0xe6692b0aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c07:{NFSU2_TR(0x549c07);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c09:{NFSU2_TR(0x549c09);
__builtin_memmove((R+4),(R+24),4);
}
B549c0b:{NFSU2_TR(0x549c0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549c10ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549c10:L549c10:{c.instructions+=2;NFSU2_TR(0x549c10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B549c11:{NFSU2_TR(0x549c11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B549c20:L549c20:{c.instructions+=9;NFSU2_TR(0x549c20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c21:{NFSU2_TR(0x549c21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c22:{NFSU2_TR(0x549c22);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c24:{NFSU2_TR(0x549c24);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c26:{NFSU2_TR(0x549c26);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c28:{NFSU2_TR(0x549c28);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c2a:{NFSU2_TR(0x549c2a);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c2c:{NFSU2_TR(0x549c2c);
__builtin_memmove((R+24),(R+4),4);
}
B549c2e:{NFSU2_TR(0x549c2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549c33ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549c33:L549c33:{c.instructions+=7;NFSU2_TR(0x549c33);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c35:{NFSU2_TR(0x549c35);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c37:{NFSU2_TR(0x549c37);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c39:{NFSU2_TR(0x549c39);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c3b:{NFSU2_TR(0x549c3b);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c3d:{NFSU2_TR(0x549c3d);
__builtin_memmove((R+4),(R+24),4);
}
B549c3f:{NFSU2_TR(0x549c3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549c44ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549c44:L549c44:{c.instructions+=7;NFSU2_TR(0x549c44);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c46:{NFSU2_TR(0x549c46);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c48:{NFSU2_TR(0x549c48);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c4a:{NFSU2_TR(0x549c4a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c4c:{NFSU2_TR(0x549c4c);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c4e:{NFSU2_TR(0x549c4e);
__builtin_memmove((R+4),(R+24),4);
}
B549c50:{NFSU2_TR(0x549c50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549c55ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549c55:L549c55:{c.instructions+=7;NFSU2_TR(0x549c55);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c57:{NFSU2_TR(0x549c57);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c59:{NFSU2_TR(0x549c59);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c5b:{NFSU2_TR(0x549c5b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c5d:{NFSU2_TR(0x549c5d);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c5f:{NFSU2_TR(0x549c5f);
__builtin_memmove((R+4),(R+24),4);
}
B549c61:{NFSU2_TR(0x549c61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549c66ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549c66:L549c66:{c.instructions+=7;NFSU2_TR(0x549c66);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c68:{NFSU2_TR(0x549c68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c6a:{NFSU2_TR(0x549c6a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c6c:{NFSU2_TR(0x549c6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c6e:{NFSU2_TR(0x549c6e);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c70:{NFSU2_TR(0x549c70);
__builtin_memmove((R+4),(R+24),4);
}
B549c72:{NFSU2_TR(0x549c72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549c77ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549c77:L549c77:{c.instructions+=7;NFSU2_TR(0x549c77);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c79:{NFSU2_TR(0x549c79);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c7b:{NFSU2_TR(0x549c7b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c7d:{NFSU2_TR(0x549c7d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c7f:{NFSU2_TR(0x549c7f);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c81:{NFSU2_TR(0x549c81);
__builtin_memmove((R+4),(R+24),4);
}
B549c83:{NFSU2_TR(0x549c83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549c88ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549c88:L549c88:{c.instructions+=9;NFSU2_TR(0x549c88);
__builtin_memmove((R+8),gp(0x83aa1a),1);
}
B549c8e:{NFSU2_TR(0x549c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549c91:{NFSU2_TR(0x549c91);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c93:{NFSU2_TR(0x549c93);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549c98:{NFSU2_TR(0x549c98);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B549c9b:{NFSU2_TR(0x549c9b);
u8 U[4];
w4(U+0,u32(0xaea3c019ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549ca0:{NFSU2_TR(0x549ca0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549ca1:{NFSU2_TR(0x549ca1);
__builtin_memmove((R+12),(R+518),1);
}
B549ca4:{NFSU2_TR(0x549ca4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549ca9ull));
TAIL_STATIC(0x537b80u,537);
}
B549ca9:L549ca9:{c.instructions+=11;NFSU2_TR(0x549ca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B549cac:{NFSU2_TR(0x549cac);
__builtin_memmove((R+4),(R+12),1);
}
B549cae:{NFSU2_TR(0x549cae);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B549cb0:{NFSU2_TR(0x549cb0);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B549cb2:{NFSU2_TR(0x549cb2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x19ull))));
}
B549cb5:{NFSU2_TR(0x549cb5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x23ull))));
}
B549cb8:{NFSU2_TR(0x549cb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549cb9:{NFSU2_TR(0x549cb9);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549cbe:{NFSU2_TR(0x549cbe);
u8 U[4];
w4(U+0,u32(0xaea3c01aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549cc3:{NFSU2_TR(0x549cc3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549cc4:{NFSU2_TR(0x549cc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549cc9ull));
TAIL_STATIC(0x537b80u,537);
}
B549cc9:L549cc9:{c.instructions+=11;NFSU2_TR(0x549cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549ccc:{NFSU2_TR(0x549ccc);
__builtin_memmove((R+0),(R+12),1);
}
B549cce:{NFSU2_TR(0x549cce);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B549cd0:{NFSU2_TR(0x549cd0);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B549cd2:{NFSU2_TR(0x549cd2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x32ull))));
}
B549cd5:{NFSU2_TR(0x549cd5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x46ull))));
}
B549cd8:{NFSU2_TR(0x549cd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549cd9:{NFSU2_TR(0x549cd9);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549cde:{NFSU2_TR(0x549cde);
u8 U[4];
w4(U+0,u32(0xaea3c01bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549ce3:{NFSU2_TR(0x549ce3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549ce4:{NFSU2_TR(0x549ce4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549ce9ull));
TAIL_STATIC(0x537b80u,537);
}
B549ce9:L549ce9:{c.instructions+=11;NFSU2_TR(0x549ce9);
__builtin_memmove((R+8),(R+12),1);
}
B549ceb:{NFSU2_TR(0x549ceb);
w1(R+512,u8((r1(R+8))!=(u8(0x0ull))));
w1(R+8,u8(0-u32(r1(R+8))));
}
B549ced:{NFSU2_TR(0x549ced);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B549cef:{NFSU2_TR(0x549cef);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x4bull))));
}
B549cf2:{NFSU2_TR(0x549cf2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x69ull))));
}
B549cf5:{NFSU2_TR(0x549cf5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549cf6:{NFSU2_TR(0x549cf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549cf9:{NFSU2_TR(0x549cf9);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549cfe:{NFSU2_TR(0x549cfe);
u8 U[4];
w4(U+0,u32(0xaea3c01cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549d03:{NFSU2_TR(0x549d03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549d04:{NFSU2_TR(0x549d04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549d09ull));
TAIL_STATIC(0x537b80u,537);
}
B549d09:L549d09:{c.instructions+=12;NFSU2_TR(0x549d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B549d0c:{NFSU2_TR(0x549d0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B549d0f:{NFSU2_TR(0x549d0f);
__builtin_memmove((R+4),(R+12),1);
}
B549d11:{NFSU2_TR(0x549d11);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B549d13:{NFSU2_TR(0x549d13);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B549d15:{NFSU2_TR(0x549d15);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x64ull))));
}
B549d18:{NFSU2_TR(0x549d18);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8cull))));
}
B549d1e:{NFSU2_TR(0x549d1e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549d1f:{NFSU2_TR(0x549d1f);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549d24:{NFSU2_TR(0x549d24);
u8 U[4];
w4(U+0,u32(0xaea3c01dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549d29:{NFSU2_TR(0x549d29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549d2a:{NFSU2_TR(0x549d2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549d2full));
TAIL_STATIC(0x537b80u,537);
}
B549d2f:L549d2f:{c.instructions+=11;NFSU2_TR(0x549d2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549d32:{NFSU2_TR(0x549d32);
__builtin_memmove((R+0),(R+12),1);
}
B549d34:{NFSU2_TR(0x549d34);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B549d36:{NFSU2_TR(0x549d36);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B549d38:{NFSU2_TR(0x549d38);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7dull))));
}
B549d3b:{NFSU2_TR(0x549d3b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xafull))));
}
B549d40:{NFSU2_TR(0x549d40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549d41:{NFSU2_TR(0x549d41);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549d46:{NFSU2_TR(0x549d46);
u8 U[4];
w4(U+0,u32(0xaea3c01eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549d4b:{NFSU2_TR(0x549d4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549d4c:{NFSU2_TR(0x549d4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549d51ull));
TAIL_STATIC(0x537b80u,537);
}
B549d51:L549d51:{c.instructions+=11;NFSU2_TR(0x549d51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549d54:{NFSU2_TR(0x549d54);
__builtin_memmove((R+8),(R+12),1);
}
B549d56:{NFSU2_TR(0x549d56);
w1(R+512,u8((r1(R+8))!=(u8(0x0ull))));
w1(R+8,u8(0-u32(r1(R+8))));
}
B549d58:{NFSU2_TR(0x549d58);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B549d5a:{NFSU2_TR(0x549d5a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x96ull))));
}
B549d60:{NFSU2_TR(0x549d60);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xd2ull))));
}
B549d66:{NFSU2_TR(0x549d66);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549d67:{NFSU2_TR(0x549d67);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549d6c:{NFSU2_TR(0x549d6c);
u8 U[4];
w4(U+0,u32(0xaea3c01full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549d71:{NFSU2_TR(0x549d71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549d72:{NFSU2_TR(0x549d72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549d77ull));
TAIL_STATIC(0x537b80u,537);
}
B549d77:L549d77:{c.instructions+=10;NFSU2_TR(0x549d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549d7a:{NFSU2_TR(0x549d7a);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B549d7c:{NFSU2_TR(0x549d7c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+12))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B549d7e:{NFSU2_TR(0x549d7e);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xafull))));
}
B549d84:{NFSU2_TR(0x549d84);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xf5ull))));
}
B549d8a:{NFSU2_TR(0x549d8a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549d8b:{NFSU2_TR(0x549d8b);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549d90:{NFSU2_TR(0x549d90);
u8 U[4];
w4(U+0,u32(0xaea3c020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549d95:{NFSU2_TR(0x549d95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549d96:{NFSU2_TR(0x549d96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549d9bull));
TAIL_STATIC(0x537b80u,537);
}
B549d9b:L549d9b:{c.instructions+=8;NFSU2_TR(0x549d9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B549d9e:{NFSU2_TR(0x549d9e);
u8 U[4];
w4(U+0,u32(0x41200000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549da3:{NFSU2_TR(0x549da3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549da5:{NFSU2_TR(0x549da5);
u8 U[4];
w4(U+0,u32(0x95a7073dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549daa:{NFSU2_TR(0x549daa);
u8 U[4];
w4(U+0,u32(0xcebfaa36ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549daf:{NFSU2_TR(0x549daf);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549db1:{NFSU2_TR(0x549db1);
__builtin_memmove((R+4),(R+24),4);
}
B549db3:{NFSU2_TR(0x549db3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549db8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549db8:L549db8:{c.instructions+=3;NFSU2_TR(0x549db8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B549db9:{NFSU2_TR(0x549db9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B549dba:{NFSU2_TR(0x549dba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B549dc0:L549dc0:{c.instructions+=8;NFSU2_TR(0x549dc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549dc1:{NFSU2_TR(0x549dc1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549dc3:{NFSU2_TR(0x549dc3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549dc5:{NFSU2_TR(0x549dc5);
u8 U[4];
w4(U+0,u32(0x36c30e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549dca:{NFSU2_TR(0x549dca);
u8 U[4];
w4(U+0,u32(0xe66f30dbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549dcf:{NFSU2_TR(0x549dcf);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549dd1:{NFSU2_TR(0x549dd1);
__builtin_memmove((R+24),(R+4),4);
}
B549dd3:{NFSU2_TR(0x549dd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549dd8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549dd8:L549dd8:{c.instructions+=7;NFSU2_TR(0x549dd8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549dda:{NFSU2_TR(0x549dda);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549ddc:{NFSU2_TR(0x549ddc);
u8 U[4];
w4(U+0,u32(0x36c30e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549de1:{NFSU2_TR(0x549de1);
u8 U[4];
w4(U+0,u32(0xe66f30dbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549de6:{NFSU2_TR(0x549de6);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549de8:{NFSU2_TR(0x549de8);
__builtin_memmove((R+4),(R+24),4);
}
B549dea:{NFSU2_TR(0x549dea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549defull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549def:L549def:{c.instructions+=2;NFSU2_TR(0x549def);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B549df0:{NFSU2_TR(0x549df0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B549e00:L549e00:{c.instructions+=8;NFSU2_TR(0x549e00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549e01:{NFSU2_TR(0x549e01);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549e03:{NFSU2_TR(0x549e03);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549e05:{NFSU2_TR(0x549e05);
u8 U[4];
w4(U+0,u32(0x36c30e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549e0a:{NFSU2_TR(0x549e0a);
u8 U[4];
w4(U+0,u32(0xe66f30dbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549e0f:{NFSU2_TR(0x549e0f);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549e11:{NFSU2_TR(0x549e11);
__builtin_memmove((R+24),(R+4),4);
}
B549e13:{NFSU2_TR(0x549e13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549e18ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549e18:L549e18:{c.instructions+=7;NFSU2_TR(0x549e18);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549e1a:{NFSU2_TR(0x549e1a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549e1c:{NFSU2_TR(0x549e1c);
u8 U[4];
w4(U+0,u32(0x36c30e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549e21:{NFSU2_TR(0x549e21);
u8 U[4];
w4(U+0,u32(0xe66f30dbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549e26:{NFSU2_TR(0x549e26);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549e28:{NFSU2_TR(0x549e28);
__builtin_memmove((R+4),(R+24),4);
}
B549e2a:{NFSU2_TR(0x549e2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549e2full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549e2f:L549e2f:{c.instructions+=7;NFSU2_TR(0x549e2f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549e31:{NFSU2_TR(0x549e31);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549e33:{NFSU2_TR(0x549e33);
u8 U[4];
w4(U+0,u32(0x2cbdc28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549e38:{NFSU2_TR(0x549e38);
u8 U[4];
w4(U+0,u32(0x1c0cc9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549e3d:{NFSU2_TR(0x549e3d);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549e3f:{NFSU2_TR(0x549e3f);
__builtin_memmove((R+4),(R+24),4);
}
B549e41:{NFSU2_TR(0x549e41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549e46ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x549850u);}goto L549850;}
}
B549e46:L549e46:{c.instructions+=2;NFSU2_TR(0x549e46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B549e47:{NFSU2_TR(0x549e47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B549e50:L549e50:{c.instructions+=6;NFSU2_TR(0x549e50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B549e53:{NFSU2_TR(0x549e53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549e54:{NFSU2_TR(0x549e54);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549e55:{NFSU2_TR(0x549e55);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549e57:{NFSU2_TR(0x549e57);
__builtin_memmove((R+24),(R+4),4);
}
B549e59:{NFSU2_TR(0x549e59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549e5eull));
TAIL_STATIC(0x575620u,575);
}
B549e5e:L549e5e:{c.instructions+=4;NFSU2_TR(0x549e5e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B549e60:{NFSU2_TR(0x549e60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B549e63:{NFSU2_TR(0x549e63);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B549e65:{NFSU2_TR(0x549e65);
if(r1(R+518)){{goto L549e9d;}}
}
B549e67:L549e67:{c.instructions+=15;NFSU2_TR(0x549e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549e6a:{NFSU2_TR(0x549e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549e6d:{NFSU2_TR(0x549e6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549e70:{NFSU2_TR(0x549e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549e73:{NFSU2_TR(0x549e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x79ac30ull));
s4(u32(r4(U+0)),r4(U+4));
}
B549e7a:{NFSU2_TR(0x549e7a);
w4(R+4,u32(0x3f800000ull));
}
B549e7f:{NFSU2_TR(0x549e7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549e82:{NFSU2_TR(0x549e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549e85:{NFSU2_TR(0x549e85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549e88:{NFSU2_TR(0x549e88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549e8b:{NFSU2_TR(0x549e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549e8e:{NFSU2_TR(0x549e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x79ac34ull));
s4(u32(r4(U+0)),r4(U+4));
}
B549e95:{NFSU2_TR(0x549e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549e98:{NFSU2_TR(0x549e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549e9b:{NFSU2_TR(0x549e9b);
__builtin_memmove((R+28),(R+0),4);
}
B549e9d:L549e9d:{c.instructions+=15;NFSU2_TR(0x549e9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549ea0:{NFSU2_TR(0x549ea0);
{u32 ea_=u32(u32(7967632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B549ea6:{NFSU2_TR(0x549ea6);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B549ea9:{NFSU2_TR(0x549ea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549eac:{NFSU2_TR(0x549eac);
__builtin_memmove((R+8),gp(0x8637c4),4);
}
B549eb2:{NFSU2_TR(0x549eb2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549eb3:{NFSU2_TR(0x549eb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549eb7:{NFSU2_TR(0x549eb7);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B549eba:{NFSU2_TR(0x549eba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549ebd:{NFSU2_TR(0x549ebd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549ebe:{NFSU2_TR(0x549ebe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549ebf:{NFSU2_TR(0x549ebf);
u8 U[4];
w4(U+0,u32(0x79c5e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549ec4:{NFSU2_TR(0x549ec4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549ec8:{NFSU2_TR(0x549ec8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549ecc:{NFSU2_TR(0x549ecc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549ed1ull));
TAIL_STATIC(0x50b990u,50b);
}
B549ed1:L549ed1:{c.instructions+=5;NFSU2_TR(0x549ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549ed4:{NFSU2_TR(0x549ed4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549ed5:{NFSU2_TR(0x549ed5);
u8 U[4];
w4(U+0,u32(0x79c5d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549eda:{NFSU2_TR(0x549eda);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549ede:{NFSU2_TR(0x549ede);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549ee3ull));
TAIL_STATIC(0x50b990u,50b);
}
B549ee3:L549ee3:{c.instructions+=5;NFSU2_TR(0x549ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B549ee6:{NFSU2_TR(0x549ee6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549ee7:{NFSU2_TR(0x549ee7);
u8 U[4];
w4(U+0,u32(0x79c5c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549eec:{NFSU2_TR(0x549eec);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549ef0:{NFSU2_TR(0x549ef0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549ef5ull));
TAIL_STATIC(0x50b990u,50b);
}
B549ef5:L549ef5:{c.instructions+=5;NFSU2_TR(0x549ef5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549ef9:{NFSU2_TR(0x549ef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549efc:{NFSU2_TR(0x549efc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549efd:{NFSU2_TR(0x549efd);
u8 U[4];
w4(U+0,u32(0x79c5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549f02:{NFSU2_TR(0x549f02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549f07ull));
TAIL_STATIC(0x50b990u,50b);
}
B549f07:L549f07:{c.instructions+=7;NFSU2_TR(0x549f07);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B549f0b:{NFSU2_TR(0x549f0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B549f0e:{NFSU2_TR(0x549f0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549f0f:{NFSU2_TR(0x549f0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((R+12),(U+0),4);
}
B549f12:{NFSU2_TR(0x549f12);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549f13:{NFSU2_TR(0x549f13);
__builtin_memmove((R+4),(R+12),4);
}
B549f15:{NFSU2_TR(0x549f15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549f1aull));
TAIL_STATIC(0x53ce40u,53c);
}
B549f1a:L549f1a:{c.instructions+=5;NFSU2_TR(0x549f1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549f1e:{NFSU2_TR(0x549f1e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549f1f:{NFSU2_TR(0x549f1f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549f20:{NFSU2_TR(0x549f20);
__builtin_memmove((R+4),(R+12),4);
}
B549f22:{NFSU2_TR(0x549f22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549f27ull));
TAIL_STATIC(0x53cea0u,53c);
}
B549f27:L549f27:{c.instructions+=5;NFSU2_TR(0x549f27);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B549f2b:{NFSU2_TR(0x549f2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549f2c:{NFSU2_TR(0x549f2c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549f2d:{NFSU2_TR(0x549f2d);
__builtin_memmove((R+4),(R+12),4);
}
B549f2f:{NFSU2_TR(0x549f2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549f34ull));
TAIL_STATIC(0x53cf00u,53c);
}
B549f34:L549f34:{c.instructions+=5;NFSU2_TR(0x549f34);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549f38:{NFSU2_TR(0x549f38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549f39:{NFSU2_TR(0x549f39);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549f3a:{NFSU2_TR(0x549f3a);
__builtin_memmove((R+4),(R+12),4);
}
B549f3c:{NFSU2_TR(0x549f3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549f41ull));
TAIL_STATIC(0x53cf60u,53c);
}
B549f41:L549f41:{c.instructions+=42;NFSU2_TR(0x549f41);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B549f44:{NFSU2_TR(0x549f44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549f47:{NFSU2_TR(0x549f47);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B549f4a:{NFSU2_TR(0x549f4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B549f4e:{NFSU2_TR(0x549f4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549f52:{NFSU2_TR(0x549f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549f55:{NFSU2_TR(0x549f55);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549f59:{NFSU2_TR(0x549f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549f5c:{NFSU2_TR(0x549f5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549f60:{NFSU2_TR(0x549f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549f63:{NFSU2_TR(0x549f63);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B549f66:{NFSU2_TR(0x549f66);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B549f69:{NFSU2_TR(0x549f69);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B549f6d:{NFSU2_TR(0x549f6d);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B549f70:{NFSU2_TR(0x549f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549f73:{NFSU2_TR(0x549f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549f76:{NFSU2_TR(0x549f76);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B549f79:{NFSU2_TR(0x549f79);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549f7c:{NFSU2_TR(0x549f7c);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B549f80:{NFSU2_TR(0x549f80);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B549f83:{NFSU2_TR(0x549f83);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B549f87:{NFSU2_TR(0x549f87);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B549f8d:{NFSU2_TR(0x549f8d);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B549f90:{NFSU2_TR(0x549f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549f93:{NFSU2_TR(0x549f93);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B549f95:{NFSU2_TR(0x549f95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549f98:{NFSU2_TR(0x549f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549f9b:{NFSU2_TR(0x549f9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B549f9d:{NFSU2_TR(0x549f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549fa0:{NFSU2_TR(0x549fa0);
{u32 ea_=u32(u32(8796100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B549fa6:{NFSU2_TR(0x549fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549fa9:{NFSU2_TR(0x549fa9);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B549fac:{NFSU2_TR(0x549fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B549faf:{NFSU2_TR(0x549faf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B549fb2:{NFSU2_TR(0x549fb2);
{u32 ea_=u32(u32(7967632u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B549fb8:{NFSU2_TR(0x549fb8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B549fb9:{NFSU2_TR(0x549fb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B549fbb:{NFSU2_TR(0x549fbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B549fbc:{NFSU2_TR(0x549fbc);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B549fbf:{NFSU2_TR(0x549fbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549fc2:{NFSU2_TR(0x549fc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B549fc3:{NFSU2_TR(0x549fc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L549fc8;}}
}
B549fc5:L549fc5:{c.instructions+=1;NFSU2_TR(0x549fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549fc8:L549fc8:{c.instructions+=4;NFSU2_TR(0x549fc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B549fc9:{NFSU2_TR(0x549fc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B549fca:{NFSU2_TR(0x549fca);
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
B549fcd:{NFSU2_TR(0x549fcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B549fd0:L549fd0:{c.instructions+=12;NFSU2_TR(0x549fd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549fd1:{NFSU2_TR(0x549fd1);
__builtin_memmove((R+20),(R+16),4);
}
B549fd3:{NFSU2_TR(0x549fd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B549fd6:{NFSU2_TR(0x549fd6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549fd7:{NFSU2_TR(0x549fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B549fda:{NFSU2_TR(0x549fda);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549fdb:{NFSU2_TR(0x549fdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549fdc:{NFSU2_TR(0x549fdc);
u8 U[4];
w4(U+0,u32(0x3389f685ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549fe1:{NFSU2_TR(0x549fe1);
u8 U[4];
w4(U+0,u32(0x83841a5eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549fe6:{NFSU2_TR(0x549fe6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549fe7:{NFSU2_TR(0x549fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B549fea:{NFSU2_TR(0x549fea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549fefull));
TAIL_STATIC(0x495460u,495);
}
B549fef:L549fef:{c.instructions+=4;NFSU2_TR(0x549fef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B549ff2:{NFSU2_TR(0x549ff2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B549ff4:{NFSU2_TR(0x549ff4);
w4(R+4,u32(0x839c60ull));
}
B549ff9:{NFSU2_TR(0x549ff9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x549ffeull));
TAIL_STATIC(0x5b5350u,5b5);
}
B549ffe:L549ffe:{c.instructions+=1;NFSU2_TR(0x549ffe);
{u32 ea_=u32(r4(R+0)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x54a004u,54a);
}
XIT:NFSU2_TR_EXIT(0x549,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
