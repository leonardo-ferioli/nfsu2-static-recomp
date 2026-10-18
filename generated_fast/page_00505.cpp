#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_506(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x505,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x505,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_505(u8* __restrict R,Cpu& c);
u32 page_505(Cpu& c){return body_505(c.regs.data(),c);}
__attribute__((noinline)) u32 body_505(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x505002:goto L505002;
case 0x505005:c.instructions+=4;goto B505005;
case 0x50500a:c.instructions+=3;goto B50500a;
case 0x50500c:c.instructions+=2;goto B50500c;
case 0x50500e:c.instructions+=1;goto B50500e;
case 0x505010:goto L505010;
case 0x505013:c.instructions+=2;goto B505013;
case 0x505015:c.instructions+=1;goto B505015;
case 0x505017:goto L505017;
case 0x505019:goto L505019;
case 0x50501c:c.instructions+=4;goto B50501c;
case 0x505021:c.instructions+=3;goto B505021;
case 0x505023:c.instructions+=2;goto B505023;
case 0x505025:c.instructions+=1;goto B505025;
case 0x505027:goto L505027;
case 0x505029:c.instructions+=2;goto B505029;
case 0x50502b:c.instructions+=1;goto B50502b;
case 0x50502d:goto L50502d;
case 0x50502f:goto L50502f;
case 0x505034:c.instructions+=4;goto B505034;
case 0x505036:c.instructions+=3;goto B505036;
case 0x505038:c.instructions+=2;goto B505038;
case 0x50503a:c.instructions+=1;goto B50503a;
case 0x50503c:goto L50503c;
case 0x50503f:c.instructions+=2;goto B50503f;
case 0x505041:c.instructions+=1;goto B505041;
case 0x505043:goto L505043;
case 0x505045:goto L505045;
case 0x505048:c.instructions+=4;goto B505048;
case 0x50504d:c.instructions+=3;goto B50504d;
case 0x50504f:c.instructions+=2;goto B50504f;
case 0x505051:c.instructions+=1;goto B505051;
case 0x505053:goto L505053;
case 0x505056:c.instructions+=2;goto B505056;
case 0x505058:c.instructions+=1;goto B505058;
case 0x50505a:goto L50505a;
case 0x50505c:goto L50505c;
case 0x50505f:c.instructions+=4;goto B50505f;
case 0x505064:c.instructions+=3;goto B505064;
case 0x505066:c.instructions+=2;goto B505066;
case 0x505068:c.instructions+=1;goto B505068;
case 0x50506a:goto L50506a;
case 0x50506d:c.instructions+=2;goto B50506d;
case 0x50506f:c.instructions+=1;goto B50506f;
case 0x505071:goto L505071;
case 0x505073:goto L505073;
case 0x505076:c.instructions+=4;goto B505076;
case 0x50507b:c.instructions+=3;goto B50507b;
case 0x50507d:c.instructions+=2;goto B50507d;
case 0x50507f:c.instructions+=1;goto B50507f;
case 0x505081:goto L505081;
case 0x505084:c.instructions+=2;goto B505084;
case 0x505086:c.instructions+=1;goto B505086;
case 0x505088:goto L505088;
case 0x50508a:goto L50508a;
case 0x50508d:c.instructions+=4;goto B50508d;
case 0x505092:c.instructions+=3;goto B505092;
case 0x505094:c.instructions+=2;goto B505094;
case 0x505096:c.instructions+=1;goto B505096;
case 0x505098:goto L505098;
case 0x50509b:c.instructions+=2;goto B50509b;
case 0x50509d:c.instructions+=1;goto B50509d;
case 0x50509f:goto L50509f;
case 0x5050a1:goto L5050a1;
case 0x5050a4:c.instructions+=4;goto B5050a4;
case 0x5050a9:c.instructions+=3;goto B5050a9;
case 0x5050ab:c.instructions+=2;goto B5050ab;
case 0x5050ad:c.instructions+=1;goto B5050ad;
case 0x5050af:goto L5050af;
case 0x5050b2:c.instructions+=2;goto B5050b2;
case 0x5050b4:c.instructions+=1;goto B5050b4;
case 0x5050b6:goto L5050b6;
case 0x5050b8:goto L5050b8;
case 0x5050bb:c.instructions+=4;goto B5050bb;
case 0x5050be:c.instructions+=3;goto B5050be;
case 0x5050c1:c.instructions+=2;goto B5050c1;
case 0x5050c4:c.instructions+=1;goto B5050c4;
case 0x5050ca:goto L5050ca;
case 0x5050cb:c.instructions+=3;goto B5050cb;
case 0x5050cc:c.instructions+=2;goto B5050cc;
case 0x5050cd:c.instructions+=1;goto B5050cd;
case 0x5050d0:goto L5050d0;
case 0x5050d4:c.instructions+=8;goto B5050d4;
case 0x5050d5:c.instructions+=7;goto B5050d5;
case 0x5050d9:c.instructions+=6;goto B5050d9;
case 0x5050db:c.instructions+=5;goto B5050db;
case 0x5050df:c.instructions+=4;goto B5050df;
case 0x5050e3:c.instructions+=3;goto B5050e3;
case 0x5050e7:c.instructions+=2;goto B5050e7;
case 0x5050ed:c.instructions+=1;goto B5050ed;
case 0x5050f2:goto L5050f2;
case 0x5050f6:c.instructions+=6;goto B5050f6;
case 0x5050f8:c.instructions+=5;goto B5050f8;
case 0x5050fc:c.instructions+=4;goto B5050fc;
case 0x5050fe:c.instructions+=3;goto B5050fe;
case 0x505100:c.instructions+=2;goto B505100;
case 0x505101:c.instructions+=1;goto B505101;
case 0x505110:goto L505110;
case 0x505114:c.instructions+=18;goto B505114;
case 0x505118:c.instructions+=17;goto B505118;
case 0x50511a:c.instructions+=16;goto B50511a;
case 0x50511c:c.instructions+=15;goto B50511c;
case 0x505120:c.instructions+=14;goto B505120;
case 0x505121:c.instructions+=13;goto B505121;
case 0x505125:c.instructions+=12;goto B505125;
case 0x505129:c.instructions+=11;goto B505129;
case 0x50512b:c.instructions+=10;goto B50512b;
case 0x50512d:c.instructions+=9;goto B50512d;
case 0x50512f:c.instructions+=8;goto B50512f;
case 0x505132:c.instructions+=7;goto B505132;
case 0x505135:c.instructions+=6;goto B505135;
case 0x505139:c.instructions+=5;goto B505139;
case 0x50513c:c.instructions+=4;goto B50513c;
case 0x50513f:c.instructions+=3;goto B50513f;
case 0x505142:c.instructions+=2;goto B505142;
case 0x505143:c.instructions+=1;goto B505143;
case 0x505150:goto L505150;
case 0x505154:c.instructions+=24;goto B505154;
case 0x505158:c.instructions+=23;goto B505158;
case 0x50515a:c.instructions+=22;goto B50515a;
case 0x50515e:c.instructions+=21;goto B50515e;
case 0x505160:c.instructions+=20;goto B505160;
case 0x505161:c.instructions+=19;goto B505161;
case 0x505165:c.instructions+=18;goto B505165;
case 0x505169:c.instructions+=17;goto B505169;
case 0x50516b:c.instructions+=16;goto B50516b;
case 0x50516d:c.instructions+=15;goto B50516d;
case 0x50516f:c.instructions+=14;goto B50516f;
case 0x505172:c.instructions+=13;goto B505172;
case 0x505175:c.instructions+=12;goto B505175;
case 0x505179:c.instructions+=11;goto B505179;
case 0x50517c:c.instructions+=10;goto B50517c;
case 0x50517f:c.instructions+=9;goto B50517f;
case 0x505182:c.instructions+=8;goto B505182;
case 0x505185:c.instructions+=7;goto B505185;
case 0x505188:c.instructions+=6;goto B505188;
case 0x50518c:c.instructions+=5;goto B50518c;
case 0x50518f:c.instructions+=4;goto B50518f;
case 0x505192:c.instructions+=3;goto B505192;
case 0x505195:c.instructions+=2;goto B505195;
case 0x505196:c.instructions+=1;goto B505196;
case 0x5051a0:goto L5051a0;
case 0x5051a1:c.instructions+=13;goto B5051a1;
case 0x5051a2:c.instructions+=12;goto B5051a2;
case 0x5051a3:c.instructions+=11;goto B5051a3;
case 0x5051a7:c.instructions+=10;goto B5051a7;
case 0x5051a9:c.instructions+=9;goto B5051a9;
case 0x5051aa:c.instructions+=8;goto B5051aa;
case 0x5051ae:c.instructions+=7;goto B5051ae;
case 0x5051b0:c.instructions+=6;goto B5051b0;
case 0x5051b2:c.instructions+=5;goto B5051b2;
case 0x5051b6:c.instructions+=4;goto B5051b6;
case 0x5051ba:c.instructions+=3;goto B5051ba;
case 0x5051be:c.instructions+=2;goto B5051be;
case 0x5051c4:c.instructions+=1;goto B5051c4;
case 0x5051c9:goto L5051c9;
case 0x5051cd:c.instructions+=12;goto B5051cd;
case 0x5051cf:c.instructions+=11;goto B5051cf;
case 0x5051d1:c.instructions+=10;goto B5051d1;
case 0x5051d5:c.instructions+=9;goto B5051d5;
case 0x5051d8:c.instructions+=8;goto B5051d8;
case 0x5051db:c.instructions+=7;goto B5051db;
case 0x5051de:c.instructions+=6;goto B5051de;
case 0x5051e0:c.instructions+=5;goto B5051e0;
case 0x5051e4:c.instructions+=4;goto B5051e4;
case 0x5051e8:c.instructions+=3;goto B5051e8;
case 0x5051ec:c.instructions+=2;goto B5051ec;
case 0x5051f2:c.instructions+=1;goto B5051f2;
case 0x5051f7:goto L5051f7;
case 0x5051fa:c.instructions+=12;goto B5051fa;
case 0x5051fd:c.instructions+=11;goto B5051fd;
case 0x5051ff:c.instructions+=10;goto B5051ff;
case 0x505201:c.instructions+=9;goto B505201;
case 0x505204:c.instructions+=8;goto B505204;
case 0x505207:c.instructions+=7;goto B505207;
case 0x50520a:c.instructions+=6;goto B50520a;
case 0x50520c:c.instructions+=5;goto B50520c;
case 0x505210:c.instructions+=4;goto B505210;
case 0x505214:c.instructions+=3;goto B505214;
case 0x505218:c.instructions+=2;goto B505218;
case 0x50521e:c.instructions+=1;goto B50521e;
case 0x505223:goto L505223;
case 0x505226:c.instructions+=12;goto B505226;
case 0x505229:c.instructions+=11;goto B505229;
case 0x50522b:c.instructions+=10;goto B50522b;
case 0x50522d:c.instructions+=9;goto B50522d;
case 0x505230:c.instructions+=8;goto B505230;
case 0x505233:c.instructions+=7;goto B505233;
case 0x505236:c.instructions+=6;goto B505236;
case 0x505238:c.instructions+=5;goto B505238;
case 0x50523c:c.instructions+=4;goto B50523c;
case 0x505240:c.instructions+=3;goto B505240;
case 0x505244:c.instructions+=2;goto B505244;
case 0x50524a:c.instructions+=1;goto B50524a;
case 0x50524f:goto L50524f;
case 0x505252:c.instructions+=8;goto B505252;
case 0x505253:c.instructions+=7;goto B505253;
case 0x505255:c.instructions+=6;goto B505255;
case 0x505257:c.instructions+=5;goto B505257;
case 0x505258:c.instructions+=4;goto B505258;
case 0x50525b:c.instructions+=3;goto B50525b;
case 0x50525c:c.instructions+=2;goto B50525c;
case 0x50525d:c.instructions+=1;goto B50525d;
case 0x505260:goto L505260;
case 0x505261:c.instructions+=5;goto B505261;
case 0x505262:c.instructions+=4;goto B505262;
case 0x505266:c.instructions+=3;goto B505266;
case 0x505269:c.instructions+=2;goto B505269;
case 0x50526b:c.instructions+=1;goto B50526b;
case 0x50526d:goto L50526d;
case 0x505270:c.instructions+=2;goto B505270;
case 0x505272:c.instructions+=1;goto B505272;
case 0x505274:goto L505274;
case 0x505277:c.instructions+=1;goto B505277;
case 0x50527c:goto L50527c;
case 0x50527e:goto L50527e;
case 0x505281:goto L505281;
case 0x505283:c.instructions+=1;goto B505283;
case 0x505285:goto L505285;
case 0x505286:c.instructions+=3;goto B505286;
case 0x505289:c.instructions+=2;goto B505289;
case 0x50528a:c.instructions+=1;goto B50528a;
case 0x50528d:goto L50528d;
case 0x505290:c.instructions+=3;goto B505290;
case 0x505292:c.instructions+=2;goto B505292;
case 0x505295:c.instructions+=1;goto B505295;
case 0x505297:goto L505297;
case 0x50529a:c.instructions+=1;goto B50529a;
case 0x50529c:goto L50529c;
case 0x50529e:c.instructions+=4;goto B50529e;
case 0x5052a1:c.instructions+=3;goto B5052a1;
case 0x5052a3:c.instructions+=2;goto B5052a3;
case 0x5052a6:c.instructions+=1;goto B5052a6;
case 0x5052a8:goto L5052a8;
case 0x5052a9:c.instructions+=2;goto B5052a9;
case 0x5052aa:c.instructions+=1;goto B5052aa;
case 0x5052b0:goto L5052b0;
case 0x5052b3:c.instructions+=2;goto B5052b3;
case 0x5052b5:c.instructions+=1;goto B5052b5;
case 0x5052b7:goto L5052b7;
case 0x5052ba:c.instructions+=1;goto B5052ba;
case 0x5052bf:goto L5052bf;
case 0x5052c1:goto L5052c1;
case 0x5052c4:goto L5052c4;
case 0x5052c6:c.instructions+=1;goto B5052c6;
case 0x5052c8:goto L5052c8;
case 0x5052cb:goto L5052cb;
case 0x5052ce:c.instructions+=3;goto B5052ce;
case 0x5052d0:c.instructions+=2;goto B5052d0;
case 0x5052d3:c.instructions+=1;goto B5052d3;
case 0x5052d5:goto L5052d5;
case 0x5052d9:c.instructions+=2;goto B5052d9;
case 0x5052da:c.instructions+=1;goto B5052da;
case 0x5052e0:goto L5052e0;
case 0x5052e3:c.instructions+=1;goto B5052e3;
case 0x5052e5:goto L5052e5;
case 0x5052e7:c.instructions+=4;goto B5052e7;
case 0x5052ea:c.instructions+=3;goto B5052ea;
case 0x5052ec:c.instructions+=2;goto B5052ec;
case 0x5052ef:c.instructions+=1;goto B5052ef;
case 0x5052f1:goto L5052f1;
case 0x5052f2:goto L5052f2;
case 0x505300:goto L505300;
case 0x505304:c.instructions+=2;goto B505304;
case 0x505306:c.instructions+=1;goto B505306;
case 0x505308:goto L505308;
case 0x50530a:c.instructions+=1;goto B50530a;
case 0x50530c:goto L50530c;
case 0x50530e:goto L50530e;
case 0x505310:goto L505310;
case 0x505314:c.instructions+=3;goto B505314;
case 0x505315:c.instructions+=2;goto B505315;
case 0x505319:c.instructions+=1;goto B505319;
case 0x505320:goto L505320;
case 0x505322:c.instructions+=2;goto B505322;
case 0x505325:c.instructions+=1;goto B505325;
case 0x505327:goto L505327;
case 0x50532a:c.instructions+=1;goto B50532a;
case 0x50532c:goto L50532c;
case 0x50532f:goto L50532f;
case 0x505331:c.instructions+=3;goto B505331;
case 0x505332:c.instructions+=2;goto B505332;
case 0x505334:c.instructions+=1;goto B505334;
case 0x505336:goto L505336;
case 0x505338:c.instructions+=1;goto B505338;
case 0x50533a:goto L50533a;
case 0x50533c:goto L50533c;
case 0x50533d:c.instructions+=2;goto B50533d;
case 0x50533f:c.instructions+=1;goto B50533f;
case 0x505341:goto L505341;
case 0x505343:c.instructions+=1;goto B505343;
case 0x505345:goto L505345;
case 0x505348:c.instructions+=4;goto B505348;
case 0x50534b:c.instructions+=3;goto B50534b;
case 0x50534d:c.instructions+=2;goto B50534d;
case 0x50534e:c.instructions+=1;goto B50534e;
case 0x505350:goto L505350;
case 0x505352:c.instructions+=13;goto B505352;
case 0x505357:c.instructions+=12;goto B505357;
case 0x50535d:c.instructions+=11;goto B50535d;
case 0x50535e:c.instructions+=10;goto B50535e;
case 0x505365:c.instructions+=9;goto B505365;
case 0x505366:c.instructions+=8;goto B505366;
case 0x505367:c.instructions+=7;goto B505367;
case 0x505369:c.instructions+=6;goto B505369;
case 0x50536d:c.instructions+=5;goto B50536d;
case 0x505373:c.instructions+=4;goto B505373;
case 0x505376:c.instructions+=3;goto B505376;
case 0x505378:c.instructions+=2;goto B505378;
case 0x505380:c.instructions+=1;goto B505380;
case 0x505382:goto L505382;
case 0x505383:c.instructions+=1;goto B505383;
case 0x505388:goto L505388;
case 0x50538b:goto L50538b;
case 0x50538f:c.instructions+=5;goto B50538f;
case 0x505395:c.instructions+=4;goto B505395;
case 0x505396:c.instructions+=3;goto B505396;
case 0x50539d:c.instructions+=2;goto B50539d;
case 0x5053a0:c.instructions+=1;goto B5053a0;
case 0x5053b0:goto L5053b0;
case 0x5053b4:c.instructions+=2;goto B5053b4;
case 0x5053b6:c.instructions+=1;goto B5053b6;
case 0x5053b8:goto L5053b8;
case 0x5053b9:c.instructions+=3;goto B5053b9;
case 0x5053bd:c.instructions+=2;goto B5053bd;
case 0x5053bf:c.instructions+=1;goto B5053bf;
case 0x5053c1:goto L5053c1;
case 0x5053c4:c.instructions+=3;goto B5053c4;
case 0x5053c6:c.instructions+=2;goto B5053c6;
case 0x5053c9:c.instructions+=1;goto B5053c9;
case 0x5053cb:goto L5053cb;
case 0x5053ce:goto L5053ce;
case 0x5053d1:c.instructions+=2;goto B5053d1;
case 0x5053d4:c.instructions+=1;goto B5053d4;
case 0x5053d6:goto L5053d6;
case 0x5053d9:c.instructions+=3;goto B5053d9;
case 0x5053db:c.instructions+=2;goto B5053db;
case 0x5053de:c.instructions+=1;goto B5053de;
case 0x5053e0:goto L5053e0;
case 0x5053e3:goto L5053e3;
case 0x5053ea:c.instructions+=1;goto B5053ea;
case 0x5053ed:goto L5053ed;
case 0x5053f0:c.instructions+=2;goto B5053f0;
case 0x5053f1:c.instructions+=1;goto B5053f1;
case 0x5053f3:goto L5053f3;
case 0x5053f6:goto L5053f6;
case 0x5053f9:goto L5053f9;
case 0x505400:goto L505400;
case 0x505404:c.instructions+=2;goto B505404;
case 0x505406:c.instructions+=1;goto B505406;
case 0x505408:goto L505408;
case 0x50540b:c.instructions+=1;goto B50540b;
case 0x50540d:goto L50540d;
case 0x505410:c.instructions+=1;goto B505410;
case 0x505413:goto L505413;
case 0x505416:c.instructions+=1;goto B505416;
case 0x505418:goto L505418;
case 0x50541b:c.instructions+=1;goto B50541b;
case 0x50541e:goto L50541e;
case 0x505421:c.instructions+=3;goto B505421;
case 0x505423:c.instructions+=2;goto B505423;
case 0x505424:c.instructions+=1;goto B505424;
case 0x505426:goto L505426;
case 0x505429:c.instructions+=1;goto B505429;
case 0x50542c:goto L50542c;
case 0x50542f:c.instructions+=2;goto B50542f;
case 0x505431:c.instructions+=1;goto B505431;
case 0x505433:goto L505433;
case 0x505436:c.instructions+=1;goto B505436;
case 0x505439:goto L505439;
case 0x50543e:c.instructions+=4;goto B50543e;
case 0x505441:c.instructions+=3;goto B505441;
case 0x505444:c.instructions+=2;goto B505444;
case 0x505447:c.instructions+=1;goto B505447;
case 0x505448:goto L505448;
case 0x505450:goto L505450;
case 0x505454:c.instructions+=3;goto B505454;
case 0x505457:c.instructions+=2;goto B505457;
case 0x505459:c.instructions+=1;goto B505459;
case 0x50545b:goto L50545b;
case 0x50545d:c.instructions+=2;goto B50545d;
case 0x50545f:c.instructions+=1;goto B50545f;
case 0x505461:goto L505461;
case 0x505464:c.instructions+=2;goto B505464;
case 0x505467:c.instructions+=1;goto B505467;
case 0x505469:goto L505469;
case 0x50546c:c.instructions+=1;goto B50546c;
case 0x50546e:goto L50546e;
case 0x505471:goto L505471;
case 0x505474:c.instructions+=5;goto B505474;
case 0x505476:c.instructions+=4;goto B505476;
case 0x505479:c.instructions+=3;goto B505479;
case 0x50547a:c.instructions+=2;goto B50547a;
case 0x50547c:c.instructions+=1;goto B50547c;
case 0x50547e:goto L50547e;
case 0x505480:goto L505480;
case 0x505483:c.instructions+=2;goto B505483;
case 0x505485:c.instructions+=1;goto B505485;
case 0x505487:goto L505487;
case 0x50548b:c.instructions+=1;goto B50548b;
case 0x505490:goto L505490;
case 0x505493:c.instructions+=1;goto B505493;
case 0x505495:goto L505495;
case 0x505498:c.instructions+=2;goto B505498;
case 0x50549a:c.instructions+=1;goto B50549a;
case 0x50549c:goto L50549c;
case 0x5054a0:goto L5054a0;
case 0x5054a2:c.instructions+=13;goto B5054a2;
case 0x5054a6:c.instructions+=12;goto B5054a6;
case 0x5054a8:c.instructions+=11;goto B5054a8;
case 0x5054ab:c.instructions+=10;goto B5054ab;
case 0x5054ae:c.instructions+=9;goto B5054ae;
case 0x5054b0:c.instructions+=8;goto B5054b0;
case 0x5054b3:c.instructions+=7;goto B5054b3;
case 0x5054b6:c.instructions+=6;goto B5054b6;
case 0x5054b9:c.instructions+=5;goto B5054b9;
case 0x5054bc:c.instructions+=4;goto B5054bc;
case 0x5054c2:c.instructions+=3;goto B5054c2;
case 0x5054c5:c.instructions+=2;goto B5054c5;
case 0x5054c7:c.instructions+=1;goto B5054c7;
case 0x5054d0:goto L5054d0;
case 0x5054d3:c.instructions+=4;goto B5054d3;
case 0x5054d5:c.instructions+=3;goto B5054d5;
case 0x5054d6:c.instructions+=2;goto B5054d6;
case 0x5054d7:c.instructions+=1;goto B5054d7;
case 0x5054d9:goto L5054d9;
case 0x5054db:c.instructions+=1;goto B5054db;
case 0x5054dd:goto L5054dd;
case 0x5054e2:c.instructions+=2;goto B5054e2;
case 0x5054e7:c.instructions+=1;goto B5054e7;
case 0x5054e9:goto L5054e9;
case 0x5054ed:goto L5054ed;
case 0x5054f0:c.instructions+=2;goto B5054f0;
case 0x5054f2:c.instructions+=1;goto B5054f2;
case 0x5054f4:goto L5054f4;
case 0x5054f6:c.instructions+=1;goto B5054f6;
case 0x5054f8:goto L5054f8;
case 0x5054fd:c.instructions+=2;goto B5054fd;
case 0x505502:c.instructions+=1;goto B505502;
case 0x505504:goto L505504;
case 0x505508:goto L505508;
case 0x50550a:c.instructions+=2;goto B50550a;
case 0x50550c:c.instructions+=1;goto B50550c;
case 0x50550e:goto L50550e;
case 0x505510:c.instructions+=1;goto B505510;
case 0x505512:goto L505512;
case 0x505517:c.instructions+=2;goto B505517;
case 0x50551c:c.instructions+=1;goto B50551c;
case 0x50551e:goto L50551e;
case 0x505521:goto L505521;
case 0x505524:c.instructions+=2;goto B505524;
case 0x505526:c.instructions+=1;goto B505526;
case 0x505528:goto L505528;
case 0x50552a:c.instructions+=9;goto B50552a;
case 0x50552d:c.instructions+=8;goto B50552d;
case 0x50552f:c.instructions+=7;goto B50552f;
case 0x505532:c.instructions+=6;goto B505532;
case 0x505534:c.instructions+=5;goto B505534;
case 0x505537:c.instructions+=4;goto B505537;
case 0x505538:c.instructions+=3;goto B505538;
case 0x50553a:c.instructions+=2;goto B50553a;
case 0x50553b:c.instructions+=1;goto B50553b;
case 0x50553c:goto L50553c;
case 0x505541:c.instructions+=2;goto B505541;
case 0x505546:c.instructions+=1;goto B505546;
case 0x505548:goto L505548;
case 0x50554c:goto L50554c;
case 0x50554f:c.instructions+=8;goto B50554f;
case 0x505551:c.instructions+=7;goto B505551;
case 0x505554:c.instructions+=6;goto B505554;
case 0x505556:c.instructions+=5;goto B505556;
case 0x505559:c.instructions+=4;goto B505559;
case 0x50555a:c.instructions+=3;goto B50555a;
case 0x50555c:c.instructions+=2;goto B50555c;
case 0x50555d:c.instructions+=1;goto B50555d;
case 0x505560:goto L505560;
case 0x505562:c.instructions+=10;goto B505562;
case 0x505566:c.instructions+=9;goto B505566;
case 0x505569:c.instructions+=8;goto B505569;
case 0x50556c:c.instructions+=7;goto B50556c;
case 0x50556f:c.instructions+=6;goto B50556f;
case 0x505572:c.instructions+=5;goto B505572;
case 0x505575:c.instructions+=4;goto B505575;
case 0x505578:c.instructions+=3;goto B505578;
case 0x50557a:c.instructions+=2;goto B50557a;
case 0x50557c:c.instructions+=1;goto B50557c;
case 0x505580:goto L505580;
case 0x505583:c.instructions+=25;goto B505583;
case 0x505587:c.instructions+=24;goto B505587;
case 0x505588:c.instructions+=23;goto B505588;
case 0x50558b:c.instructions+=22;goto B50558b;
case 0x50558c:c.instructions+=21;goto B50558c;
case 0x50558f:c.instructions+=20;goto B50558f;
case 0x505590:c.instructions+=19;goto B505590;
case 0x505593:c.instructions+=18;goto B505593;
case 0x505595:c.instructions+=17;goto B505595;
case 0x505597:c.instructions+=16;goto B505597;
case 0x505599:c.instructions+=15;goto B505599;
case 0x50559b:c.instructions+=14;goto B50559b;
case 0x50559e:c.instructions+=13;goto B50559e;
case 0x5055a0:c.instructions+=12;goto B5055a0;
case 0x5055a3:c.instructions+=11;goto B5055a3;
case 0x5055a7:c.instructions+=10;goto B5055a7;
case 0x5055a9:c.instructions+=9;goto B5055a9;
case 0x5055ab:c.instructions+=8;goto B5055ab;
case 0x5055ad:c.instructions+=7;goto B5055ad;
case 0x5055b0:c.instructions+=6;goto B5055b0;
case 0x5055b1:c.instructions+=5;goto B5055b1;
case 0x5055b4:c.instructions+=4;goto B5055b4;
case 0x5055b5:c.instructions+=3;goto B5055b5;
case 0x5055b8:c.instructions+=2;goto B5055b8;
case 0x5055b9:c.instructions+=1;goto B5055b9;
case 0x5055c0:goto L5055c0;
case 0x5055c4:c.instructions+=2;goto B5055c4;
case 0x5055c6:c.instructions+=1;goto B5055c6;
case 0x5055c8:goto L5055c8;
case 0x5055cb:c.instructions+=1;goto B5055cb;
case 0x5055cd:goto L5055cd;
case 0x5055d0:c.instructions+=1;goto B5055d0;
case 0x5055d3:goto L5055d3;
case 0x5055d6:c.instructions+=1;goto B5055d6;
case 0x5055d8:goto L5055d8;
case 0x5055db:c.instructions+=1;goto B5055db;
case 0x5055de:goto L5055de;
case 0x5055e1:c.instructions+=2;goto B5055e1;
case 0x5055e3:c.instructions+=1;goto B5055e3;
case 0x5055e5:goto L5055e5;
case 0x5055e8:c.instructions+=1;goto B5055e8;
case 0x5055eb:goto L5055eb;
case 0x5055ee:c.instructions+=2;goto B5055ee;
case 0x5055f0:c.instructions+=1;goto B5055f0;
case 0x5055f2:goto L5055f2;
case 0x5055f5:c.instructions+=1;goto B5055f5;
case 0x5055f8:goto L5055f8;
case 0x5055fd:c.instructions+=3;goto B5055fd;
case 0x505600:c.instructions+=2;goto B505600;
case 0x505603:c.instructions+=1;goto B505603;
case 0x505606:goto L505606;
case 0x505608:c.instructions+=1;goto B505608;
case 0x505610:goto L505610;
case 0x505616:c.instructions+=4;goto B505616;
case 0x505617:c.instructions+=3;goto B505617;
case 0x50561b:c.instructions+=2;goto B50561b;
case 0x50561c:c.instructions+=1;goto B50561c;
case 0x505621:goto L505621;
case 0x505623:c.instructions+=2;goto B505623;
case 0x505624:c.instructions+=1;goto B505624;
case 0x505626:goto L505626;
case 0x50562c:c.instructions+=1;goto B50562c;
case 0x505631:goto L505631;
case 0x505632:c.instructions+=1;goto B505632;
case 0x505633:goto L505633;
case 0x505639:c.instructions+=1;goto B505639;
case 0x50563e:goto L50563e;
case 0x505643:c.instructions+=3;goto B505643;
case 0x505646:c.instructions+=2;goto B505646;
case 0x505648:c.instructions+=1;goto B505648;
case 0x50564a:goto L50564a;
case 0x50564b:c.instructions+=1;goto B50564b;
case 0x505650:goto L505650;
case 0x505653:c.instructions+=1;goto B505653;
case 0x50565d:goto L50565d;
case 0x50565e:c.instructions+=1;goto B50565e;
case 0x505660:goto L505660;
case 0x505661:c.instructions+=43;goto B505661;
case 0x505663:c.instructions+=42;goto B505663;
case 0x505666:c.instructions+=41;goto B505666;
case 0x50566c:c.instructions+=40;goto B50566c;
case 0x50566f:c.instructions+=39;goto B50566f;
case 0x505672:c.instructions+=38;goto B505672;
case 0x505675:c.instructions+=37;goto B505675;
case 0x505679:c.instructions+=36;goto B505679;
case 0x50567a:c.instructions+=35;goto B50567a;
case 0x50567d:c.instructions+=34;goto B50567d;
case 0x50567f:c.instructions+=33;goto B50567f;
case 0x505681:c.instructions+=32;goto B505681;
case 0x505688:c.instructions+=31;goto B505688;
case 0x50568a:c.instructions+=30;goto B50568a;
case 0x50568c:c.instructions+=29;goto B50568c;
case 0x505693:c.instructions+=28;goto B505693;
case 0x505696:c.instructions+=27;goto B505696;
case 0x505698:c.instructions+=26;goto B505698;
case 0x50569f:c.instructions+=25;goto B50569f;
case 0x5056a0:c.instructions+=24;goto B5056a0;
case 0x5056a3:c.instructions+=23;goto B5056a3;
case 0x5056a4:c.instructions+=22;goto B5056a4;
case 0x5056a7:c.instructions+=21;goto B5056a7;
case 0x5056a9:c.instructions+=20;goto B5056a9;
case 0x5056ab:c.instructions+=19;goto B5056ab;
case 0x5056b2:c.instructions+=18;goto B5056b2;
case 0x5056b9:c.instructions+=17;goto B5056b9;
case 0x5056bb:c.instructions+=16;goto B5056bb;
case 0x5056bd:c.instructions+=15;goto B5056bd;
case 0x5056bf:c.instructions+=14;goto B5056bf;
case 0x5056c6:c.instructions+=13;goto B5056c6;
case 0x5056c9:c.instructions+=12;goto B5056c9;
case 0x5056d0:c.instructions+=11;goto B5056d0;
case 0x5056d3:c.instructions+=10;goto B5056d3;
case 0x5056d6:c.instructions+=9;goto B5056d6;
case 0x5056dd:c.instructions+=8;goto B5056dd;
case 0x5056e4:c.instructions+=7;goto B5056e4;
case 0x5056eb:c.instructions+=6;goto B5056eb;
case 0x5056ef:c.instructions+=5;goto B5056ef;
case 0x5056f7:c.instructions+=4;goto B5056f7;
case 0x505702:c.instructions+=3;goto B505702;
case 0x505709:c.instructions+=2;goto B505709;
case 0x505710:c.instructions+=1;goto B505710;
case 0x505712:goto L505712;
case 0x505716:c.instructions+=1;goto B505716;
case 0x50571d:goto L50571d;
case 0x505721:c.instructions+=2;goto B505721;
case 0x505723:c.instructions+=1;goto B505723;
case 0x505729:goto L505729;
case 0x50572c:c.instructions+=24;goto B50572c;
case 0x505730:c.instructions+=23;goto B505730;
case 0x505733:c.instructions+=22;goto B505733;
case 0x505735:c.instructions+=21;goto B505735;
case 0x505739:c.instructions+=20;goto B505739;
case 0x505740:c.instructions+=19;goto B505740;
case 0x505742:c.instructions+=18;goto B505742;
case 0x505746:c.instructions+=17;goto B505746;
case 0x505749:c.instructions+=16;goto B505749;
case 0x50574d:c.instructions+=15;goto B50574d;
case 0x505751:c.instructions+=14;goto B505751;
case 0x505755:c.instructions+=13;goto B505755;
case 0x505758:c.instructions+=12;goto B505758;
case 0x50575c:c.instructions+=11;goto B50575c;
case 0x505760:c.instructions+=10;goto B505760;
case 0x505764:c.instructions+=9;goto B505764;
case 0x505766:c.instructions+=8;goto B505766;
case 0x50576a:c.instructions+=7;goto B50576a;
case 0x50576d:c.instructions+=6;goto B50576d;
case 0x50576f:c.instructions+=5;goto B50576f;
case 0x505773:c.instructions+=4;goto B505773;
case 0x505779:c.instructions+=3;goto B505779;
case 0x50577b:c.instructions+=2;goto B50577b;
case 0x50577e:c.instructions+=1;goto B50577e;
case 0x505780:goto L505780;
case 0x505784:c.instructions+=28;goto B505784;
case 0x505787:c.instructions+=27;goto B505787;
case 0x50578b:c.instructions+=26;goto B50578b;
case 0x505792:c.instructions+=25;goto B505792;
case 0x505794:c.instructions+=24;goto B505794;
case 0x505796:c.instructions+=23;goto B505796;
case 0x505799:c.instructions+=22;goto B505799;
case 0x5057a1:c.instructions+=21;goto B5057a1;
case 0x5057a6:c.instructions+=20;goto B5057a6;
case 0x5057a9:c.instructions+=19;goto B5057a9;
case 0x5057ad:c.instructions+=18;goto B5057ad;
case 0x5057b0:c.instructions+=17;goto B5057b0;
case 0x5057b4:c.instructions+=16;goto B5057b4;
case 0x5057b8:c.instructions+=15;goto B5057b8;
case 0x5057ba:c.instructions+=14;goto B5057ba;
case 0x5057bd:c.instructions+=13;goto B5057bd;
case 0x5057c1:c.instructions+=12;goto B5057c1;
case 0x5057c5:c.instructions+=11;goto B5057c5;
case 0x5057c8:c.instructions+=10;goto B5057c8;
case 0x5057cc:c.instructions+=9;goto B5057cc;
case 0x5057d0:c.instructions+=8;goto B5057d0;
case 0x5057d2:c.instructions+=7;goto B5057d2;
case 0x5057d6:c.instructions+=6;goto B5057d6;
case 0x5057da:c.instructions+=5;goto B5057da;
case 0x5057dc:c.instructions+=4;goto B5057dc;
case 0x5057df:c.instructions+=3;goto B5057df;
case 0x5057e2:c.instructions+=2;goto B5057e2;
case 0x5057e5:c.instructions+=1;goto B5057e5;
case 0x5057e7:goto L5057e7;
case 0x5057ef:c.instructions+=1;goto B5057ef;
case 0x5057f4:goto L5057f4;
case 0x5057f9:c.instructions+=2;goto B5057f9;
case 0x505801:c.instructions+=1;goto B505801;
case 0x505807:goto L505807;
case 0x50580b:c.instructions+=37;goto B50580b;
case 0x50580e:c.instructions+=36;goto B50580e;
case 0x505815:c.instructions+=35;goto B505815;
case 0x505819:c.instructions+=34;goto B505819;
case 0x50581c:c.instructions+=33;goto B50581c;
case 0x505820:c.instructions+=32;goto B505820;
case 0x505823:c.instructions+=31;goto B505823;
case 0x50582a:c.instructions+=30;goto B50582a;
case 0x50582c:c.instructions+=29;goto B50582c;
case 0x505830:c.instructions+=28;goto B505830;
case 0x505832:c.instructions+=27;goto B505832;
case 0x505836:c.instructions+=26;goto B505836;
case 0x505839:c.instructions+=25;goto B505839;
case 0x50583e:c.instructions+=24;goto B50583e;
case 0x505840:c.instructions+=23;goto B505840;
case 0x505844:c.instructions+=22;goto B505844;
case 0x505847:c.instructions+=21;goto B505847;
case 0x50584e:c.instructions+=20;goto B50584e;
case 0x505851:c.instructions+=19;goto B505851;
case 0x505858:c.instructions+=18;goto B505858;
case 0x50585d:c.instructions+=17;goto B50585d;
case 0x50585f:c.instructions+=16;goto B50585f;
case 0x505867:c.instructions+=15;goto B505867;
case 0x50586e:c.instructions+=14;goto B50586e;
case 0x505872:c.instructions+=13;goto B505872;
case 0x505875:c.instructions+=12;goto B505875;
case 0x505879:c.instructions+=11;goto B505879;
case 0x50587c:c.instructions+=10;goto B50587c;
case 0x50587e:c.instructions+=9;goto B50587e;
case 0x505882:c.instructions+=8;goto B505882;
case 0x505885:c.instructions+=7;goto B505885;
case 0x505887:c.instructions+=6;goto B505887;
case 0x50588b:c.instructions+=5;goto B50588b;
case 0x505891:c.instructions+=4;goto B505891;
case 0x505893:c.instructions+=3;goto B505893;
case 0x505897:c.instructions+=2;goto B505897;
case 0x50589a:c.instructions+=1;goto B50589a;
case 0x5058a0:goto L5058a0;
case 0x5058a2:c.instructions+=1;goto B5058a2;
case 0x5058a8:goto L5058a8;
case 0x5058ab:c.instructions+=120;goto B5058ab;
case 0x5058b2:c.instructions+=119;goto B5058b2;
case 0x5058b6:c.instructions+=118;goto B5058b6;
case 0x5058b9:c.instructions+=117;goto B5058b9;
case 0x5058bd:c.instructions+=116;goto B5058bd;
case 0x5058c0:c.instructions+=115;goto B5058c0;
case 0x5058c4:c.instructions+=114;goto B5058c4;
case 0x5058c7:c.instructions+=113;goto B5058c7;
case 0x5058ce:c.instructions+=112;goto B5058ce;
case 0x5058d5:c.instructions+=111;goto B5058d5;
case 0x5058d7:c.instructions+=110;goto B5058d7;
case 0x5058d9:c.instructions+=109;goto B5058d9;
case 0x5058dc:c.instructions+=108;goto B5058dc;
case 0x5058e0:c.instructions+=107;goto B5058e0;
case 0x5058e3:c.instructions+=106;goto B5058e3;
case 0x5058e7:c.instructions+=105;goto B5058e7;
case 0x5058eb:c.instructions+=104;goto B5058eb;
case 0x5058ef:c.instructions+=103;goto B5058ef;
case 0x5058f3:c.instructions+=102;goto B5058f3;
case 0x5058f5:c.instructions+=101;goto B5058f5;
case 0x5058f9:c.instructions+=100;goto B5058f9;
case 0x5058fc:c.instructions+=99;goto B5058fc;
case 0x5058fe:c.instructions+=98;goto B5058fe;
case 0x505902:c.instructions+=97;goto B505902;
case 0x505906:c.instructions+=96;goto B505906;
case 0x505908:c.instructions+=95;goto B505908;
case 0x50590c:c.instructions+=94;goto B50590c;
case 0x50590f:c.instructions+=93;goto B50590f;
case 0x505911:c.instructions+=92;goto B505911;
case 0x505915:c.instructions+=91;goto B505915;
case 0x505918:c.instructions+=90;goto B505918;
case 0x50591a:c.instructions+=89;goto B50591a;
case 0x50591c:c.instructions+=88;goto B50591c;
case 0x50591e:c.instructions+=87;goto B50591e;
case 0x505920:c.instructions+=86;goto B505920;
case 0x505922:c.instructions+=85;goto B505922;
case 0x505924:c.instructions+=84;goto B505924;
case 0x505926:c.instructions+=83;goto B505926;
case 0x505929:c.instructions+=82;goto B505929;
case 0x50592c:c.instructions+=81;goto B50592c;
case 0x50592e:c.instructions+=80;goto B50592e;
case 0x505931:c.instructions+=79;goto B505931;
case 0x505934:c.instructions+=78;goto B505934;
case 0x505938:c.instructions+=77;goto B505938;
case 0x50593c:c.instructions+=76;goto B50593c;
case 0x50593f:c.instructions+=75;goto B50593f;
case 0x505943:c.instructions+=74;goto B505943;
case 0x505945:c.instructions+=73;goto B505945;
case 0x50594c:c.instructions+=72;goto B50594c;
case 0x50594e:c.instructions+=71;goto B50594e;
case 0x505950:c.instructions+=70;goto B505950;
case 0x505953:c.instructions+=69;goto B505953;
case 0x505956:c.instructions+=68;goto B505956;
case 0x505959:c.instructions+=67;goto B505959;
case 0x50595c:c.instructions+=66;goto B50595c;
case 0x50595f:c.instructions+=65;goto B50595f;
case 0x505966:c.instructions+=64;goto B505966;
case 0x505969:c.instructions+=63;goto B505969;
case 0x50596d:c.instructions+=62;goto B50596d;
case 0x505970:c.instructions+=61;goto B505970;
case 0x505977:c.instructions+=60;goto B505977;
case 0x50597b:c.instructions+=59;goto B50597b;
case 0x50597d:c.instructions+=58;goto B50597d;
case 0x50597f:c.instructions+=57;goto B50597f;
case 0x505983:c.instructions+=56;goto B505983;
case 0x505985:c.instructions+=55;goto B505985;
case 0x505989:c.instructions+=54;goto B505989;
case 0x50598d:c.instructions+=53;goto B50598d;
case 0x505990:c.instructions+=52;goto B505990;
case 0x505993:c.instructions+=51;goto B505993;
case 0x505997:c.instructions+=50;goto B505997;
case 0x50599b:c.instructions+=49;goto B50599b;
case 0x50599f:c.instructions+=48;goto B50599f;
case 0x5059a3:c.instructions+=47;goto B5059a3;
case 0x5059a5:c.instructions+=46;goto B5059a5;
case 0x5059a8:c.instructions+=45;goto B5059a8;
case 0x5059ad:c.instructions+=44;goto B5059ad;
case 0x5059b1:c.instructions+=43;goto B5059b1;
case 0x5059b5:c.instructions+=42;goto B5059b5;
case 0x5059b8:c.instructions+=41;goto B5059b8;
case 0x5059bc:c.instructions+=40;goto B5059bc;
case 0x5059bf:c.instructions+=39;goto B5059bf;
case 0x5059c2:c.instructions+=38;goto B5059c2;
case 0x5059c6:c.instructions+=37;goto B5059c6;
case 0x5059c9:c.instructions+=36;goto B5059c9;
case 0x5059cd:c.instructions+=35;goto B5059cd;
case 0x5059d4:c.instructions+=34;goto B5059d4;
case 0x5059d7:c.instructions+=33;goto B5059d7;
case 0x5059db:c.instructions+=32;goto B5059db;
case 0x5059e2:c.instructions+=31;goto B5059e2;
case 0x5059e4:c.instructions+=30;goto B5059e4;
case 0x5059e6:c.instructions+=29;goto B5059e6;
case 0x5059ed:c.instructions+=28;goto B5059ed;
case 0x5059ef:c.instructions+=27;goto B5059ef;
case 0x5059f6:c.instructions+=26;goto B5059f6;
case 0x5059fd:c.instructions+=25;goto B5059fd;
case 0x5059ff:c.instructions+=24;goto B5059ff;
case 0x505a06:c.instructions+=23;goto B505a06;
case 0x505a0d:c.instructions+=22;goto B505a0d;
case 0x505a14:c.instructions+=21;goto B505a14;
case 0x505a17:c.instructions+=20;goto B505a17;
case 0x505a1b:c.instructions+=19;goto B505a1b;
case 0x505a22:c.instructions+=18;goto B505a22;
case 0x505a26:c.instructions+=17;goto B505a26;
case 0x505a2d:c.instructions+=16;goto B505a2d;
case 0x505a34:c.instructions+=15;goto B505a34;
case 0x505a38:c.instructions+=14;goto B505a38;
case 0x505a3f:c.instructions+=13;goto B505a3f;
case 0x505a43:c.instructions+=12;goto B505a43;
case 0x505a45:c.instructions+=11;goto B505a45;
case 0x505a48:c.instructions+=10;goto B505a48;
case 0x505a49:c.instructions+=9;goto B505a49;
case 0x505a50:c.instructions+=8;goto B505a50;
case 0x505a57:c.instructions+=7;goto B505a57;
case 0x505a59:c.instructions+=6;goto B505a59;
case 0x505a5b:c.instructions+=5;goto B505a5b;
case 0x505a5e:c.instructions+=4;goto B505a5e;
case 0x505a61:c.instructions+=3;goto B505a61;
case 0x505a64:c.instructions+=2;goto B505a64;
case 0x505a66:c.instructions+=1;goto B505a66;
case 0x505a68:goto L505a68;
case 0x505a6c:goto L505a6c;
case 0x505a6f:c.instructions+=27;goto B505a6f;
case 0x505a72:c.instructions+=26;goto B505a72;
case 0x505a75:c.instructions+=25;goto B505a75;
case 0x505a77:c.instructions+=24;goto B505a77;
case 0x505a7b:c.instructions+=23;goto B505a7b;
case 0x505a7d:c.instructions+=22;goto B505a7d;
case 0x505a80:c.instructions+=21;goto B505a80;
case 0x505a81:c.instructions+=20;goto B505a81;
case 0x505a84:c.instructions+=19;goto B505a84;
case 0x505a87:c.instructions+=18;goto B505a87;
case 0x505a8b:c.instructions+=17;goto B505a8b;
case 0x505a8e:c.instructions+=16;goto B505a8e;
case 0x505a91:c.instructions+=15;goto B505a91;
case 0x505a94:c.instructions+=14;goto B505a94;
case 0x505a98:c.instructions+=13;goto B505a98;
case 0x505a9c:c.instructions+=12;goto B505a9c;
case 0x505aa0:c.instructions+=11;goto B505aa0;
case 0x505aa3:c.instructions+=10;goto B505aa3;
case 0x505aa6:c.instructions+=9;goto B505aa6;
case 0x505aaa:c.instructions+=8;goto B505aaa;
case 0x505aad:c.instructions+=7;goto B505aad;
case 0x505ab0:c.instructions+=6;goto B505ab0;
case 0x505ab3:c.instructions+=5;goto B505ab3;
case 0x505ab6:c.instructions+=4;goto B505ab6;
case 0x505ab8:c.instructions+=3;goto B505ab8;
case 0x505abb:c.instructions+=2;goto B505abb;
case 0x505abe:c.instructions+=1;goto B505abe;
case 0x505ac3:goto L505ac3;
case 0x505ac5:c.instructions+=1;goto B505ac5;
case 0x505acb:goto L505acb;
case 0x505ace:c.instructions+=121;goto B505ace;
case 0x505ad5:c.instructions+=120;goto B505ad5;
case 0x505ad9:c.instructions+=119;goto B505ad9;
case 0x505adc:c.instructions+=118;goto B505adc;
case 0x505ae0:c.instructions+=117;goto B505ae0;
case 0x505ae3:c.instructions+=116;goto B505ae3;
case 0x505ae7:c.instructions+=115;goto B505ae7;
case 0x505aea:c.instructions+=114;goto B505aea;
case 0x505af1:c.instructions+=113;goto B505af1;
case 0x505af8:c.instructions+=112;goto B505af8;
case 0x505afa:c.instructions+=111;goto B505afa;
case 0x505afc:c.instructions+=110;goto B505afc;
case 0x505aff:c.instructions+=109;goto B505aff;
case 0x505b03:c.instructions+=108;goto B505b03;
case 0x505b06:c.instructions+=107;goto B505b06;
case 0x505b0a:c.instructions+=106;goto B505b0a;
case 0x505b0e:c.instructions+=105;goto B505b0e;
case 0x505b12:c.instructions+=104;goto B505b12;
case 0x505b16:c.instructions+=103;goto B505b16;
case 0x505b18:c.instructions+=102;goto B505b18;
case 0x505b1c:c.instructions+=101;goto B505b1c;
case 0x505b1f:c.instructions+=100;goto B505b1f;
case 0x505b21:c.instructions+=99;goto B505b21;
case 0x505b25:c.instructions+=98;goto B505b25;
case 0x505b29:c.instructions+=97;goto B505b29;
case 0x505b2b:c.instructions+=96;goto B505b2b;
case 0x505b2f:c.instructions+=95;goto B505b2f;
case 0x505b32:c.instructions+=94;goto B505b32;
case 0x505b34:c.instructions+=93;goto B505b34;
case 0x505b38:c.instructions+=92;goto B505b38;
case 0x505b3b:c.instructions+=91;goto B505b3b;
case 0x505b3d:c.instructions+=90;goto B505b3d;
case 0x505b3f:c.instructions+=89;goto B505b3f;
case 0x505b41:c.instructions+=88;goto B505b41;
case 0x505b43:c.instructions+=87;goto B505b43;
case 0x505b45:c.instructions+=86;goto B505b45;
case 0x505b47:c.instructions+=85;goto B505b47;
case 0x505b49:c.instructions+=84;goto B505b49;
case 0x505b4c:c.instructions+=83;goto B505b4c;
case 0x505b4f:c.instructions+=82;goto B505b4f;
case 0x505b51:c.instructions+=81;goto B505b51;
case 0x505b54:c.instructions+=80;goto B505b54;
case 0x505b57:c.instructions+=79;goto B505b57;
case 0x505b5b:c.instructions+=78;goto B505b5b;
case 0x505b5f:c.instructions+=77;goto B505b5f;
case 0x505b62:c.instructions+=76;goto B505b62;
case 0x505b66:c.instructions+=75;goto B505b66;
case 0x505b68:c.instructions+=74;goto B505b68;
case 0x505b6f:c.instructions+=73;goto B505b6f;
case 0x505b71:c.instructions+=72;goto B505b71;
case 0x505b73:c.instructions+=71;goto B505b73;
case 0x505b76:c.instructions+=70;goto B505b76;
case 0x505b79:c.instructions+=69;goto B505b79;
case 0x505b7c:c.instructions+=68;goto B505b7c;
case 0x505b7f:c.instructions+=67;goto B505b7f;
case 0x505b82:c.instructions+=66;goto B505b82;
case 0x505b89:c.instructions+=65;goto B505b89;
case 0x505b8c:c.instructions+=64;goto B505b8c;
case 0x505b90:c.instructions+=63;goto B505b90;
case 0x505b93:c.instructions+=62;goto B505b93;
case 0x505b9a:c.instructions+=61;goto B505b9a;
case 0x505b9e:c.instructions+=60;goto B505b9e;
case 0x505ba0:c.instructions+=59;goto B505ba0;
case 0x505ba2:c.instructions+=58;goto B505ba2;
case 0x505ba6:c.instructions+=57;goto B505ba6;
case 0x505ba8:c.instructions+=56;goto B505ba8;
case 0x505bac:c.instructions+=55;goto B505bac;
case 0x505bb0:c.instructions+=54;goto B505bb0;
case 0x505bb3:c.instructions+=53;goto B505bb3;
case 0x505bb6:c.instructions+=52;goto B505bb6;
case 0x505bba:c.instructions+=51;goto B505bba;
case 0x505bbe:c.instructions+=50;goto B505bbe;
case 0x505bc2:c.instructions+=49;goto B505bc2;
case 0x505bc6:c.instructions+=48;goto B505bc6;
case 0x505bc8:c.instructions+=47;goto B505bc8;
case 0x505bcb:c.instructions+=46;goto B505bcb;
case 0x505bd0:c.instructions+=45;goto B505bd0;
case 0x505bd4:c.instructions+=44;goto B505bd4;
case 0x505bd8:c.instructions+=43;goto B505bd8;
case 0x505bdb:c.instructions+=42;goto B505bdb;
case 0x505bdf:c.instructions+=41;goto B505bdf;
case 0x505be2:c.instructions+=40;goto B505be2;
case 0x505be5:c.instructions+=39;goto B505be5;
case 0x505be9:c.instructions+=38;goto B505be9;
case 0x505bec:c.instructions+=37;goto B505bec;
case 0x505bf0:c.instructions+=36;goto B505bf0;
case 0x505bf7:c.instructions+=35;goto B505bf7;
case 0x505bfa:c.instructions+=34;goto B505bfa;
case 0x505bfe:c.instructions+=33;goto B505bfe;
case 0x505c05:c.instructions+=32;goto B505c05;
case 0x505c07:c.instructions+=31;goto B505c07;
case 0x505c09:c.instructions+=30;goto B505c09;
case 0x505c0d:c.instructions+=29;goto B505c0d;
case 0x505c0f:c.instructions+=28;goto B505c0f;
case 0x505c13:c.instructions+=27;goto B505c13;
case 0x505c1a:c.instructions+=26;goto B505c1a;
case 0x505c1c:c.instructions+=25;goto B505c1c;
case 0x505c20:c.instructions+=24;goto B505c20;
case 0x505c27:c.instructions+=23;goto B505c27;
case 0x505c2b:c.instructions+=22;goto B505c2b;
case 0x505c2e:c.instructions+=21;goto B505c2e;
case 0x505c32:c.instructions+=20;goto B505c32;
case 0x505c36:c.instructions+=19;goto B505c36;
case 0x505c3a:c.instructions+=18;goto B505c3a;
case 0x505c3e:c.instructions+=17;goto B505c3e;
case 0x505c45:c.instructions+=16;goto B505c45;
case 0x505c49:c.instructions+=15;goto B505c49;
case 0x505c50:c.instructions+=14;goto B505c50;
case 0x505c54:c.instructions+=13;goto B505c54;
case 0x505c56:c.instructions+=12;goto B505c56;
case 0x505c59:c.instructions+=11;goto B505c59;
case 0x505c5a:c.instructions+=10;goto B505c5a;
case 0x505c61:c.instructions+=9;goto B505c61;
case 0x505c68:c.instructions+=8;goto B505c68;
case 0x505c6a:c.instructions+=7;goto B505c6a;
case 0x505c6c:c.instructions+=6;goto B505c6c;
case 0x505c6f:c.instructions+=5;goto B505c6f;
case 0x505c73:c.instructions+=4;goto B505c73;
case 0x505c76:c.instructions+=3;goto B505c76;
case 0x505c79:c.instructions+=2;goto B505c79;
case 0x505c7b:c.instructions+=1;goto B505c7b;
case 0x505c7d:goto L505c7d;
case 0x505c81:goto L505c81;
case 0x505c85:c.instructions+=13;goto B505c85;
case 0x505c88:c.instructions+=12;goto B505c88;
case 0x505c8c:c.instructions+=11;goto B505c8c;
case 0x505c8e:c.instructions+=10;goto B505c8e;
case 0x505c90:c.instructions+=9;goto B505c90;
case 0x505c94:c.instructions+=8;goto B505c94;
case 0x505c97:c.instructions+=7;goto B505c97;
case 0x505c99:c.instructions+=6;goto B505c99;
case 0x505c9d:c.instructions+=5;goto B505c9d;
case 0x505ca3:c.instructions+=4;goto B505ca3;
case 0x505ca5:c.instructions+=3;goto B505ca5;
case 0x505ca9:c.instructions+=2;goto B505ca9;
case 0x505cac:c.instructions+=1;goto B505cac;
case 0x505cb2:goto L505cb2;
case 0x505cb4:c.instructions+=1;goto B505cb4;
case 0x505cba:goto L505cba;
case 0x505cbd:c.instructions+=107;goto B505cbd;
case 0x505cc0:c.instructions+=106;goto B505cc0;
case 0x505cc3:c.instructions+=105;goto B505cc3;
case 0x505cc6:c.instructions+=104;goto B505cc6;
case 0x505cc8:c.instructions+=103;goto B505cc8;
case 0x505ccb:c.instructions+=102;goto B505ccb;
case 0x505cd2:c.instructions+=101;goto B505cd2;
case 0x505cd9:c.instructions+=100;goto B505cd9;
case 0x505cdb:c.instructions+=99;goto B505cdb;
case 0x505cdd:c.instructions+=98;goto B505cdd;
case 0x505ce0:c.instructions+=97;goto B505ce0;
case 0x505ce4:c.instructions+=96;goto B505ce4;
case 0x505ce7:c.instructions+=95;goto B505ce7;
case 0x505ceb:c.instructions+=94;goto B505ceb;
case 0x505cee:c.instructions+=93;goto B505cee;
case 0x505cf2:c.instructions+=92;goto B505cf2;
case 0x505cf5:c.instructions+=91;goto B505cf5;
case 0x505cf7:c.instructions+=90;goto B505cf7;
case 0x505cfb:c.instructions+=89;goto B505cfb;
case 0x505cfe:c.instructions+=88;goto B505cfe;
case 0x505d00:c.instructions+=87;goto B505d00;
case 0x505d04:c.instructions+=86;goto B505d04;
case 0x505d08:c.instructions+=85;goto B505d08;
case 0x505d0a:c.instructions+=84;goto B505d0a;
case 0x505d0e:c.instructions+=83;goto B505d0e;
case 0x505d11:c.instructions+=82;goto B505d11;
case 0x505d13:c.instructions+=81;goto B505d13;
case 0x505d17:c.instructions+=80;goto B505d17;
case 0x505d1a:c.instructions+=79;goto B505d1a;
case 0x505d1c:c.instructions+=78;goto B505d1c;
case 0x505d1e:c.instructions+=77;goto B505d1e;
case 0x505d20:c.instructions+=76;goto B505d20;
case 0x505d22:c.instructions+=75;goto B505d22;
case 0x505d24:c.instructions+=74;goto B505d24;
case 0x505d26:c.instructions+=73;goto B505d26;
case 0x505d28:c.instructions+=72;goto B505d28;
case 0x505d2b:c.instructions+=71;goto B505d2b;
case 0x505d2e:c.instructions+=70;goto B505d2e;
case 0x505d30:c.instructions+=69;goto B505d30;
case 0x505d33:c.instructions+=68;goto B505d33;
case 0x505d36:c.instructions+=67;goto B505d36;
case 0x505d39:c.instructions+=66;goto B505d39;
case 0x505d3c:c.instructions+=65;goto B505d3c;
case 0x505d3f:c.instructions+=64;goto B505d3f;
case 0x505d41:c.instructions+=63;goto B505d41;
case 0x505d43:c.instructions+=62;goto B505d43;
case 0x505d45:c.instructions+=61;goto B505d45;
case 0x505d48:c.instructions+=60;goto B505d48;
case 0x505d4b:c.instructions+=59;goto B505d4b;
case 0x505d4e:c.instructions+=58;goto B505d4e;
case 0x505d51:c.instructions+=57;goto B505d51;
case 0x505d54:c.instructions+=56;goto B505d54;
case 0x505d57:c.instructions+=55;goto B505d57;
case 0x505d59:c.instructions+=54;goto B505d59;
case 0x505d5c:c.instructions+=53;goto B505d5c;
case 0x505d5e:c.instructions+=52;goto B505d5e;
case 0x505d60:c.instructions+=51;goto B505d60;
case 0x505d64:c.instructions+=50;goto B505d64;
case 0x505d66:c.instructions+=49;goto B505d66;
case 0x505d6a:c.instructions+=48;goto B505d6a;
case 0x505d6e:c.instructions+=47;goto B505d6e;
case 0x505d71:c.instructions+=46;goto B505d71;
case 0x505d75:c.instructions+=45;goto B505d75;
case 0x505d78:c.instructions+=44;goto B505d78;
case 0x505d7c:c.instructions+=43;goto B505d7c;
case 0x505d7e:c.instructions+=42;goto B505d7e;
case 0x505d81:c.instructions+=41;goto B505d81;
case 0x505d85:c.instructions+=40;goto B505d85;
case 0x505d88:c.instructions+=39;goto B505d88;
case 0x505d8b:c.instructions+=38;goto B505d8b;
case 0x505d8f:c.instructions+=37;goto B505d8f;
case 0x505d92:c.instructions+=36;goto B505d92;
case 0x505d93:c.instructions+=35;goto B505d93;
case 0x505d96:c.instructions+=34;goto B505d96;
case 0x505d99:c.instructions+=33;goto B505d99;
case 0x505d9c:c.instructions+=32;goto B505d9c;
case 0x505d9f:c.instructions+=31;goto B505d9f;
case 0x505da6:c.instructions+=30;goto B505da6;
case 0x505da8:c.instructions+=29;goto B505da8;
case 0x505dab:c.instructions+=28;goto B505dab;
case 0x505dae:c.instructions+=27;goto B505dae;
case 0x505db3:c.instructions+=26;goto B505db3;
case 0x505dba:c.instructions+=25;goto B505dba;
case 0x505dbc:c.instructions+=24;goto B505dbc;
case 0x505dbe:c.instructions+=23;goto B505dbe;
case 0x505dc5:c.instructions+=22;goto B505dc5;
case 0x505dc7:c.instructions+=21;goto B505dc7;
case 0x505dce:c.instructions+=20;goto B505dce;
case 0x505dd5:c.instructions+=19;goto B505dd5;
case 0x505dd7:c.instructions+=18;goto B505dd7;
case 0x505dde:c.instructions+=17;goto B505dde;
case 0x505de5:c.instructions+=16;goto B505de5;
case 0x505dec:c.instructions+=15;goto B505dec;
case 0x505def:c.instructions+=14;goto B505def;
case 0x505df6:c.instructions+=13;goto B505df6;
case 0x505df9:c.instructions+=12;goto B505df9;
case 0x505e00:c.instructions+=11;goto B505e00;
case 0x505e03:c.instructions+=10;goto B505e03;
case 0x505e0a:c.instructions+=9;goto B505e0a;
case 0x505e11:c.instructions+=8;goto B505e11;
case 0x505e13:c.instructions+=7;goto B505e13;
case 0x505e16:c.instructions+=6;goto B505e16;
case 0x505e19:c.instructions+=5;goto B505e19;
case 0x505e20:c.instructions+=4;goto B505e20;
case 0x505e27:c.instructions+=3;goto B505e27;
case 0x505e2a:c.instructions+=2;goto B505e2a;
case 0x505e2d:c.instructions+=1;goto B505e2d;
case 0x505e30:goto L505e30;
case 0x505e33:c.instructions+=23;goto B505e33;
case 0x505e36:c.instructions+=22;goto B505e36;
case 0x505e38:c.instructions+=21;goto B505e38;
case 0x505e3a:c.instructions+=20;goto B505e3a;
case 0x505e3e:c.instructions+=19;goto B505e3e;
case 0x505e40:c.instructions+=18;goto B505e40;
case 0x505e43:c.instructions+=17;goto B505e43;
case 0x505e46:c.instructions+=16;goto B505e46;
case 0x505e48:c.instructions+=15;goto B505e48;
case 0x505e4b:c.instructions+=14;goto B505e4b;
case 0x505e4f:c.instructions+=13;goto B505e4f;
case 0x505e52:c.instructions+=12;goto B505e52;
case 0x505e56:c.instructions+=11;goto B505e56;
case 0x505e5a:c.instructions+=10;goto B505e5a;
case 0x505e5d:c.instructions+=9;goto B505e5d;
case 0x505e60:c.instructions+=8;goto B505e60;
case 0x505e62:c.instructions+=7;goto B505e62;
case 0x505e65:c.instructions+=6;goto B505e65;
case 0x505e69:c.instructions+=5;goto B505e69;
case 0x505e6b:c.instructions+=4;goto B505e6b;
case 0x505e6d:c.instructions+=3;goto B505e6d;
case 0x505e70:c.instructions+=2;goto B505e70;
case 0x505e73:c.instructions+=1;goto B505e73;
case 0x505e78:goto L505e78;
case 0x505e7a:c.instructions+=1;goto B505e7a;
case 0x505e80:goto L505e80;
case 0x505e83:c.instructions+=103;goto B505e83;
case 0x505e86:c.instructions+=102;goto B505e86;
case 0x505e89:c.instructions+=101;goto B505e89;
case 0x505e8c:c.instructions+=100;goto B505e8c;
case 0x505e8e:c.instructions+=99;goto B505e8e;
case 0x505e91:c.instructions+=98;goto B505e91;
case 0x505e98:c.instructions+=97;goto B505e98;
case 0x505e9f:c.instructions+=96;goto B505e9f;
case 0x505ea1:c.instructions+=95;goto B505ea1;
case 0x505ea3:c.instructions+=94;goto B505ea3;
case 0x505ea6:c.instructions+=93;goto B505ea6;
case 0x505eaa:c.instructions+=92;goto B505eaa;
case 0x505ead:c.instructions+=91;goto B505ead;
case 0x505eb1:c.instructions+=90;goto B505eb1;
case 0x505eb4:c.instructions+=89;goto B505eb4;
case 0x505eb8:c.instructions+=88;goto B505eb8;
case 0x505ebb:c.instructions+=87;goto B505ebb;
case 0x505ebd:c.instructions+=86;goto B505ebd;
case 0x505ec1:c.instructions+=85;goto B505ec1;
case 0x505ec4:c.instructions+=84;goto B505ec4;
case 0x505ec6:c.instructions+=83;goto B505ec6;
case 0x505eca:c.instructions+=82;goto B505eca;
case 0x505ece:c.instructions+=81;goto B505ece;
case 0x505ed0:c.instructions+=80;goto B505ed0;
case 0x505ed4:c.instructions+=79;goto B505ed4;
case 0x505ed7:c.instructions+=78;goto B505ed7;
case 0x505ed9:c.instructions+=77;goto B505ed9;
case 0x505edd:c.instructions+=76;goto B505edd;
case 0x505ee0:c.instructions+=75;goto B505ee0;
case 0x505ee2:c.instructions+=74;goto B505ee2;
case 0x505ee4:c.instructions+=73;goto B505ee4;
case 0x505ee6:c.instructions+=72;goto B505ee6;
case 0x505ee8:c.instructions+=71;goto B505ee8;
case 0x505eea:c.instructions+=70;goto B505eea;
case 0x505eec:c.instructions+=69;goto B505eec;
case 0x505eee:c.instructions+=68;goto B505eee;
case 0x505ef1:c.instructions+=67;goto B505ef1;
case 0x505ef4:c.instructions+=66;goto B505ef4;
case 0x505ef6:c.instructions+=65;goto B505ef6;
case 0x505ef9:c.instructions+=64;goto B505ef9;
case 0x505efc:c.instructions+=63;goto B505efc;
case 0x505eff:c.instructions+=62;goto B505eff;
case 0x505f02:c.instructions+=61;goto B505f02;
case 0x505f05:c.instructions+=60;goto B505f05;
case 0x505f07:c.instructions+=59;goto B505f07;
case 0x505f09:c.instructions+=58;goto B505f09;
case 0x505f0b:c.instructions+=57;goto B505f0b;
case 0x505f0e:c.instructions+=56;goto B505f0e;
case 0x505f11:c.instructions+=55;goto B505f11;
case 0x505f14:c.instructions+=54;goto B505f14;
case 0x505f17:c.instructions+=53;goto B505f17;
case 0x505f1a:c.instructions+=52;goto B505f1a;
case 0x505f1d:c.instructions+=51;goto B505f1d;
case 0x505f1f:c.instructions+=50;goto B505f1f;
case 0x505f22:c.instructions+=49;goto B505f22;
case 0x505f24:c.instructions+=48;goto B505f24;
case 0x505f26:c.instructions+=47;goto B505f26;
case 0x505f2a:c.instructions+=46;goto B505f2a;
case 0x505f2c:c.instructions+=45;goto B505f2c;
case 0x505f30:c.instructions+=44;goto B505f30;
case 0x505f34:c.instructions+=43;goto B505f34;
case 0x505f37:c.instructions+=42;goto B505f37;
case 0x505f3b:c.instructions+=41;goto B505f3b;
case 0x505f3e:c.instructions+=40;goto B505f3e;
case 0x505f42:c.instructions+=39;goto B505f42;
case 0x505f44:c.instructions+=38;goto B505f44;
case 0x505f47:c.instructions+=37;goto B505f47;
case 0x505f4b:c.instructions+=36;goto B505f4b;
case 0x505f4e:c.instructions+=35;goto B505f4e;
case 0x505f51:c.instructions+=34;goto B505f51;
case 0x505f55:c.instructions+=33;goto B505f55;
case 0x505f58:c.instructions+=32;goto B505f58;
case 0x505f5d:c.instructions+=31;goto B505f5d;
case 0x505f60:c.instructions+=30;goto B505f60;
case 0x505f63:c.instructions+=29;goto B505f63;
case 0x505f66:c.instructions+=28;goto B505f66;
case 0x505f6d:c.instructions+=27;goto B505f6d;
case 0x505f6f:c.instructions+=26;goto B505f6f;
case 0x505f72:c.instructions+=25;goto B505f72;
case 0x505f79:c.instructions+=24;goto B505f79;
case 0x505f7b:c.instructions+=23;goto B505f7b;
case 0x505f7d:c.instructions+=22;goto B505f7d;
case 0x505f81:c.instructions+=21;goto B505f81;
case 0x505f83:c.instructions+=20;goto B505f83;
case 0x505f87:c.instructions+=19;goto B505f87;
case 0x505f8e:c.instructions+=18;goto B505f8e;
case 0x505f90:c.instructions+=17;goto B505f90;
case 0x505f94:c.instructions+=16;goto B505f94;
case 0x505f9b:c.instructions+=15;goto B505f9b;
case 0x505f9f:c.instructions+=14;goto B505f9f;
case 0x505fa2:c.instructions+=13;goto B505fa2;
case 0x505fa6:c.instructions+=12;goto B505fa6;
case 0x505fa9:c.instructions+=11;goto B505fa9;
case 0x505fad:c.instructions+=10;goto B505fad;
case 0x505fb0:c.instructions+=9;goto B505fb0;
case 0x505fb7:c.instructions+=8;goto B505fb7;
case 0x505fbe:c.instructions+=7;goto B505fbe;
case 0x505fc0:c.instructions+=6;goto B505fc0;
case 0x505fc3:c.instructions+=5;goto B505fc3;
case 0x505fc6:c.instructions+=4;goto B505fc6;
case 0x505fcd:c.instructions+=3;goto B505fcd;
case 0x505fd4:c.instructions+=2;goto B505fd4;
case 0x505fd6:c.instructions+=1;goto B505fd6;
case 0x505fd9:goto L505fd9;
case 0x505fda:c.instructions+=4;goto B505fda;
case 0x505fdd:c.instructions+=3;goto B505fdd;
case 0x505fe0:c.instructions+=2;goto B505fe0;
case 0x505fe4:c.instructions+=1;goto B505fe4;
case 0x505fe7:goto L505fe7;
case 0x505feb:c.instructions+=7;goto B505feb;
case 0x505fee:c.instructions+=6;goto B505fee;
case 0x505ff2:c.instructions+=5;goto B505ff2;
case 0x505ff5:c.instructions+=4;goto B505ff5;
case 0x505ff7:c.instructions+=3;goto B505ff7;
case 0x505ffb:c.instructions+=2;goto B505ffb;
case 0x505ffe:c.instructions+=1;goto B505ffe;
default:missing_instruction(c.pc);}
B505002:L505002:{c.instructions+=5;NFSU2_TR(0x505002);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B505005:{NFSU2_TR(0x505005);
w4(R+12,u32(0x1ull));
}
B50500a:{NFSU2_TR(0x50500a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B50500c:{NFSU2_TR(0x50500c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50500e:{NFSU2_TR(0x50500e);
if(r1(R+518)){{goto L505019;}}
}
B505010:L505010:{c.instructions+=3;NFSU2_TR(0x505010);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B505013:{NFSU2_TR(0x505013);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B505015:{NFSU2_TR(0x505015);
if(r1(R+512)){{goto L505019;}}
}
B505017:L505017:{c.instructions+=1;NFSU2_TR(0x505017);
__builtin_memmove((R+0),(R+4),4);
}
B505019:L505019:{c.instructions+=5;NFSU2_TR(0x505019);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B50501c:{NFSU2_TR(0x50501c);
w4(R+12,u32(0x1ull));
}
B505021:{NFSU2_TR(0x505021);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B505023:{NFSU2_TR(0x505023);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B505025:{NFSU2_TR(0x505025);
if(r1(R+518)){{goto L50502f;}}
}
B505027:L505027:{c.instructions+=3;NFSU2_TR(0x505027);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B505029:{NFSU2_TR(0x505029);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B50502b:{NFSU2_TR(0x50502b);
if(r1(R+512)){{goto L50502f;}}
}
B50502d:L50502d:{c.instructions+=1;NFSU2_TR(0x50502d);
__builtin_memmove((R+0),(R+4),4);
}
B50502f:L50502f:{c.instructions+=5;NFSU2_TR(0x50502f);
w4(R+12,u32(0x1ull));
}
B505034:{NFSU2_TR(0x505034);
__builtin_memmove((R+4),(R+8),4);
}
B505036:{NFSU2_TR(0x505036);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B505038:{NFSU2_TR(0x505038);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50503a:{NFSU2_TR(0x50503a);
if(r1(R+518)){{goto L505045;}}
}
B50503c:L50503c:{c.instructions+=3;NFSU2_TR(0x50503c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50503f:{NFSU2_TR(0x50503f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B505041:{NFSU2_TR(0x505041);
if(r1(R+512)){{goto L505045;}}
}
B505043:L505043:{c.instructions+=1;NFSU2_TR(0x505043);
__builtin_memmove((R+0),(R+4),4);
}
B505045:L505045:{c.instructions+=5;NFSU2_TR(0x505045);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B505048:{NFSU2_TR(0x505048);
w4(R+12,u32(0x1ull));
}
B50504d:{NFSU2_TR(0x50504d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B50504f:{NFSU2_TR(0x50504f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B505051:{NFSU2_TR(0x505051);
if(r1(R+518)){{goto L50505c;}}
}
B505053:L505053:{c.instructions+=3;NFSU2_TR(0x505053);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B505056:{NFSU2_TR(0x505056);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B505058:{NFSU2_TR(0x505058);
if(r1(R+512)){{goto L50505c;}}
}
B50505a:L50505a:{c.instructions+=1;NFSU2_TR(0x50505a);
__builtin_memmove((R+0),(R+4),4);
}
B50505c:L50505c:{c.instructions+=5;NFSU2_TR(0x50505c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50505f:{NFSU2_TR(0x50505f);
w4(R+12,u32(0x1ull));
}
B505064:{NFSU2_TR(0x505064);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B505066:{NFSU2_TR(0x505066);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B505068:{NFSU2_TR(0x505068);
if(r1(R+518)){{goto L505073;}}
}
B50506a:L50506a:{c.instructions+=3;NFSU2_TR(0x50506a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50506d:{NFSU2_TR(0x50506d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B50506f:{NFSU2_TR(0x50506f);
if(r1(R+512)){{goto L505073;}}
}
B505071:L505071:{c.instructions+=1;NFSU2_TR(0x505071);
__builtin_memmove((R+0),(R+4),4);
}
B505073:L505073:{c.instructions+=5;NFSU2_TR(0x505073);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B505076:{NFSU2_TR(0x505076);
w4(R+12,u32(0x1ull));
}
B50507b:{NFSU2_TR(0x50507b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B50507d:{NFSU2_TR(0x50507d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50507f:{NFSU2_TR(0x50507f);
if(r1(R+518)){{goto L50508a;}}
}
B505081:L505081:{c.instructions+=3;NFSU2_TR(0x505081);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B505084:{NFSU2_TR(0x505084);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B505086:{NFSU2_TR(0x505086);
if(r1(R+512)){{goto L50508a;}}
}
B505088:L505088:{c.instructions+=1;NFSU2_TR(0x505088);
__builtin_memmove((R+0),(R+4),4);
}
B50508a:L50508a:{c.instructions+=5;NFSU2_TR(0x50508a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50508d:{NFSU2_TR(0x50508d);
w4(R+12,u32(0x1ull));
}
B505092:{NFSU2_TR(0x505092);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B505094:{NFSU2_TR(0x505094);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B505096:{NFSU2_TR(0x505096);
if(r1(R+518)){{goto L5050a1;}}
}
B505098:L505098:{c.instructions+=3;NFSU2_TR(0x505098);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50509b:{NFSU2_TR(0x50509b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B50509d:{NFSU2_TR(0x50509d);
if(r1(R+512)){{goto L5050a1;}}
}
B50509f:L50509f:{c.instructions+=1;NFSU2_TR(0x50509f);
__builtin_memmove((R+0),(R+4),4);
}
B5050a1:L5050a1:{c.instructions+=5;NFSU2_TR(0x5050a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5050a4:{NFSU2_TR(0x5050a4);
w4(R+12,u32(0x1ull));
}
B5050a9:{NFSU2_TR(0x5050a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B5050ab:{NFSU2_TR(0x5050ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5050ad:{NFSU2_TR(0x5050ad);
if(r1(R+518)){{goto L5050b8;}}
}
B5050af:L5050af:{c.instructions+=3;NFSU2_TR(0x5050af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5050b2:{NFSU2_TR(0x5050b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5050b4:{NFSU2_TR(0x5050b4);
if(r1(R+512)){{goto L5050b8;}}
}
B5050b6:L5050b6:{c.instructions+=1;NFSU2_TR(0x5050b6);
__builtin_memmove((R+0),(R+4),4);
}
B5050b8:L5050b8:{c.instructions+=5;NFSU2_TR(0x5050b8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B5050bb:{NFSU2_TR(0x5050bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B5050be:{NFSU2_TR(0x5050be);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B5050c1:{NFSU2_TR(0x5050c1);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x20ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5050c4:{NFSU2_TR(0x5050c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x505002u);}goto L505002;}}
}
B5050ca:L5050ca:{c.instructions+=4;NFSU2_TR(0x5050ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5050cb:{NFSU2_TR(0x5050cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5050cc:{NFSU2_TR(0x5050cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5050cd:{NFSU2_TR(0x5050cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5050d0:L5050d0:{c.instructions+=9;NFSU2_TR(0x5050d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5050d4:{NFSU2_TR(0x5050d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5050d5:{NFSU2_TR(0x5050d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5050d9:{NFSU2_TR(0x5050d9);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B5050db:{NFSU2_TR(0x5050db);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5050df:{NFSU2_TR(0x5050df);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5050e3:{NFSU2_TR(0x5050e3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5050e7:{NFSU2_TR(0x5050e7);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5050ed:{NFSU2_TR(0x5050ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5050f2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5050f2:L5050f2:{c.instructions+=7;NFSU2_TR(0x5050f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5050f6:{NFSU2_TR(0x5050f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B5050f8:{NFSU2_TR(0x5050f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5050fc:{NFSU2_TR(0x5050fc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5050fe:{NFSU2_TR(0x5050fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B505100:{NFSU2_TR(0x505100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B505101:{NFSU2_TR(0x505101);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B505110:L505110:{c.instructions+=19;NFSU2_TR(0x505110);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B505114:{NFSU2_TR(0x505114);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505118:{NFSU2_TR(0x505118);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50511a:{NFSU2_TR(0x50511a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50511c:{NFSU2_TR(0x50511c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B505120:{NFSU2_TR(0x505120);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B505121:{NFSU2_TR(0x505121);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B505125:{NFSU2_TR(0x505125);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505129:{NFSU2_TR(0x505129);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50512b:{NFSU2_TR(0x50512b);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50512d:{NFSU2_TR(0x50512d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50512f:{NFSU2_TR(0x50512f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505132:{NFSU2_TR(0x505132);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505135:{NFSU2_TR(0x505135);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505139:{NFSU2_TR(0x505139);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50513c:{NFSU2_TR(0x50513c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50513f:{NFSU2_TR(0x50513f);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505142:{NFSU2_TR(0x505142);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B505143:{NFSU2_TR(0x505143);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B505150:L505150:{c.instructions+=25;NFSU2_TR(0x505150);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505154:{NFSU2_TR(0x505154);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B505158:{NFSU2_TR(0x505158);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50515a:{NFSU2_TR(0x50515a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50515e:{NFSU2_TR(0x50515e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505160:{NFSU2_TR(0x505160);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B505161:{NFSU2_TR(0x505161);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B505165:{NFSU2_TR(0x505165);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505169:{NFSU2_TR(0x505169);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50516b:{NFSU2_TR(0x50516b);
if(mod_hook_table[35]){SPILL();c.pc=0x50516bu;mod_hook_table[35](c);SPILL();if(c.pc!=0x50516bu){TAIL_DYNAMIC(c.pc);}goto B505172;}
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50516d:{NFSU2_TR(0x50516d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50516f:{NFSU2_TR(0x50516f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505172:{NFSU2_TR(0x505172);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505175:{NFSU2_TR(0x505175);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505179:{NFSU2_TR(0x505179);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50517c:{NFSU2_TR(0x50517c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50517f:{NFSU2_TR(0x50517f);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505182:{NFSU2_TR(0x505182);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505185:{NFSU2_TR(0x505185);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505188:{NFSU2_TR(0x505188);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50518c:{NFSU2_TR(0x50518c);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50518f:{NFSU2_TR(0x50518f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505192:{NFSU2_TR(0x505192);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505195:{NFSU2_TR(0x505195);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B505196:{NFSU2_TR(0x505196);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5051a0:L5051a0:{c.instructions+=14;NFSU2_TR(0x5051a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5051a1:{NFSU2_TR(0x5051a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5051a2:{NFSU2_TR(0x5051a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5051a3:{NFSU2_TR(0x5051a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5051a7:{NFSU2_TR(0x5051a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5051a9:{NFSU2_TR(0x5051a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5051aa:{NFSU2_TR(0x5051aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5051ae:{NFSU2_TR(0x5051ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5051b0:{NFSU2_TR(0x5051b0);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B5051b2:{NFSU2_TR(0x5051b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5051b6:{NFSU2_TR(0x5051b6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5051ba:{NFSU2_TR(0x5051ba);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5051be:{NFSU2_TR(0x5051be);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5051c4:{NFSU2_TR(0x5051c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5051c9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5051c9:L5051c9:{c.instructions+=13;NFSU2_TR(0x5051c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5051cd:{NFSU2_TR(0x5051cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B5051cf:{NFSU2_TR(0x5051cf);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B5051d1:{NFSU2_TR(0x5051d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5051d5:{NFSU2_TR(0x5051d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B5051d8:{NFSU2_TR(0x5051d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5051db:{NFSU2_TR(0x5051db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5051de:{NFSU2_TR(0x5051de);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5051e0:{NFSU2_TR(0x5051e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5051e4:{NFSU2_TR(0x5051e4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5051e8:{NFSU2_TR(0x5051e8);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5051ec:{NFSU2_TR(0x5051ec);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5051f2:{NFSU2_TR(0x5051f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5051f7ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5051f7:L5051f7:{c.instructions+=13;NFSU2_TR(0x5051f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5051fa:{NFSU2_TR(0x5051fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5051fd:{NFSU2_TR(0x5051fd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5051ff:{NFSU2_TR(0x5051ff);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B505201:{NFSU2_TR(0x505201);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505204:{NFSU2_TR(0x505204);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505207:{NFSU2_TR(0x505207);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50520a:{NFSU2_TR(0x50520a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B50520c:{NFSU2_TR(0x50520c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505210:{NFSU2_TR(0x505210);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B505214:{NFSU2_TR(0x505214);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505218:{NFSU2_TR(0x505218);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50521e:{NFSU2_TR(0x50521e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x505223ull));
TAIL_STATIC(0x75bed4u,75b);
}
B505223:L505223:{c.instructions+=13;NFSU2_TR(0x505223);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B505226:{NFSU2_TR(0x505226);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B505229:{NFSU2_TR(0x505229);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B50522b:{NFSU2_TR(0x50522b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B50522d:{NFSU2_TR(0x50522d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505230:{NFSU2_TR(0x505230);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B505233:{NFSU2_TR(0x505233);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505236:{NFSU2_TR(0x505236);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B505238:{NFSU2_TR(0x505238);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50523c:{NFSU2_TR(0x50523c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B505240:{NFSU2_TR(0x505240);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505244:{NFSU2_TR(0x505244);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50524a:{NFSU2_TR(0x50524a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50524full));
TAIL_STATIC(0x75bed4u,75b);
}
B50524f:L50524f:{c.instructions+=9;NFSU2_TR(0x50524f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B505252:{NFSU2_TR(0x505252);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B505253:{NFSU2_TR(0x505253);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B505255:{NFSU2_TR(0x505255);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B505257:{NFSU2_TR(0x505257);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B505258:{NFSU2_TR(0x505258);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50525b:{NFSU2_TR(0x50525b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50525c:{NFSU2_TR(0x50525c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50525d:{NFSU2_TR(0x50525d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B505260:L505260:{c.instructions+=6;NFSU2_TR(0x505260);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B505261:{NFSU2_TR(0x505261);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B505262:{NFSU2_TR(0x505262);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B505266:{NFSU2_TR(0x505266);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B505269:{NFSU2_TR(0x505269);
__builtin_memmove((R+24),(R+4),4);
}
B50526b:{NFSU2_TR(0x50526b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L505285;}}
}
B50526d:L50526d:{c.instructions+=3;NFSU2_TR(0x50526d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B505270:{NFSU2_TR(0x505270);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B505272:{NFSU2_TR(0x505272);
if(r1(R+518)){{goto L50527e;}}
}
B505274:L505274:{c.instructions+=2;NFSU2_TR(0x505274);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B505277:{NFSU2_TR(0x505277);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50527cull));
TAIL_STATIC(0x4fe890u,4fe);
}
B50527c:L50527c:{c.instructions+=1;NFSU2_TR(0x50527c);
{goto L505281;}
}
B50527e:L50527e:{c.instructions+=1;NFSU2_TR(0x50527e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505281:L505281:{c.instructions+=2;NFSU2_TR(0x505281);
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
B505283:{NFSU2_TR(0x505283);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50528d;}}
}
B505285:L505285:{c.instructions+=4;NFSU2_TR(0x505285);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B505286:{NFSU2_TR(0x505286);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B505289:{NFSU2_TR(0x505289);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50528a:{NFSU2_TR(0x50528a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50528d:L50528d:{c.instructions+=4;NFSU2_TR(0x50528d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B505290:{NFSU2_TR(0x505290);
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
B505292:{NFSU2_TR(0x505292);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B505295:{NFSU2_TR(0x505295);
if(r1(R+518)){{goto L5052a8;}}
}
B505297:L505297:{c.instructions+=2;NFSU2_TR(0x505297);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
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
B50529a:{NFSU2_TR(0x50529a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5052a8;}}
}
B50529c:L50529c:{c.instructions+=5;NFSU2_TR(0x50529c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B50529e:{NFSU2_TR(0x50529e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5052a1:{NFSU2_TR(0x5052a1);
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
B5052a3:{NFSU2_TR(0x5052a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5052a6:{NFSU2_TR(0x5052a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x505297u);}goto L505297;}}
}
B5052a8:L5052a8:{c.instructions+=3;NFSU2_TR(0x5052a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5052a9:{NFSU2_TR(0x5052a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5052aa:{NFSU2_TR(0x5052aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5052b0:L5052b0:{c.instructions+=3;NFSU2_TR(0x5052b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5052b3:{NFSU2_TR(0x5052b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5052b5:{NFSU2_TR(0x5052b5);
if(r1(R+518)){{goto L5052c1;}}
}
B5052b7:L5052b7:{c.instructions+=2;NFSU2_TR(0x5052b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5052ba:{NFSU2_TR(0x5052ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5052bfull));
TAIL_STATIC(0x4fe890u,4fe);
}
B5052bf:L5052bf:{c.instructions+=1;NFSU2_TR(0x5052bf);
{goto L5052c4;}
}
B5052c1:L5052c1:{c.instructions+=1;NFSU2_TR(0x5052c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5052c4:L5052c4:{c.instructions+=2;NFSU2_TR(0x5052c4);
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
B5052c6:{NFSU2_TR(0x5052c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5052cb;}}
}
B5052c8:L5052c8:{c.instructions+=1;NFSU2_TR(0x5052c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5052cb:L5052cb:{c.instructions+=4;NFSU2_TR(0x5052cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5052ce:{NFSU2_TR(0x5052ce);
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
B5052d0:{NFSU2_TR(0x5052d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5052d3:{NFSU2_TR(0x5052d3);
if(r1(R+518)){{goto L5052f2;}}
}
B5052d5:L5052d5:{c.instructions+=3;NFSU2_TR(0x5052d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5052d9:{NFSU2_TR(0x5052d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5052da:{NFSU2_TR(0x5052da);
__builtin_memmove((R+12),(R+12),4);
}
B5052e0:L5052e0:{c.instructions+=2;NFSU2_TR(0x5052e0);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5052e3:{NFSU2_TR(0x5052e3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5052f1;}}
}
B5052e5:L5052e5:{c.instructions+=5;NFSU2_TR(0x5052e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5052e7:{NFSU2_TR(0x5052e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5052ea:{NFSU2_TR(0x5052ea);
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
B5052ec:{NFSU2_TR(0x5052ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5052ef:{NFSU2_TR(0x5052ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5052e0u);}goto L5052e0;}}
}
B5052f1:L5052f1:{c.instructions+=1;NFSU2_TR(0x5052f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5052f2:L5052f2:{c.instructions+=1;NFSU2_TR(0x5052f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B505300:L505300:{c.instructions+=3;NFSU2_TR(0x505300);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B505304:{NFSU2_TR(0x505304);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x61ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B505306:{NFSU2_TR(0x505306);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50530e;}}
}
B505308:L505308:{c.instructions+=2;NFSU2_TR(0x505308);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x7aull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50530a:{NFSU2_TR(0x50530a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50530e;}}
}
B50530c:L50530c:{c.instructions+=1;NFSU2_TR(0x50530c);
u8 U[3];
w1(R+512,carry<u8>(r1(R+0),u8(0xe0ull)));
w1(R+523,scarry<u8>(r1(R+0),u8(0xe0ull)));
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50530e:L50530e:{c.instructions+=1;NFSU2_TR(0x50530e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B505310:L505310:{c.instructions+=4;NFSU2_TR(0x505310);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B505314:{NFSU2_TR(0x505314);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B505315:{NFSU2_TR(0x505315);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B505319:{NFSU2_TR(0x505319);
__builtin_memmove((R+16),(R+16),4);
}
B505320:L505320:{c.instructions+=3;NFSU2_TR(0x505320);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B505322:{NFSU2_TR(0x505322);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B505325:{NFSU2_TR(0x505325);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50532f;}}
}
B505327:L505327:{c.instructions+=2;NFSU2_TR(0x505327);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x7aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B50532a:{NFSU2_TR(0x50532a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50532f;}}
}
B50532c:L50532c:{c.instructions+=1;NFSU2_TR(0x50532c);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0xe0ull))));
}
B50532f:L50532f:{c.instructions+=4;NFSU2_TR(0x50532f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B505331:{NFSU2_TR(0x505331);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B505332:{NFSU2_TR(0x505332);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B505334:{NFSU2_TR(0x505334);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50533c;}}
}
B505336:L505336:{c.instructions+=2;NFSU2_TR(0x505336);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B505338:{NFSU2_TR(0x505338);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50533c;}}
}
B50533a:L50533a:{c.instructions+=1;NFSU2_TR(0x50533a);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B50533c:L50533c:{c.instructions+=3;NFSU2_TR(0x50533c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B50533d:{NFSU2_TR(0x50533d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50533f:{NFSU2_TR(0x50533f);
if(r1(R+518)){{goto L505345;}}
}
B505341:L505341:{c.instructions+=2;NFSU2_TR(0x505341);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B505343:{NFSU2_TR(0x505343);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x505320u);}goto L505320;}}
}
B505345:L505345:{c.instructions+=5;NFSU2_TR(0x505345);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B505348:{NFSU2_TR(0x505348);
w4(R+0,u32(s32(s8(r1(R+4)))));
}
B50534b:{NFSU2_TR(0x50534b);
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
B50534d:{NFSU2_TR(0x50534d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50534e:{NFSU2_TR(0x50534e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B505350:L505350:{c.instructions+=14;NFSU2_TR(0x505350);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B505352:{NFSU2_TR(0x505352);
u8 U[4];
w4(U+0,u32(0x776f68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B505357:{NFSU2_TR(0x505357);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50535d:{NFSU2_TR(0x50535d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50535e:{NFSU2_TR(0x50535e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505365:{NFSU2_TR(0x505365);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B505366:{NFSU2_TR(0x505366);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B505367:{NFSU2_TR(0x505367);
__builtin_memmove((R+24),(R+4),4);
}
B505369:{NFSU2_TR(0x505369);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50536d:{NFSU2_TR(0x50536d);
u8 U[4];
w4(U+0,u32(0x79ab0cull));
s4(u32(r4(R+24)),r4(U+0));
}
B505373:{NFSU2_TR(0x505373);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505376:{NFSU2_TR(0x505376);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B505378:{NFSU2_TR(0x505378);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B505380:{NFSU2_TR(0x505380);
if(r1(R+518)){{goto L50538b;}}
}
B505382:L505382:{c.instructions+=2;NFSU2_TR(0x505382);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B505383:{NFSU2_TR(0x505383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x505388ull));
TAIL_STATIC(0x575630u,575);
}
B505388:L505388:{c.instructions+=1;NFSU2_TR(0x505388);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50538b:L50538b:{c.instructions+=6;NFSU2_TR(0x50538b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50538f:{NFSU2_TR(0x50538f);
u8 U[4];
w4(U+0,u32(0x79a9e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B505395:{NFSU2_TR(0x505395);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B505396:{NFSU2_TR(0x505396);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50539d:{NFSU2_TR(0x50539d);
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
B5053a0:{NFSU2_TR(0x5053a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5053b0:L5053b0:{c.instructions+=3;NFSU2_TR(0x5053b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5053b4:{NFSU2_TR(0x5053b4);
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
B5053b6:{NFSU2_TR(0x5053b6);
if(r1(R+518)){{goto L5053f9;}}
}
B5053b8:L5053b8:{c.instructions+=4;NFSU2_TR(0x5053b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5053b9:{NFSU2_TR(0x5053b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5053bd:{NFSU2_TR(0x5053bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5053bf:{NFSU2_TR(0x5053bf);
if(r1(R+518)){{goto L5053d6;}}
}
B5053c1:L5053c1:{c.instructions+=4;NFSU2_TR(0x5053c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5053c4:{NFSU2_TR(0x5053c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5053c6:{NFSU2_TR(0x5053c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5053c9:{NFSU2_TR(0x5053c9);
if(r1(R+518)){{goto L5053ce;}}
}
B5053cb:L5053cb:{c.instructions+=1;NFSU2_TR(0x5053cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5053ce:L5053ce:{c.instructions+=3;NFSU2_TR(0x5053ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5053d1:{NFSU2_TR(0x5053d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5053d4:{NFSU2_TR(0x5053d4);
{goto L5053ed;}
}
B5053d6:L5053d6:{c.instructions+=4;NFSU2_TR(0x5053d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5053d9:{NFSU2_TR(0x5053d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5053db:{NFSU2_TR(0x5053db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5053de:{NFSU2_TR(0x5053de);
if(r1(R+518)){{goto L5053e3;}}
}
B5053e0:L5053e0:{c.instructions+=1;NFSU2_TR(0x5053e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5053e3:L5053e3:{c.instructions+=2;NFSU2_TR(0x5053e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5053ea:{NFSU2_TR(0x5053ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5053ed:L5053ed:{c.instructions+=3;NFSU2_TR(0x5053ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5053f0:{NFSU2_TR(0x5053f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5053f1:{NFSU2_TR(0x5053f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5053f6;}}
}
B5053f3:L5053f3:{c.instructions+=1;NFSU2_TR(0x5053f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5053f6:L5053f6:{c.instructions+=1;NFSU2_TR(0x5053f6);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B5053f9:L5053f9:{c.instructions+=1;NFSU2_TR(0x5053f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B505400:L505400:{c.instructions+=3;NFSU2_TR(0x505400);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505404:{NFSU2_TR(0x505404);
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
B505406:{NFSU2_TR(0x505406);
if(r1(R+518)){{goto L505448;}}
}
B505408:L505408:{c.instructions+=2;NFSU2_TR(0x505408);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B50540b:{NFSU2_TR(0x50540b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L505413;}}
}
B50540d:L50540d:{c.instructions+=2;NFSU2_TR(0x50540d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B505410:{NFSU2_TR(0x505410);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505413:L505413:{c.instructions+=2;NFSU2_TR(0x505413);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B505416:{NFSU2_TR(0x505416);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50541e;}}
}
B505418:L505418:{c.instructions+=2;NFSU2_TR(0x505418);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50541b:{NFSU2_TR(0x50541b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50541e:L50541e:{c.instructions+=4;NFSU2_TR(0x50541e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B505421:{NFSU2_TR(0x505421);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B505423:{NFSU2_TR(0x505423);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B505424:{NFSU2_TR(0x505424);
if(r1(R+518)){{goto L50542c;}}
}
B505426:L505426:{c.instructions+=2;NFSU2_TR(0x505426);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B505429:{NFSU2_TR(0x505429);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50542c:L50542c:{c.instructions+=3;NFSU2_TR(0x50542c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50542f:{NFSU2_TR(0x50542f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B505431:{NFSU2_TR(0x505431);
if(r1(R+518)){{goto L505439;}}
}
B505433:L505433:{c.instructions+=2;NFSU2_TR(0x505433);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B505436:{NFSU2_TR(0x505436);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505439:L505439:{c.instructions+=5;NFSU2_TR(0x505439);
w4(R+8,u32(0xabadcafeull));
}
B50543e:{NFSU2_TR(0x50543e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505441:{NFSU2_TR(0x505441);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505444:{NFSU2_TR(0x505444);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B505447:{NFSU2_TR(0x505447);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B505448:L505448:{c.instructions+=1;NFSU2_TR(0x505448);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B505450:L505450:{c.instructions+=4;NFSU2_TR(0x505450);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B505454:{NFSU2_TR(0x505454);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B505457:{NFSU2_TR(0x505457);
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
B505459:{NFSU2_TR(0x505459);
if(r1(R+518)){{goto L50547e;}}
}
B50545b:L50545b:{c.instructions+=3;NFSU2_TR(0x50545b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B50545d:{NFSU2_TR(0x50545d);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50545f:{NFSU2_TR(0x50545f);
if(r1(R+518)){{goto L50547e;}}
}
B505461:L505461:{c.instructions+=3;NFSU2_TR(0x505461);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B505464:{NFSU2_TR(0x505464);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B505467:{NFSU2_TR(0x505467);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L505471;}}
}
B505469:L505469:{c.instructions+=2;NFSU2_TR(0x505469);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x7aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B50546c:{NFSU2_TR(0x50546c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L505471;}}
}
B50546e:L50546e:{c.instructions+=1;NFSU2_TR(0x50546e);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0xe0ull))));
}
B505471:L505471:{c.instructions+=6;NFSU2_TR(0x505471);
w4(R+4,u32(r1(R+4)));
}
B505474:{NFSU2_TR(0x505474);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B505476:{NFSU2_TR(0x505476);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B505479:{NFSU2_TR(0x505479);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B50547a:{NFSU2_TR(0x50547a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50547c:{NFSU2_TR(0x50547c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x505461u);}goto L505461;}}
}
B50547e:L50547e:{c.instructions+=1;NFSU2_TR(0x50547e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B505480:L505480:{c.instructions+=3;NFSU2_TR(0x505480);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505483:{NFSU2_TR(0x505483);
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
B505485:{NFSU2_TR(0x505485);
if(r1(R+518)){{goto L50549c;}}
}
B505487:L505487:{c.instructions+=2;NFSU2_TR(0x505487);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50548b:{NFSU2_TR(0x50548b);
{goto L505490;}
}
B505490:L505490:{c.instructions+=2;NFSU2_TR(0x505490);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B505493:{NFSU2_TR(0x505493);
if(r1(R+518)){{goto L50549c;}}
}
B505495:L505495:{c.instructions+=3;NFSU2_TR(0x505495);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505498:{NFSU2_TR(0x505498);
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
B50549a:{NFSU2_TR(0x50549a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x505490u);}goto L505490;}}
}
B50549c:L50549c:{c.instructions+=1;NFSU2_TR(0x50549c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5054a0:L5054a0:{c.instructions+=14;NFSU2_TR(0x5054a0);
__builtin_memmove((R+0),(R+4),4);
}
B5054a2:{NFSU2_TR(0x5054a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5054a6:{NFSU2_TR(0x5054a6);
__builtin_memmove((R+8),(R+4),4);
}
B5054a8:{NFSU2_TR(0x5054a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5054ab:{NFSU2_TR(0x5054ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5054ae:{NFSU2_TR(0x5054ae);
__builtin_memmove((R+8),(R+4),4);
}
B5054b0:{NFSU2_TR(0x5054b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5054b3:{NFSU2_TR(0x5054b3);
w4(R+8,u32(r1(R+8)));
}
B5054b6:{NFSU2_TR(0x5054b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5054b9:{NFSU2_TR(0x5054b9);
w4(R+8,u32(r1(R+5)));
}
B5054bc:{NFSU2_TR(0x5054bc);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5054c2:{NFSU2_TR(0x5054c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5054c5:{NFSU2_TR(0x5054c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5054c7:{NFSU2_TR(0x5054c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5054d0:L5054d0:{c.instructions+=5;NFSU2_TR(0x5054d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5054d3:{NFSU2_TR(0x5054d3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5054d5:{NFSU2_TR(0x5054d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5054d6:{NFSU2_TR(0x5054d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5054d7:{NFSU2_TR(0x5054d7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5054dd;}}
}
B5054d9:L5054d9:{c.instructions+=2;NFSU2_TR(0x5054d9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5054db:{NFSU2_TR(0x5054db);
{goto L5054ed;}
}
B5054dd:L5054dd:{c.instructions+=3;NFSU2_TR(0x5054dd);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5054e2:{NFSU2_TR(0x5054e2);
w4(R+28,u32(0xffull));
}
B5054e7:{NFSU2_TR(0x5054e7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5054ed;}}
}
B5054e9:L5054e9:{c.instructions+=1;NFSU2_TR(0x5054e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B5054ed:L5054ed:{c.instructions+=3;NFSU2_TR(0x5054ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5054f0:{NFSU2_TR(0x5054f0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5054f2:{NFSU2_TR(0x5054f2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5054f8;}}
}
B5054f4:L5054f4:{c.instructions+=2;NFSU2_TR(0x5054f4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5054f6:{NFSU2_TR(0x5054f6);
{goto L505508;}
}
B5054f8:L5054f8:{c.instructions+=3;NFSU2_TR(0x5054f8);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5054fd:{NFSU2_TR(0x5054fd);
w4(R+24,u32(0xffull));
}
B505502:{NFSU2_TR(0x505502);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L505508;}}
}
B505504:L505504:{c.instructions+=1;NFSU2_TR(0x505504);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B505508:L505508:{c.instructions+=3;NFSU2_TR(0x505508);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B50550a:{NFSU2_TR(0x50550a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B50550c:{NFSU2_TR(0x50550c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L505512;}}
}
B50550e:L50550e:{c.instructions+=2;NFSU2_TR(0x50550e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B505510:{NFSU2_TR(0x505510);
{goto L505521;}
}
B505512:L505512:{c.instructions+=3;NFSU2_TR(0x505512);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B505517:{NFSU2_TR(0x505517);
w4(R+8,u32(0xffull));
}
B50551c:{NFSU2_TR(0x50551c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L505521;}}
}
B50551e:L50551e:{c.instructions+=1;NFSU2_TR(0x50551e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(r1(U+0)));
}
B505521:L505521:{c.instructions+=3;NFSU2_TR(0x505521);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505524:{NFSU2_TR(0x505524);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B505526:{NFSU2_TR(0x505526);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L50553c;}}
}
B505528:L505528:{c.instructions+=10;NFSU2_TR(0x505528);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50552a:{NFSU2_TR(0x50552a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B50552d:{NFSU2_TR(0x50552d);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B50552f:{NFSU2_TR(0x50552f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B505532:{NFSU2_TR(0x505532);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
}
B505534:{NFSU2_TR(0x505534);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B505537:{NFSU2_TR(0x505537);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B505538:{NFSU2_TR(0x505538);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50553a:{NFSU2_TR(0x50553a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50553b:{NFSU2_TR(0x50553b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50553c:L50553c:{c.instructions+=3;NFSU2_TR(0x50553c);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B505541:{NFSU2_TR(0x505541);
w4(R+0,u32(0xffull));
}
B505546:{NFSU2_TR(0x505546);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50554c;}}
}
B505548:L505548:{c.instructions+=1;NFSU2_TR(0x505548);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B50554c:L50554c:{c.instructions+=9;NFSU2_TR(0x50554c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B50554f:{NFSU2_TR(0x50554f);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B505551:{NFSU2_TR(0x505551);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B505554:{NFSU2_TR(0x505554);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
}
B505556:{NFSU2_TR(0x505556);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B505559:{NFSU2_TR(0x505559);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50555a:{NFSU2_TR(0x50555a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50555c:{NFSU2_TR(0x50555c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50555d:{NFSU2_TR(0x50555d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B505560:L505560:{c.instructions+=11;NFSU2_TR(0x505560);
__builtin_memmove((R+0),(R+4),4);
}
B505562:{NFSU2_TR(0x505562);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B505566:{NFSU2_TR(0x505566);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B505569:{NFSU2_TR(0x505569);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50556c:{NFSU2_TR(0x50556c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50556f:{NFSU2_TR(0x50556f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505572:{NFSU2_TR(0x505572);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B505575:{NFSU2_TR(0x505575);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505578:{NFSU2_TR(0x505578);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B50557a:{NFSU2_TR(0x50557a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B50557c:{NFSU2_TR(0x50557c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B505580:L505580:{c.instructions+=26;NFSU2_TR(0x505580);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B505583:{NFSU2_TR(0x505583);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505587:{NFSU2_TR(0x505587);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B505588:{NFSU2_TR(0x505588);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50558b:{NFSU2_TR(0x50558b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50558c:{NFSU2_TR(0x50558c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50558f:{NFSU2_TR(0x50558f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B505590:{NFSU2_TR(0x505590);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B505593:{NFSU2_TR(0x505593);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B505595:{NFSU2_TR(0x505595);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B505597:{NFSU2_TR(0x505597);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B505599:{NFSU2_TR(0x505599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B50559b:{NFSU2_TR(0x50559b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50559e:{NFSU2_TR(0x50559e);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B5055a0:{NFSU2_TR(0x5055a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5055a3:{NFSU2_TR(0x5055a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5055a7:{NFSU2_TR(0x5055a7);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+12)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5055a9:{NFSU2_TR(0x5055a9);
__builtin_memmove((R+12),(R+0),4);
}
B5055ab:{NFSU2_TR(0x5055ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5055ad:{NFSU2_TR(0x5055ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5055b0:{NFSU2_TR(0x5055b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5055b1:{NFSU2_TR(0x5055b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5055b4:{NFSU2_TR(0x5055b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5055b5:{NFSU2_TR(0x5055b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5055b8:{NFSU2_TR(0x5055b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5055b9:{NFSU2_TR(0x5055b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5055c0:L5055c0:{c.instructions+=3;NFSU2_TR(0x5055c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5055c4:{NFSU2_TR(0x5055c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5055c6:{NFSU2_TR(0x5055c6);
if(r1(R+518)){{goto L505606;}}
}
B5055c8:L5055c8:{c.instructions+=2;NFSU2_TR(0x5055c8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5055cb:{NFSU2_TR(0x5055cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5055d3;}}
}
B5055cd:L5055cd:{c.instructions+=2;NFSU2_TR(0x5055cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5055d0:{NFSU2_TR(0x5055d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5055d3:L5055d3:{c.instructions+=2;NFSU2_TR(0x5055d3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5055d6:{NFSU2_TR(0x5055d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5055de;}}
}
B5055d8:L5055d8:{c.instructions+=2;NFSU2_TR(0x5055d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5055db:{NFSU2_TR(0x5055db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5055de:L5055de:{c.instructions+=3;NFSU2_TR(0x5055de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5055e1:{NFSU2_TR(0x5055e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5055e3:{NFSU2_TR(0x5055e3);
if(r1(R+518)){{goto L5055eb;}}
}
B5055e5:L5055e5:{c.instructions+=2;NFSU2_TR(0x5055e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5055e8:{NFSU2_TR(0x5055e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5055eb:L5055eb:{c.instructions+=3;NFSU2_TR(0x5055eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5055ee:{NFSU2_TR(0x5055ee);
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
B5055f0:{NFSU2_TR(0x5055f0);
if(r1(R+518)){{goto L5055f8;}}
}
B5055f2:L5055f2:{c.instructions+=2;NFSU2_TR(0x5055f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5055f5:{NFSU2_TR(0x5055f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5055f8:L5055f8:{c.instructions+=4;NFSU2_TR(0x5055f8);
w4(R+4,u32(0xabadcafeull));
}
B5055fd:{NFSU2_TR(0x5055fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505600:{NFSU2_TR(0x505600);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505603:{NFSU2_TR(0x505603);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B505606:L505606:{c.instructions+=2;NFSU2_TR(0x505606);
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
B505608:{NFSU2_TR(0x505608);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B505610:L505610:{c.instructions+=5;NFSU2_TR(0x505610);
__builtin_memmove((R+4),gp(0x838480),4);
}
B505616:{NFSU2_TR(0x505616);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B505617:{NFSU2_TR(0x505617);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50561b:{NFSU2_TR(0x50561b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50561c:{NFSU2_TR(0x50561c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x505621ull));
TAIL_STATIC(0x43cd80u,43c);
}
B505621:L505621:{c.instructions+=3;NFSU2_TR(0x505621);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B505623:{NFSU2_TR(0x505623);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B505624:{NFSU2_TR(0x505624);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L505633;}}
}
B505626:L505626:{c.instructions+=2;NFSU2_TR(0x505626);
__builtin_memmove((R+4),gp(0x838480),4);
}
B50562c:{NFSU2_TR(0x50562c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x505631ull));
TAIL_STATIC(0x43cdf0u,43c);
}
B505631:L505631:{c.instructions+=2;NFSU2_TR(0x505631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B505632:{NFSU2_TR(0x505632);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B505633:L505633:{c.instructions+=2;NFSU2_TR(0x505633);
__builtin_memmove((R+4),gp(0x838484),4);
}
B505639:{NFSU2_TR(0x505639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50563eull));
TAIL_STATIC(0x43cdf0u,43c);
}
B50563e:L50563e:{c.instructions+=4;NFSU2_TR(0x50563e);
__builtin_memmove((R+0),gp(0x838484),4);
}
B505643:{NFSU2_TR(0x505643);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B505646:{NFSU2_TR(0x505646);
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
B505648:{NFSU2_TR(0x505648);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50565d;}}
}
B50564a:L50564a:{c.instructions+=2;NFSU2_TR(0x50564a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50564b:{NFSU2_TR(0x50564b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x505650ull));
TAIL_STATIC(0x440e40u,440);
}
B505650:L505650:{c.instructions+=2;NFSU2_TR(0x505650);
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
B505653:{NFSU2_TR(0x505653);
s4(0x838484,u32(0x0ull));
}
B50565d:L50565d:{c.instructions+=2;NFSU2_TR(0x50565d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50565e:{NFSU2_TR(0x50565e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B505660:L505660:{c.instructions+=44;NFSU2_TR(0x505660);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B505661:{NFSU2_TR(0x505661);
__builtin_memmove((R+20),(R+16),4);
}
B505663:{NFSU2_TR(0x505663);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B505666:{NFSU2_TR(0x505666);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x144ull))));
}
B50566c:{NFSU2_TR(0x50566c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50566f:{NFSU2_TR(0x50566f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B505672:{NFSU2_TR(0x505672);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B505675:{NFSU2_TR(0x505675);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505679:{NFSU2_TR(0x505679);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50567a:{NFSU2_TR(0x50567a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50567d:{NFSU2_TR(0x50567d);
__builtin_memmove((R+0),(R+12),4);
}
B50567f:{NFSU2_TR(0x50567f);
w4(R+0,u32(0-u32(r4(R+0))));
}
B505681:{NFSU2_TR(0x505681);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505688:{NFSU2_TR(0x505688);
__builtin_memmove((R+0),(R+4),4);
}
B50568a:{NFSU2_TR(0x50568a);
w4(R+0,u32(0-u32(r4(R+0))));
}
B50568c:{NFSU2_TR(0x50568c);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505693:{NFSU2_TR(0x505693);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505696:{NFSU2_TR(0x505696);
w4(R+0,u32(0-u32(r4(R+0))));
}
B505698:{NFSU2_TR(0x505698);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50569f:{NFSU2_TR(0x50569f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5056a0:{NFSU2_TR(0x5056a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5056a3:{NFSU2_TR(0x5056a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5056a4:{NFSU2_TR(0x5056a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5056a7:{NFSU2_TR(0x5056a7);
__builtin_memmove((R+0),(R+8),4);
}
B5056a9:{NFSU2_TR(0x5056a9);
w4(R+0,u32(0-u32(r4(R+0))));
}
B5056ab:{NFSU2_TR(0x5056ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5056b2:{NFSU2_TR(0x5056b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5056b9:{NFSU2_TR(0x5056b9);
w4(R+28,u32(0-u32(r4(R+28))));
}
B5056bb:{NFSU2_TR(0x5056bb);
__builtin_memmove((R+0),(R+24),4);
}
B5056bd:{NFSU2_TR(0x5056bd);
w4(R+0,u32(0-u32(r4(R+0))));
}
B5056bf:{NFSU2_TR(0x5056bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5056c6:{NFSU2_TR(0x5056c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5056c9:{NFSU2_TR(0x5056c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5056d0:{NFSU2_TR(0x5056d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5056d3:{NFSU2_TR(0x5056d3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B5056d6:{NFSU2_TR(0x5056d6);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5056dd:{NFSU2_TR(0x5056dd);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5056e4:{NFSU2_TR(0x5056e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5056eb:{NFSU2_TR(0x5056eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5056ef:{NFSU2_TR(0x5056ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5056f7:{NFSU2_TR(0x5056f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B505702:{NFSU2_TR(0x505702);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505709:{NFSU2_TR(0x505709);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505710:{NFSU2_TR(0x505710);
{goto L50571d;}
}
B505712:L505712:{c.instructions+=2;NFSU2_TR(0x505712);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B505716:{NFSU2_TR(0x505716);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50571d:L50571d:{c.instructions+=3;NFSU2_TR(0x50571d);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505721:{NFSU2_TR(0x505721);
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
B505723:{NFSU2_TR(0x505723);
if(r1(R+518)){TAIL_STATIC(0x506ca3u,506);}
}
B505729:L505729:{c.instructions+=25;NFSU2_TR(0x505729);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50572c:{NFSU2_TR(0x50572c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505730:{NFSU2_TR(0x505730);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505733:{NFSU2_TR(0x505733);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B505735:{NFSU2_TR(0x505735);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505739:{NFSU2_TR(0x505739);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B505740:{NFSU2_TR(0x505740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B505742:{NFSU2_TR(0x505742);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505746:{NFSU2_TR(0x505746);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B505749:{NFSU2_TR(0x505749);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50574d:{NFSU2_TR(0x50574d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505751:{NFSU2_TR(0x505751);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505755:{NFSU2_TR(0x505755);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B505758:{NFSU2_TR(0x505758);
{u32 ea_=u32(r4(R+12)+r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50575c:{NFSU2_TR(0x50575c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505760:{NFSU2_TR(0x505760);
{u32 ea_=u32(r4(R+12)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505764:{NFSU2_TR(0x505764);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B505766:{NFSU2_TR(0x505766);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50576a:{NFSU2_TR(0x50576a);
{u32 ea_=u32(r4(R+12)+r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50576d:{NFSU2_TR(0x50576d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B50576f:{NFSU2_TR(0x50576f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505773:{NFSU2_TR(0x505773);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B505779:{NFSU2_TR(0x505779);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50577b:{NFSU2_TR(0x50577b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50577e:{NFSU2_TR(0x50577e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5057e7;}}
}
B505780:L505780:{c.instructions+=29;NFSU2_TR(0x505780);
{u32 ea_=u32(r4(R+12)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505784:{NFSU2_TR(0x505784);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B505787:{NFSU2_TR(0x505787);
{u32 ea_=u32(r4(R+12)+r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50578b:{NFSU2_TR(0x50578b);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505792:{NFSU2_TR(0x505792);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B505794:{NFSU2_TR(0x505794);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505796:{NFSU2_TR(0x505796);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505799:{NFSU2_TR(0x505799);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5057a1:{NFSU2_TR(0x5057a1);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5057a6:{NFSU2_TR(0x5057a6);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5057a9:{NFSU2_TR(0x5057a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5057ad:{NFSU2_TR(0x5057ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5057b0:{NFSU2_TR(0x5057b0);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5057b4:{NFSU2_TR(0x5057b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5057b8:{NFSU2_TR(0x5057b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5057ba:{NFSU2_TR(0x5057ba);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5057bd:{NFSU2_TR(0x5057bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5057c1:{NFSU2_TR(0x5057c1);
{u32 ea_=u32(r4(R+8)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5057c5:{NFSU2_TR(0x5057c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5057c8:{NFSU2_TR(0x5057c8);
{u32 ea_=u32(r4(R+8)+r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5057cc:{NFSU2_TR(0x5057cc);
{u32 ea_=u32(r4(R+8)+r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5057d0:{NFSU2_TR(0x5057d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5057d2:{NFSU2_TR(0x5057d2);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5057d6:{NFSU2_TR(0x5057d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5057da:{NFSU2_TR(0x5057da);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5057dc:{NFSU2_TR(0x5057dc);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5057df:{NFSU2_TR(0x5057df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5057e2:{NFSU2_TR(0x5057e2);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5057e5:{NFSU2_TR(0x5057e5);
{goto L5057f4;}
}
B5057e7:L5057e7:{c.instructions+=2;NFSU2_TR(0x5057e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5057ef:{NFSU2_TR(0x5057ef);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5057f4:L5057f4:{c.instructions+=3;NFSU2_TR(0x5057f4);
u8 U[16];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x4ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5057f9:{NFSU2_TR(0x5057f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B505801:{NFSU2_TR(0x505801);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x50671au,506);}
}
B505807:L505807:{c.instructions+=38;NFSU2_TR(0x505807);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50580b:{NFSU2_TR(0x50580b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B50580e:{NFSU2_TR(0x50580e);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505815:{NFSU2_TR(0x505815);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505819:{NFSU2_TR(0x505819);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B50581c:{NFSU2_TR(0x50581c);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505820:{NFSU2_TR(0x505820);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B505823:{NFSU2_TR(0x505823);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50582a:{NFSU2_TR(0x50582a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B50582c:{NFSU2_TR(0x50582c);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505830:{NFSU2_TR(0x505830);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B505832:{NFSU2_TR(0x505832);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505836:{NFSU2_TR(0x505836);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B505839:{NFSU2_TR(0x505839);
w4(R+0,u32(0x18ull));
}
B50583e:{NFSU2_TR(0x50583e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B505840:{NFSU2_TR(0x505840);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505844:{NFSU2_TR(0x505844);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((R+24),(U+0),4);
}
B505847:{NFSU2_TR(0x505847);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50584e:{NFSU2_TR(0x50584e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B505851:{NFSU2_TR(0x505851);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B505858:{NFSU2_TR(0x505858);
w4(R+0,u32(0xcull));
}
B50585d:{NFSU2_TR(0x50585d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B50585f:{NFSU2_TR(0x50585f);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B505867:{NFSU2_TR(0x505867);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50586e:{NFSU2_TR(0x50586e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505872:{NFSU2_TR(0x505872);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505875:{NFSU2_TR(0x505875);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505879:{NFSU2_TR(0x505879);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50587c:{NFSU2_TR(0x50587c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B50587e:{NFSU2_TR(0x50587e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505882:{NFSU2_TR(0x505882);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505885:{NFSU2_TR(0x505885);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B505887:{NFSU2_TR(0x505887);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50588b:{NFSU2_TR(0x50588b);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B505891:{NFSU2_TR(0x505891);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B505893:{NFSU2_TR(0x505893);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B505897:{NFSU2_TR(0x505897);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50589a:{NFSU2_TR(0x50589a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L505ac3;}}
}
B5058a0:L5058a0:{c.instructions+=2;NFSU2_TR(0x5058a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5058a2:{NFSU2_TR(0x5058a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L505a68;}}
}
B5058a8:L5058a8:{c.instructions+=121;NFSU2_TR(0x5058a8);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5058ab:{NFSU2_TR(0x5058ab);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5058b2:{NFSU2_TR(0x5058b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5058b6:{NFSU2_TR(0x5058b6);
{u32 ea_=u32(r4(R+0)+r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5058b9:{NFSU2_TR(0x5058b9);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5058bd:{NFSU2_TR(0x5058bd);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5058c0:{NFSU2_TR(0x5058c0);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5058c4:{NFSU2_TR(0x5058c4);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5058c7:{NFSU2_TR(0x5058c7);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5058ce:{NFSU2_TR(0x5058ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5058d5:{NFSU2_TR(0x5058d5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5058d7:{NFSU2_TR(0x5058d7);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5058d9:{NFSU2_TR(0x5058d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5058dc:{NFSU2_TR(0x5058dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5058e0:{NFSU2_TR(0x5058e0);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5058e3:{NFSU2_TR(0x5058e3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5058e7:{NFSU2_TR(0x5058e7);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5058eb:{NFSU2_TR(0x5058eb);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5058ef:{NFSU2_TR(0x5058ef);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5058f3:{NFSU2_TR(0x5058f3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5058f5:{NFSU2_TR(0x5058f5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5058f9:{NFSU2_TR(0x5058f9);
{u32 ea_=u32(r4(R+0)+r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5058fc:{NFSU2_TR(0x5058fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5058fe:{NFSU2_TR(0x5058fe);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505902:{NFSU2_TR(0x505902);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505906:{NFSU2_TR(0x505906);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505908:{NFSU2_TR(0x505908);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50590c:{NFSU2_TR(0x50590c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50590f:{NFSU2_TR(0x50590f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B505911:{NFSU2_TR(0x505911);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505915:{NFSU2_TR(0x505915);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505918:{NFSU2_TR(0x505918);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B50591a:{NFSU2_TR(0x50591a);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B50591c:{NFSU2_TR(0x50591c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B50591e:{NFSU2_TR(0x50591e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B505920:{NFSU2_TR(0x505920);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505922:{NFSU2_TR(0x505922);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505924:{NFSU2_TR(0x505924);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B505926:{NFSU2_TR(0x505926);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505929:{NFSU2_TR(0x505929);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50592c:{NFSU2_TR(0x50592c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50592e:{NFSU2_TR(0x50592e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505931:{NFSU2_TR(0x505931);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505934:{NFSU2_TR(0x505934);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505938:{NFSU2_TR(0x505938);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50593c:{NFSU2_TR(0x50593c);
{u32 ea_=u32(r4(R+0)+r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50593f:{NFSU2_TR(0x50593f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505943:{NFSU2_TR(0x505943);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505945:{NFSU2_TR(0x505945);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50594c:{NFSU2_TR(0x50594c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50594e:{NFSU2_TR(0x50594e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505950:{NFSU2_TR(0x505950);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505953:{NFSU2_TR(0x505953);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505956:{NFSU2_TR(0x505956);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505959:{NFSU2_TR(0x505959);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50595c:{NFSU2_TR(0x50595c);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50595f:{NFSU2_TR(0x50595f);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505966:{NFSU2_TR(0x505966);
{u32 ea_=u32(r4(R+0)+r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505969:{NFSU2_TR(0x505969);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50596d:{NFSU2_TR(0x50596d);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505970:{NFSU2_TR(0x505970);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B505977:{NFSU2_TR(0x505977);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50597b:{NFSU2_TR(0x50597b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50597d:{NFSU2_TR(0x50597d);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50597f:{NFSU2_TR(0x50597f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505983:{NFSU2_TR(0x505983);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B505985:{NFSU2_TR(0x505985);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505989:{NFSU2_TR(0x505989);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50598d:{NFSU2_TR(0x50598d);
{u32 ea_=u32(r4(R+0)+r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505990:{NFSU2_TR(0x505990);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B505993:{NFSU2_TR(0x505993);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505997:{NFSU2_TR(0x505997);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50599b:{NFSU2_TR(0x50599b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50599f:{NFSU2_TR(0x50599f);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5059a3:{NFSU2_TR(0x5059a3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5059a5:{NFSU2_TR(0x5059a5);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5059a8:{NFSU2_TR(0x5059a8);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5059ad:{NFSU2_TR(0x5059ad);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5059b1:{NFSU2_TR(0x5059b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5059b5:{NFSU2_TR(0x5059b5);
{u32 ea_=u32(r4(R+24)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5059b8:{NFSU2_TR(0x5059b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5059bc:{NFSU2_TR(0x5059bc);
{u32 ea_=u32(r4(R+0)+r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5059bf:{NFSU2_TR(0x5059bf);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5059c2:{NFSU2_TR(0x5059c2);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5059c6:{NFSU2_TR(0x5059c6);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5059c9:{NFSU2_TR(0x5059c9);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5059cd:{NFSU2_TR(0x5059cd);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5059d4:{NFSU2_TR(0x5059d4);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5059d7:{NFSU2_TR(0x5059d7);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5059db:{NFSU2_TR(0x5059db);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5059e2:{NFSU2_TR(0x5059e2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5059e4:{NFSU2_TR(0x5059e4);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5059e6:{NFSU2_TR(0x5059e6);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5059ed:{NFSU2_TR(0x5059ed);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5059ef:{NFSU2_TR(0x5059ef);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5059f6:{NFSU2_TR(0x5059f6);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5059fd:{NFSU2_TR(0x5059fd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5059ff:{NFSU2_TR(0x5059ff);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505a06:{NFSU2_TR(0x505a06);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505a0d:{NFSU2_TR(0x505a0d);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505a14:{NFSU2_TR(0x505a14);
{u32 ea_=u32(r4(R+0)+r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505a17:{NFSU2_TR(0x505a17);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505a1b:{NFSU2_TR(0x505a1b);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505a22:{NFSU2_TR(0x505a22);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505a26:{NFSU2_TR(0x505a26);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505a2d:{NFSU2_TR(0x505a2d);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505a34:{NFSU2_TR(0x505a34);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505a38:{NFSU2_TR(0x505a38);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505a3f:{NFSU2_TR(0x505a3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B505a43:{NFSU2_TR(0x505a43);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B505a45:{NFSU2_TR(0x505a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505a48:{NFSU2_TR(0x505a48);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B505a49:{NFSU2_TR(0x505a49);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505a50:{NFSU2_TR(0x505a50);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505a57:{NFSU2_TR(0x505a57);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505a59:{NFSU2_TR(0x505a59);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505a5b:{NFSU2_TR(0x505a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505a5e:{NFSU2_TR(0x505a5e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B505a61:{NFSU2_TR(0x505a61);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505a64:{NFSU2_TR(0x505a64);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B505a66:{NFSU2_TR(0x505a66);
{goto L505a6c;}
}
B505a68:L505a68:{c.instructions+=1;NFSU2_TR(0x505a68);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B505a6c:L505a6c:{c.instructions+=28;NFSU2_TR(0x505a6c);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505a6f:{NFSU2_TR(0x505a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505a72:{NFSU2_TR(0x505a72);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505a75:{NFSU2_TR(0x505a75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B505a77:{NFSU2_TR(0x505a77);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505a7b:{NFSU2_TR(0x505a7b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505a7d:{NFSU2_TR(0x505a7d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505a80:{NFSU2_TR(0x505a80);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B505a81:{NFSU2_TR(0x505a81);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B505a84:{NFSU2_TR(0x505a84);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505a87:{NFSU2_TR(0x505a87);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505a8b:{NFSU2_TR(0x505a8b);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505a8e:{NFSU2_TR(0x505a8e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B505a91:{NFSU2_TR(0x505a91);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505a94:{NFSU2_TR(0x505a94);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505a98:{NFSU2_TR(0x505a98);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505a9c:{NFSU2_TR(0x505a9c);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505aa0:{NFSU2_TR(0x505aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505aa3:{NFSU2_TR(0x505aa3);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505aa6:{NFSU2_TR(0x505aa6);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505aaa:{NFSU2_TR(0x505aaa);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505aad:{NFSU2_TR(0x505aad);
{u32 ea_=u32(r4(R+24)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505ab0:{NFSU2_TR(0x505ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505ab3:{NFSU2_TR(0x505ab3);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505ab6:{NFSU2_TR(0x505ab6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505ab8:{NFSU2_TR(0x505ab8);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505abb:{NFSU2_TR(0x505abb);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505abe:{NFSU2_TR(0x505abe);
{goto L505c81;}
}
B505ac3:L505ac3:{c.instructions+=2;NFSU2_TR(0x505ac3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B505ac5:{NFSU2_TR(0x505ac5);
if(r1(R+518)){{goto L505c7d;}}
}
B505acb:L505acb:{c.instructions+=122;NFSU2_TR(0x505acb);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505ace:{NFSU2_TR(0x505ace);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505ad5:{NFSU2_TR(0x505ad5);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B505ad9:{NFSU2_TR(0x505ad9);
{u32 ea_=u32(r4(R+0)+r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505adc:{NFSU2_TR(0x505adc);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505ae0:{NFSU2_TR(0x505ae0);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B505ae3:{NFSU2_TR(0x505ae3);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505ae7:{NFSU2_TR(0x505ae7);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B505aea:{NFSU2_TR(0x505aea);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505af1:{NFSU2_TR(0x505af1);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B505af8:{NFSU2_TR(0x505af8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505afa:{NFSU2_TR(0x505afa);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505afc:{NFSU2_TR(0x505afc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505aff:{NFSU2_TR(0x505aff);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B505b03:{NFSU2_TR(0x505b03);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505b06:{NFSU2_TR(0x505b06);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505b0a:{NFSU2_TR(0x505b0a);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505b0e:{NFSU2_TR(0x505b0e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505b12:{NFSU2_TR(0x505b12);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505b16:{NFSU2_TR(0x505b16);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B505b18:{NFSU2_TR(0x505b18);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505b1c:{NFSU2_TR(0x505b1c);
{u32 ea_=u32(r4(R+0)+r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505b1f:{NFSU2_TR(0x505b1f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B505b21:{NFSU2_TR(0x505b21);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505b25:{NFSU2_TR(0x505b25);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505b29:{NFSU2_TR(0x505b29);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505b2b:{NFSU2_TR(0x505b2b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505b2f:{NFSU2_TR(0x505b2f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505b32:{NFSU2_TR(0x505b32);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B505b34:{NFSU2_TR(0x505b34);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505b38:{NFSU2_TR(0x505b38);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505b3b:{NFSU2_TR(0x505b3b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B505b3d:{NFSU2_TR(0x505b3d);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B505b3f:{NFSU2_TR(0x505b3f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B505b41:{NFSU2_TR(0x505b41);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B505b43:{NFSU2_TR(0x505b43);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505b45:{NFSU2_TR(0x505b45);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505b47:{NFSU2_TR(0x505b47);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B505b49:{NFSU2_TR(0x505b49);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505b4c:{NFSU2_TR(0x505b4c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505b4f:{NFSU2_TR(0x505b4f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B505b51:{NFSU2_TR(0x505b51);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505b54:{NFSU2_TR(0x505b54);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505b57:{NFSU2_TR(0x505b57);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505b5b:{NFSU2_TR(0x505b5b);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505b5f:{NFSU2_TR(0x505b5f);
{u32 ea_=u32(r4(R+0)+r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505b62:{NFSU2_TR(0x505b62);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505b66:{NFSU2_TR(0x505b66);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505b68:{NFSU2_TR(0x505b68);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B505b6f:{NFSU2_TR(0x505b6f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505b71:{NFSU2_TR(0x505b71);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505b73:{NFSU2_TR(0x505b73);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505b76:{NFSU2_TR(0x505b76);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505b79:{NFSU2_TR(0x505b79);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505b7c:{NFSU2_TR(0x505b7c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505b7f:{NFSU2_TR(0x505b7f);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505b82:{NFSU2_TR(0x505b82);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505b89:{NFSU2_TR(0x505b89);
{u32 ea_=u32(r4(R+0)+r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505b8c:{NFSU2_TR(0x505b8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B505b90:{NFSU2_TR(0x505b90);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505b93:{NFSU2_TR(0x505b93);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B505b9a:{NFSU2_TR(0x505b9a);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505b9e:{NFSU2_TR(0x505b9e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505ba0:{NFSU2_TR(0x505ba0);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B505ba2:{NFSU2_TR(0x505ba2);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505ba6:{NFSU2_TR(0x505ba6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B505ba8:{NFSU2_TR(0x505ba8);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505bac:{NFSU2_TR(0x505bac);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505bb0:{NFSU2_TR(0x505bb0);
{u32 ea_=u32(r4(R+0)+r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505bb3:{NFSU2_TR(0x505bb3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B505bb6:{NFSU2_TR(0x505bb6);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505bba:{NFSU2_TR(0x505bba);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B505bbe:{NFSU2_TR(0x505bbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505bc2:{NFSU2_TR(0x505bc2);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505bc6:{NFSU2_TR(0x505bc6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505bc8:{NFSU2_TR(0x505bc8);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505bcb:{NFSU2_TR(0x505bcb);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B505bd0:{NFSU2_TR(0x505bd0);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505bd4:{NFSU2_TR(0x505bd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B505bd8:{NFSU2_TR(0x505bd8);
{u32 ea_=u32(r4(R+24)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505bdb:{NFSU2_TR(0x505bdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505bdf:{NFSU2_TR(0x505bdf);
{u32 ea_=u32(r4(R+0)+r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505be2:{NFSU2_TR(0x505be2);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505be5:{NFSU2_TR(0x505be5);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505be9:{NFSU2_TR(0x505be9);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505bec:{NFSU2_TR(0x505bec);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505bf0:{NFSU2_TR(0x505bf0);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505bf7:{NFSU2_TR(0x505bf7);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505bfa:{NFSU2_TR(0x505bfa);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505bfe:{NFSU2_TR(0x505bfe);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505c05:{NFSU2_TR(0x505c05);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505c07:{NFSU2_TR(0x505c07);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B505c09:{NFSU2_TR(0x505c09);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505c0d:{NFSU2_TR(0x505c0d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B505c0f:{NFSU2_TR(0x505c0f);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505c13:{NFSU2_TR(0x505c13);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505c1a:{NFSU2_TR(0x505c1a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B505c1c:{NFSU2_TR(0x505c1c);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505c20:{NFSU2_TR(0x505c20);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505c27:{NFSU2_TR(0x505c27);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505c2b:{NFSU2_TR(0x505c2b);
{u32 ea_=u32(r4(R+0)+r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505c2e:{NFSU2_TR(0x505c2e);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505c32:{NFSU2_TR(0x505c32);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505c36:{NFSU2_TR(0x505c36);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505c3a:{NFSU2_TR(0x505c3a);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505c3e:{NFSU2_TR(0x505c3e);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505c45:{NFSU2_TR(0x505c45);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505c49:{NFSU2_TR(0x505c49);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505c50:{NFSU2_TR(0x505c50);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B505c54:{NFSU2_TR(0x505c54);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B505c56:{NFSU2_TR(0x505c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505c59:{NFSU2_TR(0x505c59);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B505c5a:{NFSU2_TR(0x505c5a);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505c61:{NFSU2_TR(0x505c61);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505c68:{NFSU2_TR(0x505c68);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505c6a:{NFSU2_TR(0x505c6a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505c6c:{NFSU2_TR(0x505c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505c6f:{NFSU2_TR(0x505c6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505c73:{NFSU2_TR(0x505c73);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505c76:{NFSU2_TR(0x505c76);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B505c79:{NFSU2_TR(0x505c79);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B505c7b:{NFSU2_TR(0x505c7b);
{goto L505c81;}
}
B505c7d:L505c7d:{c.instructions+=1;NFSU2_TR(0x505c7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B505c81:L505c81:{c.instructions+=14;NFSU2_TR(0x505c81);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505c85:{NFSU2_TR(0x505c85);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505c88:{NFSU2_TR(0x505c88);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505c8c:{NFSU2_TR(0x505c8c);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505c8e:{NFSU2_TR(0x505c8e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B505c90:{NFSU2_TR(0x505c90);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505c94:{NFSU2_TR(0x505c94);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505c97:{NFSU2_TR(0x505c97);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B505c99:{NFSU2_TR(0x505c99);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505c9d:{NFSU2_TR(0x505c9d);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B505ca3:{NFSU2_TR(0x505ca3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B505ca5:{NFSU2_TR(0x505ca5);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B505ca9:{NFSU2_TR(0x505ca9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B505cac:{NFSU2_TR(0x505cac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L505e78;}}
}
B505cb2:L505cb2:{c.instructions+=2;NFSU2_TR(0x505cb2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B505cb4:{NFSU2_TR(0x505cb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L505e30;}}
}
B505cba:L505cba:{c.instructions+=108;NFSU2_TR(0x505cba);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505cbd:{NFSU2_TR(0x505cbd);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505cc0:{NFSU2_TR(0x505cc0);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505cc3:{NFSU2_TR(0x505cc3);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505cc6:{NFSU2_TR(0x505cc6);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505cc8:{NFSU2_TR(0x505cc8);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505ccb:{NFSU2_TR(0x505ccb);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505cd2:{NFSU2_TR(0x505cd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505cd9:{NFSU2_TR(0x505cd9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505cdb:{NFSU2_TR(0x505cdb);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505cdd:{NFSU2_TR(0x505cdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505ce0:{NFSU2_TR(0x505ce0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505ce4:{NFSU2_TR(0x505ce4);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505ce7:{NFSU2_TR(0x505ce7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505ceb:{NFSU2_TR(0x505ceb);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505cee:{NFSU2_TR(0x505cee);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505cf2:{NFSU2_TR(0x505cf2);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505cf5:{NFSU2_TR(0x505cf5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B505cf7:{NFSU2_TR(0x505cf7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505cfb:{NFSU2_TR(0x505cfb);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505cfe:{NFSU2_TR(0x505cfe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B505d00:{NFSU2_TR(0x505d00);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505d04:{NFSU2_TR(0x505d04);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505d08:{NFSU2_TR(0x505d08);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505d0a:{NFSU2_TR(0x505d0a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505d0e:{NFSU2_TR(0x505d0e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505d11:{NFSU2_TR(0x505d11);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B505d13:{NFSU2_TR(0x505d13);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505d17:{NFSU2_TR(0x505d17);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505d1a:{NFSU2_TR(0x505d1a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B505d1c:{NFSU2_TR(0x505d1c);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B505d1e:{NFSU2_TR(0x505d1e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B505d20:{NFSU2_TR(0x505d20);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B505d22:{NFSU2_TR(0x505d22);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505d24:{NFSU2_TR(0x505d24);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505d26:{NFSU2_TR(0x505d26);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B505d28:{NFSU2_TR(0x505d28);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505d2b:{NFSU2_TR(0x505d2b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505d2e:{NFSU2_TR(0x505d2e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B505d30:{NFSU2_TR(0x505d30);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505d33:{NFSU2_TR(0x505d33);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505d36:{NFSU2_TR(0x505d36);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505d39:{NFSU2_TR(0x505d39);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505d3c:{NFSU2_TR(0x505d3c);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505d3f:{NFSU2_TR(0x505d3f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505d41:{NFSU2_TR(0x505d41);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505d43:{NFSU2_TR(0x505d43);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505d45:{NFSU2_TR(0x505d45);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505d48:{NFSU2_TR(0x505d48);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505d4b:{NFSU2_TR(0x505d4b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505d4e:{NFSU2_TR(0x505d4e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505d51:{NFSU2_TR(0x505d51);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505d54:{NFSU2_TR(0x505d54);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505d57:{NFSU2_TR(0x505d57);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505d59:{NFSU2_TR(0x505d59);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505d5c:{NFSU2_TR(0x505d5c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505d5e:{NFSU2_TR(0x505d5e);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B505d60:{NFSU2_TR(0x505d60);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505d64:{NFSU2_TR(0x505d64);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B505d66:{NFSU2_TR(0x505d66);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505d6a:{NFSU2_TR(0x505d6a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505d6e:{NFSU2_TR(0x505d6e);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505d71:{NFSU2_TR(0x505d71);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505d75:{NFSU2_TR(0x505d75);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505d78:{NFSU2_TR(0x505d78);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505d7c:{NFSU2_TR(0x505d7c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505d7e:{NFSU2_TR(0x505d7e);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505d81:{NFSU2_TR(0x505d81);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505d85:{NFSU2_TR(0x505d85);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505d88:{NFSU2_TR(0x505d88);
{u32 ea_=u32(r4(R+24)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505d8b:{NFSU2_TR(0x505d8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505d8f:{NFSU2_TR(0x505d8f);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505d92:{NFSU2_TR(0x505d92);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B505d93:{NFSU2_TR(0x505d93);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505d96:{NFSU2_TR(0x505d96);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505d99:{NFSU2_TR(0x505d99);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B505d9c:{NFSU2_TR(0x505d9c);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505d9f:{NFSU2_TR(0x505d9f);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505da6:{NFSU2_TR(0x505da6);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505da8:{NFSU2_TR(0x505da8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B505dab:{NFSU2_TR(0x505dab);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505dae:{NFSU2_TR(0x505dae);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B505db3:{NFSU2_TR(0x505db3);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505dba:{NFSU2_TR(0x505dba);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505dbc:{NFSU2_TR(0x505dbc);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B505dbe:{NFSU2_TR(0x505dbe);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505dc5:{NFSU2_TR(0x505dc5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B505dc7:{NFSU2_TR(0x505dc7);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505dce:{NFSU2_TR(0x505dce);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505dd5:{NFSU2_TR(0x505dd5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B505dd7:{NFSU2_TR(0x505dd7);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505dde:{NFSU2_TR(0x505dde);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505de5:{NFSU2_TR(0x505de5);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505dec:{NFSU2_TR(0x505dec);
{u32 ea_=u32(r4(R+24)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505def:{NFSU2_TR(0x505def);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505df6:{NFSU2_TR(0x505df6);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505df9:{NFSU2_TR(0x505df9);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505e00:{NFSU2_TR(0x505e00);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505e03:{NFSU2_TR(0x505e03);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505e0a:{NFSU2_TR(0x505e0a);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505e11:{NFSU2_TR(0x505e11);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B505e13:{NFSU2_TR(0x505e13);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505e16:{NFSU2_TR(0x505e16);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505e19:{NFSU2_TR(0x505e19);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505e20:{NFSU2_TR(0x505e20);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505e27:{NFSU2_TR(0x505e27);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505e2a:{NFSU2_TR(0x505e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505e2d:{NFSU2_TR(0x505e2d);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505e30:L505e30:{c.instructions+=24;NFSU2_TR(0x505e30);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505e33:{NFSU2_TR(0x505e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505e36:{NFSU2_TR(0x505e36);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505e38:{NFSU2_TR(0x505e38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B505e3a:{NFSU2_TR(0x505e3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505e3e:{NFSU2_TR(0x505e3e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505e40:{NFSU2_TR(0x505e40);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505e43:{NFSU2_TR(0x505e43);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505e46:{NFSU2_TR(0x505e46);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505e48:{NFSU2_TR(0x505e48);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505e4b:{NFSU2_TR(0x505e4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505e4f:{NFSU2_TR(0x505e4f);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505e52:{NFSU2_TR(0x505e52);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505e56:{NFSU2_TR(0x505e56);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505e5a:{NFSU2_TR(0x505e5a);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505e5d:{NFSU2_TR(0x505e5d);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505e60:{NFSU2_TR(0x505e60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B505e62:{NFSU2_TR(0x505e62);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505e65:{NFSU2_TR(0x505e65);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505e69:{NFSU2_TR(0x505e69);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505e6b:{NFSU2_TR(0x505e6b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505e6d:{NFSU2_TR(0x505e6d);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505e70:{NFSU2_TR(0x505e70);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505e73:{NFSU2_TR(0x505e73);
{goto L505fd9;}
}
B505e78:L505e78:{c.instructions+=2;NFSU2_TR(0x505e78);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B505e7a:{NFSU2_TR(0x505e7a);
if(r1(R+518)){{goto L505fe7;}}
}
B505e80:L505e80:{c.instructions+=104;NFSU2_TR(0x505e80);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505e83:{NFSU2_TR(0x505e83);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505e86:{NFSU2_TR(0x505e86);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505e89:{NFSU2_TR(0x505e89);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505e8c:{NFSU2_TR(0x505e8c);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505e8e:{NFSU2_TR(0x505e8e);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505e91:{NFSU2_TR(0x505e91);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505e98:{NFSU2_TR(0x505e98);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505e9f:{NFSU2_TR(0x505e9f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505ea1:{NFSU2_TR(0x505ea1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505ea3:{NFSU2_TR(0x505ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505ea6:{NFSU2_TR(0x505ea6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505eaa:{NFSU2_TR(0x505eaa);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505ead:{NFSU2_TR(0x505ead);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505eb1:{NFSU2_TR(0x505eb1);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505eb4:{NFSU2_TR(0x505eb4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505eb8:{NFSU2_TR(0x505eb8);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505ebb:{NFSU2_TR(0x505ebb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B505ebd:{NFSU2_TR(0x505ebd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505ec1:{NFSU2_TR(0x505ec1);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505ec4:{NFSU2_TR(0x505ec4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B505ec6:{NFSU2_TR(0x505ec6);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505eca:{NFSU2_TR(0x505eca);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505ece:{NFSU2_TR(0x505ece);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505ed0:{NFSU2_TR(0x505ed0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505ed4:{NFSU2_TR(0x505ed4);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505ed7:{NFSU2_TR(0x505ed7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B505ed9:{NFSU2_TR(0x505ed9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505edd:{NFSU2_TR(0x505edd);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505ee0:{NFSU2_TR(0x505ee0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B505ee2:{NFSU2_TR(0x505ee2);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B505ee4:{NFSU2_TR(0x505ee4);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B505ee6:{NFSU2_TR(0x505ee6);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B505ee8:{NFSU2_TR(0x505ee8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505eea:{NFSU2_TR(0x505eea);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505eec:{NFSU2_TR(0x505eec);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B505eee:{NFSU2_TR(0x505eee);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505ef1:{NFSU2_TR(0x505ef1);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505ef4:{NFSU2_TR(0x505ef4);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B505ef6:{NFSU2_TR(0x505ef6);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505ef9:{NFSU2_TR(0x505ef9);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505efc:{NFSU2_TR(0x505efc);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505eff:{NFSU2_TR(0x505eff);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505f02:{NFSU2_TR(0x505f02);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505f05:{NFSU2_TR(0x505f05);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505f07:{NFSU2_TR(0x505f07);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505f09:{NFSU2_TR(0x505f09);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505f0b:{NFSU2_TR(0x505f0b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505f0e:{NFSU2_TR(0x505f0e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505f11:{NFSU2_TR(0x505f11);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505f14:{NFSU2_TR(0x505f14);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505f17:{NFSU2_TR(0x505f17);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505f1a:{NFSU2_TR(0x505f1a);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505f1d:{NFSU2_TR(0x505f1d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505f1f:{NFSU2_TR(0x505f1f);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505f22:{NFSU2_TR(0x505f22);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505f24:{NFSU2_TR(0x505f24);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B505f26:{NFSU2_TR(0x505f26);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505f2a:{NFSU2_TR(0x505f2a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B505f2c:{NFSU2_TR(0x505f2c);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505f30:{NFSU2_TR(0x505f30);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505f34:{NFSU2_TR(0x505f34);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505f37:{NFSU2_TR(0x505f37);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505f3b:{NFSU2_TR(0x505f3b);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505f3e:{NFSU2_TR(0x505f3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505f42:{NFSU2_TR(0x505f42);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505f44:{NFSU2_TR(0x505f44);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505f47:{NFSU2_TR(0x505f47);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505f4b:{NFSU2_TR(0x505f4b);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505f4e:{NFSU2_TR(0x505f4e);
{u32 ea_=u32(r4(R+24)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505f51:{NFSU2_TR(0x505f51);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505f55:{NFSU2_TR(0x505f55);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505f58:{NFSU2_TR(0x505f58);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B505f5d:{NFSU2_TR(0x505f5d);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505f60:{NFSU2_TR(0x505f60);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505f63:{NFSU2_TR(0x505f63);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505f66:{NFSU2_TR(0x505f66);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505f6d:{NFSU2_TR(0x505f6d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505f6f:{NFSU2_TR(0x505f6f);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B505f72:{NFSU2_TR(0x505f72);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505f79:{NFSU2_TR(0x505f79);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B505f7b:{NFSU2_TR(0x505f7b);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B505f7d:{NFSU2_TR(0x505f7d);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505f81:{NFSU2_TR(0x505f81);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B505f83:{NFSU2_TR(0x505f83);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505f87:{NFSU2_TR(0x505f87);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505f8e:{NFSU2_TR(0x505f8e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B505f90:{NFSU2_TR(0x505f90);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505f94:{NFSU2_TR(0x505f94);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505f9b:{NFSU2_TR(0x505f9b);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505f9f:{NFSU2_TR(0x505f9f);
{u32 ea_=u32(r4(R+24)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505fa2:{NFSU2_TR(0x505fa2);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505fa6:{NFSU2_TR(0x505fa6);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505fa9:{NFSU2_TR(0x505fa9);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505fad:{NFSU2_TR(0x505fad);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505fb0:{NFSU2_TR(0x505fb0);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505fb7:{NFSU2_TR(0x505fb7);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505fbe:{NFSU2_TR(0x505fbe);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B505fc0:{NFSU2_TR(0x505fc0);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B505fc3:{NFSU2_TR(0x505fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505fc6:{NFSU2_TR(0x505fc6);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505fcd:{NFSU2_TR(0x505fcd);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B505fd4:{NFSU2_TR(0x505fd4);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505fd6:{NFSU2_TR(0x505fd6);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B505fd9:L505fd9:{c.instructions+=5;NFSU2_TR(0x505fd9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B505fda:{NFSU2_TR(0x505fda);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505fdd:{NFSU2_TR(0x505fdd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B505fe0:{NFSU2_TR(0x505fe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B505fe4:{NFSU2_TR(0x505fe4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B505fe7:L505fe7:{c.instructions+=8;NFSU2_TR(0x505fe7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505feb:{NFSU2_TR(0x505feb);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505fee:{NFSU2_TR(0x505fee);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505ff2:{NFSU2_TR(0x505ff2);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505ff5:{NFSU2_TR(0x505ff5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B505ff7:{NFSU2_TR(0x505ff7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B505ffb:{NFSU2_TR(0x505ffb);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B505ffe:{NFSU2_TR(0x505ffe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
TAIL_STATIC(0x506000u,506);
}
XIT:NFSU2_TR_EXIT(0x505,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
