#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_594(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_59d(u8* __restrict R,Cpu& c);
u32 body_5a6(u8* __restrict R,Cpu& c);
u32 body_5a7(u8* __restrict R,Cpu& c);
u32 body_5aa(u8* __restrict R,Cpu& c);
u32 body_5ab(u8* __restrict R,Cpu& c);
u32 body_5ad(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5ac,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5ac,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 page_5ac(Cpu& c){return body_5ac(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5ac(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5ac000:goto L5ac000;
case 0x5ac002:c.instructions+=13;goto B5ac002;
case 0x5ac008:c.instructions+=12;goto B5ac008;
case 0x5ac00b:c.instructions+=11;goto B5ac00b;
case 0x5ac011:c.instructions+=10;goto B5ac011;
case 0x5ac013:c.instructions+=9;goto B5ac013;
case 0x5ac015:c.instructions+=8;goto B5ac015;
case 0x5ac01b:c.instructions+=7;goto B5ac01b;
case 0x5ac021:c.instructions+=6;goto B5ac021;
case 0x5ac025:c.instructions+=5;goto B5ac025;
case 0x5ac027:c.instructions+=4;goto B5ac027;
case 0x5ac02b:c.instructions+=3;goto B5ac02b;
case 0x5ac02f:c.instructions+=2;goto B5ac02f;
case 0x5ac033:c.instructions+=1;goto B5ac033;
case 0x5ac035:goto L5ac035;
case 0x5ac03b:c.instructions+=1;goto B5ac03b;
case 0x5ac03d:goto L5ac03d;
case 0x5ac043:goto L5ac043;
case 0x5ac049:c.instructions+=7;goto B5ac049;
case 0x5ac04c:c.instructions+=6;goto B5ac04c;
case 0x5ac052:c.instructions+=5;goto B5ac052;
case 0x5ac054:c.instructions+=4;goto B5ac054;
case 0x5ac056:c.instructions+=3;goto B5ac056;
case 0x5ac05a:c.instructions+=2;goto B5ac05a;
case 0x5ac05c:c.instructions+=1;goto B5ac05c;
case 0x5ac05e:goto L5ac05e;
case 0x5ac064:c.instructions+=2;goto B5ac064;
case 0x5ac066:c.instructions+=1;goto B5ac066;
case 0x5ac068:goto L5ac068;
case 0x5ac06c:c.instructions+=22;goto B5ac06c;
case 0x5ac06f:c.instructions+=21;goto B5ac06f;
case 0x5ac075:c.instructions+=20;goto B5ac075;
case 0x5ac079:c.instructions+=19;goto B5ac079;
case 0x5ac07d:c.instructions+=18;goto B5ac07d;
case 0x5ac083:c.instructions+=17;goto B5ac083;
case 0x5ac087:c.instructions+=16;goto B5ac087;
case 0x5ac08a:c.instructions+=15;goto B5ac08a;
case 0x5ac090:c.instructions+=14;goto B5ac090;
case 0x5ac096:c.instructions+=13;goto B5ac096;
case 0x5ac099:c.instructions+=12;goto B5ac099;
case 0x5ac09c:c.instructions+=11;goto B5ac09c;
case 0x5ac09e:c.instructions+=10;goto B5ac09e;
case 0x5ac0a4:c.instructions+=9;goto B5ac0a4;
case 0x5ac0a6:c.instructions+=8;goto B5ac0a6;
case 0x5ac0ac:c.instructions+=7;goto B5ac0ac;
case 0x5ac0ae:c.instructions+=6;goto B5ac0ae;
case 0x5ac0b0:c.instructions+=5;goto B5ac0b0;
case 0x5ac0b2:c.instructions+=4;goto B5ac0b2;
case 0x5ac0b5:c.instructions+=3;goto B5ac0b5;
case 0x5ac0b8:c.instructions+=2;goto B5ac0b8;
case 0x5ac0be:c.instructions+=1;goto B5ac0be;
case 0x5ac0c4:goto L5ac0c4;
case 0x5ac0c7:c.instructions+=3;goto B5ac0c7;
case 0x5ac0cd:c.instructions+=2;goto B5ac0cd;
case 0x5ac0cf:c.instructions+=1;goto B5ac0cf;
case 0x5ac0d1:goto L5ac0d1;
case 0x5ac0d7:c.instructions+=2;goto B5ac0d7;
case 0x5ac0d9:c.instructions+=1;goto B5ac0d9;
case 0x5ac0db:goto L5ac0db;
case 0x5ac0de:c.instructions+=23;goto B5ac0de;
case 0x5ac0e2:c.instructions+=22;goto B5ac0e2;
case 0x5ac0e8:c.instructions+=21;goto B5ac0e8;
case 0x5ac0ec:c.instructions+=20;goto B5ac0ec;
case 0x5ac0f0:c.instructions+=19;goto B5ac0f0;
case 0x5ac0f6:c.instructions+=18;goto B5ac0f6;
case 0x5ac0f9:c.instructions+=17;goto B5ac0f9;
case 0x5ac0fd:c.instructions+=16;goto B5ac0fd;
case 0x5ac100:c.instructions+=15;goto B5ac100;
case 0x5ac106:c.instructions+=14;goto B5ac106;
case 0x5ac10c:c.instructions+=13;goto B5ac10c;
case 0x5ac10f:c.instructions+=12;goto B5ac10f;
case 0x5ac112:c.instructions+=11;goto B5ac112;
case 0x5ac114:c.instructions+=10;goto B5ac114;
case 0x5ac11a:c.instructions+=9;goto B5ac11a;
case 0x5ac11c:c.instructions+=8;goto B5ac11c;
case 0x5ac122:c.instructions+=7;goto B5ac122;
case 0x5ac124:c.instructions+=6;goto B5ac124;
case 0x5ac126:c.instructions+=5;goto B5ac126;
case 0x5ac128:c.instructions+=4;goto B5ac128;
case 0x5ac12b:c.instructions+=3;goto B5ac12b;
case 0x5ac12e:c.instructions+=2;goto B5ac12e;
case 0x5ac134:c.instructions+=1;goto B5ac134;
case 0x5ac13a:goto L5ac13a;
case 0x5ac13d:c.instructions+=3;goto B5ac13d;
case 0x5ac143:c.instructions+=2;goto B5ac143;
case 0x5ac145:c.instructions+=1;goto B5ac145;
case 0x5ac147:goto L5ac147;
case 0x5ac14d:c.instructions+=2;goto B5ac14d;
case 0x5ac14f:c.instructions+=1;goto B5ac14f;
case 0x5ac151:goto L5ac151;
case 0x5ac154:c.instructions+=23;goto B5ac154;
case 0x5ac158:c.instructions+=22;goto B5ac158;
case 0x5ac15e:c.instructions+=21;goto B5ac15e;
case 0x5ac162:c.instructions+=20;goto B5ac162;
case 0x5ac166:c.instructions+=19;goto B5ac166;
case 0x5ac16c:c.instructions+=18;goto B5ac16c;
case 0x5ac16f:c.instructions+=17;goto B5ac16f;
case 0x5ac173:c.instructions+=16;goto B5ac173;
case 0x5ac176:c.instructions+=15;goto B5ac176;
case 0x5ac17c:c.instructions+=14;goto B5ac17c;
case 0x5ac182:c.instructions+=13;goto B5ac182;
case 0x5ac185:c.instructions+=12;goto B5ac185;
case 0x5ac188:c.instructions+=11;goto B5ac188;
case 0x5ac18a:c.instructions+=10;goto B5ac18a;
case 0x5ac190:c.instructions+=9;goto B5ac190;
case 0x5ac192:c.instructions+=8;goto B5ac192;
case 0x5ac198:c.instructions+=7;goto B5ac198;
case 0x5ac19a:c.instructions+=6;goto B5ac19a;
case 0x5ac19c:c.instructions+=5;goto B5ac19c;
case 0x5ac19e:c.instructions+=4;goto B5ac19e;
case 0x5ac1a1:c.instructions+=3;goto B5ac1a1;
case 0x5ac1a4:c.instructions+=2;goto B5ac1a4;
case 0x5ac1aa:c.instructions+=1;goto B5ac1aa;
case 0x5ac1b0:goto L5ac1b0;
case 0x5ac1b3:c.instructions+=3;goto B5ac1b3;
case 0x5ac1b9:c.instructions+=2;goto B5ac1b9;
case 0x5ac1bb:c.instructions+=1;goto B5ac1bb;
case 0x5ac1bd:goto L5ac1bd;
case 0x5ac1c3:c.instructions+=2;goto B5ac1c3;
case 0x5ac1c5:c.instructions+=1;goto B5ac1c5;
case 0x5ac1c7:goto L5ac1c7;
case 0x5ac1ca:c.instructions+=23;goto B5ac1ca;
case 0x5ac1ce:c.instructions+=22;goto B5ac1ce;
case 0x5ac1d4:c.instructions+=21;goto B5ac1d4;
case 0x5ac1d8:c.instructions+=20;goto B5ac1d8;
case 0x5ac1dc:c.instructions+=19;goto B5ac1dc;
case 0x5ac1e2:c.instructions+=18;goto B5ac1e2;
case 0x5ac1e5:c.instructions+=17;goto B5ac1e5;
case 0x5ac1e9:c.instructions+=16;goto B5ac1e9;
case 0x5ac1ec:c.instructions+=15;goto B5ac1ec;
case 0x5ac1f2:c.instructions+=14;goto B5ac1f2;
case 0x5ac1f8:c.instructions+=13;goto B5ac1f8;
case 0x5ac1fb:c.instructions+=12;goto B5ac1fb;
case 0x5ac1fe:c.instructions+=11;goto B5ac1fe;
case 0x5ac200:c.instructions+=10;goto B5ac200;
case 0x5ac206:c.instructions+=9;goto B5ac206;
case 0x5ac208:c.instructions+=8;goto B5ac208;
case 0x5ac20e:c.instructions+=7;goto B5ac20e;
case 0x5ac210:c.instructions+=6;goto B5ac210;
case 0x5ac212:c.instructions+=5;goto B5ac212;
case 0x5ac214:c.instructions+=4;goto B5ac214;
case 0x5ac217:c.instructions+=3;goto B5ac217;
case 0x5ac21a:c.instructions+=2;goto B5ac21a;
case 0x5ac220:c.instructions+=1;goto B5ac220;
case 0x5ac226:goto L5ac226;
case 0x5ac229:c.instructions+=1;goto B5ac229;
case 0x5ac22e:goto L5ac22e;
case 0x5ac22f:c.instructions+=1;goto B5ac22f;
case 0x5ac235:goto L5ac235;
case 0x5ac237:c.instructions+=2;goto B5ac237;
case 0x5ac23a:c.instructions+=1;goto B5ac23a;
case 0x5ac240:goto L5ac240;
case 0x5ac242:c.instructions+=2;goto B5ac242;
case 0x5ac243:c.instructions+=1;goto B5ac243;
case 0x5ac248:goto L5ac248;
case 0x5ac249:c.instructions+=3;goto B5ac249;
case 0x5ac24c:c.instructions+=2;goto B5ac24c;
case 0x5ac24f:c.instructions+=1;goto B5ac24f;
case 0x5ac251:goto L5ac251;
case 0x5ac254:c.instructions+=1;goto B5ac254;
case 0x5ac259:goto L5ac259;
case 0x5ac25a:c.instructions+=5;goto B5ac25a;
case 0x5ac25b:c.instructions+=4;goto B5ac25b;
case 0x5ac25c:c.instructions+=3;goto B5ac25c;
case 0x5ac25e:c.instructions+=2;goto B5ac25e;
case 0x5ac25f:c.instructions+=1;goto B5ac25f;
case 0x5ac260:goto L5ac260;
case 0x5ac261:c.instructions+=12;goto B5ac261;
case 0x5ac263:c.instructions+=11;goto B5ac263;
case 0x5ac266:c.instructions+=10;goto B5ac266;
case 0x5ac269:c.instructions+=9;goto B5ac269;
case 0x5ac26a:c.instructions+=8;goto B5ac26a;
case 0x5ac26b:c.instructions+=7;goto B5ac26b;
case 0x5ac26d:c.instructions+=6;goto B5ac26d;
case 0x5ac270:c.instructions+=5;goto B5ac270;
case 0x5ac273:c.instructions+=4;goto B5ac273;
case 0x5ac276:c.instructions+=3;goto B5ac276;
case 0x5ac277:c.instructions+=2;goto B5ac277;
case 0x5ac278:c.instructions+=1;goto B5ac278;
case 0x5ac27d:goto L5ac27d;
case 0x5ac284:c.instructions+=11;goto B5ac284;
case 0x5ac287:c.instructions+=10;goto B5ac287;
case 0x5ac28a:c.instructions+=9;goto B5ac28a;
case 0x5ac28e:c.instructions+=8;goto B5ac28e;
case 0x5ac291:c.instructions+=7;goto B5ac291;
case 0x5ac295:c.instructions+=6;goto B5ac295;
case 0x5ac29b:c.instructions+=5;goto B5ac29b;
case 0x5ac29f:c.instructions+=4;goto B5ac29f;
case 0x5ac2a5:c.instructions+=3;goto B5ac2a5;
case 0x5ac2a7:c.instructions+=2;goto B5ac2a7;
case 0x5ac2aa:c.instructions+=1;goto B5ac2aa;
case 0x5ac2ac:goto L5ac2ac;
case 0x5ac2b2:c.instructions+=3;goto B5ac2b2;
case 0x5ac2b4:c.instructions+=2;goto B5ac2b4;
case 0x5ac2b8:c.instructions+=1;goto B5ac2b8;
case 0x5ac2bc:goto L5ac2bc;
case 0x5ac2bf:c.instructions+=8;goto B5ac2bf;
case 0x5ac2c5:c.instructions+=7;goto B5ac2c5;
case 0x5ac2c9:c.instructions+=6;goto B5ac2c9;
case 0x5ac2cc:c.instructions+=5;goto B5ac2cc;
case 0x5ac2d2:c.instructions+=4;goto B5ac2d2;
case 0x5ac2d8:c.instructions+=3;goto B5ac2d8;
case 0x5ac2da:c.instructions+=2;goto B5ac2da;
case 0x5ac2dd:c.instructions+=1;goto B5ac2dd;
case 0x5ac2df:goto L5ac2df;
case 0x5ac2e4:c.instructions+=1;goto B5ac2e4;
case 0x5ac2e6:goto L5ac2e6;
case 0x5ac2e8:goto L5ac2e8;
case 0x5ac2ee:c.instructions+=7;goto B5ac2ee;
case 0x5ac2f0:c.instructions+=6;goto B5ac2f0;
case 0x5ac2f6:c.instructions+=5;goto B5ac2f6;
case 0x5ac2f8:c.instructions+=4;goto B5ac2f8;
case 0x5ac2fb:c.instructions+=3;goto B5ac2fb;
case 0x5ac2fd:c.instructions+=2;goto B5ac2fd;
case 0x5ac300:c.instructions+=1;goto B5ac300;
case 0x5ac302:goto L5ac302;
case 0x5ac307:goto L5ac307;
case 0x5ac30c:c.instructions+=10;goto B5ac30c;
case 0x5ac30f:c.instructions+=9;goto B5ac30f;
case 0x5ac311:c.instructions+=8;goto B5ac311;
case 0x5ac318:c.instructions+=7;goto B5ac318;
case 0x5ac31c:c.instructions+=6;goto B5ac31c;
case 0x5ac320:c.instructions+=5;goto B5ac320;
case 0x5ac324:c.instructions+=4;goto B5ac324;
case 0x5ac32a:c.instructions+=3;goto B5ac32a;
case 0x5ac32c:c.instructions+=2;goto B5ac32c;
case 0x5ac32f:c.instructions+=1;goto B5ac32f;
case 0x5ac335:goto L5ac335;
case 0x5ac338:c.instructions+=2;goto B5ac338;
case 0x5ac33f:c.instructions+=1;goto B5ac33f;
case 0x5ac341:goto L5ac341;
case 0x5ac344:c.instructions+=7;goto B5ac344;
case 0x5ac348:c.instructions+=6;goto B5ac348;
case 0x5ac34b:c.instructions+=5;goto B5ac34b;
case 0x5ac34d:c.instructions+=4;goto B5ac34d;
case 0x5ac350:c.instructions+=3;goto B5ac350;
case 0x5ac351:c.instructions+=2;goto B5ac351;
case 0x5ac354:c.instructions+=1;goto B5ac354;
case 0x5ac356:goto L5ac356;
case 0x5ac35a:c.instructions+=3;goto B5ac35a;
case 0x5ac35b:c.instructions+=2;goto B5ac35b;
case 0x5ac360:c.instructions+=1;goto B5ac360;
case 0x5ac362:goto L5ac362;
case 0x5ac366:c.instructions+=2;goto B5ac366;
case 0x5ac367:c.instructions+=1;goto B5ac367;
case 0x5ac36c:goto L5ac36c;
case 0x5ac371:goto L5ac371;
case 0x5ac375:c.instructions+=23;goto B5ac375;
case 0x5ac379:c.instructions+=22;goto B5ac379;
case 0x5ac37c:c.instructions+=21;goto B5ac37c;
case 0x5ac381:c.instructions+=20;goto B5ac381;
case 0x5ac385:c.instructions+=19;goto B5ac385;
case 0x5ac387:c.instructions+=18;goto B5ac387;
case 0x5ac389:c.instructions+=17;goto B5ac389;
case 0x5ac38c:c.instructions+=16;goto B5ac38c;
case 0x5ac38e:c.instructions+=15;goto B5ac38e;
case 0x5ac392:c.instructions+=14;goto B5ac392;
case 0x5ac395:c.instructions+=13;goto B5ac395;
case 0x5ac398:c.instructions+=12;goto B5ac398;
case 0x5ac39a:c.instructions+=11;goto B5ac39a;
case 0x5ac39f:c.instructions+=10;goto B5ac39f;
case 0x5ac3a3:c.instructions+=9;goto B5ac3a3;
case 0x5ac3a5:c.instructions+=8;goto B5ac3a5;
case 0x5ac3a7:c.instructions+=7;goto B5ac3a7;
case 0x5ac3a9:c.instructions+=6;goto B5ac3a9;
case 0x5ac3ad:c.instructions+=5;goto B5ac3ad;
case 0x5ac3b0:c.instructions+=4;goto B5ac3b0;
case 0x5ac3b3:c.instructions+=3;goto B5ac3b3;
case 0x5ac3b7:c.instructions+=2;goto B5ac3b7;
case 0x5ac3ba:c.instructions+=1;goto B5ac3ba;
case 0x5ac3bd:goto L5ac3bd;
case 0x5ac3c0:c.instructions+=5;goto B5ac3c0;
case 0x5ac3c6:c.instructions+=4;goto B5ac3c6;
case 0x5ac3cc:c.instructions+=3;goto B5ac3cc;
case 0x5ac3ce:c.instructions+=2;goto B5ac3ce;
case 0x5ac3d1:c.instructions+=1;goto B5ac3d1;
case 0x5ac3d3:goto L5ac3d3;
case 0x5ac3d8:c.instructions+=1;goto B5ac3d8;
case 0x5ac3da:goto L5ac3da;
case 0x5ac3dc:goto L5ac3dc;
case 0x5ac3e2:c.instructions+=7;goto B5ac3e2;
case 0x5ac3e4:c.instructions+=6;goto B5ac3e4;
case 0x5ac3ea:c.instructions+=5;goto B5ac3ea;
case 0x5ac3ec:c.instructions+=4;goto B5ac3ec;
case 0x5ac3ef:c.instructions+=3;goto B5ac3ef;
case 0x5ac3f1:c.instructions+=2;goto B5ac3f1;
case 0x5ac3f4:c.instructions+=1;goto B5ac3f4;
case 0x5ac3f6:goto L5ac3f6;
case 0x5ac3fb:goto L5ac3fb;
case 0x5ac3ff:c.instructions+=19;goto B5ac3ff;
case 0x5ac405:c.instructions+=18;goto B5ac405;
case 0x5ac407:c.instructions+=17;goto B5ac407;
case 0x5ac40d:c.instructions+=16;goto B5ac40d;
case 0x5ac413:c.instructions+=15;goto B5ac413;
case 0x5ac417:c.instructions+=14;goto B5ac417;
case 0x5ac41b:c.instructions+=13;goto B5ac41b;
case 0x5ac41d:c.instructions+=12;goto B5ac41d;
case 0x5ac421:c.instructions+=11;goto B5ac421;
case 0x5ac423:c.instructions+=10;goto B5ac423;
case 0x5ac425:c.instructions+=9;goto B5ac425;
case 0x5ac427:c.instructions+=8;goto B5ac427;
case 0x5ac42b:c.instructions+=7;goto B5ac42b;
case 0x5ac42d:c.instructions+=6;goto B5ac42d;
case 0x5ac431:c.instructions+=5;goto B5ac431;
case 0x5ac437:c.instructions+=4;goto B5ac437;
case 0x5ac43d:c.instructions+=3;goto B5ac43d;
case 0x5ac43f:c.instructions+=2;goto B5ac43f;
case 0x5ac442:c.instructions+=1;goto B5ac442;
case 0x5ac444:goto L5ac444;
case 0x5ac449:c.instructions+=1;goto B5ac449;
case 0x5ac44b:goto L5ac44b;
case 0x5ac44d:goto L5ac44d;
case 0x5ac453:c.instructions+=8;goto B5ac453;
case 0x5ac455:c.instructions+=7;goto B5ac455;
case 0x5ac45b:c.instructions+=6;goto B5ac45b;
case 0x5ac45d:c.instructions+=5;goto B5ac45d;
case 0x5ac460:c.instructions+=4;goto B5ac460;
case 0x5ac462:c.instructions+=3;goto B5ac462;
case 0x5ac465:c.instructions+=2;goto B5ac465;
case 0x5ac467:c.instructions+=1;goto B5ac467;
case 0x5ac469:goto L5ac469;
case 0x5ac46e:goto L5ac46e;
case 0x5ac472:c.instructions+=3;goto B5ac472;
case 0x5ac473:c.instructions+=2;goto B5ac473;
case 0x5ac478:c.instructions+=1;goto B5ac478;
case 0x5ac47d:goto L5ac47d;
case 0x5ac483:c.instructions+=10;goto B5ac483;
case 0x5ac486:c.instructions+=9;goto B5ac486;
case 0x5ac48c:c.instructions+=8;goto B5ac48c;
case 0x5ac492:c.instructions+=7;goto B5ac492;
case 0x5ac495:c.instructions+=6;goto B5ac495;
case 0x5ac496:c.instructions+=5;goto B5ac496;
case 0x5ac49c:c.instructions+=4;goto B5ac49c;
case 0x5ac49d:c.instructions+=3;goto B5ac49d;
case 0x5ac49f:c.instructions+=2;goto B5ac49f;
case 0x5ac4a0:c.instructions+=1;goto B5ac4a0;
case 0x5ac4b0:goto L5ac4b0;
case 0x5ac4b1:c.instructions+=5;goto B5ac4b1;
case 0x5ac4b2:c.instructions+=4;goto B5ac4b2;
case 0x5ac4b3:c.instructions+=3;goto B5ac4b3;
case 0x5ac4b5:c.instructions+=2;goto B5ac4b5;
case 0x5ac4b7:c.instructions+=1;goto B5ac4b7;
case 0x5ac4bc:goto L5ac4bc;
case 0x5ac4c0:c.instructions+=2;goto B5ac4c0;
case 0x5ac4c2:c.instructions+=1;goto B5ac4c2;
case 0x5ac4c4:goto L5ac4c4;
case 0x5ac4c6:c.instructions+=9;goto B5ac4c6;
case 0x5ac4c9:c.instructions+=8;goto B5ac4c9;
case 0x5ac4cb:c.instructions+=7;goto B5ac4cb;
case 0x5ac4cd:c.instructions+=6;goto B5ac4cd;
case 0x5ac4cf:c.instructions+=5;goto B5ac4cf;
case 0x5ac4d2:c.instructions+=4;goto B5ac4d2;
case 0x5ac4d6:c.instructions+=3;goto B5ac4d6;
case 0x5ac4d8:c.instructions+=2;goto B5ac4d8;
case 0x5ac4da:c.instructions+=1;goto B5ac4da;
case 0x5ac4dc:goto L5ac4dc;
case 0x5ac4e0:goto L5ac4e0;
case 0x5ac4e1:c.instructions+=2;goto B5ac4e1;
case 0x5ac4e4:c.instructions+=1;goto B5ac4e4;
case 0x5ac4e6:goto L5ac4e6;
case 0x5ac4e7:c.instructions+=3;goto B5ac4e7;
case 0x5ac4e8:c.instructions+=2;goto B5ac4e8;
case 0x5ac4e9:c.instructions+=1;goto B5ac4e9;
case 0x5ac4f0:goto L5ac4f0;
case 0x5ac4f4:c.instructions+=11;goto B5ac4f4;
case 0x5ac4f7:c.instructions+=10;goto B5ac4f7;
case 0x5ac4f9:c.instructions+=9;goto B5ac4f9;
case 0x5ac4fa:c.instructions+=8;goto B5ac4fa;
case 0x5ac4fb:c.instructions+=7;goto B5ac4fb;
case 0x5ac4ff:c.instructions+=6;goto B5ac4ff;
case 0x5ac500:c.instructions+=5;goto B5ac500;
case 0x5ac502:c.instructions+=4;goto B5ac502;
case 0x5ac503:c.instructions+=3;goto B5ac503;
case 0x5ac508:c.instructions+=2;goto B5ac508;
case 0x5ac50a:c.instructions+=1;goto B5ac50a;
case 0x5ac50c:goto L5ac50c;
case 0x5ac50e:goto L5ac50e;
case 0x5ac512:c.instructions+=1;goto B5ac512;
case 0x5ac514:goto L5ac514;
case 0x5ac516:goto L5ac516;
case 0x5ac519:c.instructions+=3;goto B5ac519;
case 0x5ac51a:c.instructions+=2;goto B5ac51a;
case 0x5ac520:c.instructions+=1;goto B5ac520;
case 0x5ac525:goto L5ac525;
case 0x5ac526:c.instructions+=2;goto B5ac526;
case 0x5ac528:c.instructions+=1;goto B5ac528;
case 0x5ac52d:goto L5ac52d;
case 0x5ac52e:c.instructions+=2;goto B5ac52e;
case 0x5ac531:c.instructions+=1;goto B5ac531;
case 0x5ac533:goto L5ac533;
case 0x5ac535:c.instructions+=3;goto B5ac535;
case 0x5ac53a:c.instructions+=2;goto B5ac53a;
case 0x5ac53c:c.instructions+=1;goto B5ac53c;
case 0x5ac53d:goto L5ac53d;
case 0x5ac53f:goto L5ac53f;
case 0x5ac540:c.instructions+=2;goto B5ac540;
case 0x5ac542:c.instructions+=1;goto B5ac542;
case 0x5ac547:goto L5ac547;
case 0x5ac548:c.instructions+=3;goto B5ac548;
case 0x5ac549:c.instructions+=2;goto B5ac549;
case 0x5ac54b:c.instructions+=1;goto B5ac54b;
case 0x5ac550:goto L5ac550;
case 0x5ac554:c.instructions+=5;goto B5ac554;
case 0x5ac555:c.instructions+=4;goto B5ac555;
case 0x5ac557:c.instructions+=3;goto B5ac557;
case 0x5ac559:c.instructions+=2;goto B5ac559;
case 0x5ac55b:c.instructions+=1;goto B5ac55b;
case 0x5ac560:goto L5ac560;
case 0x5ac566:c.instructions+=3;goto B5ac566;
case 0x5ac568:c.instructions+=2;goto B5ac568;
case 0x5ac56b:c.instructions+=1;goto B5ac56b;
case 0x5ac56d:goto L5ac56d;
case 0x5ac573:c.instructions+=12;goto B5ac573;
case 0x5ac579:c.instructions+=11;goto B5ac579;
case 0x5ac57b:c.instructions+=10;goto B5ac57b;
case 0x5ac57f:c.instructions+=9;goto B5ac57f;
case 0x5ac581:c.instructions+=8;goto B5ac581;
case 0x5ac587:c.instructions+=7;goto B5ac587;
case 0x5ac589:c.instructions+=6;goto B5ac589;
case 0x5ac58f:c.instructions+=5;goto B5ac58f;
case 0x5ac595:c.instructions+=4;goto B5ac595;
case 0x5ac597:c.instructions+=3;goto B5ac597;
case 0x5ac599:c.instructions+=2;goto B5ac599;
case 0x5ac59f:c.instructions+=1;goto B5ac59f;
case 0x5ac5a1:goto L5ac5a1;
case 0x5ac5a2:c.instructions+=3;goto B5ac5a2;
case 0x5ac5a3:c.instructions+=2;goto B5ac5a3;
case 0x5ac5a5:c.instructions+=1;goto B5ac5a5;
case 0x5ac5aa:goto L5ac5aa;
case 0x5ac5ab:c.instructions+=3;goto B5ac5ab;
case 0x5ac5ac:c.instructions+=2;goto B5ac5ac;
case 0x5ac5ae:c.instructions+=1;goto B5ac5ae;
case 0x5ac5b3:goto L5ac5b3;
case 0x5ac5b4:c.instructions+=3;goto B5ac5b4;
case 0x5ac5b5:c.instructions+=2;goto B5ac5b5;
case 0x5ac5b7:c.instructions+=1;goto B5ac5b7;
case 0x5ac5bc:goto L5ac5bc;
case 0x5ac5bd:c.instructions+=3;goto B5ac5bd;
case 0x5ac5be:c.instructions+=2;goto B5ac5be;
case 0x5ac5c0:c.instructions+=1;goto B5ac5c0;
case 0x5ac5c5:goto L5ac5c5;
case 0x5ac5c6:c.instructions+=3;goto B5ac5c6;
case 0x5ac5c7:c.instructions+=2;goto B5ac5c7;
case 0x5ac5c9:c.instructions+=1;goto B5ac5c9;
case 0x5ac5ce:goto L5ac5ce;
case 0x5ac5cf:c.instructions+=3;goto B5ac5cf;
case 0x5ac5d0:c.instructions+=2;goto B5ac5d0;
case 0x5ac5d2:c.instructions+=1;goto B5ac5d2;
case 0x5ac5d7:goto L5ac5d7;
case 0x5ac5db:c.instructions+=2;goto B5ac5db;
case 0x5ac5dd:c.instructions+=1;goto B5ac5dd;
case 0x5ac5df:goto L5ac5df;
case 0x5ac5e4:c.instructions+=2;goto B5ac5e4;
case 0x5ac5e6:c.instructions+=1;goto B5ac5e6;
case 0x5ac5e8:goto L5ac5e8;
case 0x5ac5eb:c.instructions+=11;goto B5ac5eb;
case 0x5ac5f3:c.instructions+=10;goto B5ac5f3;
case 0x5ac5f6:c.instructions+=9;goto B5ac5f6;
case 0x5ac5f8:c.instructions+=8;goto B5ac5f8;
case 0x5ac5fe:c.instructions+=7;goto B5ac5fe;
case 0x5ac604:c.instructions+=6;goto B5ac604;
case 0x5ac608:c.instructions+=5;goto B5ac608;
case 0x5ac60c:c.instructions+=4;goto B5ac60c;
case 0x5ac612:c.instructions+=3;goto B5ac612;
case 0x5ac614:c.instructions+=2;goto B5ac614;
case 0x5ac617:c.instructions+=1;goto B5ac617;
case 0x5ac619:goto L5ac619;
case 0x5ac61d:c.instructions+=5;goto B5ac61d;
case 0x5ac623:c.instructions+=4;goto B5ac623;
case 0x5ac627:c.instructions+=3;goto B5ac627;
case 0x5ac629:c.instructions+=2;goto B5ac629;
case 0x5ac62c:c.instructions+=1;goto B5ac62c;
case 0x5ac62e:goto L5ac62e;
case 0x5ac630:c.instructions+=2;goto B5ac630;
case 0x5ac638:c.instructions+=1;goto B5ac638;
case 0x5ac63a:goto L5ac63a;
case 0x5ac640:goto L5ac640;
case 0x5ac644:goto L5ac644;
case 0x5ac648:c.instructions+=6;goto B5ac648;
case 0x5ac64a:c.instructions+=5;goto B5ac64a;
case 0x5ac64e:c.instructions+=4;goto B5ac64e;
case 0x5ac64f:c.instructions+=3;goto B5ac64f;
case 0x5ac650:c.instructions+=2;goto B5ac650;
case 0x5ac652:c.instructions+=1;goto B5ac652;
case 0x5ac657:goto L5ac657;
case 0x5ac659:goto L5ac659;
case 0x5ac65a:c.instructions+=3;goto B5ac65a;
case 0x5ac65b:c.instructions+=2;goto B5ac65b;
case 0x5ac65d:c.instructions+=1;goto B5ac65d;
case 0x5ac662:goto L5ac662;
case 0x5ac668:c.instructions+=2;goto B5ac668;
case 0x5ac669:c.instructions+=1;goto B5ac669;
case 0x5ac66e:goto L5ac66e;
case 0x5ac674:c.instructions+=30;goto B5ac674;
case 0x5ac676:c.instructions+=29;goto B5ac676;
case 0x5ac679:c.instructions+=28;goto B5ac679;
case 0x5ac67b:c.instructions+=27;goto B5ac67b;
case 0x5ac67c:c.instructions+=26;goto B5ac67c;
case 0x5ac682:c.instructions+=25;goto B5ac682;
case 0x5ac684:c.instructions+=24;goto B5ac684;
case 0x5ac686:c.instructions+=23;goto B5ac686;
case 0x5ac68c:c.instructions+=22;goto B5ac68c;
case 0x5ac68e:c.instructions+=21;goto B5ac68e;
case 0x5ac690:c.instructions+=20;goto B5ac690;
case 0x5ac692:c.instructions+=19;goto B5ac692;
case 0x5ac694:c.instructions+=18;goto B5ac694;
case 0x5ac69a:c.instructions+=17;goto B5ac69a;
case 0x5ac6a0:c.instructions+=16;goto B5ac6a0;
case 0x5ac6a2:c.instructions+=15;goto B5ac6a2;
case 0x5ac6a3:c.instructions+=14;goto B5ac6a3;
case 0x5ac6a5:c.instructions+=13;goto B5ac6a5;
case 0x5ac6ab:c.instructions+=12;goto B5ac6ab;
case 0x5ac6b1:c.instructions+=11;goto B5ac6b1;
case 0x5ac6b7:c.instructions+=10;goto B5ac6b7;
case 0x5ac6b9:c.instructions+=9;goto B5ac6b9;
case 0x5ac6bb:c.instructions+=8;goto B5ac6bb;
case 0x5ac6c1:c.instructions+=7;goto B5ac6c1;
case 0x5ac6c7:c.instructions+=6;goto B5ac6c7;
case 0x5ac6cd:c.instructions+=5;goto B5ac6cd;
case 0x5ac6ce:c.instructions+=4;goto B5ac6ce;
case 0x5ac6d0:c.instructions+=3;goto B5ac6d0;
case 0x5ac6d1:c.instructions+=2;goto B5ac6d1;
case 0x5ac6d4:c.instructions+=1;goto B5ac6d4;
case 0x5ac6e0:goto L5ac6e0;
case 0x5ac6e1:c.instructions+=13;goto B5ac6e1;
case 0x5ac6e2:c.instructions+=12;goto B5ac6e2;
case 0x5ac6e7:c.instructions+=11;goto B5ac6e7;
case 0x5ac6e8:c.instructions+=10;goto B5ac6e8;
case 0x5ac6ea:c.instructions+=9;goto B5ac6ea;
case 0x5ac6f0:c.instructions+=8;goto B5ac6f0;
case 0x5ac6f6:c.instructions+=7;goto B5ac6f6;
case 0x5ac6fc:c.instructions+=6;goto B5ac6fc;
case 0x5ac702:c.instructions+=5;goto B5ac702;
case 0x5ac704:c.instructions+=4;goto B5ac704;
case 0x5ac705:c.instructions+=3;goto B5ac705;
case 0x5ac70f:c.instructions+=2;goto B5ac70f;
case 0x5ac715:c.instructions+=1;goto B5ac715;
case 0x5ac717:goto L5ac717;
case 0x5ac71a:c.instructions+=4;goto B5ac71a;
case 0x5ac71e:c.instructions+=3;goto B5ac71e;
case 0x5ac71f:c.instructions+=2;goto B5ac71f;
case 0x5ac722:c.instructions+=1;goto B5ac722;
case 0x5ac724:goto L5ac724;
case 0x5ac726:c.instructions+=2;goto B5ac726;
case 0x5ac729:c.instructions+=1;goto B5ac729;
case 0x5ac72e:goto L5ac72e;
case 0x5ac730:goto L5ac730;
case 0x5ac736:c.instructions+=2;goto B5ac736;
case 0x5ac738:c.instructions+=1;goto B5ac738;
case 0x5ac73d:goto L5ac73d;
case 0x5ac743:c.instructions+=8;goto B5ac743;
case 0x5ac74d:c.instructions+=7;goto B5ac74d;
case 0x5ac757:c.instructions+=6;goto B5ac757;
case 0x5ac761:c.instructions+=5;goto B5ac761;
case 0x5ac76b:c.instructions+=4;goto B5ac76b;
case 0x5ac771:c.instructions+=3;goto B5ac771;
case 0x5ac776:c.instructions+=2;goto B5ac776;
case 0x5ac778:c.instructions+=1;goto B5ac778;
case 0x5ac77d:goto L5ac77d;
case 0x5ac77f:goto L5ac77f;
case 0x5ac781:c.instructions+=12;goto B5ac781;
case 0x5ac787:c.instructions+=11;goto B5ac787;
case 0x5ac789:c.instructions+=10;goto B5ac789;
case 0x5ac78b:c.instructions+=9;goto B5ac78b;
case 0x5ac791:c.instructions+=8;goto B5ac791;
case 0x5ac795:c.instructions+=7;goto B5ac795;
case 0x5ac798:c.instructions+=6;goto B5ac798;
case 0x5ac79b:c.instructions+=5;goto B5ac79b;
case 0x5ac79e:c.instructions+=4;goto B5ac79e;
case 0x5ac7a1:c.instructions+=3;goto B5ac7a1;
case 0x5ac7a4:c.instructions+=2;goto B5ac7a4;
case 0x5ac7a7:c.instructions+=1;goto B5ac7a7;
case 0x5ac7ac:goto L5ac7ac;
case 0x5ac7af:c.instructions+=9;goto B5ac7af;
case 0x5ac7b0:c.instructions+=8;goto B5ac7b0;
case 0x5ac7b3:c.instructions+=7;goto B5ac7b3;
case 0x5ac7b5:c.instructions+=6;goto B5ac7b5;
case 0x5ac7b6:c.instructions+=5;goto B5ac7b6;
case 0x5ac7b9:c.instructions+=4;goto B5ac7b9;
case 0x5ac7c0:c.instructions+=3;goto B5ac7c0;
case 0x5ac7c1:c.instructions+=2;goto B5ac7c1;
case 0x5ac7c2:c.instructions+=1;goto B5ac7c2;
case 0x5ac7d0:goto L5ac7d0;
case 0x5ac7d3:c.instructions+=28;goto B5ac7d3;
case 0x5ac7d4:c.instructions+=27;goto B5ac7d4;
case 0x5ac7d5:c.instructions+=26;goto B5ac7d5;
case 0x5ac7d6:c.instructions+=25;goto B5ac7d6;
case 0x5ac7d7:c.instructions+=24;goto B5ac7d7;
case 0x5ac7db:c.instructions+=23;goto B5ac7db;
case 0x5ac7de:c.instructions+=22;goto B5ac7de;
case 0x5ac7e0:c.instructions+=21;goto B5ac7e0;
case 0x5ac7e4:c.instructions+=20;goto B5ac7e4;
case 0x5ac7e8:c.instructions+=19;goto B5ac7e8;
case 0x5ac7ec:c.instructions+=18;goto B5ac7ec;
case 0x5ac7f0:c.instructions+=17;goto B5ac7f0;
case 0x5ac7f4:c.instructions+=16;goto B5ac7f4;
case 0x5ac7f8:c.instructions+=15;goto B5ac7f8;
case 0x5ac7fe:c.instructions+=14;goto B5ac7fe;
case 0x5ac803:c.instructions+=13;goto B5ac803;
case 0x5ac806:c.instructions+=12;goto B5ac806;
case 0x5ac80e:c.instructions+=11;goto B5ac80e;
case 0x5ac812:c.instructions+=10;goto B5ac812;
case 0x5ac816:c.instructions+=9;goto B5ac816;
case 0x5ac819:c.instructions+=8;goto B5ac819;
case 0x5ac81b:c.instructions+=7;goto B5ac81b;
case 0x5ac81d:c.instructions+=6;goto B5ac81d;
case 0x5ac81f:c.instructions+=5;goto B5ac81f;
case 0x5ac822:c.instructions+=4;goto B5ac822;
case 0x5ac825:c.instructions+=3;goto B5ac825;
case 0x5ac826:c.instructions+=2;goto B5ac826;
case 0x5ac828:c.instructions+=1;goto B5ac828;
case 0x5ac82e:goto L5ac82e;
case 0x5ac832:c.instructions+=4;goto B5ac832;
case 0x5ac835:c.instructions+=3;goto B5ac835;
case 0x5ac838:c.instructions+=2;goto B5ac838;
case 0x5ac83c:c.instructions+=1;goto B5ac83c;
case 0x5ac840:goto L5ac840;
case 0x5ac843:c.instructions+=7;goto B5ac843;
case 0x5ac846:c.instructions+=6;goto B5ac846;
case 0x5ac848:c.instructions+=5;goto B5ac848;
case 0x5ac84c:c.instructions+=4;goto B5ac84c;
case 0x5ac851:c.instructions+=3;goto B5ac851;
case 0x5ac853:c.instructions+=2;goto B5ac853;
case 0x5ac857:c.instructions+=1;goto B5ac857;
case 0x5ac85d:goto L5ac85d;
case 0x5ac85f:c.instructions+=8;goto B5ac85f;
case 0x5ac862:c.instructions+=7;goto B5ac862;
case 0x5ac866:c.instructions+=6;goto B5ac866;
case 0x5ac86c:c.instructions+=5;goto B5ac86c;
case 0x5ac870:c.instructions+=4;goto B5ac870;
case 0x5ac874:c.instructions+=3;goto B5ac874;
case 0x5ac876:c.instructions+=2;goto B5ac876;
case 0x5ac879:c.instructions+=1;goto B5ac879;
case 0x5ac87f:goto L5ac87f;
case 0x5ac883:c.instructions+=3;goto B5ac883;
case 0x5ac885:c.instructions+=2;goto B5ac885;
case 0x5ac889:c.instructions+=1;goto B5ac889;
case 0x5ac890:goto L5ac890;
case 0x5ac894:c.instructions+=3;goto B5ac894;
case 0x5ac895:c.instructions+=2;goto B5ac895;
case 0x5ac899:c.instructions+=1;goto B5ac899;
case 0x5ac89e:goto L5ac89e;
case 0x5ac8a2:c.instructions+=5;goto B5ac8a2;
case 0x5ac8a6:c.instructions+=4;goto B5ac8a6;
case 0x5ac8ac:c.instructions+=3;goto B5ac8ac;
case 0x5ac8ae:c.instructions+=2;goto B5ac8ae;
case 0x5ac8b1:c.instructions+=1;goto B5ac8b1;
case 0x5ac8b3:goto L5ac8b3;
case 0x5ac8b9:c.instructions+=8;goto B5ac8b9;
case 0x5ac8ba:c.instructions+=7;goto B5ac8ba;
case 0x5ac8be:c.instructions+=6;goto B5ac8be;
case 0x5ac8c2:c.instructions+=5;goto B5ac8c2;
case 0x5ac8c6:c.instructions+=4;goto B5ac8c6;
case 0x5ac8ca:c.instructions+=3;goto B5ac8ca;
case 0x5ac8ce:c.instructions+=2;goto B5ac8ce;
case 0x5ac8d1:c.instructions+=1;goto B5ac8d1;
case 0x5ac8d6:goto L5ac8d6;
case 0x5ac8da:c.instructions+=2;goto B5ac8da;
case 0x5ac8de:c.instructions+=1;goto B5ac8de;
case 0x5ac8e0:goto L5ac8e0;
case 0x5ac8e6:goto L5ac8e6;
case 0x5ac8ea:c.instructions+=3;goto B5ac8ea;
case 0x5ac8ec:c.instructions+=2;goto B5ac8ec;
case 0x5ac8ef:c.instructions+=1;goto B5ac8ef;
case 0x5ac8f1:goto L5ac8f1;
case 0x5ac8f7:c.instructions+=6;goto B5ac8f7;
case 0x5ac8fb:c.instructions+=5;goto B5ac8fb;
case 0x5ac8ff:c.instructions+=4;goto B5ac8ff;
case 0x5ac903:c.instructions+=3;goto B5ac903;
case 0x5ac905:c.instructions+=2;goto B5ac905;
case 0x5ac908:c.instructions+=1;goto B5ac908;
case 0x5ac90a:goto L5ac90a;
case 0x5ac90d:goto L5ac90d;
case 0x5ac913:goto L5ac913;
case 0x5ac916:c.instructions+=6;goto B5ac916;
case 0x5ac91a:c.instructions+=5;goto B5ac91a;
case 0x5ac91c:c.instructions+=4;goto B5ac91c;
case 0x5ac922:c.instructions+=3;goto B5ac922;
case 0x5ac924:c.instructions+=2;goto B5ac924;
case 0x5ac927:c.instructions+=1;goto B5ac927;
case 0x5ac929:goto L5ac929;
case 0x5ac92d:c.instructions+=5;goto B5ac92d;
case 0x5ac931:c.instructions+=4;goto B5ac931;
case 0x5ac935:c.instructions+=3;goto B5ac935;
case 0x5ac938:c.instructions+=2;goto B5ac938;
case 0x5ac93a:c.instructions+=1;goto B5ac93a;
case 0x5ac93c:goto L5ac93c;
case 0x5ac940:c.instructions+=1;goto B5ac940;
case 0x5ac942:goto L5ac942;
case 0x5ac946:c.instructions+=1;goto B5ac946;
case 0x5ac94c:goto L5ac94c;
case 0x5ac950:c.instructions+=8;goto B5ac950;
case 0x5ac954:c.instructions+=7;goto B5ac954;
case 0x5ac955:c.instructions+=6;goto B5ac955;
case 0x5ac958:c.instructions+=5;goto B5ac958;
case 0x5ac95b:c.instructions+=4;goto B5ac95b;
case 0x5ac95d:c.instructions+=3;goto B5ac95d;
case 0x5ac961:c.instructions+=2;goto B5ac961;
case 0x5ac965:c.instructions+=1;goto B5ac965;
case 0x5ac96b:goto L5ac96b;
case 0x5ac96e:c.instructions+=8;goto B5ac96e;
case 0x5ac96f:c.instructions+=7;goto B5ac96f;
case 0x5ac975:c.instructions+=6;goto B5ac975;
case 0x5ac978:c.instructions+=5;goto B5ac978;
case 0x5ac979:c.instructions+=4;goto B5ac979;
case 0x5ac97a:c.instructions+=3;goto B5ac97a;
case 0x5ac97b:c.instructions+=2;goto B5ac97b;
case 0x5ac97e:c.instructions+=1;goto B5ac97e;
case 0x5ac980:goto L5ac980;
case 0x5ac983:c.instructions+=23;goto B5ac983;
case 0x5ac987:c.instructions+=22;goto B5ac987;
case 0x5ac98b:c.instructions+=21;goto B5ac98b;
case 0x5ac98c:c.instructions+=20;goto B5ac98c;
case 0x5ac990:c.instructions+=19;goto B5ac990;
case 0x5ac994:c.instructions+=18;goto B5ac994;
case 0x5ac998:c.instructions+=17;goto B5ac998;
case 0x5ac99c:c.instructions+=16;goto B5ac99c;
case 0x5ac9a0:c.instructions+=15;goto B5ac9a0;
case 0x5ac9a4:c.instructions+=14;goto B5ac9a4;
case 0x5ac9a8:c.instructions+=13;goto B5ac9a8;
case 0x5ac9ac:c.instructions+=12;goto B5ac9ac;
case 0x5ac9ae:c.instructions+=11;goto B5ac9ae;
case 0x5ac9b2:c.instructions+=10;goto B5ac9b2;
case 0x5ac9b6:c.instructions+=9;goto B5ac9b6;
case 0x5ac9be:c.instructions+=8;goto B5ac9be;
case 0x5ac9c6:c.instructions+=7;goto B5ac9c6;
case 0x5ac9ca:c.instructions+=6;goto B5ac9ca;
case 0x5ac9ce:c.instructions+=5;goto B5ac9ce;
case 0x5ac9d2:c.instructions+=4;goto B5ac9d2;
case 0x5ac9d6:c.instructions+=3;goto B5ac9d6;
case 0x5ac9d8:c.instructions+=2;goto B5ac9d8;
case 0x5ac9db:c.instructions+=1;goto B5ac9db;
case 0x5ac9dd:goto L5ac9dd;
case 0x5ac9e0:goto L5ac9e0;
case 0x5ac9e4:c.instructions+=3;goto B5ac9e4;
case 0x5ac9e5:c.instructions+=2;goto B5ac9e5;
case 0x5ac9e9:c.instructions+=1;goto B5ac9e9;
case 0x5ac9ee:goto L5ac9ee;
case 0x5ac9f4:c.instructions+=6;goto B5ac9f4;
case 0x5ac9f8:c.instructions+=5;goto B5ac9f8;
case 0x5ac9fe:c.instructions+=4;goto B5ac9fe;
case 0x5aca02:c.instructions+=3;goto B5aca02;
case 0x5aca04:c.instructions+=2;goto B5aca04;
case 0x5aca07:c.instructions+=1;goto B5aca07;
case 0x5aca09:goto L5aca09;
case 0x5aca0d:c.instructions+=3;goto B5aca0d;
case 0x5aca11:c.instructions+=2;goto B5aca11;
case 0x5aca15:c.instructions+=1;goto B5aca15;
case 0x5aca17:goto L5aca17;
case 0x5aca19:goto L5aca19;
case 0x5aca1d:c.instructions+=6;goto B5aca1d;
case 0x5aca23:c.instructions+=5;goto B5aca23;
case 0x5aca27:c.instructions+=4;goto B5aca27;
case 0x5aca2b:c.instructions+=3;goto B5aca2b;
case 0x5aca2d:c.instructions+=2;goto B5aca2d;
case 0x5aca30:c.instructions+=1;goto B5aca30;
case 0x5aca32:goto L5aca32;
case 0x5aca36:c.instructions+=3;goto B5aca36;
case 0x5aca3a:c.instructions+=2;goto B5aca3a;
case 0x5aca3c:c.instructions+=1;goto B5aca3c;
case 0x5aca3e:goto L5aca3e;
case 0x5aca42:c.instructions+=1;goto B5aca42;
case 0x5aca44:goto L5aca44;
case 0x5aca47:c.instructions+=1;goto B5aca47;
case 0x5aca50:goto L5aca50;
case 0x5aca51:c.instructions+=10;goto B5aca51;
case 0x5aca53:c.instructions+=9;goto B5aca53;
case 0x5aca56:c.instructions+=8;goto B5aca56;
case 0x5aca59:c.instructions+=7;goto B5aca59;
case 0x5aca5a:c.instructions+=6;goto B5aca5a;
case 0x5aca5b:c.instructions+=5;goto B5aca5b;
case 0x5aca5c:c.instructions+=4;goto B5aca5c;
case 0x5aca5e:c.instructions+=3;goto B5aca5e;
case 0x5aca64:c.instructions+=2;goto B5aca64;
case 0x5aca66:c.instructions+=1;goto B5aca66;
case 0x5aca68:goto L5aca68;
case 0x5aca6a:c.instructions+=8;goto B5aca6a;
case 0x5aca6d:c.instructions+=7;goto B5aca6d;
case 0x5aca73:c.instructions+=6;goto B5aca73;
case 0x5aca76:c.instructions+=5;goto B5aca76;
case 0x5aca77:c.instructions+=4;goto B5aca77;
case 0x5aca7c:c.instructions+=3;goto B5aca7c;
case 0x5aca7d:c.instructions+=2;goto B5aca7d;
case 0x5aca84:c.instructions+=1;goto B5aca84;
case 0x5aca89:goto L5aca89;
case 0x5aca8f:c.instructions+=11;goto B5aca8f;
case 0x5aca92:c.instructions+=10;goto B5aca92;
case 0x5aca93:c.instructions+=9;goto B5aca93;
case 0x5aca99:c.instructions+=8;goto B5aca99;
case 0x5aca9b:c.instructions+=7;goto B5aca9b;
case 0x5acaa1:c.instructions+=6;goto B5acaa1;
case 0x5acaa7:c.instructions+=5;goto B5acaa7;
case 0x5acaaa:c.instructions+=4;goto B5acaaa;
case 0x5acab1:c.instructions+=3;goto B5acab1;
case 0x5acab9:c.instructions+=2;goto B5acab9;
case 0x5acac1:c.instructions+=1;goto B5acac1;
case 0x5acac7:goto L5acac7;
case 0x5acace:c.instructions+=1;goto B5acace;
case 0x5acad5:goto L5acad5;
case 0x5acadb:c.instructions+=4;goto B5acadb;
case 0x5acadc:c.instructions+=3;goto B5acadc;
case 0x5acae0:c.instructions+=2;goto B5acae0;
case 0x5acae1:c.instructions+=1;goto B5acae1;
case 0x5acae6:goto L5acae6;
case 0x5acaec:c.instructions+=4;goto B5acaec;
case 0x5acaed:c.instructions+=3;goto B5acaed;
case 0x5acaf1:c.instructions+=2;goto B5acaf1;
case 0x5acaf2:c.instructions+=1;goto B5acaf2;
case 0x5acaf7:goto L5acaf7;
case 0x5acafd:c.instructions+=4;goto B5acafd;
case 0x5acafe:c.instructions+=3;goto B5acafe;
case 0x5acb02:c.instructions+=2;goto B5acb02;
case 0x5acb03:c.instructions+=1;goto B5acb03;
case 0x5acb08:goto L5acb08;
case 0x5acb0e:c.instructions+=4;goto B5acb0e;
case 0x5acb0f:c.instructions+=3;goto B5acb0f;
case 0x5acb13:c.instructions+=2;goto B5acb13;
case 0x5acb14:c.instructions+=1;goto B5acb14;
case 0x5acb19:goto L5acb19;
case 0x5acb1c:c.instructions+=1;goto B5acb1c;
case 0x5acb21:goto L5acb21;
case 0x5acb27:c.instructions+=4;goto B5acb27;
case 0x5acb28:c.instructions+=3;goto B5acb28;
case 0x5acb2c:c.instructions+=2;goto B5acb2c;
case 0x5acb2d:c.instructions+=1;goto B5acb2d;
case 0x5acb32:goto L5acb32;
case 0x5acb38:c.instructions+=4;goto B5acb38;
case 0x5acb39:c.instructions+=3;goto B5acb39;
case 0x5acb3d:c.instructions+=2;goto B5acb3d;
case 0x5acb3e:c.instructions+=1;goto B5acb3e;
case 0x5acb43:goto L5acb43;
case 0x5acb49:c.instructions+=4;goto B5acb49;
case 0x5acb4a:c.instructions+=3;goto B5acb4a;
case 0x5acb4e:c.instructions+=2;goto B5acb4e;
case 0x5acb4f:c.instructions+=1;goto B5acb4f;
case 0x5acb54:goto L5acb54;
case 0x5acb5a:c.instructions+=4;goto B5acb5a;
case 0x5acb5b:c.instructions+=3;goto B5acb5b;
case 0x5acb5f:c.instructions+=2;goto B5acb5f;
case 0x5acb60:c.instructions+=1;goto B5acb60;
case 0x5acb65:goto L5acb65;
case 0x5acb68:c.instructions+=1;goto B5acb68;
case 0x5acb6d:goto L5acb6d;
case 0x5acb73:c.instructions+=4;goto B5acb73;
case 0x5acb74:c.instructions+=3;goto B5acb74;
case 0x5acb78:c.instructions+=2;goto B5acb78;
case 0x5acb79:c.instructions+=1;goto B5acb79;
case 0x5acb7e:goto L5acb7e;
case 0x5acb84:c.instructions+=4;goto B5acb84;
case 0x5acb85:c.instructions+=3;goto B5acb85;
case 0x5acb89:c.instructions+=2;goto B5acb89;
case 0x5acb8a:c.instructions+=1;goto B5acb8a;
case 0x5acb8f:goto L5acb8f;
case 0x5acb92:c.instructions+=1;goto B5acb92;
case 0x5acb97:goto L5acb97;
case 0x5acb9f:c.instructions+=2;goto B5acb9f;
case 0x5acba7:c.instructions+=1;goto B5acba7;
case 0x5acbac:goto L5acbac;
case 0x5acbb2:c.instructions+=4;goto B5acbb2;
case 0x5acbb3:c.instructions+=3;goto B5acbb3;
case 0x5acbb7:c.instructions+=2;goto B5acbb7;
case 0x5acbb8:c.instructions+=1;goto B5acbb8;
case 0x5acbbd:goto L5acbbd;
case 0x5acbc3:c.instructions+=7;goto B5acbc3;
case 0x5acbc9:c.instructions+=6;goto B5acbc9;
case 0x5acbcc:c.instructions+=5;goto B5acbcc;
case 0x5acbd0:c.instructions+=4;goto B5acbd0;
case 0x5acbd6:c.instructions+=3;goto B5acbd6;
case 0x5acbd9:c.instructions+=2;goto B5acbd9;
case 0x5acbda:c.instructions+=1;goto B5acbda;
case 0x5acbdf:goto L5acbdf;
case 0x5acbe5:c.instructions+=4;goto B5acbe5;
case 0x5acbe6:c.instructions+=3;goto B5acbe6;
case 0x5acbea:c.instructions+=2;goto B5acbea;
case 0x5acbeb:c.instructions+=1;goto B5acbeb;
case 0x5acbf0:goto L5acbf0;
case 0x5acbf6:c.instructions+=7;goto B5acbf6;
case 0x5acbfc:c.instructions+=6;goto B5acbfc;
case 0x5acbff:c.instructions+=5;goto B5acbff;
case 0x5acc03:c.instructions+=4;goto B5acc03;
case 0x5acc09:c.instructions+=3;goto B5acc09;
case 0x5acc0c:c.instructions+=2;goto B5acc0c;
case 0x5acc0d:c.instructions+=1;goto B5acc0d;
case 0x5acc12:goto L5acc12;
case 0x5acc15:c.instructions+=1;goto B5acc15;
case 0x5acc1a:goto L5acc1a;
case 0x5acc1d:c.instructions+=10;goto B5acc1d;
case 0x5acc21:c.instructions+=9;goto B5acc21;
case 0x5acc22:c.instructions+=8;goto B5acc22;
case 0x5acc25:c.instructions+=7;goto B5acc25;
case 0x5acc29:c.instructions+=6;goto B5acc29;
case 0x5acc2a:c.instructions+=5;goto B5acc2a;
case 0x5acc2b:c.instructions+=4;goto B5acc2b;
case 0x5acc2c:c.instructions+=3;goto B5acc2c;
case 0x5acc2d:c.instructions+=2;goto B5acc2d;
case 0x5acc2f:c.instructions+=1;goto B5acc2f;
case 0x5acc34:goto L5acc34;
case 0x5acc39:goto L5acc39;
case 0x5acc3c:c.instructions+=10;goto B5acc3c;
case 0x5acc40:c.instructions+=9;goto B5acc40;
case 0x5acc41:c.instructions+=8;goto B5acc41;
case 0x5acc44:c.instructions+=7;goto B5acc44;
case 0x5acc48:c.instructions+=6;goto B5acc48;
case 0x5acc49:c.instructions+=5;goto B5acc49;
case 0x5acc4a:c.instructions+=4;goto B5acc4a;
case 0x5acc4b:c.instructions+=3;goto B5acc4b;
case 0x5acc4c:c.instructions+=2;goto B5acc4c;
case 0x5acc4e:c.instructions+=1;goto B5acc4e;
case 0x5acc53:goto L5acc53;
case 0x5acc58:goto L5acc58;
case 0x5acc5e:c.instructions+=6;goto B5acc5e;
case 0x5acc5f:c.instructions+=5;goto B5acc5f;
case 0x5acc61:c.instructions+=4;goto B5acc61;
case 0x5acc65:c.instructions+=3;goto B5acc65;
case 0x5acc68:c.instructions+=2;goto B5acc68;
case 0x5acc69:c.instructions+=1;goto B5acc69;
case 0x5acc6e:goto L5acc6e;
case 0x5acc74:c.instructions+=6;goto B5acc74;
case 0x5acc77:c.instructions+=5;goto B5acc77;
case 0x5acc79:c.instructions+=4;goto B5acc79;
case 0x5acc7d:c.instructions+=3;goto B5acc7d;
case 0x5acc80:c.instructions+=2;goto B5acc80;
case 0x5acc81:c.instructions+=1;goto B5acc81;
case 0x5acc86:goto L5acc86;
case 0x5acc8a:c.instructions+=3;goto B5acc8a;
case 0x5acc8c:c.instructions+=2;goto B5acc8c;
case 0x5acc8d:c.instructions+=1;goto B5acc8d;
case 0x5acc92:goto L5acc92;
case 0x5acc95:c.instructions+=1;goto B5acc95;
case 0x5acc9a:goto L5acc9a;
case 0x5acca0:c.instructions+=1;goto B5acca0;
case 0x5acca8:goto L5acca8;
case 0x5accab:c.instructions+=1;goto B5accab;
case 0x5accad:goto L5accad;
case 0x5accb3:c.instructions+=5;goto B5accb3;
case 0x5accb6:c.instructions+=4;goto B5accb6;
case 0x5accbc:c.instructions+=3;goto B5accbc;
case 0x5accc0:c.instructions+=2;goto B5accc0;
case 0x5accc4:c.instructions+=1;goto B5accc4;
case 0x5accc6:goto L5accc6;
case 0x5accc8:c.instructions+=2;goto B5accc8;
case 0x5accce:c.instructions+=1;goto B5accce;
case 0x5accd2:goto L5accd2;
case 0x5accd6:c.instructions+=5;goto B5accd6;
case 0x5accda:c.instructions+=4;goto B5accda;
case 0x5accdb:c.instructions+=3;goto B5accdb;
case 0x5accdf:c.instructions+=2;goto B5accdf;
case 0x5acce0:c.instructions+=1;goto B5acce0;
case 0x5acce5:goto L5acce5;
case 0x5acce9:c.instructions+=4;goto B5acce9;
case 0x5accea:c.instructions+=3;goto B5accea;
case 0x5accee:c.instructions+=2;goto B5accee;
case 0x5accef:c.instructions+=1;goto B5accef;
case 0x5accf4:goto L5accf4;
case 0x5accf8:c.instructions+=5;goto B5accf8;
case 0x5accfb:c.instructions+=4;goto B5accfb;
case 0x5accfe:c.instructions+=3;goto B5accfe;
case 0x5accff:c.instructions+=2;goto B5accff;
case 0x5acd03:c.instructions+=1;goto B5acd03;
case 0x5acd05:goto L5acd05;
case 0x5acd09:c.instructions+=6;goto B5acd09;
case 0x5acd0a:c.instructions+=5;goto B5acd0a;
case 0x5acd0e:c.instructions+=4;goto B5acd0e;
case 0x5acd0f:c.instructions+=3;goto B5acd0f;
case 0x5acd10:c.instructions+=2;goto B5acd10;
case 0x5acd12:c.instructions+=1;goto B5acd12;
case 0x5acd17:goto L5acd17;
case 0x5acd1d:c.instructions+=4;goto B5acd1d;
case 0x5acd21:c.instructions+=3;goto B5acd21;
case 0x5acd23:c.instructions+=2;goto B5acd23;
case 0x5acd26:c.instructions+=1;goto B5acd26;
case 0x5acd28:goto L5acd28;
case 0x5acd2e:c.instructions+=1;goto B5acd2e;
case 0x5acd30:goto L5acd30;
case 0x5acd34:goto L5acd34;
case 0x5acd38:c.instructions+=5;goto B5acd38;
case 0x5acd3e:c.instructions+=4;goto B5acd3e;
case 0x5acd42:c.instructions+=3;goto B5acd42;
case 0x5acd44:c.instructions+=2;goto B5acd44;
case 0x5acd47:c.instructions+=1;goto B5acd47;
case 0x5acd4d:goto L5acd4d;
case 0x5acd53:c.instructions+=1;goto B5acd53;
case 0x5acd58:goto L5acd58;
case 0x5acd5e:c.instructions+=4;goto B5acd5e;
case 0x5acd5f:c.instructions+=3;goto B5acd5f;
case 0x5acd63:c.instructions+=2;goto B5acd63;
case 0x5acd64:c.instructions+=1;goto B5acd64;
case 0x5acd69:goto L5acd69;
case 0x5acd6f:c.instructions+=4;goto B5acd6f;
case 0x5acd70:c.instructions+=3;goto B5acd70;
case 0x5acd74:c.instructions+=2;goto B5acd74;
case 0x5acd75:c.instructions+=1;goto B5acd75;
case 0x5acd7a:goto L5acd7a;
case 0x5acd7d:c.instructions+=1;goto B5acd7d;
case 0x5acd7f:goto L5acd7f;
case 0x5acd85:c.instructions+=4;goto B5acd85;
case 0x5acd87:c.instructions+=3;goto B5acd87;
case 0x5acd88:c.instructions+=2;goto B5acd88;
case 0x5acd8a:c.instructions+=1;goto B5acd8a;
case 0x5acd8f:goto L5acd8f;
case 0x5acd93:c.instructions+=5;goto B5acd93;
case 0x5acd98:c.instructions+=4;goto B5acd98;
case 0x5acd9a:c.instructions+=3;goto B5acd9a;
case 0x5acd9b:c.instructions+=2;goto B5acd9b;
case 0x5acd9d:c.instructions+=1;goto B5acd9d;
case 0x5acda2:goto L5acda2;
case 0x5acda4:goto L5acda4;
case 0x5acdaa:c.instructions+=2;goto B5acdaa;
case 0x5acdb2:c.instructions+=1;goto B5acdb2;
case 0x5acdb4:goto L5acdb4;
case 0x5acdbc:c.instructions+=1;goto B5acdbc;
case 0x5acdc4:goto L5acdc4;
case 0x5acdc8:c.instructions+=6;goto B5acdc8;
case 0x5acdc9:c.instructions+=5;goto B5acdc9;
case 0x5acdcd:c.instructions+=4;goto B5acdcd;
case 0x5acdce:c.instructions+=3;goto B5acdce;
case 0x5acdcf:c.instructions+=2;goto B5acdcf;
case 0x5acdd1:c.instructions+=1;goto B5acdd1;
case 0x5acdd6:goto L5acdd6;
case 0x5acdda:goto L5acdda;
case 0x5acddd:c.instructions+=8;goto B5acddd;
case 0x5acde1:c.instructions+=7;goto B5acde1;
case 0x5acde4:c.instructions+=6;goto B5acde4;
case 0x5acde6:c.instructions+=5;goto B5acde6;
case 0x5acde8:c.instructions+=4;goto B5acde8;
case 0x5acdee:c.instructions+=3;goto B5acdee;
case 0x5acdef:c.instructions+=2;goto B5acdef;
case 0x5acdf5:c.instructions+=1;goto B5acdf5;
case 0x5acdf7:goto L5acdf7;
case 0x5acdf9:c.instructions+=8;goto B5acdf9;
case 0x5acdfc:c.instructions+=7;goto B5acdfc;
case 0x5ace02:c.instructions+=6;goto B5ace02;
case 0x5ace05:c.instructions+=5;goto B5ace05;
case 0x5ace06:c.instructions+=4;goto B5ace06;
case 0x5ace0c:c.instructions+=3;goto B5ace0c;
case 0x5ace0d:c.instructions+=2;goto B5ace0d;
case 0x5ace14:c.instructions+=1;goto B5ace14;
case 0x5ace19:goto L5ace19;
case 0x5ace1a:c.instructions+=5;goto B5ace1a;
case 0x5ace1b:c.instructions+=4;goto B5ace1b;
case 0x5ace1c:c.instructions+=3;goto B5ace1c;
case 0x5ace1e:c.instructions+=2;goto B5ace1e;
case 0x5ace1f:c.instructions+=1;goto B5ace1f;
case 0x5ace80:goto L5ace80;
case 0x5ace83:c.instructions+=5;goto B5ace83;
case 0x5ace87:c.instructions+=4;goto B5ace87;
case 0x5ace8d:c.instructions+=3;goto B5ace8d;
case 0x5ace90:c.instructions+=2;goto B5ace90;
case 0x5ace98:c.instructions+=1;goto B5ace98;
case 0x5ace9a:goto L5ace9a;
case 0x5ace9e:c.instructions+=2;goto B5ace9e;
case 0x5acea2:c.instructions+=1;goto B5acea2;
case 0x5acea4:goto L5acea4;
case 0x5acea6:goto L5acea6;
case 0x5aceac:c.instructions+=1;goto B5aceac;
case 0x5aceae:goto L5aceae;
case 0x5aceb1:c.instructions+=1;goto B5aceb1;
case 0x5aceb3:goto L5aceb3;
case 0x5aceb9:goto L5aceb9;
case 0x5acebd:goto L5acebd;
case 0x5acec1:c.instructions+=6;goto B5acec1;
case 0x5acec5:c.instructions+=5;goto B5acec5;
case 0x5acecb:c.instructions+=4;goto B5acecb;
case 0x5acecf:c.instructions+=3;goto B5acecf;
case 0x5aced1:c.instructions+=2;goto B5aced1;
case 0x5aced4:c.instructions+=1;goto B5aced4;
case 0x5aced6:goto L5aced6;
case 0x5aced8:c.instructions+=1;goto B5aced8;
case 0x5acedc:goto L5acedc;
case 0x5acedf:c.instructions+=2;goto B5acedf;
case 0x5acee7:c.instructions+=1;goto B5acee7;
case 0x5acee9:goto L5acee9;
case 0x5aceed:c.instructions+=2;goto B5aceed;
case 0x5acef1:c.instructions+=1;goto B5acef1;
case 0x5acef3:goto L5acef3;
case 0x5acef5:goto L5acef5;
case 0x5acefb:c.instructions+=1;goto B5acefb;
case 0x5acefd:goto L5acefd;
case 0x5acf00:c.instructions+=1;goto B5acf00;
case 0x5acf02:goto L5acf02;
case 0x5acf08:goto L5acf08;
case 0x5acf0c:goto L5acf0c;
case 0x5acf10:c.instructions+=6;goto B5acf10;
case 0x5acf14:c.instructions+=5;goto B5acf14;
case 0x5acf16:c.instructions+=4;goto B5acf16;
case 0x5acf1a:c.instructions+=3;goto B5acf1a;
case 0x5acf1c:c.instructions+=2;goto B5acf1c;
case 0x5acf1f:c.instructions+=1;goto B5acf1f;
case 0x5acf21:goto L5acf21;
case 0x5acf23:c.instructions+=1;goto B5acf23;
case 0x5acf27:goto L5acf27;
case 0x5acf2a:c.instructions+=2;goto B5acf2a;
case 0x5acf32:c.instructions+=1;goto B5acf32;
case 0x5acf34:goto L5acf34;
case 0x5acf38:c.instructions+=2;goto B5acf38;
case 0x5acf3c:c.instructions+=1;goto B5acf3c;
case 0x5acf3e:goto L5acf3e;
case 0x5acf40:goto L5acf40;
case 0x5acf46:c.instructions+=1;goto B5acf46;
case 0x5acf48:goto L5acf48;
case 0x5acf4b:c.instructions+=1;goto B5acf4b;
case 0x5acf4d:goto L5acf4d;
case 0x5acf53:goto L5acf53;
case 0x5acf57:goto L5acf57;
case 0x5acf5b:c.instructions+=6;goto B5acf5b;
case 0x5acf5f:c.instructions+=5;goto B5acf5f;
case 0x5acf61:c.instructions+=4;goto B5acf61;
case 0x5acf65:c.instructions+=3;goto B5acf65;
case 0x5acf67:c.instructions+=2;goto B5acf67;
case 0x5acf6a:c.instructions+=1;goto B5acf6a;
case 0x5acf6c:goto L5acf6c;
case 0x5acf6e:c.instructions+=1;goto B5acf6e;
case 0x5acf72:goto L5acf72;
case 0x5acf75:c.instructions+=2;goto B5acf75;
case 0x5acf7d:c.instructions+=1;goto B5acf7d;
case 0x5acf7f:goto L5acf7f;
case 0x5acf83:c.instructions+=2;goto B5acf83;
case 0x5acf87:c.instructions+=1;goto B5acf87;
case 0x5acf89:goto L5acf89;
case 0x5acf8b:goto L5acf8b;
case 0x5acf91:c.instructions+=1;goto B5acf91;
case 0x5acf93:goto L5acf93;
case 0x5acf96:c.instructions+=1;goto B5acf96;
case 0x5acf98:goto L5acf98;
case 0x5acf9e:goto L5acf9e;
case 0x5acfa2:goto L5acfa2;
case 0x5acfa6:c.instructions+=6;goto B5acfa6;
case 0x5acfaa:c.instructions+=5;goto B5acfaa;
case 0x5acfac:c.instructions+=4;goto B5acfac;
case 0x5acfb0:c.instructions+=3;goto B5acfb0;
case 0x5acfb2:c.instructions+=2;goto B5acfb2;
case 0x5acfb5:c.instructions+=1;goto B5acfb5;
case 0x5acfb7:goto L5acfb7;
case 0x5acfb9:c.instructions+=1;goto B5acfb9;
case 0x5acfbd:goto L5acfbd;
case 0x5acfc0:c.instructions+=2;goto B5acfc0;
case 0x5acfc8:c.instructions+=1;goto B5acfc8;
case 0x5acfca:goto L5acfca;
case 0x5acfce:c.instructions+=2;goto B5acfce;
case 0x5acfd2:c.instructions+=1;goto B5acfd2;
case 0x5acfd4:goto L5acfd4;
case 0x5acfd6:goto L5acfd6;
case 0x5acfdc:c.instructions+=1;goto B5acfdc;
case 0x5acfde:goto L5acfde;
case 0x5acfe1:c.instructions+=1;goto B5acfe1;
case 0x5acfe3:goto L5acfe3;
case 0x5acfe9:goto L5acfe9;
case 0x5acfed:goto L5acfed;
case 0x5acff1:c.instructions+=5;goto B5acff1;
case 0x5acff5:c.instructions+=4;goto B5acff5;
case 0x5acff7:c.instructions+=3;goto B5acff7;
case 0x5acffb:c.instructions+=2;goto B5acffb;
case 0x5acffd:c.instructions+=1;goto B5acffd;
default:missing_instruction(c.pc);}
B5ac000:L5ac000:{c.instructions+=14;NFSU2_TR(0x5ac000);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5ac002:{NFSU2_TR(0x5ac002);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac008:{NFSU2_TR(0x5ac008);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac00b:{NFSU2_TR(0x5ac00b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5ac011:{NFSU2_TR(0x5ac011);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ac013:{NFSU2_TR(0x5ac013);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5ac015:{NFSU2_TR(0x5ac015);
{u32 ea_=u32(r4(R+4)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac01b:{NFSU2_TR(0x5ac01b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5ac021:{NFSU2_TR(0x5ac021);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac025:{NFSU2_TR(0x5ac025);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ac027:{NFSU2_TR(0x5ac027);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac02b:{NFSU2_TR(0x5ac02b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac02f:{NFSU2_TR(0x5ac02f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac033:{NFSU2_TR(0x5ac033);
if(r1(R+518)){{goto L5ac03d;}}
}
B5ac035:L5ac035:{c.instructions+=2;NFSU2_TR(0x5ac035);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1b0ull))));
}
B5ac03b:{NFSU2_TR(0x5ac03b);
{goto L5ac043;}
}
B5ac03d:L5ac03d:{c.instructions+=1;NFSU2_TR(0x5ac03d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x170ull))));
}
B5ac043:L5ac043:{c.instructions+=8;NFSU2_TR(0x5ac043);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac049:{NFSU2_TR(0x5ac049);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ac04c:{NFSU2_TR(0x5ac04c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5ac052:{NFSU2_TR(0x5ac052);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ac054:{NFSU2_TR(0x5ac054);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B5ac056:{NFSU2_TR(0x5ac056);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac05a:{NFSU2_TR(0x5ac05a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ac05c:{NFSU2_TR(0x5ac05c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ac0c4;}}
}
B5ac05e:L5ac05e:{c.instructions+=3;NFSU2_TR(0x5ac05e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac064:{NFSU2_TR(0x5ac064);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ac066:{NFSU2_TR(0x5ac066);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ac0c4;}}
}
B5ac068:L5ac068:{c.instructions+=23;NFSU2_TR(0x5ac068);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac06c:{NFSU2_TR(0x5ac06c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac06f:{NFSU2_TR(0x5ac06f);
{u32 ea_=u32(r4(R+8)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac075:{NFSU2_TR(0x5ac075);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5ac079:{NFSU2_TR(0x5ac079);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac07d:{NFSU2_TR(0x5ac07d);
{u32 ea_=u32(r4(R+8)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac083:{NFSU2_TR(0x5ac083);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ac087:{NFSU2_TR(0x5ac087);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac08a:{NFSU2_TR(0x5ac08a);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac090:{NFSU2_TR(0x5ac090);
{u32 ea_=u32(r4(R+0)+u32(264u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5ac096:{NFSU2_TR(0x5ac096);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ac099:{NFSU2_TR(0x5ac099);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac09c:{NFSU2_TR(0x5ac09c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ac09e:{NFSU2_TR(0x5ac09e);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac0a4:{NFSU2_TR(0x5ac0a4);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5ac0a6:{NFSU2_TR(0x5ac0a6);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac0ac:{NFSU2_TR(0x5ac0ac);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5ac0ae:{NFSU2_TR(0x5ac0ae);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ac0b0:{NFSU2_TR(0x5ac0b0);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5ac0b2:{NFSU2_TR(0x5ac0b2);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ac0b5:{NFSU2_TR(0x5ac0b5);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac0b8:{NFSU2_TR(0x5ac0b8);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ac0be:{NFSU2_TR(0x5ac0be);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac0c4:L5ac0c4:{c.instructions+=4;NFSU2_TR(0x5ac0c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ac0c7:{NFSU2_TR(0x5ac0c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5ac0cd:{NFSU2_TR(0x5ac0cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ac0cf:{NFSU2_TR(0x5ac0cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ac13a;}}
}
B5ac0d1:L5ac0d1:{c.instructions+=3;NFSU2_TR(0x5ac0d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac0d7:{NFSU2_TR(0x5ac0d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ac0d9:{NFSU2_TR(0x5ac0d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ac13a;}}
}
B5ac0db:L5ac0db:{c.instructions+=24;NFSU2_TR(0x5ac0db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac0de:{NFSU2_TR(0x5ac0de);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac0e2:{NFSU2_TR(0x5ac0e2);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac0e8:{NFSU2_TR(0x5ac0e8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5ac0ec:{NFSU2_TR(0x5ac0ec);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac0f0:{NFSU2_TR(0x5ac0f0);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac0f6:{NFSU2_TR(0x5ac0f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac0f9:{NFSU2_TR(0x5ac0f9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ac0fd:{NFSU2_TR(0x5ac0fd);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac100:{NFSU2_TR(0x5ac100);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac106:{NFSU2_TR(0x5ac106);
{u32 ea_=u32(r4(R+0)+u32(264u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5ac10c:{NFSU2_TR(0x5ac10c);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ac10f:{NFSU2_TR(0x5ac10f);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac112:{NFSU2_TR(0x5ac112);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ac114:{NFSU2_TR(0x5ac114);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac11a:{NFSU2_TR(0x5ac11a);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5ac11c:{NFSU2_TR(0x5ac11c);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac122:{NFSU2_TR(0x5ac122);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5ac124:{NFSU2_TR(0x5ac124);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ac126:{NFSU2_TR(0x5ac126);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5ac128:{NFSU2_TR(0x5ac128);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ac12b:{NFSU2_TR(0x5ac12b);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac12e:{NFSU2_TR(0x5ac12e);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ac134:{NFSU2_TR(0x5ac134);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac13a:L5ac13a:{c.instructions+=4;NFSU2_TR(0x5ac13a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ac13d:{NFSU2_TR(0x5ac13d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5ac143:{NFSU2_TR(0x5ac143);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ac145:{NFSU2_TR(0x5ac145);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ac1b0;}}
}
B5ac147:L5ac147:{c.instructions+=3;NFSU2_TR(0x5ac147);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac14d:{NFSU2_TR(0x5ac14d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ac14f:{NFSU2_TR(0x5ac14f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ac1b0;}}
}
B5ac151:L5ac151:{c.instructions+=24;NFSU2_TR(0x5ac151);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac154:{NFSU2_TR(0x5ac154);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac158:{NFSU2_TR(0x5ac158);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac15e:{NFSU2_TR(0x5ac15e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5ac162:{NFSU2_TR(0x5ac162);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac166:{NFSU2_TR(0x5ac166);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac16c:{NFSU2_TR(0x5ac16c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac16f:{NFSU2_TR(0x5ac16f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ac173:{NFSU2_TR(0x5ac173);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac176:{NFSU2_TR(0x5ac176);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac17c:{NFSU2_TR(0x5ac17c);
{u32 ea_=u32(r4(R+0)+u32(264u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5ac182:{NFSU2_TR(0x5ac182);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ac185:{NFSU2_TR(0x5ac185);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac188:{NFSU2_TR(0x5ac188);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ac18a:{NFSU2_TR(0x5ac18a);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac190:{NFSU2_TR(0x5ac190);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5ac192:{NFSU2_TR(0x5ac192);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac198:{NFSU2_TR(0x5ac198);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5ac19a:{NFSU2_TR(0x5ac19a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ac19c:{NFSU2_TR(0x5ac19c);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5ac19e:{NFSU2_TR(0x5ac19e);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ac1a1:{NFSU2_TR(0x5ac1a1);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac1a4:{NFSU2_TR(0x5ac1a4);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ac1aa:{NFSU2_TR(0x5ac1aa);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac1b0:L5ac1b0:{c.instructions+=4;NFSU2_TR(0x5ac1b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ac1b3:{NFSU2_TR(0x5ac1b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5ac1b9:{NFSU2_TR(0x5ac1b9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ac1bb:{NFSU2_TR(0x5ac1bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ac226;}}
}
B5ac1bd:L5ac1bd:{c.instructions+=3;NFSU2_TR(0x5ac1bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac1c3:{NFSU2_TR(0x5ac1c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ac1c5:{NFSU2_TR(0x5ac1c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ac226;}}
}
B5ac1c7:L5ac1c7:{c.instructions+=24;NFSU2_TR(0x5ac1c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac1ca:{NFSU2_TR(0x5ac1ca);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac1ce:{NFSU2_TR(0x5ac1ce);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac1d4:{NFSU2_TR(0x5ac1d4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5ac1d8:{NFSU2_TR(0x5ac1d8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac1dc:{NFSU2_TR(0x5ac1dc);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac1e2:{NFSU2_TR(0x5ac1e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac1e5:{NFSU2_TR(0x5ac1e5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ac1e9:{NFSU2_TR(0x5ac1e9);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac1ec:{NFSU2_TR(0x5ac1ec);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac1f2:{NFSU2_TR(0x5ac1f2);
{u32 ea_=u32(r4(R+0)+u32(264u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5ac1f8:{NFSU2_TR(0x5ac1f8);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ac1fb:{NFSU2_TR(0x5ac1fb);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac1fe:{NFSU2_TR(0x5ac1fe);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ac200:{NFSU2_TR(0x5ac200);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac206:{NFSU2_TR(0x5ac206);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5ac208:{NFSU2_TR(0x5ac208);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac20e:{NFSU2_TR(0x5ac20e);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5ac210:{NFSU2_TR(0x5ac210);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ac212:{NFSU2_TR(0x5ac212);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5ac214:{NFSU2_TR(0x5ac214);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ac217:{NFSU2_TR(0x5ac217);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac21a:{NFSU2_TR(0x5ac21a);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ac220:{NFSU2_TR(0x5ac220);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac226:L5ac226:{c.instructions+=2;NFSU2_TR(0x5ac226);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac229:{NFSU2_TR(0x5ac229);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac22eull));
TAIL_STATIC(0x594da0u,594);
}
B5ac22e:L5ac22e:{c.instructions+=2;NFSU2_TR(0x5ac22e);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5ac22f:{NFSU2_TR(0x5ac22f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5abe70u,5ab);}
}
B5ac235:L5ac235:{c.instructions+=3;NFSU2_TR(0x5ac235);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5ac237:{NFSU2_TR(0x5ac237);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ac23a:{NFSU2_TR(0x5ac23a);
__builtin_memmove((R+12),(R+12),4);
}
B5ac240:L5ac240:{c.instructions+=3;NFSU2_TR(0x5ac240);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ac242:{NFSU2_TR(0x5ac242);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac243:{NFSU2_TR(0x5ac243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac248ull));
TAIL_STATIC(0x59d600u,59d);
}
B5ac248:L5ac248:{c.instructions+=4;NFSU2_TR(0x5ac248);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5ac249:{NFSU2_TR(0x5ac249);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5ac24c:{NFSU2_TR(0x5ac24c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ac24f:{NFSU2_TR(0x5ac24f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ac240u);}goto L5ac240;}}
}
B5ac251:L5ac251:{c.instructions+=2;NFSU2_TR(0x5ac251);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac254:{NFSU2_TR(0x5ac254);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac259ull));
TAIL_STATIC(0x5aa830u,5aa);
}
B5ac259:L5ac259:{c.instructions+=6;NFSU2_TR(0x5ac259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ac25a:{NFSU2_TR(0x5ac25a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ac25b:{NFSU2_TR(0x5ac25b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ac25c:{NFSU2_TR(0x5ac25c);
__builtin_memmove((R+16),(R+20),4);
}
B5ac25e:{NFSU2_TR(0x5ac25e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ac25f:{NFSU2_TR(0x5ac25f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ac260:L5ac260:{c.instructions+=13;NFSU2_TR(0x5ac260);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac261:{NFSU2_TR(0x5ac261);
__builtin_memmove((R+20),(R+16),4);
}
B5ac263:{NFSU2_TR(0x5ac263);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5ac266:{NFSU2_TR(0x5ac266);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B5ac269:{NFSU2_TR(0x5ac269);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac26a:{NFSU2_TR(0x5ac26a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac26b:{NFSU2_TR(0x5ac26b);
__builtin_memmove((R+28),(R+4),4);
}
B5ac26d:{NFSU2_TR(0x5ac26d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ac270:{NFSU2_TR(0x5ac270);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ac273:{NFSU2_TR(0x5ac273);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac276:{NFSU2_TR(0x5ac276);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac277:{NFSU2_TR(0x5ac277);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac278:{NFSU2_TR(0x5ac278);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac27dull));
TAIL_STATIC(0x43c570u,43c);
}
B5ac27d:L5ac27d:{c.instructions+=12;NFSU2_TR(0x5ac27d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5ac284:{NFSU2_TR(0x5ac284);
w2(R+8,u16(u32(r2(R+8))-u32(r2(R+0))));
}
B5ac287:{NFSU2_TR(0x5ac287);
w4(R+0,u32(r2(R+8)));
}
B5ac28a:{NFSU2_TR(0x5ac28a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac28e:{NFSU2_TR(0x5ac28e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ac291:{NFSU2_TR(0x5ac291);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ac295:{NFSU2_TR(0x5ac295);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac29b:{NFSU2_TR(0x5ac29b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ac29f:{NFSU2_TR(0x5ac29f);
{u32 ea_=u32(u32(8001416u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ac2a5:{NFSU2_TR(0x5ac2a5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ac2a7:{NFSU2_TR(0x5ac2a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ac2aa:{NFSU2_TR(0x5ac2aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ac2bc;}}
}
B5ac2ac:L5ac2ac:{c.instructions+=4;NFSU2_TR(0x5ac2ac);
{u32 ea_=u32(u32(8001416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac2b2:{NFSU2_TR(0x5ac2b2);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B5ac2b4:{NFSU2_TR(0x5ac2b4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5ac2b8:{NFSU2_TR(0x5ac2b8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac2bc:L5ac2bc:{c.instructions+=9;NFSU2_TR(0x5ac2bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac2bf:{NFSU2_TR(0x5ac2bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ac2c5:{NFSU2_TR(0x5ac2c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac2c9:{NFSU2_TR(0x5ac2c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ac2cc:{NFSU2_TR(0x5ac2cc);
{u32 ea_=u32(r4(R+8)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac2d2:{NFSU2_TR(0x5ac2d2);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ac2d8:{NFSU2_TR(0x5ac2d8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ac2da:{NFSU2_TR(0x5ac2da);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ac2dd:{NFSU2_TR(0x5ac2dd);
if(r1(R+514)){{goto L5ac2e6;}}
}
B5ac2df:L5ac2df:{c.instructions+=2;NFSU2_TR(0x5ac2df);
w4(R+0,u32(0x1ull));
}
B5ac2e4:{NFSU2_TR(0x5ac2e4);
{goto L5ac2e8;}
}
B5ac2e6:L5ac2e6:{c.instructions+=1;NFSU2_TR(0x5ac2e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ac2e8:L5ac2e8:{c.instructions+=8;NFSU2_TR(0x5ac2e8);
{u32 ea_=u32(r4(R+8)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac2ee:{NFSU2_TR(0x5ac2ee);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ac2f0:{NFSU2_TR(0x5ac2f0);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ac2f6:{NFSU2_TR(0x5ac2f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ac2f8:{NFSU2_TR(0x5ac2f8);
__builtin_memmove((R+4),(R+518),1);
}
B5ac2fb:{NFSU2_TR(0x5ac2fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ac2fd:{NFSU2_TR(0x5ac2fd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ac300:{NFSU2_TR(0x5ac300);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ac307;}}
}
B5ac302:L5ac302:{c.instructions+=1;NFSU2_TR(0x5ac302);
w4(R+4,u32(0x2ull));
}
B5ac307:L5ac307:{c.instructions+=11;NFSU2_TR(0x5ac307);
__builtin_memmove((R+0),gp(0x89e7f4),4);
}
B5ac30c:{NFSU2_TR(0x5ac30c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x51ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5ac30f:{NFSU2_TR(0x5ac30f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5ac311:{NFSU2_TR(0x5ac311);
{u32 ea_=u32((r4(R+4)*4u)+u32(8372944u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac318:{NFSU2_TR(0x5ac318);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac31c:{NFSU2_TR(0x5ac31c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac320:{NFSU2_TR(0x5ac320);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac324:{NFSU2_TR(0x5ac324);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ac32a:{NFSU2_TR(0x5ac32a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ac32c:{NFSU2_TR(0x5ac32c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ac32f:{NFSU2_TR(0x5ac32f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ac3bd;}}
}
B5ac335:L5ac335:{c.instructions+=3;NFSU2_TR(0x5ac335);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ac338:{NFSU2_TR(0x5ac338);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5ac33f:{NFSU2_TR(0x5ac33f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5ac3bd;}}
}
B5ac341:L5ac341:{c.instructions+=8;NFSU2_TR(0x5ac341);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ac344:{NFSU2_TR(0x5ac344);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac348:{NFSU2_TR(0x5ac348);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac34b:{NFSU2_TR(0x5ac34b);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5ac34d:{NFSU2_TR(0x5ac34d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ac350:{NFSU2_TR(0x5ac350);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac351:{NFSU2_TR(0x5ac351);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac354:{NFSU2_TR(0x5ac354);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ac362;}}
}
B5ac356:L5ac356:{c.instructions+=4;NFSU2_TR(0x5ac356);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ac35a:{NFSU2_TR(0x5ac35a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac35b:{NFSU2_TR(0x5ac35b);
w4(R+4,u32(0x86b570ull));
}
B5ac360:{NFSU2_TR(0x5ac360);
{goto L5ac36c;}
}
B5ac362:L5ac362:{c.instructions+=3;NFSU2_TR(0x5ac362);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ac366:{NFSU2_TR(0x5ac366);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac367:{NFSU2_TR(0x5ac367);
w4(R+4,u32(0x86b3c8ull));
}
B5ac36c:L5ac36c:{c.instructions+=1;NFSU2_TR(0x5ac36c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac371ull));
TAIL_STATIC(0x40c840u,40c);
}
B5ac371:L5ac371:{c.instructions+=24;NFSU2_TR(0x5ac371);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac375:{NFSU2_TR(0x5ac375);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac379:{NFSU2_TR(0x5ac379);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ac37c:{NFSU2_TR(0x5ac37c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
}
B5ac381:{NFSU2_TR(0x5ac381);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac385:{NFSU2_TR(0x5ac385);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ac387:{NFSU2_TR(0x5ac387);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac389:{NFSU2_TR(0x5ac389);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac38c:{NFSU2_TR(0x5ac38c);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5ac38e:{NFSU2_TR(0x5ac38e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac392:{NFSU2_TR(0x5ac392);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac395:{NFSU2_TR(0x5ac395);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ac398:{NFSU2_TR(0x5ac398);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5ac39a:{NFSU2_TR(0x5ac39a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x120ull))));
}
B5ac39f:{NFSU2_TR(0x5ac39f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac3a3:{NFSU2_TR(0x5ac3a3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ac3a5:{NFSU2_TR(0x5ac3a5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac3a7:{NFSU2_TR(0x5ac3a7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ac3a9:{NFSU2_TR(0x5ac3a9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac3ad:{NFSU2_TR(0x5ac3ad);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ac3b0:{NFSU2_TR(0x5ac3b0);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac3b3:{NFSU2_TR(0x5ac3b3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac3b7:{NFSU2_TR(0x5ac3b7);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ac3ba:{NFSU2_TR(0x5ac3ba);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac3bd:L5ac3bd:{c.instructions+=6;NFSU2_TR(0x5ac3bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ac3c0:{NFSU2_TR(0x5ac3c0);
{u32 ea_=u32(r4(R+8)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac3c6:{NFSU2_TR(0x5ac3c6);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ac3cc:{NFSU2_TR(0x5ac3cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ac3ce:{NFSU2_TR(0x5ac3ce);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ac3d1:{NFSU2_TR(0x5ac3d1);
if(r1(R+514)){{goto L5ac3da;}}
}
B5ac3d3:L5ac3d3:{c.instructions+=2;NFSU2_TR(0x5ac3d3);
w4(R+0,u32(0x1ull));
}
B5ac3d8:{NFSU2_TR(0x5ac3d8);
{goto L5ac3dc;}
}
B5ac3da:L5ac3da:{c.instructions+=1;NFSU2_TR(0x5ac3da);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ac3dc:L5ac3dc:{c.instructions+=8;NFSU2_TR(0x5ac3dc);
{u32 ea_=u32(r4(R+8)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac3e2:{NFSU2_TR(0x5ac3e2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ac3e4:{NFSU2_TR(0x5ac3e4);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ac3ea:{NFSU2_TR(0x5ac3ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ac3ec:{NFSU2_TR(0x5ac3ec);
__builtin_memmove((R+4),(R+518),1);
}
B5ac3ef:{NFSU2_TR(0x5ac3ef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ac3f1:{NFSU2_TR(0x5ac3f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ac3f4:{NFSU2_TR(0x5ac3f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ac3fb;}}
}
B5ac3f6:L5ac3f6:{c.instructions+=1;NFSU2_TR(0x5ac3f6);
w4(R+4,u32(0x2ull));
}
B5ac3fb:L5ac3fb:{c.instructions+=20;NFSU2_TR(0x5ac3fb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac3ff:{NFSU2_TR(0x5ac3ff);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x144ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5ac405:{NFSU2_TR(0x5ac405);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5ac407:{NFSU2_TR(0x5ac407);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac40d:{NFSU2_TR(0x5ac40d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7fc2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ac413:{NFSU2_TR(0x5ac413);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac417:{NFSU2_TR(0x5ac417);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ac41b:{NFSU2_TR(0x5ac41b);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5ac41d:{NFSU2_TR(0x5ac41d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac421:{NFSU2_TR(0x5ac421);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5ac423:{NFSU2_TR(0x5ac423);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ac425:{NFSU2_TR(0x5ac425);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ac427:{NFSU2_TR(0x5ac427);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac42b:{NFSU2_TR(0x5ac42b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ac42d:{NFSU2_TR(0x5ac42d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac431:{NFSU2_TR(0x5ac431);
{u32 ea_=u32(r4(R+8)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac437:{NFSU2_TR(0x5ac437);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ac43d:{NFSU2_TR(0x5ac43d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ac43f:{NFSU2_TR(0x5ac43f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ac442:{NFSU2_TR(0x5ac442);
if(r1(R+514)){{goto L5ac44b;}}
}
B5ac444:L5ac444:{c.instructions+=2;NFSU2_TR(0x5ac444);
w4(R+0,u32(0x1ull));
}
B5ac449:{NFSU2_TR(0x5ac449);
{goto L5ac44d;}
}
B5ac44b:L5ac44b:{c.instructions+=1;NFSU2_TR(0x5ac44b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ac44d:L5ac44d:{c.instructions+=9;NFSU2_TR(0x5ac44d);
{u32 ea_=u32(r4(R+8)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac453:{NFSU2_TR(0x5ac453);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ac455:{NFSU2_TR(0x5ac455);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ac45b:{NFSU2_TR(0x5ac45b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ac45d:{NFSU2_TR(0x5ac45d);
__builtin_memmove((R+4),(R+518),1);
}
B5ac460:{NFSU2_TR(0x5ac460);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ac462:{NFSU2_TR(0x5ac462);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ac465:{NFSU2_TR(0x5ac465);
__builtin_memmove((R+24),(R+4),4);
}
B5ac467:{NFSU2_TR(0x5ac467);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ac46e;}}
}
B5ac469:L5ac469:{c.instructions+=1;NFSU2_TR(0x5ac469);
w4(R+24,u32(0x2ull));
}
B5ac46e:L5ac46e:{c.instructions+=4;NFSU2_TR(0x5ac46e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ac472:{NFSU2_TR(0x5ac472);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac473:{NFSU2_TR(0x5ac473);
w4(R+4,u32(0x7fc910ull));
}
B5ac478:{NFSU2_TR(0x5ac478);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac47dull));
TAIL_STATIC(0x5764d0u,576);
}
B5ac47d:L5ac47d:{c.instructions+=11;NFSU2_TR(0x5ac47d);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(s64(s32(u32(0x144ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+24)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B5ac483:{NFSU2_TR(0x5ac483);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ac486:{NFSU2_TR(0x5ac486);
{u32 ea_=u32(r4(R+24)+u32(8372960u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac48c:{NFSU2_TR(0x5ac48c);
{u32 ea_=u32(r4(R+0)+u32(392u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ac492:{NFSU2_TR(0x5ac492);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac495:{NFSU2_TR(0x5ac495);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ac496:{NFSU2_TR(0x5ac496);
{u32 ea_=u32(r4(R+4)+u32(392u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac49c:{NFSU2_TR(0x5ac49c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ac49d:{NFSU2_TR(0x5ac49d);
__builtin_memmove((R+16),(R+20),4);
}
B5ac49f:{NFSU2_TR(0x5ac49f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ac4a0:{NFSU2_TR(0x5ac4a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ac4b0:L5ac4b0:{c.instructions+=6;NFSU2_TR(0x5ac4b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac4b1:{NFSU2_TR(0x5ac4b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac4b2:{NFSU2_TR(0x5ac4b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac4b3:{NFSU2_TR(0x5ac4b3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac4b5:{NFSU2_TR(0x5ac4b5);
__builtin_memmove((R+28),(R+4),4);
}
B5ac4b7:{NFSU2_TR(0x5ac4b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac4bcull));
TAIL_STATIC(0x5a6450u,5a6);
}
B5ac4bc:L5ac4bc:{c.instructions+=3;NFSU2_TR(0x5ac4bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ac4c0:{NFSU2_TR(0x5ac4c0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ac4c2:{NFSU2_TR(0x5ac4c2);
w1(R+8,u8(0x1ull));
}
B5ac4c4:L5ac4c4:{c.instructions+=10;NFSU2_TR(0x5ac4c4);
__builtin_memmove((R+12),(R+0),1);
}
B5ac4c6:{NFSU2_TR(0x5ac4c6);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x7ull))));
}
B5ac4c9:{NFSU2_TR(0x5ac4c9);
w1(R+4,u8(0x7ull));
}
B5ac4cb:{NFSU2_TR(0x5ac4cb);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+12))));
}
B5ac4cd:{NFSU2_TR(0x5ac4cd);
__builtin_memmove((R+12),(R+0),4);
}
B5ac4cf:{NFSU2_TR(0x5ac4cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B5ac4d2:{NFSU2_TR(0x5ac4d2);
u8 U[13];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B5ac4d6:{NFSU2_TR(0x5ac4d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+12,shr<u8>(r1(R+12),u64(r1(U+0))));
}
B5ac4d8:{NFSU2_TR(0x5ac4d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ac4da:{NFSU2_TR(0x5ac4da);
if(r1(R+518)){{goto L5ac4e0;}}
}
B5ac4dc:L5ac4dc:{c.instructions+=1;NFSU2_TR(0x5ac4dc);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5ac4e0:L5ac4e0:{c.instructions+=3;NFSU2_TR(0x5ac4e0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5ac4e1:{NFSU2_TR(0x5ac4e1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x44ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x44ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ac4e4:{NFSU2_TR(0x5ac4e4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ac4c4u);}goto L5ac4c4;}}
}
B5ac4e6:L5ac4e6:{c.instructions+=4;NFSU2_TR(0x5ac4e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ac4e7:{NFSU2_TR(0x5ac4e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ac4e8:{NFSU2_TR(0x5ac4e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ac4e9:{NFSU2_TR(0x5ac4e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ac4f0:L5ac4f0:{c.instructions+=12;NFSU2_TR(0x5ac4f0);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ac4f4:{NFSU2_TR(0x5ac4f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5ac4f7:{NFSU2_TR(0x5ac4f7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ac4f9:{NFSU2_TR(0x5ac4f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac4fa:{NFSU2_TR(0x5ac4fa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac4fb:{NFSU2_TR(0x5ac4fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5ac4ff:{NFSU2_TR(0x5ac4ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac500:{NFSU2_TR(0x5ac500);
__builtin_memmove((R+12),(R+4),4);
}
B5ac502:{NFSU2_TR(0x5ac502);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac503:{NFSU2_TR(0x5ac503);
w4(R+4,u32(0xacull));
}
B5ac508:{NFSU2_TR(0x5ac508);
__builtin_memmove((R+24),(R+12),4);
}
B5ac50a:{NFSU2_TR(0x5ac50a);
__builtin_memmove((R+28),(R+20),4);
}
B5ac50c:L5ac50c:{c.instructions+=1;NFSU2_TR(0x5ac50c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5ac50e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ac50cu);}goto L5ac50c;}
}
B5ac50e:L5ac50e:{c.instructions+=2;NFSU2_TR(0x5ac50e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ac512:{NFSU2_TR(0x5ac512);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ac533;}}
}
B5ac514:L5ac514:{c.instructions+=1;NFSU2_TR(0x5ac514);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5ac516:L5ac516:{c.instructions+=4;NFSU2_TR(0x5ac516);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac519:{NFSU2_TR(0x5ac519);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac51a:{NFSU2_TR(0x5ac51a);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ac520:{NFSU2_TR(0x5ac520);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac525ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5ac525:L5ac525:{c.instructions+=3;NFSU2_TR(0x5ac525);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac526:{NFSU2_TR(0x5ac526);
__builtin_memmove((R+4),(R+24),4);
}
B5ac528:{NFSU2_TR(0x5ac528);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac52dull));
TAIL_STATIC(0x5a64a0u,5a6);
}
B5ac52d:L5ac52d:{c.instructions+=3;NFSU2_TR(0x5ac52d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5ac52e:{NFSU2_TR(0x5ac52e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ac531:{NFSU2_TR(0x5ac531);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ac516u);}goto L5ac516;}}
}
B5ac533:L5ac533:{c.instructions+=4;NFSU2_TR(0x5ac533);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ac535:{NFSU2_TR(0x5ac535);
w4(R+4,u32(0xaull));
}
B5ac53a:{NFSU2_TR(0x5ac53a);
__builtin_memmove((R+28),(R+24),4);
}
B5ac53c:{NFSU2_TR(0x5ac53c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac53d:L5ac53d:{c.instructions+=1;NFSU2_TR(0x5ac53d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5ac53f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ac53du);}goto L5ac53d;}
}
B5ac53f:L5ac53f:{c.instructions+=3;NFSU2_TR(0x5ac53f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac540:{NFSU2_TR(0x5ac540);
__builtin_memmove((R+4),(R+12),4);
}
B5ac542:{NFSU2_TR(0x5ac542);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac547ull));
TAIL_STATIC(0x5a6b50u,5a6);
}
B5ac547:L5ac547:{c.instructions+=4;NFSU2_TR(0x5ac547);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac548:{NFSU2_TR(0x5ac548);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac549:{NFSU2_TR(0x5ac549);
__builtin_memmove((R+4),(R+12),4);
}
B5ac54b:{NFSU2_TR(0x5ac54b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac550ull));
TAIL_STATIC(0x5a6bd0u,5a6);
}
B5ac550:L5ac550:{c.instructions+=6;NFSU2_TR(0x5ac550);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ac554:{NFSU2_TR(0x5ac554);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac555:{NFSU2_TR(0x5ac555);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac557:{NFSU2_TR(0x5ac557);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac559:{NFSU2_TR(0x5ac559);
__builtin_memmove((R+4),(R+24),4);
}
B5ac55b:{NFSU2_TR(0x5ac55b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac560ull));
TAIL_STATIC(0x5a6580u,5a6);
}
B5ac560:L5ac560:{c.instructions+=4;NFSU2_TR(0x5ac560);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ac566:{NFSU2_TR(0x5ac566);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ac568:{NFSU2_TR(0x5ac568);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ac56b:{NFSU2_TR(0x5ac56b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5ac5a1;}}
}
B5ac56d:L5ac56d:{c.instructions+=13;NFSU2_TR(0x5ac56d);
{u32 ea_=u32(r4(R+20)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac573:{NFSU2_TR(0x5ac573);
{u32 ea_=u32(r4(R+12)+u32(1408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac579:{NFSU2_TR(0x5ac579);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5ac57b:{NFSU2_TR(0x5ac57b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac57f:{NFSU2_TR(0x5ac57f);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5ac581:{NFSU2_TR(0x5ac581);
{u32 ea_=u32(r4(R+20)+u32(672u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac587:{NFSU2_TR(0x5ac587);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ac589:{NFSU2_TR(0x5ac589);
{u32 ea_=u32(r4(R+20)+u32(684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac58f:{NFSU2_TR(0x5ac58f);
{u32 ea_=u32(r4(R+12)+u32(1420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac595:{NFSU2_TR(0x5ac595);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5ac597:{NFSU2_TR(0x5ac597);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5ac599:{NFSU2_TR(0x5ac599);
{u32 ea_=u32(r4(R+20)+u32(684u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac59f:{NFSU2_TR(0x5ac59f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ac5a1:L5ac5a1:{c.instructions+=4;NFSU2_TR(0x5ac5a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac5a2:{NFSU2_TR(0x5ac5a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac5a3:{NFSU2_TR(0x5ac5a3);
__builtin_memmove((R+4),(R+12),4);
}
B5ac5a5:{NFSU2_TR(0x5ac5a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac5aaull));
TAIL_STATIC(0x5a6d00u,5a6);
}
B5ac5aa:L5ac5aa:{c.instructions+=4;NFSU2_TR(0x5ac5aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac5ab:{NFSU2_TR(0x5ac5ab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac5ac:{NFSU2_TR(0x5ac5ac);
__builtin_memmove((R+4),(R+12),4);
}
B5ac5ae:{NFSU2_TR(0x5ac5ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac5b3ull));
TAIL_STATIC(0x5a6e30u,5a6);
}
B5ac5b3:L5ac5b3:{c.instructions+=4;NFSU2_TR(0x5ac5b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac5b4:{NFSU2_TR(0x5ac5b4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac5b5:{NFSU2_TR(0x5ac5b5);
__builtin_memmove((R+4),(R+12),4);
}
B5ac5b7:{NFSU2_TR(0x5ac5b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac5bcull));
TAIL_STATIC(0x5a6fa0u,5a6);
}
B5ac5bc:L5ac5bc:{c.instructions+=4;NFSU2_TR(0x5ac5bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac5bd:{NFSU2_TR(0x5ac5bd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac5be:{NFSU2_TR(0x5ac5be);
__builtin_memmove((R+4),(R+12),4);
}
B5ac5c0:{NFSU2_TR(0x5ac5c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac5c5ull));
TAIL_STATIC(0x5a7140u,5a7);
}
B5ac5c5:L5ac5c5:{c.instructions+=4;NFSU2_TR(0x5ac5c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac5c6:{NFSU2_TR(0x5ac5c6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac5c7:{NFSU2_TR(0x5ac5c7);
__builtin_memmove((R+4),(R+12),4);
}
B5ac5c9:{NFSU2_TR(0x5ac5c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac5ceull));
TAIL_STATIC(0x5a71c0u,5a7);
}
B5ac5ce:L5ac5ce:{c.instructions+=4;NFSU2_TR(0x5ac5ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac5cf:{NFSU2_TR(0x5ac5cf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac5d0:{NFSU2_TR(0x5ac5d0);
__builtin_memmove((R+4),(R+12),4);
}
B5ac5d2:{NFSU2_TR(0x5ac5d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac5d7ull));
TAIL_STATIC(0x5a7360u,5a7);
}
B5ac5d7:L5ac5d7:{c.instructions+=3;NFSU2_TR(0x5ac5d7);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ac5db:{NFSU2_TR(0x5ac5db);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ac5dd:{NFSU2_TR(0x5ac5dd);
if(r1(R+518)){{goto L5ac659;}}
}
B5ac5df:L5ac5df:{c.instructions+=3;NFSU2_TR(0x5ac5df);
__builtin_memmove((R+0),gp(0x7fc290),1);
}
B5ac5e4:{NFSU2_TR(0x5ac5e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ac5e6:{NFSU2_TR(0x5ac5e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ac659;}}
}
B5ac5e8:L5ac5e8:{c.instructions+=12;NFSU2_TR(0x5ac5e8);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac5eb:{NFSU2_TR(0x5ac5eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ac5f3:{NFSU2_TR(0x5ac5f3);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ac5f6:{NFSU2_TR(0x5ac5f6);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ac5f8:{NFSU2_TR(0x5ac5f8);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac5fe:{NFSU2_TR(0x5ac5fe);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac604:{NFSU2_TR(0x5ac604);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac608:{NFSU2_TR(0x5ac608);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac60c:{NFSU2_TR(0x5ac60c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ac612:{NFSU2_TR(0x5ac612);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ac614:{NFSU2_TR(0x5ac614);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ac617:{NFSU2_TR(0x5ac617);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ac63a;}}
}
B5ac619:L5ac619:{c.instructions+=6;NFSU2_TR(0x5ac619);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac61d:{NFSU2_TR(0x5ac61d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac623:{NFSU2_TR(0x5ac623);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ac627:{NFSU2_TR(0x5ac627);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ac629:{NFSU2_TR(0x5ac629);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ac62c:{NFSU2_TR(0x5ac62c);
if(r1(R+514)){{goto L5ac640;}}
}
B5ac62e:L5ac62e:{c.instructions+=3;NFSU2_TR(0x5ac62e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ac630:{NFSU2_TR(0x5ac630);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ac638:{NFSU2_TR(0x5ac638);
{goto L5ac644;}
}
B5ac63a:L5ac63a:{c.instructions+=1;NFSU2_TR(0x5ac63a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac640:L5ac640:{c.instructions+=1;NFSU2_TR(0x5ac640);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac644:L5ac644:{c.instructions+=7;NFSU2_TR(0x5ac644);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ac648:{NFSU2_TR(0x5ac648);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac64a:{NFSU2_TR(0x5ac64a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ac64e:{NFSU2_TR(0x5ac64e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac64f:{NFSU2_TR(0x5ac64f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac650:{NFSU2_TR(0x5ac650);
__builtin_memmove((R+4),(R+24),4);
}
B5ac652:{NFSU2_TR(0x5ac652);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac657ull));
TAIL_STATIC(0x5a6880u,5a6);
}
B5ac657:L5ac657:{c.instructions+=1;NFSU2_TR(0x5ac657);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ac659:L5ac659:{c.instructions+=4;NFSU2_TR(0x5ac659);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac65a:{NFSU2_TR(0x5ac65a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac65b:{NFSU2_TR(0x5ac65b);
__builtin_memmove((R+4),(R+12),4);
}
B5ac65d:{NFSU2_TR(0x5ac65d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac662ull));
TAIL_STATIC(0x5a74a0u,5a7);
}
B5ac662:L5ac662:{c.instructions+=3;NFSU2_TR(0x5ac662);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x120ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ac668:{NFSU2_TR(0x5ac668);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac669:{NFSU2_TR(0x5ac669);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac66eull));
TAIL_STATIC(0x43c780u,43c);
}
B5ac66e:L5ac66e:{c.instructions+=31;NFSU2_TR(0x5ac66e);
{u32 ea_=u32(r4(R+20)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac674:{NFSU2_TR(0x5ac674);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ac676:{NFSU2_TR(0x5ac676);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ac679:{NFSU2_TR(0x5ac679);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5ac67b:{NFSU2_TR(0x5ac67b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ac67c:{NFSU2_TR(0x5ac67c);
{u32 ea_=u32(r4(R+20)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac682:{NFSU2_TR(0x5ac682);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ac684:{NFSU2_TR(0x5ac684);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5ac686:{NFSU2_TR(0x5ac686);
{u32 ea_=u32(r4(R+20)+u32(284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac68c:{NFSU2_TR(0x5ac68c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ac68e:{NFSU2_TR(0x5ac68e);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5ac690:{NFSU2_TR(0x5ac690);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ac692:{NFSU2_TR(0x5ac692);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5ac694:{NFSU2_TR(0x5ac694);
{u32 ea_=u32(r4(R+20)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac69a:{NFSU2_TR(0x5ac69a);
{u32 ea_=u32(u32(7894448u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac6a0:{NFSU2_TR(0x5ac6a0);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac6a2:{NFSU2_TR(0x5ac6a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ac6a3:{NFSU2_TR(0x5ac6a3);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5ac6a5:{NFSU2_TR(0x5ac6a5);
{u32 ea_=u32(r4(R+20)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac6ab:{NFSU2_TR(0x5ac6ab);
{u32 ea_=u32(u32(7894448u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac6b1:{NFSU2_TR(0x5ac6b1);
{u32 ea_=u32(r4(R+20)+u32(308u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac6b7:{NFSU2_TR(0x5ac6b7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ac6b9:{NFSU2_TR(0x5ac6b9);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5ac6bb:{NFSU2_TR(0x5ac6bb);
{u32 ea_=u32(r4(R+20)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac6c1:{NFSU2_TR(0x5ac6c1);
{u32 ea_=u32(u32(7894448u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac6c7:{NFSU2_TR(0x5ac6c7);
{u32 ea_=u32(r4(R+20)+u32(328u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac6cd:{NFSU2_TR(0x5ac6cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ac6ce:{NFSU2_TR(0x5ac6ce);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ac6d0:{NFSU2_TR(0x5ac6d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ac6d1:{NFSU2_TR(0x5ac6d1);
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
B5ac6d4:{NFSU2_TR(0x5ac6d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ac6e0:L5ac6e0:{c.instructions+=14;NFSU2_TR(0x5ac6e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac6e1:{NFSU2_TR(0x5ac6e1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac6e2:{NFSU2_TR(0x5ac6e2);
w4(R+0,u32(0x3f800000ull));
}
B5ac6e7:{NFSU2_TR(0x5ac6e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac6e8:{NFSU2_TR(0x5ac6e8);
__builtin_memmove((R+24),(R+4),4);
}
B5ac6ea:{NFSU2_TR(0x5ac6ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac6f0:{NFSU2_TR(0x5ac6f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac6f6:{NFSU2_TR(0x5ac6f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac6fc:{NFSU2_TR(0x5ac6fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac702:{NFSU2_TR(0x5ac702);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ac704:{NFSU2_TR(0x5ac704);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac705:{NFSU2_TR(0x5ac705);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
w4(U+4,u32(0x3dcccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ac70f:{NFSU2_TR(0x5ac70f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ac715:{NFSU2_TR(0x5ac715);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ac717:L5ac717:{c.instructions+=5;NFSU2_TR(0x5ac717);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5ac71a:{NFSU2_TR(0x5ac71a);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5ac71e:{NFSU2_TR(0x5ac71e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5ac71f:{NFSU2_TR(0x5ac71f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ac722:{NFSU2_TR(0x5ac722);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ac717u);}goto L5ac717;}}
}
B5ac724:L5ac724:{c.instructions+=3;NFSU2_TR(0x5ac724);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ac726:{NFSU2_TR(0x5ac726);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ac729:{NFSU2_TR(0x5ac729);
w4(R+4,u32(0x11ull));
}
B5ac72e:L5ac72e:{c.instructions+=1;NFSU2_TR(0x5ac72e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5ac730;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ac72eu);}goto L5ac72e;}
}
B5ac730:L5ac730:{c.instructions+=3;NFSU2_TR(0x5ac730);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x374ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ac736:{NFSU2_TR(0x5ac736);
__builtin_memmove((R+4),(R+20),4);
}
B5ac738:{NFSU2_TR(0x5ac738);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac73dull));
TAIL_STATIC(0x5a7970u,5a7);
}
B5ac73d:L5ac73d:{c.instructions+=9;NFSU2_TR(0x5ac73d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ac743:{NFSU2_TR(0x5ac743);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x100ull))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ac74d:{NFSU2_TR(0x5ac74d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x104ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ac757:{NFSU2_TR(0x5ac757);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x108ull))));
w4(U+4,u32(0x425e38e4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ac761:{NFSU2_TR(0x5ac761);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10cull))));
w4(U+4,u32(0x3f9126e9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ac76b:{NFSU2_TR(0x5ac76b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac771:{NFSU2_TR(0x5ac771);
w4(R+0,u32(0x40800000ull));
}
B5ac776:{NFSU2_TR(0x5ac776);
__builtin_memmove((R+28),(R+8),4);
}
B5ac778:{NFSU2_TR(0x5ac778);
w4(R+4,u32(0x3full));
}
B5ac77d:L5ac77d:{c.instructions+=1;NFSU2_TR(0x5ac77d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5ac77f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ac77du);}goto L5ac77d;}
}
B5ac77f:L5ac77f:{c.instructions+=13;NFSU2_TR(0x5ac77f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ac781:{NFSU2_TR(0x5ac781);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac787:{NFSU2_TR(0x5ac787);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac789:{NFSU2_TR(0x5ac789);
__builtin_memmove((R+4),(R+12),4);
}
B5ac78b:{NFSU2_TR(0x5ac78b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+24)),r4(U+0));
}
B5ac791:{NFSU2_TR(0x5ac791);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ac795:{NFSU2_TR(0x5ac795);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac798:{NFSU2_TR(0x5ac798);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac79b:{NFSU2_TR(0x5ac79b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac79e:{NFSU2_TR(0x5ac79e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac7a1:{NFSU2_TR(0x5ac7a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac7a4:{NFSU2_TR(0x5ac7a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac7a7:{NFSU2_TR(0x5ac7a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac7acull));
TAIL_STATIC(0x5a6450u,5a6);
}
B5ac7ac:L5ac7ac:{c.instructions+=10;NFSU2_TR(0x5ac7ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ac7af:{NFSU2_TR(0x5ac7af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ac7b0:{NFSU2_TR(0x5ac7b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac7b3:{NFSU2_TR(0x5ac7b3);
__builtin_memmove((R+0),(R+24),4);
}
B5ac7b5:{NFSU2_TR(0x5ac7b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ac7b6:{NFSU2_TR(0x5ac7b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac7b9:{NFSU2_TR(0x5ac7b9);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+20)),r4(U+0));
}
B5ac7c0:{NFSU2_TR(0x5ac7c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ac7c1:{NFSU2_TR(0x5ac7c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ac7c2:{NFSU2_TR(0x5ac7c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ac7d0:L5ac7d0:{c.instructions+=29;NFSU2_TR(0x5ac7d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B5ac7d3:{NFSU2_TR(0x5ac7d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac7d4:{NFSU2_TR(0x5ac7d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac7d5:{NFSU2_TR(0x5ac7d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac7d6:{NFSU2_TR(0x5ac7d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac7d7:{NFSU2_TR(0x5ac7d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ac7db:{NFSU2_TR(0x5ac7db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac7de:{NFSU2_TR(0x5ac7de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ac7e0:{NFSU2_TR(0x5ac7e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac7e4:{NFSU2_TR(0x5ac7e4);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac7e8:{NFSU2_TR(0x5ac7e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac7ec:{NFSU2_TR(0x5ac7ec);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ac7f0:{NFSU2_TR(0x5ac7f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ac7f4:{NFSU2_TR(0x5ac7f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5ac7f8:{NFSU2_TR(0x5ac7f8);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5ac7fe:{NFSU2_TR(0x5ac7fe);
w4(R+24,u32(0x2ull));
}
B5ac803:{NFSU2_TR(0x5ac803);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ac806:{NFSU2_TR(0x5ac806);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ac80e:{NFSU2_TR(0x5ac80e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac812:{NFSU2_TR(0x5ac812);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac816:{NFSU2_TR(0x5ac816);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac819:{NFSU2_TR(0x5ac819);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ac81b:{NFSU2_TR(0x5ac81b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac81d:{NFSU2_TR(0x5ac81d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ac81f:{NFSU2_TR(0x5ac81f);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac822:{NFSU2_TR(0x5ac822);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5ac825:{NFSU2_TR(0x5ac825);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5ac826:{NFSU2_TR(0x5ac826);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ac828:{NFSU2_TR(0x5ac828);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ac96b;}}
}
B5ac82e:L5ac82e:{c.instructions+=5;NFSU2_TR(0x5ac82e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac832:{NFSU2_TR(0x5ac832);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B5ac835:{NFSU2_TR(0x5ac835);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
}
B5ac838:{NFSU2_TR(0x5ac838);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac83c:{NFSU2_TR(0x5ac83c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac840:L5ac840:{c.instructions+=8;NFSU2_TR(0x5ac840);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ac843:{NFSU2_TR(0x5ac843);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac846:{NFSU2_TR(0x5ac846);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ac848:{NFSU2_TR(0x5ac848);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac84c:{NFSU2_TR(0x5ac84c);
__builtin_memmove((R+0),gp(0x86b33c),4);
}
B5ac851:{NFSU2_TR(0x5ac851);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ac853:{NFSU2_TR(0x5ac853);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac857:{NFSU2_TR(0x5ac857);
if(r1(R+518)){{goto L5ac90d;}}
}
B5ac85d:L5ac85d:{c.instructions+=9;NFSU2_TR(0x5ac85d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ac85f:{NFSU2_TR(0x5ac85f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac862:{NFSU2_TR(0x5ac862);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac866:{NFSU2_TR(0x5ac866);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac86c:{NFSU2_TR(0x5ac86c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ac870:{NFSU2_TR(0x5ac870);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ac874:{NFSU2_TR(0x5ac874);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ac876:{NFSU2_TR(0x5ac876);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ac879:{NFSU2_TR(0x5ac879);
if(r1(R+514)){{goto L5ac90a;}}
}
B5ac87f:L5ac87f:{c.instructions+=4;NFSU2_TR(0x5ac87f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac883:{NFSU2_TR(0x5ac883);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5ac885:{NFSU2_TR(0x5ac885);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac889:{NFSU2_TR(0x5ac889);
__builtin_memmove((R+16),(R+16),4);
}
B5ac890:L5ac890:{c.instructions+=4;NFSU2_TR(0x5ac890);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ac894:{NFSU2_TR(0x5ac894);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac895:{NFSU2_TR(0x5ac895);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ac899:{NFSU2_TR(0x5ac899);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac89eull));
TAIL_STATIC(0x5764d0u,576);
}
B5ac89e:L5ac89e:{c.instructions+=6;NFSU2_TR(0x5ac89e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac8a2:{NFSU2_TR(0x5ac8a2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac8a6:{NFSU2_TR(0x5ac8a6);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ac8ac:{NFSU2_TR(0x5ac8ac);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ac8ae:{NFSU2_TR(0x5ac8ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ac8b1:{NFSU2_TR(0x5ac8b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ac8e0;}}
}
B5ac8b3:L5ac8b3:{c.instructions+=9;NFSU2_TR(0x5ac8b3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac8b9:{NFSU2_TR(0x5ac8b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac8ba:{NFSU2_TR(0x5ac8ba);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ac8be:{NFSU2_TR(0x5ac8be);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ac8c2:{NFSU2_TR(0x5ac8c2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ac8c6:{NFSU2_TR(0x5ac8c6);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac8ca:{NFSU2_TR(0x5ac8ca);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac8ce:{NFSU2_TR(0x5ac8ce);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac8d1:{NFSU2_TR(0x5ac8d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac8d6ull));
TAIL_STATIC(0x5764d0u,576);
}
B5ac8d6:L5ac8d6:{c.instructions+=3;NFSU2_TR(0x5ac8d6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac8da:{NFSU2_TR(0x5ac8da);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac8de:{NFSU2_TR(0x5ac8de);
{goto L5ac8e6;}
}
B5ac8e0:L5ac8e0:{c.instructions+=1;NFSU2_TR(0x5ac8e0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac8e6:L5ac8e6:{c.instructions+=4;NFSU2_TR(0x5ac8e6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ac8ea:{NFSU2_TR(0x5ac8ea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ac8ec:{NFSU2_TR(0x5ac8ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ac8ef:{NFSU2_TR(0x5ac8ef);
if(r1(R+518)){{goto L5ac93c;}}
}
B5ac8f1:L5ac8f1:{c.instructions+=7;NFSU2_TR(0x5ac8f1);
{u32 ea_=u32(u32(8002248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac8f7:{NFSU2_TR(0x5ac8f7);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ac8fb:{NFSU2_TR(0x5ac8fb);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ac8ff:{NFSU2_TR(0x5ac8ff);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ac903:{NFSU2_TR(0x5ac903);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ac905:{NFSU2_TR(0x5ac905);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ac908:{NFSU2_TR(0x5ac908);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ac890u);}goto L5ac890;}}
}
B5ac90a:L5ac90a:{c.instructions+=1;NFSU2_TR(0x5ac90a);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac90d:L5ac90d:{c.instructions+=1;NFSU2_TR(0x5ac90d);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ac913:L5ac913:{c.instructions+=7;NFSU2_TR(0x5ac913);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac916:{NFSU2_TR(0x5ac916);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac91a:{NFSU2_TR(0x5ac91a);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5ac91c:{NFSU2_TR(0x5ac91c);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ac922:{NFSU2_TR(0x5ac922);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ac924:{NFSU2_TR(0x5ac924);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ac927:{NFSU2_TR(0x5ac927);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ac942;}}
}
B5ac929:L5ac929:{c.instructions+=6;NFSU2_TR(0x5ac929);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac92d:{NFSU2_TR(0x5ac92d);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ac931:{NFSU2_TR(0x5ac931);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ac935:{NFSU2_TR(0x5ac935);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac938:{NFSU2_TR(0x5ac938);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac93a:{NFSU2_TR(0x5ac93a);
{goto L5ac94c;}
}
B5ac93c:L5ac93c:{c.instructions+=2;NFSU2_TR(0x5ac93c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac940:{NFSU2_TR(0x5ac940);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ac913u);}goto L5ac913;}
}
B5ac942:L5ac942:{c.instructions+=2;NFSU2_TR(0x5ac942);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac946:{NFSU2_TR(0x5ac946);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5ac94c:L5ac94c:{c.instructions+=9;NFSU2_TR(0x5ac94c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ac950:{NFSU2_TR(0x5ac950);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ac954:{NFSU2_TR(0x5ac954);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5ac955:{NFSU2_TR(0x5ac955);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5ac958:{NFSU2_TR(0x5ac958);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5ac95b:{NFSU2_TR(0x5ac95b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ac95d:{NFSU2_TR(0x5ac95d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac961:{NFSU2_TR(0x5ac961);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac965:{NFSU2_TR(0x5ac965);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ac840u);}goto L5ac840;}}
}
B5ac96b:L5ac96b:{c.instructions+=9;NFSU2_TR(0x5ac96b);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac96e:{NFSU2_TR(0x5ac96e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ac96f:{NFSU2_TR(0x5ac96f);
{u32 ea_=u32(u32(7953128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ac975:{NFSU2_TR(0x5ac975);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac978:{NFSU2_TR(0x5ac978);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ac979:{NFSU2_TR(0x5ac979);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ac97a:{NFSU2_TR(0x5ac97a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ac97b:{NFSU2_TR(0x5ac97b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ac97e:{NFSU2_TR(0x5ac97e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ac980:L5ac980:{c.instructions+=24;NFSU2_TR(0x5ac980);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B5ac983:{NFSU2_TR(0x5ac983);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ac987:{NFSU2_TR(0x5ac987);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac98b:{NFSU2_TR(0x5ac98b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5ac98c:{NFSU2_TR(0x5ac98c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac990:{NFSU2_TR(0x5ac990);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ac994:{NFSU2_TR(0x5ac994);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ac998:{NFSU2_TR(0x5ac998);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac99c:{NFSU2_TR(0x5ac99c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ac9a0:{NFSU2_TR(0x5ac9a0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ac9a4:{NFSU2_TR(0x5ac9a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ac9a8:{NFSU2_TR(0x5ac9a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac9ac:{NFSU2_TR(0x5ac9ac);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5ac9ae:{NFSU2_TR(0x5ac9ae);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac9b2:{NFSU2_TR(0x5ac9b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac9b6:{NFSU2_TR(0x5ac9b6);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac9be:{NFSU2_TR(0x5ac9be);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ac9c6:{NFSU2_TR(0x5ac9c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ac9ca:{NFSU2_TR(0x5ac9ca);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ac9ce:{NFSU2_TR(0x5ac9ce);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ac9d2:{NFSU2_TR(0x5ac9d2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ac9d6:{NFSU2_TR(0x5ac9d6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ac9d8:{NFSU2_TR(0x5ac9d8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ac9db:{NFSU2_TR(0x5ac9db);
if(r1(R+514)){{goto L5aca32;}}
}
B5ac9dd:L5ac9dd:{c.instructions+=1;NFSU2_TR(0x5ac9dd);
__builtin_memmove((R+4),(R+4),4);
}
B5ac9e0:L5ac9e0:{c.instructions+=4;NFSU2_TR(0x5ac9e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ac9e4:{NFSU2_TR(0x5ac9e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ac9e5:{NFSU2_TR(0x5ac9e5);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ac9e9:{NFSU2_TR(0x5ac9e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ac9eeull));
TAIL_STATIC(0x5764d0u,576);
}
B5ac9ee:L5ac9ee:{c.instructions+=7;NFSU2_TR(0x5ac9ee);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac9f4:{NFSU2_TR(0x5ac9f4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac9f8:{NFSU2_TR(0x5ac9f8);
{u32 ea_=u32(u32(7978744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ac9fe:{NFSU2_TR(0x5ac9fe);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5aca02:{NFSU2_TR(0x5aca02);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aca04:{NFSU2_TR(0x5aca04);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5aca07:{NFSU2_TR(0x5aca07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aca17;}}
}
B5aca09:L5aca09:{c.instructions+=4;NFSU2_TR(0x5aca09);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aca0d:{NFSU2_TR(0x5aca0d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aca11:{NFSU2_TR(0x5aca11);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aca15:{NFSU2_TR(0x5aca15);
{goto L5aca19;}
}
B5aca17:L5aca17:{c.instructions+=1;NFSU2_TR(0x5aca17);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aca19:L5aca19:{c.instructions+=7;NFSU2_TR(0x5aca19);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aca1d:{NFSU2_TR(0x5aca1d);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5aca23:{NFSU2_TR(0x5aca23);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5aca27:{NFSU2_TR(0x5aca27);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5aca2b:{NFSU2_TR(0x5aca2b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aca2d:{NFSU2_TR(0x5aca2d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5aca30:{NFSU2_TR(0x5aca30);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ac9e0u);}goto L5ac9e0;}}
}
B5aca32:L5aca32:{c.instructions+=4;NFSU2_TR(0x5aca32);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aca36:{NFSU2_TR(0x5aca36);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aca3a:{NFSU2_TR(0x5aca3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aca3c:{NFSU2_TR(0x5aca3c);
if(r1(R+518)){{goto L5aca44;}}
}
B5aca3e:L5aca3e:{c.instructions+=2;NFSU2_TR(0x5aca3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aca42:{NFSU2_TR(0x5aca42);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5aca44:L5aca44:{c.instructions+=2;NFSU2_TR(0x5aca44);
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
B5aca47:{NFSU2_TR(0x5aca47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aca50:L5aca50:{c.instructions+=11;NFSU2_TR(0x5aca50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aca51:{NFSU2_TR(0x5aca51);
__builtin_memmove((R+20),(R+16),4);
}
B5aca53:{NFSU2_TR(0x5aca53);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5aca56:{NFSU2_TR(0x5aca56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5aca59:{NFSU2_TR(0x5aca59);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aca5a:{NFSU2_TR(0x5aca5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aca5b:{NFSU2_TR(0x5aca5b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aca5c:{NFSU2_TR(0x5aca5c);
__builtin_memmove((R+28),(R+4),4);
}
B5aca5e:{NFSU2_TR(0x5aca5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aca64:{NFSU2_TR(0x5aca64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aca66:{NFSU2_TR(0x5aca66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aca89;}}
}
B5aca68:L5aca68:{c.instructions+=9;NFSU2_TR(0x5aca68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5aca6a:{NFSU2_TR(0x5aca6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aca6d:{NFSU2_TR(0x5aca6d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5aca73:{NFSU2_TR(0x5aca73);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aca76:{NFSU2_TR(0x5aca76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aca77:{NFSU2_TR(0x5aca77);
__builtin_memmove((R+0),gp(0x8a1ccc),4);
}
B5aca7c:{NFSU2_TR(0x5aca7c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aca7d:{NFSU2_TR(0x5aca7d);
u8 U[12];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5aca84:{NFSU2_TR(0x5aca84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aca89ull));
TAIL_STATIC(0x599d90u,599);
}
B5aca89:L5aca89:{c.instructions+=12;NFSU2_TR(0x5aca89);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aca8f:{NFSU2_TR(0x5aca8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5aca92:{NFSU2_TR(0x5aca92);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5aca93:{NFSU2_TR(0x5aca93);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aca99:{NFSU2_TR(0x5aca99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5aca9b:{NFSU2_TR(0x5aca9b);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B5acaa1:{NFSU2_TR(0x5acaa1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5acaa7:{NFSU2_TR(0x5acaa7);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5acaaa:{NFSU2_TR(0x5acaaa);
u8 U[12];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5acab1:{NFSU2_TR(0x5acab1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x47c35000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5acab9:{NFSU2_TR(0x5acab9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xc7c35000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5acac1:{NFSU2_TR(0x5acac1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5acdc4;}}
}
B5acac7:L5acac7:{c.instructions+=2;NFSU2_TR(0x5acac7);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ace58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5acace:{NFSU2_TR(0x5acace);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5ace24ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5acad5:L5acad5:{c.instructions+=5;NFSU2_TR(0x5acad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5acadb:{NFSU2_TR(0x5acadb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acadc:{NFSU2_TR(0x5acadc);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5acae0:{NFSU2_TR(0x5acae0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acae1:{NFSU2_TR(0x5acae1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acae6ull));
TAIL_STATIC(0x591320u,591);
}
B5acae6:L5acae6:{c.instructions+=5;NFSU2_TR(0x5acae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5acaec:{NFSU2_TR(0x5acaec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acaed:{NFSU2_TR(0x5acaed);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5acaf1:{NFSU2_TR(0x5acaf1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acaf2:{NFSU2_TR(0x5acaf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acaf7ull));
TAIL_STATIC(0x591320u,591);
}
B5acaf7:L5acaf7:{c.instructions+=5;NFSU2_TR(0x5acaf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5acafd:{NFSU2_TR(0x5acafd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acafe:{NFSU2_TR(0x5acafe);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5acb02:{NFSU2_TR(0x5acb02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acb03:{NFSU2_TR(0x5acb03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acb08ull));
TAIL_STATIC(0x591320u,591);
}
B5acb08:L5acb08:{c.instructions+=5;NFSU2_TR(0x5acb08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5acb0e:{NFSU2_TR(0x5acb0e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acb0f:{NFSU2_TR(0x5acb0f);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5acb13:{NFSU2_TR(0x5acb13);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acb14:{NFSU2_TR(0x5acb14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acb19ull));
TAIL_STATIC(0x591320u,591);
}
B5acb19:L5acb19:{c.instructions+=2;NFSU2_TR(0x5acb19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5acb1c:{NFSU2_TR(0x5acb1c);
{goto L5acdc4;}
}
B5acb21:L5acb21:{c.instructions+=5;NFSU2_TR(0x5acb21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5acb27:{NFSU2_TR(0x5acb27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acb28:{NFSU2_TR(0x5acb28);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5acb2c:{NFSU2_TR(0x5acb2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acb2d:{NFSU2_TR(0x5acb2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acb32ull));
TAIL_STATIC(0x591320u,591);
}
B5acb32:L5acb32:{c.instructions+=5;NFSU2_TR(0x5acb32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5acb38:{NFSU2_TR(0x5acb38);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acb39:{NFSU2_TR(0x5acb39);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5acb3d:{NFSU2_TR(0x5acb3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acb3e:{NFSU2_TR(0x5acb3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acb43ull));
TAIL_STATIC(0x591320u,591);
}
B5acb43:L5acb43:{c.instructions+=5;NFSU2_TR(0x5acb43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5acb49:{NFSU2_TR(0x5acb49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acb4a:{NFSU2_TR(0x5acb4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5acb4e:{NFSU2_TR(0x5acb4e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acb4f:{NFSU2_TR(0x5acb4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acb54ull));
TAIL_STATIC(0x591320u,591);
}
B5acb54:L5acb54:{c.instructions+=5;NFSU2_TR(0x5acb54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5acb5a:{NFSU2_TR(0x5acb5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acb5b:{NFSU2_TR(0x5acb5b);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5acb5f:{NFSU2_TR(0x5acb5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acb60:{NFSU2_TR(0x5acb60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acb65ull));
TAIL_STATIC(0x591320u,591);
}
B5acb65:L5acb65:{c.instructions+=2;NFSU2_TR(0x5acb65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5acb68:{NFSU2_TR(0x5acb68);
{goto L5acdc4;}
}
B5acb6d:L5acb6d:{c.instructions+=5;NFSU2_TR(0x5acb6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5acb73:{NFSU2_TR(0x5acb73);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acb74:{NFSU2_TR(0x5acb74);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5acb78:{NFSU2_TR(0x5acb78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acb79:{NFSU2_TR(0x5acb79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acb7eull));
TAIL_STATIC(0x591320u,591);
}
B5acb7e:L5acb7e:{c.instructions+=5;NFSU2_TR(0x5acb7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5acb84:{NFSU2_TR(0x5acb84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acb85:{NFSU2_TR(0x5acb85);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5acb89:{NFSU2_TR(0x5acb89);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acb8a:{NFSU2_TR(0x5acb8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acb8full));
TAIL_STATIC(0x591320u,591);
}
B5acb8f:L5acb8f:{c.instructions+=2;NFSU2_TR(0x5acb8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5acb92:{NFSU2_TR(0x5acb92);
{goto L5acdc4;}
}
B5acb97:L5acb97:{c.instructions+=3;NFSU2_TR(0x5acb97);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5acb9f:{NFSU2_TR(0x5acb9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5acba7:{NFSU2_TR(0x5acba7);
{goto L5acdc4;}
}
B5acbac:L5acbac:{c.instructions+=5;NFSU2_TR(0x5acbac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5acbb2:{NFSU2_TR(0x5acbb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acbb3:{NFSU2_TR(0x5acbb3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5acbb7:{NFSU2_TR(0x5acbb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acbb8:{NFSU2_TR(0x5acbb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acbbdull));
TAIL_STATIC(0x591320u,591);
}
B5acbbd:L5acbbd:{c.instructions+=8;NFSU2_TR(0x5acbbd);
{u32 ea_=u32(r4(R+24)+u32(1440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acbc3:{NFSU2_TR(0x5acbc3);
{u32 ea_=u32(r4(R+24)+u32(1424u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5acbc9:{NFSU2_TR(0x5acbc9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5acbcc:{NFSU2_TR(0x5acbcc);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5acbd0:{NFSU2_TR(0x5acbd0);
{u32 ea_=u32(r4(R+24)+u32(612u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5acbd6:{NFSU2_TR(0x5acbd6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5acbd9:{NFSU2_TR(0x5acbd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acbda:{NFSU2_TR(0x5acbda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acbdfull));
TAIL_STATIC(0x591320u,591);
}
B5acbdf:L5acbdf:{c.instructions+=5;NFSU2_TR(0x5acbdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5acbe5:{NFSU2_TR(0x5acbe5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acbe6:{NFSU2_TR(0x5acbe6);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5acbea:{NFSU2_TR(0x5acbea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acbeb:{NFSU2_TR(0x5acbeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acbf0ull));
TAIL_STATIC(0x591320u,591);
}
B5acbf0:L5acbf0:{c.instructions+=8;NFSU2_TR(0x5acbf0);
{u32 ea_=u32(r4(R+24)+u32(1444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acbf6:{NFSU2_TR(0x5acbf6);
{u32 ea_=u32(r4(R+24)+u32(1428u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5acbfc:{NFSU2_TR(0x5acbfc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5acbff:{NFSU2_TR(0x5acbff);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5acc03:{NFSU2_TR(0x5acc03);
{u32 ea_=u32(r4(R+24)+u32(616u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5acc09:{NFSU2_TR(0x5acc09);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5acc0c:{NFSU2_TR(0x5acc0c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acc0d:{NFSU2_TR(0x5acc0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acc12ull));
TAIL_STATIC(0x591320u,591);
}
B5acc12:L5acc12:{c.instructions+=2;NFSU2_TR(0x5acc12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5acc15:{NFSU2_TR(0x5acc15);
{goto L5acdc4;}
}
B5acc1a:L5acc1a:{c.instructions+=11;NFSU2_TR(0x5acc1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5acc1d:{NFSU2_TR(0x5acc1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5acc21:{NFSU2_TR(0x5acc21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acc22:{NFSU2_TR(0x5acc22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5acc25:{NFSU2_TR(0x5acc25);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5acc29:{NFSU2_TR(0x5acc29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acc2a:{NFSU2_TR(0x5acc2a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acc2b:{NFSU2_TR(0x5acc2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acc2c:{NFSU2_TR(0x5acc2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acc2d:{NFSU2_TR(0x5acc2d);
__builtin_memmove((R+4),(R+28),4);
}
B5acc2f:{NFSU2_TR(0x5acc2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acc34ull));
TAIL_STATIC(0x5a7b80u,5a7);
}
B5acc34:L5acc34:{c.instructions+=1;NFSU2_TR(0x5acc34);
{goto L5acdd6;}
}
B5acc39:L5acc39:{c.instructions+=11;NFSU2_TR(0x5acc39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5acc3c:{NFSU2_TR(0x5acc3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5acc40:{NFSU2_TR(0x5acc40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acc41:{NFSU2_TR(0x5acc41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5acc44:{NFSU2_TR(0x5acc44);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5acc48:{NFSU2_TR(0x5acc48);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acc49:{NFSU2_TR(0x5acc49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acc4a:{NFSU2_TR(0x5acc4a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acc4b:{NFSU2_TR(0x5acc4b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acc4c:{NFSU2_TR(0x5acc4c);
__builtin_memmove((R+4),(R+28),4);
}
B5acc4e:{NFSU2_TR(0x5acc4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acc53ull));
TAIL_STATIC(0x5a7cb0u,5a7);
}
B5acc53:L5acc53:{c.instructions+=1;NFSU2_TR(0x5acc53);
{goto L5acdd6;}
}
B5acc58:L5acc58:{c.instructions+=7;NFSU2_TR(0x5acc58);
{u32 ea_=u32(r4(R+24)+u32(1540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acc5e:{NFSU2_TR(0x5acc5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acc5f:{NFSU2_TR(0x5acc5f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5acc61:{NFSU2_TR(0x5acc61);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5acc65:{NFSU2_TR(0x5acc65);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5acc68:{NFSU2_TR(0x5acc68);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acc69:{NFSU2_TR(0x5acc69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acc6eull));
TAIL_STATIC(0x591320u,591);
}
B5acc6e:L5acc6e:{c.instructions+=7;NFSU2_TR(0x5acc6e);
{u32 ea_=u32(r4(R+24)+u32(1544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acc74:{NFSU2_TR(0x5acc74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5acc77:{NFSU2_TR(0x5acc77);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5acc79:{NFSU2_TR(0x5acc79);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5acc7d:{NFSU2_TR(0x5acc7d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5acc80:{NFSU2_TR(0x5acc80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acc81:{NFSU2_TR(0x5acc81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acc86ull));
TAIL_STATIC(0x591320u,591);
}
B5acc86:L5acc86:{c.instructions+=4;NFSU2_TR(0x5acc86);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5acc8a:{NFSU2_TR(0x5acc8a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acc8c:{NFSU2_TR(0x5acc8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acc8d:{NFSU2_TR(0x5acc8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acc92ull));
TAIL_STATIC(0x591320u,591);
}
B5acc92:L5acc92:{c.instructions+=2;NFSU2_TR(0x5acc92);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5acc95:{NFSU2_TR(0x5acc95);
{goto L5acdc4;}
}
B5acc9a:L5acc9a:{c.instructions+=2;NFSU2_TR(0x5acc9a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x224ull))));
}
B5acca0:{NFSU2_TR(0x5acca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5acca8:L5acca8:{c.instructions+=2;NFSU2_TR(0x5acca8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5accab:{NFSU2_TR(0x5accab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5accc6;}}
}
B5accad:L5accad:{c.instructions+=6;NFSU2_TR(0x5accad);
{u32 ea_=u32(r4(R+24)+u32(700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5accb3:{NFSU2_TR(0x5accb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5accb6:{NFSU2_TR(0x5accb6);
{u32 ea_=u32(r4(R+24)+u32(508u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5accbc:{NFSU2_TR(0x5accbc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5accc0:{NFSU2_TR(0x5accc0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5accc4:{NFSU2_TR(0x5accc4);
{goto L5accd2;}
}
B5accc6:L5accc6:{c.instructions+=3;NFSU2_TR(0x5accc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5accc8:{NFSU2_TR(0x5accc8);
{u32 ea_=u32(r4(R+24)+u32(748u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5accce:{NFSU2_TR(0x5accce);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5accd2:L5accd2:{c.instructions+=6;NFSU2_TR(0x5accd2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5accd6:{NFSU2_TR(0x5accd6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5accda:{NFSU2_TR(0x5accda);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5accdb:{NFSU2_TR(0x5accdb);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5accdf:{NFSU2_TR(0x5accdf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acce0:{NFSU2_TR(0x5acce0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acce5ull));
TAIL_STATIC(0x591320u,591);
}
B5acce5:L5acce5:{c.instructions+=5;NFSU2_TR(0x5acce5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5acce9:{NFSU2_TR(0x5acce9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5accea:{NFSU2_TR(0x5accea);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5accee:{NFSU2_TR(0x5accee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5accef:{NFSU2_TR(0x5accef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5accf4ull));
TAIL_STATIC(0x591320u,591);
}
B5accf4:L5accf4:{c.instructions+=6;NFSU2_TR(0x5accf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5accf8:{NFSU2_TR(0x5accf8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5accfb:{NFSU2_TR(0x5accfb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5accfe:{NFSU2_TR(0x5accfe);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5accff:{NFSU2_TR(0x5accff);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5acd03:{NFSU2_TR(0x5acd03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5acca8u);}goto L5acca8;}}
}
B5acd05:L5acd05:{c.instructions+=7;NFSU2_TR(0x5acd05);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5acd09:{NFSU2_TR(0x5acd09);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acd0a:{NFSU2_TR(0x5acd0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5acd0e:{NFSU2_TR(0x5acd0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acd0f:{NFSU2_TR(0x5acd0f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acd10:{NFSU2_TR(0x5acd10);
__builtin_memmove((R+4),(R+28),4);
}
B5acd12:{NFSU2_TR(0x5acd12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acd17ull));
TAIL_STATIC(0x59b160u,59b);
}
B5acd17:L5acd17:{c.instructions+=5;NFSU2_TR(0x5acd17);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acd1d:{NFSU2_TR(0x5acd1d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5acd21:{NFSU2_TR(0x5acd21);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5acd23:{NFSU2_TR(0x5acd23);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5acd26:{NFSU2_TR(0x5acd26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5acd30;}}
}
B5acd28:L5acd28:{c.instructions+=2;NFSU2_TR(0x5acd28);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acd2e:{NFSU2_TR(0x5acd2e);
{goto L5acd34;}
}
B5acd30:L5acd30:{c.instructions+=1;NFSU2_TR(0x5acd30);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acd34:L5acd34:{c.instructions+=6;NFSU2_TR(0x5acd34);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5acd38:{NFSU2_TR(0x5acd38);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acd3e:{NFSU2_TR(0x5acd3e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5acd42:{NFSU2_TR(0x5acd42);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5acd44:{NFSU2_TR(0x5acd44);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5acd47:{NFSU2_TR(0x5acd47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5acdd6;}}
}
B5acd4d:L5acd4d:{c.instructions+=2;NFSU2_TR(0x5acd4d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acd53:{NFSU2_TR(0x5acd53);
{goto L5acdda;}
}
B5acd58:L5acd58:{c.instructions+=5;NFSU2_TR(0x5acd58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5acd5e:{NFSU2_TR(0x5acd5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acd5f:{NFSU2_TR(0x5acd5f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5acd63:{NFSU2_TR(0x5acd63);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acd64:{NFSU2_TR(0x5acd64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acd69ull));
TAIL_STATIC(0x591320u,591);
}
B5acd69:L5acd69:{c.instructions+=5;NFSU2_TR(0x5acd69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5acd6f:{NFSU2_TR(0x5acd6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acd70:{NFSU2_TR(0x5acd70);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5acd74:{NFSU2_TR(0x5acd74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acd75:{NFSU2_TR(0x5acd75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acd7aull));
TAIL_STATIC(0x591320u,591);
}
B5acd7a:L5acd7a:{c.instructions+=2;NFSU2_TR(0x5acd7a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5acd7d:{NFSU2_TR(0x5acd7d);
{goto L5acdc4;}
}
B5acd7f:L5acd7f:{c.instructions+=5;NFSU2_TR(0x5acd7f);
__builtin_memmove((R+8),gp(0x7a1ad4),4);
}
B5acd85:{NFSU2_TR(0x5acd85);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acd87:{NFSU2_TR(0x5acd87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acd88:{NFSU2_TR(0x5acd88);
__builtin_memmove((R+4),(R+28),4);
}
B5acd8a:{NFSU2_TR(0x5acd8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acd8full));
TAIL_STATIC(0x59b5c0u,59b);
}
B5acd8f:L5acd8f:{c.instructions+=6;NFSU2_TR(0x5acd8f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5acd93:{NFSU2_TR(0x5acd93);
__builtin_memmove((R+0),gp(0x7a1ad0),4);
}
B5acd98:{NFSU2_TR(0x5acd98);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acd9a:{NFSU2_TR(0x5acd9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acd9b:{NFSU2_TR(0x5acd9b);
__builtin_memmove((R+4),(R+28),4);
}
B5acd9d:{NFSU2_TR(0x5acd9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acda2ull));
TAIL_STATIC(0x59b5c0u,59b);
}
B5acda2:L5acda2:{c.instructions+=1;NFSU2_TR(0x5acda2);
{goto L5acdda;}
}
B5acda4:L5acda4:{c.instructions+=3;NFSU2_TR(0x5acda4);
{u32 ea_=u32(u32(8004480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acdaa:{NFSU2_TR(0x5acdaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5acdb2:{NFSU2_TR(0x5acdb2);
{goto L5acdda;}
}
B5acdb4:L5acdb4:{c.instructions+=2;NFSU2_TR(0x5acdb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3dcccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B5acdbc:{NFSU2_TR(0x5acdbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f666666ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5acdc4:L5acdc4:{c.instructions+=7;NFSU2_TR(0x5acdc4);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5acdc8:{NFSU2_TR(0x5acdc8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acdc9:{NFSU2_TR(0x5acdc9);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5acdcd:{NFSU2_TR(0x5acdcd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acdce:{NFSU2_TR(0x5acdce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5acdcf:{NFSU2_TR(0x5acdcf);
__builtin_memmove((R+4),(R+28),4);
}
B5acdd1:{NFSU2_TR(0x5acdd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5acdd6ull));
TAIL_STATIC(0x59b160u,59b);
}
B5acdd6:L5acdd6:{c.instructions+=1;NFSU2_TR(0x5acdd6);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acdda:L5acdda:{c.instructions+=9;NFSU2_TR(0x5acdda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5acddd:{NFSU2_TR(0x5acddd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acde1:{NFSU2_TR(0x5acde1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5acde4:{NFSU2_TR(0x5acde4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5acde6:{NFSU2_TR(0x5acde6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5acde8:{NFSU2_TR(0x5acde8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5acdee:{NFSU2_TR(0x5acdee);
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
B5acdef:{NFSU2_TR(0x5acdef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5acdf5:{NFSU2_TR(0x5acdf5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ace19;}}
}
B5acdf7:L5acdf7:{c.instructions+=9;NFSU2_TR(0x5acdf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5acdf9:{NFSU2_TR(0x5acdf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5acdfc:{NFSU2_TR(0x5acdfc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5ace02:{NFSU2_TR(0x5ace02);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ace05:{NFSU2_TR(0x5ace05);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ace06:{NFSU2_TR(0x5ace06);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B5ace0c:{NFSU2_TR(0x5ace0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ace0d:{NFSU2_TR(0x5ace0d);
u8 U[12];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5ace14:{NFSU2_TR(0x5ace14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ace19ull));
TAIL_STATIC(0x5997e0u,599);
}
B5ace19:L5ace19:{c.instructions+=6;NFSU2_TR(0x5ace19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ace1a:{NFSU2_TR(0x5ace1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ace1b:{NFSU2_TR(0x5ace1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ace1c:{NFSU2_TR(0x5ace1c);
__builtin_memmove((R+16),(R+20),4);
}
B5ace1e:{NFSU2_TR(0x5ace1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ace1f:{NFSU2_TR(0x5ace1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ace80:L5ace80:{c.instructions+=6;NFSU2_TR(0x5ace80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B5ace83:{NFSU2_TR(0x5ace83);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ace87:{NFSU2_TR(0x5ace87);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ace8d:{NFSU2_TR(0x5ace8d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ace90:{NFSU2_TR(0x5ace90);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B5ace98:{NFSU2_TR(0x5ace98);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5acea4;}}
}
B5ace9a:L5ace9a:{c.instructions+=3;NFSU2_TR(0x5ace9a);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ace9e:{NFSU2_TR(0x5ace9e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5acea2:{NFSU2_TR(0x5acea2);
{goto L5acebd;}
}
B5acea4:L5acea4:{c.instructions+=1;NFSU2_TR(0x5acea4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aceae;}}
}
B5acea6:L5acea6:{c.instructions+=2;NFSU2_TR(0x5acea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aceac:{NFSU2_TR(0x5aceac);
{goto L5aceb9;}
}
B5aceae:L5aceae:{c.instructions+=2;NFSU2_TR(0x5aceae);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aceb1:{NFSU2_TR(0x5aceb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5acebd;}}
}
B5aceb3:L5aceb3:{c.instructions+=1;NFSU2_TR(0x5aceb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aceb9:L5aceb9:{c.instructions+=1;NFSU2_TR(0x5aceb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5acebd:L5acebd:{c.instructions+=7;NFSU2_TR(0x5acebd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acec1:{NFSU2_TR(0x5acec1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5acec5:{NFSU2_TR(0x5acec5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5acecb:{NFSU2_TR(0x5acecb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5acecf:{NFSU2_TR(0x5acecf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aced1:{NFSU2_TR(0x5aced1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5aced4:{NFSU2_TR(0x5aced4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5acedc;}}
}
B5aced6:L5aced6:{c.instructions+=2;NFSU2_TR(0x5aced6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aced8:{NFSU2_TR(0x5aced8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acedc:L5acedc:{c.instructions+=3;NFSU2_TR(0x5acedc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5acedf:{NFSU2_TR(0x5acedf);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B5acee7:{NFSU2_TR(0x5acee7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5acef3;}}
}
B5acee9:L5acee9:{c.instructions+=3;NFSU2_TR(0x5acee9);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aceed:{NFSU2_TR(0x5aceed);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5acef1:{NFSU2_TR(0x5acef1);
{goto L5acf0c;}
}
B5acef3:L5acef3:{c.instructions+=1;NFSU2_TR(0x5acef3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5acefd;}}
}
B5acef5:L5acef5:{c.instructions+=2;NFSU2_TR(0x5acef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5acefb:{NFSU2_TR(0x5acefb);
{goto L5acf08;}
}
B5acefd:L5acefd:{c.instructions+=2;NFSU2_TR(0x5acefd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5acf00:{NFSU2_TR(0x5acf00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5acf0c;}}
}
B5acf02:L5acf02:{c.instructions+=1;NFSU2_TR(0x5acf02);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5acf08:L5acf08:{c.instructions+=1;NFSU2_TR(0x5acf08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5acf0c:L5acf0c:{c.instructions+=7;NFSU2_TR(0x5acf0c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acf10:{NFSU2_TR(0x5acf10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5acf14:{NFSU2_TR(0x5acf14);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5acf16:{NFSU2_TR(0x5acf16);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5acf1a:{NFSU2_TR(0x5acf1a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5acf1c:{NFSU2_TR(0x5acf1c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5acf1f:{NFSU2_TR(0x5acf1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5acf27;}}
}
B5acf21:L5acf21:{c.instructions+=2;NFSU2_TR(0x5acf21);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5acf23:{NFSU2_TR(0x5acf23);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acf27:L5acf27:{c.instructions+=3;NFSU2_TR(0x5acf27);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5acf2a:{NFSU2_TR(0x5acf2a);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B5acf32:{NFSU2_TR(0x5acf32);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5acf3e;}}
}
B5acf34:L5acf34:{c.instructions+=3;NFSU2_TR(0x5acf34);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acf38:{NFSU2_TR(0x5acf38);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5acf3c:{NFSU2_TR(0x5acf3c);
{goto L5acf57;}
}
B5acf3e:L5acf3e:{c.instructions+=1;NFSU2_TR(0x5acf3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5acf48;}}
}
B5acf40:L5acf40:{c.instructions+=2;NFSU2_TR(0x5acf40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5acf46:{NFSU2_TR(0x5acf46);
{goto L5acf53;}
}
B5acf48:L5acf48:{c.instructions+=2;NFSU2_TR(0x5acf48);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5acf4b:{NFSU2_TR(0x5acf4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5acf57;}}
}
B5acf4d:L5acf4d:{c.instructions+=1;NFSU2_TR(0x5acf4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5acf53:L5acf53:{c.instructions+=1;NFSU2_TR(0x5acf53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5acf57:L5acf57:{c.instructions+=7;NFSU2_TR(0x5acf57);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acf5b:{NFSU2_TR(0x5acf5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5acf5f:{NFSU2_TR(0x5acf5f);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5acf61:{NFSU2_TR(0x5acf61);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5acf65:{NFSU2_TR(0x5acf65);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5acf67:{NFSU2_TR(0x5acf67);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5acf6a:{NFSU2_TR(0x5acf6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5acf72;}}
}
B5acf6c:L5acf6c:{c.instructions+=2;NFSU2_TR(0x5acf6c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5acf6e:{NFSU2_TR(0x5acf6e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acf72:L5acf72:{c.instructions+=3;NFSU2_TR(0x5acf72);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5acf75:{NFSU2_TR(0x5acf75);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B5acf7d:{NFSU2_TR(0x5acf7d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5acf89;}}
}
B5acf7f:L5acf7f:{c.instructions+=3;NFSU2_TR(0x5acf7f);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acf83:{NFSU2_TR(0x5acf83);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5acf87:{NFSU2_TR(0x5acf87);
{goto L5acfa2;}
}
B5acf89:L5acf89:{c.instructions+=1;NFSU2_TR(0x5acf89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5acf93;}}
}
B5acf8b:L5acf8b:{c.instructions+=2;NFSU2_TR(0x5acf8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5acf91:{NFSU2_TR(0x5acf91);
{goto L5acf9e;}
}
B5acf93:L5acf93:{c.instructions+=2;NFSU2_TR(0x5acf93);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5acf96:{NFSU2_TR(0x5acf96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5acfa2;}}
}
B5acf98:L5acf98:{c.instructions+=1;NFSU2_TR(0x5acf98);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5acf9e:L5acf9e:{c.instructions+=1;NFSU2_TR(0x5acf9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5acfa2:L5acfa2:{c.instructions+=7;NFSU2_TR(0x5acfa2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acfa6:{NFSU2_TR(0x5acfa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5acfaa:{NFSU2_TR(0x5acfaa);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5acfac:{NFSU2_TR(0x5acfac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5acfb0:{NFSU2_TR(0x5acfb0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5acfb2:{NFSU2_TR(0x5acfb2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5acfb5:{NFSU2_TR(0x5acfb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5acfbd;}}
}
B5acfb7:L5acfb7:{c.instructions+=2;NFSU2_TR(0x5acfb7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5acfb9:{NFSU2_TR(0x5acfb9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acfbd:L5acfbd:{c.instructions+=3;NFSU2_TR(0x5acfbd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5acfc0:{NFSU2_TR(0x5acfc0);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B5acfc8:{NFSU2_TR(0x5acfc8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5acfd4;}}
}
B5acfca:L5acfca:{c.instructions+=3;NFSU2_TR(0x5acfca);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acfce:{NFSU2_TR(0x5acfce);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5acfd2:{NFSU2_TR(0x5acfd2);
{goto L5acfed;}
}
B5acfd4:L5acfd4:{c.instructions+=1;NFSU2_TR(0x5acfd4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5acfde;}}
}
B5acfd6:L5acfd6:{c.instructions+=2;NFSU2_TR(0x5acfd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5acfdc:{NFSU2_TR(0x5acfdc);
{goto L5acfe9;}
}
B5acfde:L5acfde:{c.instructions+=2;NFSU2_TR(0x5acfde);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5acfe1:{NFSU2_TR(0x5acfe1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5acfed;}}
}
B5acfe3:L5acfe3:{c.instructions+=1;NFSU2_TR(0x5acfe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5acfe9:L5acfe9:{c.instructions+=1;NFSU2_TR(0x5acfe9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5acfed:L5acfed:{c.instructions+=6;NFSU2_TR(0x5acfed);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5acff1:{NFSU2_TR(0x5acff1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5acff5:{NFSU2_TR(0x5acff5);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5acff7:{NFSU2_TR(0x5acff7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5acffb:{NFSU2_TR(0x5acffb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5acffd:{NFSU2_TR(0x5acffd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
TAIL_STATIC(0x5ad000u,5ad);
}
XIT:NFSU2_TR_EXIT(0x5ac,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
