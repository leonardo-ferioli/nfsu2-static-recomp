#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_73a(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x459,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x459,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_459(u8* __restrict R,Cpu& c);
u32 page_459(Cpu& c){return body_459(c.regs.data(),c);}
__attribute__((noinline)) u32 body_459(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x459000:goto L459000;
case 0x459001:c.instructions+=10;goto B459001;
case 0x459003:c.instructions+=9;goto B459003;
case 0x459006:c.instructions+=8;goto B459006;
case 0x459009:c.instructions+=7;goto B459009;
case 0x45900e:c.instructions+=6;goto B45900e;
case 0x45900f:c.instructions+=5;goto B45900f;
case 0x459010:c.instructions+=4;goto B459010;
case 0x459011:c.instructions+=3;goto B459011;
case 0x459013:c.instructions+=2;goto B459013;
case 0x459016:c.instructions+=1;goto B459016;
case 0x45901c:goto L45901c;
case 0x45901f:c.instructions+=11;goto B45901f;
case 0x459026:c.instructions+=10;goto B459026;
case 0x459029:c.instructions+=9;goto B459029;
case 0x45902c:c.instructions+=8;goto B45902c;
case 0x45902e:c.instructions+=7;goto B45902e;
case 0x459030:c.instructions+=6;goto B459030;
case 0x459033:c.instructions+=5;goto B459033;
case 0x459036:c.instructions+=4;goto B459036;
case 0x459039:c.instructions+=3;goto B459039;
case 0x45903c:c.instructions+=2;goto B45903c;
case 0x45903e:c.instructions+=1;goto B45903e;
case 0x459044:goto L459044;
case 0x459049:c.instructions+=1;goto B459049;
case 0x45904e:goto L45904e;
case 0x459051:c.instructions+=3;goto B459051;
case 0x459054:c.instructions+=2;goto B459054;
case 0x459056:c.instructions+=1;goto B459056;
case 0x459058:goto L459058;
case 0x45905b:c.instructions+=4;goto B45905b;
case 0x459061:c.instructions+=3;goto B459061;
case 0x459063:c.instructions+=2;goto B459063;
case 0x459066:c.instructions+=1;goto B459066;
case 0x45906c:goto L45906c;
case 0x45906f:c.instructions+=1;goto B45906f;
case 0x459074:goto L459074;
case 0x459076:c.instructions+=1;goto B459076;
case 0x45907c:goto L45907c;
case 0x45907e:c.instructions+=4;goto B45907e;
case 0x459082:c.instructions+=3;goto B459082;
case 0x459083:c.instructions+=2;goto B459083;
case 0x459085:c.instructions+=1;goto B459085;
case 0x45908a:goto L45908a;
case 0x45908b:c.instructions+=5;goto B45908b;
case 0x45908c:c.instructions+=4;goto B45908c;
case 0x45908d:c.instructions+=3;goto B45908d;
case 0x45908f:c.instructions+=2;goto B45908f;
case 0x459090:c.instructions+=1;goto B459090;
case 0x459093:goto L459093;
case 0x459098:c.instructions+=1;goto B459098;
case 0x45909d:goto L45909d;
case 0x4590a0:c.instructions+=2;goto B4590a0;
case 0x4590a2:c.instructions+=1;goto B4590a2;
case 0x4590a8:goto L4590a8;
case 0x4590ad:c.instructions+=1;goto B4590ad;
case 0x4590b2:goto L4590b2;
case 0x4590b5:c.instructions+=2;goto B4590b5;
case 0x4590b7:c.instructions+=1;goto B4590b7;
case 0x4590bd:goto L4590bd;
case 0x4590c2:c.instructions+=1;goto B4590c2;
case 0x4590c7:goto L4590c7;
case 0x4590ca:c.instructions+=2;goto B4590ca;
case 0x4590cc:c.instructions+=1;goto B4590cc;
case 0x4590d2:goto L4590d2;
case 0x4590d7:c.instructions+=1;goto B4590d7;
case 0x4590dc:goto L4590dc;
case 0x4590df:c.instructions+=2;goto B4590df;
case 0x4590e1:c.instructions+=1;goto B4590e1;
case 0x4590e7:goto L4590e7;
case 0x4590ec:c.instructions+=1;goto B4590ec;
case 0x4590f1:goto L4590f1;
case 0x4590f4:c.instructions+=2;goto B4590f4;
case 0x4590f6:c.instructions+=1;goto B4590f6;
case 0x4590f8:goto L4590f8;
case 0x4590fb:c.instructions+=20;goto B4590fb;
case 0x4590fd:c.instructions+=19;goto B4590fd;
case 0x459105:c.instructions+=18;goto B459105;
case 0x45910d:c.instructions+=17;goto B45910d;
case 0x459115:c.instructions+=16;goto B459115;
case 0x45911d:c.instructions+=15;goto B45911d;
case 0x459125:c.instructions+=14;goto B459125;
case 0x459129:c.instructions+=13;goto B459129;
case 0x45912f:c.instructions+=12;goto B45912f;
case 0x459132:c.instructions+=11;goto B459132;
case 0x459136:c.instructions+=10;goto B459136;
case 0x459139:c.instructions+=9;goto B459139;
case 0x45913d:c.instructions+=8;goto B45913d;
case 0x459143:c.instructions+=7;goto B459143;
case 0x459147:c.instructions+=6;goto B459147;
case 0x45914b:c.instructions+=5;goto B45914b;
case 0x459151:c.instructions+=4;goto B459151;
case 0x459153:c.instructions+=3;goto B459153;
case 0x459157:c.instructions+=2;goto B459157;
case 0x459158:c.instructions+=1;goto B459158;
case 0x45915b:goto L45915b;
case 0x45915d:goto L45915d;
case 0x459162:c.instructions+=1;goto B459162;
case 0x459167:goto L459167;
case 0x45916a:c.instructions+=6;goto B45916a;
case 0x45916b:c.instructions+=5;goto B45916b;
case 0x45916c:c.instructions+=4;goto B45916c;
case 0x45916d:c.instructions+=3;goto B45916d;
case 0x45916f:c.instructions+=2;goto B45916f;
case 0x459170:c.instructions+=1;goto B459170;
case 0x459173:goto L459173;
case 0x459176:c.instructions+=20;goto B459176;
case 0x459178:c.instructions+=19;goto B459178;
case 0x459180:c.instructions+=18;goto B459180;
case 0x459188:c.instructions+=17;goto B459188;
case 0x459190:c.instructions+=16;goto B459190;
case 0x459198:c.instructions+=15;goto B459198;
case 0x4591a0:c.instructions+=14;goto B4591a0;
case 0x4591a4:c.instructions+=13;goto B4591a4;
case 0x4591aa:c.instructions+=12;goto B4591aa;
case 0x4591ad:c.instructions+=11;goto B4591ad;
case 0x4591b1:c.instructions+=10;goto B4591b1;
case 0x4591b4:c.instructions+=9;goto B4591b4;
case 0x4591b8:c.instructions+=8;goto B4591b8;
case 0x4591be:c.instructions+=7;goto B4591be;
case 0x4591c2:c.instructions+=6;goto B4591c2;
case 0x4591c6:c.instructions+=5;goto B4591c6;
case 0x4591cc:c.instructions+=4;goto B4591cc;
case 0x4591ce:c.instructions+=3;goto B4591ce;
case 0x4591d2:c.instructions+=2;goto B4591d2;
case 0x4591d3:c.instructions+=1;goto B4591d3;
case 0x4591d6:goto L4591d6;
case 0x4591d8:c.instructions+=1;goto B4591d8;
case 0x4591da:goto L4591da;
case 0x4591dc:c.instructions+=4;goto B4591dc;
case 0x4591e0:c.instructions+=3;goto B4591e0;
case 0x4591e1:c.instructions+=2;goto B4591e1;
case 0x4591e3:c.instructions+=1;goto B4591e3;
case 0x4591e6:goto L4591e6;
case 0x4591e7:c.instructions+=5;goto B4591e7;
case 0x4591e8:c.instructions+=4;goto B4591e8;
case 0x4591e9:c.instructions+=3;goto B4591e9;
case 0x4591eb:c.instructions+=2;goto B4591eb;
case 0x4591ec:c.instructions+=1;goto B4591ec;
case 0x4591f0:goto L4591f0;
case 0x4591fa:c.instructions+=2;goto B4591fa;
case 0x4591fc:c.instructions+=1;goto B4591fc;
case 0x459200:goto L459200;
case 0x459201:c.instructions+=5;goto B459201;
case 0x459203:c.instructions+=4;goto B459203;
case 0x459206:c.instructions+=3;goto B459206;
case 0x459209:c.instructions+=2;goto B459209;
case 0x45920b:c.instructions+=1;goto B45920b;
case 0x45920d:goto L45920d;
case 0x459213:c.instructions+=2;goto B459213;
case 0x459215:c.instructions+=1;goto B459215;
case 0x459217:goto L459217;
case 0x45921b:c.instructions+=4;goto B45921b;
case 0x45921e:c.instructions+=3;goto B45921e;
case 0x459221:c.instructions+=2;goto B459221;
case 0x459227:c.instructions+=1;goto B459227;
case 0x45922c:goto L45922c;
case 0x459232:c.instructions+=2;goto B459232;
case 0x459233:c.instructions+=1;goto B459233;
case 0x459234:goto L459234;
case 0x45923e:c.instructions+=2;goto B45923e;
case 0x45923f:c.instructions+=1;goto B45923f;
case 0x459240:goto L459240;
case 0x459244:c.instructions+=2;goto B459244;
case 0x459247:c.instructions+=1;goto B459247;
case 0x45924d:goto L45924d;
case 0x459254:goto L459254;
case 0x459256:c.instructions+=1;goto B459256;
case 0x459257:goto L459257;
case 0x45925c:c.instructions+=1;goto B45925c;
case 0x45925d:goto L45925d;
case 0x459262:c.instructions+=1;goto B459262;
case 0x459263:goto L459263;
case 0x459268:c.instructions+=1;goto B459268;
case 0x459269:goto L459269;
case 0x45926e:c.instructions+=1;goto B45926e;
case 0x45926f:goto L45926f;
case 0x459274:c.instructions+=1;goto B459274;
case 0x459275:goto L459275;
case 0x45927a:c.instructions+=1;goto B45927a;
case 0x45927b:goto L45927b;
case 0x459280:c.instructions+=1;goto B459280;
case 0x459281:goto L459281;
case 0x459286:c.instructions+=1;goto B459286;
case 0x459287:goto L459287;
case 0x45928c:c.instructions+=1;goto B45928c;
case 0x45928d:goto L45928d;
case 0x459292:c.instructions+=1;goto B459292;
case 0x459293:goto L459293;
case 0x459298:c.instructions+=1;goto B459298;
case 0x459299:goto L459299;
case 0x45929e:c.instructions+=1;goto B45929e;
case 0x45929f:goto L45929f;
case 0x4592a4:c.instructions+=1;goto B4592a4;
case 0x4592a5:goto L4592a5;
case 0x4592aa:c.instructions+=1;goto B4592aa;
case 0x4592ab:goto L4592ab;
case 0x4592b0:c.instructions+=1;goto B4592b0;
case 0x4592b1:goto L4592b1;
case 0x4592b6:c.instructions+=1;goto B4592b6;
case 0x4592b7:goto L4592b7;
case 0x4592bc:c.instructions+=1;goto B4592bc;
case 0x4592bd:goto L4592bd;
case 0x4592c2:c.instructions+=1;goto B4592c2;
case 0x4592c3:goto L4592c3;
case 0x4592c8:c.instructions+=1;goto B4592c8;
case 0x4592c9:goto L4592c9;
case 0x4592ce:c.instructions+=1;goto B4592ce;
case 0x4592cf:goto L4592cf;
case 0x4592d4:c.instructions+=1;goto B4592d4;
case 0x4592d5:goto L4592d5;
case 0x4592da:c.instructions+=1;goto B4592da;
case 0x4592db:goto L4592db;
case 0x4592e0:c.instructions+=1;goto B4592e0;
case 0x4592e1:goto L4592e1;
case 0x4592e6:c.instructions+=1;goto B4592e6;
case 0x4592e7:goto L4592e7;
case 0x4592ec:c.instructions+=1;goto B4592ec;
case 0x4592ed:goto L4592ed;
case 0x4592f2:c.instructions+=1;goto B4592f2;
case 0x4592f3:goto L4592f3;
case 0x4592f8:c.instructions+=1;goto B4592f8;
case 0x4592f9:goto L4592f9;
case 0x4592fe:c.instructions+=1;goto B4592fe;
case 0x4592ff:goto L4592ff;
case 0x459304:c.instructions+=1;goto B459304;
case 0x459305:goto L459305;
case 0x45930a:c.instructions+=1;goto B45930a;
case 0x459390:goto L459390;
case 0x459395:c.instructions+=1;goto B459395;
case 0x4593a0:goto L4593a0;
case 0x4593a5:c.instructions+=1;goto B4593a5;
case 0x4593b0:goto L4593b0;
case 0x4593b1:c.instructions+=7;goto B4593b1;
case 0x4593b3:c.instructions+=6;goto B4593b3;
case 0x4593b7:c.instructions+=5;goto B4593b7;
case 0x4593ba:c.instructions+=4;goto B4593ba;
case 0x4593bd:c.instructions+=3;goto B4593bd;
case 0x4593be:c.instructions+=2;goto B4593be;
case 0x4593bf:c.instructions+=1;goto B4593bf;
case 0x4593c4:goto L4593c4;
case 0x4593c7:c.instructions+=5;goto B4593c7;
case 0x4593cd:c.instructions+=4;goto B4593cd;
case 0x4593cf:c.instructions+=3;goto B4593cf;
case 0x4593d1:c.instructions+=2;goto B4593d1;
case 0x4593d7:c.instructions+=1;goto B4593d7;
case 0x4593dc:goto L4593dc;
case 0x4593de:c.instructions+=1;goto B4593de;
case 0x4593e0:goto L4593e0;
case 0x4593ea:c.instructions+=1;goto B4593ea;
case 0x4593ec:goto L4593ec;
case 0x4593ee:c.instructions+=2;goto B4593ee;
case 0x4593f0:c.instructions+=1;goto B4593f0;
case 0x4593f5:goto L4593f5;
case 0x4593f7:c.instructions+=1;goto B4593f7;
case 0x4593f9:goto L4593f9;
case 0x459403:c.instructions+=1;goto B459403;
case 0x459405:goto L459405;
case 0x459407:c.instructions+=2;goto B459407;
case 0x459409:c.instructions+=1;goto B459409;
case 0x45940e:goto L45940e;
case 0x459410:c.instructions+=1;goto B459410;
case 0x459412:goto L459412;
case 0x45941c:c.instructions+=1;goto B45941c;
case 0x45941e:goto L45941e;
case 0x459428:goto L459428;
case 0x45942a:c.instructions+=2;goto B45942a;
case 0x45942c:c.instructions+=1;goto B45942c;
case 0x459431:goto L459431;
case 0x459433:c.instructions+=1;goto B459433;
case 0x459435:goto L459435;
case 0x459437:c.instructions+=1;goto B459437;
case 0x459439:goto L459439;
case 0x45943c:c.instructions+=1;goto B45943c;
case 0x45943e:goto L45943e;
case 0x459443:goto L459443;
case 0x459445:c.instructions+=3;goto B459445;
case 0x459447:c.instructions+=2;goto B459447;
case 0x45944d:c.instructions+=1;goto B45944d;
case 0x459452:goto L459452;
case 0x459454:c.instructions+=1;goto B459454;
case 0x459456:goto L459456;
case 0x459458:c.instructions+=1;goto B459458;
case 0x45945a:goto L45945a;
case 0x45945d:c.instructions+=1;goto B45945d;
case 0x45945f:goto L45945f;
case 0x459464:goto L459464;
case 0x459466:c.instructions+=3;goto B459466;
case 0x459468:c.instructions+=2;goto B459468;
case 0x45946e:c.instructions+=1;goto B45946e;
case 0x459473:goto L459473;
case 0x459475:c.instructions+=1;goto B459475;
case 0x459477:goto L459477;
case 0x459479:c.instructions+=1;goto B459479;
case 0x45947b:goto L45947b;
case 0x45947e:c.instructions+=1;goto B45947e;
case 0x459480:goto L459480;
case 0x459485:goto L459485;
case 0x459487:c.instructions+=3;goto B459487;
case 0x459489:c.instructions+=2;goto B459489;
case 0x45948f:c.instructions+=1;goto B45948f;
case 0x459494:goto L459494;
case 0x459496:c.instructions+=1;goto B459496;
case 0x459498:goto L459498;
case 0x45949a:c.instructions+=1;goto B45949a;
case 0x45949c:goto L45949c;
case 0x45949f:c.instructions+=1;goto B45949f;
case 0x4594a1:goto L4594a1;
case 0x4594a6:goto L4594a6;
case 0x4594ac:c.instructions+=15;goto B4594ac;
case 0x4594b2:c.instructions+=14;goto B4594b2;
case 0x4594b8:c.instructions+=13;goto B4594b8;
case 0x4594be:c.instructions+=12;goto B4594be;
case 0x4594c1:c.instructions+=11;goto B4594c1;
case 0x4594c4:c.instructions+=10;goto B4594c4;
case 0x4594cb:c.instructions+=9;goto B4594cb;
case 0x4594d1:c.instructions+=8;goto B4594d1;
case 0x4594d3:c.instructions+=7;goto B4594d3;
case 0x4594d6:c.instructions+=6;goto B4594d6;
case 0x4594d9:c.instructions+=5;goto B4594d9;
case 0x4594df:c.instructions+=4;goto B4594df;
case 0x4594e5:c.instructions+=3;goto B4594e5;
case 0x4594e8:c.instructions+=2;goto B4594e8;
case 0x4594ea:c.instructions+=1;goto B4594ea;
case 0x4594ec:goto L4594ec;
case 0x4594f3:c.instructions+=1;goto B4594f3;
case 0x4594f5:goto L4594f5;
case 0x4594fb:c.instructions+=8;goto B4594fb;
case 0x459502:c.instructions+=7;goto B459502;
case 0x459505:c.instructions+=6;goto B459505;
case 0x459508:c.instructions+=5;goto B459508;
case 0x45950d:c.instructions+=4;goto B45950d;
case 0x45950e:c.instructions+=3;goto B45950e;
case 0x459514:c.instructions+=2;goto B459514;
case 0x459515:c.instructions+=1;goto B459515;
case 0x459518:goto L459518;
case 0x459519:c.instructions+=4;goto B459519;
case 0x459520:c.instructions+=3;goto B459520;
case 0x45952a:c.instructions+=2;goto B45952a;
case 0x45952b:c.instructions+=1;goto B45952b;
case 0x459530:goto L459530;
case 0x45953a:c.instructions+=2;goto B45953a;
case 0x45953c:c.instructions+=1;goto B45953c;
case 0x459540:goto L459540;
case 0x45954a:c.instructions+=1;goto B45954a;
case 0x459550:goto L459550;
case 0x459554:c.instructions+=2;goto B459554;
case 0x459555:c.instructions+=1;goto B459555;
case 0x459557:goto L459557;
case 0x45955a:c.instructions+=1;goto B45955a;
case 0x45955c:goto L45955c;
case 0x45955d:c.instructions+=1;goto B45955d;
case 0x45955f:goto L45955f;
case 0x459563:c.instructions+=4;goto B459563;
case 0x459567:c.instructions+=3;goto B459567;
case 0x459569:c.instructions+=2;goto B459569;
case 0x459570:c.instructions+=1;goto B459570;
case 0x459572:goto L459572;
case 0x459578:goto L459578;
case 0x45957c:c.instructions+=4;goto B45957c;
case 0x459582:c.instructions+=3;goto B459582;
case 0x459584:c.instructions+=2;goto B459584;
case 0x459588:c.instructions+=1;goto B459588;
case 0x45958a:goto L45958a;
case 0x459590:goto L459590;
case 0x459596:c.instructions+=2;goto B459596;
case 0x459598:c.instructions+=1;goto B459598;
case 0x45959b:goto L45959b;
case 0x45959f:c.instructions+=6;goto B45959f;
case 0x4595a3:c.instructions+=5;goto B4595a3;
case 0x4595a5:c.instructions+=4;goto B4595a5;
case 0x4595a9:c.instructions+=3;goto B4595a9;
case 0x4595b0:c.instructions+=2;goto B4595b0;
case 0x4595b6:c.instructions+=1;goto B4595b6;
case 0x4595b8:goto L4595b8;
case 0x4595be:goto L4595be;
case 0x4595c4:goto L4595c4;
case 0x4595c6:c.instructions+=1;goto B4595c6;
case 0x4595d0:goto L4595d0;
case 0x4595d1:c.instructions+=9;goto B4595d1;
case 0x4595d6:c.instructions+=8;goto B4595d6;
case 0x4595d9:c.instructions+=7;goto B4595d9;
case 0x4595dd:c.instructions+=6;goto B4595dd;
case 0x4595e1:c.instructions+=5;goto B4595e1;
case 0x4595e7:c.instructions+=4;goto B4595e7;
case 0x4595ed:c.instructions+=3;goto B4595ed;
case 0x4595ef:c.instructions+=2;goto B4595ef;
case 0x4595f2:c.instructions+=1;goto B4595f2;
case 0x4595f4:goto L4595f4;
case 0x4595f9:c.instructions+=2;goto B4595f9;
case 0x4595fa:c.instructions+=1;goto B4595fa;
case 0x4595fb:goto L4595fb;
case 0x4595fd:c.instructions+=2;goto B4595fd;
case 0x4595fe:c.instructions+=1;goto B4595fe;
case 0x459600:goto L459600;
case 0x459603:c.instructions+=6;goto B459603;
case 0x459604:c.instructions+=5;goto B459604;
case 0x459605:c.instructions+=4;goto B459605;
case 0x459609:c.instructions+=3;goto B459609;
case 0x45960b:c.instructions+=2;goto B45960b;
case 0x45960d:c.instructions+=1;goto B45960d;
case 0x459612:goto L459612;
case 0x459614:c.instructions+=1;goto B459614;
case 0x459616:goto L459616;
case 0x45961b:goto L45961b;
case 0x45961d:c.instructions+=1;goto B45961d;
case 0x459622:goto L459622;
case 0x459624:c.instructions+=1;goto B459624;
case 0x459626:goto L459626;
case 0x459629:goto L459629;
case 0x45962b:c.instructions+=1;goto B45962b;
case 0x459630:goto L459630;
case 0x459632:c.instructions+=1;goto B459632;
case 0x459634:goto L459634;
case 0x459637:goto L459637;
case 0x459639:c.instructions+=1;goto B459639;
case 0x45963e:goto L45963e;
case 0x459640:c.instructions+=1;goto B459640;
case 0x459642:goto L459642;
case 0x459645:goto L459645;
case 0x459649:c.instructions+=5;goto B459649;
case 0x45964a:c.instructions+=4;goto B45964a;
case 0x45964e:c.instructions+=3;goto B45964e;
case 0x45964f:c.instructions+=2;goto B45964f;
case 0x459651:c.instructions+=1;goto B459651;
case 0x459656:goto L459656;
case 0x45965a:c.instructions+=2;goto B45965a;
case 0x45965c:c.instructions+=1;goto B45965c;
case 0x45965e:goto L45965e;
case 0x459662:c.instructions+=2;goto B459662;
case 0x459664:c.instructions+=1;goto B459664;
case 0x459666:goto L459666;
case 0x459669:goto L459669;
case 0x45966a:c.instructions+=4;goto B45966a;
case 0x45966c:c.instructions+=3;goto B45966c;
case 0x45966d:c.instructions+=2;goto B45966d;
case 0x459670:c.instructions+=1;goto B459670;
case 0x459680:goto L459680;
case 0x459683:c.instructions+=4;goto B459683;
case 0x459684:c.instructions+=3;goto B459684;
case 0x459688:c.instructions+=2;goto B459688;
case 0x45968a:c.instructions+=1;goto B45968a;
case 0x45968f:goto L45968f;
case 0x459691:c.instructions+=1;goto B459691;
case 0x459693:goto L459693;
case 0x459698:c.instructions+=3;goto B459698;
case 0x459699:c.instructions+=2;goto B459699;
case 0x45969c:c.instructions+=1;goto B45969c;
case 0x45969d:goto L45969d;
case 0x4596a1:c.instructions+=7;goto B4596a1;
case 0x4596a2:c.instructions+=6;goto B4596a2;
case 0x4596a6:c.instructions+=5;goto B4596a6;
case 0x4596a7:c.instructions+=4;goto B4596a7;
case 0x4596a9:c.instructions+=3;goto B4596a9;
case 0x4596b1:c.instructions+=2;goto B4596b1;
case 0x4596b9:c.instructions+=1;goto B4596b9;
case 0x4596be:goto L4596be;
case 0x4596c2:c.instructions+=3;goto B4596c2;
case 0x4596c4:c.instructions+=2;goto B4596c4;
case 0x4596c8:c.instructions+=1;goto B4596c8;
case 0x4596ca:goto L4596ca;
case 0x4596cc:c.instructions+=1;goto B4596cc;
case 0x4596ce:goto L4596ce;
case 0x4596d3:c.instructions+=3;goto B4596d3;
case 0x4596d4:c.instructions+=2;goto B4596d4;
case 0x4596d7:c.instructions+=1;goto B4596d7;
case 0x4596d8:goto L4596d8;
case 0x4596da:c.instructions+=3;goto B4596da;
case 0x4596db:c.instructions+=2;goto B4596db;
case 0x4596de:c.instructions+=1;goto B4596de;
case 0x4596e0:goto L4596e0;
case 0x4596e2:c.instructions+=10;goto B4596e2;
case 0x4596e7:c.instructions+=9;goto B4596e7;
case 0x4596ed:c.instructions+=8;goto B4596ed;
case 0x4596ee:c.instructions+=7;goto B4596ee;
case 0x4596f5:c.instructions+=6;goto B4596f5;
case 0x4596f6:c.instructions+=5;goto B4596f6;
case 0x4596f7:c.instructions+=4;goto B4596f7;
case 0x4596f9:c.instructions+=3;goto B4596f9;
case 0x4596ff:c.instructions+=2;goto B4596ff;
case 0x459701:c.instructions+=1;goto B459701;
case 0x459703:goto L459703;
case 0x459708:c.instructions+=2;goto B459708;
case 0x45970a:c.instructions+=1;goto B45970a;
case 0x45970c:goto L45970c;
case 0x45970e:c.instructions+=1;goto B45970e;
case 0x459713:goto L459713;
case 0x459716:c.instructions+=4;goto B459716;
case 0x45971a:c.instructions+=3;goto B45971a;
case 0x45971c:c.instructions+=2;goto B45971c;
case 0x459724:c.instructions+=1;goto B459724;
case 0x459726:goto L459726;
case 0x45972c:c.instructions+=11;goto B45972c;
case 0x459732:c.instructions+=10;goto B459732;
case 0x459733:c.instructions+=9;goto B459733;
case 0x459739:c.instructions+=8;goto B459739;
case 0x45973a:c.instructions+=7;goto B45973a;
case 0x459740:c.instructions+=6;goto B459740;
case 0x459741:c.instructions+=5;goto B459741;
case 0x459747:c.instructions+=4;goto B459747;
case 0x459748:c.instructions+=3;goto B459748;
case 0x459749:c.instructions+=2;goto B459749;
case 0x45974b:c.instructions+=1;goto B45974b;
case 0x459750:goto L459750;
case 0x459752:goto L459752;
case 0x459754:goto L459754;
case 0x45975a:c.instructions+=1;goto B45975a;
case 0x459760:goto L459760;
case 0x459764:c.instructions+=4;goto B459764;
case 0x459765:c.instructions+=3;goto B459765;
case 0x45976c:c.instructions+=2;goto B45976c;
case 0x45976f:c.instructions+=1;goto B45976f;
case 0x459770:goto L459770;
case 0x459776:c.instructions+=2;goto B459776;
case 0x459778:c.instructions+=1;goto B459778;
case 0x45977e:goto L45977e;
case 0x459784:c.instructions+=2;goto B459784;
case 0x459786:c.instructions+=1;goto B459786;
case 0x459788:goto L459788;
case 0x45978a:c.instructions+=1;goto B45978a;
case 0x45978c:goto L45978c;
case 0x459791:c.instructions+=1;goto B459791;
case 0x459793:goto L459793;
case 0x459798:goto L459798;
case 0x45979b:c.instructions+=4;goto B45979b;
case 0x4597a1:c.instructions+=3;goto B4597a1;
case 0x4597a3:c.instructions+=2;goto B4597a3;
case 0x4597a9:c.instructions+=1;goto B4597a9;
case 0x4597ab:goto L4597ab;
case 0x4597ad:c.instructions+=1;goto B4597ad;
case 0x4597af:goto L4597af;
case 0x4597b4:c.instructions+=1;goto B4597b4;
case 0x4597b6:goto L4597b6;
case 0x4597bb:goto L4597bb;
case 0x4597be:c.instructions+=4;goto B4597be;
case 0x4597c4:c.instructions+=3;goto B4597c4;
case 0x4597c6:c.instructions+=2;goto B4597c6;
case 0x4597cc:c.instructions+=1;goto B4597cc;
case 0x4597ce:goto L4597ce;
case 0x4597d0:c.instructions+=1;goto B4597d0;
case 0x4597d2:goto L4597d2;
case 0x4597d7:c.instructions+=1;goto B4597d7;
case 0x4597d9:goto L4597d9;
case 0x4597de:goto L4597de;
case 0x4597e1:c.instructions+=4;goto B4597e1;
case 0x4597e7:c.instructions+=3;goto B4597e7;
case 0x4597e9:c.instructions+=2;goto B4597e9;
case 0x4597ef:c.instructions+=1;goto B4597ef;
case 0x4597f1:goto L4597f1;
case 0x4597f3:c.instructions+=1;goto B4597f3;
case 0x4597f5:goto L4597f5;
case 0x4597f8:c.instructions+=1;goto B4597f8;
case 0x4597fa:goto L4597fa;
case 0x4597ff:goto L4597ff;
case 0x459802:c.instructions+=4;goto B459802;
case 0x459808:c.instructions+=3;goto B459808;
case 0x45980a:c.instructions+=2;goto B45980a;
case 0x45980c:c.instructions+=1;goto B45980c;
case 0x45980e:goto L45980e;
case 0x459811:c.instructions+=2;goto B459811;
case 0x459812:c.instructions+=1;goto B459812;
case 0x459817:goto L459817;
case 0x459820:goto L459820;
case 0x459821:c.instructions+=3;goto B459821;
case 0x459827:c.instructions+=2;goto B459827;
case 0x459829:c.instructions+=1;goto B459829;
case 0x45982b:goto L45982b;
case 0x45982d:c.instructions+=3;goto B45982d;
case 0x45982f:c.instructions+=2;goto B45982f;
case 0x459837:c.instructions+=1;goto B459837;
case 0x459839:goto L459839;
case 0x45983d:c.instructions+=3;goto B45983d;
case 0x45983e:c.instructions+=2;goto B45983e;
case 0x459840:c.instructions+=1;goto B459840;
case 0x459845:goto L459845;
case 0x459849:c.instructions+=3;goto B459849;
case 0x45984e:c.instructions+=2;goto B45984e;
case 0x459850:c.instructions+=1;goto B459850;
case 0x459852:goto L459852;
case 0x459854:goto L459854;
case 0x459855:c.instructions+=1;goto B459855;
case 0x459860:goto L459860;
case 0x459866:c.instructions+=2;goto B459866;
case 0x459868:c.instructions+=1;goto B459868;
case 0x45986a:goto L45986a;
case 0x45986c:c.instructions+=1;goto B45986c;
case 0x45986d:goto L45986d;
case 0x459870:c.instructions+=1;goto B459870;
case 0x459880:goto L459880;
case 0x459883:c.instructions+=3;goto B459883;
case 0x459885:c.instructions+=2;goto B459885;
case 0x459888:c.instructions+=1;goto B459888;
case 0x459890:goto L459890;
case 0x459893:c.instructions+=6;goto B459893;
case 0x459896:c.instructions+=5;goto B459896;
case 0x45989c:c.instructions+=4;goto B45989c;
case 0x45989f:c.instructions+=3;goto B45989f;
case 0x4598a1:c.instructions+=2;goto B4598a1;
case 0x4598a4:c.instructions+=1;goto B4598a4;
case 0x4598a6:goto L4598a6;
case 0x4598a8:c.instructions+=1;goto B4598a8;
case 0x4598a9:goto L4598a9;
case 0x4598ab:c.instructions+=1;goto B4598ab;
case 0x4598b0:goto L4598b0;
case 0x4598b6:c.instructions+=5;goto B4598b6;
case 0x4598b8:c.instructions+=4;goto B4598b8;
case 0x4598ba:c.instructions+=3;goto B4598ba;
case 0x4598bc:c.instructions+=2;goto B4598bc;
case 0x4598bf:c.instructions+=1;goto B4598bf;
case 0x4598c0:goto L4598c0;
case 0x4598c1:c.instructions+=7;goto B4598c1;
case 0x4598c3:c.instructions+=6;goto B4598c3;
case 0x4598c6:c.instructions+=5;goto B4598c6;
case 0x4598c8:c.instructions+=4;goto B4598c8;
case 0x4598cb:c.instructions+=3;goto B4598cb;
case 0x4598ce:c.instructions+=2;goto B4598ce;
case 0x4598d0:c.instructions+=1;goto B4598d0;
case 0x4598d3:goto L4598d3;
case 0x4598d6:c.instructions+=8;goto B4598d6;
case 0x4598d8:c.instructions+=7;goto B4598d8;
case 0x4598db:c.instructions+=6;goto B4598db;
case 0x4598df:c.instructions+=5;goto B4598df;
case 0x4598e2:c.instructions+=4;goto B4598e2;
case 0x4598e3:c.instructions+=3;goto B4598e3;
case 0x4598e6:c.instructions+=2;goto B4598e6;
case 0x4598e9:c.instructions+=1;goto B4598e9;
case 0x4598eb:goto L4598eb;
case 0x4598ee:c.instructions+=2;goto B4598ee;
case 0x4598ef:c.instructions+=1;goto B4598ef;
case 0x4598f0:goto L4598f0;
case 0x4598f3:c.instructions+=2;goto B4598f3;
case 0x4598f6:c.instructions+=1;goto B4598f6;
case 0x4598f8:goto L4598f8;
case 0x4598fb:c.instructions+=1;goto B4598fb;
case 0x4598fe:goto L4598fe;
case 0x459902:c.instructions+=9;goto B459902;
case 0x459908:c.instructions+=8;goto B459908;
case 0x45990c:c.instructions+=7;goto B45990c;
case 0x45990f:c.instructions+=6;goto B45990f;
case 0x459913:c.instructions+=5;goto B459913;
case 0x459917:c.instructions+=4;goto B459917;
case 0x45991d:c.instructions+=3;goto B45991d;
case 0x45991f:c.instructions+=2;goto B45991f;
case 0x459922:c.instructions+=1;goto B459922;
case 0x459924:goto L459924;
case 0x45992a:goto L45992a;
case 0x45992d:c.instructions+=15;goto B45992d;
case 0x459931:c.instructions+=14;goto B459931;
case 0x459935:c.instructions+=13;goto B459935;
case 0x459938:c.instructions+=12;goto B459938;
case 0x45993c:c.instructions+=11;goto B45993c;
case 0x459940:c.instructions+=10;goto B459940;
case 0x459943:c.instructions+=9;goto B459943;
case 0x459947:c.instructions+=8;goto B459947;
case 0x45994b:c.instructions+=7;goto B45994b;
case 0x45994e:c.instructions+=6;goto B45994e;
case 0x459950:c.instructions+=5;goto B459950;
case 0x459954:c.instructions+=4;goto B459954;
case 0x459957:c.instructions+=3;goto B459957;
case 0x459959:c.instructions+=2;goto B459959;
case 0x45995c:c.instructions+=1;goto B45995c;
case 0x45995e:goto L45995e;
case 0x459961:c.instructions+=1;goto B459961;
case 0x459964:goto L459964;
case 0x459965:c.instructions+=2;goto B459965;
case 0x459968:c.instructions+=1;goto B459968;
case 0x459970:goto L459970;
case 0x459972:c.instructions+=9;goto B459972;
case 0x459974:c.instructions+=8;goto B459974;
case 0x459977:c.instructions+=7;goto B459977;
case 0x459979:c.instructions+=6;goto B459979;
case 0x45997c:c.instructions+=5;goto B45997c;
case 0x45997f:c.instructions+=4;goto B45997f;
case 0x459982:c.instructions+=3;goto B459982;
case 0x459985:c.instructions+=2;goto B459985;
case 0x459989:c.instructions+=1;goto B459989;
case 0x459990:goto L459990;
case 0x459994:c.instructions+=6;goto B459994;
case 0x45999a:c.instructions+=5;goto B45999a;
case 0x45999d:c.instructions+=4;goto B45999d;
case 0x4599a3:c.instructions+=3;goto B4599a3;
case 0x4599a5:c.instructions+=2;goto B4599a5;
case 0x4599a8:c.instructions+=1;goto B4599a8;
case 0x4599aa:goto L4599aa;
case 0x4599b1:goto L4599b1;
case 0x4599b5:c.instructions+=9;goto B4599b5;
case 0x4599b9:c.instructions+=8;goto B4599b9;
case 0x4599bc:c.instructions+=7;goto B4599bc;
case 0x4599c0:c.instructions+=6;goto B4599c0;
case 0x4599c3:c.instructions+=5;goto B4599c3;
case 0x4599c6:c.instructions+=4;goto B4599c6;
case 0x4599ca:c.instructions+=3;goto B4599ca;
case 0x4599cd:c.instructions+=2;goto B4599cd;
case 0x4599d3:c.instructions+=1;goto B4599d3;
case 0x4599e0:goto L4599e0;
case 0x4599e1:c.instructions+=10;goto B4599e1;
case 0x4599e4:c.instructions+=9;goto B4599e4;
case 0x4599e7:c.instructions+=8;goto B4599e7;
case 0x4599ea:c.instructions+=7;goto B4599ea;
case 0x4599ed:c.instructions+=6;goto B4599ed;
case 0x4599ef:c.instructions+=5;goto B4599ef;
case 0x4599f3:c.instructions+=4;goto B4599f3;
case 0x4599f9:c.instructions+=3;goto B4599f9;
case 0x4599fb:c.instructions+=2;goto B4599fb;
case 0x4599fe:c.instructions+=1;goto B4599fe;
case 0x459a00:goto L459a00;
case 0x459a04:c.instructions+=5;goto B459a04;
case 0x459a0a:c.instructions+=4;goto B459a0a;
case 0x459a0e:c.instructions+=3;goto B459a0e;
case 0x459a10:c.instructions+=2;goto B459a10;
case 0x459a13:c.instructions+=1;goto B459a13;
case 0x459a15:goto L459a15;
case 0x459a17:c.instructions+=1;goto B459a17;
case 0x459a1d:goto L459a1d;
case 0x459a20:c.instructions+=8;goto B459a20;
case 0x459a24:c.instructions+=7;goto B459a24;
case 0x459a26:c.instructions+=6;goto B459a26;
case 0x459a28:c.instructions+=5;goto B459a28;
case 0x459a2a:c.instructions+=4;goto B459a2a;
case 0x459a2d:c.instructions+=3;goto B459a2d;
case 0x459a2f:c.instructions+=2;goto B459a2f;
case 0x459a30:c.instructions+=1;goto B459a30;
case 0x459a31:goto L459a31;
case 0x459a37:c.instructions+=9;goto B459a37;
case 0x459a3b:c.instructions+=8;goto B459a3b;
case 0x459a3e:c.instructions+=7;goto B459a3e;
case 0x459a40:c.instructions+=6;goto B459a40;
case 0x459a42:c.instructions+=5;goto B459a42;
case 0x459a44:c.instructions+=4;goto B459a44;
case 0x459a47:c.instructions+=3;goto B459a47;
case 0x459a49:c.instructions+=2;goto B459a49;
case 0x459a4a:c.instructions+=1;goto B459a4a;
case 0x459a50:goto L459a50;
case 0x459a51:c.instructions+=2;goto B459a51;
case 0x459a58:c.instructions+=1;goto B459a58;
case 0x459a5a:goto L459a5a;
case 0x459a5f:c.instructions+=3;goto B459a5f;
case 0x459a62:c.instructions+=2;goto B459a62;
case 0x459a63:c.instructions+=1;goto B459a63;
case 0x459a64:goto L459a64;
case 0x459a65:c.instructions+=10;goto B459a65;
case 0x459a69:c.instructions+=9;goto B459a69;
case 0x459a6a:c.instructions+=8;goto B459a6a;
case 0x459a70:c.instructions+=7;goto B459a70;
case 0x459a73:c.instructions+=6;goto B459a73;
case 0x459a74:c.instructions+=5;goto B459a74;
case 0x459a7a:c.instructions+=4;goto B459a7a;
case 0x459a7d:c.instructions+=3;goto B459a7d;
case 0x459a7e:c.instructions+=2;goto B459a7e;
case 0x459a7f:c.instructions+=1;goto B459a7f;
case 0x459a84:goto L459a84;
case 0x459a88:c.instructions+=5;goto B459a88;
case 0x459a8b:c.instructions+=4;goto B459a8b;
case 0x459a8e:c.instructions+=3;goto B459a8e;
case 0x459a8f:c.instructions+=2;goto B459a8f;
case 0x459a90:c.instructions+=1;goto B459a90;
case 0x459a95:goto L459a95;
case 0x459a99:c.instructions+=4;goto B459a99;
case 0x459a9c:c.instructions+=3;goto B459a9c;
case 0x459a9e:c.instructions+=2;goto B459a9e;
case 0x459aa1:c.instructions+=1;goto B459aa1;
case 0x459aa3:goto L459aa3;
case 0x459aa6:c.instructions+=5;goto B459aa6;
case 0x459aa7:c.instructions+=4;goto B459aa7;
case 0x459aa8:c.instructions+=3;goto B459aa8;
case 0x459aa9:c.instructions+=2;goto B459aa9;
case 0x459aaa:c.instructions+=1;goto B459aaa;
case 0x459aab:goto L459aab;
case 0x459aae:c.instructions+=5;goto B459aae;
case 0x459aaf:c.instructions+=4;goto B459aaf;
case 0x459ab0:c.instructions+=3;goto B459ab0;
case 0x459ab1:c.instructions+=2;goto B459ab1;
case 0x459ab2:c.instructions+=1;goto B459ab2;
case 0x459ac0:goto L459ac0;
case 0x459ac1:c.instructions+=2;goto B459ac1;
case 0x459ac8:c.instructions+=1;goto B459ac8;
case 0x459aca:goto L459aca;
case 0x459acf:c.instructions+=2;goto B459acf;
case 0x459ad0:c.instructions+=1;goto B459ad0;
case 0x459ad1:goto L459ad1;
case 0x459ad2:c.instructions+=10;goto B459ad2;
case 0x459ad6:c.instructions+=9;goto B459ad6;
case 0x459ad7:c.instructions+=8;goto B459ad7;
case 0x459add:c.instructions+=7;goto B459add;
case 0x459ae0:c.instructions+=6;goto B459ae0;
case 0x459ae1:c.instructions+=5;goto B459ae1;
case 0x459ae7:c.instructions+=4;goto B459ae7;
case 0x459aea:c.instructions+=3;goto B459aea;
case 0x459aeb:c.instructions+=2;goto B459aeb;
case 0x459aec:c.instructions+=1;goto B459aec;
case 0x459af1:goto L459af1;
case 0x459af5:c.instructions+=5;goto B459af5;
case 0x459af8:c.instructions+=4;goto B459af8;
case 0x459afb:c.instructions+=3;goto B459afb;
case 0x459afc:c.instructions+=2;goto B459afc;
case 0x459afd:c.instructions+=1;goto B459afd;
case 0x459b02:goto L459b02;
case 0x459b06:c.instructions+=5;goto B459b06;
case 0x459b09:c.instructions+=4;goto B459b09;
case 0x459b0b:c.instructions+=3;goto B459b0b;
case 0x459b0e:c.instructions+=2;goto B459b0e;
case 0x459b10:c.instructions+=1;goto B459b10;
case 0x459b12:goto L459b12;
case 0x459b14:goto L459b14;
case 0x459b15:c.instructions+=4;goto B459b15;
case 0x459b16:c.instructions+=3;goto B459b16;
case 0x459b17:c.instructions+=2;goto B459b17;
case 0x459b18:c.instructions+=1;goto B459b18;
case 0x459b20:goto L459b20;
case 0x459b22:c.instructions+=13;goto B459b22;
case 0x459b27:c.instructions+=12;goto B459b27;
case 0x459b2d:c.instructions+=11;goto B459b2d;
case 0x459b2e:c.instructions+=10;goto B459b2e;
case 0x459b35:c.instructions+=9;goto B459b35;
case 0x459b36:c.instructions+=8;goto B459b36;
case 0x459b37:c.instructions+=7;goto B459b37;
case 0x459b39:c.instructions+=6;goto B459b39;
case 0x459b3d:c.instructions+=5;goto B459b3d;
case 0x459b43:c.instructions+=4;goto B459b43;
case 0x459b48:c.instructions+=3;goto B459b48;
case 0x459b49:c.instructions+=2;goto B459b49;
case 0x459b51:c.instructions+=1;goto B459b51;
case 0x459b56:goto L459b56;
case 0x459b5a:c.instructions+=7;goto B459b5a;
case 0x459b5d:c.instructions+=6;goto B459b5d;
case 0x459b67:c.instructions+=5;goto B459b67;
case 0x459b6d:c.instructions+=4;goto B459b6d;
case 0x459b6e:c.instructions+=3;goto B459b6e;
case 0x459b75:c.instructions+=2;goto B459b75;
case 0x459b78:c.instructions+=1;goto B459b78;
case 0x459b80:goto L459b80;
case 0x459b82:c.instructions+=38;goto B459b82;
case 0x459b84:c.instructions+=37;goto B459b84;
case 0x459b8a:c.instructions+=36;goto B459b8a;
case 0x459b8d:c.instructions+=35;goto B459b8d;
case 0x459b90:c.instructions+=34;goto B459b90;
case 0x459b93:c.instructions+=33;goto B459b93;
case 0x459b96:c.instructions+=32;goto B459b96;
case 0x459b99:c.instructions+=31;goto B459b99;
case 0x459b9c:c.instructions+=30;goto B459b9c;
case 0x459ba3:c.instructions+=29;goto B459ba3;
case 0x459ba9:c.instructions+=28;goto B459ba9;
case 0x459baf:c.instructions+=27;goto B459baf;
case 0x459bb2:c.instructions+=26;goto B459bb2;
case 0x459bb5:c.instructions+=25;goto B459bb5;
case 0x459bb8:c.instructions+=24;goto B459bb8;
case 0x459bbb:c.instructions+=23;goto B459bbb;
case 0x459bbe:c.instructions+=22;goto B459bbe;
case 0x459bc4:c.instructions+=21;goto B459bc4;
case 0x459bca:c.instructions+=20;goto B459bca;
case 0x459bd0:c.instructions+=19;goto B459bd0;
case 0x459bd3:c.instructions+=18;goto B459bd3;
case 0x459bd9:c.instructions+=17;goto B459bd9;
case 0x459bdf:c.instructions+=16;goto B459bdf;
case 0x459be5:c.instructions+=15;goto B459be5;
case 0x459beb:c.instructions+=14;goto B459beb;
case 0x459bee:c.instructions+=13;goto B459bee;
case 0x459bf1:c.instructions+=12;goto B459bf1;
case 0x459bf2:c.instructions+=11;goto B459bf2;
case 0x459bf3:c.instructions+=10;goto B459bf3;
case 0x459bfa:c.instructions+=9;goto B459bfa;
case 0x459c01:c.instructions+=8;goto B459c01;
case 0x459c04:c.instructions+=7;goto B459c04;
case 0x459c07:c.instructions+=6;goto B459c07;
case 0x459c0d:c.instructions+=5;goto B459c0d;
case 0x459c10:c.instructions+=4;goto B459c10;
case 0x459c13:c.instructions+=3;goto B459c13;
case 0x459c19:c.instructions+=2;goto B459c19;
case 0x459c1b:c.instructions+=1;goto B459c1b;
case 0x459c20:goto L459c20;
case 0x459c25:c.instructions+=5;goto B459c25;
case 0x459c27:c.instructions+=4;goto B459c27;
case 0x459c29:c.instructions+=3;goto B459c29;
case 0x459c2a:c.instructions+=2;goto B459c2a;
case 0x459c2d:c.instructions+=1;goto B459c2d;
case 0x459c2f:goto L459c2f;
case 0x459c31:c.instructions+=21;goto B459c31;
case 0x459c37:c.instructions+=20;goto B459c37;
case 0x459c3d:c.instructions+=19;goto B459c3d;
case 0x459c43:c.instructions+=18;goto B459c43;
case 0x459c49:c.instructions+=17;goto B459c49;
case 0x459c4f:c.instructions+=16;goto B459c4f;
case 0x459c52:c.instructions+=15;goto B459c52;
case 0x459c53:c.instructions+=14;goto B459c53;
case 0x459c5d:c.instructions+=13;goto B459c5d;
case 0x459c67:c.instructions+=12;goto B459c67;
case 0x459c6d:c.instructions+=11;goto B459c6d;
case 0x459c73:c.instructions+=10;goto B459c73;
case 0x459c79:c.instructions+=9;goto B459c79;
case 0x459c7f:c.instructions+=8;goto B459c7f;
case 0x459c85:c.instructions+=7;goto B459c85;
case 0x459c8b:c.instructions+=6;goto B459c8b;
case 0x459c91:c.instructions+=5;goto B459c91;
case 0x459c97:c.instructions+=4;goto B459c97;
case 0x459c9d:c.instructions+=3;goto B459c9d;
case 0x459ca3:c.instructions+=2;goto B459ca3;
case 0x459ca4:c.instructions+=1;goto B459ca4;
case 0x459cb0:goto L459cb0;
case 0x459cb2:c.instructions+=15;goto B459cb2;
case 0x459cb7:c.instructions+=14;goto B459cb7;
case 0x459cbd:c.instructions+=13;goto B459cbd;
case 0x459cbe:c.instructions+=12;goto B459cbe;
case 0x459cc5:c.instructions+=11;goto B459cc5;
case 0x459cc6:c.instructions+=10;goto B459cc6;
case 0x459cc7:c.instructions+=9;goto B459cc7;
case 0x459cc9:c.instructions+=8;goto B459cc9;
case 0x459cca:c.instructions+=7;goto B459cca;
case 0x459cce:c.instructions+=6;goto B459cce;
case 0x459cd4:c.instructions+=5;goto B459cd4;
case 0x459cd9:c.instructions+=4;goto B459cd9;
case 0x459cdb:c.instructions+=3;goto B459cdb;
case 0x459cdd:c.instructions+=2;goto B459cdd;
case 0x459ce1:c.instructions+=1;goto B459ce1;
case 0x459ce3:goto L459ce3;
case 0x459ce4:c.instructions+=1;goto B459ce4;
case 0x459ce9:goto L459ce9;
case 0x459cec:c.instructions+=1;goto B459cec;
case 0x459cf2:goto L459cf2;
case 0x459cf7:c.instructions+=2;goto B459cf7;
case 0x459cf9:c.instructions+=1;goto B459cf9;
case 0x459cfb:goto L459cfb;
case 0x459cfc:c.instructions+=1;goto B459cfc;
case 0x459d01:goto L459d01;
case 0x459d04:c.instructions+=1;goto B459d04;
case 0x459d0a:goto L459d0a;
case 0x459d10:c.instructions+=1;goto B459d10;
case 0x459d12:goto L459d12;
case 0x459d18:goto L459d18;
case 0x459d1b:c.instructions+=1;goto B459d1b;
case 0x459d1d:goto L459d1d;
case 0x459d20:goto L459d20;
case 0x459d24:c.instructions+=6;goto B459d24;
case 0x459d2a:c.instructions+=5;goto B459d2a;
case 0x459d2b:c.instructions+=4;goto B459d2b;
case 0x459d2c:c.instructions+=3;goto B459d2c;
case 0x459d33:c.instructions+=2;goto B459d33;
case 0x459d36:c.instructions+=1;goto B459d36;
case 0x459d40:goto L459d40;
case 0x459d44:c.instructions+=17;goto B459d44;
case 0x459d46:c.instructions+=16;goto B459d46;
case 0x459d4d:c.instructions+=15;goto B459d4d;
case 0x459d50:c.instructions+=14;goto B459d50;
case 0x459d56:c.instructions+=13;goto B459d56;
case 0x459d57:c.instructions+=12;goto B459d57;
case 0x459d58:c.instructions+=11;goto B459d58;
case 0x459d59:c.instructions+=10;goto B459d59;
case 0x459d5f:c.instructions+=9;goto B459d5f;
case 0x459d64:c.instructions+=8;goto B459d64;
case 0x459d66:c.instructions+=7;goto B459d66;
case 0x459d6c:c.instructions+=6;goto B459d6c;
case 0x459d71:c.instructions+=5;goto B459d71;
case 0x459d73:c.instructions+=4;goto B459d73;
case 0x459d75:c.instructions+=3;goto B459d75;
case 0x459d7b:c.instructions+=2;goto B459d7b;
case 0x459d7c:c.instructions+=1;goto B459d7c;
case 0x459d81:goto L459d81;
case 0x459d84:c.instructions+=2;goto B459d84;
case 0x459d85:c.instructions+=1;goto B459d85;
case 0x459d90:goto L459d90;
case 0x459d95:c.instructions+=1;goto B459d95;
case 0x459d97:goto L459d97;
case 0x459d9c:c.instructions+=3;goto B459d9c;
case 0x459da1:c.instructions+=2;goto B459da1;
case 0x459da6:c.instructions+=1;goto B459da6;
case 0x459da8:goto L459da8;
case 0x459dae:c.instructions+=2;goto B459dae;
case 0x459db3:c.instructions+=1;goto B459db3;
case 0x459db9:goto L459db9;
case 0x459dbe:c.instructions+=2;goto B459dbe;
case 0x459dc3:c.instructions+=1;goto B459dc3;
case 0x459dc8:goto L459dc8;
case 0x459dcb:c.instructions+=1;goto B459dcb;
case 0x459dcd:goto L459dcd;
case 0x459dd3:c.instructions+=2;goto B459dd3;
case 0x459dd7:c.instructions+=1;goto B459dd7;
case 0x459dd9:goto L459dd9;
case 0x459dde:c.instructions+=2;goto B459dde;
case 0x459de3:c.instructions+=1;goto B459de3;
case 0x459de6:goto L459de6;
case 0x459dec:c.instructions+=1;goto B459dec;
case 0x459df2:goto L459df2;
case 0x459e00:goto L459e00;
case 0x459e04:c.instructions+=3;goto B459e04;
case 0x459e06:c.instructions+=2;goto B459e06;
case 0x459e08:c.instructions+=1;goto B459e08;
case 0x459e0a:goto L459e0a;
case 0x459e10:c.instructions+=2;goto B459e10;
case 0x459e12:c.instructions+=1;goto B459e12;
case 0x459e14:goto L459e14;
case 0x459e15:c.instructions+=5;goto B459e15;
case 0x459e1b:c.instructions+=4;goto B459e1b;
case 0x459e1d:c.instructions+=3;goto B459e1d;
case 0x459e1f:c.instructions+=2;goto B459e1f;
case 0x459e20:c.instructions+=1;goto B459e20;
case 0x459e22:goto L459e22;
case 0x459e28:c.instructions+=2;goto B459e28;
case 0x459e2a:c.instructions+=1;goto B459e2a;
case 0x459e2c:goto L459e2c;
case 0x459e32:c.instructions+=2;goto B459e32;
case 0x459e34:c.instructions+=1;goto B459e34;
case 0x459e36:goto L459e36;
case 0x459e38:goto L459e38;
case 0x459e40:goto L459e40;
case 0x459e44:c.instructions+=11;goto B459e44;
case 0x459e45:c.instructions+=10;goto B459e45;
case 0x459e46:c.instructions+=9;goto B459e46;
case 0x459e48:c.instructions+=8;goto B459e48;
case 0x459e4b:c.instructions+=7;goto B459e4b;
case 0x459e4e:c.instructions+=6;goto B459e4e;
case 0x459e4f:c.instructions+=5;goto B459e4f;
case 0x459e52:c.instructions+=4;goto B459e52;
case 0x459e55:c.instructions+=3;goto B459e55;
case 0x459e5b:c.instructions+=2;goto B459e5b;
case 0x459e60:c.instructions+=1;goto B459e60;
case 0x459e62:goto L459e62;
case 0x459e65:c.instructions+=4;goto B459e65;
case 0x459e67:c.instructions+=3;goto B459e67;
case 0x459e6a:c.instructions+=2;goto B459e6a;
case 0x459e6b:c.instructions+=1;goto B459e6b;
case 0x459e6d:goto L459e6d;
case 0x459e72:c.instructions+=6;goto B459e72;
case 0x459e78:c.instructions+=5;goto B459e78;
case 0x459e7d:c.instructions+=4;goto B459e7d;
case 0x459e7e:c.instructions+=3;goto B459e7e;
case 0x459e81:c.instructions+=2;goto B459e81;
case 0x459e84:c.instructions+=1;goto B459e84;
case 0x459e89:goto L459e89;
case 0x459e8e:c.instructions+=5;goto B459e8e;
case 0x459e94:c.instructions+=4;goto B459e94;
case 0x459e9a:c.instructions+=3;goto B459e9a;
case 0x459e9f:c.instructions+=2;goto B459e9f;
case 0x459ea0:c.instructions+=1;goto B459ea0;
case 0x459ea5:goto L459ea5;
case 0x459ea8:c.instructions+=8;goto B459ea8;
case 0x459eae:c.instructions+=7;goto B459eae;
case 0x459eaf:c.instructions+=6;goto B459eaf;
case 0x459eb5:c.instructions+=5;goto B459eb5;
case 0x459ebb:c.instructions+=4;goto B459ebb;
case 0x459ec1:c.instructions+=3;goto B459ec1;
case 0x459ec2:c.instructions+=2;goto B459ec2;
case 0x459ec3:c.instructions+=1;goto B459ec3;
case 0x459ed0:goto L459ed0;
case 0x459ed7:c.instructions+=1;goto B459ed7;
case 0x459ee0:goto L459ee0;
case 0x459ee7:c.instructions+=1;goto B459ee7;
case 0x459ef0:goto L459ef0;
case 0x459ef1:c.instructions+=4;goto B459ef1;
case 0x459ef3:c.instructions+=3;goto B459ef3;
case 0x459ef6:c.instructions+=2;goto B459ef6;
case 0x459ef8:c.instructions+=1;goto B459ef8;
case 0x459efe:goto L459efe;
case 0x459eff:c.instructions+=22;goto B459eff;
case 0x459f00:c.instructions+=21;goto B459f00;
case 0x459f01:c.instructions+=20;goto B459f01;
case 0x459f05:c.instructions+=19;goto B459f05;
case 0x459f09:c.instructions+=18;goto B459f09;
case 0x459f0c:c.instructions+=17;goto B459f0c;
case 0x459f0f:c.instructions+=16;goto B459f0f;
case 0x459f15:c.instructions+=15;goto B459f15;
case 0x459f1b:c.instructions+=14;goto B459f1b;
case 0x459f21:c.instructions+=13;goto B459f21;
case 0x459f26:c.instructions+=12;goto B459f26;
case 0x459f28:c.instructions+=11;goto B459f28;
case 0x459f2e:c.instructions+=10;goto B459f2e;
case 0x459f33:c.instructions+=9;goto B459f33;
case 0x459f35:c.instructions+=8;goto B459f35;
case 0x459f3f:c.instructions+=7;goto B459f3f;
case 0x459f45:c.instructions+=6;goto B459f45;
case 0x459f47:c.instructions+=5;goto B459f47;
case 0x459f4d:c.instructions+=4;goto B459f4d;
case 0x459f53:c.instructions+=3;goto B459f53;
case 0x459f54:c.instructions+=2;goto B459f54;
case 0x459f5a:c.instructions+=1;goto B459f5a;
case 0x459f5f:goto L459f5f;
case 0x459f62:c.instructions+=4;goto B459f62;
case 0x459f66:c.instructions+=3;goto B459f66;
case 0x459f69:c.instructions+=2;goto B459f69;
case 0x459f6b:c.instructions+=1;goto B459f6b;
case 0x459f6d:goto L459f6d;
case 0x459f71:goto L459f71;
case 0x459f75:c.instructions+=14;goto B459f75;
case 0x459f79:c.instructions+=13;goto B459f79;
case 0x459f7d:c.instructions+=12;goto B459f7d;
case 0x459f7e:c.instructions+=11;goto B459f7e;
case 0x459f84:c.instructions+=10;goto B459f84;
case 0x459f85:c.instructions+=9;goto B459f85;
case 0x459f86:c.instructions+=8;goto B459f86;
case 0x459f8c:c.instructions+=7;goto B459f8c;
case 0x459f8d:c.instructions+=6;goto B459f8d;
case 0x459f93:c.instructions+=5;goto B459f93;
case 0x459f94:c.instructions+=4;goto B459f94;
case 0x459f95:c.instructions+=3;goto B459f95;
case 0x459f96:c.instructions+=2;goto B459f96;
case 0x459f97:c.instructions+=1;goto B459f97;
case 0x459f9c:goto L459f9c;
case 0x459f9f:c.instructions+=4;goto B459f9f;
case 0x459fa1:c.instructions+=3;goto B459fa1;
case 0x459fa4:c.instructions+=2;goto B459fa4;
case 0x459fa6:c.instructions+=1;goto B459fa6;
case 0x459fa8:goto L459fa8;
case 0x459fab:c.instructions+=5;goto B459fab;
case 0x459fae:c.instructions+=4;goto B459fae;
case 0x459fb1:c.instructions+=3;goto B459fb1;
case 0x459fb4:c.instructions+=2;goto B459fb4;
case 0x459fb8:c.instructions+=1;goto B459fb8;
case 0x459fba:goto L459fba;
case 0x459fbe:c.instructions+=6;goto B459fbe;
case 0x459fbf:c.instructions+=5;goto B459fbf;
case 0x459fc0:c.instructions+=4;goto B459fc0;
case 0x459fc1:c.instructions+=3;goto B459fc1;
case 0x459fc3:c.instructions+=2;goto B459fc3;
case 0x459fc4:c.instructions+=1;goto B459fc4;
case 0x459fc7:goto L459fc7;
case 0x459fcd:c.instructions+=4;goto B459fcd;
case 0x459fce:c.instructions+=3;goto B459fce;
case 0x459fd1:c.instructions+=2;goto B459fd1;
case 0x459fd4:c.instructions+=1;goto B459fd4;
case 0x459fd9:goto L459fd9;
case 0x459fdc:c.instructions+=1;goto B459fdc;
case 0x459fdf:goto L459fdf;
case 0x459fe0:c.instructions+=2;goto B459fe0;
case 0x459fe1:c.instructions+=1;goto B459fe1;
case 0x459fe2:goto L459fe2;
case 0x459fe4:c.instructions+=2;goto B459fe4;
case 0x459fe5:c.instructions+=1;goto B459fe5;
case 0x459ff0:goto L459ff0;
case 0x459ff5:c.instructions+=2;goto B459ff5;
case 0x459ff7:c.instructions+=1;goto B459ff7;
case 0x459ff9:goto L459ff9;
case 0x459ffb:goto L459ffb;
default:missing_instruction(c.pc);}
B459000:L459000:{c.instructions+=11;NFSU2_TR(0x459000);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459001:{NFSU2_TR(0x459001);
__builtin_memmove((R+20),(R+16),4);
}
B459003:{NFSU2_TR(0x459003);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B459006:{NFSU2_TR(0x459006);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B459009:{NFSU2_TR(0x459009);
__builtin_memmove((R+0),gp(0x890118),4);
}
B45900e:{NFSU2_TR(0x45900e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45900f:{NFSU2_TR(0x45900f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459010:{NFSU2_TR(0x459010);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459011:{NFSU2_TR(0x459011);
__builtin_memmove((R+28),(R+4),4);
}
B459013:{NFSU2_TR(0x459013);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B459016:{NFSU2_TR(0x459016);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4591e6;}}
}
B45901c:L45901c:{c.instructions+=12;NFSU2_TR(0x45901c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45901f:{NFSU2_TR(0x45901f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
w4(U+4,u32(0x416028f6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B459026:{NFSU2_TR(0x459026);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B459029:{NFSU2_TR(0x459029);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45902c:{NFSU2_TR(0x45902c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45902e:{NFSU2_TR(0x45902e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B459030:{NFSU2_TR(0x459030);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459033:{NFSU2_TR(0x459033);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B459036:{NFSU2_TR(0x459036);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B459039:{NFSU2_TR(0x459039);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45903c:{NFSU2_TR(0x45903c);
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
B45903e:{NFSU2_TR(0x45903e);
if(r1(R+518)){{goto L4591e6;}}
}
B459044:L459044:{c.instructions+=2;NFSU2_TR(0x459044);
u8 U[4];
w4(U+0,u32(0x789da0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459049:{NFSU2_TR(0x459049);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45904eull));
TAIL_STATIC(0x43db50u,43d);
}
B45904e:L45904e:{c.instructions+=4;NFSU2_TR(0x45904e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B459051:{NFSU2_TR(0x459051);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B459054:{NFSU2_TR(0x459054);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B459056:{NFSU2_TR(0x459056);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L459093;}}
}
B459058:L459058:{c.instructions+=5;NFSU2_TR(0x459058);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45905b:{NFSU2_TR(0x45905b);
{u32 ea_=u32(u32(7904668u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B459061:{NFSU2_TR(0x459061);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B459063:{NFSU2_TR(0x459063);
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
B459066:{NFSU2_TR(0x459066);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4591e6;}}
}
B45906c:L45906c:{c.instructions+=2;NFSU2_TR(0x45906c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45906f:{NFSU2_TR(0x45906f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459074ull));
TAIL_STATIC(0x5ec0b0u,5ec);
}
B459074:L459074:{c.instructions+=2;NFSU2_TR(0x459074);
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
B459076:{NFSU2_TR(0x459076);
if(r1(R+518)){{goto L4591e6;}}
}
B45907c:L45907c:{c.instructions+=5;NFSU2_TR(0x45907c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45907e:{NFSU2_TR(0x45907e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B459082:{NFSU2_TR(0x459082);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459083:{NFSU2_TR(0x459083);
__builtin_memmove((R+4),(R+0),4);
}
B459085:{NFSU2_TR(0x459085);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45908aull));
TAIL_STATIC(0x401b20u,401);
}
B45908a:L45908a:{c.instructions+=6;NFSU2_TR(0x45908a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45908b:{NFSU2_TR(0x45908b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45908c:{NFSU2_TR(0x45908c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45908d:{NFSU2_TR(0x45908d);
__builtin_memmove((R+16),(R+20),4);
}
B45908f:{NFSU2_TR(0x45908f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B459090:{NFSU2_TR(0x459090);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459093:L459093:{c.instructions+=2;NFSU2_TR(0x459093);
u8 U[4];
w4(U+0,u32(0x789d90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459098:{NFSU2_TR(0x459098);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45909dull));
TAIL_STATIC(0x43db50u,43d);
}
B45909d:L45909d:{c.instructions+=3;NFSU2_TR(0x45909d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4590a0:{NFSU2_TR(0x4590a0);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4590a2:{NFSU2_TR(0x4590a2);
if(r1(R+518)){{goto L459173;}}
}
B4590a8:L4590a8:{c.instructions+=2;NFSU2_TR(0x4590a8);
u8 U[4];
w4(U+0,u32(0x789d88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4590ad:{NFSU2_TR(0x4590ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4590b2ull));
TAIL_STATIC(0x43db50u,43d);
}
B4590b2:L4590b2:{c.instructions+=3;NFSU2_TR(0x4590b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4590b5:{NFSU2_TR(0x4590b5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4590b7:{NFSU2_TR(0x4590b7);
if(r1(R+518)){{goto L459173;}}
}
B4590bd:L4590bd:{c.instructions+=2;NFSU2_TR(0x4590bd);
u8 U[4];
w4(U+0,u32(0x789d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4590c2:{NFSU2_TR(0x4590c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4590c7ull));
TAIL_STATIC(0x43db50u,43d);
}
B4590c7:L4590c7:{c.instructions+=3;NFSU2_TR(0x4590c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4590ca:{NFSU2_TR(0x4590ca);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4590cc:{NFSU2_TR(0x4590cc);
if(r1(R+518)){{goto L459173;}}
}
B4590d2:L4590d2:{c.instructions+=2;NFSU2_TR(0x4590d2);
u8 U[4];
w4(U+0,u32(0x789d68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4590d7:{NFSU2_TR(0x4590d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4590dcull));
TAIL_STATIC(0x43db50u,43d);
}
B4590dc:L4590dc:{c.instructions+=3;NFSU2_TR(0x4590dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4590df:{NFSU2_TR(0x4590df);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4590e1:{NFSU2_TR(0x4590e1);
if(r1(R+518)){{goto L459173;}}
}
B4590e7:L4590e7:{c.instructions+=2;NFSU2_TR(0x4590e7);
u8 U[4];
w4(U+0,u32(0x789d60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4590ec:{NFSU2_TR(0x4590ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4590f1ull));
TAIL_STATIC(0x43db50u,43d);
}
B4590f1:L4590f1:{c.instructions+=3;NFSU2_TR(0x4590f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4590f4:{NFSU2_TR(0x4590f4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4590f6:{NFSU2_TR(0x4590f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45915d;}}
}
B4590f8:L4590f8:{c.instructions+=21;NFSU2_TR(0x4590f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4590fb:{NFSU2_TR(0x4590fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4590fd:{NFSU2_TR(0x4590fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B459105:{NFSU2_TR(0x459105);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45910d:{NFSU2_TR(0x45910d);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B459115:{NFSU2_TR(0x459115);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45911d:{NFSU2_TR(0x45911d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B459125:{NFSU2_TR(0x459125);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459129:{NFSU2_TR(0x459129);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45912f:{NFSU2_TR(0x45912f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459132:{NFSU2_TR(0x459132);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459136:{NFSU2_TR(0x459136);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B459139:{NFSU2_TR(0x459139);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45913d:{NFSU2_TR(0x45913d);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B459143:{NFSU2_TR(0x459143);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459147:{NFSU2_TR(0x459147);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45914b:{NFSU2_TR(0x45914b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B459151:{NFSU2_TR(0x459151);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B459153:{NFSU2_TR(0x459153);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B459157:{NFSU2_TR(0x459157);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459158:{NFSU2_TR(0x459158);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45915bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45915b:L45915b:{c.instructions+=1;NFSU2_TR(0x45915b);
{goto L4591d6;}
}
B45915d:L45915d:{c.instructions+=2;NFSU2_TR(0x45915d);
u8 U[4];
w4(U+0,u32(0x789d50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459162:{NFSU2_TR(0x459162);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459167ull));
TAIL_STATIC(0x43db50u,43d);
}
B459167:L459167:{c.instructions+=7;NFSU2_TR(0x459167);
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
B45916a:{NFSU2_TR(0x45916a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45916b:{NFSU2_TR(0x45916b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45916c:{NFSU2_TR(0x45916c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45916d:{NFSU2_TR(0x45916d);
__builtin_memmove((R+16),(R+20),4);
}
B45916f:{NFSU2_TR(0x45916f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B459170:{NFSU2_TR(0x459170);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459173:L459173:{c.instructions+=21;NFSU2_TR(0x459173);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B459176:{NFSU2_TR(0x459176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B459178:{NFSU2_TR(0x459178);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B459180:{NFSU2_TR(0x459180);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B459188:{NFSU2_TR(0x459188);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B459190:{NFSU2_TR(0x459190);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B459198:{NFSU2_TR(0x459198);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4591a0:{NFSU2_TR(0x4591a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4591a4:{NFSU2_TR(0x4591a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4591aa:{NFSU2_TR(0x4591aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4591ad:{NFSU2_TR(0x4591ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4591b1:{NFSU2_TR(0x4591b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4591b4:{NFSU2_TR(0x4591b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4591b8:{NFSU2_TR(0x4591b8);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4591be:{NFSU2_TR(0x4591be);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4591c2:{NFSU2_TR(0x4591c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4591c6:{NFSU2_TR(0x4591c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4591cc:{NFSU2_TR(0x4591cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4591ce:{NFSU2_TR(0x4591ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4591d2:{NFSU2_TR(0x4591d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4591d3:{NFSU2_TR(0x4591d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4591d6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4591d6:L4591d6:{c.instructions+=2;NFSU2_TR(0x4591d6);
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
B4591d8:{NFSU2_TR(0x4591d8);
if(r1(R+518)){{goto L4591e6;}}
}
B4591da:L4591da:{c.instructions+=5;NFSU2_TR(0x4591da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4591dc:{NFSU2_TR(0x4591dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4591e0:{NFSU2_TR(0x4591e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4591e1:{NFSU2_TR(0x4591e1);
__builtin_memmove((R+4),(R+0),4);
}
B4591e3:{NFSU2_TR(0x4591e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4591e6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4591e6:L4591e6:{c.instructions+=6;NFSU2_TR(0x4591e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4591e7:{NFSU2_TR(0x4591e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4591e8:{NFSU2_TR(0x4591e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4591e9:{NFSU2_TR(0x4591e9);
__builtin_memmove((R+16),(R+20),4);
}
B4591eb:{NFSU2_TR(0x4591eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4591ec:{NFSU2_TR(0x4591ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4591f0:L4591f0:{c.instructions+=3;NFSU2_TR(0x4591f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4591fa:{NFSU2_TR(0x4591fa);
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
B4591fc:{NFSU2_TR(0x4591fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459200:L459200:{c.instructions+=6;NFSU2_TR(0x459200);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459201:{NFSU2_TR(0x459201);
__builtin_memmove((R+24),(R+4),4);
}
B459203:{NFSU2_TR(0x459203);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459206:{NFSU2_TR(0x459206);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B459209:{NFSU2_TR(0x459209);
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
B45920b:{NFSU2_TR(0x45920b);
if(r1(R+518)){{goto L459234;}}
}
B45920d:L45920d:{c.instructions+=3;NFSU2_TR(0x45920d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459213:{NFSU2_TR(0x459213);
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
B459215:{NFSU2_TR(0x459215);
if(r1(R+518)){{goto L459234;}}
}
B459217:L459217:{c.instructions+=5;NFSU2_TR(0x459217);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B45921b:{NFSU2_TR(0x45921b);
__builtin_memmove((R+8),(R+518),1);
}
B45921e:{NFSU2_TR(0x45921e);
w4(R+0,u32(r1(R+8)));
}
B459221:{NFSU2_TR(0x459221);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459227:{NFSU2_TR(0x459227);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45922cull));
TAIL_STATIC(0x5eb400u,5eb);
}
B45922c:L45922c:{c.instructions+=3;NFSU2_TR(0x45922c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459232:{NFSU2_TR(0x459232);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B459233:{NFSU2_TR(0x459233);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459234:L459234:{c.instructions+=3;NFSU2_TR(0x459234);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45923e:{NFSU2_TR(0x45923e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45923f:{NFSU2_TR(0x45923f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459240:L459240:{c.instructions+=3;NFSU2_TR(0x459240);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459244:{NFSU2_TR(0x459244);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B459247:{NFSU2_TR(0x459247);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L459305;}}
}
B45924d:L45924d:{c.instructions+=1;NFSU2_TR(0x45924d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x45930cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B459254:L459254:{c.instructions+=2;NFSU2_TR(0x459254);
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
B459256:{NFSU2_TR(0x459256);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459257:L459257:{c.instructions+=2;NFSU2_TR(0x459257);
w4(R+0,u32(0x1ull));
}
B45925c:{NFSU2_TR(0x45925c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45925d:L45925d:{c.instructions+=2;NFSU2_TR(0x45925d);
w4(R+0,u32(0x2ull));
}
B459262:{NFSU2_TR(0x459262);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459263:L459263:{c.instructions+=2;NFSU2_TR(0x459263);
w4(R+0,u32(0x3ull));
}
B459268:{NFSU2_TR(0x459268);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459269:L459269:{c.instructions+=2;NFSU2_TR(0x459269);
w4(R+0,u32(0x4ull));
}
B45926e:{NFSU2_TR(0x45926e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45926f:L45926f:{c.instructions+=2;NFSU2_TR(0x45926f);
w4(R+0,u32(0x5ull));
}
B459274:{NFSU2_TR(0x459274);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459275:L459275:{c.instructions+=2;NFSU2_TR(0x459275);
w4(R+0,u32(0x6ull));
}
B45927a:{NFSU2_TR(0x45927a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45927b:L45927b:{c.instructions+=2;NFSU2_TR(0x45927b);
w4(R+0,u32(0x7ull));
}
B459280:{NFSU2_TR(0x459280);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459281:L459281:{c.instructions+=2;NFSU2_TR(0x459281);
w4(R+0,u32(0x8ull));
}
B459286:{NFSU2_TR(0x459286);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459287:L459287:{c.instructions+=2;NFSU2_TR(0x459287);
w4(R+0,u32(0x9ull));
}
B45928c:{NFSU2_TR(0x45928c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45928d:L45928d:{c.instructions+=2;NFSU2_TR(0x45928d);
w4(R+0,u32(0xaull));
}
B459292:{NFSU2_TR(0x459292);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459293:L459293:{c.instructions+=2;NFSU2_TR(0x459293);
w4(R+0,u32(0xbull));
}
B459298:{NFSU2_TR(0x459298);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459299:L459299:{c.instructions+=2;NFSU2_TR(0x459299);
w4(R+0,u32(0xcull));
}
B45929e:{NFSU2_TR(0x45929e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45929f:L45929f:{c.instructions+=2;NFSU2_TR(0x45929f);
w4(R+0,u32(0xdull));
}
B4592a4:{NFSU2_TR(0x4592a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4592a5:L4592a5:{c.instructions+=2;NFSU2_TR(0x4592a5);
w4(R+0,u32(0xeull));
}
B4592aa:{NFSU2_TR(0x4592aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4592ab:L4592ab:{c.instructions+=2;NFSU2_TR(0x4592ab);
w4(R+0,u32(0xfull));
}
B4592b0:{NFSU2_TR(0x4592b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4592b1:L4592b1:{c.instructions+=2;NFSU2_TR(0x4592b1);
w4(R+0,u32(0x11ull));
}
B4592b6:{NFSU2_TR(0x4592b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4592b7:L4592b7:{c.instructions+=2;NFSU2_TR(0x4592b7);
w4(R+0,u32(0x13ull));
}
B4592bc:{NFSU2_TR(0x4592bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4592bd:L4592bd:{c.instructions+=2;NFSU2_TR(0x4592bd);
w4(R+0,u32(0x14ull));
}
B4592c2:{NFSU2_TR(0x4592c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4592c3:L4592c3:{c.instructions+=2;NFSU2_TR(0x4592c3);
w4(R+0,u32(0x15ull));
}
B4592c8:{NFSU2_TR(0x4592c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4592c9:L4592c9:{c.instructions+=2;NFSU2_TR(0x4592c9);
w4(R+0,u32(0x16ull));
}
B4592ce:{NFSU2_TR(0x4592ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4592cf:L4592cf:{c.instructions+=2;NFSU2_TR(0x4592cf);
w4(R+0,u32(0x17ull));
}
B4592d4:{NFSU2_TR(0x4592d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4592d5:L4592d5:{c.instructions+=2;NFSU2_TR(0x4592d5);
w4(R+0,u32(0x18ull));
}
B4592da:{NFSU2_TR(0x4592da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4592db:L4592db:{c.instructions+=2;NFSU2_TR(0x4592db);
w4(R+0,u32(0x19ull));
}
B4592e0:{NFSU2_TR(0x4592e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4592e1:L4592e1:{c.instructions+=2;NFSU2_TR(0x4592e1);
w4(R+0,u32(0x1aull));
}
B4592e6:{NFSU2_TR(0x4592e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4592e7:L4592e7:{c.instructions+=2;NFSU2_TR(0x4592e7);
w4(R+0,u32(0x1cull));
}
B4592ec:{NFSU2_TR(0x4592ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4592ed:L4592ed:{c.instructions+=2;NFSU2_TR(0x4592ed);
w4(R+0,u32(0x1dull));
}
B4592f2:{NFSU2_TR(0x4592f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4592f3:L4592f3:{c.instructions+=2;NFSU2_TR(0x4592f3);
w4(R+0,u32(0x1eull));
}
B4592f8:{NFSU2_TR(0x4592f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4592f9:L4592f9:{c.instructions+=2;NFSU2_TR(0x4592f9);
w4(R+0,u32(0x1full));
}
B4592fe:{NFSU2_TR(0x4592fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4592ff:L4592ff:{c.instructions+=2;NFSU2_TR(0x4592ff);
w4(R+0,u32(0x20ull));
}
B459304:{NFSU2_TR(0x459304);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459305:L459305:{c.instructions+=2;NFSU2_TR(0x459305);
w4(R+0,u32(0x12ull));
}
B45930a:{NFSU2_TR(0x45930a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459390:L459390:{c.instructions+=2;NFSU2_TR(0x459390);
w4(R+0,u32(0x7ecb28ull));
}
B459395:{NFSU2_TR(0x459395);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4593a0:L4593a0:{c.instructions+=2;NFSU2_TR(0x4593a0);
__builtin_memmove((R+0),gp(0x7ecb2c),4);
}
B4593a5:{NFSU2_TR(0x4593a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4593b0:L4593b0:{c.instructions+=8;NFSU2_TR(0x4593b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4593b1:{NFSU2_TR(0x4593b1);
__builtin_memmove((R+24),(R+4),4);
}
B4593b3:{NFSU2_TR(0x4593b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4593b7:{NFSU2_TR(0x4593b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4593ba:{NFSU2_TR(0x4593ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4593bd:{NFSU2_TR(0x4593bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4593be:{NFSU2_TR(0x4593be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4593bf:{NFSU2_TR(0x4593bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4593c4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x459240u);}goto L459240;}
}
B4593c4:L4593c4:{c.instructions+=6;NFSU2_TR(0x4593c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4593c7:{NFSU2_TR(0x4593c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x300ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4593cd:{NFSU2_TR(0x4593cd);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4593cf:{NFSU2_TR(0x4593cf);
__builtin_memmove((R+4),(R+28),4);
}
B4593d1:{NFSU2_TR(0x4593d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4593d7:{NFSU2_TR(0x4593d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4593dcull));
TAIL_STATIC(0x599610u,599);
}
B4593dc:L4593dc:{c.instructions+=2;NFSU2_TR(0x4593dc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4593de:{NFSU2_TR(0x4593de);
if(r1(R+518)){{goto L4593ec;}}
}
B4593e0:L4593e0:{c.instructions+=2;NFSU2_TR(0x4593e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4593ea:{NFSU2_TR(0x4593ea);
{goto L459428;}
}
B4593ec:L4593ec:{c.instructions+=3;NFSU2_TR(0x4593ec);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4593ee:{NFSU2_TR(0x4593ee);
__builtin_memmove((R+4),(R+28),4);
}
B4593f0:{NFSU2_TR(0x4593f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4593f5ull));
TAIL_STATIC(0x599610u,599);
}
B4593f5:L4593f5:{c.instructions+=2;NFSU2_TR(0x4593f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4593f7:{NFSU2_TR(0x4593f7);
if(r1(R+518)){{goto L459405;}}
}
B4593f9:L4593f9:{c.instructions+=2;NFSU2_TR(0x4593f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B459403:{NFSU2_TR(0x459403);
{goto L459428;}
}
B459405:L459405:{c.instructions+=3;NFSU2_TR(0x459405);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459407:{NFSU2_TR(0x459407);
__builtin_memmove((R+4),(R+28),4);
}
B459409:{NFSU2_TR(0x459409);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45940eull));
TAIL_STATIC(0x599610u,599);
}
B45940e:L45940e:{c.instructions+=2;NFSU2_TR(0x45940e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B459410:{NFSU2_TR(0x459410);
if(r1(R+518)){{goto L45941e;}}
}
B459412:L459412:{c.instructions+=2;NFSU2_TR(0x459412);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45941c:{NFSU2_TR(0x45941c);
{goto L459428;}
}
B45941e:L45941e:{c.instructions+=1;NFSU2_TR(0x45941e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B459428:L459428:{c.instructions+=3;NFSU2_TR(0x459428);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45942a:{NFSU2_TR(0x45942a);
__builtin_memmove((R+4),(R+28),4);
}
B45942c:{NFSU2_TR(0x45942c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459431ull));
TAIL_STATIC(0x5995e0u,599);
}
B459431:L459431:{c.instructions+=2;NFSU2_TR(0x459431);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B459433:{NFSU2_TR(0x459433);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L459439;}}
}
B459435:L459435:{c.instructions+=2;NFSU2_TR(0x459435);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B459437:{NFSU2_TR(0x459437);
{goto L459443;}
}
B459439:L459439:{c.instructions+=2;NFSU2_TR(0x459439);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45943c:{NFSU2_TR(0x45943c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L459443;}}
}
B45943e:L45943e:{c.instructions+=1;NFSU2_TR(0x45943e);
w4(R+0,u32(0x3ull));
}
B459443:L459443:{c.instructions+=4;NFSU2_TR(0x459443);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459445:{NFSU2_TR(0x459445);
__builtin_memmove((R+4),(R+28),4);
}
B459447:{NFSU2_TR(0x459447);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45944d:{NFSU2_TR(0x45944d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459452ull));
TAIL_STATIC(0x5995e0u,599);
}
B459452:L459452:{c.instructions+=2;NFSU2_TR(0x459452);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B459454:{NFSU2_TR(0x459454);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L45945a;}}
}
B459456:L459456:{c.instructions+=2;NFSU2_TR(0x459456);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B459458:{NFSU2_TR(0x459458);
{goto L459464;}
}
B45945a:L45945a:{c.instructions+=2;NFSU2_TR(0x45945a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45945d:{NFSU2_TR(0x45945d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L459464;}}
}
B45945f:L45945f:{c.instructions+=1;NFSU2_TR(0x45945f);
w4(R+0,u32(0x3ull));
}
B459464:L459464:{c.instructions+=4;NFSU2_TR(0x459464);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459466:{NFSU2_TR(0x459466);
__builtin_memmove((R+4),(R+28),4);
}
B459468:{NFSU2_TR(0x459468);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45946e:{NFSU2_TR(0x45946e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459473ull));
TAIL_STATIC(0x5995e0u,599);
}
B459473:L459473:{c.instructions+=2;NFSU2_TR(0x459473);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B459475:{NFSU2_TR(0x459475);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L45947b;}}
}
B459477:L459477:{c.instructions+=2;NFSU2_TR(0x459477);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B459479:{NFSU2_TR(0x459479);
{goto L459485;}
}
B45947b:L45947b:{c.instructions+=2;NFSU2_TR(0x45947b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45947e:{NFSU2_TR(0x45947e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L459485;}}
}
B459480:L459480:{c.instructions+=1;NFSU2_TR(0x459480);
w4(R+0,u32(0x3ull));
}
B459485:L459485:{c.instructions+=4;NFSU2_TR(0x459485);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459487:{NFSU2_TR(0x459487);
__builtin_memmove((R+4),(R+28),4);
}
B459489:{NFSU2_TR(0x459489);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45948f:{NFSU2_TR(0x45948f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459494ull));
TAIL_STATIC(0x5995e0u,599);
}
B459494:L459494:{c.instructions+=2;NFSU2_TR(0x459494);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B459496:{NFSU2_TR(0x459496);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L45949c;}}
}
B459498:L459498:{c.instructions+=2;NFSU2_TR(0x459498);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45949a:{NFSU2_TR(0x45949a);
{goto L4594a6;}
}
B45949c:L45949c:{c.instructions+=2;NFSU2_TR(0x45949c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45949f:{NFSU2_TR(0x45949f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4594a6;}}
}
B4594a1:L4594a1:{c.instructions+=1;NFSU2_TR(0x4594a1);
w4(R+0,u32(0x3ull));
}
B4594a6:L4594a6:{c.instructions+=16;NFSU2_TR(0x4594a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4594ac:{NFSU2_TR(0x4594ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4594b2:{NFSU2_TR(0x4594b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4594b8:{NFSU2_TR(0x4594b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4594be:{NFSU2_TR(0x4594be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4594c1:{NFSU2_TR(0x4594c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4594c4:{NFSU2_TR(0x4594c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f2230ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4594cb:{NFSU2_TR(0x4594cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4594d1:{NFSU2_TR(0x4594d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4594d3:{NFSU2_TR(0x4594d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4594d6:{NFSU2_TR(0x4594d6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4594d9:{NFSU2_TR(0x4594d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f0de0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4594df:{NFSU2_TR(0x4594df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4594e5:{NFSU2_TR(0x4594e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4594e8:{NFSU2_TR(0x4594e8);
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
B4594ea:{NFSU2_TR(0x4594ea);
if(r1(R+518)){{goto L459518;}}
}
B4594ec:L4594ec:{c.instructions+=2;NFSU2_TR(0x4594ec);
u8 U[14];
__builtin_memmove((U+6),gp(0x850078),4);
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
B4594f3:{NFSU2_TR(0x4594f3);
if(r1(R+518)){{goto L459518;}}
}
B4594f5:L4594f5:{c.instructions+=9;NFSU2_TR(0x4594f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4594fb:{NFSU2_TR(0x4594fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B459502:{NFSU2_TR(0x459502);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459505:{NFSU2_TR(0x459505);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B459508:{NFSU2_TR(0x459508);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x7f1aa8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x7f1aa8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7f1aa8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45950d:{NFSU2_TR(0x45950d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45950e:{NFSU2_TR(0x45950e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459514:{NFSU2_TR(0x459514);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B459515:{NFSU2_TR(0x459515);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459518:L459518:{c.instructions+=5;NFSU2_TR(0x459518);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B459519:{NFSU2_TR(0x459519);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B459520:{NFSU2_TR(0x459520);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
w4(U+4,u32(0x7f1aa8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45952a:{NFSU2_TR(0x45952a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45952b:{NFSU2_TR(0x45952b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459530:L459530:{c.instructions+=3;NFSU2_TR(0x459530);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
w4(U+4,u32(0x200ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45953a:{NFSU2_TR(0x45953a);
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
B45953c:{NFSU2_TR(0x45953c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459540:L459540:{c.instructions+=2;NFSU2_TR(0x459540);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45954a:{NFSU2_TR(0x45954a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459550:L459550:{c.instructions+=3;NFSU2_TR(0x459550);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459554:{NFSU2_TR(0x459554);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B459555:{NFSU2_TR(0x459555);
if(r1(R+518)){{goto L4595c4;}}
}
B459557:L459557:{c.instructions+=2;NFSU2_TR(0x459557);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B45955a:{NFSU2_TR(0x45955a);
if(r1(R+518)){{goto L45959b;}}
}
B45955c:L45955c:{c.instructions+=2;NFSU2_TR(0x45955c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B45955d:{NFSU2_TR(0x45955d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4595c4;}}
}
B45955f:L45955f:{c.instructions+=5;NFSU2_TR(0x45955f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459563:{NFSU2_TR(0x459563);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B459567:{NFSU2_TR(0x459567);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B459569:{NFSU2_TR(0x459569);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B459570:{NFSU2_TR(0x459570);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L459578;}}
}
B459572:L459572:{c.instructions+=1;NFSU2_TR(0x459572);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B459578:L459578:{c.instructions+=5;NFSU2_TR(0x459578);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45957c:{NFSU2_TR(0x45957c);
{u32 ea_=u32(r4(R+4)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B459582:{NFSU2_TR(0x459582);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B459584:{NFSU2_TR(0x459584);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B459588:{NFSU2_TR(0x459588);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L459590;}}
}
B45958a:L45958a:{c.instructions+=1;NFSU2_TR(0x45958a);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B459590:L459590:{c.instructions+=3;NFSU2_TR(0x459590);
{u32 ea_=u32(r4(R+4)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B459596:{NFSU2_TR(0x459596);
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
B459598:{NFSU2_TR(0x459598);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45959b:L45959b:{c.instructions+=7;NFSU2_TR(0x45959b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45959f:{NFSU2_TR(0x45959f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4595a3:{NFSU2_TR(0x4595a3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4595a5:{NFSU2_TR(0x4595a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4595a9:{NFSU2_TR(0x4595a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4595b0:{NFSU2_TR(0x4595b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4595b6:{NFSU2_TR(0x4595b6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4595be;}}
}
B4595b8:L4595b8:{c.instructions+=1;NFSU2_TR(0x4595b8);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4595be:L4595be:{c.instructions+=1;NFSU2_TR(0x4595be);
{u32 ea_=u32(r4(R+4)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4595c4:L4595c4:{c.instructions+=2;NFSU2_TR(0x4595c4);
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
B4595c6:{NFSU2_TR(0x4595c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4595d0:L4595d0:{c.instructions+=10;NFSU2_TR(0x4595d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4595d1:{NFSU2_TR(0x4595d1);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4595d6:{NFSU2_TR(0x4595d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B4595d9:{NFSU2_TR(0x4595d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4595dd:{NFSU2_TR(0x4595dd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4595e1:{NFSU2_TR(0x4595e1);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4595e7:{NFSU2_TR(0x4595e7);
{u32 ea_=u32(u32(8371936u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4595ed:{NFSU2_TR(0x4595ed);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4595ef:{NFSU2_TR(0x4595ef);
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
B4595f2:{NFSU2_TR(0x4595f2);
if(r1(R+514)){{goto L4595fb;}}
}
B4595f4:L4595f4:{c.instructions+=3;NFSU2_TR(0x4595f4);
w4(R+0,u32(0x1ull));
}
B4595f9:{NFSU2_TR(0x4595f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4595fa:{NFSU2_TR(0x4595fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4595fb:L4595fb:{c.instructions+=3;NFSU2_TR(0x4595fb);
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
B4595fd:{NFSU2_TR(0x4595fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4595fe:{NFSU2_TR(0x4595fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459600:L459600:{c.instructions+=7;NFSU2_TR(0x459600);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B459603:{NFSU2_TR(0x459603);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459604:{NFSU2_TR(0x459604);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459605:{NFSU2_TR(0x459605);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B459609:{NFSU2_TR(0x459609);
__builtin_memmove((R+4),(R+28),4);
}
B45960b:{NFSU2_TR(0x45960b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B45960d:{NFSU2_TR(0x45960d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459612ull));
TAIL_STATIC(0x592d00u,592);
}
B459612:L459612:{c.instructions+=2;NFSU2_TR(0x459612);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B459614:{NFSU2_TR(0x459614);
if(r1(R+518)){{goto L45961b;}}
}
B459616:L459616:{c.instructions+=1;NFSU2_TR(0x459616);
w4(R+24,u32(0x1ull));
}
B45961b:L45961b:{c.instructions+=2;NFSU2_TR(0x45961b);
__builtin_memmove((R+4),(R+28),4);
}
B45961d:{NFSU2_TR(0x45961d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459622ull));
TAIL_STATIC(0x592d50u,592);
}
B459622:L459622:{c.instructions+=2;NFSU2_TR(0x459622);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B459624:{NFSU2_TR(0x459624);
if(r1(R+518)){{goto L459629;}}
}
B459626:L459626:{c.instructions+=1;NFSU2_TR(0x459626);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x2ull))));
}
B459629:L459629:{c.instructions+=2;NFSU2_TR(0x459629);
__builtin_memmove((R+4),(R+28),4);
}
B45962b:{NFSU2_TR(0x45962b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459630ull));
TAIL_STATIC(0x5a0160u,5a0);
}
B459630:L459630:{c.instructions+=2;NFSU2_TR(0x459630);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B459632:{NFSU2_TR(0x459632);
if(r1(R+518)){{goto L459637;}}
}
B459634:L459634:{c.instructions+=1;NFSU2_TR(0x459634);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x4ull))));
}
B459637:L459637:{c.instructions+=2;NFSU2_TR(0x459637);
__builtin_memmove((R+4),(R+28),4);
}
B459639:{NFSU2_TR(0x459639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45963eull));
TAIL_STATIC(0x592c60u,592);
}
B45963e:L45963e:{c.instructions+=2;NFSU2_TR(0x45963e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B459640:{NFSU2_TR(0x459640);
if(r1(R+518)){{goto L459645;}}
}
B459642:L459642:{c.instructions+=1;NFSU2_TR(0x459642);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x8ull))));
}
B459645:L459645:{c.instructions+=6;NFSU2_TR(0x459645);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B459649:{NFSU2_TR(0x459649);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45964a:{NFSU2_TR(0x45964a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45964e:{NFSU2_TR(0x45964e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45964f:{NFSU2_TR(0x45964f);
__builtin_memmove((R+4),(R+28),4);
}
B459651:{NFSU2_TR(0x459651);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459656ull));
TAIL_STATIC(0x592c90u,592);
}
B459656:L459656:{c.instructions+=3;NFSU2_TR(0x459656);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45965a:{NFSU2_TR(0x45965a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45965c:{NFSU2_TR(0x45965c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L459666;}}
}
B45965e:L45965e:{c.instructions+=3;NFSU2_TR(0x45965e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459662:{NFSU2_TR(0x459662);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B459664:{NFSU2_TR(0x459664);
if(r1(R+518)){{goto L459669;}}
}
B459666:L459666:{c.instructions+=1;NFSU2_TR(0x459666);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x10ull))));
}
B459669:L459669:{c.instructions+=5;NFSU2_TR(0x459669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45966a:{NFSU2_TR(0x45966a);
__builtin_memmove((R+0),(R+24),4);
}
B45966c:{NFSU2_TR(0x45966c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45966d:{NFSU2_TR(0x45966d);
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
B459670:{NFSU2_TR(0x459670);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459680:L459680:{c.instructions+=5;NFSU2_TR(0x459680);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B459683:{NFSU2_TR(0x459683);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459684:{NFSU2_TR(0x459684);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B459688:{NFSU2_TR(0x459688);
__builtin_memmove((R+4),(R+24),4);
}
B45968a:{NFSU2_TR(0x45968a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45968full));
TAIL_STATIC(0x592d50u,592);
}
B45968f:L45968f:{c.instructions+=2;NFSU2_TR(0x45968f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B459691:{NFSU2_TR(0x459691);
if(r1(R+518)){{goto L45969d;}}
}
B459693:L459693:{c.instructions+=4;NFSU2_TR(0x459693);
w4(R+0,u32(0x2ull));
}
B459698:{NFSU2_TR(0x459698);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B459699:{NFSU2_TR(0x459699);
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
B45969c:{NFSU2_TR(0x45969c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45969d:L45969d:{c.instructions+=8;NFSU2_TR(0x45969d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4596a1:{NFSU2_TR(0x4596a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4596a2:{NFSU2_TR(0x4596a2);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4596a6:{NFSU2_TR(0x4596a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4596a7:{NFSU2_TR(0x4596a7);
__builtin_memmove((R+4),(R+24),4);
}
B4596a9:{NFSU2_TR(0x4596a9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4596b1:{NFSU2_TR(0x4596b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4596b9:{NFSU2_TR(0x4596b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4596beull));
TAIL_STATIC(0x592c90u,592);
}
B4596be:L4596be:{c.instructions+=4;NFSU2_TR(0x4596be);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4596c2:{NFSU2_TR(0x4596c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4596c4:{NFSU2_TR(0x4596c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4596c8:{NFSU2_TR(0x4596c8);
if(r1(R+518)){{goto L4596d8;}}
}
B4596ca:L4596ca:{c.instructions+=2;NFSU2_TR(0x4596ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4596cc:{NFSU2_TR(0x4596cc);
if(r1(R+518)){{goto L4596d8;}}
}
B4596ce:L4596ce:{c.instructions+=4;NFSU2_TR(0x4596ce);
w4(R+0,u32(0x1ull));
}
B4596d3:{NFSU2_TR(0x4596d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4596d4:{NFSU2_TR(0x4596d4);
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
B4596d7:{NFSU2_TR(0x4596d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4596d8:L4596d8:{c.instructions+=4;NFSU2_TR(0x4596d8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4596da:{NFSU2_TR(0x4596da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4596db:{NFSU2_TR(0x4596db);
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
B4596de:{NFSU2_TR(0x4596de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4596e0:L4596e0:{c.instructions+=11;NFSU2_TR(0x4596e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4596e2:{NFSU2_TR(0x4596e2);
u8 U[4];
w4(U+0,u32(0x77253bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4596e7:{NFSU2_TR(0x4596e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4596ed:{NFSU2_TR(0x4596ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4596ee:{NFSU2_TR(0x4596ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4596f5:{NFSU2_TR(0x4596f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4596f6:{NFSU2_TR(0x4596f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4596f7:{NFSU2_TR(0x4596f7);
__builtin_memmove((R+24),(R+4),4);
}
B4596f9:{NFSU2_TR(0x4596f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4596ff:{NFSU2_TR(0x4596ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B459701:{NFSU2_TR(0x459701);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L459760;}}
}
B459703:L459703:{c.instructions+=3;NFSU2_TR(0x459703);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B459708:{NFSU2_TR(0x459708);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45970a:{NFSU2_TR(0x45970a);
if(r1(R+518)){{goto L459760;}}
}
B45970c:L45970c:{c.instructions+=2;NFSU2_TR(0x45970c);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45970e:{NFSU2_TR(0x45970e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459713ull));
TAIL_STATIC(0x457e20u,457);
}
B459713:L459713:{c.instructions+=5;NFSU2_TR(0x459713);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B459716:{NFSU2_TR(0x459716);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45971a:{NFSU2_TR(0x45971a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45971c:{NFSU2_TR(0x45971c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B459724:{NFSU2_TR(0x459724);
if(r1(R+518)){{goto L459752;}}
}
B459726:L459726:{c.instructions+=12;NFSU2_TR(0x459726);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45972c:{NFSU2_TR(0x45972c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B459732:{NFSU2_TR(0x459732);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459733:{NFSU2_TR(0x459733);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B459739:{NFSU2_TR(0x459739);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45973a:{NFSU2_TR(0x45973a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B459740:{NFSU2_TR(0x459740);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459741:{NFSU2_TR(0x459741);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B459747:{NFSU2_TR(0x459747);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459748:{NFSU2_TR(0x459748);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459749:{NFSU2_TR(0x459749);
__builtin_memmove((R+4),(R+0),4);
}
B45974b:{NFSU2_TR(0x45974b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459750ull));
TAIL_STATIC(0x458010u,458);
}
B459750:L459750:{c.instructions+=1;NFSU2_TR(0x459750);
{goto L459754;}
}
B459752:L459752:{c.instructions+=1;NFSU2_TR(0x459752);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B459754:L459754:{c.instructions+=2;NFSU2_TR(0x459754);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45975a:{NFSU2_TR(0x45975a);
s4(0x82b94c,u32(u32(m4(0x82b94c))+u32(u32(0x1ull))));
}
B459760:L459760:{c.instructions+=5;NFSU2_TR(0x459760);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B459764:{NFSU2_TR(0x459764);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B459765:{NFSU2_TR(0x459765);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45976c:{NFSU2_TR(0x45976c);
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
B45976f:{NFSU2_TR(0x45976f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459770:L459770:{c.instructions+=3;NFSU2_TR(0x459770);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B459776:{NFSU2_TR(0x459776);
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
B459778:{NFSU2_TR(0x459778);
if(r1(R+518)){{goto L459817;}}
}
B45977e:L45977e:{c.instructions+=3;NFSU2_TR(0x45977e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459784:{NFSU2_TR(0x459784);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B459786:{NFSU2_TR(0x459786);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45978c;}}
}
B459788:L459788:{c.instructions+=2;NFSU2_TR(0x459788);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45978a:{NFSU2_TR(0x45978a);
{goto L459798;}
}
B45978c:L45978c:{c.instructions+=2;NFSU2_TR(0x45978c);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B459791:{NFSU2_TR(0x459791);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L459798;}}
}
B459793:L459793:{c.instructions+=1;NFSU2_TR(0x459793);
w4(R+0,u32(0x7fffull));
}
B459798:L459798:{c.instructions+=5;NFSU2_TR(0x459798);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45979b:{NFSU2_TR(0x45979b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4597a1:{NFSU2_TR(0x4597a1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4597a3:{NFSU2_TR(0x4597a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4597a9:{NFSU2_TR(0x4597a9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4597af;}}
}
B4597ab:L4597ab:{c.instructions+=2;NFSU2_TR(0x4597ab);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4597ad:{NFSU2_TR(0x4597ad);
{goto L4597bb;}
}
B4597af:L4597af:{c.instructions+=2;NFSU2_TR(0x4597af);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2328ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2328ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4597b4:{NFSU2_TR(0x4597b4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4597bb;}}
}
B4597b6:L4597b6:{c.instructions+=1;NFSU2_TR(0x4597b6);
w4(R+0,u32(0x2328ull));
}
B4597bb:L4597bb:{c.instructions+=5;NFSU2_TR(0x4597bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4597be:{NFSU2_TR(0x4597be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4597c4:{NFSU2_TR(0x4597c4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4597c6:{NFSU2_TR(0x4597c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4597cc:{NFSU2_TR(0x4597cc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4597d2;}}
}
B4597ce:L4597ce:{c.instructions+=2;NFSU2_TR(0x4597ce);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4597d0:{NFSU2_TR(0x4597d0);
{goto L4597de;}
}
B4597d2:L4597d2:{c.instructions+=2;NFSU2_TR(0x4597d2);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4597d7:{NFSU2_TR(0x4597d7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4597de;}}
}
B4597d9:L4597d9:{c.instructions+=1;NFSU2_TR(0x4597d9);
w4(R+0,u32(0xffffull));
}
B4597de:L4597de:{c.instructions+=5;NFSU2_TR(0x4597de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4597e1:{NFSU2_TR(0x4597e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4597e7:{NFSU2_TR(0x4597e7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4597e9:{NFSU2_TR(0x4597e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4597ef:{NFSU2_TR(0x4597ef);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4597f5;}}
}
B4597f1:L4597f1:{c.instructions+=2;NFSU2_TR(0x4597f1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4597f3:{NFSU2_TR(0x4597f3);
{goto L4597ff;}
}
B4597f5:L4597f5:{c.instructions+=2;NFSU2_TR(0x4597f5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4597f8:{NFSU2_TR(0x4597f8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4597ff;}}
}
B4597fa:L4597fa:{c.instructions+=1;NFSU2_TR(0x4597fa);
w4(R+0,u32(0x7full));
}
B4597ff:L4597ff:{c.instructions+=5;NFSU2_TR(0x4597ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459802:{NFSU2_TR(0x459802);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459808:{NFSU2_TR(0x459808);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45980a:{NFSU2_TR(0x45980a);
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
B45980c:{NFSU2_TR(0x45980c);
if(r1(R+518)){{goto L459817;}}
}
B45980e:L45980e:{c.instructions+=3;NFSU2_TR(0x45980e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B459811:{NFSU2_TR(0x459811);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459812:{NFSU2_TR(0x459812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459817ull));
TAIL_STATIC(0x735580u,735);
}
B459817:L459817:{c.instructions+=1;NFSU2_TR(0x459817);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459820:L459820:{c.instructions+=4;NFSU2_TR(0x459820);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459821:{NFSU2_TR(0x459821);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459827:{NFSU2_TR(0x459827);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B459829:{NFSU2_TR(0x459829);
if(r1(R+518)){{goto L459852;}}
}
B45982b:L45982b:{c.instructions+=4;NFSU2_TR(0x45982b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45982d:{NFSU2_TR(0x45982d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45982f:{NFSU2_TR(0x45982f);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B459837:{NFSU2_TR(0x459837);
if(r1(R+518)){{goto L459852;}}
}
B459839:L459839:{c.instructions+=4;NFSU2_TR(0x459839);
__builtin_memmove((R+4),(R+16),4);
}
B45983d:{NFSU2_TR(0x45983d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45983e:{NFSU2_TR(0x45983e);
__builtin_memmove((R+4),(R+0),4);
}
B459840:{NFSU2_TR(0x459840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459845ull));
TAIL_STATIC(0x735070u,735);
}
B459845:L459845:{c.instructions+=4;NFSU2_TR(0x459845);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B459849:{NFSU2_TR(0x459849);
w4(R+0,u32(0x1ull));
}
B45984e:{NFSU2_TR(0x45984e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B459850:{NFSU2_TR(0x459850);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L459854;}}
}
B459852:L459852:{c.instructions+=1;NFSU2_TR(0x459852);
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
B459854:L459854:{c.instructions+=2;NFSU2_TR(0x459854);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B459855:{NFSU2_TR(0x459855);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459860:L459860:{c.instructions+=3;NFSU2_TR(0x459860);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459866:{NFSU2_TR(0x459866);
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
B459868:{NFSU2_TR(0x459868);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45986d;}}
}
B45986a:L45986a:{c.instructions+=2;NFSU2_TR(0x45986a);
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
B45986c:{NFSU2_TR(0x45986c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45986d:L45986d:{c.instructions+=2;NFSU2_TR(0x45986d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B459870:{NFSU2_TR(0x459870);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459880:L459880:{c.instructions+=4;NFSU2_TR(0x459880);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B459883:{NFSU2_TR(0x459883);
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
B459885:{NFSU2_TR(0x459885);
__builtin_memmove((R+0),(R+518),1);
}
B459888:{NFSU2_TR(0x459888);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459890:L459890:{c.instructions+=7;NFSU2_TR(0x459890);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459893:{NFSU2_TR(0x459893);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B459896:{NFSU2_TR(0x459896);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45989c:{NFSU2_TR(0x45989c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45989f:{NFSU2_TR(0x45989f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4598a1:{NFSU2_TR(0x4598a1);
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
B4598a4:{NFSU2_TR(0x4598a4);
if(r1(R+514)){{goto L4598a9;}}
}
B4598a6:L4598a6:{c.instructions+=2;NFSU2_TR(0x4598a6);
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
B4598a8:{NFSU2_TR(0x4598a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4598a9:L4598a9:{c.instructions+=2;NFSU2_TR(0x4598a9);
w1(R+0,u8(0x1ull));
}
B4598ab:{NFSU2_TR(0x4598ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4598b0:L4598b0:{c.instructions+=6;NFSU2_TR(0x4598b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4598b6:{NFSU2_TR(0x4598b6);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
}
B4598b8:{NFSU2_TR(0x4598b8);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4598ba:{NFSU2_TR(0x4598ba);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4598bc:{NFSU2_TR(0x4598bc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4598bf:{NFSU2_TR(0x4598bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4598c0:L4598c0:{c.instructions+=8;NFSU2_TR(0x4598c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4598c1:{NFSU2_TR(0x4598c1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4598c3:{NFSU2_TR(0x4598c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4598c6:{NFSU2_TR(0x4598c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4598c8:{NFSU2_TR(0x4598c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4598cb:{NFSU2_TR(0x4598cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4598ce:{NFSU2_TR(0x4598ce);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4598d0:{NFSU2_TR(0x4598d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4598d3:L4598d3:{c.instructions+=9;NFSU2_TR(0x4598d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4598d6:{NFSU2_TR(0x4598d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4598d8:{NFSU2_TR(0x4598d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4598db:{NFSU2_TR(0x4598db);
u8 U[13];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B4598df:{NFSU2_TR(0x4598df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4598e2:{NFSU2_TR(0x4598e2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4598e3:{NFSU2_TR(0x4598e3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4598e6:{NFSU2_TR(0x4598e6);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B4598e9:{NFSU2_TR(0x4598e9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4598d3u);}goto L4598d3;}}
}
B4598eb:L4598eb:{c.instructions+=3;NFSU2_TR(0x4598eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4598ee:{NFSU2_TR(0x4598ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4598ef:{NFSU2_TR(0x4598ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4598f0:L4598f0:{c.instructions+=3;NFSU2_TR(0x4598f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4598f3:{NFSU2_TR(0x4598f3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4598f6:{NFSU2_TR(0x4598f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4598fe;}}
}
B4598f8:L4598f8:{c.instructions+=2;NFSU2_TR(0x4598f8);
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
B4598fb:{NFSU2_TR(0x4598fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4598fe:L4598fe:{c.instructions+=10;NFSU2_TR(0x4598fe);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B459902:{NFSU2_TR(0x459902);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B459908:{NFSU2_TR(0x459908);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45990c:{NFSU2_TR(0x45990c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45990f:{NFSU2_TR(0x45990f);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B459913:{NFSU2_TR(0x459913);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B459917:{NFSU2_TR(0x459917);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45991d:{NFSU2_TR(0x45991d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45991f:{NFSU2_TR(0x45991f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B459922:{NFSU2_TR(0x459922);
if(r1(R+514)){{goto L45992a;}}
}
B459924:L459924:{c.instructions+=1;NFSU2_TR(0x459924);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
s4(u32(r4(R+8)),r4(U+0));
}
B45992a:L45992a:{c.instructions+=16;NFSU2_TR(0x45992a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45992d:{NFSU2_TR(0x45992d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B459931:{NFSU2_TR(0x459931);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B459935:{NFSU2_TR(0x459935);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459938:{NFSU2_TR(0x459938);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45993c:{NFSU2_TR(0x45993c);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B459940:{NFSU2_TR(0x459940);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B459943:{NFSU2_TR(0x459943);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459947:{NFSU2_TR(0x459947);
u8 U[16];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B45994b:{NFSU2_TR(0x45994b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45994e:{NFSU2_TR(0x45994e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B459950:{NFSU2_TR(0x459950);
u8 U[13];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B459954:{NFSU2_TR(0x459954);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459957:{NFSU2_TR(0x459957);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B459959:{NFSU2_TR(0x459959);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45995c:{NFSU2_TR(0x45995c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L459964;}}
}
B45995e:L45995e:{c.instructions+=2;NFSU2_TR(0x45995e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B459961:{NFSU2_TR(0x459961);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459964:L459964:{c.instructions+=3;NFSU2_TR(0x459964);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B459965:{NFSU2_TR(0x459965);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459968:{NFSU2_TR(0x459968);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459970:L459970:{c.instructions+=10;NFSU2_TR(0x459970);
__builtin_memmove((R+0),(R+4),4);
}
B459972:{NFSU2_TR(0x459972);
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
B459974:{NFSU2_TR(0x459974);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459977:{NFSU2_TR(0x459977);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B459979:{NFSU2_TR(0x459979);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45997c:{NFSU2_TR(0x45997c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45997f:{NFSU2_TR(0x45997f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459982:{NFSU2_TR(0x459982);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459985:{NFSU2_TR(0x459985);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B459989:{NFSU2_TR(0x459989);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459990:L459990:{c.instructions+=7;NFSU2_TR(0x459990);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B459994:{NFSU2_TR(0x459994);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45999a:{NFSU2_TR(0x45999a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45999d:{NFSU2_TR(0x45999d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4599a3:{NFSU2_TR(0x4599a3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4599a5:{NFSU2_TR(0x4599a5);
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
B4599a8:{NFSU2_TR(0x4599a8);
if(r1(R+514)){{goto L4599b1;}}
}
B4599aa:L4599aa:{c.instructions+=1;NFSU2_TR(0x4599aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x3c23d70aull));
s4(u32(r4(U+0)),r4(U+4));
}
B4599b1:L4599b1:{c.instructions+=10;NFSU2_TR(0x4599b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4599b5:{NFSU2_TR(0x4599b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4599b9:{NFSU2_TR(0x4599b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4599bc:{NFSU2_TR(0x4599bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4599c0:{NFSU2_TR(0x4599c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4599c3:{NFSU2_TR(0x4599c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4599c6:{NFSU2_TR(0x4599c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4599ca:{NFSU2_TR(0x4599ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4599cd:{NFSU2_TR(0x4599cd);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4599d3:{NFSU2_TR(0x4599d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4599e0:L4599e0:{c.instructions+=11;NFSU2_TR(0x4599e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4599e1:{NFSU2_TR(0x4599e1);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4599e4:{NFSU2_TR(0x4599e4);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4599e7:{NFSU2_TR(0x4599e7);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4599ea:{NFSU2_TR(0x4599ea);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4599ed:{NFSU2_TR(0x4599ed);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B4599ef:{NFSU2_TR(0x4599ef);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4599f3:{NFSU2_TR(0x4599f3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4599f9:{NFSU2_TR(0x4599f9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4599fb:{NFSU2_TR(0x4599fb);
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
B4599fe:{NFSU2_TR(0x4599fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L459a31;}}
}
B459a00:L459a00:{c.instructions+=6;NFSU2_TR(0x459a00);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B459a04:{NFSU2_TR(0x459a04);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B459a0a:{NFSU2_TR(0x459a0a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B459a0e:{NFSU2_TR(0x459a0e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B459a10:{NFSU2_TR(0x459a10);
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
B459a13:{NFSU2_TR(0x459a13);
if(r1(R+514)){{goto L459a1d;}}
}
B459a15:L459a15:{c.instructions+=2;NFSU2_TR(0x459a15);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B459a17:{NFSU2_TR(0x459a17);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B459a1d:L459a1d:{c.instructions+=9;NFSU2_TR(0x459a1d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B459a20:{NFSU2_TR(0x459a20);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B459a24:{NFSU2_TR(0x459a24);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B459a26:{NFSU2_TR(0x459a26);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B459a28:{NFSU2_TR(0x459a28);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B459a2a:{NFSU2_TR(0x459a2a);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B459a2d:{NFSU2_TR(0x459a2d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B459a2f:{NFSU2_TR(0x459a2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B459a30:{NFSU2_TR(0x459a30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459a31:L459a31:{c.instructions+=10;NFSU2_TR(0x459a31);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B459a37:{NFSU2_TR(0x459a37);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B459a3b:{NFSU2_TR(0x459a3b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B459a3e:{NFSU2_TR(0x459a3e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B459a40:{NFSU2_TR(0x459a40);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B459a42:{NFSU2_TR(0x459a42);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B459a44:{NFSU2_TR(0x459a44);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B459a47:{NFSU2_TR(0x459a47);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B459a49:{NFSU2_TR(0x459a49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B459a4a:{NFSU2_TR(0x459a4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459a50:L459a50:{c.instructions+=3;NFSU2_TR(0x459a50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459a51:{NFSU2_TR(0x459a51);
u8 U[14];
__builtin_memmove((U+6),gp(0x8900bc),4);
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
B459a58:{NFSU2_TR(0x459a58);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L459a64;}}
}
B459a5a:L459a5a:{c.instructions+=4;NFSU2_TR(0x459a5a);
__builtin_memmove((R+0),gp(0x8900b4),4);
}
B459a5f:{NFSU2_TR(0x459a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459a62:{NFSU2_TR(0x459a62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B459a63:{NFSU2_TR(0x459a63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459a64:L459a64:{c.instructions+=11;NFSU2_TR(0x459a64);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459a65:{NFSU2_TR(0x459a65);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B459a69:{NFSU2_TR(0x459a69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459a6a:{NFSU2_TR(0x459a6a);
__builtin_memmove((R+24),gp(0x8900b4),4);
}
B459a70:{NFSU2_TR(0x459a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459a73:{NFSU2_TR(0x459a73);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459a74:{NFSU2_TR(0x459a74);
__builtin_memmove((R+28),gp(0x8900b8),4);
}
B459a7a:{NFSU2_TR(0x459a7a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B459a7d:{NFSU2_TR(0x459a7d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459a7e:{NFSU2_TR(0x459a7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459a7f:{NFSU2_TR(0x459a7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459a84ull));
TAIL_STATIC(0x43ce10u,43c);
}
B459a84:L459a84:{c.instructions+=6;NFSU2_TR(0x459a84);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B459a88:{NFSU2_TR(0x459a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459a8b:{NFSU2_TR(0x459a8b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B459a8e:{NFSU2_TR(0x459a8e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459a8f:{NFSU2_TR(0x459a8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459a90:{NFSU2_TR(0x459a90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459a95ull));
TAIL_STATIC(0x43ce10u,43c);
}
B459a95:L459a95:{c.instructions+=5;NFSU2_TR(0x459a95);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B459a99:{NFSU2_TR(0x459a99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B459a9c:{NFSU2_TR(0x459a9c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B459a9e:{NFSU2_TR(0x459a9e);
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
B459aa1:{NFSU2_TR(0x459aa1);
if(r1(R+514)){{goto L459aab;}}
}
B459aa3:L459aa3:{c.instructions+=6;NFSU2_TR(0x459aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459aa6:{NFSU2_TR(0x459aa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B459aa7:{NFSU2_TR(0x459aa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B459aa8:{NFSU2_TR(0x459aa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B459aa9:{NFSU2_TR(0x459aa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B459aaa:{NFSU2_TR(0x459aaa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459aab:L459aab:{c.instructions+=6;NFSU2_TR(0x459aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459aae:{NFSU2_TR(0x459aae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B459aaf:{NFSU2_TR(0x459aaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B459ab0:{NFSU2_TR(0x459ab0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B459ab1:{NFSU2_TR(0x459ab1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B459ab2:{NFSU2_TR(0x459ab2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459ac0:L459ac0:{c.instructions+=3;NFSU2_TR(0x459ac0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459ac1:{NFSU2_TR(0x459ac1);
u8 U[14];
__builtin_memmove((U+6),gp(0x8900bc),4);
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
B459ac8:{NFSU2_TR(0x459ac8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L459ad1;}}
}
B459aca:L459aca:{c.instructions+=3;NFSU2_TR(0x459aca);
__builtin_memmove((R+0),gp(0x8900b4),4);
}
B459acf:{NFSU2_TR(0x459acf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B459ad0:{NFSU2_TR(0x459ad0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459ad1:L459ad1:{c.instructions+=11;NFSU2_TR(0x459ad1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459ad2:{NFSU2_TR(0x459ad2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B459ad6:{NFSU2_TR(0x459ad6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459ad7:{NFSU2_TR(0x459ad7);
__builtin_memmove((R+24),gp(0x8900b4),4);
}
B459add:{NFSU2_TR(0x459add);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459ae0:{NFSU2_TR(0x459ae0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459ae1:{NFSU2_TR(0x459ae1);
__builtin_memmove((R+28),gp(0x8900b8),4);
}
B459ae7:{NFSU2_TR(0x459ae7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B459aea:{NFSU2_TR(0x459aea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459aeb:{NFSU2_TR(0x459aeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459aec:{NFSU2_TR(0x459aec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459af1ull));
TAIL_STATIC(0x43ce10u,43c);
}
B459af1:L459af1:{c.instructions+=6;NFSU2_TR(0x459af1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B459af5:{NFSU2_TR(0x459af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459af8:{NFSU2_TR(0x459af8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B459afb:{NFSU2_TR(0x459afb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459afc:{NFSU2_TR(0x459afc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459afd:{NFSU2_TR(0x459afd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459b02ull));
TAIL_STATIC(0x43ce10u,43c);
}
B459b02:L459b02:{c.instructions+=6;NFSU2_TR(0x459b02);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B459b06:{NFSU2_TR(0x459b06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B459b09:{NFSU2_TR(0x459b09);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B459b0b:{NFSU2_TR(0x459b0b);
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
B459b0e:{NFSU2_TR(0x459b0e);
__builtin_memmove((R+0),(R+28),4);
}
B459b10:{NFSU2_TR(0x459b10);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L459b14;}}
}
B459b12:L459b12:{c.instructions+=1;NFSU2_TR(0x459b12);
__builtin_memmove((R+0),(R+24),4);
}
B459b14:L459b14:{c.instructions+=5;NFSU2_TR(0x459b14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B459b15:{NFSU2_TR(0x459b15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B459b16:{NFSU2_TR(0x459b16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B459b17:{NFSU2_TR(0x459b17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B459b18:{NFSU2_TR(0x459b18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459b20:L459b20:{c.instructions+=14;NFSU2_TR(0x459b20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459b22:{NFSU2_TR(0x459b22);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459b27:{NFSU2_TR(0x459b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459b2d:{NFSU2_TR(0x459b2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459b2e:{NFSU2_TR(0x459b2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459b35:{NFSU2_TR(0x459b35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459b36:{NFSU2_TR(0x459b36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459b37:{NFSU2_TR(0x459b37);
__builtin_memmove((R+24),(R+4),4);
}
B459b39:{NFSU2_TR(0x459b39);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459b3d:{NFSU2_TR(0x459b3d);
u8 U[4];
w4(U+0,u32(0x789db0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B459b43:{NFSU2_TR(0x459b43);
__builtin_memmove((R+0),gp(0x82afa8),4);
}
B459b48:{NFSU2_TR(0x459b48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459b49:{NFSU2_TR(0x459b49);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B459b51:{NFSU2_TR(0x459b51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459b56ull));
TAIL_STATIC(0x440e40u,440);
}
B459b56:L459b56:{c.instructions+=8;NFSU2_TR(0x459b56);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B459b5a:{NFSU2_TR(0x459b5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B459b5d:{NFSU2_TR(0x459b5d);
s4(0x82afa8,u32(0x0ull));
}
B459b67:{NFSU2_TR(0x459b67);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B459b6d:{NFSU2_TR(0x459b6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B459b6e:{NFSU2_TR(0x459b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459b75:{NFSU2_TR(0x459b75);
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
B459b78:{NFSU2_TR(0x459b78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459b80:L459b80:{c.instructions+=39;NFSU2_TR(0x459b80);
__builtin_memmove((R+0),(R+4),4);
}
B459b82:{NFSU2_TR(0x459b82);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B459b84:{NFSU2_TR(0x459b84);
u8 U[4];
w4(U+0,u32(0x789db4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B459b8a:{NFSU2_TR(0x459b8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459b8d:{NFSU2_TR(0x459b8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459b90:{NFSU2_TR(0x459b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459b93:{NFSU2_TR(0x459b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459b96:{NFSU2_TR(0x459b96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459b99:{NFSU2_TR(0x459b99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459b9c:{NFSU2_TR(0x459b9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B459ba3:{NFSU2_TR(0x459ba3);
__builtin_memmove(gp(0x82b984),(R+8),4);
}
B459ba9:{NFSU2_TR(0x459ba9);
__builtin_memmove(gp(0x82b974),(R+8),4);
}
B459baf:{NFSU2_TR(0x459baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459bb2:{NFSU2_TR(0x459bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459bb5:{NFSU2_TR(0x459bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459bb8:{NFSU2_TR(0x459bb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459bbb:{NFSU2_TR(0x459bbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459bbe:{NFSU2_TR(0x459bbe);
__builtin_memmove(gp(0x82b9c0),(R+8),4);
}
B459bc4:{NFSU2_TR(0x459bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459bca:{NFSU2_TR(0x459bca);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B459bd0:{NFSU2_TR(0x459bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459bd3:{NFSU2_TR(0x459bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459bd9:{NFSU2_TR(0x459bd9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B459bdf:{NFSU2_TR(0x459bdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459be5:{NFSU2_TR(0x459be5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B459beb:{NFSU2_TR(0x459beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459bee:{NFSU2_TR(0x459bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459bf1:{NFSU2_TR(0x459bf1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459bf2:{NFSU2_TR(0x459bf2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459bf3:{NFSU2_TR(0x459bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
w4(U+4,u32(0x3a83126full));
s4(u32(r4(U+0)),r4(U+4));
}
B459bfa:{NFSU2_TR(0x459bfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B459c01:{NFSU2_TR(0x459c01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459c04:{NFSU2_TR(0x459c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459c07:{NFSU2_TR(0x459c07);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B459c0d:{NFSU2_TR(0x459c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459c10:{NFSU2_TR(0x459c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459c13:{NFSU2_TR(0x459c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B459c19:{NFSU2_TR(0x459c19);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B459c1b:{NFSU2_TR(0x459c1b);
{goto L459c20;}
}
B459c20:L459c20:{c.instructions+=6;NFSU2_TR(0x459c20);
w4(R+12,u32(0x1ull));
}
B459c25:{NFSU2_TR(0x459c25);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B459c27:{NFSU2_TR(0x459c27);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+12))));
}
B459c29:{NFSU2_TR(0x459c29);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B459c2a:{NFSU2_TR(0x459c2a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B459c2d:{NFSU2_TR(0x459c2d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x459c20u);}goto L459c20;}}
}
B459c2f:L459c2f:{c.instructions+=22;NFSU2_TR(0x459c2f);
__builtin_memmove((R+4),(R+24),4);
}
B459c31:{NFSU2_TR(0x459c31);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ffull))));
}
B459c37:{NFSU2_TR(0x459c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459c3d:{NFSU2_TR(0x459c3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459c43:{NFSU2_TR(0x459c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459c49:{NFSU2_TR(0x459c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459c4f:{NFSU2_TR(0x459c4f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B459c52:{NFSU2_TR(0x459c52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B459c53:{NFSU2_TR(0x459c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
w4(U+4,u32(0x1bull));
s4(u32(r4(U+0)),r4(U+4));
}
B459c5d:{NFSU2_TR(0x459c5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
w4(U+4,u32(0x1bull));
s4(u32(r4(U+0)),r4(U+4));
}
B459c67:{NFSU2_TR(0x459c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459c6d:{NFSU2_TR(0x459c6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459c73:{NFSU2_TR(0x459c73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459c79:{NFSU2_TR(0x459c79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459c7f:{NFSU2_TR(0x459c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459c85:{NFSU2_TR(0x459c85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459c8b:{NFSU2_TR(0x459c8b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B459c91:{NFSU2_TR(0x459c91);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B459c97:{NFSU2_TR(0x459c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459c9d:{NFSU2_TR(0x459c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459ca3:{NFSU2_TR(0x459ca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B459ca4:{NFSU2_TR(0x459ca4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459cb0:L459cb0:{c.instructions+=16;NFSU2_TR(0x459cb0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459cb2:{NFSU2_TR(0x459cb2);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459cb7:{NFSU2_TR(0x459cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459cbd:{NFSU2_TR(0x459cbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459cbe:{NFSU2_TR(0x459cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459cc5:{NFSU2_TR(0x459cc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459cc6:{NFSU2_TR(0x459cc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459cc7:{NFSU2_TR(0x459cc7);
__builtin_memmove((R+24),(R+4),4);
}
B459cc9:{NFSU2_TR(0x459cc9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459cca:{NFSU2_TR(0x459cca);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459cce:{NFSU2_TR(0x459cce);
u8 U[4];
w4(U+0,u32(0x789db4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B459cd4:{NFSU2_TR(0x459cd4);
__builtin_memmove((R+0),gp(0x82b984),4);
}
B459cd9:{NFSU2_TR(0x459cd9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B459cdb:{NFSU2_TR(0x459cdb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B459cdd:{NFSU2_TR(0x459cdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459ce1:{NFSU2_TR(0x459ce1);
if(r1(R+518)){{goto L459cf2;}}
}
B459ce3:L459ce3:{c.instructions+=2;NFSU2_TR(0x459ce3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459ce4:{NFSU2_TR(0x459ce4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459ce9ull));
TAIL_STATIC(0x440540u,440);
}
B459ce9:L459ce9:{c.instructions+=2;NFSU2_TR(0x459ce9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B459cec:{NFSU2_TR(0x459cec);
__builtin_memmove(gp(0x82b984),(R+28),4);
}
B459cf2:L459cf2:{c.instructions+=3;NFSU2_TR(0x459cf2);
__builtin_memmove((R+0),gp(0x82b994),4);
}
B459cf7:{NFSU2_TR(0x459cf7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B459cf9:{NFSU2_TR(0x459cf9);
if(r1(R+518)){{goto L459d0a;}}
}
B459cfb:L459cfb:{c.instructions+=2;NFSU2_TR(0x459cfb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459cfc:{NFSU2_TR(0x459cfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459d01ull));
TAIL_STATIC(0x440540u,440);
}
B459d01:L459d01:{c.instructions+=2;NFSU2_TR(0x459d01);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B459d04:{NFSU2_TR(0x459d04);
__builtin_memmove(gp(0x82b994),(R+28),4);
}
B459d0a:L459d0a:{c.instructions+=2;NFSU2_TR(0x459d0a);
u8 U[8];
__builtin_memmove((U+0),gp(0x82b974),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B459d10:{NFSU2_TR(0x459d10);
if(r1(R+518)){{goto L459d18;}}
}
B459d12:L459d12:{c.instructions+=1;NFSU2_TR(0x459d12);
__builtin_memmove(gp(0x82b974),(R+28),4);
}
B459d18:L459d18:{c.instructions+=2;NFSU2_TR(0x459d18);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B459d1b:{NFSU2_TR(0x459d1b);
if(r1(R+518)){{goto L459d20;}}
}
B459d1d:L459d1d:{c.instructions+=1;NFSU2_TR(0x459d1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459d20:L459d20:{c.instructions+=7;NFSU2_TR(0x459d20);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B459d24:{NFSU2_TR(0x459d24);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B459d2a:{NFSU2_TR(0x459d2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B459d2b:{NFSU2_TR(0x459d2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B459d2c:{NFSU2_TR(0x459d2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459d33:{NFSU2_TR(0x459d33);
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
B459d36:{NFSU2_TR(0x459d36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459d40:L459d40:{c.instructions+=18;NFSU2_TR(0x459d40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B459d44:{NFSU2_TR(0x459d44);
__builtin_memmove((R+0),(R+4),4);
}
B459d46:{NFSU2_TR(0x459d46);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b9a4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B459d4d:{NFSU2_TR(0x459d4d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B459d50:{NFSU2_TR(0x459d50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ecd4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B459d56:{NFSU2_TR(0x459d56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459d57:{NFSU2_TR(0x459d57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459d58:{NFSU2_TR(0x459d58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459d59:{NFSU2_TR(0x459d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ecd38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B459d5f:{NFSU2_TR(0x459d5f);
w4(R+8,u32(0x1000000ull));
}
B459d64:{NFSU2_TR(0x459d64);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B459d66:{NFSU2_TR(0x459d66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ecd3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B459d6c:{NFSU2_TR(0x459d6c);
w4(R+24,u32(0x1ull));
}
B459d71:{NFSU2_TR(0x459d71);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B459d73:{NFSU2_TR(0x459d73);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
}
B459d75:{NFSU2_TR(0x459d75);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x10000000ull))));
}
B459d7b:{NFSU2_TR(0x459d7b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459d7c:{NFSU2_TR(0x459d7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459d81ull));
TAIL_STATIC(0x73afd0u,73a);
}
B459d81:L459d81:{c.instructions+=3;NFSU2_TR(0x459d81);
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
B459d84:{NFSU2_TR(0x459d84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B459d85:{NFSU2_TR(0x459d85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459d90:L459d90:{c.instructions+=2;NFSU2_TR(0x459d90);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B459d95:{NFSU2_TR(0x459d95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L459da8;}}
}
B459d97:L459d97:{c.instructions+=4;NFSU2_TR(0x459d97);
__builtin_memmove((R+0),gp(0x7ecf30),4);
}
B459d9c:{NFSU2_TR(0x459d9c);
__builtin_memmove(gp(0x7ecd84),(R+0),4);
}
B459da1:{NFSU2_TR(0x459da1);
__builtin_memmove((R+0),gp(0x7ecf34),4);
}
B459da6:{NFSU2_TR(0x459da6);
{goto L459db9;}
}
B459da8:L459da8:{c.instructions+=3;NFSU2_TR(0x459da8);
__builtin_memmove((R+4),gp(0x7ecf38),4);
}
B459dae:{NFSU2_TR(0x459dae);
__builtin_memmove((R+0),gp(0x7ecf3c),4);
}
B459db3:{NFSU2_TR(0x459db3);
__builtin_memmove(gp(0x7ecd84),(R+4),4);
}
B459db9:L459db9:{c.instructions+=3;NFSU2_TR(0x459db9);
__builtin_memmove(gp(0x7ecd88),(R+0),4);
}
B459dbe:{NFSU2_TR(0x459dbe);
__builtin_memmove(gp(0x7ecd98),(R+0),4);
}
B459dc3:{NFSU2_TR(0x459dc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459dc8ull));
TAIL_STATIC(0x570a30u,570);
}
B459dc8:L459dc8:{c.instructions+=2;NFSU2_TR(0x459dc8);
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
B459dcb:{NFSU2_TR(0x459dcb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L459df2;}}
}
B459dcd:L459dcd:{c.instructions+=3;NFSU2_TR(0x459dcd);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B459dd3:{NFSU2_TR(0x459dd3);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x8ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B459dd7:{NFSU2_TR(0x459dd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L459de6;}}
}
B459dd9:L459dd9:{c.instructions+=3;NFSU2_TR(0x459dd9);
__builtin_memmove((R+0),gp(0x7ecf40),4);
}
B459dde:{NFSU2_TR(0x459dde);
__builtin_memmove(gp(0x7ece98),(R+0),4);
}
B459de3:{NFSU2_TR(0x459de3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459de6:L459de6:{c.instructions+=2;NFSU2_TR(0x459de6);
__builtin_memmove((R+4),gp(0x7ecf44),4);
}
B459dec:{NFSU2_TR(0x459dec);
__builtin_memmove(gp(0x7ece98),(R+4),4);
}
B459df2:L459df2:{c.instructions+=1;NFSU2_TR(0x459df2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459e00:L459e00:{c.instructions+=4;NFSU2_TR(0x459e00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B459e04:{NFSU2_TR(0x459e04);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B459e06:{NFSU2_TR(0x459e06);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B459e08:{NFSU2_TR(0x459e08);
if(r1(R+518)){{goto L459e22;}}
}
B459e0a:L459e0a:{c.instructions+=3;NFSU2_TR(0x459e0a);
__builtin_memmove((R+8),gp(0x82c6d4),4);
}
B459e10:{NFSU2_TR(0x459e10);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B459e12:{NFSU2_TR(0x459e12);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L459e38;}}
}
B459e14:L459e14:{c.instructions+=6;NFSU2_TR(0x459e14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459e15:{NFSU2_TR(0x459e15);
__builtin_memmove((R+24),gp(0x82c6d8),4);
}
B459e1b:{NFSU2_TR(0x459e1b);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B459e1d:{NFSU2_TR(0x459e1d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B459e1f:{NFSU2_TR(0x459e1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B459e20:{NFSU2_TR(0x459e20);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L459e38;}}
}
B459e22:L459e22:{c.instructions+=3;NFSU2_TR(0x459e22);
__builtin_memmove((R+4),gp(0x8a329c),4);
}
B459e28:{NFSU2_TR(0x459e28);
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
B459e2a:{NFSU2_TR(0x459e2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L459e36;}}
}
B459e2c:L459e2c:{c.instructions+=3;NFSU2_TR(0x459e2c);
__builtin_memmove((R+4),gp(0x88ec68),4);
}
B459e32:{NFSU2_TR(0x459e32);
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
B459e34:{NFSU2_TR(0x459e34);
if(r1(R+518)){{goto L459e38;}}
}
B459e36:L459e36:{c.instructions+=1;NFSU2_TR(0x459e36);
w1(R+0,u8(0x1ull));
}
B459e38:L459e38:{c.instructions+=1;NFSU2_TR(0x459e38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459e40:L459e40:{c.instructions+=12;NFSU2_TR(0x459e40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459e44:{NFSU2_TR(0x459e44);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459e45:{NFSU2_TR(0x459e45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459e46:{NFSU2_TR(0x459e46);
__builtin_memmove((R+24),(R+4),4);
}
B459e48:{NFSU2_TR(0x459e48);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B459e4b:{NFSU2_TR(0x459e4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459e4e:{NFSU2_TR(0x459e4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459e4f:{NFSU2_TR(0x459e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459e52:{NFSU2_TR(0x459e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459e55:{NFSU2_TR(0x459e55);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B459e5b:{NFSU2_TR(0x459e5b);
w4(R+4,u32(0x10ull));
}
B459e60:{NFSU2_TR(0x459e60);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B459e62:L459e62:{c.instructions+=5;NFSU2_TR(0x459e62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459e65:{NFSU2_TR(0x459e65);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B459e67:{NFSU2_TR(0x459e67);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B459e6a:{NFSU2_TR(0x459e6a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B459e6b:{NFSU2_TR(0x459e6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x459e62u);}goto L459e62;}}
}
B459e6d:L459e6d:{c.instructions+=7;NFSU2_TR(0x459e6d);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459e72:{NFSU2_TR(0x459e72);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B459e78:{NFSU2_TR(0x459e78);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459e7d:{NFSU2_TR(0x459e7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459e7e:{NFSU2_TR(0x459e7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459e81:{NFSU2_TR(0x459e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459e84:{NFSU2_TR(0x459e84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459e89ull));
TAIL_STATIC(0x43dda0u,43d);
}
B459e89:L459e89:{c.instructions+=6;NFSU2_TR(0x459e89);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459e8e:{NFSU2_TR(0x459e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459e94:{NFSU2_TR(0x459e94);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((R+28),(U+0),4);
}
B459e9a:{NFSU2_TR(0x459e9a);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459e9f:{NFSU2_TR(0x459e9f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459ea0:{NFSU2_TR(0x459ea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459ea5ull));
TAIL_STATIC(0x43dda0u,43d);
}
B459ea5:L459ea5:{c.instructions+=9;NFSU2_TR(0x459ea5);
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
B459ea8:{NFSU2_TR(0x459ea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459eae:{NFSU2_TR(0x459eae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B459eaf:{NFSU2_TR(0x459eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459eb5:{NFSU2_TR(0x459eb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459ebb:{NFSU2_TR(0x459ebb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B459ec1:{NFSU2_TR(0x459ec1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B459ec2:{NFSU2_TR(0x459ec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B459ec3:{NFSU2_TR(0x459ec3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459ed0:L459ed0:{c.instructions+=2;NFSU2_TR(0x459ed0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x171ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B459ed7:{NFSU2_TR(0x459ed7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459ee0:L459ee0:{c.instructions+=2;NFSU2_TR(0x459ee0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x171ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B459ee7:{NFSU2_TR(0x459ee7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459ef0:L459ef0:{c.instructions+=5;NFSU2_TR(0x459ef0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459ef1:{NFSU2_TR(0x459ef1);
__builtin_memmove((R+24),(R+4),4);
}
B459ef3:{NFSU2_TR(0x459ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459ef6:{NFSU2_TR(0x459ef6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B459ef8:{NFSU2_TR(0x459ef8);
if(r1(R+518)){{goto L459fe2;}}
}
B459efe:L459efe:{c.instructions+=23;NFSU2_TR(0x459efe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459eff:{NFSU2_TR(0x459eff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459f00:{NFSU2_TR(0x459f00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459f01:{NFSU2_TR(0x459f01);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B459f05:{NFSU2_TR(0x459f05);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B459f09:{NFSU2_TR(0x459f09);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B459f0c:{NFSU2_TR(0x459f0c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B459f0f:{NFSU2_TR(0x459f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ecd40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B459f15:{NFSU2_TR(0x459f15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459f1b:{NFSU2_TR(0x459f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ecd38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B459f21:{NFSU2_TR(0x459f21);
w4(R+8,u32(0x1000000ull));
}
B459f26:{NFSU2_TR(0x459f26);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B459f28:{NFSU2_TR(0x459f28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ecd3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B459f2e:{NFSU2_TR(0x459f2e);
w4(R+12,u32(0x1ull));
}
B459f33:{NFSU2_TR(0x459f33);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B459f35:{NFSU2_TR(0x459f35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
w4(U+4,u32(0x7d0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B459f3f:{NFSU2_TR(0x459f3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459f45:{NFSU2_TR(0x459f45);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+12))));
}
B459f47:{NFSU2_TR(0x459f47);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x10000000ull))));
}
B459f4d:{NFSU2_TR(0x459f4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+12),(U+0),4);
}
B459f53:{NFSU2_TR(0x459f53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459f54:{NFSU2_TR(0x459f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459f5a:{NFSU2_TR(0x459f5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459f5full));
TAIL_STATIC(0x721a6bu,721);
}
B459f5f:L459f5f:{c.instructions+=5;NFSU2_TR(0x459f5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459f62:{NFSU2_TR(0x459f62);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B459f66:{NFSU2_TR(0x459f66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B459f69:{NFSU2_TR(0x459f69);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B459f6b:{NFSU2_TR(0x459f6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L459f71;}}
}
B459f6d:L459f6d:{c.instructions+=1;NFSU2_TR(0x459f6d);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B459f71:L459f71:{c.instructions+=15;NFSU2_TR(0x459f71);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459f75:{NFSU2_TR(0x459f75);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B459f79:{NFSU2_TR(0x459f79);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B459f7d:{NFSU2_TR(0x459f7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459f7e:{NFSU2_TR(0x459f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459f84:{NFSU2_TR(0x459f84);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459f85:{NFSU2_TR(0x459f85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459f86:{NFSU2_TR(0x459f86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B459f8c:{NFSU2_TR(0x459f8c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459f8d:{NFSU2_TR(0x459f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B459f93:{NFSU2_TR(0x459f93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459f94:{NFSU2_TR(0x459f94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459f95:{NFSU2_TR(0x459f95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459f96:{NFSU2_TR(0x459f96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459f97:{NFSU2_TR(0x459f97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459f9cull));
TAIL_STATIC(0x73aa10u,73a);
}
B459f9c:L459f9c:{c.instructions+=5;NFSU2_TR(0x459f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459f9f:{NFSU2_TR(0x459f9f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B459fa1:{NFSU2_TR(0x459fa1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B459fa4:{NFSU2_TR(0x459fa4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B459fa6:{NFSU2_TR(0x459fa6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L459fc7;}}
}
B459fa8:L459fa8:{c.instructions+=6;NFSU2_TR(0x459fa8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B459fab:{NFSU2_TR(0x459fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459fae:{NFSU2_TR(0x459fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459fb1:{NFSU2_TR(0x459fb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B459fb4:{NFSU2_TR(0x459fb4);
u8 U[24];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+4))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B459fb8:{NFSU2_TR(0x459fb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L459fdf;}}
}
B459fba:L459fba:{c.instructions+=7;NFSU2_TR(0x459fba);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B459fbe:{NFSU2_TR(0x459fbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B459fbf:{NFSU2_TR(0x459fbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B459fc0:{NFSU2_TR(0x459fc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B459fc1:{NFSU2_TR(0x459fc1);
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
B459fc3:{NFSU2_TR(0x459fc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B459fc4:{NFSU2_TR(0x459fc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459fc7:L459fc7:{c.instructions+=5;NFSU2_TR(0x459fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B459fcd:{NFSU2_TR(0x459fcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B459fce:{NFSU2_TR(0x459fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459fd1:{NFSU2_TR(0x459fd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459fd4:{NFSU2_TR(0x459fd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x459fd9ull));
TAIL_STATIC(0x73ae40u,73a);
}
B459fd9:L459fd9:{c.instructions+=2;NFSU2_TR(0x459fd9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B459fdc:{NFSU2_TR(0x459fdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B459fdf:L459fdf:{c.instructions+=3;NFSU2_TR(0x459fdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B459fe0:{NFSU2_TR(0x459fe0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B459fe1:{NFSU2_TR(0x459fe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B459fe2:L459fe2:{c.instructions+=3;NFSU2_TR(0x459fe2);
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
B459fe4:{NFSU2_TR(0x459fe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B459fe5:{NFSU2_TR(0x459fe5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B459ff0:L459ff0:{c.instructions+=3;NFSU2_TR(0x459ff0);
__builtin_memmove((R+0),gp(0x82ba24),4);
}
B459ff5:{NFSU2_TR(0x459ff5);
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
B459ff7:{NFSU2_TR(0x459ff7);
if(r1(R+518)){{goto L459ffb;}}
}
B459ff9:L459ff9:{c.instructions+=1;NFSU2_TR(0x459ff9);
{u32 t_=u32(r4(R+0));TAIL_DYNAMIC(t_);}
}
B459ffb:L459ffb:{c.instructions+=1;NFSU2_TR(0x459ffb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x459,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
