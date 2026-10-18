#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_493(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_636(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x635,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x635,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_635(u8* __restrict R,Cpu& c);
u32 page_635(Cpu& c){return body_635(c.regs.data(),c);}
__attribute__((noinline)) u32 body_635(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x635000:goto L635000;
case 0x635001:c.instructions+=1;goto B635001;
case 0x635006:goto L635006;
case 0x635009:c.instructions+=2;goto B635009;
case 0x63500a:c.instructions+=1;goto B63500a;
case 0x63500f:goto L63500f;
case 0x635011:c.instructions+=4;goto B635011;
case 0x635013:c.instructions+=3;goto B635013;
case 0x635016:c.instructions+=2;goto B635016;
case 0x635018:c.instructions+=1;goto B635018;
case 0x63501a:goto L63501a;
case 0x63501f:c.instructions+=2;goto B63501f;
case 0x635021:c.instructions+=1;goto B635021;
case 0x635026:goto L635026;
case 0x63502b:c.instructions+=3;goto B63502b;
case 0x63502d:c.instructions+=2;goto B63502d;
case 0x635033:c.instructions+=1;goto B635033;
case 0x635038:goto L635038;
case 0x63503d:c.instructions+=3;goto B63503d;
case 0x63503f:c.instructions+=2;goto B63503f;
case 0x635045:c.instructions+=1;goto B635045;
case 0x63504a:goto L63504a;
case 0x63504f:c.instructions+=3;goto B63504f;
case 0x635051:c.instructions+=2;goto B635051;
case 0x635057:c.instructions+=1;goto B635057;
case 0x63505c:goto L63505c;
case 0x635062:c.instructions+=1;goto B635062;
case 0x635064:goto L635064;
case 0x63506a:c.instructions+=4;goto B63506a;
case 0x635070:c.instructions+=3;goto B635070;
case 0x635076:c.instructions+=2;goto B635076;
case 0x63507c:c.instructions+=1;goto B63507c;
case 0x63507e:goto L63507e;
case 0x635084:c.instructions+=3;goto B635084;
case 0x63508a:c.instructions+=2;goto B63508a;
case 0x635090:c.instructions+=1;goto B635090;
case 0x635096:goto L635096;
case 0x635098:c.instructions+=2;goto B635098;
case 0x63509a:c.instructions+=1;goto B63509a;
case 0x63509c:goto L63509c;
case 0x6350a2:c.instructions+=2;goto B6350a2;
case 0x6350a4:c.instructions+=1;goto B6350a4;
case 0x6350a6:goto L6350a6;
case 0x6350ac:c.instructions+=2;goto B6350ac;
case 0x6350ae:c.instructions+=1;goto B6350ae;
case 0x6350b0:goto L6350b0;
case 0x6350b3:c.instructions+=1;goto B6350b3;
case 0x6350b9:goto L6350b9;
case 0x6350bf:c.instructions+=2;goto B6350bf;
case 0x6350c1:c.instructions+=1;goto B6350c1;
case 0x6350c3:goto L6350c3;
case 0x6350c6:c.instructions+=1;goto B6350c6;
case 0x6350cc:goto L6350cc;
case 0x6350d0:c.instructions+=6;goto B6350d0;
case 0x6350d6:c.instructions+=5;goto B6350d6;
case 0x6350da:c.instructions+=4;goto B6350da;
case 0x6350de:c.instructions+=3;goto B6350de;
case 0x6350e6:c.instructions+=2;goto B6350e6;
case 0x6350ec:c.instructions+=1;goto B6350ec;
case 0x6350f0:goto L6350f0;
case 0x6350f4:c.instructions+=2;goto B6350f4;
case 0x6350f6:c.instructions+=1;goto B6350f6;
case 0x6350fc:goto L6350fc;
case 0x635100:c.instructions+=2;goto B635100;
case 0x635104:c.instructions+=1;goto B635104;
case 0x635106:goto L635106;
case 0x635108:c.instructions+=1;goto B635108;
case 0x63510d:goto L63510d;
case 0x635113:c.instructions+=7;goto B635113;
case 0x635116:c.instructions+=6;goto B635116;
case 0x635119:c.instructions+=5;goto B635119;
case 0x63511c:c.instructions+=4;goto B63511c;
case 0x63511f:c.instructions+=3;goto B63511f;
case 0x635122:c.instructions+=2;goto B635122;
case 0x635124:c.instructions+=1;goto B635124;
case 0x635126:goto L635126;
case 0x63512b:c.instructions+=1;goto B63512b;
case 0x63512d:goto L63512d;
case 0x63512f:c.instructions+=1;goto B63512f;
case 0x635131:goto L635131;
case 0x635135:c.instructions+=3;goto B635135;
case 0x63513b:c.instructions+=2;goto B63513b;
case 0x63513e:c.instructions+=1;goto B63513e;
case 0x635140:goto L635140;
case 0x635144:c.instructions+=1;goto B635144;
case 0x635149:goto L635149;
case 0x63514c:c.instructions+=2;goto B63514c;
case 0x63514f:c.instructions+=1;goto B63514f;
case 0x635151:goto L635151;
case 0x635153:c.instructions+=1;goto B635153;
case 0x635155:goto L635155;
case 0x635158:c.instructions+=1;goto B635158;
case 0x63515a:goto L63515a;
case 0x63515c:c.instructions+=1;goto B63515c;
case 0x63515e:goto L63515e;
case 0x635162:c.instructions+=5;goto B635162;
case 0x635167:c.instructions+=4;goto B635167;
case 0x63516c:c.instructions+=3;goto B63516c;
case 0x635171:c.instructions+=2;goto B635171;
case 0x635176:c.instructions+=1;goto B635176;
case 0x635178:goto L635178;
case 0x635179:c.instructions+=5;goto B635179;
case 0x63517c:c.instructions+=4;goto B63517c;
case 0x63517f:c.instructions+=3;goto B63517f;
case 0x635182:c.instructions+=2;goto B635182;
case 0x635183:c.instructions+=1;goto B635183;
case 0x635188:goto L635188;
case 0x63518b:goto L63518b;
case 0x63518e:c.instructions+=3;goto B63518e;
case 0x63518f:c.instructions+=2;goto B63518f;
case 0x635190:c.instructions+=1;goto B635190;
case 0x635195:goto L635195;
case 0x635196:c.instructions+=3;goto B635196;
case 0x63519a:c.instructions+=2;goto B63519a;
case 0x63519b:c.instructions+=1;goto B63519b;
case 0x6351a0:goto L6351a0;
case 0x6351a3:goto L6351a3;
case 0x6351a4:c.instructions+=1;goto B6351a4;
case 0x6351a9:goto L6351a9;
case 0x6351ac:c.instructions+=2;goto B6351ac;
case 0x6351ae:c.instructions+=1;goto B6351ae;
case 0x6351b0:goto L6351b0;
case 0x6351b4:c.instructions+=4;goto B6351b4;
case 0x6351b6:c.instructions+=3;goto B6351b6;
case 0x6351b7:c.instructions+=2;goto B6351b7;
case 0x6351b9:c.instructions+=1;goto B6351b9;
case 0x6351be:goto L6351be;
case 0x6351c0:c.instructions+=1;goto B6351c0;
case 0x6351c2:goto L6351c2;
case 0x6351c8:goto L6351c8;
case 0x6351cc:c.instructions+=5;goto B6351cc;
case 0x6351cf:c.instructions+=4;goto B6351cf;
case 0x6351d2:c.instructions+=3;goto B6351d2;
case 0x6351d7:c.instructions+=2;goto B6351d7;
case 0x6351db:c.instructions+=1;goto B6351db;
case 0x6351e1:goto L6351e1;
case 0x6351e5:c.instructions+=2;goto B6351e5;
case 0x6351e7:c.instructions+=1;goto B6351e7;
case 0x6351ed:goto L6351ed;
case 0x6351f1:c.instructions+=3;goto B6351f1;
case 0x6351f9:c.instructions+=2;goto B6351f9;
case 0x6351fe:c.instructions+=1;goto B6351fe;
case 0x635200:goto L635200;
case 0x635204:c.instructions+=4;goto B635204;
case 0x635207:c.instructions+=3;goto B635207;
case 0x63520f:c.instructions+=2;goto B63520f;
case 0x635213:c.instructions+=1;goto B635213;
case 0x635215:goto L635215;
case 0x635219:c.instructions+=2;goto B635219;
case 0x63521d:c.instructions+=1;goto B63521d;
case 0x63521f:goto L63521f;
case 0x635227:c.instructions+=1;goto B635227;
case 0x63522c:goto L63522c;
case 0x63522f:c.instructions+=7;goto B63522f;
case 0x635232:c.instructions+=6;goto B635232;
case 0x635237:c.instructions+=5;goto B635237;
case 0x63523a:c.instructions+=4;goto B63523a;
case 0x63523d:c.instructions+=3;goto B63523d;
case 0x63523f:c.instructions+=2;goto B63523f;
case 0x635242:c.instructions+=1;goto B635242;
case 0x635244:goto L635244;
case 0x635249:c.instructions+=1;goto B635249;
case 0x63524b:goto L63524b;
case 0x63524d:c.instructions+=1;goto B63524d;
case 0x63524f:goto L63524f;
case 0x635253:c.instructions+=3;goto B635253;
case 0x635258:c.instructions+=2;goto B635258;
case 0x63525b:c.instructions+=1;goto B63525b;
case 0x63525d:goto L63525d;
case 0x63525f:c.instructions+=1;goto B63525f;
case 0x635264:goto L635264;
case 0x635268:c.instructions+=3;goto B635268;
case 0x63526b:c.instructions+=2;goto B63526b;
case 0x63526e:c.instructions+=1;goto B63526e;
case 0x635270:goto L635270;
case 0x635272:c.instructions+=1;goto B635272;
case 0x635274:goto L635274;
case 0x635277:c.instructions+=1;goto B635277;
case 0x635279:goto L635279;
case 0x63527b:c.instructions+=1;goto B63527b;
case 0x63527d:goto L63527d;
case 0x635281:c.instructions+=5;goto B635281;
case 0x635286:c.instructions+=4;goto B635286;
case 0x63528b:c.instructions+=3;goto B63528b;
case 0x635290:c.instructions+=2;goto B635290;
case 0x635295:c.instructions+=1;goto B635295;
case 0x635297:goto L635297;
case 0x635298:c.instructions+=6;goto B635298;
case 0x63529d:c.instructions+=5;goto B63529d;
case 0x6352a0:c.instructions+=4;goto B6352a0;
case 0x6352a3:c.instructions+=3;goto B6352a3;
case 0x6352a6:c.instructions+=2;goto B6352a6;
case 0x6352a7:c.instructions+=1;goto B6352a7;
case 0x6352ac:goto L6352ac;
case 0x6352af:goto L6352af;
case 0x6352b0:c.instructions+=4;goto B6352b0;
case 0x6352b4:c.instructions+=3;goto B6352b4;
case 0x6352b7:c.instructions+=2;goto B6352b7;
case 0x6352b8:c.instructions+=1;goto B6352b8;
case 0x6352bd:goto L6352bd;
case 0x6352be:c.instructions+=3;goto B6352be;
case 0x6352c2:c.instructions+=2;goto B6352c2;
case 0x6352c3:c.instructions+=1;goto B6352c3;
case 0x6352c8:goto L6352c8;
case 0x6352cb:goto L6352cb;
case 0x6352cf:goto L6352cf;
case 0x6352d3:c.instructions+=2;goto B6352d3;
case 0x6352d7:c.instructions+=1;goto B6352d7;
case 0x6352dd:goto L6352dd;
case 0x6352e3:c.instructions+=7;goto B6352e3;
case 0x6352e6:c.instructions+=6;goto B6352e6;
case 0x6352e9:c.instructions+=5;goto B6352e9;
case 0x6352ec:c.instructions+=4;goto B6352ec;
case 0x6352ef:c.instructions+=3;goto B6352ef;
case 0x6352f2:c.instructions+=2;goto B6352f2;
case 0x6352f4:c.instructions+=1;goto B6352f4;
case 0x6352f6:goto L6352f6;
case 0x6352fb:c.instructions+=1;goto B6352fb;
case 0x6352fd:goto L6352fd;
case 0x6352ff:c.instructions+=1;goto B6352ff;
case 0x635301:goto L635301;
case 0x635305:c.instructions+=3;goto B635305;
case 0x63530b:c.instructions+=2;goto B63530b;
case 0x63530e:c.instructions+=1;goto B63530e;
case 0x635310:goto L635310;
case 0x635312:c.instructions+=1;goto B635312;
case 0x635317:goto L635317;
case 0x63531b:c.instructions+=3;goto B63531b;
case 0x63531f:c.instructions+=2;goto B63531f;
case 0x635322:c.instructions+=1;goto B635322;
case 0x635324:goto L635324;
case 0x635326:c.instructions+=1;goto B635326;
case 0x635328:goto L635328;
case 0x63532b:c.instructions+=1;goto B63532b;
case 0x63532d:goto L63532d;
case 0x63532f:c.instructions+=1;goto B63532f;
case 0x635331:goto L635331;
case 0x635335:c.instructions+=7;goto B635335;
case 0x635338:c.instructions+=6;goto B635338;
case 0x63533c:c.instructions+=5;goto B63533c;
case 0x635340:c.instructions+=4;goto B635340;
case 0x635345:c.instructions+=3;goto B635345;
case 0x63534a:c.instructions+=2;goto B63534a;
case 0x63534f:c.instructions+=1;goto B63534f;
case 0x635351:goto L635351;
case 0x635352:c.instructions+=6;goto B635352;
case 0x635357:c.instructions+=5;goto B635357;
case 0x63535a:c.instructions+=4;goto B63535a;
case 0x63535d:c.instructions+=3;goto B63535d;
case 0x635360:c.instructions+=2;goto B635360;
case 0x635361:c.instructions+=1;goto B635361;
case 0x635366:goto L635366;
case 0x635369:goto L635369;
case 0x63536a:c.instructions+=4;goto B63536a;
case 0x63536e:c.instructions+=3;goto B63536e;
case 0x635372:c.instructions+=2;goto B635372;
case 0x635373:c.instructions+=1;goto B635373;
case 0x635378:goto L635378;
case 0x635379:c.instructions+=3;goto B635379;
case 0x63537d:c.instructions+=2;goto B63537d;
case 0x63537e:c.instructions+=1;goto B63537e;
case 0x635383:goto L635383;
case 0x635386:c.instructions+=1;goto B635386;
case 0x635388:goto L635388;
case 0x63538a:c.instructions+=1;goto B63538a;
case 0x63538c:goto L63538c;
case 0x63538f:c.instructions+=2;goto B63538f;
case 0x635391:c.instructions+=1;goto B635391;
case 0x635393:goto L635393;
case 0x635395:c.instructions+=1;goto B635395;
case 0x63539a:goto L63539a;
case 0x63539b:c.instructions+=2;goto B63539b;
case 0x63539d:c.instructions+=1;goto B63539d;
case 0x6353a2:goto L6353a2;
case 0x6353a5:c.instructions+=2;goto B6353a5;
case 0x6353a7:c.instructions+=1;goto B6353a7;
case 0x6353a9:goto L6353a9;
case 0x6353ab:c.instructions+=1;goto B6353ab;
case 0x6353b0:goto L6353b0;
case 0x6353b4:c.instructions+=3;goto B6353b4;
case 0x6353b5:c.instructions+=2;goto B6353b5;
case 0x6353b7:c.instructions+=1;goto B6353b7;
case 0x6353bc:goto L6353bc;
case 0x6353be:c.instructions+=1;goto B6353be;
case 0x6353c0:goto L6353c0;
case 0x6353c4:c.instructions+=6;goto B6353c4;
case 0x6353c6:c.instructions+=5;goto B6353c6;
case 0x6353cc:c.instructions+=4;goto B6353cc;
case 0x6353ce:c.instructions+=3;goto B6353ce;
case 0x6353cf:c.instructions+=2;goto B6353cf;
case 0x6353d1:c.instructions+=1;goto B6353d1;
case 0x6353d6:goto L6353d6;
case 0x6353da:c.instructions+=8;goto B6353da;
case 0x6353de:c.instructions+=7;goto B6353de;
case 0x6353df:c.instructions+=6;goto B6353df;
case 0x6353e2:c.instructions+=5;goto B6353e2;
case 0x6353e5:c.instructions+=4;goto B6353e5;
case 0x6353e8:c.instructions+=3;goto B6353e8;
case 0x6353ec:c.instructions+=2;goto B6353ec;
case 0x6353f0:c.instructions+=1;goto B6353f0;
case 0x6353f6:goto L6353f6;
case 0x6353fa:c.instructions+=5;goto B6353fa;
case 0x6353fd:c.instructions+=4;goto B6353fd;
case 0x635400:c.instructions+=3;goto B635400;
case 0x635402:c.instructions+=2;goto B635402;
case 0x635406:c.instructions+=1;goto B635406;
case 0x63540c:goto L63540c;
case 0x635410:c.instructions+=7;goto B635410;
case 0x635414:c.instructions+=6;goto B635414;
case 0x63541a:c.instructions+=5;goto B63541a;
case 0x63541f:c.instructions+=4;goto B63541f;
case 0x635423:c.instructions+=3;goto B635423;
case 0x635427:c.instructions+=2;goto B635427;
case 0x63542f:c.instructions+=1;goto B63542f;
case 0x635430:goto L635430;
case 0x635434:c.instructions+=4;goto B635434;
case 0x635436:c.instructions+=3;goto B635436;
case 0x635438:c.instructions+=2;goto B635438;
case 0x63543c:c.instructions+=1;goto B63543c;
case 0x635442:goto L635442;
case 0x635446:c.instructions+=3;goto B635446;
case 0x63544e:c.instructions+=2;goto B63544e;
case 0x635456:c.instructions+=1;goto B635456;
case 0x635460:goto L635460;
case 0x635468:c.instructions+=2;goto B635468;
case 0x63546c:c.instructions+=1;goto B63546c;
case 0x635470:goto L635470;
case 0x635474:c.instructions+=3;goto B635474;
case 0x635478:c.instructions+=2;goto B635478;
case 0x63547c:c.instructions+=1;goto B63547c;
case 0x63547e:goto L63547e;
case 0x635486:c.instructions+=1;goto B635486;
case 0x63548b:goto L63548b;
case 0x63548e:c.instructions+=7;goto B63548e;
case 0x635491:c.instructions+=6;goto B635491;
case 0x635496:c.instructions+=5;goto B635496;
case 0x635499:c.instructions+=4;goto B635499;
case 0x63549c:c.instructions+=3;goto B63549c;
case 0x63549e:c.instructions+=2;goto B63549e;
case 0x6354a1:c.instructions+=1;goto B6354a1;
case 0x6354a3:goto L6354a3;
case 0x6354a8:c.instructions+=1;goto B6354a8;
case 0x6354aa:goto L6354aa;
case 0x6354ac:c.instructions+=1;goto B6354ac;
case 0x6354ae:goto L6354ae;
case 0x6354b2:c.instructions+=3;goto B6354b2;
case 0x6354b7:c.instructions+=2;goto B6354b7;
case 0x6354ba:c.instructions+=1;goto B6354ba;
case 0x6354bc:goto L6354bc;
case 0x6354be:c.instructions+=1;goto B6354be;
case 0x6354c3:goto L6354c3;
case 0x6354c7:c.instructions+=3;goto B6354c7;
case 0x6354ca:c.instructions+=2;goto B6354ca;
case 0x6354cd:c.instructions+=1;goto B6354cd;
case 0x6354cf:goto L6354cf;
case 0x6354d1:c.instructions+=1;goto B6354d1;
case 0x6354d3:goto L6354d3;
case 0x6354d6:c.instructions+=1;goto B6354d6;
case 0x6354d8:goto L6354d8;
case 0x6354da:c.instructions+=1;goto B6354da;
case 0x6354dc:goto L6354dc;
case 0x6354e0:c.instructions+=5;goto B6354e0;
case 0x6354e5:c.instructions+=4;goto B6354e5;
case 0x6354ea:c.instructions+=3;goto B6354ea;
case 0x6354ef:c.instructions+=2;goto B6354ef;
case 0x6354f4:c.instructions+=1;goto B6354f4;
case 0x6354f6:goto L6354f6;
case 0x6354fc:c.instructions+=6;goto B6354fc;
case 0x6354fd:c.instructions+=5;goto B6354fd;
case 0x635500:c.instructions+=4;goto B635500;
case 0x635503:c.instructions+=3;goto B635503;
case 0x635506:c.instructions+=2;goto B635506;
case 0x635507:c.instructions+=1;goto B635507;
case 0x63550c:goto L63550c;
case 0x63550f:goto L63550f;
case 0x635512:c.instructions+=3;goto B635512;
case 0x635513:c.instructions+=2;goto B635513;
case 0x635514:c.instructions+=1;goto B635514;
case 0x635519:goto L635519;
case 0x63551a:c.instructions+=3;goto B63551a;
case 0x63551e:c.instructions+=2;goto B63551e;
case 0x63551f:c.instructions+=1;goto B63551f;
case 0x635524:goto L635524;
case 0x635527:goto L635527;
case 0x63552b:goto L63552b;
case 0x63552f:c.instructions+=2;goto B63552f;
case 0x635533:c.instructions+=1;goto B635533;
case 0x635539:goto L635539;
case 0x63553f:c.instructions+=8;goto B63553f;
case 0x635542:c.instructions+=7;goto B635542;
case 0x635545:c.instructions+=6;goto B635545;
case 0x635548:c.instructions+=5;goto B635548;
case 0x63554b:c.instructions+=4;goto B63554b;
case 0x63554f:c.instructions+=3;goto B63554f;
case 0x635552:c.instructions+=2;goto B635552;
case 0x635554:c.instructions+=1;goto B635554;
case 0x635556:goto L635556;
case 0x63555b:c.instructions+=1;goto B63555b;
case 0x63555d:goto L63555d;
case 0x63555f:c.instructions+=1;goto B63555f;
case 0x635561:goto L635561;
case 0x635565:c.instructions+=3;goto B635565;
case 0x63556b:c.instructions+=2;goto B63556b;
case 0x63556e:c.instructions+=1;goto B63556e;
case 0x635570:goto L635570;
case 0x635575:goto L635575;
case 0x635579:c.instructions+=6;goto B635579;
case 0x63557d:c.instructions+=5;goto B63557d;
case 0x63557f:c.instructions+=4;goto B63557f;
case 0x635583:c.instructions+=3;goto B635583;
case 0x635585:c.instructions+=2;goto B635585;
case 0x635588:c.instructions+=1;goto B635588;
case 0x63558a:goto L63558a;
case 0x63558c:c.instructions+=1;goto B63558c;
case 0x63558e:goto L63558e;
case 0x635591:c.instructions+=1;goto B635591;
case 0x635593:goto L635593;
case 0x635595:c.instructions+=1;goto B635595;
case 0x635597:goto L635597;
case 0x63559b:c.instructions+=6;goto B63559b;
case 0x63559e:c.instructions+=5;goto B63559e;
case 0x6355a3:c.instructions+=4;goto B6355a3;
case 0x6355a8:c.instructions+=3;goto B6355a8;
case 0x6355ac:c.instructions+=2;goto B6355ac;
case 0x6355b1:c.instructions+=1;goto B6355b1;
case 0x6355b3:goto L6355b3;
case 0x6355b4:c.instructions+=5;goto B6355b4;
case 0x6355b7:c.instructions+=4;goto B6355b7;
case 0x6355ba:c.instructions+=3;goto B6355ba;
case 0x6355bd:c.instructions+=2;goto B6355bd;
case 0x6355be:c.instructions+=1;goto B6355be;
case 0x6355c3:goto L6355c3;
case 0x6355c6:goto L6355c6;
case 0x6355c8:c.instructions+=3;goto B6355c8;
case 0x6355c9:c.instructions+=2;goto B6355c9;
case 0x6355ca:c.instructions+=1;goto B6355ca;
case 0x6355cf:goto L6355cf;
case 0x6355d0:c.instructions+=3;goto B6355d0;
case 0x6355d4:c.instructions+=2;goto B6355d4;
case 0x6355d5:c.instructions+=1;goto B6355d5;
case 0x6355da:goto L6355da;
case 0x6355dd:c.instructions+=1;goto B6355dd;
case 0x6355df:goto L6355df;
case 0x6355e1:c.instructions+=1;goto B6355e1;
case 0x6355e3:goto L6355e3;
case 0x6355e7:c.instructions+=4;goto B6355e7;
case 0x6355ea:c.instructions+=3;goto B6355ea;
case 0x6355ec:c.instructions+=2;goto B6355ec;
case 0x6355ee:c.instructions+=1;goto B6355ee;
case 0x6355f0:goto L6355f0;
case 0x6355f5:goto L6355f5;
case 0x6355f6:c.instructions+=2;goto B6355f6;
case 0x6355f8:c.instructions+=1;goto B6355f8;
case 0x6355fd:goto L6355fd;
case 0x635600:c.instructions+=2;goto B635600;
case 0x635602:c.instructions+=1;goto B635602;
case 0x635604:goto L635604;
case 0x635606:c.instructions+=1;goto B635606;
case 0x63560b:goto L63560b;
case 0x63560f:c.instructions+=3;goto B63560f;
case 0x635610:c.instructions+=2;goto B635610;
case 0x635612:c.instructions+=1;goto B635612;
case 0x635617:goto L635617;
case 0x63561b:c.instructions+=2;goto B63561b;
case 0x63561d:c.instructions+=1;goto B63561d;
case 0x63561f:goto L63561f;
case 0x635623:c.instructions+=6;goto B635623;
case 0x635625:c.instructions+=5;goto B635625;
case 0x635627:c.instructions+=4;goto B635627;
case 0x63562c:c.instructions+=3;goto B63562c;
case 0x63562d:c.instructions+=2;goto B63562d;
case 0x63562f:c.instructions+=1;goto B63562f;
case 0x635634:goto L635634;
case 0x635638:c.instructions+=6;goto B635638;
case 0x635639:c.instructions+=5;goto B635639;
case 0x63563c:c.instructions+=4;goto B63563c;
case 0x63563f:c.instructions+=3;goto B63563f;
case 0x635643:c.instructions+=2;goto B635643;
case 0x635647:c.instructions+=1;goto B635647;
case 0x63564d:goto L63564d;
case 0x635651:c.instructions+=8;goto B635651;
case 0x635653:c.instructions+=7;goto B635653;
case 0x635657:c.instructions+=6;goto B635657;
case 0x63565a:c.instructions+=5;goto B63565a;
case 0x63565d:c.instructions+=4;goto B63565d;
case 0x635660:c.instructions+=3;goto B635660;
case 0x635664:c.instructions+=2;goto B635664;
case 0x635668:c.instructions+=1;goto B635668;
case 0x63566e:goto L63566e;
case 0x635672:c.instructions+=9;goto B635672;
case 0x635676:c.instructions+=8;goto B635676;
case 0x63567a:c.instructions+=7;goto B63567a;
case 0x63567d:c.instructions+=6;goto B63567d;
case 0x635683:c.instructions+=5;goto B635683;
case 0x635684:c.instructions+=4;goto B635684;
case 0x635688:c.instructions+=3;goto B635688;
case 0x63568c:c.instructions+=2;goto B63568c;
case 0x635690:c.instructions+=1;goto B635690;
case 0x635696:goto L635696;
case 0x63569d:c.instructions+=1;goto B63569d;
case 0x63569f:goto L63569f;
case 0x6356a6:c.instructions+=3;goto B6356a6;
case 0x6356ab:c.instructions+=2;goto B6356ab;
case 0x6356b6:c.instructions+=1;goto B6356b6;
case 0x6356bb:goto L6356bb;
case 0x6356c0:c.instructions+=2;goto B6356c0;
case 0x6356c5:c.instructions+=1;goto B6356c5;
case 0x6356ca:goto L6356ca;
case 0x6356cf:c.instructions+=2;goto B6356cf;
case 0x6356d4:c.instructions+=1;goto B6356d4;
case 0x6356d9:goto L6356d9;
case 0x6356de:c.instructions+=2;goto B6356de;
case 0x6356e3:c.instructions+=1;goto B6356e3;
case 0x6356e8:goto L6356e8;
case 0x6356ed:c.instructions+=2;goto B6356ed;
case 0x6356f2:c.instructions+=1;goto B6356f2;
case 0x6356f7:goto L6356f7;
case 0x6356fc:c.instructions+=2;goto B6356fc;
case 0x635701:c.instructions+=1;goto B635701;
case 0x635706:goto L635706;
case 0x635709:c.instructions+=2;goto B635709;
case 0x63570e:c.instructions+=1;goto B63570e;
case 0x635719:goto L635719;
case 0x63571d:c.instructions+=3;goto B63571d;
case 0x635725:c.instructions+=2;goto B635725;
case 0x63572b:c.instructions+=1;goto B63572b;
case 0x635730:goto L635730;
case 0x635734:c.instructions+=2;goto B635734;
case 0x635739:c.instructions+=1;goto B635739;
case 0x635740:goto L635740;
case 0x635742:c.instructions+=3;goto B635742;
case 0x635743:c.instructions+=2;goto B635743;
case 0x635745:c.instructions+=1;goto B635745;
case 0x63574a:goto L63574a;
case 0x63574e:c.instructions+=6;goto B63574e;
case 0x635750:c.instructions+=5;goto B635750;
case 0x635752:c.instructions+=4;goto B635752;
case 0x635757:c.instructions+=3;goto B635757;
case 0x635758:c.instructions+=2;goto B635758;
case 0x63575a:c.instructions+=1;goto B63575a;
case 0x63575f:goto L63575f;
case 0x635762:c.instructions+=3;goto B635762;
case 0x635765:c.instructions+=2;goto B635765;
case 0x635766:c.instructions+=1;goto B635766;
case 0x635768:goto L635768;
case 0x63576c:c.instructions+=4;goto B63576c;
case 0x63576f:c.instructions+=3;goto B63576f;
case 0x635774:c.instructions+=2;goto B635774;
case 0x635778:c.instructions+=1;goto B635778;
case 0x63577a:goto L63577a;
case 0x63577e:c.instructions+=4;goto B63577e;
case 0x635784:c.instructions+=3;goto B635784;
case 0x635786:c.instructions+=2;goto B635786;
case 0x635788:c.instructions+=1;goto B635788;
case 0x63578a:goto L63578a;
case 0x635790:goto L635790;
case 0x635794:c.instructions+=9;goto B635794;
case 0x63579a:c.instructions+=8;goto B63579a;
case 0x63579c:c.instructions+=7;goto B63579c;
case 0x6357a4:c.instructions+=6;goto B6357a4;
case 0x6357ac:c.instructions+=5;goto B6357ac;
case 0x6357b4:c.instructions+=4;goto B6357b4;
case 0x6357bc:c.instructions+=3;goto B6357bc;
case 0x6357c4:c.instructions+=2;goto B6357c4;
case 0x6357cc:c.instructions+=1;goto B6357cc;
case 0x6357ce:goto L6357ce;
case 0x6357d1:c.instructions+=3;goto B6357d1;
case 0x6357d4:c.instructions+=2;goto B6357d4;
case 0x6357d6:c.instructions+=1;goto B6357d6;
case 0x6357d8:goto L6357d8;
case 0x6357dd:c.instructions+=3;goto B6357dd;
case 0x6357e1:c.instructions+=2;goto B6357e1;
case 0x6357e5:c.instructions+=1;goto B6357e5;
case 0x6357e9:goto L6357e9;
case 0x6357ed:c.instructions+=1;goto B6357ed;
case 0x6357f1:goto L6357f1;
case 0x6357f5:c.instructions+=6;goto B6357f5;
case 0x6357f9:c.instructions+=5;goto B6357f9;
case 0x6357fd:c.instructions+=4;goto B6357fd;
case 0x635800:c.instructions+=3;goto B635800;
case 0x635807:c.instructions+=2;goto B635807;
case 0x635809:c.instructions+=1;goto B635809;
case 0x63580f:goto L63580f;
case 0x635812:c.instructions+=3;goto B635812;
case 0x635814:c.instructions+=2;goto B635814;
case 0x635818:c.instructions+=1;goto B635818;
case 0x63581e:goto L63581e;
case 0x635822:c.instructions+=5;goto B635822;
case 0x635826:c.instructions+=4;goto B635826;
case 0x63582a:c.instructions+=3;goto B63582a;
case 0x635831:c.instructions+=2;goto B635831;
case 0x635833:c.instructions+=1;goto B635833;
case 0x635837:goto L635837;
case 0x635838:c.instructions+=4;goto B635838;
case 0x63583c:c.instructions+=3;goto B63583c;
case 0x63583d:c.instructions+=2;goto B63583d;
case 0x63583e:c.instructions+=1;goto B63583e;
case 0x635843:goto L635843;
case 0x635848:c.instructions+=5;goto B635848;
case 0x63584c:c.instructions+=4;goto B63584c;
case 0x63584d:c.instructions+=3;goto B63584d;
case 0x635851:c.instructions+=2;goto B635851;
case 0x635852:c.instructions+=1;goto B635852;
case 0x635857:goto L635857;
case 0x63585b:c.instructions+=2;goto B63585b;
case 0x63585c:c.instructions+=1;goto B63585c;
case 0x635861:goto L635861;
case 0x635865:c.instructions+=3;goto B635865;
case 0x635868:c.instructions+=2;goto B635868;
case 0x635869:c.instructions+=1;goto B635869;
case 0x63586e:goto L63586e;
case 0x63586f:c.instructions+=5;goto B63586f;
case 0x635871:c.instructions+=4;goto B635871;
case 0x635875:c.instructions+=3;goto B635875;
case 0x635876:c.instructions+=2;goto B635876;
case 0x635877:c.instructions+=1;goto B635877;
case 0x63587c:goto L63587c;
case 0x635881:c.instructions+=5;goto B635881;
case 0x635885:c.instructions+=4;goto B635885;
case 0x635886:c.instructions+=3;goto B635886;
case 0x63588a:c.instructions+=2;goto B63588a;
case 0x63588b:c.instructions+=1;goto B63588b;
case 0x635890:goto L635890;
case 0x635894:c.instructions+=2;goto B635894;
case 0x635895:c.instructions+=1;goto B635895;
case 0x63589a:goto L63589a;
case 0x63589e:c.instructions+=3;goto B63589e;
case 0x6358a1:c.instructions+=2;goto B6358a1;
case 0x6358a2:c.instructions+=1;goto B6358a2;
case 0x6358a7:goto L6358a7;
case 0x6358a9:c.instructions+=1;goto B6358a9;
case 0x6358ab:goto L6358ab;
case 0x6358ad:c.instructions+=1;goto B6358ad;
case 0x6358af:goto L6358af;
case 0x6358b3:c.instructions+=7;goto B6358b3;
case 0x6358b7:c.instructions+=6;goto B6358b7;
case 0x6358b8:c.instructions+=5;goto B6358b8;
case 0x6358bb:c.instructions+=4;goto B6358bb;
case 0x6358bd:c.instructions+=3;goto B6358bd;
case 0x6358c0:c.instructions+=2;goto B6358c0;
case 0x6358c4:c.instructions+=1;goto B6358c4;
case 0x6358c8:goto L6358c8;
case 0x6358c9:c.instructions+=2;goto B6358c9;
case 0x6358cc:c.instructions+=1;goto B6358cc;
case 0x6358d2:goto L6358d2;
case 0x6358d6:c.instructions+=4;goto B6358d6;
case 0x6358d9:c.instructions+=3;goto B6358d9;
case 0x6358dc:c.instructions+=2;goto B6358dc;
case 0x6358e0:c.instructions+=1;goto B6358e0;
case 0x6358e6:goto L6358e6;
case 0x6358ea:c.instructions+=7;goto B6358ea;
case 0x6358ee:c.instructions+=6;goto B6358ee;
case 0x6358f1:c.instructions+=5;goto B6358f1;
case 0x6358f7:c.instructions+=4;goto B6358f7;
case 0x6358fd:c.instructions+=3;goto B6358fd;
case 0x6358ff:c.instructions+=2;goto B6358ff;
case 0x635901:c.instructions+=1;goto B635901;
case 0x635903:goto L635903;
case 0x635909:goto L635909;
case 0x63590e:c.instructions+=3;goto B63590e;
case 0x635910:c.instructions+=2;goto B635910;
case 0x635914:c.instructions+=1;goto B635914;
case 0x63591a:goto L63591a;
case 0x63591d:c.instructions+=3;goto B63591d;
case 0x63591f:c.instructions+=2;goto B63591f;
case 0x635923:c.instructions+=1;goto B635923;
case 0x635929:goto L635929;
case 0x63592d:c.instructions+=2;goto B63592d;
case 0x63592f:c.instructions+=1;goto B63592f;
case 0x635935:goto L635935;
case 0x635936:c.instructions+=4;goto B635936;
case 0x63593a:c.instructions+=3;goto B63593a;
case 0x63593f:c.instructions+=2;goto B63593f;
case 0x635940:c.instructions+=1;goto B635940;
case 0x635945:goto L635945;
case 0x635949:c.instructions+=2;goto B635949;
case 0x63594a:c.instructions+=1;goto B63594a;
case 0x63594f:goto L63594f;
case 0x635953:c.instructions+=3;goto B635953;
case 0x635956:c.instructions+=2;goto B635956;
case 0x635957:c.instructions+=1;goto B635957;
case 0x63595c:goto L63595c;
case 0x63595d:c.instructions+=5;goto B63595d;
case 0x635961:c.instructions+=4;goto B635961;
case 0x635966:c.instructions+=3;goto B635966;
case 0x635967:c.instructions+=2;goto B635967;
case 0x635969:c.instructions+=1;goto B635969;
case 0x63596e:goto L63596e;
case 0x635972:c.instructions+=2;goto B635972;
case 0x635973:c.instructions+=1;goto B635973;
case 0x635978:goto L635978;
case 0x63597c:c.instructions+=3;goto B63597c;
case 0x63597f:c.instructions+=2;goto B63597f;
case 0x635980:c.instructions+=1;goto B635980;
case 0x635985:goto L635985;
case 0x635987:c.instructions+=1;goto B635987;
case 0x635989:goto L635989;
case 0x63598b:c.instructions+=1;goto B63598b;
case 0x63598d:goto L63598d;
case 0x635991:c.instructions+=5;goto B635991;
case 0x635992:c.instructions+=4;goto B635992;
case 0x635995:c.instructions+=3;goto B635995;
case 0x635997:c.instructions+=2;goto B635997;
case 0x63599b:c.instructions+=1;goto B63599b;
case 0x63599e:goto L63599e;
case 0x63599f:c.instructions+=2;goto B63599f;
case 0x6359a2:c.instructions+=1;goto B6359a2;
case 0x6359a4:goto L6359a4;
case 0x6359a8:c.instructions+=8;goto B6359a8;
case 0x6359ac:c.instructions+=7;goto B6359ac;
case 0x6359b2:c.instructions+=6;goto B6359b2;
case 0x6359b4:c.instructions+=5;goto B6359b4;
case 0x6359b6:c.instructions+=4;goto B6359b6;
case 0x6359b9:c.instructions+=3;goto B6359b9;
case 0x6359bf:c.instructions+=2;goto B6359bf;
case 0x6359c3:c.instructions+=1;goto B6359c3;
case 0x6359c9:goto L6359c9;
case 0x6359cc:c.instructions+=3;goto B6359cc;
case 0x6359ce:c.instructions+=2;goto B6359ce;
case 0x6359d2:c.instructions+=1;goto B6359d2;
case 0x6359d8:goto L6359d8;
case 0x6359db:c.instructions+=9;goto B6359db;
case 0x6359e1:c.instructions+=8;goto B6359e1;
case 0x6359e3:c.instructions+=7;goto B6359e3;
case 0x6359e5:c.instructions+=6;goto B6359e5;
case 0x6359e9:c.instructions+=5;goto B6359e9;
case 0x6359ed:c.instructions+=4;goto B6359ed;
case 0x6359f5:c.instructions+=3;goto B6359f5;
case 0x6359fd:c.instructions+=2;goto B6359fd;
case 0x635a05:c.instructions+=1;goto B635a05;
case 0x635a07:goto L635a07;
case 0x635a0a:c.instructions+=4;goto B635a0a;
case 0x635a0d:c.instructions+=3;goto B635a0d;
case 0x635a10:c.instructions+=2;goto B635a10;
case 0x635a14:c.instructions+=1;goto B635a14;
case 0x635a18:goto L635a18;
case 0x635a1a:c.instructions+=1;goto B635a1a;
case 0x635a20:goto L635a20;
case 0x635a26:goto L635a26;
case 0x635a27:c.instructions+=4;goto B635a27;
case 0x635a2b:c.instructions+=3;goto B635a2b;
case 0x635a30:c.instructions+=2;goto B635a30;
case 0x635a31:c.instructions+=1;goto B635a31;
case 0x635a36:goto L635a36;
case 0x635a3a:c.instructions+=2;goto B635a3a;
case 0x635a3b:c.instructions+=1;goto B635a3b;
case 0x635a40:goto L635a40;
case 0x635a44:c.instructions+=3;goto B635a44;
case 0x635a47:c.instructions+=2;goto B635a47;
case 0x635a48:c.instructions+=1;goto B635a48;
case 0x635a4d:goto L635a4d;
case 0x635a4e:c.instructions+=5;goto B635a4e;
case 0x635a52:c.instructions+=4;goto B635a52;
case 0x635a57:c.instructions+=3;goto B635a57;
case 0x635a58:c.instructions+=2;goto B635a58;
case 0x635a5a:c.instructions+=1;goto B635a5a;
case 0x635a5f:goto L635a5f;
case 0x635a63:c.instructions+=2;goto B635a63;
case 0x635a64:c.instructions+=1;goto B635a64;
case 0x635a69:goto L635a69;
case 0x635a6d:c.instructions+=3;goto B635a6d;
case 0x635a70:c.instructions+=2;goto B635a70;
case 0x635a71:c.instructions+=1;goto B635a71;
case 0x635a76:goto L635a76;
case 0x635a78:c.instructions+=1;goto B635a78;
case 0x635a7a:goto L635a7a;
case 0x635a7c:c.instructions+=1;goto B635a7c;
case 0x635a7e:goto L635a7e;
case 0x635a82:c.instructions+=5;goto B635a82;
case 0x635a83:c.instructions+=4;goto B635a83;
case 0x635a86:c.instructions+=3;goto B635a86;
case 0x635a88:c.instructions+=2;goto B635a88;
case 0x635a8c:c.instructions+=1;goto B635a8c;
case 0x635a8f:goto L635a8f;
case 0x635a93:c.instructions+=3;goto B635a93;
case 0x635a94:c.instructions+=2;goto B635a94;
case 0x635a96:c.instructions+=1;goto B635a96;
case 0x635a98:goto L635a98;
case 0x635a9c:c.instructions+=1;goto B635a9c;
case 0x635a9e:goto L635a9e;
case 0x635aa2:c.instructions+=6;goto B635aa2;
case 0x635aa5:c.instructions+=5;goto B635aa5;
case 0x635aab:c.instructions+=4;goto B635aab;
case 0x635ab1:c.instructions+=3;goto B635ab1;
case 0x635ab3:c.instructions+=2;goto B635ab3;
case 0x635ab7:c.instructions+=1;goto B635ab7;
case 0x635abd:goto L635abd;
case 0x635ac0:c.instructions+=3;goto B635ac0;
case 0x635ac2:c.instructions+=2;goto B635ac2;
case 0x635ac6:c.instructions+=1;goto B635ac6;
case 0x635acc:goto L635acc;
case 0x635ad0:c.instructions+=3;goto B635ad0;
case 0x635ad2:c.instructions+=2;goto B635ad2;
case 0x635ad8:c.instructions+=1;goto B635ad8;
case 0x635ae0:goto L635ae0;
case 0x635ae1:c.instructions+=4;goto B635ae1;
case 0x635ae8:c.instructions+=3;goto B635ae8;
case 0x635aed:c.instructions+=2;goto B635aed;
case 0x635aee:c.instructions+=1;goto B635aee;
case 0x635af3:goto L635af3;
case 0x635afa:c.instructions+=2;goto B635afa;
case 0x635afb:c.instructions+=1;goto B635afb;
case 0x635b00:goto L635b00;
case 0x635b04:c.instructions+=3;goto B635b04;
case 0x635b07:c.instructions+=2;goto B635b07;
case 0x635b08:c.instructions+=1;goto B635b08;
case 0x635b0d:goto L635b0d;
case 0x635b0e:c.instructions+=5;goto B635b0e;
case 0x635b15:c.instructions+=4;goto B635b15;
case 0x635b1a:c.instructions+=3;goto B635b1a;
case 0x635b1b:c.instructions+=2;goto B635b1b;
case 0x635b1d:c.instructions+=1;goto B635b1d;
case 0x635b22:goto L635b22;
case 0x635b29:c.instructions+=2;goto B635b29;
case 0x635b2a:c.instructions+=1;goto B635b2a;
case 0x635b2f:goto L635b2f;
case 0x635b33:c.instructions+=3;goto B635b33;
case 0x635b36:c.instructions+=2;goto B635b36;
case 0x635b37:c.instructions+=1;goto B635b37;
case 0x635b3c:goto L635b3c;
case 0x635b3e:c.instructions+=1;goto B635b3e;
case 0x635b40:goto L635b40;
case 0x635b42:c.instructions+=1;goto B635b42;
case 0x635b44:goto L635b44;
case 0x635b48:c.instructions+=5;goto B635b48;
case 0x635b49:c.instructions+=4;goto B635b49;
case 0x635b4c:c.instructions+=3;goto B635b4c;
case 0x635b4e:c.instructions+=2;goto B635b4e;
case 0x635b52:c.instructions+=1;goto B635b52;
case 0x635b55:goto L635b55;
case 0x635b56:c.instructions+=2;goto B635b56;
case 0x635b59:c.instructions+=1;goto B635b59;
case 0x635b5b:goto L635b5b;
case 0x635b5f:c.instructions+=12;goto B635b5f;
case 0x635b63:c.instructions+=11;goto B635b63;
case 0x635b66:c.instructions+=10;goto B635b66;
case 0x635b6c:c.instructions+=9;goto B635b6c;
case 0x635b6f:c.instructions+=8;goto B635b6f;
case 0x635b75:c.instructions+=7;goto B635b75;
case 0x635b76:c.instructions+=6;goto B635b76;
case 0x635b7c:c.instructions+=5;goto B635b7c;
case 0x635b82:c.instructions+=4;goto B635b82;
case 0x635b83:c.instructions+=3;goto B635b83;
case 0x635b84:c.instructions+=2;goto B635b84;
case 0x635b86:c.instructions+=1;goto B635b86;
case 0x635b8b:goto L635b8b;
case 0x635b8e:c.instructions+=8;goto B635b8e;
case 0x635b94:c.instructions+=7;goto B635b94;
case 0x635b95:c.instructions+=6;goto B635b95;
case 0x635b9b:c.instructions+=5;goto B635b9b;
case 0x635ba1:c.instructions+=4;goto B635ba1;
case 0x635ba2:c.instructions+=3;goto B635ba2;
case 0x635ba3:c.instructions+=2;goto B635ba3;
case 0x635ba5:c.instructions+=1;goto B635ba5;
case 0x635baa:goto L635baa;
case 0x635bad:c.instructions+=8;goto B635bad;
case 0x635bb3:c.instructions+=7;goto B635bb3;
case 0x635bb4:c.instructions+=6;goto B635bb4;
case 0x635bba:c.instructions+=5;goto B635bba;
case 0x635bc0:c.instructions+=4;goto B635bc0;
case 0x635bc1:c.instructions+=3;goto B635bc1;
case 0x635bc2:c.instructions+=2;goto B635bc2;
case 0x635bc4:c.instructions+=1;goto B635bc4;
case 0x635bc9:goto L635bc9;
case 0x635bcc:c.instructions+=8;goto B635bcc;
case 0x635bd2:c.instructions+=7;goto B635bd2;
case 0x635bd3:c.instructions+=6;goto B635bd3;
case 0x635bd9:c.instructions+=5;goto B635bd9;
case 0x635bdf:c.instructions+=4;goto B635bdf;
case 0x635be0:c.instructions+=3;goto B635be0;
case 0x635be1:c.instructions+=2;goto B635be1;
case 0x635be3:c.instructions+=1;goto B635be3;
case 0x635be8:goto L635be8;
case 0x635beb:c.instructions+=4;goto B635beb;
case 0x635bf1:c.instructions+=3;goto B635bf1;
case 0x635bf3:c.instructions+=2;goto B635bf3;
case 0x635bf7:c.instructions+=1;goto B635bf7;
case 0x635bfd:goto L635bfd;
case 0x635c02:c.instructions+=1;goto B635c02;
case 0x635c07:goto L635c07;
case 0x635c0b:c.instructions+=4;goto B635c0b;
case 0x635c0e:c.instructions+=3;goto B635c0e;
case 0x635c13:c.instructions+=2;goto B635c13;
case 0x635c17:c.instructions+=1;goto B635c17;
case 0x635c19:goto L635c19;
case 0x635c1f:c.instructions+=7;goto B635c1f;
case 0x635c22:c.instructions+=6;goto B635c22;
case 0x635c25:c.instructions+=5;goto B635c25;
case 0x635c28:c.instructions+=4;goto B635c28;
case 0x635c2b:c.instructions+=3;goto B635c2b;
case 0x635c2d:c.instructions+=2;goto B635c2d;
case 0x635c2f:c.instructions+=1;goto B635c2f;
case 0x635c31:goto L635c31;
case 0x635c34:c.instructions+=3;goto B635c34;
case 0x635c38:c.instructions+=2;goto B635c38;
case 0x635c3b:c.instructions+=1;goto B635c3b;
case 0x635c40:goto L635c40;
case 0x635c43:c.instructions+=5;goto B635c43;
case 0x635c47:c.instructions+=4;goto B635c47;
case 0x635c4a:c.instructions+=3;goto B635c4a;
case 0x635c4e:c.instructions+=2;goto B635c4e;
case 0x635c50:c.instructions+=1;goto B635c50;
case 0x635c56:goto L635c56;
case 0x635c58:c.instructions+=1;goto B635c58;
case 0x635c5e:goto L635c5e;
case 0x635c5f:c.instructions+=3;goto B635c5f;
case 0x635c62:c.instructions+=2;goto B635c62;
case 0x635c64:c.instructions+=1;goto B635c64;
case 0x635c66:goto L635c66;
case 0x635c6e:goto L635c6e;
case 0x635c73:c.instructions+=1;goto B635c73;
case 0x635c78:goto L635c78;
case 0x635c7c:c.instructions+=5;goto B635c7c;
case 0x635c80:c.instructions+=4;goto B635c80;
case 0x635c83:c.instructions+=3;goto B635c83;
case 0x635c88:c.instructions+=2;goto B635c88;
case 0x635c8c:c.instructions+=1;goto B635c8c;
case 0x635c8e:goto L635c8e;
case 0x635c94:c.instructions+=7;goto B635c94;
case 0x635c97:c.instructions+=6;goto B635c97;
case 0x635c9a:c.instructions+=5;goto B635c9a;
case 0x635c9d:c.instructions+=4;goto B635c9d;
case 0x635ca0:c.instructions+=3;goto B635ca0;
case 0x635ca2:c.instructions+=2;goto B635ca2;
case 0x635ca4:c.instructions+=1;goto B635ca4;
case 0x635ca6:goto L635ca6;
case 0x635ca9:c.instructions+=2;goto B635ca9;
case 0x635cad:c.instructions+=1;goto B635cad;
case 0x635cb0:goto L635cb0;
case 0x635cb3:c.instructions+=5;goto B635cb3;
case 0x635cb7:c.instructions+=4;goto B635cb7;
case 0x635cba:c.instructions+=3;goto B635cba;
case 0x635cbe:c.instructions+=2;goto B635cbe;
case 0x635cc0:c.instructions+=1;goto B635cc0;
case 0x635cc6:goto L635cc6;
case 0x635cc8:c.instructions+=1;goto B635cc8;
case 0x635cce:goto L635cce;
case 0x635ccf:c.instructions+=3;goto B635ccf;
case 0x635cd2:c.instructions+=2;goto B635cd2;
case 0x635cd4:c.instructions+=1;goto B635cd4;
case 0x635cd6:goto L635cd6;
case 0x635cde:goto L635cde;
case 0x635ce3:c.instructions+=1;goto B635ce3;
case 0x635ce8:goto L635ce8;
case 0x635cec:c.instructions+=5;goto B635cec;
case 0x635cf0:c.instructions+=4;goto B635cf0;
case 0x635cf3:c.instructions+=3;goto B635cf3;
case 0x635cf8:c.instructions+=2;goto B635cf8;
case 0x635cfc:c.instructions+=1;goto B635cfc;
case 0x635cfe:goto L635cfe;
case 0x635d04:c.instructions+=7;goto B635d04;
case 0x635d07:c.instructions+=6;goto B635d07;
case 0x635d0a:c.instructions+=5;goto B635d0a;
case 0x635d0d:c.instructions+=4;goto B635d0d;
case 0x635d10:c.instructions+=3;goto B635d10;
case 0x635d12:c.instructions+=2;goto B635d12;
case 0x635d14:c.instructions+=1;goto B635d14;
case 0x635d16:goto L635d16;
case 0x635d19:c.instructions+=2;goto B635d19;
case 0x635d1d:c.instructions+=1;goto B635d1d;
case 0x635d20:goto L635d20;
case 0x635d23:c.instructions+=5;goto B635d23;
case 0x635d27:c.instructions+=4;goto B635d27;
case 0x635d2a:c.instructions+=3;goto B635d2a;
case 0x635d2e:c.instructions+=2;goto B635d2e;
case 0x635d30:c.instructions+=1;goto B635d30;
case 0x635d32:goto L635d32;
case 0x635d34:c.instructions+=1;goto B635d34;
case 0x635d36:goto L635d36;
case 0x635d37:c.instructions+=3;goto B635d37;
case 0x635d3a:c.instructions+=2;goto B635d3a;
case 0x635d3c:c.instructions+=1;goto B635d3c;
case 0x635d3e:goto L635d3e;
case 0x635d40:goto L635d40;
case 0x635d44:c.instructions+=7;goto B635d44;
case 0x635d48:c.instructions+=6;goto B635d48;
case 0x635d4b:c.instructions+=5;goto B635d4b;
case 0x635d4d:c.instructions+=4;goto B635d4d;
case 0x635d50:c.instructions+=3;goto B635d50;
case 0x635d52:c.instructions+=2;goto B635d52;
case 0x635d58:c.instructions+=1;goto B635d58;
case 0x635d5a:goto L635d5a;
case 0x635d5c:c.instructions+=1;goto B635d5c;
case 0x635d62:goto L635d62;
case 0x635d65:c.instructions+=2;goto B635d65;
case 0x635d69:c.instructions+=1;goto B635d69;
case 0x635d6e:goto L635d6e;
case 0x635d70:c.instructions+=1;goto B635d70;
case 0x635d76:goto L635d76;
case 0x635d79:c.instructions+=2;goto B635d79;
case 0x635d7d:c.instructions+=1;goto B635d7d;
case 0x635d82:goto L635d82;
case 0x635d84:c.instructions+=1;goto B635d84;
case 0x635d86:goto L635d86;
case 0x635d89:c.instructions+=1;goto B635d89;
case 0x635d8b:goto L635d8b;
case 0x635d95:goto L635d95;
case 0x635d9b:c.instructions+=3;goto B635d9b;
case 0x635da0:c.instructions+=2;goto B635da0;
case 0x635da2:c.instructions+=1;goto B635da2;
case 0x635da4:goto L635da4;
case 0x635da6:c.instructions+=2;goto B635da6;
case 0x635da8:c.instructions+=1;goto B635da8;
case 0x635dae:goto L635dae;
case 0x635db1:c.instructions+=2;goto B635db1;
case 0x635db4:c.instructions+=1;goto B635db4;
case 0x635dba:goto L635dba;
case 0x635dbe:goto L635dbe;
case 0x635dc4:c.instructions+=4;goto B635dc4;
case 0x635dca:c.instructions+=3;goto B635dca;
case 0x635dcc:c.instructions+=2;goto B635dcc;
case 0x635dd0:c.instructions+=1;goto B635dd0;
case 0x635dd2:goto L635dd2;
case 0x635dd4:c.instructions+=4;goto B635dd4;
case 0x635dd7:c.instructions+=3;goto B635dd7;
case 0x635dd9:c.instructions+=2;goto B635dd9;
case 0x635ddb:c.instructions+=1;goto B635ddb;
case 0x635ddd:goto L635ddd;
case 0x635de0:goto L635de0;
case 0x635de1:c.instructions+=3;goto B635de1;
case 0x635de6:c.instructions+=2;goto B635de6;
case 0x635de7:c.instructions+=1;goto B635de7;
case 0x635dec:goto L635dec;
case 0x635dee:c.instructions+=3;goto B635dee;
case 0x635df1:c.instructions+=2;goto B635df1;
case 0x635df3:c.instructions+=1;goto B635df3;
case 0x635df5:goto L635df5;
case 0x635dfb:c.instructions+=3;goto B635dfb;
case 0x635e01:c.instructions+=2;goto B635e01;
case 0x635e03:c.instructions+=1;goto B635e03;
case 0x635e05:goto L635e05;
case 0x635e07:c.instructions+=4;goto B635e07;
case 0x635e09:c.instructions+=3;goto B635e09;
case 0x635e0b:c.instructions+=2;goto B635e0b;
case 0x635e0e:c.instructions+=1;goto B635e0e;
case 0x635e10:goto L635e10;
case 0x635e13:goto L635e13;
case 0x635e19:c.instructions+=3;goto B635e19;
case 0x635e1a:c.instructions+=2;goto B635e1a;
case 0x635e1b:c.instructions+=1;goto B635e1b;
case 0x635e20:goto L635e20;
case 0x635e22:c.instructions+=3;goto B635e22;
case 0x635e25:c.instructions+=2;goto B635e25;
case 0x635e27:c.instructions+=1;goto B635e27;
case 0x635e29:goto L635e29;
case 0x635e2c:c.instructions+=4;goto B635e2c;
case 0x635e32:c.instructions+=3;goto B635e32;
case 0x635e34:c.instructions+=2;goto B635e34;
case 0x635e38:c.instructions+=1;goto B635e38;
case 0x635e3e:goto L635e3e;
case 0x635e42:c.instructions+=4;goto B635e42;
case 0x635e48:c.instructions+=3;goto B635e48;
case 0x635e49:c.instructions+=2;goto B635e49;
case 0x635e4f:c.instructions+=1;goto B635e4f;
case 0x635e54:goto L635e54;
case 0x635e55:c.instructions+=1;goto B635e55;
case 0x635e5a:goto L635e5a;
case 0x635e5f:c.instructions+=1;goto B635e5f;
case 0x635e64:goto L635e64;
case 0x635e68:c.instructions+=4;goto B635e68;
case 0x635e6c:c.instructions+=3;goto B635e6c;
case 0x635e6f:c.instructions+=2;goto B635e6f;
case 0x635e74:c.instructions+=1;goto B635e74;
case 0x635e76:goto L635e76;
case 0x635e7c:c.instructions+=7;goto B635e7c;
case 0x635e7f:c.instructions+=6;goto B635e7f;
case 0x635e82:c.instructions+=5;goto B635e82;
case 0x635e86:c.instructions+=4;goto B635e86;
case 0x635e89:c.instructions+=3;goto B635e89;
case 0x635e8b:c.instructions+=2;goto B635e8b;
case 0x635e8d:c.instructions+=1;goto B635e8d;
case 0x635e8f:goto L635e8f;
case 0x635e92:c.instructions+=1;goto B635e92;
case 0x635e95:goto L635e95;
case 0x635e97:c.instructions+=3;goto B635e97;
case 0x635e9a:c.instructions+=2;goto B635e9a;
case 0x635e9d:c.instructions+=1;goto B635e9d;
case 0x635ea3:goto L635ea3;
case 0x635ea5:c.instructions+=1;goto B635ea5;
case 0x635eab:goto L635eab;
case 0x635eac:c.instructions+=3;goto B635eac;
case 0x635eaf:c.instructions+=2;goto B635eaf;
case 0x635eb1:c.instructions+=1;goto B635eb1;
case 0x635eb3:goto L635eb3;
case 0x635ebb:goto L635ebb;
case 0x635ec0:c.instructions+=1;goto B635ec0;
case 0x635ec5:goto L635ec5;
case 0x635ec9:c.instructions+=5;goto B635ec9;
case 0x635ecd:c.instructions+=4;goto B635ecd;
case 0x635ed0:c.instructions+=3;goto B635ed0;
case 0x635ed5:c.instructions+=2;goto B635ed5;
case 0x635ed7:c.instructions+=1;goto B635ed7;
case 0x635ed9:goto L635ed9;
case 0x635edf:c.instructions+=7;goto B635edf;
case 0x635ee2:c.instructions+=6;goto B635ee2;
case 0x635ee5:c.instructions+=5;goto B635ee5;
case 0x635ee8:c.instructions+=4;goto B635ee8;
case 0x635eeb:c.instructions+=3;goto B635eeb;
case 0x635eed:c.instructions+=2;goto B635eed;
case 0x635eef:c.instructions+=1;goto B635eef;
case 0x635ef1:goto L635ef1;
case 0x635ef4:c.instructions+=1;goto B635ef4;
case 0x635ef7:goto L635ef7;
case 0x635ef9:c.instructions+=3;goto B635ef9;
case 0x635efc:c.instructions+=2;goto B635efc;
case 0x635eff:c.instructions+=1;goto B635eff;
case 0x635f01:goto L635f01;
case 0x635f03:c.instructions+=1;goto B635f03;
case 0x635f05:goto L635f05;
case 0x635f06:c.instructions+=3;goto B635f06;
case 0x635f09:c.instructions+=2;goto B635f09;
case 0x635f0b:c.instructions+=1;goto B635f0b;
case 0x635f0d:goto L635f0d;
case 0x635f0f:goto L635f0f;
case 0x635f13:c.instructions+=4;goto B635f13;
case 0x635f15:c.instructions+=3;goto B635f15;
case 0x635f19:c.instructions+=2;goto B635f19;
case 0x635f1d:c.instructions+=1;goto B635f1d;
case 0x635f23:goto L635f23;
case 0x635f24:c.instructions+=3;goto B635f24;
case 0x635f2a:c.instructions+=2;goto B635f2a;
case 0x635f2b:c.instructions+=1;goto B635f2b;
case 0x635f30:goto L635f30;
case 0x635f36:c.instructions+=3;goto B635f36;
case 0x635f39:c.instructions+=2;goto B635f39;
case 0x635f3b:c.instructions+=1;goto B635f3b;
case 0x635f3d:goto L635f3d;
case 0x635f3f:c.instructions+=1;goto B635f3f;
case 0x635f40:goto L635f40;
case 0x635f46:c.instructions+=2;goto B635f46;
case 0x635f48:c.instructions+=1;goto B635f48;
case 0x635f4a:goto L635f4a;
case 0x635f4b:c.instructions+=2;goto B635f4b;
case 0x635f4e:c.instructions+=1;goto B635f4e;
case 0x635f50:goto L635f50;
case 0x635f52:goto L635f52;
case 0x635f54:c.instructions+=1;goto B635f54;
case 0x635f5a:goto L635f5a;
case 0x635f5d:c.instructions+=2;goto B635f5d;
case 0x635f61:c.instructions+=1;goto B635f61;
case 0x635f66:goto L635f66;
case 0x635f68:c.instructions+=1;goto B635f68;
case 0x635f6a:goto L635f6a;
case 0x635f6d:c.instructions+=1;goto B635f6d;
case 0x635f6f:goto L635f6f;
case 0x635f75:c.instructions+=1;goto B635f75;
case 0x635f7c:goto L635f7c;
case 0x635f82:c.instructions+=2;goto B635f82;
case 0x635f84:c.instructions+=1;goto B635f84;
case 0x635f8a:goto L635f8a;
case 0x635f8f:c.instructions+=1;goto B635f8f;
case 0x635f94:goto L635f94;
case 0x635f96:c.instructions+=5;goto B635f96;
case 0x635f9a:c.instructions+=4;goto B635f9a;
case 0x635f9e:c.instructions+=3;goto B635f9e;
case 0x635fa1:c.instructions+=2;goto B635fa1;
case 0x635fa6:c.instructions+=1;goto B635fa6;
case 0x635fa8:goto L635fa8;
case 0x635fae:c.instructions+=7;goto B635fae;
case 0x635fb1:c.instructions+=6;goto B635fb1;
case 0x635fb4:c.instructions+=5;goto B635fb4;
case 0x635fb7:c.instructions+=4;goto B635fb7;
case 0x635fba:c.instructions+=3;goto B635fba;
case 0x635fbc:c.instructions+=2;goto B635fbc;
case 0x635fbe:c.instructions+=1;goto B635fbe;
case 0x635fc0:goto L635fc0;
case 0x635fc3:c.instructions+=1;goto B635fc3;
case 0x635fc6:goto L635fc6;
case 0x635fc8:c.instructions+=3;goto B635fc8;
case 0x635fcb:c.instructions+=2;goto B635fcb;
case 0x635fce:c.instructions+=1;goto B635fce;
case 0x635fd4:goto L635fd4;
case 0x635fd6:c.instructions+=1;goto B635fd6;
case 0x635fdc:goto L635fdc;
case 0x635fdd:c.instructions+=3;goto B635fdd;
case 0x635fe0:c.instructions+=2;goto B635fe0;
case 0x635fe2:c.instructions+=1;goto B635fe2;
case 0x635fe4:goto L635fe4;
case 0x635fec:c.instructions+=2;goto B635fec;
case 0x635ff1:c.instructions+=1;goto B635ff1;
case 0x635ff6:goto L635ff6;
case 0x635ffa:c.instructions+=2;goto B635ffa;
case 0x635ffe:c.instructions+=1;goto B635ffe;
default:missing_instruction(c.pc);}
B635000:L635000:{c.instructions+=2;NFSU2_TR(0x635000);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635001:{NFSU2_TR(0x635001);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635006ull));
TAIL_STATIC(0x43db80u,43d);
}
B635006:L635006:{c.instructions+=3;NFSU2_TR(0x635006);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B635009:{NFSU2_TR(0x635009);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63500a:{NFSU2_TR(0x63500a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63500full));
TAIL_STATIC(0x4908e0u,490);
}
B63500f:L63500f:{c.instructions+=5;NFSU2_TR(0x63500f);
__builtin_memmove((R+24),(R+0),4);
}
B635011:{NFSU2_TR(0x635011);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B635013:{NFSU2_TR(0x635013);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B635016:{NFSU2_TR(0x635016);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B635018:{NFSU2_TR(0x635018);
if(r1(R+518)){{goto L635064;}}
}
B63501a:L63501a:{c.instructions+=3;NFSU2_TR(0x63501a);
u8 U[4];
w4(U+0,u32(0xc93b73fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63501f:{NFSU2_TR(0x63501f);
__builtin_memmove((R+4),(R+24),4);
}
B635021:{NFSU2_TR(0x635021);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635026ull));
TAIL_STATIC(0x488fa0u,488);
}
B635026:L635026:{c.instructions+=4;NFSU2_TR(0x635026);
u8 U[4];
w4(U+0,u32(0x90c81258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63502b:{NFSU2_TR(0x63502b);
__builtin_memmove((R+4),(R+24),4);
}
B63502d:{NFSU2_TR(0x63502d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2c04ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635033:{NFSU2_TR(0x635033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635038ull));
TAIL_STATIC(0x488fa0u,488);
}
B635038:L635038:{c.instructions+=4;NFSU2_TR(0x635038);
u8 U[4];
w4(U+0,u32(0x9b971511ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63503d:{NFSU2_TR(0x63503d);
__builtin_memmove((R+4),(R+24),4);
}
B63503f:{NFSU2_TR(0x63503f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2c08ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635045:{NFSU2_TR(0x635045);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63504aull));
TAIL_STATIC(0x488fa0u,488);
}
B63504a:L63504a:{c.instructions+=4;NFSU2_TR(0x63504a);
u8 U[4];
w4(U+0,u32(0xee87ec4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63504f:{NFSU2_TR(0x63504f);
__builtin_memmove((R+4),(R+24),4);
}
B635051:{NFSU2_TR(0x635051);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2c0cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635057:{NFSU2_TR(0x635057);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63505cull));
TAIL_STATIC(0x488fa0u,488);
}
B63505c:L63505c:{c.instructions+=2;NFSU2_TR(0x63505c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2c10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635062:{NFSU2_TR(0x635062);
{goto L635096;}
}
B635064:L635064:{c.instructions+=5;NFSU2_TR(0x635064);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2c04ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63506a:{NFSU2_TR(0x63506a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2c08ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635070:{NFSU2_TR(0x635070);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2c0cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635076:{NFSU2_TR(0x635076);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2c10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63507c:{NFSU2_TR(0x63507c);
{goto L635096;}
}
B63507e:L63507e:{c.instructions+=4;NFSU2_TR(0x63507e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2c04ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635084:{NFSU2_TR(0x635084);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2c08ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63508a:{NFSU2_TR(0x63508a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2c0cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635090:{NFSU2_TR(0x635090);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2c10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635096:L635096:{c.instructions+=3;NFSU2_TR(0x635096);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B635098:{NFSU2_TR(0x635098);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63509a:{NFSU2_TR(0x63509a);
if(r1(R+518)){{goto L6350cc;}}
}
B63509c:L63509c:{c.instructions+=3;NFSU2_TR(0x63509c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6350a2:{NFSU2_TR(0x6350a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6350a4:{NFSU2_TR(0x6350a4);
if(r1(R+518)){{goto L6350cc;}}
}
B6350a6:L6350a6:{c.instructions+=3;NFSU2_TR(0x6350a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2c0cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6350ac:{NFSU2_TR(0x6350ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6350ae:{NFSU2_TR(0x6350ae);
if(r1(R+518)){{goto L6350b9;}}
}
B6350b0:L6350b0:{c.instructions+=2;NFSU2_TR(0x6350b0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6350b3:{NFSU2_TR(0x6350b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6350b9:L6350b9:{c.instructions+=3;NFSU2_TR(0x6350b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2c10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6350bf:{NFSU2_TR(0x6350bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6350c1:{NFSU2_TR(0x6350c1);
if(r1(R+518)){{goto L6350cc;}}
}
B6350c3:L6350c3:{c.instructions+=2;NFSU2_TR(0x6350c3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6350c6:{NFSU2_TR(0x6350c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6350cc:L6350cc:{c.instructions+=7;NFSU2_TR(0x6350cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6350d0:{NFSU2_TR(0x6350d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6350d6:{NFSU2_TR(0x6350d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6350da:{NFSU2_TR(0x6350da);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6350de:{NFSU2_TR(0x6350de);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x8a4324ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6350e6:{NFSU2_TR(0x6350e6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2184ull))));
}
B6350ec:{NFSU2_TR(0x6350ec);
__builtin_memmove((R+16),(R+16),4);
}
B6350f0:L6350f0:{c.instructions+=3;NFSU2_TR(0x6350f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6350f4:{NFSU2_TR(0x6350f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6350f6:{NFSU2_TR(0x6350f6);
if(r1(R+518)){{goto L6351c2;}}
}
B6350fc:L6350fc:{c.instructions+=3;NFSU2_TR(0x6350fc);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B635100:{NFSU2_TR(0x635100);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B635104:{NFSU2_TR(0x635104);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63510d;}}
}
B635106:L635106:{c.instructions+=2;NFSU2_TR(0x635106);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B635108:{NFSU2_TR(0x635108);
{goto L6351a3;}
}
B63510d:L63510d:{c.instructions+=8;NFSU2_TR(0x63510d);
__builtin_memmove((R+28),gp(0x8a1cc8),4);
}
B635113:{NFSU2_TR(0x635113);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B635116:{NFSU2_TR(0x635116);
w4(R+0,u32(r2(R+0)));
}
B635119:{NFSU2_TR(0x635119);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B63511c:{NFSU2_TR(0x63511c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B63511f:{NFSU2_TR(0x63511f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B635122:{NFSU2_TR(0x635122);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B635124:{NFSU2_TR(0x635124);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63512d;}}
}
B635126:L635126:{c.instructions+=2;NFSU2_TR(0x635126);
w4(R+0,u32(0xffffffffull));
}
B63512b:{NFSU2_TR(0x63512b);
{goto L635149;}
}
B63512d:L63512d:{c.instructions+=2;NFSU2_TR(0x63512d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63512f:{NFSU2_TR(0x63512f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L635140;}}
}
B635131:L635131:{c.instructions+=4;NFSU2_TR(0x635131);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B635135:{NFSU2_TR(0x635135);
__builtin_memmove((R+4),gp(0x8a1cb8),4);
}
B63513b:{NFSU2_TR(0x63513b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B63513e:{NFSU2_TR(0x63513e);
{goto L635149;}
}
B635140:L635140:{c.instructions+=2;NFSU2_TR(0x635140);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635144:{NFSU2_TR(0x635144);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635149ull));
TAIL_STATIC(0x4fe110u,4fe);
}
B635149:L635149:{c.instructions+=3;NFSU2_TR(0x635149);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63514c:{NFSU2_TR(0x63514c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63514f:{NFSU2_TR(0x63514f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L635155;}}
}
B635151:L635151:{c.instructions+=2;NFSU2_TR(0x635151);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B635153:{NFSU2_TR(0x635153);
{goto L6351a3;}
}
B635155:L635155:{c.instructions+=2;NFSU2_TR(0x635155);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B635158:{NFSU2_TR(0x635158);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63515e;}}
}
B63515a:L63515a:{c.instructions+=2;NFSU2_TR(0x63515a);
__builtin_memmove((R+0),(R+4),4);
}
B63515c:{NFSU2_TR(0x63515c);
{goto L6351a3;}
}
B63515e:L63515e:{c.instructions+=6;NFSU2_TR(0x63515e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B635162:{NFSU2_TR(0x635162);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B635167:{NFSU2_TR(0x635167);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x5full));
s1(u32(r4(U+0)),r1(U+4));
}
B63516c:{NFSU2_TR(0x63516c);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x41ull));
s1(u32(r4(U+0)),r1(U+4));
}
B635171:{NFSU2_TR(0x635171);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B635176:{NFSU2_TR(0x635176);
if(r1(R+518)){{goto L63518b;}}
}
B635178:L635178:{c.instructions+=6;NFSU2_TR(0x635178);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635179:{NFSU2_TR(0x635179);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63517c:{NFSU2_TR(0x63517c);
w4(R+8,u32(r2(R+4)));
}
B63517f:{NFSU2_TR(0x63517f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B635182:{NFSU2_TR(0x635182);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635183:{NFSU2_TR(0x635183);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635188ull));
TAIL_STATIC(0x43db80u,43d);
}
B635188:L635188:{c.instructions+=1;NFSU2_TR(0x635188);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B63518b:L63518b:{c.instructions+=4;NFSU2_TR(0x63518b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63518e:{NFSU2_TR(0x63518e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63518f:{NFSU2_TR(0x63518f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635190:{NFSU2_TR(0x635190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635195ull));
TAIL_STATIC(0x43db80u,43d);
}
B635195:L635195:{c.instructions+=4;NFSU2_TR(0x635195);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635196:{NFSU2_TR(0x635196);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63519a:{NFSU2_TR(0x63519a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63519b:{NFSU2_TR(0x63519b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6351a0ull));
TAIL_STATIC(0x43db80u,43d);
}
B6351a0:L6351a0:{c.instructions+=1;NFSU2_TR(0x6351a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6351a3:L6351a3:{c.instructions+=2;NFSU2_TR(0x6351a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6351a4:{NFSU2_TR(0x6351a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6351a9ull));
TAIL_STATIC(0x4908e0u,490);
}
B6351a9:L6351a9:{c.instructions+=3;NFSU2_TR(0x6351a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6351ac:{NFSU2_TR(0x6351ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6351ae:{NFSU2_TR(0x6351ae);
if(r1(R+518)){{goto L6351c2;}}
}
B6351b0:L6351b0:{c.instructions+=5;NFSU2_TR(0x6351b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6351b4:{NFSU2_TR(0x6351b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6351b6:{NFSU2_TR(0x6351b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6351b7:{NFSU2_TR(0x6351b7);
__builtin_memmove((R+4),(R+0),4);
}
B6351b9:{NFSU2_TR(0x6351b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6351beull));
TAIL_STATIC(0x488fa0u,488);
}
B6351be:L6351be:{c.instructions+=2;NFSU2_TR(0x6351be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6351c0:{NFSU2_TR(0x6351c0);
{goto L6351c8;}
}
B6351c2:L6351c2:{c.instructions+=1;NFSU2_TR(0x6351c2);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B6351c8:L6351c8:{c.instructions+=6;NFSU2_TR(0x6351c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6351cc:{NFSU2_TR(0x6351cc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6351cf:{NFSU2_TR(0x6351cf);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6351d2:{NFSU2_TR(0x6351d2);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8a4354ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8a4354ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6351d7:{NFSU2_TR(0x6351d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6351db:{NFSU2_TR(0x6351db);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6350f0u);}goto L6350f0;}}
}
B6351e1:L6351e1:{c.instructions+=3;NFSU2_TR(0x6351e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6351e5:{NFSU2_TR(0x6351e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6351e7:{NFSU2_TR(0x6351e7);
if(r1(R+518)){{goto L635696;}}
}
B6351ed:L6351ed:{c.instructions+=4;NFSU2_TR(0x6351ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6351f1:{NFSU2_TR(0x6351f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6351f9:{NFSU2_TR(0x6351f9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x21b4ull))));
}
B6351fe:{NFSU2_TR(0x6351fe);
__builtin_memmove((R+28),(R+28),4);
}
B635200:L635200:{c.instructions+=5;NFSU2_TR(0x635200);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635204:{NFSU2_TR(0x635204);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
}
B635207:{NFSU2_TR(0x635207);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63520f:{NFSU2_TR(0x63520f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635213:{NFSU2_TR(0x635213);
__builtin_memmove((R+28),(R+0),4);
}
B635215:L635215:{c.instructions+=3;NFSU2_TR(0x635215);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B635219:{NFSU2_TR(0x635219);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B63521d:{NFSU2_TR(0x63521d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63522c;}}
}
B63521f:L63521f:{c.instructions+=2;NFSU2_TR(0x63521f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B635227:{NFSU2_TR(0x635227);
{goto L6352cf;}
}
B63522c:L63522c:{c.instructions+=8;NFSU2_TR(0x63522c);
w4(R+0,u32(r2(R+0)));
}
B63522f:{NFSU2_TR(0x63522f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B635232:{NFSU2_TR(0x635232);
__builtin_memmove((R+0),gp(0x8a1cc8),4);
}
B635237:{NFSU2_TR(0x635237);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63523a:{NFSU2_TR(0x63523a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B63523d:{NFSU2_TR(0x63523d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63523f:{NFSU2_TR(0x63523f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B635242:{NFSU2_TR(0x635242);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63524b;}}
}
B635244:L635244:{c.instructions+=2;NFSU2_TR(0x635244);
w4(R+0,u32(0xffffffffull));
}
B635249:{NFSU2_TR(0x635249);
{goto L635264;}
}
B63524b:L63524b:{c.instructions+=2;NFSU2_TR(0x63524b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63524d:{NFSU2_TR(0x63524d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63525d;}}
}
B63524f:L63524f:{c.instructions+=4;NFSU2_TR(0x63524f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B635253:{NFSU2_TR(0x635253);
__builtin_memmove((R+0),gp(0x8a1cb8),4);
}
B635258:{NFSU2_TR(0x635258);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B63525b:{NFSU2_TR(0x63525b);
{goto L635264;}
}
B63525d:L63525d:{c.instructions+=2;NFSU2_TR(0x63525d);
__builtin_memmove((R+4),(R+12),4);
}
B63525f:{NFSU2_TR(0x63525f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635264ull));
TAIL_STATIC(0x4fe110u,4fe);
}
B635264:L635264:{c.instructions+=4;NFSU2_TR(0x635264);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635268:{NFSU2_TR(0x635268);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B63526b:{NFSU2_TR(0x63526b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63526e:{NFSU2_TR(0x63526e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L635274;}}
}
B635270:L635270:{c.instructions+=2;NFSU2_TR(0x635270);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B635272:{NFSU2_TR(0x635272);
{goto L6352cb;}
}
B635274:L635274:{c.instructions+=2;NFSU2_TR(0x635274);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B635277:{NFSU2_TR(0x635277);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63527d;}}
}
B635279:L635279:{c.instructions+=2;NFSU2_TR(0x635279);
__builtin_memmove((R+0),(R+4),4);
}
B63527b:{NFSU2_TR(0x63527b);
{goto L6352cb;}
}
B63527d:L63527d:{c.instructions+=6;NFSU2_TR(0x63527d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B635281:{NFSU2_TR(0x635281);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B635286:{NFSU2_TR(0x635286);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x5full));
s1(u32(r4(U+0)),r1(U+4));
}
B63528b:{NFSU2_TR(0x63528b);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x42ull));
s1(u32(r4(U+0)),r1(U+4));
}
B635290:{NFSU2_TR(0x635290);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B635295:{NFSU2_TR(0x635295);
if(r1(R+518)){{goto L6352af;}}
}
B635297:L635297:{c.instructions+=7;NFSU2_TR(0x635297);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635298:{NFSU2_TR(0x635298);
__builtin_memmove((R+0),gp(0x8a1cc8),4);
}
B63529d:{NFSU2_TR(0x63529d);
w4(R+8,u32(r2(R+4)));
}
B6352a0:{NFSU2_TR(0x6352a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6352a3:{NFSU2_TR(0x6352a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6352a6:{NFSU2_TR(0x6352a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6352a7:{NFSU2_TR(0x6352a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6352acull));
TAIL_STATIC(0x43db80u,43d);
}
B6352ac:L6352ac:{c.instructions+=1;NFSU2_TR(0x6352ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6352af:L6352af:{c.instructions+=5;NFSU2_TR(0x6352af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6352b0:{NFSU2_TR(0x6352b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6352b4:{NFSU2_TR(0x6352b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6352b7:{NFSU2_TR(0x6352b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6352b8:{NFSU2_TR(0x6352b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6352bdull));
TAIL_STATIC(0x43db80u,43d);
}
B6352bd:L6352bd:{c.instructions+=4;NFSU2_TR(0x6352bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6352be:{NFSU2_TR(0x6352be);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6352c2:{NFSU2_TR(0x6352c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6352c3:{NFSU2_TR(0x6352c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6352c8ull));
TAIL_STATIC(0x43db80u,43d);
}
B6352c8:L6352c8:{c.instructions+=1;NFSU2_TR(0x6352c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6352cb:L6352cb:{c.instructions+=1;NFSU2_TR(0x6352cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6352cf:L6352cf:{c.instructions+=3;NFSU2_TR(0x6352cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6352d3:{NFSU2_TR(0x6352d3);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6352d7:{NFSU2_TR(0x6352d7);
if(r1(R+518)){{goto L6353bc;}}
}
B6352dd:L6352dd:{c.instructions+=8;NFSU2_TR(0x6352dd);
__builtin_memmove((R+4),gp(0x8a1cc8),4);
}
B6352e3:{NFSU2_TR(0x6352e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6352e6:{NFSU2_TR(0x6352e6);
w4(R+0,u32(r2(R+0)));
}
B6352e9:{NFSU2_TR(0x6352e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6352ec:{NFSU2_TR(0x6352ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6352ef:{NFSU2_TR(0x6352ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6352f2:{NFSU2_TR(0x6352f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6352f4:{NFSU2_TR(0x6352f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6352fd;}}
}
B6352f6:L6352f6:{c.instructions+=2;NFSU2_TR(0x6352f6);
w4(R+0,u32(0xffffffffull));
}
B6352fb:{NFSU2_TR(0x6352fb);
{goto L635317;}
}
B6352fd:L6352fd:{c.instructions+=2;NFSU2_TR(0x6352fd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6352ff:{NFSU2_TR(0x6352ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L635310;}}
}
B635301:L635301:{c.instructions+=4;NFSU2_TR(0x635301);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B635305:{NFSU2_TR(0x635305);
__builtin_memmove((R+4),gp(0x8a1cb8),4);
}
B63530b:{NFSU2_TR(0x63530b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B63530e:{NFSU2_TR(0x63530e);
{goto L635317;}
}
B635310:L635310:{c.instructions+=2;NFSU2_TR(0x635310);
__builtin_memmove((R+4),(R+12),4);
}
B635312:{NFSU2_TR(0x635312);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635317ull));
TAIL_STATIC(0x4fe110u,4fe);
}
B635317:L635317:{c.instructions+=4;NFSU2_TR(0x635317);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63531b:{NFSU2_TR(0x63531b);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B63531f:{NFSU2_TR(0x63531f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B635322:{NFSU2_TR(0x635322);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L635328;}}
}
B635324:L635324:{c.instructions+=2;NFSU2_TR(0x635324);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B635326:{NFSU2_TR(0x635326);
{goto L635388;}
}
B635328:L635328:{c.instructions+=2;NFSU2_TR(0x635328);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B63532b:{NFSU2_TR(0x63532b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L635331;}}
}
B63532d:L63532d:{c.instructions+=2;NFSU2_TR(0x63532d);
__builtin_memmove((R+24),(R+4),4);
}
B63532f:{NFSU2_TR(0x63532f);
{goto L635388;}
}
B635331:L635331:{c.instructions+=8;NFSU2_TR(0x635331);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B635335:{NFSU2_TR(0x635335);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x41ull))));
}
B635338:{NFSU2_TR(0x635338);
u8 U[5];
w4(U+0,u32(u32(u32(0x31ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B63533c:{NFSU2_TR(0x63533c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B635340:{NFSU2_TR(0x635340);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B635345:{NFSU2_TR(0x635345);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x5full));
s1(u32(r4(U+0)),r1(U+4));
}
B63534a:{NFSU2_TR(0x63534a);
u8 U[5];
w4(U+0,u32(u32(u32(0x32ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B63534f:{NFSU2_TR(0x63534f);
if(r1(R+518)){{goto L635369;}}
}
B635351:L635351:{c.instructions+=7;NFSU2_TR(0x635351);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635352:{NFSU2_TR(0x635352);
__builtin_memmove((R+0),gp(0x8a1cc8),4);
}
B635357:{NFSU2_TR(0x635357);
w4(R+8,u32(r2(R+4)));
}
B63535a:{NFSU2_TR(0x63535a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63535d:{NFSU2_TR(0x63535d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B635360:{NFSU2_TR(0x635360);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635361:{NFSU2_TR(0x635361);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635366ull));
TAIL_STATIC(0x43db80u,43d);
}
B635366:L635366:{c.instructions+=1;NFSU2_TR(0x635366);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B635369:L635369:{c.instructions+=5;NFSU2_TR(0x635369);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63536a:{NFSU2_TR(0x63536a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63536e:{NFSU2_TR(0x63536e);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B635372:{NFSU2_TR(0x635372);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635373:{NFSU2_TR(0x635373);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635378ull));
TAIL_STATIC(0x43db80u,43d);
}
B635378:L635378:{c.instructions+=4;NFSU2_TR(0x635378);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635379:{NFSU2_TR(0x635379);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63537d:{NFSU2_TR(0x63537d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63537e:{NFSU2_TR(0x63537e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635383ull));
TAIL_STATIC(0x43db80u,43d);
}
B635383:L635383:{c.instructions+=2;NFSU2_TR(0x635383);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B635386:{NFSU2_TR(0x635386);
__builtin_memmove((R+24),(R+0),4);
}
B635388:L635388:{c.instructions+=2;NFSU2_TR(0x635388);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63538a:{NFSU2_TR(0x63538a);
if(r1(R+518)){{goto L6353bc;}}
}
B63538c:L63538c:{c.instructions+=3;NFSU2_TR(0x63538c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63538f:{NFSU2_TR(0x63538f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635391:{NFSU2_TR(0x635391);
if(r1(R+518)){{goto L63539a;}}
}
B635393:L635393:{c.instructions+=2;NFSU2_TR(0x635393);
__builtin_memmove((R+4),(R+28),4);
}
B635395:{NFSU2_TR(0x635395);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63539aull));
TAIL_STATIC(0x4903b0u,490);
}
B63539a:L63539a:{c.instructions+=3;NFSU2_TR(0x63539a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63539b:{NFSU2_TR(0x63539b);
__builtin_memmove((R+4),(R+28),4);
}
B63539d:{NFSU2_TR(0x63539d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6353a2ull));
TAIL_STATIC(0x493600u,493);
}
B6353a2:L6353a2:{c.instructions+=3;NFSU2_TR(0x6353a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6353a5:{NFSU2_TR(0x6353a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6353a7:{NFSU2_TR(0x6353a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6353bc;}}
}
B6353a9:L6353a9:{c.instructions+=2;NFSU2_TR(0x6353a9);
__builtin_memmove((R+4),(R+28),4);
}
B6353ab:{NFSU2_TR(0x6353ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6353b0ull));
TAIL_STATIC(0x4903b0u,490);
}
B6353b0:L6353b0:{c.instructions+=4;NFSU2_TR(0x6353b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6353b4:{NFSU2_TR(0x6353b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6353b5:{NFSU2_TR(0x6353b5);
__builtin_memmove((R+4),(R+28),4);
}
B6353b7:{NFSU2_TR(0x6353b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6353bcull));
TAIL_STATIC(0x493600u,493);
}
B6353bc:L6353bc:{c.instructions+=2;NFSU2_TR(0x6353bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6353be:{NFSU2_TR(0x6353be);
if(r1(R+518)){{goto L6353d6;}}
}
B6353c0:L6353c0:{c.instructions+=7;NFSU2_TR(0x6353c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6353c4:{NFSU2_TR(0x6353c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6353c6:{NFSU2_TR(0x6353c6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x638ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x638ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x638ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6353cc:{NFSU2_TR(0x6353cc);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6353ce:{NFSU2_TR(0x6353ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6353cf:{NFSU2_TR(0x6353cf);
__builtin_memmove((R+4),(R+28),4);
}
B6353d1:{NFSU2_TR(0x6353d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6353d6ull));
TAIL_STATIC(0x488e20u,488);
}
B6353d6:L6353d6:{c.instructions+=9;NFSU2_TR(0x6353d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6353da:{NFSU2_TR(0x6353da);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6353de:{NFSU2_TR(0x6353de);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6353df:{NFSU2_TR(0x6353df);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6353e2:{NFSU2_TR(0x6353e2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x18ull))));
}
B6353e5:{NFSU2_TR(0x6353e5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6353e8:{NFSU2_TR(0x6353e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6353ec:{NFSU2_TR(0x6353ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6353f0:{NFSU2_TR(0x6353f0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635215u);}goto L635215;}}
}
B6353f6:L6353f6:{c.instructions+=6;NFSU2_TR(0x6353f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6353fa:{NFSU2_TR(0x6353fa);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6353fd:{NFSU2_TR(0x6353fd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x28ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B635400:{NFSU2_TR(0x635400);
__builtin_memmove((R+0),(R+28),4);
}
B635402:{NFSU2_TR(0x635402);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635406:{NFSU2_TR(0x635406);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635200u);}goto L635200;}}
}
B63540c:L63540c:{c.instructions+=8;NFSU2_TR(0x63540c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B635410:{NFSU2_TR(0x635410);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635414:{NFSU2_TR(0x635414);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2274ull))));
}
B63541a:{NFSU2_TR(0x63541a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x61cull))));
}
B63541f:{NFSU2_TR(0x63541f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635423:{NFSU2_TR(0x635423);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635427:{NFSU2_TR(0x635427);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B63542f:{NFSU2_TR(0x63542f);
}
B635430:L635430:{c.instructions+=5;NFSU2_TR(0x635430);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635434:{NFSU2_TR(0x635434);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B635436:{NFSU2_TR(0x635436);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635438:{NFSU2_TR(0x635438);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63543c:{NFSU2_TR(0x63543c);
if(r1(R+518)){{goto L63566e;}}
}
B635442:L635442:{c.instructions+=4;NFSU2_TR(0x635442);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635446:{NFSU2_TR(0x635446);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63544e:{NFSU2_TR(0x63544e);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B635456:{NFSU2_TR(0x635456);
{goto L635460;}
}
B635460:L635460:{c.instructions+=3;NFSU2_TR(0x635460);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B635468:{NFSU2_TR(0x635468);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63546c:{NFSU2_TR(0x63546c);
__builtin_memmove((R+16),(R+16),4);
}
B635470:L635470:{c.instructions+=4;NFSU2_TR(0x635470);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B635474:{NFSU2_TR(0x635474);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B635478:{NFSU2_TR(0x635478);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B63547c:{NFSU2_TR(0x63547c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63548b;}}
}
B63547e:L63547e:{c.instructions+=2;NFSU2_TR(0x63547e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B635486:{NFSU2_TR(0x635486);
{goto L63552b;}
}
B63548b:L63548b:{c.instructions+=8;NFSU2_TR(0x63548b);
w4(R+0,u32(r2(R+0)));
}
B63548e:{NFSU2_TR(0x63548e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B635491:{NFSU2_TR(0x635491);
__builtin_memmove((R+0),gp(0x8a1cc8),4);
}
B635496:{NFSU2_TR(0x635496);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635499:{NFSU2_TR(0x635499);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B63549c:{NFSU2_TR(0x63549c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63549e:{NFSU2_TR(0x63549e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6354a1:{NFSU2_TR(0x6354a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6354aa;}}
}
B6354a3:L6354a3:{c.instructions+=2;NFSU2_TR(0x6354a3);
w4(R+0,u32(0xffffffffull));
}
B6354a8:{NFSU2_TR(0x6354a8);
{goto L6354c3;}
}
B6354aa:L6354aa:{c.instructions+=2;NFSU2_TR(0x6354aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6354ac:{NFSU2_TR(0x6354ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6354bc;}}
}
B6354ae:L6354ae:{c.instructions+=4;NFSU2_TR(0x6354ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6354b2:{NFSU2_TR(0x6354b2);
__builtin_memmove((R+0),gp(0x8a1cb8),4);
}
B6354b7:{NFSU2_TR(0x6354b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6354ba:{NFSU2_TR(0x6354ba);
{goto L6354c3;}
}
B6354bc:L6354bc:{c.instructions+=2;NFSU2_TR(0x6354bc);
__builtin_memmove((R+4),(R+28),4);
}
B6354be:{NFSU2_TR(0x6354be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6354c3ull));
TAIL_STATIC(0x4fe110u,4fe);
}
B6354c3:L6354c3:{c.instructions+=4;NFSU2_TR(0x6354c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6354c7:{NFSU2_TR(0x6354c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6354ca:{NFSU2_TR(0x6354ca);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6354cd:{NFSU2_TR(0x6354cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6354d3;}}
}
B6354cf:L6354cf:{c.instructions+=2;NFSU2_TR(0x6354cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6354d1:{NFSU2_TR(0x6354d1);
{goto L635527;}
}
B6354d3:L6354d3:{c.instructions+=2;NFSU2_TR(0x6354d3);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6354d6:{NFSU2_TR(0x6354d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6354dc;}}
}
B6354d8:L6354d8:{c.instructions+=2;NFSU2_TR(0x6354d8);
__builtin_memmove((R+0),(R+4),4);
}
B6354da:{NFSU2_TR(0x6354da);
{goto L635527;}
}
B6354dc:L6354dc:{c.instructions+=6;NFSU2_TR(0x6354dc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6354e0:{NFSU2_TR(0x6354e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B6354e5:{NFSU2_TR(0x6354e5);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x5full));
s1(u32(r4(U+0)),r1(U+4));
}
B6354ea:{NFSU2_TR(0x6354ea);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x42ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6354ef:{NFSU2_TR(0x6354ef);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6354f4:{NFSU2_TR(0x6354f4);
if(r1(R+518)){{goto L63550f;}}
}
B6354f6:L6354f6:{c.instructions+=7;NFSU2_TR(0x6354f6);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B6354fc:{NFSU2_TR(0x6354fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6354fd:{NFSU2_TR(0x6354fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635500:{NFSU2_TR(0x635500);
w4(R+4,u32(r2(R+4)));
}
B635503:{NFSU2_TR(0x635503);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B635506:{NFSU2_TR(0x635506);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635507:{NFSU2_TR(0x635507);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63550cull));
TAIL_STATIC(0x43db80u,43d);
}
B63550c:L63550c:{c.instructions+=1;NFSU2_TR(0x63550c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B63550f:L63550f:{c.instructions+=4;NFSU2_TR(0x63550f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B635512:{NFSU2_TR(0x635512);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635513:{NFSU2_TR(0x635513);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635514:{NFSU2_TR(0x635514);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635519ull));
TAIL_STATIC(0x43db80u,43d);
}
B635519:L635519:{c.instructions+=4;NFSU2_TR(0x635519);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63551a:{NFSU2_TR(0x63551a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63551e:{NFSU2_TR(0x63551e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63551f:{NFSU2_TR(0x63551f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635524ull));
TAIL_STATIC(0x43db80u,43d);
}
B635524:L635524:{c.instructions+=1;NFSU2_TR(0x635524);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B635527:L635527:{c.instructions+=1;NFSU2_TR(0x635527);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63552b:L63552b:{c.instructions+=3;NFSU2_TR(0x63552b);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B63552f:{NFSU2_TR(0x63552f);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B635533:{NFSU2_TR(0x635533);
if(r1(R+518)){{goto L635617;}}
}
B635539:L635539:{c.instructions+=9;NFSU2_TR(0x635539);
__builtin_memmove((R+12),gp(0x8a1cc8),4);
}
B63553f:{NFSU2_TR(0x63553f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B635542:{NFSU2_TR(0x635542);
w4(R+0,u32(r2(R+0)));
}
B635545:{NFSU2_TR(0x635545);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B635548:{NFSU2_TR(0x635548);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B63554b:{NFSU2_TR(0x63554b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63554f:{NFSU2_TR(0x63554f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B635552:{NFSU2_TR(0x635552);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B635554:{NFSU2_TR(0x635554);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63555d;}}
}
B635556:L635556:{c.instructions+=2;NFSU2_TR(0x635556);
w4(R+0,u32(0xffffffffull));
}
B63555b:{NFSU2_TR(0x63555b);
{goto L635575;}
}
B63555d:L63555d:{c.instructions+=2;NFSU2_TR(0x63555d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63555f:{NFSU2_TR(0x63555f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L635570;}}
}
B635561:L635561:{c.instructions+=4;NFSU2_TR(0x635561);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B635565:{NFSU2_TR(0x635565);
__builtin_memmove((R+4),gp(0x8a1cb8),4);
}
B63556b:{NFSU2_TR(0x63556b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B63556e:{NFSU2_TR(0x63556e);
{goto L635575;}
}
B635570:L635570:{c.instructions+=1;NFSU2_TR(0x635570);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635575ull));
TAIL_STATIC(0x4fe110u,4fe);
}
B635575:L635575:{c.instructions+=7;NFSU2_TR(0x635575);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635579:{NFSU2_TR(0x635579);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63557d:{NFSU2_TR(0x63557d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B63557f:{NFSU2_TR(0x63557f);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B635583:{NFSU2_TR(0x635583);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B635585:{NFSU2_TR(0x635585);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B635588:{NFSU2_TR(0x635588);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63558e;}}
}
B63558a:L63558a:{c.instructions+=2;NFSU2_TR(0x63558a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B63558c:{NFSU2_TR(0x63558c);
{goto L6355df;}
}
B63558e:L63558e:{c.instructions+=2;NFSU2_TR(0x63558e);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B635591:{NFSU2_TR(0x635591);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L635597;}}
}
B635593:L635593:{c.instructions+=2;NFSU2_TR(0x635593);
__builtin_memmove((R+24),(R+4),4);
}
B635595:{NFSU2_TR(0x635595);
{goto L6355df;}
}
B635597:L635597:{c.instructions+=7;NFSU2_TR(0x635597);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B63559b:{NFSU2_TR(0x63559b);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x41ull))));
}
B63559e:{NFSU2_TR(0x63559e);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B6355a3:{NFSU2_TR(0x6355a3);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x5full));
s1(u32(r4(U+0)),r1(U+4));
}
B6355a8:{NFSU2_TR(0x6355a8);
u8 U[5];
w4(U+0,u32(u32(u32(0x31ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6355ac:{NFSU2_TR(0x6355ac);
u8 U[5];
w4(U+0,u32(u32(u32(0x32ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6355b1:{NFSU2_TR(0x6355b1);
if(r1(R+518)){{goto L6355c6;}}
}
B6355b3:L6355b3:{c.instructions+=6;NFSU2_TR(0x6355b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6355b4:{NFSU2_TR(0x6355b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6355b7:{NFSU2_TR(0x6355b7);
w4(R+8,u32(r2(R+4)));
}
B6355ba:{NFSU2_TR(0x6355ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6355bd:{NFSU2_TR(0x6355bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6355be:{NFSU2_TR(0x6355be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6355c3ull));
TAIL_STATIC(0x43db80u,43d);
}
B6355c3:L6355c3:{c.instructions+=1;NFSU2_TR(0x6355c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6355c6:L6355c6:{c.instructions+=4;NFSU2_TR(0x6355c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6355c8:{NFSU2_TR(0x6355c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6355c9:{NFSU2_TR(0x6355c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6355ca:{NFSU2_TR(0x6355ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6355cfull));
TAIL_STATIC(0x43db80u,43d);
}
B6355cf:L6355cf:{c.instructions+=4;NFSU2_TR(0x6355cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6355d0:{NFSU2_TR(0x6355d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6355d4:{NFSU2_TR(0x6355d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6355d5:{NFSU2_TR(0x6355d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6355daull));
TAIL_STATIC(0x43db80u,43d);
}
B6355da:L6355da:{c.instructions+=2;NFSU2_TR(0x6355da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6355dd:{NFSU2_TR(0x6355dd);
__builtin_memmove((R+24),(R+0),4);
}
B6355df:L6355df:{c.instructions+=2;NFSU2_TR(0x6355df);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6355e1:{NFSU2_TR(0x6355e1);
if(r1(R+518)){{goto L635617;}}
}
B6355e3:L6355e3:{c.instructions+=5;NFSU2_TR(0x6355e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6355e7:{NFSU2_TR(0x6355e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6355ea:{NFSU2_TR(0x6355ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6355ec:{NFSU2_TR(0x6355ec);
__builtin_memmove((R+28),(R+4),4);
}
B6355ee:{NFSU2_TR(0x6355ee);
if(r1(R+518)){{goto L6355f5;}}
}
B6355f0:L6355f0:{c.instructions+=1;NFSU2_TR(0x6355f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6355f5ull));
TAIL_STATIC(0x4903b0u,490);
}
B6355f5:L6355f5:{c.instructions+=3;NFSU2_TR(0x6355f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6355f6:{NFSU2_TR(0x6355f6);
__builtin_memmove((R+4),(R+28),4);
}
B6355f8:{NFSU2_TR(0x6355f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6355fdull));
TAIL_STATIC(0x493600u,493);
}
B6355fd:L6355fd:{c.instructions+=3;NFSU2_TR(0x6355fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635600:{NFSU2_TR(0x635600);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635602:{NFSU2_TR(0x635602);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L635617;}}
}
B635604:L635604:{c.instructions+=2;NFSU2_TR(0x635604);
__builtin_memmove((R+4),(R+28),4);
}
B635606:{NFSU2_TR(0x635606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63560bull));
TAIL_STATIC(0x4903b0u,490);
}
B63560b:L63560b:{c.instructions+=4;NFSU2_TR(0x63560b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63560f:{NFSU2_TR(0x63560f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635610:{NFSU2_TR(0x635610);
__builtin_memmove((R+4),(R+28),4);
}
B635612:{NFSU2_TR(0x635612);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635617ull));
TAIL_STATIC(0x493600u,493);
}
B635617:L635617:{c.instructions+=3;NFSU2_TR(0x635617);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63561b:{NFSU2_TR(0x63561b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63561d:{NFSU2_TR(0x63561d);
if(r1(R+518)){{goto L635634;}}
}
B63561f:L63561f:{c.instructions+=7;NFSU2_TR(0x63561f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635623:{NFSU2_TR(0x635623);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635625:{NFSU2_TR(0x635625);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635627:{NFSU2_TR(0x635627);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x638ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x638ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x638ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63562c:{NFSU2_TR(0x63562c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63562d:{NFSU2_TR(0x63562d);
__builtin_memmove((R+4),(R+24),4);
}
B63562f:{NFSU2_TR(0x63562f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635634ull));
TAIL_STATIC(0x488e20u,488);
}
B635634:L635634:{c.instructions+=7;NFSU2_TR(0x635634);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635638:{NFSU2_TR(0x635638);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B635639:{NFSU2_TR(0x635639);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B63563c:{NFSU2_TR(0x63563c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63563f:{NFSU2_TR(0x63563f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635643:{NFSU2_TR(0x635643);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635647:{NFSU2_TR(0x635647);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635470u);}goto L635470;}}
}
B63564d:L63564d:{c.instructions+=9;NFSU2_TR(0x63564d);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635651:{NFSU2_TR(0x635651);
__builtin_memmove((R+0),(R+24),4);
}
B635653:{NFSU2_TR(0x635653);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B635657:{NFSU2_TR(0x635657);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B63565a:{NFSU2_TR(0x63565a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B63565d:{NFSU2_TR(0x63565d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x28ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B635660:{NFSU2_TR(0x635660);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635664:{NFSU2_TR(0x635664);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635668:{NFSU2_TR(0x635668);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635460u);}goto L635460;}}
}
B63566e:L63566e:{c.instructions+=10;NFSU2_TR(0x63566e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B635672:{NFSU2_TR(0x635672);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635676:{NFSU2_TR(0x635676);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63567a:{NFSU2_TR(0x63567a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B63567d:{NFSU2_TR(0x63567d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
}
B635683:{NFSU2_TR(0x635683);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B635684:{NFSU2_TR(0x635684);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635688:{NFSU2_TR(0x635688);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63568c:{NFSU2_TR(0x63568c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635690:{NFSU2_TR(0x635690);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635430u);}goto L635430;}}
}
B635696:L635696:{c.instructions+=2;NFSU2_TR(0x635696);
u8 U[1];
w1(U+0,u8(u32(m1(0x8a4514))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63569d:{NFSU2_TR(0x63569d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L635719;}}
}
B63569f:L63569f:{c.instructions+=4;NFSU2_TR(0x63569f);
s4(0x8a4514,u32(u32(m4(0x8a4514))|u32(u32(0x1ull))));
}
B6356a6:{NFSU2_TR(0x6356a6);
u8 U[4];
w4(U+0,u32(0x7a8b30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6356ab:{NFSU2_TR(0x6356ab);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6356b6:{NFSU2_TR(0x6356b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6356bbull));
TAIL_STATIC(0x43db50u,43d);
}
B6356bb:L6356bb:{c.instructions+=3;NFSU2_TR(0x6356bb);
u8 U[4];
w4(U+0,u32(0x7a8b14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6356c0:{NFSU2_TR(0x6356c0);
__builtin_memmove(gp(0x8a44fc),(R+0),4);
}
B6356c5:{NFSU2_TR(0x6356c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6356caull));
TAIL_STATIC(0x43db50u,43d);
}
B6356ca:L6356ca:{c.instructions+=3;NFSU2_TR(0x6356ca);
u8 U[4];
w4(U+0,u32(0x7a8af8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6356cf:{NFSU2_TR(0x6356cf);
__builtin_memmove(gp(0x8a4500),(R+0),4);
}
B6356d4:{NFSU2_TR(0x6356d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6356d9ull));
TAIL_STATIC(0x43db50u,43d);
}
B6356d9:L6356d9:{c.instructions+=3;NFSU2_TR(0x6356d9);
u8 U[4];
w4(U+0,u32(0x7a8ad8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6356de:{NFSU2_TR(0x6356de);
__builtin_memmove(gp(0x8a4504),(R+0),4);
}
B6356e3:{NFSU2_TR(0x6356e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6356e8ull));
TAIL_STATIC(0x43db50u,43d);
}
B6356e8:L6356e8:{c.instructions+=3;NFSU2_TR(0x6356e8);
u8 U[4];
w4(U+0,u32(0x7a8ab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6356ed:{NFSU2_TR(0x6356ed);
__builtin_memmove(gp(0x8a4508),(R+0),4);
}
B6356f2:{NFSU2_TR(0x6356f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6356f7ull));
TAIL_STATIC(0x43db50u,43d);
}
B6356f7:L6356f7:{c.instructions+=3;NFSU2_TR(0x6356f7);
u8 U[4];
w4(U+0,u32(0x7a8a98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6356fc:{NFSU2_TR(0x6356fc);
__builtin_memmove(gp(0x8a450c),(R+0),4);
}
B635701:{NFSU2_TR(0x635701);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635706ull));
TAIL_STATIC(0x43db50u,43d);
}
B635706:L635706:{c.instructions+=3;NFSU2_TR(0x635706);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B635709:{NFSU2_TR(0x635709);
__builtin_memmove(gp(0x8a4510),(R+0),4);
}
B63570e:{NFSU2_TR(0x63570e);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B635719:L635719:{c.instructions+=4;NFSU2_TR(0x635719);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63571d:{NFSU2_TR(0x63571d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x8a44fcull));
s4(u32(r4(U+0)),r4(U+4));
}
B635725:{NFSU2_TR(0x635725);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2b74ull))));
}
B63572b:{NFSU2_TR(0x63572b);
{goto L635730;}
}
B635730:L635730:{c.instructions+=3;NFSU2_TR(0x635730);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B635734:{NFSU2_TR(0x635734);
w4(R+12,u32(0x2ull));
}
B635739:{NFSU2_TR(0x635739);
__builtin_memmove((R+16),(R+16),4);
}
B635740:L635740:{c.instructions+=4;NFSU2_TR(0x635740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B635742:{NFSU2_TR(0x635742);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635743:{NFSU2_TR(0x635743);
__builtin_memmove((R+4),(R+24),4);
}
B635745:{NFSU2_TR(0x635745);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63574aull));
TAIL_STATIC(0x493600u,493);
}
B63574a:L63574a:{c.instructions+=7;NFSU2_TR(0x63574a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63574e:{NFSU2_TR(0x63574e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635750:{NFSU2_TR(0x635750);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635752:{NFSU2_TR(0x635752);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x638ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x638ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x638ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B635757:{NFSU2_TR(0x635757);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635758:{NFSU2_TR(0x635758);
__builtin_memmove((R+4),(R+24),4);
}
B63575a:{NFSU2_TR(0x63575a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63575full));
TAIL_STATIC(0x488e20u,488);
}
B63575f:L63575f:{c.instructions+=4;NFSU2_TR(0x63575f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B635762:{NFSU2_TR(0x635762);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B635765:{NFSU2_TR(0x635765);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B635766:{NFSU2_TR(0x635766);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635740u);}goto L635740;}}
}
B635768:L635768:{c.instructions+=5;NFSU2_TR(0x635768);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63576c:{NFSU2_TR(0x63576c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B63576f:{NFSU2_TR(0x63576f);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8a4508ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8a4508ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B635774:{NFSU2_TR(0x635774);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635778:{NFSU2_TR(0x635778);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635730u);}goto L635730;}}
}
B63577a:L63577a:{c.instructions+=5;NFSU2_TR(0x63577a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63577e:{NFSU2_TR(0x63577e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B635784:{NFSU2_TR(0x635784);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B635786:{NFSU2_TR(0x635786);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B635788:{NFSU2_TR(0x635788);
if(r1(R+518)){{goto L635790;}}
}
B63578a:L63578a:{c.instructions+=1;NFSU2_TR(0x63578a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635790:L635790:{c.instructions+=10;NFSU2_TR(0x635790);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B635794:{NFSU2_TR(0x635794);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63579a:{NFSU2_TR(0x63579a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63579c:{NFSU2_TR(0x63579c);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6357a4:{NFSU2_TR(0x6357a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B6357ac:{NFSU2_TR(0x6357ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6357b4:{NFSU2_TR(0x6357b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x7a8c88ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6357bc:{NFSU2_TR(0x6357bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x7a8c78ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6357c4:{NFSU2_TR(0x6357c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x7a8c68ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6357cc:{NFSU2_TR(0x6357cc);
if(r1(R+518)){{goto L6357e9;}}
}
B6357ce:L6357ce:{c.instructions+=4;NFSU2_TR(0x6357ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6357d1:{NFSU2_TR(0x6357d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B6357d4:{NFSU2_TR(0x6357d4);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6357d6:{NFSU2_TR(0x6357d6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6357e9;}}
}
B6357d8:L6357d8:{c.instructions+=4;NFSU2_TR(0x6357d8);
w4(R+0,u32(0x6ull));
}
B6357dd:{NFSU2_TR(0x6357dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6357e1:{NFSU2_TR(0x6357e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6357e5:{NFSU2_TR(0x6357e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6357e9:L6357e9:{c.instructions+=2;NFSU2_TR(0x6357e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6357ed:{NFSU2_TR(0x6357ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6357f1:L6357f1:{c.instructions+=7;NFSU2_TR(0x6357f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6357f5:{NFSU2_TR(0x6357f5);
u8 U[16];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6357f9:{NFSU2_TR(0x6357f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6357fd:{NFSU2_TR(0x6357fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B635800:{NFSU2_TR(0x635800);
u8 U[16];
w4(U+0,u32(u32(u32(0x17a8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B635807:{NFSU2_TR(0x635807);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635809:{NFSU2_TR(0x635809);
if(r1(R+518)){{goto L6358d2;}}
}
B63580f:L63580f:{c.instructions+=4;NFSU2_TR(0x63580f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635812:{NFSU2_TR(0x635812);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635814:{NFSU2_TR(0x635814);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635818:{NFSU2_TR(0x635818);
if(r1(R+518)){{goto L6358d2;}}
}
B63581e:L63581e:{c.instructions+=6;NFSU2_TR(0x63581e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B635822:{NFSU2_TR(0x635822);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635826:{NFSU2_TR(0x635826);
u8 U[16];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B63582a:{NFSU2_TR(0x63582a);
u8 U[12];
w4(U+0,u32(u32(u32(0x2c1cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B635831:{NFSU2_TR(0x635831);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B635833:{NFSU2_TR(0x635833);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635837:L635837:{c.instructions+=5;NFSU2_TR(0x635837);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635838:{NFSU2_TR(0x635838);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63583c:{NFSU2_TR(0x63583c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63583d:{NFSU2_TR(0x63583d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63583e:{NFSU2_TR(0x63583e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635843ull));
TAIL_STATIC(0x4400d0u,440);
}
B635843:L635843:{c.instructions+=6;NFSU2_TR(0x635843);
u8 U[4];
w4(U+0,u32(0x7a14ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635848:{NFSU2_TR(0x635848);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63584c:{NFSU2_TR(0x63584c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63584d:{NFSU2_TR(0x63584d);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B635851:{NFSU2_TR(0x635851);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635852:{NFSU2_TR(0x635852);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635857ull));
TAIL_STATIC(0x43dda0u,43d);
}
B635857:L635857:{c.instructions+=3;NFSU2_TR(0x635857);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63585b:{NFSU2_TR(0x63585b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63585c:{NFSU2_TR(0x63585c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635861ull));
TAIL_STATIC(0x43db50u,43d);
}
B635861:L635861:{c.instructions+=4;NFSU2_TR(0x635861);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635865:{NFSU2_TR(0x635865);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B635868:{NFSU2_TR(0x635868);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635869:{NFSU2_TR(0x635869);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63586eull));
TAIL_STATIC(0x488fa0u,488);
}
B63586e:L63586e:{c.instructions+=6;NFSU2_TR(0x63586e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63586f:{NFSU2_TR(0x63586f);
__builtin_memmove((R+28),(R+0),4);
}
B635871:{NFSU2_TR(0x635871);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B635875:{NFSU2_TR(0x635875);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635876:{NFSU2_TR(0x635876);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635877:{NFSU2_TR(0x635877);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63587cull));
TAIL_STATIC(0x4400d0u,440);
}
B63587c:L63587c:{c.instructions+=6;NFSU2_TR(0x63587c);
u8 U[4];
w4(U+0,u32(0x7a51bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635881:{NFSU2_TR(0x635881);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B635885:{NFSU2_TR(0x635885);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635886:{NFSU2_TR(0x635886);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63588a:{NFSU2_TR(0x63588a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63588b:{NFSU2_TR(0x63588b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635890ull));
TAIL_STATIC(0x43dda0u,43d);
}
B635890:L635890:{c.instructions+=3;NFSU2_TR(0x635890);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B635894:{NFSU2_TR(0x635894);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635895:{NFSU2_TR(0x635895);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63589aull));
TAIL_STATIC(0x43db50u,43d);
}
B63589a:L63589a:{c.instructions+=4;NFSU2_TR(0x63589a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63589e:{NFSU2_TR(0x63589e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B6358a1:{NFSU2_TR(0x6358a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6358a2:{NFSU2_TR(0x6358a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6358a7ull));
TAIL_STATIC(0x488fa0u,488);
}
B6358a7:L6358a7:{c.instructions+=2;NFSU2_TR(0x6358a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6358a9:{NFSU2_TR(0x6358a9);
if(r1(R+518)){{goto L6358c8;}}
}
B6358ab:L6358ab:{c.instructions+=2;NFSU2_TR(0x6358ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6358ad:{NFSU2_TR(0x6358ad);
if(r1(R+518)){{goto L6358c8;}}
}
B6358af:L6358af:{c.instructions+=8;NFSU2_TR(0x6358af);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6358b3:{NFSU2_TR(0x6358b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6358b7:{NFSU2_TR(0x6358b7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6358b8:{NFSU2_TR(0x6358b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6358bb:{NFSU2_TR(0x6358bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6358bd:{NFSU2_TR(0x6358bd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B6358c0:{NFSU2_TR(0x6358c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6358c4:{NFSU2_TR(0x6358c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6358c8:L6358c8:{c.instructions+=3;NFSU2_TR(0x6358c8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6358c9:{NFSU2_TR(0x6358c9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6358cc:{NFSU2_TR(0x6358cc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635837u);}goto L635837;}}
}
B6358d2:L6358d2:{c.instructions+=5;NFSU2_TR(0x6358d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6358d6:{NFSU2_TR(0x6358d6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6358d9:{NFSU2_TR(0x6358d9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6358dc:{NFSU2_TR(0x6358dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6358e0:{NFSU2_TR(0x6358e0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6357f1u);}goto L6357f1;}}
}
B6358e6:L6358e6:{c.instructions+=8;NFSU2_TR(0x6358e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6358ea:{NFSU2_TR(0x6358ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6358ee:{NFSU2_TR(0x6358ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6358f1:{NFSU2_TR(0x6358f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6358f7:{NFSU2_TR(0x6358f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6358fd:{NFSU2_TR(0x6358fd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6358ff:{NFSU2_TR(0x6358ff);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B635901:{NFSU2_TR(0x635901);
if(r1(R+518)){{goto L635909;}}
}
B635903:L635903:{c.instructions+=1;NFSU2_TR(0x635903);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cf8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635909:L635909:{c.instructions+=4;NFSU2_TR(0x635909);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x21b4ull))));
}
B63590e:{NFSU2_TR(0x63590e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B635910:{NFSU2_TR(0x635910);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635914:{NFSU2_TR(0x635914);
if(r1(R+518)){{goto L6359a4;}}
}
B63591a:L63591a:{c.instructions+=4;NFSU2_TR(0x63591a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63591d:{NFSU2_TR(0x63591d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63591f:{NFSU2_TR(0x63591f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635923:{NFSU2_TR(0x635923);
if(r1(R+518)){{goto L6359a4;}}
}
B635929:L635929:{c.instructions+=3;NFSU2_TR(0x635929);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63592d:{NFSU2_TR(0x63592d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B63592f:{NFSU2_TR(0x63592f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2d00ull))));
}
B635935:L635935:{c.instructions+=5;NFSU2_TR(0x635935);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635936:{NFSU2_TR(0x635936);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63593a:{NFSU2_TR(0x63593a);
u8 U[4];
w4(U+0,u32(0x7a8c4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63593f:{NFSU2_TR(0x63593f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635940:{NFSU2_TR(0x635940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635945ull));
TAIL_STATIC(0x4400d0u,440);
}
B635945:L635945:{c.instructions+=3;NFSU2_TR(0x635945);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B635949:{NFSU2_TR(0x635949);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63594a:{NFSU2_TR(0x63594a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63594full));
TAIL_STATIC(0x43db50u,43d);
}
B63594f:L63594f:{c.instructions+=4;NFSU2_TR(0x63594f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635953:{NFSU2_TR(0x635953);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B635956:{NFSU2_TR(0x635956);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635957:{NFSU2_TR(0x635957);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63595cull));
TAIL_STATIC(0x488fa0u,488);
}
B63595c:L63595c:{c.instructions+=6;NFSU2_TR(0x63595c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63595d:{NFSU2_TR(0x63595d);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B635961:{NFSU2_TR(0x635961);
u8 U[4];
w4(U+0,u32(0x7a8c30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635966:{NFSU2_TR(0x635966);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635967:{NFSU2_TR(0x635967);
__builtin_memmove((R+24),(R+0),4);
}
B635969:{NFSU2_TR(0x635969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63596eull));
TAIL_STATIC(0x4400d0u,440);
}
B63596e:L63596e:{c.instructions+=3;NFSU2_TR(0x63596e);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B635972:{NFSU2_TR(0x635972);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635973:{NFSU2_TR(0x635973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635978ull));
TAIL_STATIC(0x43db50u,43d);
}
B635978:L635978:{c.instructions+=4;NFSU2_TR(0x635978);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63597c:{NFSU2_TR(0x63597c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B63597f:{NFSU2_TR(0x63597f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635980:{NFSU2_TR(0x635980);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635985ull));
TAIL_STATIC(0x488fa0u,488);
}
B635985:L635985:{c.instructions+=2;NFSU2_TR(0x635985);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635987:{NFSU2_TR(0x635987);
if(r1(R+518)){{goto L63599e;}}
}
B635989:L635989:{c.instructions+=2;NFSU2_TR(0x635989);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63598b:{NFSU2_TR(0x63598b);
if(r1(R+518)){{goto L63599e;}}
}
B63598d:L63598d:{c.instructions+=6;NFSU2_TR(0x63598d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635991:{NFSU2_TR(0x635991);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B635992:{NFSU2_TR(0x635992);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635995:{NFSU2_TR(0x635995);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B635997:{NFSU2_TR(0x635997);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63599b:{NFSU2_TR(0x63599b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B63599e:L63599e:{c.instructions+=3;NFSU2_TR(0x63599e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B63599f:{NFSU2_TR(0x63599f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6359a2:{NFSU2_TR(0x6359a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635935u);}goto L635935;}}
}
B6359a4:L6359a4:{c.instructions+=9;NFSU2_TR(0x6359a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6359a8:{NFSU2_TR(0x6359a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6359ac:{NFSU2_TR(0x6359ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x17a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6359b2:{NFSU2_TR(0x6359b2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6359b4:{NFSU2_TR(0x6359b4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6359b6:{NFSU2_TR(0x6359b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6359b9:{NFSU2_TR(0x6359b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cf8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6359bf:{NFSU2_TR(0x6359bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6359c3:{NFSU2_TR(0x6359c3);
if(r1(R+518)){{goto L635a9e;}}
}
B6359c9:L6359c9:{c.instructions+=4;NFSU2_TR(0x6359c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6359cc:{NFSU2_TR(0x6359cc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6359ce:{NFSU2_TR(0x6359ce);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6359d2:{NFSU2_TR(0x6359d2);
if(r1(R+518)){{goto L635a9e;}}
}
B6359d8:L6359d8:{c.instructions+=10;NFSU2_TR(0x6359d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6359db:{NFSU2_TR(0x6359db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x808ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6359e1:{NFSU2_TR(0x6359e1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6359e3:{NFSU2_TR(0x6359e3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6359e5:{NFSU2_TR(0x6359e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6359e9:{NFSU2_TR(0x6359e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6359ed:{NFSU2_TR(0x6359ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6359f5:{NFSU2_TR(0x6359f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6359fd:{NFSU2_TR(0x6359fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B635a05:{NFSU2_TR(0x635a05);
if(r1(R+518)){{goto L635a18;}}
}
B635a07:L635a07:{c.instructions+=5;NFSU2_TR(0x635a07);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B635a0a:{NFSU2_TR(0x635a0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B635a0d:{NFSU2_TR(0x635a0d);
w4(R+8,u32(s32(s8(r1(R+4)))));
}
B635a10:{NFSU2_TR(0x635a10);
u8 U[16];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B635a14:{NFSU2_TR(0x635a14);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635a18:L635a18:{c.instructions+=2;NFSU2_TR(0x635a18);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B635a1a:{NFSU2_TR(0x635a1a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L635a9e;}}
}
B635a20:L635a20:{c.instructions+=1;NFSU2_TR(0x635a20);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2cb4ull))));
}
B635a26:L635a26:{c.instructions+=5;NFSU2_TR(0x635a26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635a27:{NFSU2_TR(0x635a27);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B635a2b:{NFSU2_TR(0x635a2b);
u8 U[4];
w4(U+0,u32(0x7a8c1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635a30:{NFSU2_TR(0x635a30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635a31:{NFSU2_TR(0x635a31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635a36ull));
TAIL_STATIC(0x4400d0u,440);
}
B635a36:L635a36:{c.instructions+=3;NFSU2_TR(0x635a36);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B635a3a:{NFSU2_TR(0x635a3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635a3b:{NFSU2_TR(0x635a3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635a40ull));
TAIL_STATIC(0x43db50u,43d);
}
B635a40:L635a40:{c.instructions+=4;NFSU2_TR(0x635a40);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635a44:{NFSU2_TR(0x635a44);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B635a47:{NFSU2_TR(0x635a47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635a48:{NFSU2_TR(0x635a48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635a4dull));
TAIL_STATIC(0x488fa0u,488);
}
B635a4d:L635a4d:{c.instructions+=6;NFSU2_TR(0x635a4d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635a4e:{NFSU2_TR(0x635a4e);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B635a52:{NFSU2_TR(0x635a52);
u8 U[4];
w4(U+0,u32(0x7a8c08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635a57:{NFSU2_TR(0x635a57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635a58:{NFSU2_TR(0x635a58);
__builtin_memmove((R+24),(R+0),4);
}
B635a5a:{NFSU2_TR(0x635a5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635a5full));
TAIL_STATIC(0x4400d0u,440);
}
B635a5f:L635a5f:{c.instructions+=3;NFSU2_TR(0x635a5f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B635a63:{NFSU2_TR(0x635a63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635a64:{NFSU2_TR(0x635a64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635a69ull));
TAIL_STATIC(0x43db50u,43d);
}
B635a69:L635a69:{c.instructions+=4;NFSU2_TR(0x635a69);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635a6d:{NFSU2_TR(0x635a6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B635a70:{NFSU2_TR(0x635a70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635a71:{NFSU2_TR(0x635a71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635a76ull));
TAIL_STATIC(0x488fa0u,488);
}
B635a76:L635a76:{c.instructions+=2;NFSU2_TR(0x635a76);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635a78:{NFSU2_TR(0x635a78);
if(r1(R+518)){{goto L635a8f;}}
}
B635a7a:L635a7a:{c.instructions+=2;NFSU2_TR(0x635a7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635a7c:{NFSU2_TR(0x635a7c);
if(r1(R+518)){{goto L635a8f;}}
}
B635a7e:L635a7e:{c.instructions+=6;NFSU2_TR(0x635a7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635a82:{NFSU2_TR(0x635a82);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B635a83:{NFSU2_TR(0x635a83);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635a86:{NFSU2_TR(0x635a86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B635a88:{NFSU2_TR(0x635a88);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635a8c:{NFSU2_TR(0x635a8c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B635a8f:L635a8f:{c.instructions+=4;NFSU2_TR(0x635a8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635a93:{NFSU2_TR(0x635a93);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B635a94:{NFSU2_TR(0x635a94);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B635a96:{NFSU2_TR(0x635a96);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635a26u);}goto L635a26;}}
}
B635a98:L635a98:{c.instructions+=2;NFSU2_TR(0x635a98);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B635a9c:{NFSU2_TR(0x635a9c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B635a9e:L635a9e:{c.instructions+=7;NFSU2_TR(0x635a9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635aa2:{NFSU2_TR(0x635aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B635aa5:{NFSU2_TR(0x635aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cacull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635aab:{NFSU2_TR(0x635aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1948ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B635ab1:{NFSU2_TR(0x635ab1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B635ab3:{NFSU2_TR(0x635ab3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635ab7:{NFSU2_TR(0x635ab7);
if(r1(R+518)){{goto L635b5b;}}
}
B635abd:L635abd:{c.instructions+=4;NFSU2_TR(0x635abd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B635ac0:{NFSU2_TR(0x635ac0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635ac2:{NFSU2_TR(0x635ac2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635ac6:{NFSU2_TR(0x635ac6);
if(r1(R+518)){{goto L635b5b;}}
}
B635acc:L635acc:{c.instructions+=4;NFSU2_TR(0x635acc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B635ad0:{NFSU2_TR(0x635ad0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B635ad2:{NFSU2_TR(0x635ad2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2c68ull))));
}
B635ad8:{NFSU2_TR(0x635ad8);
{goto L635ae0;}
}
B635ae0:L635ae0:{c.instructions+=5;NFSU2_TR(0x635ae0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635ae1:{NFSU2_TR(0x635ae1);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B635ae8:{NFSU2_TR(0x635ae8);
u8 U[4];
w4(U+0,u32(0x7a8bf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635aed:{NFSU2_TR(0x635aed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635aee:{NFSU2_TR(0x635aee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635af3ull));
TAIL_STATIC(0x4400d0u,440);
}
B635af3:L635af3:{c.instructions+=3;NFSU2_TR(0x635af3);
u8 U[4];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B635afa:{NFSU2_TR(0x635afa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635afb:{NFSU2_TR(0x635afb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635b00ull));
TAIL_STATIC(0x43db50u,43d);
}
B635b00:L635b00:{c.instructions+=4;NFSU2_TR(0x635b00);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635b04:{NFSU2_TR(0x635b04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B635b07:{NFSU2_TR(0x635b07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635b08:{NFSU2_TR(0x635b08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635b0dull));
TAIL_STATIC(0x488fa0u,488);
}
B635b0d:L635b0d:{c.instructions+=6;NFSU2_TR(0x635b0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635b0e:{NFSU2_TR(0x635b0e);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B635b15:{NFSU2_TR(0x635b15);
u8 U[4];
w4(U+0,u32(0x7a8bdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635b1a:{NFSU2_TR(0x635b1a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635b1b:{NFSU2_TR(0x635b1b);
__builtin_memmove((R+24),(R+0),4);
}
B635b1d:{NFSU2_TR(0x635b1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635b22ull));
TAIL_STATIC(0x4400d0u,440);
}
B635b22:L635b22:{c.instructions+=3;NFSU2_TR(0x635b22);
u8 U[4];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B635b29:{NFSU2_TR(0x635b29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635b2a:{NFSU2_TR(0x635b2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635b2full));
TAIL_STATIC(0x43db50u,43d);
}
B635b2f:L635b2f:{c.instructions+=4;NFSU2_TR(0x635b2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635b33:{NFSU2_TR(0x635b33);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B635b36:{NFSU2_TR(0x635b36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635b37:{NFSU2_TR(0x635b37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635b3cull));
TAIL_STATIC(0x488fa0u,488);
}
B635b3c:L635b3c:{c.instructions+=2;NFSU2_TR(0x635b3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635b3e:{NFSU2_TR(0x635b3e);
if(r1(R+518)){{goto L635b55;}}
}
B635b40:L635b40:{c.instructions+=2;NFSU2_TR(0x635b40);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635b42:{NFSU2_TR(0x635b42);
if(r1(R+518)){{goto L635b55;}}
}
B635b44:L635b44:{c.instructions+=6;NFSU2_TR(0x635b44);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635b48:{NFSU2_TR(0x635b48);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B635b49:{NFSU2_TR(0x635b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635b4c:{NFSU2_TR(0x635b4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B635b4e:{NFSU2_TR(0x635b4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635b52:{NFSU2_TR(0x635b52);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B635b55:L635b55:{c.instructions+=3;NFSU2_TR(0x635b55);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B635b56:{NFSU2_TR(0x635b56);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B635b59:{NFSU2_TR(0x635b59);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635ae0u);}goto L635ae0;}}
}
B635b5b:L635b5b:{c.instructions+=13;NFSU2_TR(0x635b5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B635b5f:{NFSU2_TR(0x635b5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635b63:{NFSU2_TR(0x635b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B635b66:{NFSU2_TR(0x635b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2c60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635b6c:{NFSU2_TR(0x635b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B635b6f:{NFSU2_TR(0x635b6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x350ull))));
__builtin_memmove((R+0),(U+0),4);
}
B635b75:{NFSU2_TR(0x635b75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635b76:{NFSU2_TR(0x635b76);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635b7c:{NFSU2_TR(0x635b7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34cull))));
__builtin_memmove((R+4),(U+0),4);
}
B635b82:{NFSU2_TR(0x635b82);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635b83:{NFSU2_TR(0x635b83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635b84:{NFSU2_TR(0x635b84);
__builtin_memmove((R+4),(R+28),4);
}
B635b86:{NFSU2_TR(0x635b86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635b8bull));
TAIL_STATIC(0x61fc20u,61f);
}
B635b8b:L635b8b:{c.instructions+=9;NFSU2_TR(0x635b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635b8e:{NFSU2_TR(0x635b8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x360ull))));
__builtin_memmove((R+4),(U+0),4);
}
B635b94:{NFSU2_TR(0x635b94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635b95:{NFSU2_TR(0x635b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635b9b:{NFSU2_TR(0x635b9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x35cull))));
__builtin_memmove((R+8),(U+0),4);
}
B635ba1:{NFSU2_TR(0x635ba1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635ba2:{NFSU2_TR(0x635ba2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635ba3:{NFSU2_TR(0x635ba3);
__builtin_memmove((R+4),(R+28),4);
}
B635ba5:{NFSU2_TR(0x635ba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635baaull));
TAIL_STATIC(0x61fc20u,61f);
}
B635baa:L635baa:{c.instructions+=9;NFSU2_TR(0x635baa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635bad:{NFSU2_TR(0x635bad);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x36cull))));
__builtin_memmove((R+8),(U+0),4);
}
B635bb3:{NFSU2_TR(0x635bb3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635bb4:{NFSU2_TR(0x635bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x800ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B635bba:{NFSU2_TR(0x635bba);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x368ull))));
__builtin_memmove((R+0),(U+0),4);
}
B635bc0:{NFSU2_TR(0x635bc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635bc1:{NFSU2_TR(0x635bc1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635bc2:{NFSU2_TR(0x635bc2);
__builtin_memmove((R+4),(R+28),4);
}
B635bc4:{NFSU2_TR(0x635bc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635bc9ull));
TAIL_STATIC(0x61fc20u,61f);
}
B635bc9:L635bc9:{c.instructions+=9;NFSU2_TR(0x635bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B635bcc:{NFSU2_TR(0x635bcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x378ull))));
__builtin_memmove((R+0),(U+0),4);
}
B635bd2:{NFSU2_TR(0x635bd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635bd3:{NFSU2_TR(0x635bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x804ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635bd9:{NFSU2_TR(0x635bd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x374ull))));
__builtin_memmove((R+4),(U+0),4);
}
B635bdf:{NFSU2_TR(0x635bdf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635be0:{NFSU2_TR(0x635be0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635be1:{NFSU2_TR(0x635be1);
__builtin_memmove((R+4),(R+28),4);
}
B635be3:{NFSU2_TR(0x635be3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635be8ull));
TAIL_STATIC(0x61fc20u,61f);
}
B635be8:L635be8:{c.instructions+=5;NFSU2_TR(0x635be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635beb:{NFSU2_TR(0x635beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B635bf1:{NFSU2_TR(0x635bf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635bf3:{NFSU2_TR(0x635bf3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635bf7:{NFSU2_TR(0x635bf7);
if(r1(R+518)){{goto L635d8b;}}
}
B635bfd:L635bfd:{c.instructions+=2;NFSU2_TR(0x635bfd);
u8 U[4];
w4(U+0,u32(0x798534ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635c02:{NFSU2_TR(0x635c02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635c07ull));
TAIL_STATIC(0x43db50u,43d);
}
B635c07:L635c07:{c.instructions+=5;NFSU2_TR(0x635c07);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B635c0b:{NFSU2_TR(0x635c0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B635c0e:{NFSU2_TR(0x635c0e);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B635c13:{NFSU2_TR(0x635c13);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635c17:{NFSU2_TR(0x635c17);
if(r1(R+518)){{goto L635c66;}}
}
B635c19:L635c19:{c.instructions+=8;NFSU2_TR(0x635c19);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B635c1f:{NFSU2_TR(0x635c1f);
w4(R+0,u32(r2(R+4)));
}
B635c22:{NFSU2_TR(0x635c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635c25:{NFSU2_TR(0x635c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B635c28:{NFSU2_TR(0x635c28);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B635c2b:{NFSU2_TR(0x635c2b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B635c2d:{NFSU2_TR(0x635c2d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635c2f:{NFSU2_TR(0x635c2f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L635c66;}}
}
B635c31:L635c31:{c.instructions+=4;NFSU2_TR(0x635c31);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B635c34:{NFSU2_TR(0x635c34);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635c38:{NFSU2_TR(0x635c38);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B635c3b:{NFSU2_TR(0x635c3b);
{goto L635c40;}
}
B635c40:L635c40:{c.instructions+=6;NFSU2_TR(0x635c40);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B635c43:{NFSU2_TR(0x635c43);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B635c47:{NFSU2_TR(0x635c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B635c4a:{NFSU2_TR(0x635c4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B635c4e:{NFSU2_TR(0x635c4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635c50:{NFSU2_TR(0x635c50);
if(r1(R+518)){{goto L635d5a;}}
}
B635c56:L635c56:{c.instructions+=2;NFSU2_TR(0x635c56);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B635c58:{NFSU2_TR(0x635c58);
if(r1(R+518)){{goto L635d5a;}}
}
B635c5e:L635c5e:{c.instructions+=4;NFSU2_TR(0x635c5e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B635c5f:{NFSU2_TR(0x635c5f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B635c62:{NFSU2_TR(0x635c62);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B635c64:{NFSU2_TR(0x635c64);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635c40u);}goto L635c40;}}
}
B635c66:L635c66:{c.instructions+=1;NFSU2_TR(0x635c66);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B635c6e:L635c6e:{c.instructions+=2;NFSU2_TR(0x635c6e);
u8 U[4];
w4(U+0,u32(0x798524ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635c73:{NFSU2_TR(0x635c73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635c78ull));
TAIL_STATIC(0x43db50u,43d);
}
B635c78:L635c78:{c.instructions+=6;NFSU2_TR(0x635c78);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635c7c:{NFSU2_TR(0x635c7c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B635c80:{NFSU2_TR(0x635c80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B635c83:{NFSU2_TR(0x635c83);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B635c88:{NFSU2_TR(0x635c88);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635c8c:{NFSU2_TR(0x635c8c);
if(r1(R+518)){{goto L635cd6;}}
}
B635c8e:L635c8e:{c.instructions+=8;NFSU2_TR(0x635c8e);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B635c94:{NFSU2_TR(0x635c94);
w4(R+0,u32(r2(R+4)));
}
B635c97:{NFSU2_TR(0x635c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635c9a:{NFSU2_TR(0x635c9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B635c9d:{NFSU2_TR(0x635c9d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B635ca0:{NFSU2_TR(0x635ca0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B635ca2:{NFSU2_TR(0x635ca2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635ca4:{NFSU2_TR(0x635ca4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L635cd6;}}
}
B635ca6:L635ca6:{c.instructions+=3;NFSU2_TR(0x635ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B635ca9:{NFSU2_TR(0x635ca9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635cad:{NFSU2_TR(0x635cad);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B635cb0:L635cb0:{c.instructions+=6;NFSU2_TR(0x635cb0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B635cb3:{NFSU2_TR(0x635cb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B635cb7:{NFSU2_TR(0x635cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B635cba:{NFSU2_TR(0x635cba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B635cbe:{NFSU2_TR(0x635cbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635cc0:{NFSU2_TR(0x635cc0);
if(r1(R+518)){{goto L635d6e;}}
}
B635cc6:L635cc6:{c.instructions+=2;NFSU2_TR(0x635cc6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B635cc8:{NFSU2_TR(0x635cc8);
if(r1(R+518)){{goto L635d6e;}}
}
B635cce:L635cce:{c.instructions+=4;NFSU2_TR(0x635cce);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B635ccf:{NFSU2_TR(0x635ccf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B635cd2:{NFSU2_TR(0x635cd2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B635cd4:{NFSU2_TR(0x635cd4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635cb0u);}goto L635cb0;}}
}
B635cd6:L635cd6:{c.instructions+=1;NFSU2_TR(0x635cd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B635cde:L635cde:{c.instructions+=2;NFSU2_TR(0x635cde);
u8 U[4];
w4(U+0,u32(0x79852cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635ce3:{NFSU2_TR(0x635ce3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635ce8ull));
TAIL_STATIC(0x43db50u,43d);
}
B635ce8:L635ce8:{c.instructions+=6;NFSU2_TR(0x635ce8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635cec:{NFSU2_TR(0x635cec);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B635cf0:{NFSU2_TR(0x635cf0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B635cf3:{NFSU2_TR(0x635cf3);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B635cf8:{NFSU2_TR(0x635cf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635cfc:{NFSU2_TR(0x635cfc);
if(r1(R+518)){{goto L635d3e;}}
}
B635cfe:L635cfe:{c.instructions+=8;NFSU2_TR(0x635cfe);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B635d04:{NFSU2_TR(0x635d04);
w4(R+0,u32(r2(R+4)));
}
B635d07:{NFSU2_TR(0x635d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635d0a:{NFSU2_TR(0x635d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B635d0d:{NFSU2_TR(0x635d0d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B635d10:{NFSU2_TR(0x635d10);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B635d12:{NFSU2_TR(0x635d12);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635d14:{NFSU2_TR(0x635d14);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L635d3e;}}
}
B635d16:L635d16:{c.instructions+=3;NFSU2_TR(0x635d16);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B635d19:{NFSU2_TR(0x635d19);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635d1d:{NFSU2_TR(0x635d1d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B635d20:L635d20:{c.instructions+=6;NFSU2_TR(0x635d20);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B635d23:{NFSU2_TR(0x635d23);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B635d27:{NFSU2_TR(0x635d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B635d2a:{NFSU2_TR(0x635d2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B635d2e:{NFSU2_TR(0x635d2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635d30:{NFSU2_TR(0x635d30);
if(r1(R+518)){{goto L635d82;}}
}
B635d32:L635d32:{c.instructions+=2;NFSU2_TR(0x635d32);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B635d34:{NFSU2_TR(0x635d34);
if(r1(R+518)){{goto L635d82;}}
}
B635d36:L635d36:{c.instructions+=4;NFSU2_TR(0x635d36);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B635d37:{NFSU2_TR(0x635d37);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B635d3a:{NFSU2_TR(0x635d3a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B635d3c:{NFSU2_TR(0x635d3c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635d20u);}goto L635d20;}}
}
B635d3e:L635d3e:{c.instructions+=1;NFSU2_TR(0x635d3e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B635d40:L635d40:{c.instructions+=8;NFSU2_TR(0x635d40);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B635d44:{NFSU2_TR(0x635d44);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635d48:{NFSU2_TR(0x635d48);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B635d4b:{NFSU2_TR(0x635d4b);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
}
B635d4d:{NFSU2_TR(0x635d4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B635d50:{NFSU2_TR(0x635d50);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B635d52:{NFSU2_TR(0x635d52);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x380ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635d58:{NFSU2_TR(0x635d58);
{goto L635d95;}
}
B635d5a:L635d5a:{c.instructions+=2;NFSU2_TR(0x635d5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635d5c:{NFSU2_TR(0x635d5c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635c66u);}goto L635c66;}}
}
B635d62:L635d62:{c.instructions+=3;NFSU2_TR(0x635d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635d65:{NFSU2_TR(0x635d65);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635d69:{NFSU2_TR(0x635d69);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635c6eu);}goto L635c6e;}
}
B635d6e:L635d6e:{c.instructions+=2;NFSU2_TR(0x635d6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635d70:{NFSU2_TR(0x635d70);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635cd6u);}goto L635cd6;}}
}
B635d76:L635d76:{c.instructions+=3;NFSU2_TR(0x635d76);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635d79:{NFSU2_TR(0x635d79);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635d7d:{NFSU2_TR(0x635d7d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635cdeu);}goto L635cde;}
}
B635d82:L635d82:{c.instructions+=2;NFSU2_TR(0x635d82);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635d84:{NFSU2_TR(0x635d84);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635d3eu);}goto L635d3e;}}
}
B635d86:L635d86:{c.instructions+=2;NFSU2_TR(0x635d86);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635d89:{NFSU2_TR(0x635d89);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635d40u);}goto L635d40;}
}
B635d8b:L635d8b:{c.instructions+=1;NFSU2_TR(0x635d8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x380ull))));
w4(U+4,u32(0x90aa90ull));
s4(u32(r4(U+0)),r4(U+4));
}
B635d95:L635d95:{c.instructions+=4;NFSU2_TR(0x635d95);
__builtin_memmove((R+4),gp(0x8654a4),4);
}
B635d9b:{NFSU2_TR(0x635d9b);
w4(R+0,u32(0x3ull));
}
B635da0:{NFSU2_TR(0x635da0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B635da2:{NFSU2_TR(0x635da2);
if(r1(R+518)){{goto L635dbe;}}
}
B635da4:L635da4:{c.instructions+=3;NFSU2_TR(0x635da4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B635da6:{NFSU2_TR(0x635da6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635da8:{NFSU2_TR(0x635da8);
if(r1(R+518)){TAIL_STATIC(0x636751u,636);}
}
B635dae:L635dae:{c.instructions+=3;NFSU2_TR(0x635dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635db1:{NFSU2_TR(0x635db1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B635db4:{NFSU2_TR(0x635db4);
if(r1(R+518)){TAIL_STATIC(0x636751u,636);}
}
B635dba:L635dba:{c.instructions+=1;NFSU2_TR(0x635dba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B635dbe:L635dbe:{c.instructions+=5;NFSU2_TR(0x635dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x628ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635dc4:{NFSU2_TR(0x635dc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x628ull))));
__builtin_memmove((R+24),(U+0),4);
}
B635dca:{NFSU2_TR(0x635dca);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B635dcc:{NFSU2_TR(0x635dcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635dd0:{NFSU2_TR(0x635dd0);
if(r1(R+518)){{goto L635df5;}}
}
B635dd2:L635dd2:{c.instructions+=5;NFSU2_TR(0x635dd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B635dd4:{NFSU2_TR(0x635dd4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B635dd7:{NFSU2_TR(0x635dd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B635dd9:{NFSU2_TR(0x635dd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B635ddb:{NFSU2_TR(0x635ddb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L635de0;}}
}
B635ddd:L635ddd:{c.instructions+=1;NFSU2_TR(0x635ddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635de0:L635de0:{c.instructions+=4;NFSU2_TR(0x635de0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635de1:{NFSU2_TR(0x635de1);
__builtin_memmove((R+0),gp(0x8a1c1c),4);
}
B635de6:{NFSU2_TR(0x635de6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635de7:{NFSU2_TR(0x635de7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635decull));
TAIL_STATIC(0x43f920u,43f);
}
B635dec:L635dec:{c.instructions+=4;NFSU2_TR(0x635dec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B635dee:{NFSU2_TR(0x635dee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B635df1:{NFSU2_TR(0x635df1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B635df3:{NFSU2_TR(0x635df3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635dd2u);}goto L635dd2;}}
}
B635df5:L635df5:{c.instructions+=4;NFSU2_TR(0x635df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x630ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635dfb:{NFSU2_TR(0x635dfb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x630ull))));
__builtin_memmove((R+24),(U+0),4);
}
B635e01:{NFSU2_TR(0x635e01);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B635e03:{NFSU2_TR(0x635e03);
if(r1(R+518)){{goto L635e29;}}
}
B635e05:L635e05:{c.instructions+=5;NFSU2_TR(0x635e05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B635e07:{NFSU2_TR(0x635e07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B635e09:{NFSU2_TR(0x635e09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B635e0b:{NFSU2_TR(0x635e0b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B635e0e:{NFSU2_TR(0x635e0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L635e13;}}
}
B635e10:L635e10:{c.instructions+=1;NFSU2_TR(0x635e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635e13:L635e13:{c.instructions+=4;NFSU2_TR(0x635e13);
__builtin_memmove((R+8),gp(0x8a1c1c),4);
}
B635e19:{NFSU2_TR(0x635e19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635e1a:{NFSU2_TR(0x635e1a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635e1b:{NFSU2_TR(0x635e1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635e20ull));
TAIL_STATIC(0x43f920u,43f);
}
B635e20:L635e20:{c.instructions+=4;NFSU2_TR(0x635e20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B635e22:{NFSU2_TR(0x635e22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B635e25:{NFSU2_TR(0x635e25);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B635e27:{NFSU2_TR(0x635e27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635e05u);}goto L635e05;}}
}
B635e29:L635e29:{c.instructions+=5;NFSU2_TR(0x635e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635e2c:{NFSU2_TR(0x635e2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x818ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635e32:{NFSU2_TR(0x635e32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635e34:{NFSU2_TR(0x635e34);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635e38:{NFSU2_TR(0x635e38);
if(r1(R+518)){TAIL_STATIC(0x636751u,636);}
}
B635e3e:L635e3e:{c.instructions+=5;NFSU2_TR(0x635e3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B635e42:{NFSU2_TR(0x635e42);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4c0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B635e48:{NFSU2_TR(0x635e48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635e49:{NFSU2_TR(0x635e49);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4c8ull))));
}
B635e4f:{NFSU2_TR(0x635e4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635e54ull));
TAIL_STATIC(0x494610u,494);
}
B635e54:L635e54:{c.instructions+=2;NFSU2_TR(0x635e54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635e55:{NFSU2_TR(0x635e55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635e5aull));
TAIL_STATIC(0x494610u,494);
}
B635e5a:L635e5a:{c.instructions+=2;NFSU2_TR(0x635e5a);
u8 U[4];
w4(U+0,u32(0x7a8bd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635e5f:{NFSU2_TR(0x635e5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635e64ull));
TAIL_STATIC(0x43db50u,43d);
}
B635e64:L635e64:{c.instructions+=5;NFSU2_TR(0x635e64);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635e68:{NFSU2_TR(0x635e68);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B635e6c:{NFSU2_TR(0x635e6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B635e6f:{NFSU2_TR(0x635e6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B635e74:{NFSU2_TR(0x635e74);
if(r1(R+518)){{goto L635eb3;}}
}
B635e76:L635e76:{c.instructions+=8;NFSU2_TR(0x635e76);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B635e7c:{NFSU2_TR(0x635e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B635e7f:{NFSU2_TR(0x635e7f);
w4(R+4,u32(r2(R+4)));
}
B635e82:{NFSU2_TR(0x635e82);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(s32(s16(r2(U+8)))));
}
B635e86:{NFSU2_TR(0x635e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B635e89:{NFSU2_TR(0x635e89);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B635e8b:{NFSU2_TR(0x635e8b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635e8d:{NFSU2_TR(0x635e8d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L635eb3;}}
}
B635e8f:L635e8f:{c.instructions+=2;NFSU2_TR(0x635e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B635e92:{NFSU2_TR(0x635e92);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B635e95:L635e95:{c.instructions+=4;NFSU2_TR(0x635e95);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635e97:{NFSU2_TR(0x635e97);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B635e9a:{NFSU2_TR(0x635e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B635e9d:{NFSU2_TR(0x635e9d);
if(r1(R+518)){{goto L635f52;}}
}
B635ea3:L635ea3:{c.instructions+=2;NFSU2_TR(0x635ea3);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B635ea5:{NFSU2_TR(0x635ea5);
if(r1(R+518)){{goto L635f52;}}
}
B635eab:L635eab:{c.instructions+=4;NFSU2_TR(0x635eab);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B635eac:{NFSU2_TR(0x635eac);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B635eaf:{NFSU2_TR(0x635eaf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B635eb1:{NFSU2_TR(0x635eb1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635e95u);}goto L635e95;}}
}
B635eb3:L635eb3:{c.instructions+=1;NFSU2_TR(0x635eb3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B635ebb:L635ebb:{c.instructions+=2;NFSU2_TR(0x635ebb);
u8 U[4];
w4(U+0,u32(0x7a8bc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635ec0:{NFSU2_TR(0x635ec0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635ec5ull));
TAIL_STATIC(0x43db50u,43d);
}
B635ec5:L635ec5:{c.instructions+=6;NFSU2_TR(0x635ec5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635ec9:{NFSU2_TR(0x635ec9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B635ecd:{NFSU2_TR(0x635ecd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B635ed0:{NFSU2_TR(0x635ed0);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B635ed5:{NFSU2_TR(0x635ed5);
__builtin_memmove((R+28),(R+0),4);
}
B635ed7:{NFSU2_TR(0x635ed7);
if(r1(R+518)){{goto L635f0d;}}
}
B635ed9:L635ed9:{c.instructions+=8;NFSU2_TR(0x635ed9);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B635edf:{NFSU2_TR(0x635edf);
w4(R+0,u32(r2(R+4)));
}
B635ee2:{NFSU2_TR(0x635ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635ee5:{NFSU2_TR(0x635ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B635ee8:{NFSU2_TR(0x635ee8);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B635eeb:{NFSU2_TR(0x635eeb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B635eed:{NFSU2_TR(0x635eed);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635eef:{NFSU2_TR(0x635eef);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L635f0d;}}
}
B635ef1:L635ef1:{c.instructions+=2;NFSU2_TR(0x635ef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B635ef4:{NFSU2_TR(0x635ef4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B635ef7:L635ef7:{c.instructions+=4;NFSU2_TR(0x635ef7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635ef9:{NFSU2_TR(0x635ef9);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B635efc:{NFSU2_TR(0x635efc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B635eff:{NFSU2_TR(0x635eff);
if(r1(R+518)){{goto L635f66;}}
}
B635f01:L635f01:{c.instructions+=2;NFSU2_TR(0x635f01);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B635f03:{NFSU2_TR(0x635f03);
if(r1(R+518)){{goto L635f66;}}
}
B635f05:L635f05:{c.instructions+=4;NFSU2_TR(0x635f05);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B635f06:{NFSU2_TR(0x635f06);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B635f09:{NFSU2_TR(0x635f09);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B635f0b:{NFSU2_TR(0x635f0b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635ef7u);}goto L635ef7;}}
}
B635f0d:L635f0d:{c.instructions+=1;NFSU2_TR(0x635f0d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B635f0f:L635f0f:{c.instructions+=5;NFSU2_TR(0x635f0f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635f13:{NFSU2_TR(0x635f13);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635f15:{NFSU2_TR(0x635f15);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B635f19:{NFSU2_TR(0x635f19);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635f1d:{NFSU2_TR(0x635f1d);
if(r1(R+518)){TAIL_STATIC(0x6360edu,636);}
}
B635f23:L635f23:{c.instructions+=4;NFSU2_TR(0x635f23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635f24:{NFSU2_TR(0x635f24);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4c0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B635f2a:{NFSU2_TR(0x635f2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635f2b:{NFSU2_TR(0x635f2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635f30ull));
TAIL_STATIC(0x48b8b0u,48b);
}
B635f30:L635f30:{c.instructions+=4;NFSU2_TR(0x635f30);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d49ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B635f36:{NFSU2_TR(0x635f36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B635f39:{NFSU2_TR(0x635f39);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B635f3b:{NFSU2_TR(0x635f3b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L635f8a;}}
}
B635f3d:L635f3d:{c.instructions+=2;NFSU2_TR(0x635f3d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B635f3f:{NFSU2_TR(0x635f3f);
}
B635f40:L635f40:{c.instructions+=3;NFSU2_TR(0x635f40);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8a05d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B635f46:{NFSU2_TR(0x635f46);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B635f48:{NFSU2_TR(0x635f48);
if(r1(R+518)){{goto L635f6f;}}
}
B635f4a:L635f4a:{c.instructions+=3;NFSU2_TR(0x635f4a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B635f4b:{NFSU2_TR(0x635f4b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B635f4e:{NFSU2_TR(0x635f4e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635f40u);}goto L635f40;}}
}
B635f50:L635f50:{c.instructions+=1;NFSU2_TR(0x635f50);
{goto L635f7c;}
}
B635f52:L635f52:{c.instructions+=2;NFSU2_TR(0x635f52);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635f54:{NFSU2_TR(0x635f54);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635eb3u);}goto L635eb3;}}
}
B635f5a:L635f5a:{c.instructions+=3;NFSU2_TR(0x635f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635f5d:{NFSU2_TR(0x635f5d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B635f61:{NFSU2_TR(0x635f61);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635ebbu);}goto L635ebb;}
}
B635f66:L635f66:{c.instructions+=2;NFSU2_TR(0x635f66);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635f68:{NFSU2_TR(0x635f68);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635f0du);}goto L635f0d;}}
}
B635f6a:L635f6a:{c.instructions+=2;NFSU2_TR(0x635f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B635f6d:{NFSU2_TR(0x635f6d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635f0fu);}goto L635f0f;}
}
B635f6f:L635f6f:{c.instructions+=2;NFSU2_TR(0x635f6f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d49ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B635f75:{NFSU2_TR(0x635f75);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8a05d4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B635f7c:L635f7c:{c.instructions+=3;NFSU2_TR(0x635f7c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d49ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B635f82:{NFSU2_TR(0x635f82);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B635f84:{NFSU2_TR(0x635f84);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6360edu,636);}
}
B635f8a:L635f8a:{c.instructions+=2;NFSU2_TR(0x635f8a);
u8 U[4];
w4(U+0,u32(0x7a8bb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635f8f:{NFSU2_TR(0x635f8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635f94ull));
TAIL_STATIC(0x43db50u,43d);
}
B635f94:L635f94:{c.instructions+=6;NFSU2_TR(0x635f94);
__builtin_memmove((R+28),(R+0),4);
}
B635f96:{NFSU2_TR(0x635f96);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635f9a:{NFSU2_TR(0x635f9a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B635f9e:{NFSU2_TR(0x635f9e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B635fa1:{NFSU2_TR(0x635fa1);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B635fa6:{NFSU2_TR(0x635fa6);
if(r1(R+518)){{goto L635fe4;}}
}
B635fa8:L635fa8:{c.instructions+=8;NFSU2_TR(0x635fa8);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B635fae:{NFSU2_TR(0x635fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B635fb1:{NFSU2_TR(0x635fb1);
w4(R+4,u32(r2(R+4)));
}
B635fb4:{NFSU2_TR(0x635fb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B635fb7:{NFSU2_TR(0x635fb7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B635fba:{NFSU2_TR(0x635fba);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B635fbc:{NFSU2_TR(0x635fbc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635fbe:{NFSU2_TR(0x635fbe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L635fe4;}}
}
B635fc0:L635fc0:{c.instructions+=2;NFSU2_TR(0x635fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B635fc3:{NFSU2_TR(0x635fc3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B635fc6:L635fc6:{c.instructions+=4;NFSU2_TR(0x635fc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B635fc8:{NFSU2_TR(0x635fc8);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B635fcb:{NFSU2_TR(0x635fcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B635fce:{NFSU2_TR(0x635fce);
if(r1(R+518)){TAIL_STATIC(0x636123u,636);}
}
B635fd4:L635fd4:{c.instructions+=2;NFSU2_TR(0x635fd4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B635fd6:{NFSU2_TR(0x635fd6);
if(r1(R+518)){TAIL_STATIC(0x636123u,636);}
}
B635fdc:L635fdc:{c.instructions+=4;NFSU2_TR(0x635fdc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B635fdd:{NFSU2_TR(0x635fdd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B635fe0:{NFSU2_TR(0x635fe0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B635fe2:{NFSU2_TR(0x635fe2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x635fc6u);}goto L635fc6;}}
}
B635fe4:L635fe4:{c.instructions+=3;NFSU2_TR(0x635fe4);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B635fec:{NFSU2_TR(0x635fec);
u8 U[4];
w4(U+0,u32(0x7a8bb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B635ff1:{NFSU2_TR(0x635ff1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x635ff6ull));
TAIL_STATIC(0x43db50u,43d);
}
B635ff6:L635ff6:{c.instructions+=3;NFSU2_TR(0x635ff6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B635ffa:{NFSU2_TR(0x635ffa);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B635ffe:{NFSU2_TR(0x635ffe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
TAIL_STATIC(0x636001u,636);
}
XIT:NFSU2_TR_EXIT(0x635,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
