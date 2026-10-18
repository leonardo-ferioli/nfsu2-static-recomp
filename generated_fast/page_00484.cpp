#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45a(u8* __restrict R,Cpu& c);
u32 body_45f(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_46c(u8* __restrict R,Cpu& c);
u32 body_46f(u8* __restrict R,Cpu& c);
u32 body_47b(u8* __restrict R,Cpu& c);
u32 body_482(u8* __restrict R,Cpu& c);
u32 body_485(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_722(u8* __restrict R,Cpu& c);
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x484,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x484,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_484(u8* __restrict R,Cpu& c);
u32 page_484(Cpu& c){return body_484(c.regs.data(),c);}
__attribute__((noinline)) u32 body_484(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x484002:goto L484002;
case 0x484004:goto L484004;
case 0x484009:c.instructions+=2;goto B484009;
case 0x48400b:c.instructions+=1;goto B48400b;
case 0x48400d:goto L48400d;
case 0x484014:c.instructions+=3;goto B484014;
case 0x484015:c.instructions+=2;goto B484015;
case 0x48401b:c.instructions+=1;goto B48401b;
case 0x484020:goto L484020;
case 0x484021:c.instructions+=1;goto B484021;
case 0x484026:goto L484026;
case 0x484029:goto L484029;
case 0x48402f:c.instructions+=2;goto B48402f;
case 0x484031:c.instructions+=1;goto B484031;
case 0x484033:goto L484033;
case 0x484034:c.instructions+=1;goto B484034;
case 0x484039:goto L484039;
case 0x484040:c.instructions+=8;goto B484040;
case 0x484041:c.instructions+=7;goto B484041;
case 0x484046:c.instructions+=6;goto B484046;
case 0x484047:c.instructions+=5;goto B484047;
case 0x484049:c.instructions+=4;goto B484049;
case 0x48404a:c.instructions+=3;goto B48404a;
case 0x48404b:c.instructions+=2;goto B48404b;
case 0x484052:c.instructions+=1;goto B484052;
case 0x484057:goto L484057;
case 0x48405a:goto L48405a;
case 0x48405b:c.instructions+=3;goto B48405b;
case 0x48405c:c.instructions+=2;goto B48405c;
case 0x48405d:c.instructions+=1;goto B48405d;
case 0x484060:goto L484060;
case 0x484061:c.instructions+=16;goto B484061;
case 0x484065:c.instructions+=15;goto B484065;
case 0x484068:c.instructions+=14;goto B484068;
case 0x484069:c.instructions+=13;goto B484069;
case 0x48406b:c.instructions+=12;goto B48406b;
case 0x48406c:c.instructions+=11;goto B48406c;
case 0x48406d:c.instructions+=10;goto B48406d;
case 0x48406f:c.instructions+=9;goto B48406f;
case 0x484072:c.instructions+=8;goto B484072;
case 0x484074:c.instructions+=7;goto B484074;
case 0x484078:c.instructions+=6;goto B484078;
case 0x484079:c.instructions+=5;goto B484079;
case 0x48407b:c.instructions+=4;goto B48407b;
case 0x48407f:c.instructions+=3;goto B48407f;
case 0x484083:c.instructions+=2;goto B484083;
case 0x484085:c.instructions+=1;goto B484085;
case 0x484088:goto L484088;
case 0x48408a:c.instructions+=1;goto B48408a;
case 0x48408c:goto L48408c;
case 0x48408e:c.instructions+=1;goto B48408e;
case 0x484090:goto L484090;
case 0x484093:c.instructions+=2;goto B484093;
case 0x484097:c.instructions+=1;goto B484097;
case 0x484099:goto L484099;
case 0x48409b:c.instructions+=4;goto B48409b;
case 0x48409d:c.instructions+=3;goto B48409d;
case 0x48409e:c.instructions+=2;goto B48409e;
case 0x4840a1:c.instructions+=1;goto B4840a1;
case 0x4840a4:goto L4840a4;
case 0x4840a6:c.instructions+=1;goto B4840a6;
case 0x4840a8:goto L4840a8;
case 0x4840aa:c.instructions+=2;goto B4840aa;
case 0x4840ac:c.instructions+=1;goto B4840ac;
case 0x4840af:goto L4840af;
case 0x4840b1:c.instructions+=1;goto B4840b1;
case 0x4840b3:goto L4840b3;
case 0x4840b4:c.instructions+=6;goto B4840b4;
case 0x4840b5:c.instructions+=5;goto B4840b5;
case 0x4840b6:c.instructions+=4;goto B4840b6;
case 0x4840b9:c.instructions+=3;goto B4840b9;
case 0x4840ba:c.instructions+=2;goto B4840ba;
case 0x4840bb:c.instructions+=1;goto B4840bb;
case 0x4840be:goto L4840be;
case 0x4840c1:c.instructions+=8;goto B4840c1;
case 0x4840c4:c.instructions+=7;goto B4840c4;
case 0x4840c7:c.instructions+=6;goto B4840c7;
case 0x4840cb:c.instructions+=5;goto B4840cb;
case 0x4840cf:c.instructions+=4;goto B4840cf;
case 0x4840d1:c.instructions+=3;goto B4840d1;
case 0x4840d9:c.instructions+=2;goto B4840d9;
case 0x4840de:c.instructions+=1;goto B4840de;
case 0x4840e4:goto L4840e4;
case 0x4840e6:c.instructions+=2;goto B4840e6;
case 0x4840e8:c.instructions+=1;goto B4840e8;
case 0x4840ed:goto L4840ed;
case 0x4840f0:c.instructions+=4;goto B4840f0;
case 0x4840f3:c.instructions+=3;goto B4840f3;
case 0x4840f4:c.instructions+=2;goto B4840f4;
case 0x4840f6:c.instructions+=1;goto B4840f6;
case 0x4840fb:goto L4840fb;
case 0x4840fe:c.instructions+=3;goto B4840fe;
case 0x484102:c.instructions+=2;goto B484102;
case 0x484105:c.instructions+=1;goto B484105;
case 0x484107:goto L484107;
case 0x48410a:c.instructions+=2;goto B48410a;
case 0x48410c:c.instructions+=1;goto B48410c;
case 0x484112:goto L484112;
case 0x484115:c.instructions+=5;goto B484115;
case 0x484116:c.instructions+=4;goto B484116;
case 0x48411c:c.instructions+=3;goto B48411c;
case 0x48411d:c.instructions+=2;goto B48411d;
case 0x484127:c.instructions+=1;goto B484127;
case 0x48412c:goto L48412c;
case 0x484132:c.instructions+=7;goto B484132;
case 0x484135:c.instructions+=6;goto B484135;
case 0x484136:c.instructions+=5;goto B484136;
case 0x484137:c.instructions+=4;goto B484137;
case 0x484139:c.instructions+=3;goto B484139;
case 0x48413a:c.instructions+=2;goto B48413a;
case 0x484140:c.instructions+=1;goto B484140;
case 0x484145:goto L484145;
case 0x484148:c.instructions+=4;goto B484148;
case 0x48414b:c.instructions+=3;goto B48414b;
case 0x48414e:c.instructions+=2;goto B48414e;
case 0x484152:c.instructions+=1;goto B484152;
case 0x484154:goto L484154;
case 0x484157:c.instructions+=6;goto B484157;
case 0x48415a:c.instructions+=5;goto B48415a;
case 0x48415b:c.instructions+=4;goto B48415b;
case 0x484161:c.instructions+=3;goto B484161;
case 0x484162:c.instructions+=2;goto B484162;
case 0x48416c:c.instructions+=1;goto B48416c;
case 0x484171:goto L484171;
case 0x484177:c.instructions+=7;goto B484177;
case 0x48417a:c.instructions+=6;goto B48417a;
case 0x48417b:c.instructions+=5;goto B48417b;
case 0x48417c:c.instructions+=4;goto B48417c;
case 0x48417e:c.instructions+=3;goto B48417e;
case 0x48417f:c.instructions+=2;goto B48417f;
case 0x484185:c.instructions+=1;goto B484185;
case 0x48418a:goto L48418a;
case 0x48418d:c.instructions+=3;goto B48418d;
case 0x484190:c.instructions+=2;goto B484190;
case 0x484193:c.instructions+=1;goto B484193;
case 0x484195:goto L484195;
case 0x48419a:c.instructions+=2;goto B48419a;
case 0x48419c:c.instructions+=1;goto B48419c;
case 0x4841a1:goto L4841a1;
case 0x4841a4:goto L4841a4;
case 0x4841a8:c.instructions+=6;goto B4841a8;
case 0x4841ab:c.instructions+=5;goto B4841ab;
case 0x4841ad:c.instructions+=4;goto B4841ad;
case 0x4841b3:c.instructions+=3;goto B4841b3;
case 0x4841b9:c.instructions+=2;goto B4841b9;
case 0x4841bd:c.instructions+=1;goto B4841bd;
case 0x4841bf:goto L4841bf;
case 0x4841c2:c.instructions+=1;goto B4841c2;
case 0x4841c4:goto L4841c4;
case 0x4841c7:c.instructions+=3;goto B4841c7;
case 0x4841cb:c.instructions+=2;goto B4841cb;
case 0x4841ce:c.instructions+=1;goto B4841ce;
case 0x4841d3:goto L4841d3;
case 0x4841d6:c.instructions+=1;goto B4841d6;
case 0x4841db:goto L4841db;
case 0x4841de:c.instructions+=7;goto B4841de;
case 0x4841e1:c.instructions+=6;goto B4841e1;
case 0x4841e2:c.instructions+=5;goto B4841e2;
case 0x4841e8:c.instructions+=4;goto B4841e8;
case 0x4841eb:c.instructions+=3;goto B4841eb;
case 0x4841ed:c.instructions+=2;goto B4841ed;
case 0x4841ee:c.instructions+=1;goto B4841ee;
case 0x4841f3:goto L4841f3;
case 0x4841f6:c.instructions+=1;goto B4841f6;
case 0x4841fb:goto L4841fb;
case 0x4841fe:c.instructions+=3;goto B4841fe;
case 0x484202:c.instructions+=2;goto B484202;
case 0x484205:c.instructions+=1;goto B484205;
case 0x48420a:goto L48420a;
case 0x48420d:c.instructions+=1;goto B48420d;
case 0x484212:goto L484212;
case 0x484215:c.instructions+=7;goto B484215;
case 0x484216:c.instructions+=6;goto B484216;
case 0x484219:c.instructions+=5;goto B484219;
case 0x48421f:c.instructions+=4;goto B48421f;
case 0x484222:c.instructions+=3;goto B484222;
case 0x484224:c.instructions+=2;goto B484224;
case 0x484225:c.instructions+=1;goto B484225;
case 0x48422a:goto L48422a;
case 0x48422d:c.instructions+=1;goto B48422d;
case 0x484232:goto L484232;
case 0x484237:c.instructions+=2;goto B484237;
case 0x48423a:c.instructions+=1;goto B48423a;
case 0x48423f:goto L48423f;
case 0x484242:c.instructions+=7;goto B484242;
case 0x484244:c.instructions+=6;goto B484244;
case 0x484245:c.instructions+=5;goto B484245;
case 0x484246:c.instructions+=4;goto B484246;
case 0x484247:c.instructions+=3;goto B484247;
case 0x484248:c.instructions+=2;goto B484248;
case 0x484249:c.instructions+=1;goto B484249;
case 0x484250:goto L484250;
case 0x484255:c.instructions+=6;goto B484255;
case 0x484256:c.instructions+=5;goto B484256;
case 0x484257:c.instructions+=4;goto B484257;
case 0x484258:c.instructions+=3;goto B484258;
case 0x484259:c.instructions+=2;goto B484259;
case 0x48425b:c.instructions+=1;goto B48425b;
case 0x484260:goto L484260;
case 0x484263:c.instructions+=2;goto B484263;
case 0x484268:c.instructions+=1;goto B484268;
case 0x48426a:goto L48426a;
case 0x484270:c.instructions+=5;goto B484270;
case 0x484273:c.instructions+=4;goto B484273;
case 0x484279:c.instructions+=3;goto B484279;
case 0x48427a:c.instructions+=2;goto B48427a;
case 0x48427c:c.instructions+=1;goto B48427c;
case 0x484281:goto L484281;
case 0x484284:c.instructions+=2;goto B484284;
case 0x484286:c.instructions+=1;goto B484286;
case 0x484288:goto L484288;
case 0x48428e:c.instructions+=1;goto B48428e;
case 0x484290:goto L484290;
case 0x484292:goto L484292;
case 0x484295:c.instructions+=3;goto B484295;
case 0x484298:c.instructions+=2;goto B484298;
case 0x48429a:c.instructions+=1;goto B48429a;
case 0x48429c:goto L48429c;
case 0x4842a1:c.instructions+=1;goto B4842a1;
case 0x4842a6:goto L4842a6;
case 0x4842a9:c.instructions+=2;goto B4842a9;
case 0x4842ab:c.instructions+=1;goto B4842ab;
case 0x4842ad:goto L4842ad;
case 0x4842b4:c.instructions+=4;goto B4842b4;
case 0x4842bb:c.instructions+=3;goto B4842bb;
case 0x4842c1:c.instructions+=2;goto B4842c1;
case 0x4842c3:c.instructions+=1;goto B4842c3;
case 0x4842c5:goto L4842c5;
case 0x4842c7:goto L4842c7;
case 0x4842ca:c.instructions+=4;goto B4842ca;
case 0x4842d0:c.instructions+=3;goto B4842d0;
case 0x4842d6:c.instructions+=2;goto B4842d6;
case 0x4842d7:c.instructions+=1;goto B4842d7;
case 0x4842dc:goto L4842dc;
case 0x4842df:c.instructions+=5;goto B4842df;
case 0x4842e1:c.instructions+=4;goto B4842e1;
case 0x4842e6:c.instructions+=3;goto B4842e6;
case 0x4842e8:c.instructions+=2;goto B4842e8;
case 0x4842ea:c.instructions+=1;goto B4842ea;
case 0x4842ef:goto L4842ef;
case 0x4842f1:c.instructions+=1;goto B4842f1;
case 0x4842f6:goto L4842f6;
case 0x4842f9:c.instructions+=2;goto B4842f9;
case 0x4842fb:c.instructions+=1;goto B4842fb;
case 0x4842fd:goto L4842fd;
case 0x4842ff:c.instructions+=2;goto B4842ff;
case 0x484302:c.instructions+=1;goto B484302;
case 0x484304:goto L484304;
case 0x484306:goto L484306;
case 0x484309:goto L484309;
case 0x48430d:c.instructions+=5;goto B48430d;
case 0x484313:c.instructions+=4;goto B484313;
case 0x484319:c.instructions+=3;goto B484319;
case 0x48431c:c.instructions+=2;goto B48431c;
case 0x48431f:c.instructions+=1;goto B48431f;
case 0x484321:goto L484321;
case 0x484328:goto L484328;
case 0x48432d:c.instructions+=1;goto B48432d;
case 0x48432f:goto L48432f;
case 0x484334:c.instructions+=1;goto B484334;
case 0x484336:goto L484336;
case 0x48433b:c.instructions+=1;goto B48433b;
case 0x48433d:goto L48433d;
case 0x484342:c.instructions+=1;goto B484342;
case 0x484344:goto L484344;
case 0x484349:c.instructions+=1;goto B484349;
case 0x48434b:goto L48434b;
case 0x48434d:goto L48434d;
case 0x48434f:c.instructions+=4;goto B48434f;
case 0x484352:c.instructions+=3;goto B484352;
case 0x484358:c.instructions+=2;goto B484358;
case 0x484359:c.instructions+=1;goto B484359;
case 0x48435e:goto L48435e;
case 0x484361:c.instructions+=2;goto B484361;
case 0x484363:c.instructions+=1;goto B484363;
case 0x484365:goto L484365;
case 0x48436b:c.instructions+=3;goto B48436b;
case 0x48436c:c.instructions+=2;goto B48436c;
case 0x48436e:c.instructions+=1;goto B48436e;
case 0x484373:goto L484373;
case 0x484376:c.instructions+=2;goto B484376;
case 0x484378:c.instructions+=1;goto B484378;
case 0x48437a:goto L48437a;
case 0x48437f:c.instructions+=2;goto B48437f;
case 0x484380:c.instructions+=1;goto B484380;
case 0x484385:goto L484385;
case 0x484388:c.instructions+=2;goto B484388;
case 0x48438a:c.instructions+=1;goto B48438a;
case 0x48438c:goto L48438c;
case 0x484391:goto L484391;
case 0x484394:c.instructions+=4;goto B484394;
case 0x484397:c.instructions+=3;goto B484397;
case 0x484398:c.instructions+=2;goto B484398;
case 0x484399:c.instructions+=1;goto B484399;
case 0x48439e:goto L48439e;
case 0x4843a1:c.instructions+=2;goto B4843a1;
case 0x4843a3:c.instructions+=1;goto B4843a3;
case 0x4843a5:goto L4843a5;
case 0x4843a8:c.instructions+=5;goto B4843a8;
case 0x4843ae:c.instructions+=4;goto B4843ae;
case 0x4843b1:c.instructions+=3;goto B4843b1;
case 0x4843b7:c.instructions+=2;goto B4843b7;
case 0x4843b8:c.instructions+=1;goto B4843b8;
case 0x4843bd:goto L4843bd;
case 0x4843c3:c.instructions+=4;goto B4843c3;
case 0x4843c4:c.instructions+=3;goto B4843c4;
case 0x4843c6:c.instructions+=2;goto B4843c6;
case 0x4843c8:c.instructions+=1;goto B4843c8;
case 0x4843cd:goto L4843cd;
case 0x4843d3:c.instructions+=3;goto B4843d3;
case 0x4843d6:c.instructions+=2;goto B4843d6;
case 0x4843d8:c.instructions+=1;goto B4843d8;
case 0x4843da:goto L4843da;
case 0x4843df:c.instructions+=5;goto B4843df;
case 0x4843e2:c.instructions+=4;goto B4843e2;
case 0x4843e7:c.instructions+=3;goto B4843e7;
case 0x4843e8:c.instructions+=2;goto B4843e8;
case 0x4843e9:c.instructions+=1;goto B4843e9;
case 0x4843ee:goto L4843ee;
case 0x4843f1:c.instructions+=1;goto B4843f1;
case 0x4843f3:goto L4843f3;
case 0x4843f9:c.instructions+=8;goto B4843f9;
case 0x4843fb:c.instructions+=7;goto B4843fb;
case 0x484400:c.instructions+=6;goto B484400;
case 0x484401:c.instructions+=5;goto B484401;
case 0x484403:c.instructions+=4;goto B484403;
case 0x484404:c.instructions+=3;goto B484404;
case 0x484405:c.instructions+=2;goto B484405;
case 0x48440b:c.instructions+=1;goto B48440b;
case 0x484410:goto L484410;
case 0x484416:c.instructions+=2;goto B484416;
case 0x484417:c.instructions+=1;goto B484417;
case 0x48441c:goto L48441c;
case 0x48441e:c.instructions+=4;goto B48441e;
case 0x484423:c.instructions+=3;goto B484423;
case 0x484424:c.instructions+=2;goto B484424;
case 0x484426:c.instructions+=1;goto B484426;
case 0x48442b:goto L48442b;
case 0x484431:c.instructions+=3;goto B484431;
case 0x484434:c.instructions+=2;goto B484434;
case 0x484436:c.instructions+=1;goto B484436;
case 0x484438:goto L484438;
case 0x48443e:c.instructions+=5;goto B48443e;
case 0x484441:c.instructions+=4;goto B484441;
case 0x484447:c.instructions+=3;goto B484447;
case 0x484448:c.instructions+=2;goto B484448;
case 0x484449:c.instructions+=1;goto B484449;
case 0x48444e:goto L48444e;
case 0x484451:c.instructions+=1;goto B484451;
case 0x484453:goto L484453;
case 0x484459:c.instructions+=8;goto B484459;
case 0x48445b:c.instructions+=7;goto B48445b;
case 0x484460:c.instructions+=6;goto B484460;
case 0x484461:c.instructions+=5;goto B484461;
case 0x484463:c.instructions+=4;goto B484463;
case 0x484464:c.instructions+=3;goto B484464;
case 0x484465:c.instructions+=2;goto B484465;
case 0x48446b:c.instructions+=1;goto B48446b;
case 0x484470:goto L484470;
case 0x484476:c.instructions+=2;goto B484476;
case 0x484477:c.instructions+=1;goto B484477;
case 0x48447c:goto L48447c;
case 0x484482:c.instructions+=4;goto B484482;
case 0x484483:c.instructions+=3;goto B484483;
case 0x484485:c.instructions+=2;goto B484485;
case 0x484487:c.instructions+=1;goto B484487;
case 0x48448c:goto L48448c;
case 0x484492:c.instructions+=3;goto B484492;
case 0x484495:c.instructions+=2;goto B484495;
case 0x484497:c.instructions+=1;goto B484497;
case 0x484499:goto L484499;
case 0x48449f:c.instructions+=5;goto B48449f;
case 0x4844a2:c.instructions+=4;goto B4844a2;
case 0x4844a8:c.instructions+=3;goto B4844a8;
case 0x4844a9:c.instructions+=2;goto B4844a9;
case 0x4844aa:c.instructions+=1;goto B4844aa;
case 0x4844af:goto L4844af;
case 0x4844b2:c.instructions+=1;goto B4844b2;
case 0x4844b4:goto L4844b4;
case 0x4844ba:c.instructions+=8;goto B4844ba;
case 0x4844bc:c.instructions+=7;goto B4844bc;
case 0x4844c1:c.instructions+=6;goto B4844c1;
case 0x4844c2:c.instructions+=5;goto B4844c2;
case 0x4844c4:c.instructions+=4;goto B4844c4;
case 0x4844c5:c.instructions+=3;goto B4844c5;
case 0x4844c6:c.instructions+=2;goto B4844c6;
case 0x4844cc:c.instructions+=1;goto B4844cc;
case 0x4844d1:goto L4844d1;
case 0x4844d4:c.instructions+=4;goto B4844d4;
case 0x4844d5:c.instructions+=3;goto B4844d5;
case 0x4844d6:c.instructions+=2;goto B4844d6;
case 0x4844d7:c.instructions+=1;goto B4844d7;
case 0x484510:goto L484510;
case 0x484511:c.instructions+=8;goto B484511;
case 0x484513:c.instructions+=7;goto B484513;
case 0x484514:c.instructions+=6;goto B484514;
case 0x484519:c.instructions+=5;goto B484519;
case 0x48451b:c.instructions+=4;goto B48451b;
case 0x48451c:c.instructions+=3;goto B48451c;
case 0x48451e:c.instructions+=2;goto B48451e;
case 0x484521:c.instructions+=1;goto B484521;
case 0x484523:goto L484523;
case 0x484525:c.instructions+=4;goto B484525;
case 0x484526:c.instructions+=3;goto B484526;
case 0x484528:c.instructions+=2;goto B484528;
case 0x484529:c.instructions+=1;goto B484529;
case 0x48452c:goto L48452c;
case 0x484530:c.instructions+=8;goto B484530;
case 0x484535:c.instructions+=7;goto B484535;
case 0x484538:c.instructions+=6;goto B484538;
case 0x48453b:c.instructions+=5;goto B48453b;
case 0x48453c:c.instructions+=4;goto B48453c;
case 0x484541:c.instructions+=3;goto B484541;
case 0x484542:c.instructions+=2;goto B484542;
case 0x484544:c.instructions+=1;goto B484544;
case 0x484549:goto L484549;
case 0x48454f:c.instructions+=8;goto B48454f;
case 0x484552:c.instructions+=7;goto B484552;
case 0x484555:c.instructions+=6;goto B484555;
case 0x484558:c.instructions+=5;goto B484558;
case 0x48455a:c.instructions+=4;goto B48455a;
case 0x48455d:c.instructions+=3;goto B48455d;
case 0x484560:c.instructions+=2;goto B484560;
case 0x484563:c.instructions+=1;goto B484563;
case 0x484569:goto L484569;
case 0x484570:goto L484570;
case 0x484572:c.instructions+=1;goto B484572;
case 0x484574:goto L484574;
case 0x484576:c.instructions+=1;goto B484576;
case 0x484578:goto L484578;
case 0x48457b:c.instructions+=2;goto B48457b;
case 0x48457c:c.instructions+=1;goto B48457c;
case 0x48457e:goto L48457e;
case 0x484581:c.instructions+=2;goto B484581;
case 0x484583:c.instructions+=1;goto B484583;
case 0x484585:goto L484585;
case 0x484588:c.instructions+=1;goto B484588;
case 0x48458a:goto L48458a;
case 0x48458d:c.instructions+=1;goto B48458d;
case 0x48458f:goto L48458f;
case 0x484591:c.instructions+=1;goto B484591;
case 0x484593:goto L484593;
case 0x484595:c.instructions+=1;goto B484595;
case 0x484597:goto L484597;
case 0x484598:c.instructions+=1;goto B484598;
case 0x48459a:goto L48459a;
case 0x48459c:c.instructions+=1;goto B48459c;
case 0x48459e:goto L48459e;
case 0x4845a0:c.instructions+=1;goto B4845a0;
case 0x4845a2:goto L4845a2;
case 0x4845a5:c.instructions+=3;goto B4845a5;
case 0x4845a6:c.instructions+=2;goto B4845a6;
case 0x4845a8:c.instructions+=1;goto B4845a8;
case 0x4845ad:goto L4845ad;
case 0x4845b4:c.instructions+=1;goto B4845b4;
case 0x4845b6:goto L4845b6;
case 0x4845b9:c.instructions+=1;goto B4845b9;
case 0x4845bb:goto L4845bb;
case 0x4845bd:c.instructions+=1;goto B4845bd;
case 0x4845bf:goto L4845bf;
case 0x4845c1:c.instructions+=1;goto B4845c1;
case 0x4845c3:goto L4845c3;
case 0x4845c4:c.instructions+=1;goto B4845c4;
case 0x4845c6:goto L4845c6;
case 0x4845c8:c.instructions+=1;goto B4845c8;
case 0x4845ce:goto L4845ce;
case 0x4845d0:c.instructions+=1;goto B4845d0;
case 0x4845d2:goto L4845d2;
case 0x4845d3:c.instructions+=6;goto B4845d3;
case 0x4845d4:c.instructions+=5;goto B4845d4;
case 0x4845d6:c.instructions+=4;goto B4845d6;
case 0x4845d7:c.instructions+=3;goto B4845d7;
case 0x4845d9:c.instructions+=2;goto B4845d9;
case 0x4845da:c.instructions+=1;goto B4845da;
case 0x4845dd:goto L4845dd;
case 0x4845df:c.instructions+=1;goto B4845df;
case 0x4845e1:goto L4845e1;
case 0x4845e3:c.instructions+=1;goto B4845e3;
case 0x4845e5:goto L4845e5;
case 0x4845e8:c.instructions+=1;goto B4845e8;
case 0x4845e9:goto L4845e9;
case 0x4845eb:c.instructions+=1;goto B4845eb;
case 0x4845f0:goto L4845f0;
case 0x4845f3:c.instructions+=4;goto B4845f3;
case 0x4845f8:c.instructions+=3;goto B4845f8;
case 0x4845fd:c.instructions+=2;goto B4845fd;
case 0x4845ff:c.instructions+=1;goto B4845ff;
case 0x484601:goto L484601;
case 0x484608:goto L484608;
case 0x48460d:c.instructions+=1;goto B48460d;
case 0x484612:goto L484612;
case 0x484615:c.instructions+=3;goto B484615;
case 0x484618:c.instructions+=2;goto B484618;
case 0x48461a:c.instructions+=1;goto B48461a;
case 0x48461c:goto L48461c;
case 0x484621:c.instructions+=2;goto B484621;
case 0x484623:c.instructions+=1;goto B484623;
case 0x484625:goto L484625;
case 0x48462a:c.instructions+=3;goto B48462a;
case 0x48462c:c.instructions+=2;goto B48462c;
case 0x48462f:c.instructions+=1;goto B48462f;
case 0x484635:goto L484635;
case 0x484637:c.instructions+=1;goto B484637;
case 0x48463d:goto L48463d;
case 0x484640:c.instructions+=1;goto B484640;
case 0x484646:goto L484646;
case 0x48464b:c.instructions+=2;goto B48464b;
case 0x48464d:c.instructions+=1;goto B48464d;
case 0x484653:goto L484653;
case 0x48465a:c.instructions+=2;goto B48465a;
case 0x48465f:c.instructions+=1;goto B48465f;
case 0x484664:goto L484664;
case 0x484669:goto L484669;
case 0x48466c:c.instructions+=7;goto B48466c;
case 0x48466f:c.instructions+=6;goto B48466f;
case 0x484674:c.instructions+=5;goto B484674;
case 0x484675:c.instructions+=4;goto B484675;
case 0x484678:c.instructions+=3;goto B484678;
case 0x484679:c.instructions+=2;goto B484679;
case 0x48467a:c.instructions+=1;goto B48467a;
case 0x48467f:goto L48467f;
case 0x484680:c.instructions+=5;goto B484680;
case 0x484681:c.instructions+=4;goto B484681;
case 0x484682:c.instructions+=3;goto B484682;
case 0x484684:c.instructions+=2;goto B484684;
case 0x484685:c.instructions+=1;goto B484685;
case 0x484688:goto L484688;
case 0x48468d:c.instructions+=1;goto B48468d;
case 0x484692:goto L484692;
case 0x484695:c.instructions+=2;goto B484695;
case 0x484697:c.instructions+=1;goto B484697;
case 0x484699:goto L484699;
case 0x48469e:c.instructions+=3;goto B48469e;
case 0x4846a0:c.instructions+=2;goto B4846a0;
case 0x4846a7:c.instructions+=1;goto B4846a7;
case 0x4846ac:goto L4846ac;
case 0x4846af:c.instructions+=3;goto B4846af;
case 0x4846b4:c.instructions+=2;goto B4846b4;
case 0x4846b9:c.instructions+=1;goto B4846b9;
case 0x4846bb:goto L4846bb;
case 0x4846c0:c.instructions+=1;goto B4846c0;
case 0x4846c5:goto L4846c5;
case 0x4846c8:c.instructions+=2;goto B4846c8;
case 0x4846ca:c.instructions+=1;goto B4846ca;
case 0x4846cc:goto L4846cc;
case 0x4846d3:c.instructions+=3;goto B4846d3;
case 0x4846d8:c.instructions+=2;goto B4846d8;
case 0x4846dd:c.instructions+=1;goto B4846dd;
case 0x4846df:goto L4846df;
case 0x4846e4:c.instructions+=1;goto B4846e4;
case 0x4846e9:goto L4846e9;
case 0x4846ec:c.instructions+=2;goto B4846ec;
case 0x4846ee:c.instructions+=1;goto B4846ee;
case 0x4846f0:goto L4846f0;
case 0x4846f5:c.instructions+=2;goto B4846f5;
case 0x4846f7:c.instructions+=1;goto B4846f7;
case 0x4846fd:goto L4846fd;
case 0x484701:c.instructions+=2;goto B484701;
case 0x484706:c.instructions+=1;goto B484706;
case 0x484708:goto L484708;
case 0x48470d:goto L48470d;
case 0x484714:c.instructions+=2;goto B484714;
case 0x484719:c.instructions+=1;goto B484719;
case 0x48471e:goto L48471e;
case 0x484724:c.instructions+=2;goto B484724;
case 0x484727:c.instructions+=1;goto B484727;
case 0x48472c:goto L48472c;
case 0x48472e:c.instructions+=1;goto B48472e;
case 0x484730:goto L484730;
case 0x484736:c.instructions+=2;goto B484736;
case 0x484739:c.instructions+=1;goto B484739;
case 0x48473e:goto L48473e;
case 0x484743:c.instructions+=2;goto B484743;
case 0x484745:c.instructions+=1;goto B484745;
case 0x484747:goto L484747;
case 0x48474b:c.instructions+=1;goto B48474b;
case 0x48474d:goto L48474d;
case 0x484750:c.instructions+=2;goto B484750;
case 0x484753:c.instructions+=1;goto B484753;
case 0x484755:goto L484755;
case 0x48475b:c.instructions+=2;goto B48475b;
case 0x484762:c.instructions+=1;goto B484762;
case 0x484764:goto L484764;
case 0x484769:c.instructions+=2;goto B484769;
case 0x48476c:c.instructions+=1;goto B48476c;
case 0x48476e:goto L48476e;
case 0x484773:c.instructions+=1;goto B484773;
case 0x484775:goto L484775;
case 0x484777:c.instructions+=2;goto B484777;
case 0x484779:c.instructions+=1;goto B484779;
case 0x48477e:goto L48477e;
case 0x484780:c.instructions+=1;goto B484780;
case 0x484782:goto L484782;
case 0x484784:c.instructions+=2;goto B484784;
case 0x484786:c.instructions+=1;goto B484786;
case 0x48478b:goto L48478b;
case 0x484791:c.instructions+=2;goto B484791;
case 0x484794:c.instructions+=1;goto B484794;
case 0x484796:goto L484796;
case 0x484799:c.instructions+=1;goto B484799;
case 0x48479b:goto L48479b;
case 0x48479e:c.instructions+=1;goto B48479e;
case 0x4847a0:goto L4847a0;
case 0x4847a3:c.instructions+=2;goto B4847a3;
case 0x4847a6:c.instructions+=1;goto B4847a6;
case 0x4847a8:goto L4847a8;
case 0x4847ab:c.instructions+=1;goto B4847ab;
case 0x4847ae:goto L4847ae;
case 0x4847b1:goto L4847b1;
case 0x4847b4:c.instructions+=4;goto B4847b4;
case 0x4847b7:c.instructions+=3;goto B4847b7;
case 0x4847bc:c.instructions+=2;goto B4847bc;
case 0x4847bf:c.instructions+=1;goto B4847bf;
case 0x4847c1:goto L4847c1;
case 0x4847c8:goto L4847c8;
case 0x4847cb:c.instructions+=1;goto B4847cb;
case 0x4847cd:goto L4847cd;
case 0x4847d4:c.instructions+=1;goto B4847d4;
case 0x4847d6:goto L4847d6;
case 0x4847dd:c.instructions+=1;goto B4847dd;
case 0x4847df:goto L4847df;
case 0x4847e6:c.instructions+=1;goto B4847e6;
case 0x4847e8:goto L4847e8;
case 0x4847ef:c.instructions+=1;goto B4847ef;
case 0x4847f1:goto L4847f1;
case 0x4847f8:c.instructions+=1;goto B4847f8;
case 0x4847fa:goto L4847fa;
case 0x484801:c.instructions+=1;goto B484801;
case 0x484803:goto L484803;
case 0x48480a:c.instructions+=1;goto B48480a;
case 0x48480c:goto L48480c;
case 0x484813:c.instructions+=1;goto B484813;
case 0x484815:goto L484815;
case 0x48481c:c.instructions+=1;goto B48481c;
case 0x48481e:goto L48481e;
case 0x484825:c.instructions+=1;goto B484825;
case 0x484827:goto L484827;
case 0x48482e:c.instructions+=1;goto B48482e;
case 0x484830:goto L484830;
case 0x484837:c.instructions+=1;goto B484837;
case 0x484839:goto L484839;
case 0x484840:goto L484840;
case 0x484846:c.instructions+=9;goto B484846;
case 0x484848:c.instructions+=8;goto B484848;
case 0x48484a:c.instructions+=7;goto B48484a;
case 0x48484c:c.instructions+=6;goto B48484c;
case 0x48484f:c.instructions+=5;goto B48484f;
case 0x484852:c.instructions+=4;goto B484852;
case 0x484853:c.instructions+=3;goto B484853;
case 0x484855:c.instructions+=2;goto B484855;
case 0x484856:c.instructions+=1;goto B484856;
case 0x484858:goto L484858;
case 0x48485e:c.instructions+=1;goto B48485e;
case 0x484860:goto L484860;
case 0x484866:goto L484866;
case 0x48486c:c.instructions+=1;goto B48486c;
case 0x48486e:goto L48486e;
case 0x484874:goto L484874;
case 0x48487a:c.instructions+=1;goto B48487a;
case 0x48487c:goto L48487c;
case 0x484882:goto L484882;
case 0x484888:c.instructions+=1;goto B484888;
case 0x48488a:goto L48488a;
case 0x484890:goto L484890;
case 0x484896:c.instructions+=1;goto B484896;
case 0x484898:goto L484898;
case 0x48489e:goto L48489e;
case 0x4848a4:c.instructions+=1;goto B4848a4;
case 0x4848a6:goto L4848a6;
case 0x4848ac:goto L4848ac;
case 0x4848b2:c.instructions+=1;goto B4848b2;
case 0x4848b4:goto L4848b4;
case 0x4848ba:goto L4848ba;
case 0x4848c0:c.instructions+=1;goto B4848c0;
case 0x4848c2:goto L4848c2;
case 0x4848c8:goto L4848c8;
case 0x4848cb:c.instructions+=2;goto B4848cb;
case 0x4848d1:c.instructions+=1;goto B4848d1;
case 0x4848d3:goto L4848d3;
case 0x4848d5:c.instructions+=1;goto B4848d5;
case 0x4848db:goto L4848db;
case 0x4848e1:c.instructions+=4;goto B4848e1;
case 0x4848e7:c.instructions+=3;goto B4848e7;
case 0x4848ec:c.instructions+=2;goto B4848ec;
case 0x4848ee:c.instructions+=1;goto B4848ee;
case 0x4848f0:goto L4848f0;
case 0x4848f3:c.instructions+=2;goto B4848f3;
case 0x4848f9:c.instructions+=1;goto B4848f9;
case 0x4848fb:goto L4848fb;
case 0x4848fe:c.instructions+=2;goto B4848fe;
case 0x484901:c.instructions+=1;goto B484901;
case 0x484903:goto L484903;
case 0x484906:c.instructions+=1;goto B484906;
case 0x484908:goto L484908;
case 0x48490b:c.instructions+=1;goto B48490b;
case 0x48490d:goto L48490d;
case 0x484910:c.instructions+=1;goto B484910;
case 0x484912:goto L484912;
case 0x484918:c.instructions+=1;goto B484918;
case 0x48491a:goto L48491a;
case 0x48491c:c.instructions+=1;goto B48491c;
case 0x48491e:goto L48491e;
case 0x484920:goto L484920;
case 0x484926:c.instructions+=2;goto B484926;
case 0x484929:c.instructions+=1;goto B484929;
case 0x48492b:goto L48492b;
case 0x48492e:c.instructions+=2;goto B48492e;
case 0x484931:c.instructions+=1;goto B484931;
case 0x484933:goto L484933;
case 0x484936:c.instructions+=1;goto B484936;
case 0x484938:goto L484938;
case 0x48493b:c.instructions+=1;goto B48493b;
case 0x48493d:goto L48493d;
case 0x484940:c.instructions+=1;goto B484940;
case 0x484942:goto L484942;
case 0x484948:c.instructions+=1;goto B484948;
case 0x48494a:goto L48494a;
case 0x48494c:c.instructions+=1;goto B48494c;
case 0x48494e:goto L48494e;
case 0x484950:goto L484950;
case 0x484953:c.instructions+=2;goto B484953;
case 0x484959:c.instructions+=1;goto B484959;
case 0x48495b:goto L48495b;
case 0x48495e:c.instructions+=1;goto B48495e;
case 0x484960:goto L484960;
case 0x484963:c.instructions+=1;goto B484963;
case 0x484965:goto L484965;
case 0x484968:c.instructions+=1;goto B484968;
case 0x48496a:goto L48496a;
case 0x48496d:c.instructions+=1;goto B48496d;
case 0x48496f:goto L48496f;
case 0x484975:c.instructions+=1;goto B484975;
case 0x484977:goto L484977;
case 0x484979:c.instructions+=1;goto B484979;
case 0x48497b:goto L48497b;
case 0x48497d:goto L48497d;
case 0x484983:c.instructions+=1;goto B484983;
case 0x484985:goto L484985;
case 0x484988:c.instructions+=2;goto B484988;
case 0x48498b:c.instructions+=1;goto B48498b;
case 0x48498d:goto L48498d;
case 0x484990:c.instructions+=1;goto B484990;
case 0x484992:goto L484992;
case 0x484995:c.instructions+=1;goto B484995;
case 0x484997:goto L484997;
case 0x48499a:c.instructions+=1;goto B48499a;
case 0x48499c:goto L48499c;
case 0x4849a2:c.instructions+=1;goto B4849a2;
case 0x4849a4:goto L4849a4;
case 0x4849a6:c.instructions+=1;goto B4849a6;
case 0x4849a8:goto L4849a8;
case 0x4849aa:goto L4849aa;
case 0x4849ad:c.instructions+=2;goto B4849ad;
case 0x4849b3:c.instructions+=1;goto B4849b3;
case 0x4849b5:goto L4849b5;
case 0x4849b8:c.instructions+=2;goto B4849b8;
case 0x4849bb:c.instructions+=1;goto B4849bb;
case 0x4849bd:goto L4849bd;
case 0x4849c0:c.instructions+=1;goto B4849c0;
case 0x4849c2:goto L4849c2;
case 0x4849c5:c.instructions+=1;goto B4849c5;
case 0x4849c7:goto L4849c7;
case 0x4849ca:c.instructions+=1;goto B4849ca;
case 0x4849cc:goto L4849cc;
case 0x4849d2:c.instructions+=1;goto B4849d2;
case 0x4849d4:goto L4849d4;
case 0x4849d6:c.instructions+=1;goto B4849d6;
case 0x4849d8:goto L4849d8;
case 0x4849da:goto L4849da;
case 0x4849dd:c.instructions+=2;goto B4849dd;
case 0x4849e3:c.instructions+=1;goto B4849e3;
case 0x4849e5:goto L4849e5;
case 0x4849e8:c.instructions+=2;goto B4849e8;
case 0x4849eb:c.instructions+=1;goto B4849eb;
case 0x4849ed:goto L4849ed;
case 0x4849f0:c.instructions+=1;goto B4849f0;
case 0x4849f2:goto L4849f2;
case 0x4849f5:c.instructions+=1;goto B4849f5;
case 0x4849f7:goto L4849f7;
case 0x4849fa:c.instructions+=1;goto B4849fa;
case 0x4849fc:goto L4849fc;
case 0x484a02:c.instructions+=1;goto B484a02;
case 0x484a04:goto L484a04;
case 0x484a06:c.instructions+=1;goto B484a06;
case 0x484a08:goto L484a08;
case 0x484a0a:goto L484a0a;
case 0x484a0d:c.instructions+=4;goto B484a0d;
case 0x484a10:c.instructions+=3;goto B484a10;
case 0x484a13:c.instructions+=2;goto B484a13;
case 0x484a16:c.instructions+=1;goto B484a16;
case 0x484a1c:goto L484a1c;
case 0x484a1e:c.instructions+=1;goto B484a1e;
case 0x484a24:goto L484a24;
case 0x484a27:c.instructions+=2;goto B484a27;
case 0x484a2d:c.instructions+=1;goto B484a2d;
case 0x484a2f:goto L484a2f;
case 0x484a35:c.instructions+=1;goto B484a35;
case 0x484a37:goto L484a37;
case 0x484a3d:c.instructions+=1;goto B484a3d;
case 0x484a3f:goto L484a3f;
case 0x484a45:c.instructions+=1;goto B484a45;
case 0x484a47:goto L484a47;
case 0x484a4e:c.instructions+=1;goto B484a4e;
case 0x484a50:goto L484a50;
case 0x484a53:c.instructions+=5;goto B484a53;
case 0x484a56:c.instructions+=4;goto B484a56;
case 0x484a59:c.instructions+=3;goto B484a59;
case 0x484a5c:c.instructions+=2;goto B484a5c;
case 0x484a60:c.instructions+=1;goto B484a60;
case 0x484a65:goto L484a65;
case 0x484a68:c.instructions+=7;goto B484a68;
case 0x484a6b:c.instructions+=6;goto B484a6b;
case 0x484a70:c.instructions+=5;goto B484a70;
case 0x484a71:c.instructions+=4;goto B484a71;
case 0x484a74:c.instructions+=3;goto B484a74;
case 0x484a79:c.instructions+=2;goto B484a79;
case 0x484a7a:c.instructions+=1;goto B484a7a;
case 0x484a7f:goto L484a7f;
case 0x484a81:c.instructions+=1;goto B484a81;
case 0x484a86:goto L484a86;
case 0x484a87:c.instructions+=6;goto B484a87;
case 0x484a89:c.instructions+=5;goto B484a89;
case 0x484a8a:c.instructions+=4;goto B484a8a;
case 0x484a8b:c.instructions+=3;goto B484a8b;
case 0x484a8d:c.instructions+=2;goto B484a8d;
case 0x484a8e:c.instructions+=1;goto B484a8e;
case 0x484a91:goto L484a91;
case 0x484a98:goto L484a98;
case 0x484a9b:c.instructions+=4;goto B484a9b;
case 0x484a9e:c.instructions+=3;goto B484a9e;
case 0x484aa5:c.instructions+=2;goto B484aa5;
case 0x484aac:c.instructions+=1;goto B484aac;
case 0x484aae:goto L484aae;
case 0x484ab4:c.instructions+=1;goto B484ab4;
case 0x484ab6:goto L484ab6;
case 0x484abb:goto L484abb;
case 0x484abe:c.instructions+=3;goto B484abe;
case 0x484ac3:c.instructions+=2;goto B484ac3;
case 0x484ac5:c.instructions+=1;goto B484ac5;
case 0x484aca:goto L484aca;
case 0x484acd:c.instructions+=6;goto B484acd;
case 0x484ad2:c.instructions+=5;goto B484ad2;
case 0x484ad5:c.instructions+=4;goto B484ad5;
case 0x484ad6:c.instructions+=3;goto B484ad6;
case 0x484adb:c.instructions+=2;goto B484adb;
case 0x484add:c.instructions+=1;goto B484add;
case 0x484ae2:goto L484ae2;
case 0x484ae4:c.instructions+=1;goto B484ae4;
case 0x484ae9:goto L484ae9;
case 0x484aea:c.instructions+=6;goto B484aea;
case 0x484aec:c.instructions+=5;goto B484aec;
case 0x484aed:c.instructions+=4;goto B484aed;
case 0x484aee:c.instructions+=3;goto B484aee;
case 0x484af0:c.instructions+=2;goto B484af0;
case 0x484af1:c.instructions+=1;goto B484af1;
case 0x484af4:goto L484af4;
case 0x484af9:c.instructions+=1;goto B484af9;
case 0x484afe:goto L484afe;
case 0x484b01:c.instructions+=3;goto B484b01;
case 0x484b04:c.instructions+=2;goto B484b04;
case 0x484b06:c.instructions+=1;goto B484b06;
case 0x484b08:goto L484b08;
case 0x484b0d:c.instructions+=3;goto B484b0d;
case 0x484b12:c.instructions+=2;goto B484b12;
case 0x484b17:c.instructions+=1;goto B484b17;
case 0x484b1c:goto L484b1c;
case 0x484b1f:c.instructions+=8;goto B484b1f;
case 0x484b22:c.instructions+=7;goto B484b22;
case 0x484b23:c.instructions+=6;goto B484b23;
case 0x484b2a:c.instructions+=5;goto B484b2a;
case 0x484b2f:c.instructions+=4;goto B484b2f;
case 0x484b32:c.instructions+=3;goto B484b32;
case 0x484b37:c.instructions+=2;goto B484b37;
case 0x484b39:c.instructions+=1;goto B484b39;
case 0x484b3e:goto L484b3e;
case 0x484b43:c.instructions+=2;goto B484b43;
case 0x484b45:c.instructions+=1;goto B484b45;
case 0x484b4a:goto L484b4a;
case 0x484b4b:c.instructions+=6;goto B484b4b;
case 0x484b4d:c.instructions+=5;goto B484b4d;
case 0x484b4e:c.instructions+=4;goto B484b4e;
case 0x484b4f:c.instructions+=3;goto B484b4f;
case 0x484b51:c.instructions+=2;goto B484b51;
case 0x484b52:c.instructions+=1;goto B484b52;
case 0x484b55:goto L484b55;
case 0x484b58:c.instructions+=5;goto B484b58;
case 0x484b59:c.instructions+=4;goto B484b59;
case 0x484b5a:c.instructions+=3;goto B484b5a;
case 0x484b5f:c.instructions+=2;goto B484b5f;
case 0x484b61:c.instructions+=1;goto B484b61;
case 0x484b66:goto L484b66;
case 0x484b69:goto L484b69;
case 0x484b6a:c.instructions+=6;goto B484b6a;
case 0x484b6b:c.instructions+=5;goto B484b6b;
case 0x484b6d:c.instructions+=4;goto B484b6d;
case 0x484b6e:c.instructions+=3;goto B484b6e;
case 0x484b70:c.instructions+=2;goto B484b70;
case 0x484b71:c.instructions+=1;goto B484b71;
case 0x484bd0:goto L484bd0;
case 0x484bd2:c.instructions+=17;goto B484bd2;
case 0x484bd7:c.instructions+=16;goto B484bd7;
case 0x484bdd:c.instructions+=15;goto B484bdd;
case 0x484bde:c.instructions+=14;goto B484bde;
case 0x484be5:c.instructions+=13;goto B484be5;
case 0x484be6:c.instructions+=12;goto B484be6;
case 0x484be7:c.instructions+=11;goto B484be7;
case 0x484be9:c.instructions+=10;goto B484be9;
case 0x484bed:c.instructions+=9;goto B484bed;
case 0x484bf2:c.instructions+=8;goto B484bf2;
case 0x484bf7:c.instructions+=7;goto B484bf7;
case 0x484bf9:c.instructions+=6;goto B484bf9;
case 0x484bfb:c.instructions+=5;goto B484bfb;
case 0x484bfe:c.instructions+=4;goto B484bfe;
case 0x484bff:c.instructions+=3;goto B484bff;
case 0x484c07:c.instructions+=2;goto B484c07;
case 0x484c0d:c.instructions+=1;goto B484c0d;
case 0x484c12:goto L484c12;
case 0x484c16:c.instructions+=5;goto B484c16;
case 0x484c18:c.instructions+=4;goto B484c18;
case 0x484c19:c.instructions+=3;goto B484c19;
case 0x484c20:c.instructions+=2;goto B484c20;
case 0x484c23:c.instructions+=1;goto B484c23;
case 0x484c30:goto L484c30;
case 0x484c31:c.instructions+=2;goto B484c31;
case 0x484c33:c.instructions+=1;goto B484c33;
case 0x484c38:goto L484c38;
case 0x484c3d:c.instructions+=1;goto B484c3d;
case 0x484c3f:goto L484c3f;
case 0x484c40:c.instructions+=1;goto B484c40;
case 0x484c45:goto L484c45;
case 0x484c48:goto L484c48;
case 0x484c4a:c.instructions+=2;goto B484c4a;
case 0x484c4b:c.instructions+=1;goto B484c4b;
case 0x484c50:goto L484c50;
case 0x484c51:c.instructions+=5;goto B484c51;
case 0x484c52:c.instructions+=4;goto B484c52;
case 0x484c54:c.instructions+=3;goto B484c54;
case 0x484c57:c.instructions+=2;goto B484c57;
case 0x484c59:c.instructions+=1;goto B484c59;
case 0x484c5b:goto L484c5b;
case 0x484c5f:c.instructions+=4;goto B484c5f;
case 0x484c63:c.instructions+=3;goto B484c63;
case 0x484c66:c.instructions+=2;goto B484c66;
case 0x484c69:c.instructions+=1;goto B484c69;
case 0x484c6c:goto L484c6c;
case 0x484c72:c.instructions+=4;goto B484c72;
case 0x484c73:c.instructions+=3;goto B484c73;
case 0x484c75:c.instructions+=2;goto B484c75;
case 0x484c77:c.instructions+=1;goto B484c77;
case 0x484c79:goto L484c79;
case 0x484c7f:c.instructions+=3;goto B484c7f;
case 0x484c81:c.instructions+=2;goto B484c81;
case 0x484c84:c.instructions+=1;goto B484c84;
case 0x484c86:goto L484c86;
case 0x484c89:c.instructions+=1;goto B484c89;
case 0x484c8b:goto L484c8b;
case 0x484c8e:c.instructions+=1;goto B484c8e;
case 0x484c90:goto L484c90;
case 0x484c92:goto L484c92;
case 0x484c97:c.instructions+=1;goto B484c97;
case 0x484c9c:goto L484c9c;
case 0x484c9e:c.instructions+=1;goto B484c9e;
case 0x484ca0:goto L484ca0;
case 0x484ca5:c.instructions+=1;goto B484ca5;
case 0x484caa:goto L484caa;
case 0x484cac:c.instructions+=1;goto B484cac;
case 0x484cae:goto L484cae;
case 0x484cb3:c.instructions+=1;goto B484cb3;
case 0x484cb8:goto L484cb8;
case 0x484cba:c.instructions+=1;goto B484cba;
case 0x484cbc:goto L484cbc;
case 0x484cbe:c.instructions+=1;goto B484cbe;
case 0x484cc0:goto L484cc0;
case 0x484cc5:c.instructions+=2;goto B484cc5;
case 0x484cc7:c.instructions+=1;goto B484cc7;
case 0x484cc9:goto L484cc9;
case 0x484ccb:c.instructions+=1;goto B484ccb;
case 0x484ccd:goto L484ccd;
case 0x484cd2:goto L484cd2;
case 0x484cd4:c.instructions+=3;goto B484cd4;
case 0x484cda:c.instructions+=2;goto B484cda;
case 0x484cdb:c.instructions+=1;goto B484cdb;
case 0x484cdd:goto L484cdd;
case 0x484ce1:c.instructions+=3;goto B484ce1;
case 0x484ce2:c.instructions+=2;goto B484ce2;
case 0x484ce4:c.instructions+=1;goto B484ce4;
case 0x484ce9:goto L484ce9;
case 0x484cea:c.instructions+=2;goto B484cea;
case 0x484ceb:c.instructions+=1;goto B484ceb;
case 0x484cee:goto L484cee;
case 0x484cf4:c.instructions+=19;goto B484cf4;
case 0x484cfa:c.instructions+=18;goto B484cfa;
case 0x484cfd:c.instructions+=17;goto B484cfd;
case 0x484d00:c.instructions+=16;goto B484d00;
case 0x484d06:c.instructions+=15;goto B484d06;
case 0x484d0c:c.instructions+=14;goto B484d0c;
case 0x484d12:c.instructions+=13;goto B484d12;
case 0x484d18:c.instructions+=12;goto B484d18;
case 0x484d1b:c.instructions+=11;goto B484d1b;
case 0x484d1e:c.instructions+=10;goto B484d1e;
case 0x484d24:c.instructions+=9;goto B484d24;
case 0x484d25:c.instructions+=8;goto B484d25;
case 0x484d2b:c.instructions+=7;goto B484d2b;
case 0x484d2c:c.instructions+=6;goto B484d2c;
case 0x484d32:c.instructions+=5;goto B484d32;
case 0x484d38:c.instructions+=4;goto B484d38;
case 0x484d3a:c.instructions+=3;goto B484d3a;
case 0x484d40:c.instructions+=2;goto B484d40;
case 0x484d43:c.instructions+=1;goto B484d43;
case 0x484d48:goto L484d48;
case 0x484d4a:c.instructions+=2;goto B484d4a;
case 0x484d4c:c.instructions+=1;goto B484d4c;
case 0x484d4f:goto L484d4f;
case 0x484d55:c.instructions+=5;goto B484d55;
case 0x484d5b:c.instructions+=4;goto B484d5b;
case 0x484d5d:c.instructions+=3;goto B484d5d;
case 0x484d63:c.instructions+=2;goto B484d63;
case 0x484d66:c.instructions+=1;goto B484d66;
case 0x484d68:goto L484d68;
case 0x484d6a:c.instructions+=1;goto B484d6a;
case 0x484d6c:goto L484d6c;
case 0x484d6f:c.instructions+=4;goto B484d6f;
case 0x484d76:c.instructions+=3;goto B484d76;
case 0x484d79:c.instructions+=2;goto B484d79;
case 0x484d7f:c.instructions+=1;goto B484d7f;
case 0x484d81:goto L484d81;
case 0x484d83:c.instructions+=1;goto B484d83;
case 0x484d85:goto L484d85;
case 0x484d88:c.instructions+=3;goto B484d88;
case 0x484d8f:c.instructions+=2;goto B484d8f;
case 0x484d92:c.instructions+=1;goto B484d92;
case 0x484d98:goto L484d98;
case 0x484d9e:c.instructions+=10;goto B484d9e;
case 0x484da4:c.instructions+=9;goto B484da4;
case 0x484da8:c.instructions+=8;goto B484da8;
case 0x484dac:c.instructions+=7;goto B484dac;
case 0x484db0:c.instructions+=6;goto B484db0;
case 0x484db6:c.instructions+=5;goto B484db6;
case 0x484dba:c.instructions+=4;goto B484dba;
case 0x484dbc:c.instructions+=3;goto B484dbc;
case 0x484dbe:c.instructions+=2;goto B484dbe;
case 0x484dc1:c.instructions+=1;goto B484dc1;
case 0x484dc3:goto L484dc3;
case 0x484dc5:c.instructions+=7;goto B484dc5;
case 0x484dc9:c.instructions+=6;goto B484dc9;
case 0x484dcf:c.instructions+=5;goto B484dcf;
case 0x484dd3:c.instructions+=4;goto B484dd3;
case 0x484dd5:c.instructions+=3;goto B484dd5;
case 0x484dd7:c.instructions+=2;goto B484dd7;
case 0x484dda:c.instructions+=1;goto B484dda;
case 0x484ddc:goto L484ddc;
case 0x484dde:c.instructions+=1;goto B484dde;
case 0x484de2:goto L484de2;
case 0x484de8:c.instructions+=5;goto B484de8;
case 0x484dee:c.instructions+=4;goto B484dee;
case 0x484df4:c.instructions+=3;goto B484df4;
case 0x484df6:c.instructions+=2;goto B484df6;
case 0x484df9:c.instructions+=1;goto B484df9;
case 0x484dfb:goto L484dfb;
case 0x484e01:c.instructions+=1;goto B484e01;
case 0x484e03:goto L484e03;
case 0x484e06:c.instructions+=2;goto B484e06;
case 0x484e09:c.instructions+=1;goto B484e09;
case 0x484e0f:goto L484e0f;
case 0x484e12:c.instructions+=19;goto B484e12;
case 0x484e15:c.instructions+=18;goto B484e15;
case 0x484e18:c.instructions+=17;goto B484e18;
case 0x484e1b:c.instructions+=16;goto B484e1b;
case 0x484e1d:c.instructions+=15;goto B484e1d;
case 0x484e23:c.instructions+=14;goto B484e23;
case 0x484e29:c.instructions+=13;goto B484e29;
case 0x484e2c:c.instructions+=12;goto B484e2c;
case 0x484e2f:c.instructions+=11;goto B484e2f;
case 0x484e32:c.instructions+=10;goto B484e32;
case 0x484e35:c.instructions+=9;goto B484e35;
case 0x484e38:c.instructions+=8;goto B484e38;
case 0x484e3f:c.instructions+=7;goto B484e3f;
case 0x484e42:c.instructions+=6;goto B484e42;
case 0x484e46:c.instructions+=5;goto B484e46;
case 0x484e4a:c.instructions+=4;goto B484e4a;
case 0x484e50:c.instructions+=3;goto B484e50;
case 0x484e52:c.instructions+=2;goto B484e52;
case 0x484e55:c.instructions+=1;goto B484e55;
case 0x484e57:goto L484e57;
case 0x484e59:c.instructions+=1;goto B484e59;
case 0x484e5b:goto L484e5b;
case 0x484e5d:goto L484e5d;
case 0x484e60:c.instructions+=8;goto B484e60;
case 0x484e63:c.instructions+=7;goto B484e63;
case 0x484e69:c.instructions+=6;goto B484e69;
case 0x484e6c:c.instructions+=5;goto B484e6c;
case 0x484e6f:c.instructions+=4;goto B484e6f;
case 0x484e75:c.instructions+=3;goto B484e75;
case 0x484e78:c.instructions+=2;goto B484e78;
case 0x484e7c:c.instructions+=1;goto B484e7c;
case 0x484e82:goto L484e82;
case 0x484e88:c.instructions+=3;goto B484e88;
case 0x484e8a:c.instructions+=2;goto B484e8a;
case 0x484e8d:c.instructions+=1;goto B484e8d;
case 0x484e93:goto L484e93;
case 0x484e96:c.instructions+=1;goto B484e96;
case 0x484e98:goto L484e98;
case 0x484e9b:c.instructions+=1;goto B484e9b;
case 0x484e9d:goto L484e9d;
case 0x484ea0:c.instructions+=2;goto B484ea0;
case 0x484ea4:c.instructions+=1;goto B484ea4;
case 0x484ea6:goto L484ea6;
case 0x484ea9:c.instructions+=1;goto B484ea9;
case 0x484eae:goto L484eae;
case 0x484eb0:c.instructions+=1;goto B484eb0;
case 0x484eb2:goto L484eb2;
case 0x484eb7:c.instructions+=2;goto B484eb7;
case 0x484eba:c.instructions+=1;goto B484eba;
case 0x484ebf:goto L484ebf;
case 0x484ec1:c.instructions+=1;goto B484ec1;
case 0x484ec3:goto L484ec3;
case 0x484ec7:c.instructions+=1;goto B484ec7;
case 0x484ec9:goto L484ec9;
case 0x484ecd:goto L484ecd;
case 0x484ed2:c.instructions+=1;goto B484ed2;
case 0x484ed7:goto L484ed7;
case 0x484ed9:c.instructions+=4;goto B484ed9;
case 0x484ede:c.instructions+=3;goto B484ede;
case 0x484ee1:c.instructions+=2;goto B484ee1;
case 0x484ee3:c.instructions+=1;goto B484ee3;
case 0x484ee5:goto L484ee5;
case 0x484ee8:c.instructions+=3;goto B484ee8;
case 0x484eeb:c.instructions+=2;goto B484eeb;
case 0x484eee:c.instructions+=1;goto B484eee;
case 0x484ef3:goto L484ef3;
case 0x484ef5:c.instructions+=1;goto B484ef5;
case 0x484ef7:goto L484ef7;
case 0x484efd:c.instructions+=7;goto B484efd;
case 0x484f00:c.instructions+=6;goto B484f00;
case 0x484f02:c.instructions+=5;goto B484f02;
case 0x484f07:c.instructions+=4;goto B484f07;
case 0x484f09:c.instructions+=3;goto B484f09;
case 0x484f0a:c.instructions+=2;goto B484f0a;
case 0x484f0c:c.instructions+=1;goto B484f0c;
case 0x484f11:goto L484f11;
case 0x484f15:goto L484f15;
case 0x484f16:c.instructions+=3;goto B484f16;
case 0x484f17:c.instructions+=2;goto B484f17;
case 0x484f18:c.instructions+=1;goto B484f18;
case 0x484f20:goto L484f20;
case 0x484f21:c.instructions+=4;goto B484f21;
case 0x484f23:c.instructions+=3;goto B484f23;
case 0x484f29:c.instructions+=2;goto B484f29;
case 0x484f2b:c.instructions+=1;goto B484f2b;
case 0x484f31:goto L484f31;
case 0x484f32:c.instructions+=2;goto B484f32;
case 0x484f37:c.instructions+=1;goto B484f37;
case 0x484f3c:goto L484f3c;
case 0x484f3e:c.instructions+=4;goto B484f3e;
case 0x484f44:c.instructions+=3;goto B484f44;
case 0x484f47:c.instructions+=2;goto B484f47;
case 0x484f4a:c.instructions+=1;goto B484f4a;
case 0x484f50:goto L484f50;
case 0x484f51:c.instructions+=1;goto B484f51;
case 0x484f57:goto L484f57;
case 0x484f5a:c.instructions+=3;goto B484f5a;
case 0x484f5d:c.instructions+=2;goto B484f5d;
case 0x484f60:c.instructions+=1;goto B484f60;
case 0x484f65:goto L484f65;
case 0x484f67:c.instructions+=1;goto B484f67;
case 0x484f69:goto L484f69;
case 0x484f6c:c.instructions+=2;goto B484f6c;
case 0x484f6f:c.instructions+=1;goto B484f6f;
case 0x484f74:goto L484f74;
case 0x484f76:c.instructions+=1;goto B484f76;
case 0x484f7c:goto L484f7c;
case 0x484f82:c.instructions+=2;goto B484f82;
case 0x484f84:c.instructions+=1;goto B484f84;
case 0x484f86:goto L484f86;
case 0x484f88:c.instructions+=1;goto B484f88;
case 0x484f8d:goto L484f8d;
case 0x484f93:c.instructions+=7;goto B484f93;
case 0x484f95:c.instructions+=6;goto B484f95;
case 0x484f9a:c.instructions+=5;goto B484f9a;
case 0x484f9c:c.instructions+=4;goto B484f9c;
case 0x484f9d:c.instructions+=3;goto B484f9d;
case 0x484fa0:c.instructions+=2;goto B484fa0;
case 0x484fa6:c.instructions+=1;goto B484fa6;
case 0x484fab:goto L484fab;
case 0x484fae:c.instructions+=2;goto B484fae;
case 0x484fb2:c.instructions+=1;goto B484fb2;
case 0x484fb4:goto L484fb4;
case 0x484fb9:c.instructions+=6;goto B484fb9;
case 0x484fc0:c.instructions+=5;goto B484fc0;
case 0x484fc3:c.instructions+=4;goto B484fc3;
case 0x484fc6:c.instructions+=3;goto B484fc6;
case 0x484fc9:c.instructions+=2;goto B484fc9;
case 0x484fca:c.instructions+=1;goto B484fca;
case 0x484fcf:goto L484fcf;
case 0x484fd2:c.instructions+=3;goto B484fd2;
case 0x484fd4:c.instructions+=2;goto B484fd4;
case 0x484fd6:c.instructions+=1;goto B484fd6;
case 0x484fdb:goto L484fdb;
case 0x484fde:c.instructions+=2;goto B484fde;
case 0x484fe0:c.instructions+=1;goto B484fe0;
case 0x484fe2:goto L484fe2;
case 0x484fe5:c.instructions+=4;goto B484fe5;
case 0x484fe6:c.instructions+=3;goto B484fe6;
case 0x484feb:c.instructions+=2;goto B484feb;
case 0x484fed:c.instructions+=1;goto B484fed;
case 0x484ff2:goto L484ff2;
case 0x484ff5:c.instructions+=2;goto B484ff5;
case 0x484ff6:c.instructions+=1;goto B484ff6;
case 0x484ffb:goto L484ffb;
case 0x484ffe:c.instructions+=1;goto B484ffe;
default:missing_instruction(c.pc);}
B484002:L484002:{c.instructions+=1;NFSU2_TR(0x484002);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L484029;}}
}
B484004:L484004:{c.instructions+=3;NFSU2_TR(0x484004);
__builtin_memmove((R+0),gp(0x82b9bc),4);
}
B484009:{NFSU2_TR(0x484009);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48400b:{NFSU2_TR(0x48400b);
if(r1(R+518)){{goto L484029;}}
}
B48400d:L48400d:{c.instructions+=4;NFSU2_TR(0x48400d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b974ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B484014:{NFSU2_TR(0x484014);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484015:{NFSU2_TR(0x484015);
__builtin_memmove(gp(0x7ecd74),(R+12),4);
}
B48401b:{NFSU2_TR(0x48401b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484020ull));
TAIL_STATIC(0x459e40u,459);
}
B484020:L484020:{c.instructions+=2;NFSU2_TR(0x484020);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484021:{NFSU2_TR(0x484021);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484026ull));
TAIL_STATIC(0x47b660u,47b);
}
B484026:L484026:{c.instructions+=1;NFSU2_TR(0x484026);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B484029:L484029:{c.instructions+=3;NFSU2_TR(0x484029);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ecd50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48402f:{NFSU2_TR(0x48402f);
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
B484031:{NFSU2_TR(0x484031);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48405a;}}
}
B484033:L484033:{c.instructions+=2;NFSU2_TR(0x484033);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484034:{NFSU2_TR(0x484034);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484039ull));
TAIL_STATIC(0x575620u,575);
}
B484039:L484039:{c.instructions+=9;NFSU2_TR(0x484039);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ecd08ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B484040:{NFSU2_TR(0x484040);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484041:{NFSU2_TR(0x484041);
u8 U[4];
w4(U+0,u32(0x459d40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484046:{NFSU2_TR(0x484046);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484047:{NFSU2_TR(0x484047);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484049:{NFSU2_TR(0x484049);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48404a:{NFSU2_TR(0x48404a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48404b:{NFSU2_TR(0x48404b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b9a4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B484052:{NFSU2_TR(0x484052);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484057ull));
TAIL_STATIC(0x57b4a0u,57b);
}
B484057:L484057:{c.instructions+=1;NFSU2_TR(0x484057);
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
B48405a:L48405a:{c.instructions+=4;NFSU2_TR(0x48405a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48405b:{NFSU2_TR(0x48405b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48405c:{NFSU2_TR(0x48405c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48405d:{NFSU2_TR(0x48405d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B484060:L484060:{c.instructions+=17;NFSU2_TR(0x484060);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484061:{NFSU2_TR(0x484061);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484065:{NFSU2_TR(0x484065);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B484068:{NFSU2_TR(0x484068);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484069:{NFSU2_TR(0x484069);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B48406b:{NFSU2_TR(0x48406b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48406c:{NFSU2_TR(0x48406c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48406d:{NFSU2_TR(0x48406d);
__builtin_memmove((R+24),(R+4),4);
}
B48406f:{NFSU2_TR(0x48406f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484072:{NFSU2_TR(0x484072);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B484074:{NFSU2_TR(0x484074);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484078:{NFSU2_TR(0x484078);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484079:{NFSU2_TR(0x484079);
__builtin_memmove((R+4),(R+24),4);
}
B48407b:{NFSU2_TR(0x48407b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48407f:{NFSU2_TR(0x48407f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B484083:{NFSU2_TR(0x484083);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B484085:{NFSU2_TR(0x484085);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484088ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B484088:L484088:{c.instructions+=2;NFSU2_TR(0x484088);
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
B48408a:{NFSU2_TR(0x48408a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4840a8;}}
}
B48408c:L48408c:{c.instructions+=2;NFSU2_TR(0x48408c);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B48408e:{NFSU2_TR(0x48408e);
__builtin_memmove((R+28),(R+28),4);
}
B484090:L484090:{c.instructions+=3;NFSU2_TR(0x484090);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484093:{NFSU2_TR(0x484093);
u8 U[30];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(U+22))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+22),r4(R+12)));
w4(U+26,u32(u32(r4(U+22))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B484097:{NFSU2_TR(0x484097);
if(r1(R+518)){{goto L4840a8;}}
}
B484099:L484099:{c.instructions+=5;NFSU2_TR(0x484099);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B48409b:{NFSU2_TR(0x48409b);
__builtin_memmove((R+4),(R+24),4);
}
B48409d:{NFSU2_TR(0x48409d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B48409e:{NFSU2_TR(0x48409e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0xcull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4840a1:{NFSU2_TR(0x4840a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4840a4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4840a4:L4840a4:{c.instructions+=2;NFSU2_TR(0x4840a4);
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
B4840a6:{NFSU2_TR(0x4840a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x484090u);}goto L484090;}}
}
B4840a8:L4840a8:{c.instructions+=3;NFSU2_TR(0x4840a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4840aa:{NFSU2_TR(0x4840aa);
__builtin_memmove((R+4),(R+24),4);
}
B4840ac:{NFSU2_TR(0x4840ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4840afull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4840af:L4840af:{c.instructions+=2;NFSU2_TR(0x4840af);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4840b1:{NFSU2_TR(0x4840b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4840be;}}
}
B4840b3:L4840b3:{c.instructions+=7;NFSU2_TR(0x4840b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4840b4:{NFSU2_TR(0x4840b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4840b5:{NFSU2_TR(0x4840b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4840b6:{NFSU2_TR(0x4840b6);
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
B4840b9:{NFSU2_TR(0x4840b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4840ba:{NFSU2_TR(0x4840ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4840bb:{NFSU2_TR(0x4840bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4840be:L4840be:{c.instructions+=9;NFSU2_TR(0x4840be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4840c1:{NFSU2_TR(0x4840c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4840c4:{NFSU2_TR(0x4840c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4840c7:{NFSU2_TR(0x4840c7);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B4840cb:{NFSU2_TR(0x4840cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B4840cf:{NFSU2_TR(0x4840cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4840d1:{NFSU2_TR(0x4840d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4840d9:{NFSU2_TR(0x4840d9);
w4(R+12,u32(0x7ull));
}
B4840de:{NFSU2_TR(0x4840de);
if(r1(R+518)){{goto L484195;}}
}
B4840e4:L4840e4:{c.instructions+=3;NFSU2_TR(0x4840e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4840e6:{NFSU2_TR(0x4840e6);
__builtin_memmove((R+4),(R+24),4);
}
B4840e8:{NFSU2_TR(0x4840e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4840edull));
TAIL_STATIC(0x482970u,482);
}
B4840ed:L4840ed:{c.instructions+=5;NFSU2_TR(0x4840ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4840f0:{NFSU2_TR(0x4840f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4840f3:{NFSU2_TR(0x4840f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4840f4:{NFSU2_TR(0x4840f4);
__builtin_memmove((R+4),(R+24),4);
}
B4840f6:{NFSU2_TR(0x4840f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4840fbull));
TAIL_STATIC(0x45ac20u,45a);
}
B4840fb:L4840fb:{c.instructions+=4;NFSU2_TR(0x4840fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4840fe:{NFSU2_TR(0x4840fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484102:{NFSU2_TR(0x484102);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B484105:{NFSU2_TR(0x484105);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484154;}}
}
B484107:L484107:{c.instructions+=3;NFSU2_TR(0x484107);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B48410a:{NFSU2_TR(0x48410a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48410c:{NFSU2_TR(0x48410c);
if(r1(R+518)){{goto L4841a4;}}
}
B484112:L484112:{c.instructions+=6;NFSU2_TR(0x484112);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484115:{NFSU2_TR(0x484115);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484116:{NFSU2_TR(0x484116);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x12cull))));
__builtin_memmove((R+0),(U+0),4);
}
B48411c:{NFSU2_TR(0x48411c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48411d:{NFSU2_TR(0x48411d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x124ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B484127:{NFSU2_TR(0x484127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48412cull));
TAIL_STATIC(0x43dbd0u,43d);
}
B48412c:L48412c:{c.instructions+=8;NFSU2_TR(0x48412c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484132:{NFSU2_TR(0x484132);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484135:{NFSU2_TR(0x484135);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484136:{NFSU2_TR(0x484136);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484137:{NFSU2_TR(0x484137);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484139:{NFSU2_TR(0x484139);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48413a:{NFSU2_TR(0x48413a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484140:{NFSU2_TR(0x484140);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484145ull));
TAIL_STATIC(0x7227a3u,722);
}
B484145:L484145:{c.instructions+=5;NFSU2_TR(0x484145);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B484148:{NFSU2_TR(0x484148);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48414b:{NFSU2_TR(0x48414b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B48414e:{NFSU2_TR(0x48414e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B484152:{NFSU2_TR(0x484152);
{goto L4841a4;}
}
B484154:L484154:{c.instructions+=7;NFSU2_TR(0x484154);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484157:{NFSU2_TR(0x484157);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B48415a:{NFSU2_TR(0x48415a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48415b:{NFSU2_TR(0x48415b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x12cull))));
__builtin_memmove((R+0),(U+0),4);
}
B484161:{NFSU2_TR(0x484161);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484162:{NFSU2_TR(0x484162);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x124ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48416c:{NFSU2_TR(0x48416c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484171ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B484171:L484171:{c.instructions+=8;NFSU2_TR(0x484171);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484177:{NFSU2_TR(0x484177);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48417a:{NFSU2_TR(0x48417a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48417b:{NFSU2_TR(0x48417b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48417c:{NFSU2_TR(0x48417c);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48417e:{NFSU2_TR(0x48417e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48417f:{NFSU2_TR(0x48417f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484185:{NFSU2_TR(0x484185);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48418aull));
TAIL_STATIC(0x7227a3u,722);
}
B48418a:L48418a:{c.instructions+=4;NFSU2_TR(0x48418a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48418d:{NFSU2_TR(0x48418d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B484190:{NFSU2_TR(0x484190);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484193:{NFSU2_TR(0x484193);
{goto L4841a4;}
}
B484195:L484195:{c.instructions+=3;NFSU2_TR(0x484195);
u8 U[4];
w4(U+0,u32(0x78c0c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48419a:{NFSU2_TR(0x48419a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48419c:{NFSU2_TR(0x48419c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4841a1ull));
TAIL_STATIC(0x4691c0u,469);
}
B4841a1:L4841a1:{c.instructions+=1;NFSU2_TR(0x4841a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4841a4:L4841a4:{c.instructions+=7;NFSU2_TR(0x4841a4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4841a8:{NFSU2_TR(0x4841a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4841ab:{NFSU2_TR(0x4841ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4841ad:{NFSU2_TR(0x4841ad);
{u32 ea_=u32(u32(7907116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4841b3:{NFSU2_TR(0x4841b3);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4841b9:{NFSU2_TR(0x4841b9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4841bd:{NFSU2_TR(0x4841bd);
if(r1(R+518)){{goto L4841fb;}}
}
B4841bf:L4841bf:{c.instructions+=2;NFSU2_TR(0x4841bf);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4841c2:{NFSU2_TR(0x4841c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4841fb;}}
}
B4841c4:L4841c4:{c.instructions+=4;NFSU2_TR(0x4841c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4841c7:{NFSU2_TR(0x4841c7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4841cb:{NFSU2_TR(0x4841cb);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B4841ce:{NFSU2_TR(0x4841ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4841d3ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4841d3:L4841d3:{c.instructions+=2;NFSU2_TR(0x4841d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4841d6:{NFSU2_TR(0x4841d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4841dbull));
TAIL_STATIC(0x721f99u,721);
}
B4841db:L4841db:{c.instructions+=8;NFSU2_TR(0x4841db);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4841de:{NFSU2_TR(0x4841de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4841e1:{NFSU2_TR(0x4841e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4841e2:{NFSU2_TR(0x4841e2);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4841e8:{NFSU2_TR(0x4841e8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4841eb:{NFSU2_TR(0x4841eb);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4841ed:{NFSU2_TR(0x4841ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4841ee:{NFSU2_TR(0x4841ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4841f3ull));
TAIL_STATIC(0x723e9du,723);
}
B4841f3:L4841f3:{c.instructions+=2;NFSU2_TR(0x4841f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4841f6:{NFSU2_TR(0x4841f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4841fbull));
TAIL_STATIC(0x721fa7u,721);
}
B4841fb:L4841fb:{c.instructions+=4;NFSU2_TR(0x4841fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4841fe:{NFSU2_TR(0x4841fe);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B484202:{NFSU2_TR(0x484202);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B484205:{NFSU2_TR(0x484205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48420aull));
TAIL_STATIC(0x75bed4u,75b);
}
B48420a:L48420a:{c.instructions+=2;NFSU2_TR(0x48420a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48420d:{NFSU2_TR(0x48420d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484212ull));
TAIL_STATIC(0x721f99u,721);
}
B484212:L484212:{c.instructions+=8;NFSU2_TR(0x484212);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B484215:{NFSU2_TR(0x484215);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484216:{NFSU2_TR(0x484216);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484219:{NFSU2_TR(0x484219);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48421f:{NFSU2_TR(0x48421f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B484222:{NFSU2_TR(0x484222);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484224:{NFSU2_TR(0x484224);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484225:{NFSU2_TR(0x484225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48422aull));
TAIL_STATIC(0x723e9du,723);
}
B48422a:L48422a:{c.instructions+=2;NFSU2_TR(0x48422a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B48422d:{NFSU2_TR(0x48422d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484232ull));
TAIL_STATIC(0x721fa7u,721);
}
B484232:L484232:{c.instructions+=3;NFSU2_TR(0x484232);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B484237:{NFSU2_TR(0x484237);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48423a:{NFSU2_TR(0x48423a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48423full));
TAIL_STATIC(0x43bdf0u,43b);
}
B48423f:L48423f:{c.instructions+=8;NFSU2_TR(0x48423f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484242:{NFSU2_TR(0x484242);
__builtin_memmove((R+0),(R+28),4);
}
B484244:{NFSU2_TR(0x484244);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B484245:{NFSU2_TR(0x484245);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B484246:{NFSU2_TR(0x484246);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B484247:{NFSU2_TR(0x484247);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B484248:{NFSU2_TR(0x484248);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B484249:{NFSU2_TR(0x484249);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B484250:L484250:{c.instructions+=7;NFSU2_TR(0x484250);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B484255:{NFSU2_TR(0x484255);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484256:{NFSU2_TR(0x484256);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484257:{NFSU2_TR(0x484257);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484258:{NFSU2_TR(0x484258);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484259:{NFSU2_TR(0x484259);
__builtin_memmove((R+12),(R+4),4);
}
B48425b:{NFSU2_TR(0x48425b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484260ull));
TAIL_STATIC(0x43e910u,43e);
}
B484260:L484260:{c.instructions+=3;NFSU2_TR(0x484260);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B484263:{NFSU2_TR(0x484263);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x404ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x404ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B484268:{NFSU2_TR(0x484268);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L484290;}}
}
B48426a:L48426a:{c.instructions+=6;NFSU2_TR(0x48426a);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B484270:{NFSU2_TR(0x484270);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B484273:{NFSU2_TR(0x484273);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B484279:{NFSU2_TR(0x484279);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48427a:{NFSU2_TR(0x48427a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48427c:{NFSU2_TR(0x48427c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484281ull));
TAIL_STATIC(0x440820u,440);
}
B484281:L484281:{c.instructions+=3;NFSU2_TR(0x484281);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B484284:{NFSU2_TR(0x484284);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B484286:{NFSU2_TR(0x484286);
if(r1(R+518)){{goto L484290;}}
}
B484288:L484288:{c.instructions+=2;NFSU2_TR(0x484288);
u8 U[4];
w4(U+0,u32(0x789ec8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B48428e:{NFSU2_TR(0x48428e);
{goto L484292;}
}
B484290:L484290:{c.instructions+=1;NFSU2_TR(0x484290);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B484292:L484292:{c.instructions+=4;NFSU2_TR(0x484292);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484295:{NFSU2_TR(0x484295);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484298:{NFSU2_TR(0x484298);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48429a:{NFSU2_TR(0x48429a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484309;}}
}
B48429c:L48429c:{c.instructions+=2;NFSU2_TR(0x48429c);
u8 U[4];
w4(U+0,u32(0x174ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4842a1:{NFSU2_TR(0x4842a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4842a6ull));
TAIL_STATIC(0x575620u,575);
}
B4842a6:L4842a6:{c.instructions+=3;NFSU2_TR(0x4842a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4842a9:{NFSU2_TR(0x4842a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4842ab:{NFSU2_TR(0x4842ab);
if(r1(R+518)){{goto L4842c5;}}
}
B4842ad:L4842ad:{c.instructions+=5;NFSU2_TR(0x4842ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4842b4:{NFSU2_TR(0x4842b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4842bb:{NFSU2_TR(0x4842bb);
u8 U[4];
w4(U+0,u32(0x78bb98ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4842c1:{NFSU2_TR(0x4842c1);
__builtin_memmove((R+4),(R+0),4);
}
B4842c3:{NFSU2_TR(0x4842c3);
{goto L4842c7;}
}
B4842c5:L4842c5:{c.instructions+=1;NFSU2_TR(0x4842c5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4842c7:L4842c7:{c.instructions+=5;NFSU2_TR(0x4842c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4842ca:{NFSU2_TR(0x4842ca);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B4842d0:{NFSU2_TR(0x4842d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4842d6:{NFSU2_TR(0x4842d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4842d7:{NFSU2_TR(0x4842d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4842dcull));
TAIL_STATIC(0x459e40u,459);
}
B4842dc:L4842dc:{c.instructions+=6;NFSU2_TR(0x4842dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4842df:{NFSU2_TR(0x4842df);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4842e1:{NFSU2_TR(0x4842e1);
u8 U[4];
w4(U+0,u32(0x20000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4842e6:{NFSU2_TR(0x4842e6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4842e8:{NFSU2_TR(0x4842e8);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4842ea:{NFSU2_TR(0x4842ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4842efull));
TAIL_STATIC(0x47b710u,47b);
}
B4842ef:L4842ef:{c.instructions+=2;NFSU2_TR(0x4842ef);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4842f1:{NFSU2_TR(0x4842f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4842f6ull));
TAIL_STATIC(0x575620u,575);
}
B4842f6:L4842f6:{c.instructions+=3;NFSU2_TR(0x4842f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4842f9:{NFSU2_TR(0x4842f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4842fb:{NFSU2_TR(0x4842fb);
if(r1(R+518)){{goto L484304;}}
}
B4842fd:L4842fd:{c.instructions+=3;NFSU2_TR(0x4842fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4842ff:{NFSU2_TR(0x4842ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484302:{NFSU2_TR(0x484302);
{goto L484306;}
}
B484304:L484304:{c.instructions+=1;NFSU2_TR(0x484304);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B484306:L484306:{c.instructions+=1;NFSU2_TR(0x484306);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484309:L484309:{c.instructions+=6;NFSU2_TR(0x484309);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48430d:{NFSU2_TR(0x48430d);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B484313:{NFSU2_TR(0x484313);
__builtin_memmove(gp(0x82ba50),(R+4),4);
}
B484319:{NFSU2_TR(0x484319);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48431c:{NFSU2_TR(0x48431c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xbull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48431f:{NFSU2_TR(0x48431f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L48434b;}}
}
B484321:L484321:{c.instructions+=1;NFSU2_TR(0x484321);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4844dcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B484328:L484328:{c.instructions+=2;NFSU2_TR(0x484328);
w4(R+24,u32(0x1ull));
}
B48432d:{NFSU2_TR(0x48432d);
{goto L48434d;}
}
B48432f:L48432f:{c.instructions+=2;NFSU2_TR(0x48432f);
w4(R+24,u32(0x2ull));
}
B484334:{NFSU2_TR(0x484334);
{goto L48434d;}
}
B484336:L484336:{c.instructions+=2;NFSU2_TR(0x484336);
w4(R+24,u32(0x3ull));
}
B48433b:{NFSU2_TR(0x48433b);
{goto L48434d;}
}
B48433d:L48433d:{c.instructions+=2;NFSU2_TR(0x48433d);
w4(R+24,u32(0x5ull));
}
B484342:{NFSU2_TR(0x484342);
{goto L48434d;}
}
B484344:L484344:{c.instructions+=2;NFSU2_TR(0x484344);
w4(R+24,u32(0x4ull));
}
B484349:{NFSU2_TR(0x484349);
{goto L48434d;}
}
B48434b:L48434b:{c.instructions+=1;NFSU2_TR(0x48434b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B48434d:L48434d:{c.instructions+=5;NFSU2_TR(0x48434d);
__builtin_memmove((R+0),(R+24),4);
}
B48434f:{NFSU2_TR(0x48434f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B484352:{NFSU2_TR(0x484352);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ecfa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484358:{NFSU2_TR(0x484358);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484359:{NFSU2_TR(0x484359);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48435eull));
TAIL_STATIC(0x57cac0u,57c);
}
B48435e:L48435e:{c.instructions+=3;NFSU2_TR(0x48435e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B484361:{NFSU2_TR(0x484361);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B484363:{NFSU2_TR(0x484363);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4843a5;}}
}
B484365:L484365:{c.instructions+=4;NFSU2_TR(0x484365);
__builtin_memmove((R+8),gp(0x7ecfa8),4);
}
B48436b:{NFSU2_TR(0x48436b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48436c:{NFSU2_TR(0x48436c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B48436e:{NFSU2_TR(0x48436e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484373ull));
TAIL_STATIC(0x57cac0u,57c);
}
B484373:L484373:{c.instructions+=3;NFSU2_TR(0x484373);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B484376:{NFSU2_TR(0x484376);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B484378:{NFSU2_TR(0x484378);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4843a5;}}
}
B48437a:L48437a:{c.instructions+=3;NFSU2_TR(0x48437a);
__builtin_memmove((R+0),gp(0x7ecfa8),4);
}
B48437f:{NFSU2_TR(0x48437f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484380:{NFSU2_TR(0x484380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484385ull));
TAIL_STATIC(0x57cac0u,57c);
}
B484385:L484385:{c.instructions+=3;NFSU2_TR(0x484385);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B484388:{NFSU2_TR(0x484388);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48438a:{NFSU2_TR(0x48438a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4843a5;}}
}
B48438c:L48438c:{c.instructions+=1;NFSU2_TR(0x48438c);
w4(R+28,u32(0x7ecfa8ull));
}
B484391:L484391:{c.instructions+=5;NFSU2_TR(0x484391);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484394:{NFSU2_TR(0x484394);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B484397:{NFSU2_TR(0x484397);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484398:{NFSU2_TR(0x484398);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B484399:{NFSU2_TR(0x484399);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48439eull));
TAIL_STATIC(0x57cac0u,57c);
}
B48439e:L48439e:{c.instructions+=3;NFSU2_TR(0x48439e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4843a1:{NFSU2_TR(0x4843a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4843a3:{NFSU2_TR(0x4843a3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x484391u);}goto L484391;}}
}
B4843a5:L4843a5:{c.instructions+=6;NFSU2_TR(0x4843a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B4843a8:{NFSU2_TR(0x4843a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ecfa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4843ae:{NFSU2_TR(0x4843ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4843b1:{NFSU2_TR(0x4843b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ecfb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4843b7:{NFSU2_TR(0x4843b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4843b8:{NFSU2_TR(0x4843b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4843bdull));
TAIL_STATIC(0x57d900u,57d);
}
B4843bd:L4843bd:{c.instructions+=5;NFSU2_TR(0x4843bd);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B4843c3:{NFSU2_TR(0x4843c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4843c4:{NFSU2_TR(0x4843c4);
__builtin_memmove((R+12),(R+0),4);
}
B4843c6:{NFSU2_TR(0x4843c6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4843c8:{NFSU2_TR(0x4843c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4843cdull));
TAIL_STATIC(0x43e910u,43e);
}
B4843cd:L4843cd:{c.instructions+=4;NFSU2_TR(0x4843cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x400ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4843d3:{NFSU2_TR(0x4843d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4843d6:{NFSU2_TR(0x4843d6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4843d8:{NFSU2_TR(0x4843d8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4843f3;}}
}
B4843da:L4843da:{c.instructions+=6;NFSU2_TR(0x4843da);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B4843df:{NFSU2_TR(0x4843df);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B4843e2:{NFSU2_TR(0x4843e2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B4843e7:{NFSU2_TR(0x4843e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4843e8:{NFSU2_TR(0x4843e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4843e9:{NFSU2_TR(0x4843e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4843eeull));
TAIL_STATIC(0x440820u,440);
}
B4843ee:L4843ee:{c.instructions+=2;NFSU2_TR(0x4843ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4843f1:{NFSU2_TR(0x4843f1);
__builtin_memmove((R+28),(R+0),4);
}
B4843f3:L4843f3:{c.instructions+=9;NFSU2_TR(0x4843f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ecfb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4843f9:{NFSU2_TR(0x4843f9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4843fb:{NFSU2_TR(0x4843fb);
u8 U[4];
w4(U+0,u32(0x45ae50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484400:{NFSU2_TR(0x484400);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484401:{NFSU2_TR(0x484401);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484403:{NFSU2_TR(0x484403);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484404:{NFSU2_TR(0x484404);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484405:{NFSU2_TR(0x484405);
__builtin_memmove(gp(0x82ba54),(R+28),4);
}
B48440b:{NFSU2_TR(0x48440b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484410ull));
TAIL_STATIC(0x57b4a0u,57b);
}
B484410:L484410:{c.instructions+=3;NFSU2_TR(0x484410);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ecfb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B484416:{NFSU2_TR(0x484416);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484417:{NFSU2_TR(0x484417);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48441cull));
TAIL_STATIC(0x57d900u,57d);
}
B48441c:L48441c:{c.instructions+=5;NFSU2_TR(0x48441c);
__builtin_memmove((R+12),(R+0),4);
}
B48441e:{NFSU2_TR(0x48441e);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B484423:{NFSU2_TR(0x484423);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484424:{NFSU2_TR(0x484424);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B484426:{NFSU2_TR(0x484426);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48442bull));
TAIL_STATIC(0x43e910u,43e);
}
B48442b:L48442b:{c.instructions+=4;NFSU2_TR(0x48442b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x400ull))));
__builtin_memmove((R+4),(U+0),4);
}
B484431:{NFSU2_TR(0x484431);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B484434:{NFSU2_TR(0x484434);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484436:{NFSU2_TR(0x484436);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L484453;}}
}
B484438:L484438:{c.instructions+=6;NFSU2_TR(0x484438);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B48443e:{NFSU2_TR(0x48443e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B484441:{NFSU2_TR(0x484441);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1000ull))));
}
B484447:{NFSU2_TR(0x484447);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484448:{NFSU2_TR(0x484448);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484449:{NFSU2_TR(0x484449);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48444eull));
TAIL_STATIC(0x440820u,440);
}
B48444e:L48444e:{c.instructions+=2;NFSU2_TR(0x48444e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B484451:{NFSU2_TR(0x484451);
__builtin_memmove((R+28),(R+0),4);
}
B484453:L484453:{c.instructions+=9;NFSU2_TR(0x484453);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ecfb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484459:{NFSU2_TR(0x484459);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48445b:{NFSU2_TR(0x48445b);
u8 U[4];
w4(U+0,u32(0x45ae50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484460:{NFSU2_TR(0x484460);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484461:{NFSU2_TR(0x484461);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484463:{NFSU2_TR(0x484463);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484464:{NFSU2_TR(0x484464);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484465:{NFSU2_TR(0x484465);
__builtin_memmove(gp(0x82ba44),(R+28),4);
}
B48446b:{NFSU2_TR(0x48446b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484470ull));
TAIL_STATIC(0x57b4a0u,57b);
}
B484470:L484470:{c.instructions+=3;NFSU2_TR(0x484470);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ecfacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484476:{NFSU2_TR(0x484476);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484477:{NFSU2_TR(0x484477);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48447cull));
TAIL_STATIC(0x57d900u,57d);
}
B48447c:L48447c:{c.instructions+=5;NFSU2_TR(0x48447c);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B484482:{NFSU2_TR(0x484482);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484483:{NFSU2_TR(0x484483);
__builtin_memmove((R+28),(R+0),4);
}
B484485:{NFSU2_TR(0x484485);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B484487:{NFSU2_TR(0x484487);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48448cull));
TAIL_STATIC(0x43e910u,43e);
}
B48448c:L48448c:{c.instructions+=4;NFSU2_TR(0x48448c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((R+4),(U+0),4);
}
B484492:{NFSU2_TR(0x484492);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B484495:{NFSU2_TR(0x484495);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484497:{NFSU2_TR(0x484497);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4844b4;}}
}
B484499:L484499:{c.instructions+=6;NFSU2_TR(0x484499);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B48449f:{NFSU2_TR(0x48449f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B4844a2:{NFSU2_TR(0x4844a2);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1000ull))));
}
B4844a8:{NFSU2_TR(0x4844a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4844a9:{NFSU2_TR(0x4844a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4844aa:{NFSU2_TR(0x4844aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4844afull));
TAIL_STATIC(0x440820u,440);
}
B4844af:L4844af:{c.instructions+=2;NFSU2_TR(0x4844af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4844b2:{NFSU2_TR(0x4844b2);
__builtin_memmove((R+12),(R+0),4);
}
B4844b4:L4844b4:{c.instructions+=9;NFSU2_TR(0x4844b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ecfacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4844ba:{NFSU2_TR(0x4844ba);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4844bc:{NFSU2_TR(0x4844bc);
u8 U[4];
w4(U+0,u32(0x45ae50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4844c1:{NFSU2_TR(0x4844c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4844c2:{NFSU2_TR(0x4844c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4844c4:{NFSU2_TR(0x4844c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4844c5:{NFSU2_TR(0x4844c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4844c6:{NFSU2_TR(0x4844c6);
__builtin_memmove(gp(0x82ba4c),(R+12),4);
}
B4844cc:{NFSU2_TR(0x4844cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4844d1ull));
TAIL_STATIC(0x57b4a0u,57b);
}
B4844d1:L4844d1:{c.instructions+=5;NFSU2_TR(0x4844d1);
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
B4844d4:{NFSU2_TR(0x4844d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4844d5:{NFSU2_TR(0x4844d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4844d6:{NFSU2_TR(0x4844d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4844d7:{NFSU2_TR(0x4844d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B484510:L484510:{c.instructions+=9;NFSU2_TR(0x484510);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484511:{NFSU2_TR(0x484511);
__builtin_memmove((R+20),(R+16),4);
}
B484513:{NFSU2_TR(0x484513);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484514:{NFSU2_TR(0x484514);
__builtin_memmove((R+0),gp(0x82b898),4);
}
B484519:{NFSU2_TR(0x484519);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48451b:{NFSU2_TR(0x48451b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48451c:{NFSU2_TR(0x48451c);
__builtin_memmove((R+24),(R+4),4);
}
B48451e:{NFSU2_TR(0x48451e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484521:{NFSU2_TR(0x484521);
if(r1(R+518)){{goto L48452c;}}
}
B484523:L484523:{c.instructions+=5;NFSU2_TR(0x484523);
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
B484525:{NFSU2_TR(0x484525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B484526:{NFSU2_TR(0x484526);
__builtin_memmove((R+16),(R+20),4);
}
B484528:{NFSU2_TR(0x484528);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B484529:{NFSU2_TR(0x484529);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48452c:L48452c:{c.instructions+=9;NFSU2_TR(0x48452c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B484530:{NFSU2_TR(0x484530);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B484535:{NFSU2_TR(0x484535);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484538:{NFSU2_TR(0x484538);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48453b:{NFSU2_TR(0x48453b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48453c:{NFSU2_TR(0x48453c);
w4(R+12,u32(0x4ull));
}
B484541:{NFSU2_TR(0x484541);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484542:{NFSU2_TR(0x484542);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B484544:{NFSU2_TR(0x484544);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484549ull));
TAIL_STATIC(0x46c790u,46c);
}
B484549:L484549:{c.instructions+=9;NFSU2_TR(0x484549);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B48454f:{NFSU2_TR(0x48454f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B484552:{NFSU2_TR(0x484552);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484555:{NFSU2_TR(0x484555);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B484558:{NFSU2_TR(0x484558);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48455a:{NFSU2_TR(0x48455a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B48455d:{NFSU2_TR(0x48455d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B484560:{NFSU2_TR(0x484560);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B484563:{NFSU2_TR(0x484563);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4845f0;}}
}
B484569:L484569:{c.instructions+=1;NFSU2_TR(0x484569);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x484b74ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B484570:L484570:{c.instructions+=2;NFSU2_TR(0x484570);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B484572:{NFSU2_TR(0x484572);
if(r1(R+518)){{goto L484578;}}
}
B484574:L484574:{c.instructions+=2;NFSU2_TR(0x484574);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B484576:{NFSU2_TR(0x484576);
if(r1(R+518)){{goto L4845f0;}}
}
B484578:L484578:{c.instructions+=3;NFSU2_TR(0x484578);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48457b:{NFSU2_TR(0x48457b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48457c:{NFSU2_TR(0x48457c);
{goto L4845e9;}
}
B48457e:L48457e:{c.instructions+=3;NFSU2_TR(0x48457e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484581:{NFSU2_TR(0x484581);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484583:{NFSU2_TR(0x484583);
if(r1(R+518)){{goto L48458f;}}
}
B484585:L484585:{c.instructions+=2;NFSU2_TR(0x484585);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484588:{NFSU2_TR(0x484588);
if(r1(R+518)){{goto L48458f;}}
}
B48458a:L48458a:{c.instructions+=2;NFSU2_TR(0x48458a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48458d:{NFSU2_TR(0x48458d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4845c6;}}
}
B48458f:L48458f:{c.instructions+=2;NFSU2_TR(0x48458f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B484591:{NFSU2_TR(0x484591);
if(r1(R+518)){{goto L484597;}}
}
B484593:L484593:{c.instructions+=2;NFSU2_TR(0x484593);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B484595:{NFSU2_TR(0x484595);
if(r1(R+518)){{goto L4845f0;}}
}
B484597:L484597:{c.instructions+=2;NFSU2_TR(0x484597);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484598:{NFSU2_TR(0x484598);
{goto L4845e9;}
}
B48459a:L48459a:{c.instructions+=2;NFSU2_TR(0x48459a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48459c:{NFSU2_TR(0x48459c);
if(r1(R+518)){{goto L4845a2;}}
}
B48459e:L48459e:{c.instructions+=2;NFSU2_TR(0x48459e);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4845a0:{NFSU2_TR(0x4845a0);
if(r1(R+518)){{goto L4845f0;}}
}
B4845a2:L4845a2:{c.instructions+=4;NFSU2_TR(0x4845a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4845a5:{NFSU2_TR(0x4845a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4845a6:{NFSU2_TR(0x4845a6);
__builtin_memmove((R+4),(R+24),4);
}
B4845a8:{NFSU2_TR(0x4845a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4845adull));
TAIL_STATIC(0x482bc0u,482);
}
B4845ad:L4845ad:{c.instructions+=2;NFSU2_TR(0x4845ad);
s1(0x82bb28,u8(0x0ull));
}
B4845b4:{NFSU2_TR(0x4845b4);
{goto L4845f0;}
}
B4845b6:L4845b6:{c.instructions+=2;NFSU2_TR(0x4845b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4845b9:{NFSU2_TR(0x4845b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4845c6;}}
}
B4845bb:L4845bb:{c.instructions+=2;NFSU2_TR(0x4845bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4845bd:{NFSU2_TR(0x4845bd);
if(r1(R+518)){{goto L4845c3;}}
}
B4845bf:L4845bf:{c.instructions+=2;NFSU2_TR(0x4845bf);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4845c1:{NFSU2_TR(0x4845c1);
if(r1(R+518)){{goto L4845f0;}}
}
B4845c3:L4845c3:{c.instructions+=2;NFSU2_TR(0x4845c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4845c4:{NFSU2_TR(0x4845c4);
{goto L4845e9;}
}
B4845c6:L4845c6:{c.instructions+=2;NFSU2_TR(0x4845c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4845c8:{NFSU2_TR(0x4845c8);
if(r1(R+518)){{goto L484b69;}}
}
B4845ce:L4845ce:{c.instructions+=2;NFSU2_TR(0x4845ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4845d0:{NFSU2_TR(0x4845d0);
if(r1(R+518)){{goto L4845f0;}}
}
B4845d2:L4845d2:{c.instructions+=7;NFSU2_TR(0x4845d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4845d3:{NFSU2_TR(0x4845d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4845d4:{NFSU2_TR(0x4845d4);
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
B4845d6:{NFSU2_TR(0x4845d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4845d7:{NFSU2_TR(0x4845d7);
__builtin_memmove((R+16),(R+20),4);
}
B4845d9:{NFSU2_TR(0x4845d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4845da:{NFSU2_TR(0x4845da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4845dd:L4845dd:{c.instructions+=2;NFSU2_TR(0x4845dd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4845df:{NFSU2_TR(0x4845df);
if(r1(R+518)){{goto L4845e5;}}
}
B4845e1:L4845e1:{c.instructions+=2;NFSU2_TR(0x4845e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4845e3:{NFSU2_TR(0x4845e3);
if(r1(R+518)){{goto L4845f0;}}
}
B4845e5:L4845e5:{c.instructions+=2;NFSU2_TR(0x4845e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4845e8:{NFSU2_TR(0x4845e8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4845e9:L4845e9:{c.instructions+=2;NFSU2_TR(0x4845e9);
__builtin_memmove((R+4),(R+24),4);
}
B4845eb:{NFSU2_TR(0x4845eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4845f0ull));
TAIL_STATIC(0x482bc0u,482);
}
B4845f0:L4845f0:{c.instructions+=5;NFSU2_TR(0x4845f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4845f3:{NFSU2_TR(0x4845f3);
__builtin_memmove((R+0),gp(0x82bb48),4);
}
B4845f8:{NFSU2_TR(0x4845f8);
w4(R+24,u32(0x3ull));
}
B4845fd:{NFSU2_TR(0x4845fd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4845ff:{NFSU2_TR(0x4845ff);
if(r1(R+518)){{goto L484608;}}
}
B484601:L484601:{c.instructions+=1;NFSU2_TR(0x484601);
s1(0x82bb2b,u8(0x0ull));
}
B484608:L484608:{c.instructions+=2;NFSU2_TR(0x484608);
u8 U[4];
w4(U+0,u32(0x78c18cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48460d:{NFSU2_TR(0x48460d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484612ull));
TAIL_STATIC(0x43db50u,43d);
}
B484612:L484612:{c.instructions+=4;NFSU2_TR(0x484612);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B484615:{NFSU2_TR(0x484615);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B484618:{NFSU2_TR(0x484618);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48461a:{NFSU2_TR(0x48461a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484688;}}
}
B48461c:L48461c:{c.instructions+=3;NFSU2_TR(0x48461c);
__builtin_memmove((R+0),gp(0x82bb28),1);
}
B484621:{NFSU2_TR(0x484621);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B484623:{NFSU2_TR(0x484623);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484688;}}
}
B484625:L484625:{c.instructions+=4;NFSU2_TR(0x484625);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B48462a:{NFSU2_TR(0x48462a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48462c:{NFSU2_TR(0x48462c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48462f:{NFSU2_TR(0x48462f);
if(r1(R+518)){{goto L484b69;}}
}
B484635:L484635:{c.instructions+=2;NFSU2_TR(0x484635);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484637:{NFSU2_TR(0x484637);
if(r1(R+518)){{goto L484b69;}}
}
B48463d:L48463d:{c.instructions+=2;NFSU2_TR(0x48463d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484640:{NFSU2_TR(0x484640);
if(r1(R+518)){{goto L484b69;}}
}
B484646:L484646:{c.instructions+=3;NFSU2_TR(0x484646);
__builtin_memmove((R+0),gp(0x82bb2b),1);
}
B48464b:{NFSU2_TR(0x48464b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48464d:{NFSU2_TR(0x48464d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484b69;}}
}
B484653:L484653:{c.instructions+=3;NFSU2_TR(0x484653);
s1(0x82bb29,u8(0x1ull));
}
B48465a:{NFSU2_TR(0x48465a);
w4(R+4,u32(0x4ull));
}
B48465f:{NFSU2_TR(0x48465f);
w4(R+0,u32(0x1ull));
}
B484664:L484664:{c.instructions+=1;NFSU2_TR(0x484664);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484669ull));
TAIL_STATIC(0x45a770u,45a);
}
B484669:L484669:{c.instructions+=8;NFSU2_TR(0x484669);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48466c:{NFSU2_TR(0x48466c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48466f:{NFSU2_TR(0x48466f);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B484674:{NFSU2_TR(0x484674);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484675:{NFSU2_TR(0x484675);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484678:{NFSU2_TR(0x484678);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484679:{NFSU2_TR(0x484679);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48467a:{NFSU2_TR(0x48467a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48467full));
TAIL_STATIC(0x46ca60u,46c);
}
B48467f:L48467f:{c.instructions+=6;NFSU2_TR(0x48467f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B484680:{NFSU2_TR(0x484680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B484681:{NFSU2_TR(0x484681);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B484682:{NFSU2_TR(0x484682);
__builtin_memmove((R+16),(R+20),4);
}
B484684:{NFSU2_TR(0x484684);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B484685:{NFSU2_TR(0x484685);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B484688:L484688:{c.instructions+=2;NFSU2_TR(0x484688);
u8 U[4];
w4(U+0,u32(0x78c17cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48468d:{NFSU2_TR(0x48468d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484692ull));
TAIL_STATIC(0x43db50u,43d);
}
B484692:L484692:{c.instructions+=3;NFSU2_TR(0x484692);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B484695:{NFSU2_TR(0x484695);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484697:{NFSU2_TR(0x484697);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4846bb;}}
}
B484699:L484699:{c.instructions+=4;NFSU2_TR(0x484699);
u8 U[4];
w4(U+0,u32(0x78c160ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48469e:{NFSU2_TR(0x48469e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4846a0:{NFSU2_TR(0x4846a0);
s1(0x82bb2b,u8(0x1ull));
}
B4846a7:{NFSU2_TR(0x4846a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4846acull));
TAIL_STATIC(0x4691c0u,469);
}
B4846ac:L4846ac:{c.instructions+=4;NFSU2_TR(0x4846ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4846af:{NFSU2_TR(0x4846af);
w4(R+4,u32(0x8ull));
}
B4846b4:{NFSU2_TR(0x4846b4);
w4(R+0,u32(0x2ull));
}
B4846b9:{NFSU2_TR(0x4846b9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x484664u);}goto L484664;}
}
B4846bb:L4846bb:{c.instructions+=2;NFSU2_TR(0x4846bb);
u8 U[4];
w4(U+0,u32(0x78c154ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4846c0:{NFSU2_TR(0x4846c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4846c5ull));
TAIL_STATIC(0x43db50u,43d);
}
B4846c5:L4846c5:{c.instructions+=3;NFSU2_TR(0x4846c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4846c8:{NFSU2_TR(0x4846c8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4846ca:{NFSU2_TR(0x4846ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4846df;}}
}
B4846cc:L4846cc:{c.instructions+=4;NFSU2_TR(0x4846cc);
s1(0x82bb2c,u8(0x1ull));
}
B4846d3:{NFSU2_TR(0x4846d3);
w4(R+4,u32(0x10ull));
}
B4846d8:{NFSU2_TR(0x4846d8);
w4(R+0,u32(0x8ull));
}
B4846dd:{NFSU2_TR(0x4846dd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x484664u);}goto L484664;}
}
B4846df:L4846df:{c.instructions+=2;NFSU2_TR(0x4846df);
u8 U[4];
w4(U+0,u32(0x78c148ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4846e4:{NFSU2_TR(0x4846e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4846e9ull));
TAIL_STATIC(0x43db50u,43d);
}
B4846e9:L4846e9:{c.instructions+=3;NFSU2_TR(0x4846e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4846ec:{NFSU2_TR(0x4846ec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4846ee:{NFSU2_TR(0x4846ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48471e;}}
}
B4846f0:L4846f0:{c.instructions+=3;NFSU2_TR(0x4846f0);
__builtin_memmove((R+0),gp(0x82bb29),1);
}
B4846f5:{NFSU2_TR(0x4846f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4846f7:{NFSU2_TR(0x4846f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484b69;}}
}
B4846fd:L4846fd:{c.instructions+=3;NFSU2_TR(0x4846fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B484701:{NFSU2_TR(0x484701);
w4(R+4,u32(0x1ull));
}
B484706:{NFSU2_TR(0x484706);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48470d;}}
}
B484708:L484708:{c.instructions+=1;NFSU2_TR(0x484708);
w4(R+4,u32(0x2ull));
}
B48470d:L48470d:{c.instructions+=3;NFSU2_TR(0x48470d);
s1(0x82bb2a,u8(0x1ull));
}
B484714:{NFSU2_TR(0x484714);
w4(R+0,u32(0x4ull));
}
B484719:{NFSU2_TR(0x484719);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x484664u);}goto L484664;}
}
B48471e:L48471e:{c.instructions+=3;NFSU2_TR(0x48471e);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B484724:{NFSU2_TR(0x484724);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484727:{NFSU2_TR(0x484727);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48472cull));
TAIL_STATIC(0x46c9a0u,46c);
}
B48472c:L48472c:{c.instructions+=2;NFSU2_TR(0x48472c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48472e:{NFSU2_TR(0x48472e);
if(r1(R+518)){{goto L48473e;}}
}
B484730:L484730:{c.instructions+=3;NFSU2_TR(0x484730);
__builtin_memmove((R+8),gp(0x82ba30),4);
}
B484736:{NFSU2_TR(0x484736);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484739:{NFSU2_TR(0x484739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48473eull));
TAIL_STATIC(0x46c9d0u,46c);
}
B48473e:L48473e:{c.instructions+=3;NFSU2_TR(0x48473e);
__builtin_memmove((R+0),gp(0x863470),4);
}
B484743:{NFSU2_TR(0x484743);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B484745:{NFSU2_TR(0x484745);
if(r1(R+518)){{goto L484755;}}
}
B484747:L484747:{c.instructions+=2;NFSU2_TR(0x484747);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B48474b:{NFSU2_TR(0x48474b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4847b1;}}
}
B48474d:L48474d:{c.instructions+=3;NFSU2_TR(0x48474d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484750:{NFSU2_TR(0x484750);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B484753:{NFSU2_TR(0x484753);
{goto L4847ae;}
}
B484755:L484755:{c.instructions+=3;NFSU2_TR(0x484755);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B48475b:{NFSU2_TR(0x48475b);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B484762:{NFSU2_TR(0x484762);
if(r1(R+518)){{goto L4847a8;}}
}
B484764:L484764:{c.instructions+=3;NFSU2_TR(0x484764);
__builtin_memmove((R+0),gp(0x850078),4);
}
B484769:{NFSU2_TR(0x484769);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48476c:{NFSU2_TR(0x48476c);
if(r1(R+518)){{goto L4847a8;}}
}
B48476e:L48476e:{c.instructions+=2;NFSU2_TR(0x48476e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B484773:{NFSU2_TR(0x484773);
if(r1(R+518)){{goto L4847a8;}}
}
B484775:L484775:{c.instructions+=3;NFSU2_TR(0x484775);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484777:{NFSU2_TR(0x484777);
__builtin_memmove((R+4),(R+8),4);
}
B484779:{NFSU2_TR(0x484779);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48477eull));
TAIL_STATIC(0x4690b0u,469);
}
B48477e:L48477e:{c.instructions+=2;NFSU2_TR(0x48477e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B484780:{NFSU2_TR(0x484780);
if(r1(R+518)){{goto L4847b1;}}
}
B484782:L484782:{c.instructions+=3;NFSU2_TR(0x484782);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484784:{NFSU2_TR(0x484784);
__builtin_memmove((R+4),(R+8),4);
}
B484786:{NFSU2_TR(0x484786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48478bull));
TAIL_STATIC(0x4690b0u,469);
}
B48478b:L48478b:{c.instructions+=3;NFSU2_TR(0x48478b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484791:{NFSU2_TR(0x484791);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484794:{NFSU2_TR(0x484794);
if(r1(R+518)){{goto L4847a0;}}
}
B484796:L484796:{c.instructions+=2;NFSU2_TR(0x484796);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484799:{NFSU2_TR(0x484799);
if(r1(R+518)){{goto L4847a0;}}
}
B48479b:L48479b:{c.instructions+=2;NFSU2_TR(0x48479b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48479e:{NFSU2_TR(0x48479e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4847b1;}}
}
B4847a0:L4847a0:{c.instructions+=3;NFSU2_TR(0x4847a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4847a3:{NFSU2_TR(0x4847a3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4847a6:{NFSU2_TR(0x4847a6);
{goto L4847ae;}
}
B4847a8:L4847a8:{c.instructions+=2;NFSU2_TR(0x4847a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4847ab:{NFSU2_TR(0x4847ab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B4847ae:L4847ae:{c.instructions+=1;NFSU2_TR(0x4847ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4847b1:L4847b1:{c.instructions+=5;NFSU2_TR(0x4847b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4847b4:{NFSU2_TR(0x4847b4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xdull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4847b7:{NFSU2_TR(0x4847b7);
w4(R+4,u32(0x2000ull));
}
B4847bc:{NFSU2_TR(0x4847bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4847bf:{NFSU2_TR(0x4847bf);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L484840;}}
}
B4847c1:L4847c1:{c.instructions+=1;NFSU2_TR(0x4847c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x484b98ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4847c8:L4847c8:{c.instructions+=2;NFSU2_TR(0x4847c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4847cb:{NFSU2_TR(0x4847cb);
{goto L484840;}
}
B4847cd:L4847cd:{c.instructions+=2;NFSU2_TR(0x4847cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4847d4:{NFSU2_TR(0x4847d4);
{goto L484840;}
}
B4847d6:L4847d6:{c.instructions+=2;NFSU2_TR(0x4847d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4847dd:{NFSU2_TR(0x4847dd);
{goto L484840;}
}
B4847df:L4847df:{c.instructions+=2;NFSU2_TR(0x4847df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4847e6:{NFSU2_TR(0x4847e6);
{goto L484840;}
}
B4847e8:L4847e8:{c.instructions+=2;NFSU2_TR(0x4847e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4847ef:{NFSU2_TR(0x4847ef);
{goto L484840;}
}
B4847f1:L4847f1:{c.instructions+=2;NFSU2_TR(0x4847f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4847f8:{NFSU2_TR(0x4847f8);
{goto L484840;}
}
B4847fa:L4847fa:{c.instructions+=2;NFSU2_TR(0x4847fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B484801:{NFSU2_TR(0x484801);
{goto L484840;}
}
B484803:L484803:{c.instructions+=2;NFSU2_TR(0x484803);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48480a:{NFSU2_TR(0x48480a);
{goto L484840;}
}
B48480c:L48480c:{c.instructions+=2;NFSU2_TR(0x48480c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B484813:{NFSU2_TR(0x484813);
{goto L484840;}
}
B484815:L484815:{c.instructions+=2;NFSU2_TR(0x484815);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x100ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48481c:{NFSU2_TR(0x48481c);
{goto L484840;}
}
B48481e:L48481e:{c.instructions+=2;NFSU2_TR(0x48481e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x200ull));
s4(u32(r4(U+0)),r4(U+4));
}
B484825:{NFSU2_TR(0x484825);
{goto L484840;}
}
B484827:L484827:{c.instructions+=2;NFSU2_TR(0x484827);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x400ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48482e:{NFSU2_TR(0x48482e);
{goto L484840;}
}
B484830:L484830:{c.instructions+=2;NFSU2_TR(0x484830);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x800ull));
s4(u32(r4(U+0)),r4(U+4));
}
B484837:{NFSU2_TR(0x484837);
{goto L484840;}
}
B484839:L484839:{c.instructions+=1;NFSU2_TR(0x484839);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B484840:L484840:{c.instructions+=10;NFSU2_TR(0x484840);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B484846:{NFSU2_TR(0x484846);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B484848:{NFSU2_TR(0x484848);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48484a:{NFSU2_TR(0x48484a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B48484c:{NFSU2_TR(0x48484c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48484f:{NFSU2_TR(0x48484f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B484852:{NFSU2_TR(0x484852);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B484853:{NFSU2_TR(0x484853);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+24))));
}
B484855:{NFSU2_TR(0x484855);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B484856:{NFSU2_TR(0x484856);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B484858:L484858:{c.instructions+=2;NFSU2_TR(0x484858);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82ba78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48485e:{NFSU2_TR(0x48485e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484866;}}
}
B484860:L484860:{c.instructions+=1;NFSU2_TR(0x484860);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ed068ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484866:L484866:{c.instructions+=2;NFSU2_TR(0x484866);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82ba7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48486c:{NFSU2_TR(0x48486c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484874;}}
}
B48486e:L48486e:{c.instructions+=1;NFSU2_TR(0x48486e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ed06cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484874:L484874:{c.instructions+=2;NFSU2_TR(0x484874);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82ba80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48487a:{NFSU2_TR(0x48487a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484882;}}
}
B48487c:L48487c:{c.instructions+=1;NFSU2_TR(0x48487c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ed070ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484882:L484882:{c.instructions+=2;NFSU2_TR(0x484882);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82ba84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B484888:{NFSU2_TR(0x484888);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484890;}}
}
B48488a:L48488a:{c.instructions+=1;NFSU2_TR(0x48488a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ed074ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484890:L484890:{c.instructions+=2;NFSU2_TR(0x484890);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82ba88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B484896:{NFSU2_TR(0x484896);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48489e;}}
}
B484898:L484898:{c.instructions+=1;NFSU2_TR(0x484898);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ed078ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48489e:L48489e:{c.instructions+=2;NFSU2_TR(0x48489e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82ba8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4848a4:{NFSU2_TR(0x4848a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4848ac;}}
}
B4848a6:L4848a6:{c.instructions+=1;NFSU2_TR(0x4848a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ed07cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4848ac:L4848ac:{c.instructions+=2;NFSU2_TR(0x4848ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82ba90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4848b2:{NFSU2_TR(0x4848b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4848ba;}}
}
B4848b4:L4848b4:{c.instructions+=1;NFSU2_TR(0x4848b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ed080ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4848ba:L4848ba:{c.instructions+=2;NFSU2_TR(0x4848ba);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82ba94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4848c0:{NFSU2_TR(0x4848c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4848c8;}}
}
B4848c2:L4848c2:{c.instructions+=1;NFSU2_TR(0x4848c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ed084ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4848c8:L4848c8:{c.instructions+=3;NFSU2_TR(0x4848c8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B4848cb:{NFSU2_TR(0x4848cb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x80ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4848d1:{NFSU2_TR(0x4848d1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x484858u);}goto L484858;}}
}
B4848d3:L4848d3:{c.instructions+=2;NFSU2_TR(0x4848d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4848d5:{NFSU2_TR(0x4848d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484a50;}}
}
B4848db:L4848db:{c.instructions+=5;NFSU2_TR(0x4848db);
__builtin_memmove((R+4),gp(0x7ed060),4);
}
B4848e1:{NFSU2_TR(0x4848e1);
__builtin_memmove((R+12),gp(0x7ed05c),4);
}
B4848e7:{NFSU2_TR(0x4848e7);
w4(R+8,u32(0x2ull));
}
B4848ec:{NFSU2_TR(0x4848ec);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4848ee:{NFSU2_TR(0x4848ee);
__builtin_memmove((R+28),(R+28),4);
}
B4848f0:L4848f0:{c.instructions+=3;NFSU2_TR(0x4848f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4848f3:{NFSU2_TR(0x4848f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82baf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4848f9:{NFSU2_TR(0x4848f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484920;}}
}
B4848fb:L4848fb:{c.instructions+=3;NFSU2_TR(0x4848fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B4848fe:{NFSU2_TR(0x4848fe);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484901:{NFSU2_TR(0x484901);
if(r1(R+518)){{goto L48491e;}}
}
B484903:L484903:{c.instructions+=2;NFSU2_TR(0x484903);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484906:{NFSU2_TR(0x484906);
if(r1(R+518)){{goto L48491e;}}
}
B484908:L484908:{c.instructions+=2;NFSU2_TR(0x484908);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48490b:{NFSU2_TR(0x48490b);
if(r1(R+518)){{goto L48491a;}}
}
B48490d:L48490d:{c.instructions+=2;NFSU2_TR(0x48490d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484910:{NFSU2_TR(0x484910);
if(r1(R+518)){{goto L48491a;}}
}
B484912:L484912:{c.instructions+=2;NFSU2_TR(0x484912);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ed03cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B484918:{NFSU2_TR(0x484918);
{goto L484920;}
}
B48491a:L48491a:{c.instructions+=2;NFSU2_TR(0x48491a);
__builtin_memmove((R+28),(R+4),4);
}
B48491c:{NFSU2_TR(0x48491c);
{goto L484920;}
}
B48491e:L48491e:{c.instructions+=1;NFSU2_TR(0x48491e);
__builtin_memmove((R+28),(R+12),4);
}
B484920:L484920:{c.instructions+=3;NFSU2_TR(0x484920);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82bafcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484926:{NFSU2_TR(0x484926);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B484929:{NFSU2_TR(0x484929);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484950;}}
}
B48492b:L48492b:{c.instructions+=3;NFSU2_TR(0x48492b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B48492e:{NFSU2_TR(0x48492e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484931:{NFSU2_TR(0x484931);
if(r1(R+518)){{goto L48494e;}}
}
B484933:L484933:{c.instructions+=2;NFSU2_TR(0x484933);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484936:{NFSU2_TR(0x484936);
if(r1(R+518)){{goto L48494e;}}
}
B484938:L484938:{c.instructions+=2;NFSU2_TR(0x484938);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48493b:{NFSU2_TR(0x48493b);
if(r1(R+518)){{goto L48494a;}}
}
B48493d:L48493d:{c.instructions+=2;NFSU2_TR(0x48493d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484940:{NFSU2_TR(0x484940);
if(r1(R+518)){{goto L48494a;}}
}
B484942:L484942:{c.instructions+=2;NFSU2_TR(0x484942);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ed040ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B484948:{NFSU2_TR(0x484948);
{goto L484950;}
}
B48494a:L48494a:{c.instructions+=2;NFSU2_TR(0x48494a);
__builtin_memmove((R+28),(R+4),4);
}
B48494c:{NFSU2_TR(0x48494c);
{goto L484950;}
}
B48494e:L48494e:{c.instructions+=1;NFSU2_TR(0x48494e);
__builtin_memmove((R+28),(R+12),4);
}
B484950:L484950:{c.instructions+=3;NFSU2_TR(0x484950);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484953:{NFSU2_TR(0x484953);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82bb00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B484959:{NFSU2_TR(0x484959);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48497d;}}
}
B48495b:L48495b:{c.instructions+=2;NFSU2_TR(0x48495b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48495e:{NFSU2_TR(0x48495e);
if(r1(R+518)){{goto L48497b;}}
}
B484960:L484960:{c.instructions+=2;NFSU2_TR(0x484960);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484963:{NFSU2_TR(0x484963);
if(r1(R+518)){{goto L48497b;}}
}
B484965:L484965:{c.instructions+=2;NFSU2_TR(0x484965);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484968:{NFSU2_TR(0x484968);
if(r1(R+518)){{goto L484977;}}
}
B48496a:L48496a:{c.instructions+=2;NFSU2_TR(0x48496a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48496d:{NFSU2_TR(0x48496d);
if(r1(R+518)){{goto L484977;}}
}
B48496f:L48496f:{c.instructions+=2;NFSU2_TR(0x48496f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ed044ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B484975:{NFSU2_TR(0x484975);
{goto L48497d;}
}
B484977:L484977:{c.instructions+=2;NFSU2_TR(0x484977);
__builtin_memmove((R+28),(R+4),4);
}
B484979:{NFSU2_TR(0x484979);
{goto L48497d;}
}
B48497b:L48497b:{c.instructions+=1;NFSU2_TR(0x48497b);
__builtin_memmove((R+28),(R+12),4);
}
B48497d:L48497d:{c.instructions+=2;NFSU2_TR(0x48497d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82bb04ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B484983:{NFSU2_TR(0x484983);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4849aa;}}
}
B484985:L484985:{c.instructions+=3;NFSU2_TR(0x484985);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B484988:{NFSU2_TR(0x484988);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48498b:{NFSU2_TR(0x48498b);
if(r1(R+518)){{goto L4849a8;}}
}
B48498d:L48498d:{c.instructions+=2;NFSU2_TR(0x48498d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484990:{NFSU2_TR(0x484990);
if(r1(R+518)){{goto L4849a8;}}
}
B484992:L484992:{c.instructions+=2;NFSU2_TR(0x484992);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484995:{NFSU2_TR(0x484995);
if(r1(R+518)){{goto L4849a4;}}
}
B484997:L484997:{c.instructions+=2;NFSU2_TR(0x484997);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48499a:{NFSU2_TR(0x48499a);
if(r1(R+518)){{goto L4849a4;}}
}
B48499c:L48499c:{c.instructions+=2;NFSU2_TR(0x48499c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ed048ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4849a2:{NFSU2_TR(0x4849a2);
{goto L4849aa;}
}
B4849a4:L4849a4:{c.instructions+=2;NFSU2_TR(0x4849a4);
__builtin_memmove((R+28),(R+4),4);
}
B4849a6:{NFSU2_TR(0x4849a6);
{goto L4849aa;}
}
B4849a8:L4849a8:{c.instructions+=1;NFSU2_TR(0x4849a8);
__builtin_memmove((R+28),(R+12),4);
}
B4849aa:L4849aa:{c.instructions+=3;NFSU2_TR(0x4849aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4849ad:{NFSU2_TR(0x4849ad);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82bb08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4849b3:{NFSU2_TR(0x4849b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4849da;}}
}
B4849b5:L4849b5:{c.instructions+=3;NFSU2_TR(0x4849b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4849b8:{NFSU2_TR(0x4849b8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4849bb:{NFSU2_TR(0x4849bb);
if(r1(R+518)){{goto L4849d8;}}
}
B4849bd:L4849bd:{c.instructions+=2;NFSU2_TR(0x4849bd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4849c0:{NFSU2_TR(0x4849c0);
if(r1(R+518)){{goto L4849d8;}}
}
B4849c2:L4849c2:{c.instructions+=2;NFSU2_TR(0x4849c2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4849c5:{NFSU2_TR(0x4849c5);
if(r1(R+518)){{goto L4849d4;}}
}
B4849c7:L4849c7:{c.instructions+=2;NFSU2_TR(0x4849c7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4849ca:{NFSU2_TR(0x4849ca);
if(r1(R+518)){{goto L4849d4;}}
}
B4849cc:L4849cc:{c.instructions+=2;NFSU2_TR(0x4849cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ed04cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4849d2:{NFSU2_TR(0x4849d2);
{goto L4849da;}
}
B4849d4:L4849d4:{c.instructions+=2;NFSU2_TR(0x4849d4);
__builtin_memmove((R+28),(R+4),4);
}
B4849d6:{NFSU2_TR(0x4849d6);
{goto L4849da;}
}
B4849d8:L4849d8:{c.instructions+=1;NFSU2_TR(0x4849d8);
__builtin_memmove((R+28),(R+12),4);
}
B4849da:L4849da:{c.instructions+=3;NFSU2_TR(0x4849da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4849dd:{NFSU2_TR(0x4849dd);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82bb0cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4849e3:{NFSU2_TR(0x4849e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484a0a;}}
}
B4849e5:L4849e5:{c.instructions+=3;NFSU2_TR(0x4849e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4849e8:{NFSU2_TR(0x4849e8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4849eb:{NFSU2_TR(0x4849eb);
if(r1(R+518)){{goto L484a08;}}
}
B4849ed:L4849ed:{c.instructions+=2;NFSU2_TR(0x4849ed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4849f0:{NFSU2_TR(0x4849f0);
if(r1(R+518)){{goto L484a08;}}
}
B4849f2:L4849f2:{c.instructions+=2;NFSU2_TR(0x4849f2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4849f5:{NFSU2_TR(0x4849f5);
if(r1(R+518)){{goto L484a04;}}
}
B4849f7:L4849f7:{c.instructions+=2;NFSU2_TR(0x4849f7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4849fa:{NFSU2_TR(0x4849fa);
if(r1(R+518)){{goto L484a04;}}
}
B4849fc:L4849fc:{c.instructions+=2;NFSU2_TR(0x4849fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ed050ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B484a02:{NFSU2_TR(0x484a02);
{goto L484a0a;}
}
B484a04:L484a04:{c.instructions+=2;NFSU2_TR(0x484a04);
__builtin_memmove((R+28),(R+4),4);
}
B484a06:{NFSU2_TR(0x484a06);
{goto L484a0a;}
}
B484a08:L484a08:{c.instructions+=1;NFSU2_TR(0x484a08);
__builtin_memmove((R+28),(R+12),4);
}
B484a0a:L484a0a:{c.instructions+=5;NFSU2_TR(0x484a0a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x6ull))));
}
B484a0d:{NFSU2_TR(0x484a0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B484a10:{NFSU2_TR(0x484a10);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B484a13:{NFSU2_TR(0x484a13);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B484a16:{NFSU2_TR(0x484a16);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4848f0u);}goto L4848f0;}}
}
B484a1c:L484a1c:{c.instructions+=2;NFSU2_TR(0x484a1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B484a1e:{NFSU2_TR(0x484a1e);
if(r1(R+518)){{goto L484af4;}}
}
B484a24:L484a24:{c.instructions+=3;NFSU2_TR(0x484a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484a27:{NFSU2_TR(0x484a27);
u8 U[8];
__builtin_memmove((U+0),gp(0x82bb18),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484a2d:{NFSU2_TR(0x484a2d);
if(r1(R+518)){{goto L484a91;}}
}
B484a2f:L484a2f:{c.instructions+=2;NFSU2_TR(0x484a2f);
u8 U[8];
__builtin_memmove((U+0),gp(0x82bb1c),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484a35:{NFSU2_TR(0x484a35);
if(r1(R+518)){{goto L484a91;}}
}
B484a37:L484a37:{c.instructions+=2;NFSU2_TR(0x484a37);
u8 U[8];
__builtin_memmove((U+0),gp(0x82bb20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484a3d:{NFSU2_TR(0x484a3d);
if(r1(R+518)){{goto L484a47;}}
}
B484a3f:L484a3f:{c.instructions+=2;NFSU2_TR(0x484a3f);
u8 U[8];
__builtin_memmove((U+0),gp(0x82bb24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484a45:{NFSU2_TR(0x484a45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484a98;}}
}
B484a47:L484a47:{c.instructions+=2;NFSU2_TR(0x484a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x4000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B484a4e:{NFSU2_TR(0x484a4e);
{goto L484a98;}
}
B484a50:L484a50:{c.instructions+=6;NFSU2_TR(0x484a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B484a53:{NFSU2_TR(0x484a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484a56:{NFSU2_TR(0x484a56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484a59:{NFSU2_TR(0x484a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484a5c:{NFSU2_TR(0x484a5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B484a60:{NFSU2_TR(0x484a60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484a65ull));
TAIL_STATIC(0x45a6d0u,45a);
}
B484a65:L484a65:{c.instructions+=8;NFSU2_TR(0x484a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484a68:{NFSU2_TR(0x484a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B484a6b:{NFSU2_TR(0x484a6b);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B484a70:{NFSU2_TR(0x484a70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484a71:{NFSU2_TR(0x484a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484a74:{NFSU2_TR(0x484a74);
u8 U[4];
w4(U+0,u32(0x475530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484a79:{NFSU2_TR(0x484a79);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484a7a:{NFSU2_TR(0x484a7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484a7full));
TAIL_STATIC(0x46ca60u,46c);
}
B484a7f:L484a7f:{c.instructions+=2;NFSU2_TR(0x484a7f);
__builtin_memmove((R+12),(R+0),1);
}
B484a81:{NFSU2_TR(0x484a81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484a86ull));
TAIL_STATIC(0x721515u,721);
}
B484a86:L484a86:{c.instructions+=7;NFSU2_TR(0x484a86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B484a87:{NFSU2_TR(0x484a87);
__builtin_memmove((R+0),(R+12),1);
}
B484a89:{NFSU2_TR(0x484a89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B484a8a:{NFSU2_TR(0x484a8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B484a8b:{NFSU2_TR(0x484a8b);
__builtin_memmove((R+16),(R+20),4);
}
B484a8d:{NFSU2_TR(0x484a8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B484a8e:{NFSU2_TR(0x484a8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B484a91:L484a91:{c.instructions+=1;NFSU2_TR(0x484a91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x8000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B484a98:L484a98:{c.instructions+=5;NFSU2_TR(0x484a98);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484a9b:{NFSU2_TR(0x484a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484a9e:{NFSU2_TR(0x484a9e);
s1(0x82bb28,u8(0x1ull));
}
B484aa5:{NFSU2_TR(0x484aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B484aac:{NFSU2_TR(0x484aac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L484abb;}}
}
B484aae:L484aae:{c.instructions+=2;NFSU2_TR(0x484aae);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x100ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B484ab4:{NFSU2_TR(0x484ab4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L484abb;}}
}
B484ab6:L484ab6:{c.instructions+=1;NFSU2_TR(0x484ab6);
w4(R+28,u32(0x4ull));
}
B484abb:L484abb:{c.instructions+=4;NFSU2_TR(0x484abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484abe:{NFSU2_TR(0x484abe);
w4(R+8,u32(0x1ull));
}
B484ac3:{NFSU2_TR(0x484ac3);
__builtin_memmove((R+0),(R+28),4);
}
B484ac5:{NFSU2_TR(0x484ac5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484acaull));
TAIL_STATIC(0x45a720u,45a);
}
B484aca:L484aca:{c.instructions+=7;NFSU2_TR(0x484aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B484acd:{NFSU2_TR(0x484acd);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B484ad2:{NFSU2_TR(0x484ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484ad5:{NFSU2_TR(0x484ad5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484ad6:{NFSU2_TR(0x484ad6);
u8 U[4];
w4(U+0,u32(0x475530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484adb:{NFSU2_TR(0x484adb);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484add:{NFSU2_TR(0x484add);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484ae2ull));
TAIL_STATIC(0x46ca60u,46c);
}
B484ae2:L484ae2:{c.instructions+=2;NFSU2_TR(0x484ae2);
__builtin_memmove((R+12),(R+0),1);
}
B484ae4:{NFSU2_TR(0x484ae4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484ae9ull));
TAIL_STATIC(0x721515u,721);
}
B484ae9:L484ae9:{c.instructions+=7;NFSU2_TR(0x484ae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B484aea:{NFSU2_TR(0x484aea);
__builtin_memmove((R+0),(R+12),1);
}
B484aec:{NFSU2_TR(0x484aec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B484aed:{NFSU2_TR(0x484aed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B484aee:{NFSU2_TR(0x484aee);
__builtin_memmove((R+16),(R+20),4);
}
B484af0:{NFSU2_TR(0x484af0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B484af1:{NFSU2_TR(0x484af1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B484af4:L484af4:{c.instructions+=2;NFSU2_TR(0x484af4);
u8 U[4];
w4(U+0,u32(0x78c13cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484af9:{NFSU2_TR(0x484af9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484afeull));
TAIL_STATIC(0x43db50u,43d);
}
B484afe:L484afe:{c.instructions+=4;NFSU2_TR(0x484afe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484b01:{NFSU2_TR(0x484b01);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B484b04:{NFSU2_TR(0x484b04);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484b06:{NFSU2_TR(0x484b06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484b55;}}
}
B484b08:L484b08:{c.instructions+=4;NFSU2_TR(0x484b08);
w4(R+8,u32(0x1ull));
}
B484b0d:{NFSU2_TR(0x484b0d);
w4(R+4,u32(0x4000ull));
}
B484b12:{NFSU2_TR(0x484b12);
w4(R+0,u32(0x400ull));
}
B484b17:{NFSU2_TR(0x484b17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484b1cull));
TAIL_STATIC(0x45a720u,45a);
}
B484b1c:L484b1c:{c.instructions+=9;NFSU2_TR(0x484b1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B484b1f:{NFSU2_TR(0x484b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484b22:{NFSU2_TR(0x484b22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484b23:{NFSU2_TR(0x484b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B484b2a:{NFSU2_TR(0x484b2a);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B484b2f:{NFSU2_TR(0x484b2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484b32:{NFSU2_TR(0x484b32);
u8 U[4];
w4(U+0,u32(0x475530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484b37:{NFSU2_TR(0x484b37);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484b39:{NFSU2_TR(0x484b39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484b3eull));
TAIL_STATIC(0x46ca60u,46c);
}
B484b3e:L484b3e:{c.instructions+=3;NFSU2_TR(0x484b3e);
w4(R+4,u32(0x8635bcull));
}
B484b43:{NFSU2_TR(0x484b43);
__builtin_memmove((R+12),(R+0),1);
}
B484b45:{NFSU2_TR(0x484b45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484b4aull));
TAIL_STATIC(0x5258b0u,525);
}
B484b4a:L484b4a:{c.instructions+=7;NFSU2_TR(0x484b4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B484b4b:{NFSU2_TR(0x484b4b);
__builtin_memmove((R+0),(R+12),1);
}
B484b4d:{NFSU2_TR(0x484b4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B484b4e:{NFSU2_TR(0x484b4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B484b4f:{NFSU2_TR(0x484b4f);
__builtin_memmove((R+16),(R+20),4);
}
B484b51:{NFSU2_TR(0x484b51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B484b52:{NFSU2_TR(0x484b52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B484b55:L484b55:{c.instructions+=6;NFSU2_TR(0x484b55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B484b58:{NFSU2_TR(0x484b58);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484b59:{NFSU2_TR(0x484b59);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484b5a:{NFSU2_TR(0x484b5a);
u8 U[4];
w4(U+0,u32(0x78c0f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484b5f:{NFSU2_TR(0x484b5f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484b61:{NFSU2_TR(0x484b61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484b66ull));
TAIL_STATIC(0x4691c0u,469);
}
B484b66:L484b66:{c.instructions+=1;NFSU2_TR(0x484b66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B484b69:L484b69:{c.instructions+=7;NFSU2_TR(0x484b69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B484b6a:{NFSU2_TR(0x484b6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B484b6b:{NFSU2_TR(0x484b6b);
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
B484b6d:{NFSU2_TR(0x484b6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B484b6e:{NFSU2_TR(0x484b6e);
__builtin_memmove((R+16),(R+20),4);
}
B484b70:{NFSU2_TR(0x484b70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B484b71:{NFSU2_TR(0x484b71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B484bd0:L484bd0:{c.instructions+=18;NFSU2_TR(0x484bd0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484bd2:{NFSU2_TR(0x484bd2);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484bd7:{NFSU2_TR(0x484bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484bdd:{NFSU2_TR(0x484bdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484bde:{NFSU2_TR(0x484bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484be5:{NFSU2_TR(0x484be5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484be6:{NFSU2_TR(0x484be6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484be7:{NFSU2_TR(0x484be7);
__builtin_memmove((R+24),(R+4),4);
}
B484be9:{NFSU2_TR(0x484be9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484bed:{NFSU2_TR(0x484bed);
u8 U[4];
w4(U+0,u32(0x4835c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484bf2:{NFSU2_TR(0x484bf2);
u8 U[4];
w4(U+0,u32(0x57bcd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484bf7:{NFSU2_TR(0x484bf7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484bf9:{NFSU2_TR(0x484bf9);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484bfb:{NFSU2_TR(0x484bfb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B484bfe:{NFSU2_TR(0x484bfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484bff:{NFSU2_TR(0x484bff);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B484c07:{NFSU2_TR(0x484c07);
u8 U[4];
w4(U+0,u32(0x78c0c4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B484c0d:{NFSU2_TR(0x484c0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484c12ull));
TAIL_STATIC(0x75c461u,75c);
}
B484c12:L484c12:{c.instructions+=6;NFSU2_TR(0x484c12);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484c16:{NFSU2_TR(0x484c16);
__builtin_memmove((R+0),(R+24),4);
}
B484c18:{NFSU2_TR(0x484c18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B484c19:{NFSU2_TR(0x484c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484c20:{NFSU2_TR(0x484c20);
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
B484c23:{NFSU2_TR(0x484c23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B484c30:L484c30:{c.instructions+=3;NFSU2_TR(0x484c30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484c31:{NFSU2_TR(0x484c31);
__builtin_memmove((R+24),(R+4),4);
}
B484c33:{NFSU2_TR(0x484c33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484c38ull));
TAIL_STATIC(0x482c60u,482);
}
B484c38:L484c38:{c.instructions+=2;NFSU2_TR(0x484c38);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B484c3d:{NFSU2_TR(0x484c3d);
if(r1(R+518)){{goto L484c48;}}
}
B484c3f:L484c3f:{c.instructions+=2;NFSU2_TR(0x484c3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484c40:{NFSU2_TR(0x484c40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484c45ull));
TAIL_STATIC(0x440540u,440);
}
B484c45:L484c45:{c.instructions+=1;NFSU2_TR(0x484c45);
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
B484c48:L484c48:{c.instructions+=3;NFSU2_TR(0x484c48);
__builtin_memmove((R+0),(R+24),4);
}
B484c4a:{NFSU2_TR(0x484c4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B484c4b:{NFSU2_TR(0x484c4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B484c50:L484c50:{c.instructions+=6;NFSU2_TR(0x484c50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484c51:{NFSU2_TR(0x484c51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484c52:{NFSU2_TR(0x484c52);
__builtin_memmove((R+24),(R+4),4);
}
B484c54:{NFSU2_TR(0x484c54);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B484c57:{NFSU2_TR(0x484c57);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B484c59:{NFSU2_TR(0x484c59);
if(r1(R+518)){{goto L484c6c;}}
}
B484c5b:L484c5b:{c.instructions+=5;NFSU2_TR(0x484c5b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B484c5f:{NFSU2_TR(0x484c5f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484c63:{NFSU2_TR(0x484c63);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B484c66:{NFSU2_TR(0x484c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484c69:{NFSU2_TR(0x484c69);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B484c6c:L484c6c:{c.instructions+=5;NFSU2_TR(0x484c6c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B484c72:{NFSU2_TR(0x484c72);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484c73:{NFSU2_TR(0x484c73);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B484c75:{NFSU2_TR(0x484c75);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B484c77:{NFSU2_TR(0x484c77);
if(r1(R+518)){{goto L484c92;}}
}
B484c79:L484c79:{c.instructions+=4;NFSU2_TR(0x484c79);
__builtin_memmove((R+4),gp(0x890118),4);
}
B484c7f:{NFSU2_TR(0x484c7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B484c81:{NFSU2_TR(0x484c81);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484c84:{NFSU2_TR(0x484c84);
if(r1(R+518)){{goto L484c90;}}
}
B484c86:L484c86:{c.instructions+=2;NFSU2_TR(0x484c86);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484c89:{NFSU2_TR(0x484c89);
if(r1(R+518)){{goto L484c90;}}
}
B484c8b:L484c8b:{c.instructions+=2;NFSU2_TR(0x484c8b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B484c8e:{NFSU2_TR(0x484c8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484c92;}}
}
B484c90:L484c90:{c.instructions+=1;NFSU2_TR(0x484c90);
w1(R+12,u8(0x1ull));
}
B484c92:L484c92:{c.instructions+=2;NFSU2_TR(0x484c92);
w4(R+4,u32(0x827e88ull));
}
B484c97:{NFSU2_TR(0x484c97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484c9cull));
TAIL_STATIC(0x430560u,430);
}
B484c9c:L484c9c:{c.instructions+=2;NFSU2_TR(0x484c9c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B484c9e:{NFSU2_TR(0x484c9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484ccd;}}
}
B484ca0:L484ca0:{c.instructions+=2;NFSU2_TR(0x484ca0);
w4(R+4,u32(0x827e88ull));
}
B484ca5:{NFSU2_TR(0x484ca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484caaull));
TAIL_STATIC(0x430420u,430);
}
B484caa:L484caa:{c.instructions+=2;NFSU2_TR(0x484caa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B484cac:{NFSU2_TR(0x484cac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484ccd;}}
}
B484cae:L484cae:{c.instructions+=2;NFSU2_TR(0x484cae);
w4(R+4,u32(0x827e88ull));
}
B484cb3:{NFSU2_TR(0x484cb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484cb8ull));
TAIL_STATIC(0x430350u,430);
}
B484cb8:L484cb8:{c.instructions+=2;NFSU2_TR(0x484cb8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B484cba:{NFSU2_TR(0x484cba);
if(r1(R+518)){{goto L484cc0;}}
}
B484cbc:L484cbc:{c.instructions+=2;NFSU2_TR(0x484cbc);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B484cbe:{NFSU2_TR(0x484cbe);
if(r1(R+518)){{goto L484ccd;}}
}
B484cc0:L484cc0:{c.instructions+=3;NFSU2_TR(0x484cc0);
__builtin_memmove((R+0),gp(0x82a3a4),4);
}
B484cc5:{NFSU2_TR(0x484cc5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B484cc7:{NFSU2_TR(0x484cc7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L484ccd;}}
}
B484cc9:L484cc9:{c.instructions+=2;NFSU2_TR(0x484cc9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B484ccb:{NFSU2_TR(0x484ccb);
{goto L484cd2;}
}
B484ccd:L484ccd:{c.instructions+=1;NFSU2_TR(0x484ccd);
w4(R+0,u32(0x1ull));
}
B484cd2:L484cd2:{c.instructions+=4;NFSU2_TR(0x484cd2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B484cd4:{NFSU2_TR(0x484cd4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B484cda:{NFSU2_TR(0x484cda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B484cdb:{NFSU2_TR(0x484cdb);
if(r1(R+518)){{goto L484cee;}}
}
B484cdd:L484cdd:{c.instructions+=4;NFSU2_TR(0x484cdd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B484ce1:{NFSU2_TR(0x484ce1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484ce2:{NFSU2_TR(0x484ce2);
__builtin_memmove((R+4),(R+24),4);
}
B484ce4:{NFSU2_TR(0x484ce4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484ce9ull));
TAIL_STATIC(0x46fa30u,46f);
}
B484ce9:L484ce9:{c.instructions+=3;NFSU2_TR(0x484ce9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B484cea:{NFSU2_TR(0x484cea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B484ceb:{NFSU2_TR(0x484ceb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B484cee:L484cee:{c.instructions+=20;NFSU2_TR(0x484cee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484cf4:{NFSU2_TR(0x484cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484cfa:{NFSU2_TR(0x484cfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484cfd:{NFSU2_TR(0x484cfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484d00:{NFSU2_TR(0x484d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B484d06:{NFSU2_TR(0x484d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484d0c:{NFSU2_TR(0x484d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484d12:{NFSU2_TR(0x484d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484d18:{NFSU2_TR(0x484d18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B484d1b:{NFSU2_TR(0x484d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484d1e:{NFSU2_TR(0x484d1e);
{u32 ea_=u32(r4(R+0)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B484d24:{NFSU2_TR(0x484d24);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484d25:{NFSU2_TR(0x484d25);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B484d2b:{NFSU2_TR(0x484d2b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484d2c:{NFSU2_TR(0x484d2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((R+28),(U+0),4);
}
B484d32:{NFSU2_TR(0x484d32);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B484d38:{NFSU2_TR(0x484d38);
__builtin_memmove((R+4),(R+28),4);
}
B484d3a:{NFSU2_TR(0x484d3a);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B484d40:{NFSU2_TR(0x484d40);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B484d43:{NFSU2_TR(0x484d43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484d48ull));
TAIL_STATIC(0x576970u,576);
}
B484d48:L484d48:{c.instructions+=3;NFSU2_TR(0x484d48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B484d4a:{NFSU2_TR(0x484d4a);
__builtin_memmove((R+4),(R+28),4);
}
B484d4c:{NFSU2_TR(0x484d4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484d4full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B484d4f:L484d4f:{c.instructions+=6;NFSU2_TR(0x484d4f);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B484d55:{NFSU2_TR(0x484d55);
{u32 ea_=u32(u32(7881848u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B484d5b:{NFSU2_TR(0x484d5b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B484d5d:{NFSU2_TR(0x484d5d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B484d63:{NFSU2_TR(0x484d63);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B484d66:{NFSU2_TR(0x484d66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484d81;}}
}
B484d68:L484d68:{c.instructions+=2;NFSU2_TR(0x484d68);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B484d6a:{NFSU2_TR(0x484d6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484d98;}}
}
B484d6c:L484d6c:{c.instructions+=5;NFSU2_TR(0x484d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484d6f:{NFSU2_TR(0x484d6f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B484d76:{NFSU2_TR(0x484d76);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B484d79:{NFSU2_TR(0x484d79);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B484d7f:{NFSU2_TR(0x484d7f);
{goto L484d98;}
}
B484d81:L484d81:{c.instructions+=2;NFSU2_TR(0x484d81);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B484d83:{NFSU2_TR(0x484d83);
if(r1(R+518)){{goto L484d98;}}
}
B484d85:L484d85:{c.instructions+=4;NFSU2_TR(0x484d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484d88:{NFSU2_TR(0x484d88);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B484d8f:{NFSU2_TR(0x484d8f);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B484d92:{NFSU2_TR(0x484d92);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B484d98:L484d98:{c.instructions+=11;NFSU2_TR(0x484d98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484d9e:{NFSU2_TR(0x484d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B484da4:{NFSU2_TR(0x484da4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484da8:{NFSU2_TR(0x484da8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B484dac:{NFSU2_TR(0x484dac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484db0:{NFSU2_TR(0x484db0);
{u32 ea_=u32(u32(7881848u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B484db6:{NFSU2_TR(0x484db6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B484dba:{NFSU2_TR(0x484dba);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B484dbc:{NFSU2_TR(0x484dbc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B484dbe:{NFSU2_TR(0x484dbe);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B484dc1:{NFSU2_TR(0x484dc1);
if(r1(R+518)){{goto L484de2;}}
}
B484dc3:L484dc3:{c.instructions+=8;NFSU2_TR(0x484dc3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B484dc5:{NFSU2_TR(0x484dc5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B484dc9:{NFSU2_TR(0x484dc9);
{u32 ea_=u32(u32(7881848u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B484dcf:{NFSU2_TR(0x484dcf);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B484dd3:{NFSU2_TR(0x484dd3);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B484dd5:{NFSU2_TR(0x484dd5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B484dd7:{NFSU2_TR(0x484dd7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B484dda:{NFSU2_TR(0x484dda);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L484de2;}}
}
B484ddc:L484ddc:{c.instructions+=2;NFSU2_TR(0x484ddc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B484dde:{NFSU2_TR(0x484dde);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B484de2:L484de2:{c.instructions+=6;NFSU2_TR(0x484de2);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B484de8:{NFSU2_TR(0x484de8);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B484dee:{NFSU2_TR(0x484dee);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B484df4:{NFSU2_TR(0x484df4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B484df6:{NFSU2_TR(0x484df6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B484df9:{NFSU2_TR(0x484df9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L484e03;}}
}
B484dfb:L484dfb:{c.instructions+=2;NFSU2_TR(0x484dfb);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B484e01:{NFSU2_TR(0x484e01);
{goto L484e0f;}
}
B484e03:L484e03:{c.instructions+=3;NFSU2_TR(0x484e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484e06:{NFSU2_TR(0x484e06);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B484e09:{NFSU2_TR(0x484e09);
{u32 ea_=u32(r4(R+8)+u32(1088u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B484e0f:L484e0f:{c.instructions+=20;NFSU2_TR(0x484e0f);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B484e12:{NFSU2_TR(0x484e12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484e15:{NFSU2_TR(0x484e15);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B484e18:{NFSU2_TR(0x484e18);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B484e1b:{NFSU2_TR(0x484e1b);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B484e1d:{NFSU2_TR(0x484e1d);
{u32 ea_=u32(u32(7913876u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B484e23:{NFSU2_TR(0x484e23);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B484e29:{NFSU2_TR(0x484e29);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B484e2c:{NFSU2_TR(0x484e2c);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B484e2f:{NFSU2_TR(0x484e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484e32:{NFSU2_TR(0x484e32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B484e35:{NFSU2_TR(0x484e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484e38:{NFSU2_TR(0x484e38);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B484e3f:{NFSU2_TR(0x484e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484e42:{NFSU2_TR(0x484e42);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484e46:{NFSU2_TR(0x484e46);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B484e4a:{NFSU2_TR(0x484e4a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B484e50:{NFSU2_TR(0x484e50);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B484e52:{NFSU2_TR(0x484e52);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B484e55:{NFSU2_TR(0x484e55);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L484e5b;}}
}
B484e57:L484e57:{c.instructions+=2;NFSU2_TR(0x484e57);
w1(R+0,u8(0x1ull));
}
B484e59:{NFSU2_TR(0x484e59);
{goto L484e5d;}
}
B484e5b:L484e5b:{c.instructions+=1;NFSU2_TR(0x484e5b);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B484e5d:L484e5d:{c.instructions+=9;NFSU2_TR(0x484e5d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B484e60:{NFSU2_TR(0x484e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484e63:{NFSU2_TR(0x484e63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B484e69:{NFSU2_TR(0x484e69);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484e6c:{NFSU2_TR(0x484e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484e6f:{NFSU2_TR(0x484e6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484e75:{NFSU2_TR(0x484e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B484e78:{NFSU2_TR(0x484e78);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B484e7c:{NFSU2_TR(0x484e7c);
if(r1(R+518)){{goto L484f15;}}
}
B484e82:L484e82:{c.instructions+=4;NFSU2_TR(0x484e82);
__builtin_memmove((R+8),gp(0x8900d8),4);
}
B484e88:{NFSU2_TR(0x484e88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B484e8a:{NFSU2_TR(0x484e8a);
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
B484e8d:{NFSU2_TR(0x484e8d);
if(r1(R+518)){{goto L484f15;}}
}
B484e93:L484e93:{c.instructions+=2;NFSU2_TR(0x484e93);
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
B484e96:{NFSU2_TR(0x484e96);
if(r1(R+518)){{goto L484f15;}}
}
B484e98:L484e98:{c.instructions+=2;NFSU2_TR(0x484e98);
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
B484e9b:{NFSU2_TR(0x484e9b);
if(r1(R+518)){{goto L484f15;}}
}
B484e9d:L484e9d:{c.instructions+=3;NFSU2_TR(0x484e9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484ea0:{NFSU2_TR(0x484ea0);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
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
B484ea4:{NFSU2_TR(0x484ea4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484f15;}}
}
B484ea6:L484ea6:{c.instructions+=2;NFSU2_TR(0x484ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484ea9:{NFSU2_TR(0x484ea9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484eaeull));
TAIL_STATIC(0x5ece00u,5ec);
}
B484eae:L484eae:{c.instructions+=2;NFSU2_TR(0x484eae);
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
B484eb0:{NFSU2_TR(0x484eb0);
if(r1(R+518)){{goto L484f15;}}
}
B484eb2:L484eb2:{c.instructions+=3;NFSU2_TR(0x484eb2);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B484eb7:{NFSU2_TR(0x484eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484eba:{NFSU2_TR(0x484eba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484ebfull));
TAIL_STATIC(0x46c9a0u,46c);
}
B484ebf:L484ebf:{c.instructions+=2;NFSU2_TR(0x484ebf);
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
B484ec1:{NFSU2_TR(0x484ec1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484f15;}}
}
B484ec3:L484ec3:{c.instructions+=2;NFSU2_TR(0x484ec3);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B484ec7:{NFSU2_TR(0x484ec7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484ecd;}}
}
B484ec9:L484ec9:{c.instructions+=1;NFSU2_TR(0x484ec9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B484ecd:L484ecd:{c.instructions+=2;NFSU2_TR(0x484ecd);
u8 U[4];
w4(U+0,u32(0x78c154ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484ed2:{NFSU2_TR(0x484ed2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484ed7ull));
TAIL_STATIC(0x43db50u,43d);
}
B484ed7:L484ed7:{c.instructions+=5;NFSU2_TR(0x484ed7);
__builtin_memmove((R+28),(R+0),4);
}
B484ed9:{NFSU2_TR(0x484ed9);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B484ede:{NFSU2_TR(0x484ede);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B484ee1:{NFSU2_TR(0x484ee1);
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
B484ee3:{NFSU2_TR(0x484ee3);
if(r1(R+518)){{goto L484f15;}}
}
B484ee5:L484ee5:{c.instructions+=4;NFSU2_TR(0x484ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484ee8:{NFSU2_TR(0x484ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484eeb:{NFSU2_TR(0x484eeb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B484eee:{NFSU2_TR(0x484eee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484ef3ull));
TAIL_STATIC(0x46c790u,46c);
}
B484ef3:L484ef3:{c.instructions+=2;NFSU2_TR(0x484ef3);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B484ef5:{NFSU2_TR(0x484ef5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L484f15;}}
}
B484ef7:L484ef7:{c.instructions+=8;NFSU2_TR(0x484ef7);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B484efd:{NFSU2_TR(0x484efd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484f00:{NFSU2_TR(0x484f00);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484f02:{NFSU2_TR(0x484f02);
u8 U[4];
w4(U+0,u32(0x45d360ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484f07:{NFSU2_TR(0x484f07);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484f09:{NFSU2_TR(0x484f09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484f0a:{NFSU2_TR(0x484f0a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484f0c:{NFSU2_TR(0x484f0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484f11ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x484510u);}goto L484510;}
}
B484f11:L484f11:{c.instructions+=1;NFSU2_TR(0x484f11);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B484f15:L484f15:{c.instructions+=4;NFSU2_TR(0x484f15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B484f16:{NFSU2_TR(0x484f16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B484f17:{NFSU2_TR(0x484f17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B484f18:{NFSU2_TR(0x484f18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B484f20:L484f20:{c.instructions+=5;NFSU2_TR(0x484f20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484f21:{NFSU2_TR(0x484f21);
__builtin_memmove((R+24),(R+4),4);
}
B484f23:{NFSU2_TR(0x484f23);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B484f29:{NFSU2_TR(0x484f29);
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
B484f2b:{NFSU2_TR(0x484f2b);
if(r1(R+518)){TAIL_STATIC(0x48512cu,485);}
}
B484f31:L484f31:{c.instructions+=3;NFSU2_TR(0x484f31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484f32:{NFSU2_TR(0x484f32);
u8 U[4];
w4(U+0,u32(0x78c18cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484f37:{NFSU2_TR(0x484f37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484f3cull));
TAIL_STATIC(0x43db50u,43d);
}
B484f3c:L484f3c:{c.instructions+=5;NFSU2_TR(0x484f3c);
__builtin_memmove((R+28),(R+0),4);
}
B484f3e:{NFSU2_TR(0x484f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484f44:{NFSU2_TR(0x484f44);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B484f47:{NFSU2_TR(0x484f47);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B484f4a:{NFSU2_TR(0x484f4a);
if(r1(R+518)){TAIL_STATIC(0x485014u,485);}
}
B484f50:L484f50:{c.instructions+=2;NFSU2_TR(0x484f50);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B484f51:{NFSU2_TR(0x484f51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4850e1u,485);}
}
B484f57:L484f57:{c.instructions+=4;NFSU2_TR(0x484f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484f5a:{NFSU2_TR(0x484f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484f5d:{NFSU2_TR(0x484f5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B484f60:{NFSU2_TR(0x484f60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484f65ull));
TAIL_STATIC(0x59fa30u,59f);
}
B484f65:L484f65:{c.instructions+=2;NFSU2_TR(0x484f65);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B484f67:{NFSU2_TR(0x484f67);
if(r1(R+518)){{goto L484f7c;}}
}
B484f69:L484f69:{c.instructions+=3;NFSU2_TR(0x484f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484f6c:{NFSU2_TR(0x484f6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484f6f:{NFSU2_TR(0x484f6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484f74ull));
TAIL_STATIC(0x5ecdb0u,5ec);
}
B484f74:L484f74:{c.instructions+=2;NFSU2_TR(0x484f74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B484f76:{NFSU2_TR(0x484f76);
if(r1(R+518)){TAIL_STATIC(0x4850e1u,485);}
}
B484f7c:L484f7c:{c.instructions+=3;NFSU2_TR(0x484f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484f82:{NFSU2_TR(0x484f82);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B484f84:{NFSU2_TR(0x484f84);
if(r1(R+518)){{goto L484f8d;}}
}
B484f86:L484f86:{c.instructions+=2;NFSU2_TR(0x484f86);
__builtin_memmove((R+4),(R+24),4);
}
B484f88:{NFSU2_TR(0x484f88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484f8dull));
TAIL_STATIC(0x45f2a0u,45f);
}
B484f8d:L484f8d:{c.instructions+=8;NFSU2_TR(0x484f8d);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B484f93:{NFSU2_TR(0x484f93);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484f95:{NFSU2_TR(0x484f95);
u8 U[4];
w4(U+0,u32(0x3e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484f9a:{NFSU2_TR(0x484f9a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484f9c:{NFSU2_TR(0x484f9c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484f9d:{NFSU2_TR(0x484f9d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B484fa0:{NFSU2_TR(0x484fa0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((R+4),(U+0),4);
}
B484fa6:{NFSU2_TR(0x484fa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484fabull));
TAIL_STATIC(0x459990u,459);
}
B484fab:L484fab:{c.instructions+=3;NFSU2_TR(0x484fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B484fae:{NFSU2_TR(0x484fae);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B484fb2:{NFSU2_TR(0x484fb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x485005u,485);}
}
B484fb4:L484fb4:{c.instructions+=7;NFSU2_TR(0x484fb4);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B484fb9:{NFSU2_TR(0x484fb9);
s1(0x82bb29,u8(0x0ull));
}
B484fc0:{NFSU2_TR(0x484fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B484fc3:{NFSU2_TR(0x484fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484fc6:{NFSU2_TR(0x484fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B484fc9:{NFSU2_TR(0x484fc9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484fca:{NFSU2_TR(0x484fca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484fcfull));
TAIL_STATIC(0x7227cbu,722);
}
B484fcf:L484fcf:{c.instructions+=4;NFSU2_TR(0x484fcf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B484fd2:{NFSU2_TR(0x484fd2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484fd4:{NFSU2_TR(0x484fd4);
__builtin_memmove((R+4),(R+28),4);
}
B484fd6:{NFSU2_TR(0x484fd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484fdbull));
TAIL_STATIC(0x482970u,482);
}
B484fdb:L484fdb:{c.instructions+=3;NFSU2_TR(0x484fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484fde:{NFSU2_TR(0x484fde);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B484fe0:{NFSU2_TR(0x484fe0);
if(r1(R+518)){TAIL_STATIC(0x485005u,485);}
}
B484fe2:L484fe2:{c.instructions+=5;NFSU2_TR(0x484fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B484fe5:{NFSU2_TR(0x484fe5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484fe6:{NFSU2_TR(0x484fe6);
u8 U[4];
w4(U+0,u32(0x78c084ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484feb:{NFSU2_TR(0x484feb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484fed:{NFSU2_TR(0x484fed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484ff2ull));
TAIL_STATIC(0x4691c0u,469);
}
B484ff2:L484ff2:{c.instructions+=3;NFSU2_TR(0x484ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B484ff5:{NFSU2_TR(0x484ff5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B484ff6:{NFSU2_TR(0x484ff6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x484ffbull));
TAIL_STATIC(0x575630u,575);
}
B484ffb:L484ffb:{c.instructions+=2;NFSU2_TR(0x484ffb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B484ffe:{NFSU2_TR(0x484ffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x485005u,485);
}
XIT:NFSU2_TR_EXIT(0x484,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
