#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_573(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x574,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x574,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_574(u8* __restrict R,Cpu& c);
u32 page_574(Cpu& c){return body_574(c.regs.data(),c);}
__attribute__((noinline)) u32 body_574(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x574003:goto L574003;
case 0x574007:c.instructions+=8;goto B574007;
case 0x574009:c.instructions+=7;goto B574009;
case 0x57400b:c.instructions+=6;goto B57400b;
case 0x57400d:c.instructions+=5;goto B57400d;
case 0x574010:c.instructions+=4;goto B574010;
case 0x574012:c.instructions+=3;goto B574012;
case 0x574015:c.instructions+=2;goto B574015;
case 0x574018:c.instructions+=1;goto B574018;
case 0x57401a:goto L57401a;
case 0x57401c:goto L57401c;
case 0x57401e:c.instructions+=2;goto B57401e;
case 0x574022:c.instructions+=1;goto B574022;
case 0x574025:goto L574025;
case 0x574027:goto L574027;
case 0x57402b:c.instructions+=9;goto B57402b;
case 0x57402f:c.instructions+=8;goto B57402f;
case 0x574033:c.instructions+=7;goto B574033;
case 0x574035:c.instructions+=6;goto B574035;
case 0x574037:c.instructions+=5;goto B574037;
case 0x57403b:c.instructions+=4;goto B57403b;
case 0x57403f:c.instructions+=3;goto B57403f;
case 0x574043:c.instructions+=2;goto B574043;
case 0x574047:c.instructions+=1;goto B574047;
case 0x57404d:goto L57404d;
case 0x574051:c.instructions+=7;goto B574051;
case 0x574055:c.instructions+=6;goto B574055;
case 0x574056:c.instructions+=5;goto B574056;
case 0x574057:c.instructions+=4;goto B574057;
case 0x574059:c.instructions+=3;goto B574059;
case 0x57405d:c.instructions+=2;goto B57405d;
case 0x574061:c.instructions+=1;goto B574061;
case 0x574067:goto L574067;
case 0x574070:goto L574070;
case 0x574072:c.instructions+=4;goto B574072;
case 0x574075:c.instructions+=3;goto B574075;
case 0x57407d:c.instructions+=2;goto B57407d;
case 0x57407f:c.instructions+=1;goto B57407f;
case 0x574085:goto L574085;
case 0x574090:goto L574090;
case 0x574097:c.instructions+=10;goto B574097;
case 0x57409b:c.instructions+=9;goto B57409b;
case 0x57409d:c.instructions+=8;goto B57409d;
case 0x57409f:c.instructions+=7;goto B57409f;
case 0x5740a0:c.instructions+=6;goto B5740a0;
case 0x5740a4:c.instructions+=5;goto B5740a4;
case 0x5740a6:c.instructions+=4;goto B5740a6;
case 0x5740a9:c.instructions+=3;goto B5740a9;
case 0x5740b1:c.instructions+=2;goto B5740b1;
case 0x5740b3:c.instructions+=1;goto B5740b3;
case 0x5740b5:goto L5740b5;
case 0x5740bc:c.instructions+=9;goto B5740bc;
case 0x5740be:c.instructions+=8;goto B5740be;
case 0x5740c0:c.instructions+=7;goto B5740c0;
case 0x5740c1:c.instructions+=6;goto B5740c1;
case 0x5740c5:c.instructions+=5;goto B5740c5;
case 0x5740c7:c.instructions+=4;goto B5740c7;
case 0x5740ca:c.instructions+=3;goto B5740ca;
case 0x5740d2:c.instructions+=2;goto B5740d2;
case 0x5740d4:c.instructions+=1;goto B5740d4;
case 0x5740d6:goto L5740d6;
case 0x5740dd:c.instructions+=9;goto B5740dd;
case 0x5740df:c.instructions+=8;goto B5740df;
case 0x5740e1:c.instructions+=7;goto B5740e1;
case 0x5740e2:c.instructions+=6;goto B5740e2;
case 0x5740e6:c.instructions+=5;goto B5740e6;
case 0x5740e8:c.instructions+=4;goto B5740e8;
case 0x5740eb:c.instructions+=3;goto B5740eb;
case 0x5740f3:c.instructions+=2;goto B5740f3;
case 0x5740f5:c.instructions+=1;goto B5740f5;
case 0x5740f7:goto L5740f7;
case 0x5740fe:c.instructions+=9;goto B5740fe;
case 0x574100:c.instructions+=8;goto B574100;
case 0x574102:c.instructions+=7;goto B574102;
case 0x574103:c.instructions+=6;goto B574103;
case 0x574107:c.instructions+=5;goto B574107;
case 0x574109:c.instructions+=4;goto B574109;
case 0x57410c:c.instructions+=3;goto B57410c;
case 0x574114:c.instructions+=2;goto B574114;
case 0x574116:c.instructions+=1;goto B574116;
case 0x57411c:goto L57411c;
case 0x57411f:c.instructions+=1;goto B57411f;
case 0x574121:goto L574121;
case 0x574125:c.instructions+=18;goto B574125;
case 0x574128:c.instructions+=17;goto B574128;
case 0x57412f:c.instructions+=16;goto B57412f;
case 0x574131:c.instructions+=15;goto B574131;
case 0x574135:c.instructions+=14;goto B574135;
case 0x574136:c.instructions+=13;goto B574136;
case 0x57413a:c.instructions+=12;goto B57413a;
case 0x57413d:c.instructions+=11;goto B57413d;
case 0x574140:c.instructions+=10;goto B574140;
case 0x574142:c.instructions+=9;goto B574142;
case 0x574145:c.instructions+=8;goto B574145;
case 0x574147:c.instructions+=7;goto B574147;
case 0x57414c:c.instructions+=6;goto B57414c;
case 0x57414e:c.instructions+=5;goto B57414e;
case 0x574150:c.instructions+=4;goto B574150;
case 0x574153:c.instructions+=3;goto B574153;
case 0x574155:c.instructions+=2;goto B574155;
case 0x574157:c.instructions+=1;goto B574157;
case 0x57415c:goto L57415c;
case 0x57415f:c.instructions+=2;goto B57415f;
case 0x574163:c.instructions+=1;goto B574163;
case 0x574165:goto L574165;
case 0x574167:c.instructions+=3;goto B574167;
case 0x57416a:c.instructions+=2;goto B57416a;
case 0x57416f:c.instructions+=1;goto B57416f;
case 0x574170:goto L574170;
case 0x574177:c.instructions+=3;goto B574177;
case 0x574178:c.instructions+=2;goto B574178;
case 0x57417a:c.instructions+=1;goto B57417a;
case 0x57417c:goto L57417c;
case 0x57417e:goto L57417e;
case 0x574182:goto L574182;
case 0x574187:c.instructions+=11;goto B574187;
case 0x574189:c.instructions+=10;goto B574189;
case 0x57418b:c.instructions+=9;goto B57418b;
case 0x57418d:c.instructions+=8;goto B57418d;
case 0x57418f:c.instructions+=7;goto B57418f;
case 0x574191:c.instructions+=6;goto B574191;
case 0x574198:c.instructions+=5;goto B574198;
case 0x57419f:c.instructions+=4;goto B57419f;
case 0x5741a1:c.instructions+=3;goto B5741a1;
case 0x5741a5:c.instructions+=2;goto B5741a5;
case 0x5741a7:c.instructions+=1;goto B5741a7;
case 0x5741a9:goto L5741a9;
case 0x5741ab:c.instructions+=1;goto B5741ab;
case 0x5741ad:goto L5741ad;
case 0x5741b1:c.instructions+=4;goto B5741b1;
case 0x5741b3:c.instructions+=3;goto B5741b3;
case 0x5741b4:c.instructions+=2;goto B5741b4;
case 0x5741b8:c.instructions+=1;goto B5741b8;
case 0x5741bd:goto L5741bd;
case 0x5741bf:c.instructions+=1;goto B5741bf;
case 0x5741c1:goto L5741c1;
case 0x5741c4:c.instructions+=11;goto B5741c4;
case 0x5741c7:c.instructions+=10;goto B5741c7;
case 0x5741c9:c.instructions+=9;goto B5741c9;
case 0x5741cd:c.instructions+=8;goto B5741cd;
case 0x5741d0:c.instructions+=7;goto B5741d0;
case 0x5741d2:c.instructions+=6;goto B5741d2;
case 0x5741d4:c.instructions+=5;goto B5741d4;
case 0x5741d6:c.instructions+=4;goto B5741d6;
case 0x5741d8:c.instructions+=3;goto B5741d8;
case 0x5741db:c.instructions+=2;goto B5741db;
case 0x5741dd:c.instructions+=1;goto B5741dd;
case 0x5741e0:goto L5741e0;
case 0x5741e2:c.instructions+=1;goto B5741e2;
case 0x5741e4:goto L5741e4;
case 0x5741e8:c.instructions+=4;goto B5741e8;
case 0x5741ea:c.instructions+=3;goto B5741ea;
case 0x5741eb:c.instructions+=2;goto B5741eb;
case 0x5741ef:c.instructions+=1;goto B5741ef;
case 0x5741f4:goto L5741f4;
case 0x5741f8:c.instructions+=4;goto B5741f8;
case 0x5741fa:c.instructions+=3;goto B5741fa;
case 0x5741fc:c.instructions+=2;goto B5741fc;
case 0x574200:c.instructions+=1;goto B574200;
case 0x574202:goto L574202;
case 0x574204:c.instructions+=4;goto B574204;
case 0x574207:c.instructions+=3;goto B574207;
case 0x57420a:c.instructions+=2;goto B57420a;
case 0x57420d:c.instructions+=1;goto B57420d;
case 0x57420f:goto L57420f;
case 0x574212:c.instructions+=11;goto B574212;
case 0x574215:c.instructions+=10;goto B574215;
case 0x574217:c.instructions+=9;goto B574217;
case 0x57421b:c.instructions+=8;goto B57421b;
case 0x57421e:c.instructions+=7;goto B57421e;
case 0x574220:c.instructions+=6;goto B574220;
case 0x574222:c.instructions+=5;goto B574222;
case 0x574224:c.instructions+=4;goto B574224;
case 0x574226:c.instructions+=3;goto B574226;
case 0x574229:c.instructions+=2;goto B574229;
case 0x57422b:c.instructions+=1;goto B57422b;
case 0x57422e:goto L57422e;
case 0x574231:c.instructions+=1;goto B574231;
case 0x574236:goto L574236;
case 0x57423c:c.instructions+=2;goto B57423c;
case 0x574241:c.instructions+=1;goto B574241;
case 0x574243:goto L574243;
case 0x574245:c.instructions+=3;goto B574245;
case 0x574246:c.instructions+=2;goto B574246;
case 0x574248:c.instructions+=1;goto B574248;
case 0x57424a:goto L57424a;
case 0x57424f:c.instructions+=6;goto B57424f;
case 0x574251:c.instructions+=5;goto B574251;
case 0x574253:c.instructions+=4;goto B574253;
case 0x574259:c.instructions+=3;goto B574259;
case 0x57425b:c.instructions+=2;goto B57425b;
case 0x57425d:c.instructions+=1;goto B57425d;
case 0x57425f:goto L57425f;
case 0x574265:c.instructions+=7;goto B574265;
case 0x57426a:c.instructions+=6;goto B57426a;
case 0x57426c:c.instructions+=5;goto B57426c;
case 0x57426e:c.instructions+=4;goto B57426e;
case 0x574270:c.instructions+=3;goto B574270;
case 0x574276:c.instructions+=2;goto B574276;
case 0x574278:c.instructions+=1;goto B574278;
case 0x57427a:goto L57427a;
case 0x57427c:c.instructions+=1;goto B57427c;
case 0x57427e:goto L57427e;
case 0x574281:c.instructions+=12;goto B574281;
case 0x574284:c.instructions+=11;goto B574284;
case 0x574286:c.instructions+=10;goto B574286;
case 0x57428a:c.instructions+=9;goto B57428a;
case 0x57428d:c.instructions+=8;goto B57428d;
case 0x57428f:c.instructions+=7;goto B57428f;
case 0x574291:c.instructions+=6;goto B574291;
case 0x574293:c.instructions+=5;goto B574293;
case 0x574295:c.instructions+=4;goto B574295;
case 0x574298:c.instructions+=3;goto B574298;
case 0x57429a:c.instructions+=2;goto B57429a;
case 0x57429d:c.instructions+=1;goto B57429d;
case 0x5742a0:goto L5742a0;
case 0x5742a2:c.instructions+=5;goto B5742a2;
case 0x5742a3:c.instructions+=4;goto B5742a3;
case 0x5742a6:c.instructions+=3;goto B5742a6;
case 0x5742a8:c.instructions+=2;goto B5742a8;
case 0x5742a9:c.instructions+=1;goto B5742a9;
case 0x5742ab:goto L5742ab;
case 0x5742ae:c.instructions+=11;goto B5742ae;
case 0x5742b1:c.instructions+=10;goto B5742b1;
case 0x5742b3:c.instructions+=9;goto B5742b3;
case 0x5742b7:c.instructions+=8;goto B5742b7;
case 0x5742ba:c.instructions+=7;goto B5742ba;
case 0x5742bc:c.instructions+=6;goto B5742bc;
case 0x5742be:c.instructions+=5;goto B5742be;
case 0x5742c0:c.instructions+=4;goto B5742c0;
case 0x5742c2:c.instructions+=3;goto B5742c2;
case 0x5742c5:c.instructions+=2;goto B5742c5;
case 0x5742c7:c.instructions+=1;goto B5742c7;
case 0x5742ca:goto L5742ca;
case 0x5742cc:c.instructions+=1;goto B5742cc;
case 0x5742ce:goto L5742ce;
case 0x5742d1:c.instructions+=1;goto B5742d1;
case 0x5742d7:goto L5742d7;
case 0x5742da:c.instructions+=2;goto B5742da;
case 0x5742dc:c.instructions+=1;goto B5742dc;
case 0x5742de:goto L5742de;
case 0x5742e3:c.instructions+=8;goto B5742e3;
case 0x5742e5:c.instructions+=7;goto B5742e5;
case 0x5742e7:c.instructions+=6;goto B5742e7;
case 0x5742e9:c.instructions+=5;goto B5742e9;
case 0x5742ec:c.instructions+=4;goto B5742ec;
case 0x5742ee:c.instructions+=3;goto B5742ee;
case 0x5742f3:c.instructions+=2;goto B5742f3;
case 0x5742f5:c.instructions+=1;goto B5742f5;
case 0x5742f7:goto L5742f7;
case 0x5742f9:c.instructions+=1;goto B5742f9;
case 0x5742fb:goto L5742fb;
case 0x5742fe:c.instructions+=11;goto B5742fe;
case 0x574301:c.instructions+=10;goto B574301;
case 0x574303:c.instructions+=9;goto B574303;
case 0x574307:c.instructions+=8;goto B574307;
case 0x57430a:c.instructions+=7;goto B57430a;
case 0x57430c:c.instructions+=6;goto B57430c;
case 0x57430e:c.instructions+=5;goto B57430e;
case 0x574310:c.instructions+=4;goto B574310;
case 0x574312:c.instructions+=3;goto B574312;
case 0x574315:c.instructions+=2;goto B574315;
case 0x574317:c.instructions+=1;goto B574317;
case 0x57431a:goto L57431a;
case 0x57431c:c.instructions+=5;goto B57431c;
case 0x57431f:c.instructions+=4;goto B57431f;
case 0x574322:c.instructions+=3;goto B574322;
case 0x574325:c.instructions+=2;goto B574325;
case 0x574329:c.instructions+=1;goto B574329;
case 0x57432b:goto L57432b;
case 0x57432e:c.instructions+=11;goto B57432e;
case 0x574331:c.instructions+=10;goto B574331;
case 0x574333:c.instructions+=9;goto B574333;
case 0x574337:c.instructions+=8;goto B574337;
case 0x57433a:c.instructions+=7;goto B57433a;
case 0x57433c:c.instructions+=6;goto B57433c;
case 0x57433e:c.instructions+=5;goto B57433e;
case 0x574340:c.instructions+=4;goto B574340;
case 0x574342:c.instructions+=3;goto B574342;
case 0x574345:c.instructions+=2;goto B574345;
case 0x574347:c.instructions+=1;goto B574347;
case 0x57434a:goto L57434a;
case 0x57434e:c.instructions+=7;goto B57434e;
case 0x574351:c.instructions+=6;goto B574351;
case 0x574353:c.instructions+=5;goto B574353;
case 0x574358:c.instructions+=4;goto B574358;
case 0x57435c:c.instructions+=3;goto B57435c;
case 0x57435e:c.instructions+=2;goto B57435e;
case 0x574362:c.instructions+=1;goto B574362;
case 0x574364:goto L574364;
case 0x574366:c.instructions+=1;goto B574366;
case 0x574368:goto L574368;
case 0x57436d:c.instructions+=6;goto B57436d;
case 0x57436f:c.instructions+=5;goto B57436f;
case 0x574371:c.instructions+=4;goto B574371;
case 0x574373:c.instructions+=3;goto B574373;
case 0x574375:c.instructions+=2;goto B574375;
case 0x574377:c.instructions+=1;goto B574377;
case 0x574379:goto L574379;
case 0x57437b:c.instructions+=1;goto B57437b;
case 0x57437d:goto L57437d;
case 0x574380:c.instructions+=11;goto B574380;
case 0x574383:c.instructions+=10;goto B574383;
case 0x574385:c.instructions+=9;goto B574385;
case 0x574389:c.instructions+=8;goto B574389;
case 0x57438c:c.instructions+=7;goto B57438c;
case 0x57438e:c.instructions+=6;goto B57438e;
case 0x574390:c.instructions+=5;goto B574390;
case 0x574392:c.instructions+=4;goto B574392;
case 0x574394:c.instructions+=3;goto B574394;
case 0x574397:c.instructions+=2;goto B574397;
case 0x574399:c.instructions+=1;goto B574399;
case 0x57439c:goto L57439c;
case 0x5743a1:c.instructions+=3;goto B5743a1;
case 0x5743a5:c.instructions+=2;goto B5743a5;
case 0x5743a7:c.instructions+=1;goto B5743a7;
case 0x5743ab:goto L5743ab;
case 0x5743ad:c.instructions+=2;goto B5743ad;
case 0x5743b1:c.instructions+=1;goto B5743b1;
case 0x5743b5:goto L5743b5;
case 0x5743b7:c.instructions+=1;goto B5743b7;
case 0x5743b9:goto L5743b9;
case 0x5743bd:c.instructions+=2;goto B5743bd;
case 0x5743bf:c.instructions+=1;goto B5743bf;
case 0x5743c2:goto L5743c2;
case 0x5743c4:c.instructions+=3;goto B5743c4;
case 0x5743c5:c.instructions+=2;goto B5743c5;
case 0x5743c7:c.instructions+=1;goto B5743c7;
case 0x5743c9:goto L5743c9;
case 0x5743cd:c.instructions+=1;goto B5743cd;
case 0x5743d2:goto L5743d2;
case 0x5743d4:c.instructions+=4;goto B5743d4;
case 0x5743d7:c.instructions+=3;goto B5743d7;
case 0x5743d9:c.instructions+=2;goto B5743d9;
case 0x5743da:c.instructions+=1;goto B5743da;
case 0x5743dc:goto L5743dc;
case 0x5743df:c.instructions+=11;goto B5743df;
case 0x5743e2:c.instructions+=10;goto B5743e2;
case 0x5743e4:c.instructions+=9;goto B5743e4;
case 0x5743e8:c.instructions+=8;goto B5743e8;
case 0x5743eb:c.instructions+=7;goto B5743eb;
case 0x5743ed:c.instructions+=6;goto B5743ed;
case 0x5743ef:c.instructions+=5;goto B5743ef;
case 0x5743f1:c.instructions+=4;goto B5743f1;
case 0x5743f3:c.instructions+=3;goto B5743f3;
case 0x5743f6:c.instructions+=2;goto B5743f6;
case 0x5743f8:c.instructions+=1;goto B5743f8;
case 0x5743fb:goto L5743fb;
case 0x5743fd:c.instructions+=1;goto B5743fd;
case 0x5743ff:goto L5743ff;
case 0x574401:c.instructions+=4;goto B574401;
case 0x574404:c.instructions+=3;goto B574404;
case 0x574407:c.instructions+=2;goto B574407;
case 0x57440a:c.instructions+=1;goto B57440a;
case 0x57440c:goto L57440c;
case 0x57440f:c.instructions+=11;goto B57440f;
case 0x574412:c.instructions+=10;goto B574412;
case 0x574414:c.instructions+=9;goto B574414;
case 0x574418:c.instructions+=8;goto B574418;
case 0x57441b:c.instructions+=7;goto B57441b;
case 0x57441d:c.instructions+=6;goto B57441d;
case 0x57441f:c.instructions+=5;goto B57441f;
case 0x574421:c.instructions+=4;goto B574421;
case 0x574423:c.instructions+=3;goto B574423;
case 0x574426:c.instructions+=2;goto B574426;
case 0x574428:c.instructions+=1;goto B574428;
case 0x57442b:goto L57442b;
case 0x57442f:c.instructions+=4;goto B57442f;
case 0x574431:c.instructions+=3;goto B574431;
case 0x574432:c.instructions+=2;goto B574432;
case 0x574436:c.instructions+=1;goto B574436;
case 0x57443b:goto L57443b;
case 0x57443f:c.instructions+=3;goto B57443f;
case 0x574444:c.instructions+=2;goto B574444;
case 0x574445:c.instructions+=1;goto B574445;
case 0x574447:goto L574447;
case 0x57444c:c.instructions+=1;goto B57444c;
case 0x57444e:goto L57444e;
case 0x574453:c.instructions+=1;goto B574453;
case 0x574455:goto L574455;
case 0x57445a:c.instructions+=1;goto B57445a;
case 0x57445c:goto L57445c;
case 0x574463:c.instructions+=6;goto B574463;
case 0x574467:c.instructions+=5;goto B574467;
case 0x574469:c.instructions+=4;goto B574469;
case 0x57446b:c.instructions+=3;goto B57446b;
case 0x57446d:c.instructions+=2;goto B57446d;
case 0x57446f:c.instructions+=1;goto B57446f;
case 0x574471:goto L574471;
case 0x574474:c.instructions+=6;goto B574474;
case 0x574476:c.instructions+=5;goto B574476;
case 0x574478:c.instructions+=4;goto B574478;
case 0x57447a:c.instructions+=3;goto B57447a;
case 0x57447b:c.instructions+=2;goto B57447b;
case 0x57447d:c.instructions+=1;goto B57447d;
case 0x57447f:goto L57447f;
case 0x574483:c.instructions+=5;goto B574483;
case 0x574484:c.instructions+=4;goto B574484;
case 0x574485:c.instructions+=3;goto B574485;
case 0x574486:c.instructions+=2;goto B574486;
case 0x57448c:c.instructions+=1;goto B57448c;
case 0x57448d:goto L57448d;
case 0x574494:c.instructions+=5;goto B574494;
case 0x574498:c.instructions+=4;goto B574498;
case 0x57449a:c.instructions+=3;goto B57449a;
case 0x57449c:c.instructions+=2;goto B57449c;
case 0x57449e:c.instructions+=1;goto B57449e;
case 0x5744a0:goto L5744a0;
case 0x5744a3:c.instructions+=5;goto B5744a3;
case 0x5744a5:c.instructions+=4;goto B5744a5;
case 0x5744a7:c.instructions+=3;goto B5744a7;
case 0x5744a8:c.instructions+=2;goto B5744a8;
case 0x5744aa:c.instructions+=1;goto B5744aa;
case 0x5744ac:goto L5744ac;
case 0x5744b0:c.instructions+=5;goto B5744b0;
case 0x5744b1:c.instructions+=4;goto B5744b1;
case 0x5744b2:c.instructions+=3;goto B5744b2;
case 0x5744b3:c.instructions+=2;goto B5744b3;
case 0x5744b9:c.instructions+=1;goto B5744b9;
case 0x5744c0:goto L5744c0;
case 0x5744c1:c.instructions+=3;goto B5744c1;
case 0x5744c5:c.instructions+=2;goto B5744c5;
case 0x5744cb:c.instructions+=1;goto B5744cb;
case 0x5744cd:goto L5744cd;
case 0x5744d1:c.instructions+=1;goto B5744d1;
case 0x5744d3:goto L5744d3;
case 0x5744d7:c.instructions+=3;goto B5744d7;
case 0x5744d8:c.instructions+=2;goto B5744d8;
case 0x5744db:c.instructions+=1;goto B5744db;
case 0x5744e0:goto L5744e0;
case 0x5744e3:c.instructions+=3;goto B5744e3;
case 0x5744e6:c.instructions+=2;goto B5744e6;
case 0x5744e7:c.instructions+=1;goto B5744e7;
case 0x5744e8:goto L5744e8;
case 0x5744ea:c.instructions+=2;goto B5744ea;
case 0x5744eb:c.instructions+=1;goto B5744eb;
case 0x5744f0:goto L5744f0;
case 0x5744f4:c.instructions+=2;goto B5744f4;
case 0x5744fa:c.instructions+=1;goto B5744fa;
case 0x5744fc:goto L5744fc;
case 0x574500:c.instructions+=1;goto B574500;
case 0x574502:goto L574502;
case 0x574505:c.instructions+=6;goto B574505;
case 0x574506:c.instructions+=5;goto B574506;
case 0x574508:c.instructions+=4;goto B574508;
case 0x574509:c.instructions+=3;goto B574509;
case 0x57450d:c.instructions+=2;goto B57450d;
case 0x574510:c.instructions+=1;goto B574510;
case 0x574513:goto L574513;
case 0x574515:goto L574515;
case 0x574517:c.instructions+=1;goto B574517;
case 0x57451a:goto L57451a;
case 0x57451c:goto L57451c;
case 0x57451f:c.instructions+=3;goto B57451f;
case 0x574520:c.instructions+=2;goto B574520;
case 0x574521:c.instructions+=1;goto B574521;
case 0x574522:goto L574522;
case 0x574524:c.instructions+=1;goto B574524;
case 0x574530:goto L574530;
case 0x574534:c.instructions+=6;goto B574534;
case 0x574536:c.instructions+=5;goto B574536;
case 0x574537:c.instructions+=4;goto B574537;
case 0x574538:c.instructions+=3;goto B574538;
case 0x574539:c.instructions+=2;goto B574539;
case 0x57453a:c.instructions+=1;goto B57453a;
case 0x574540:goto L574540;
case 0x574544:c.instructions+=2;goto B574544;
case 0x574546:c.instructions+=1;goto B574546;
case 0x57454c:goto L57454c;
case 0x574552:c.instructions+=2;goto B574552;
case 0x574555:c.instructions+=1;goto B574555;
case 0x57455b:goto L57455b;
case 0x574560:c.instructions+=6;goto B574560;
case 0x574564:c.instructions+=5;goto B574564;
case 0x574567:c.instructions+=4;goto B574567;
case 0x57456a:c.instructions+=3;goto B57456a;
case 0x57456c:c.instructions+=2;goto B57456c;
case 0x574570:c.instructions+=1;goto B574570;
case 0x574572:goto L574572;
case 0x574575:c.instructions+=3;goto B574575;
case 0x574577:c.instructions+=2;goto B574577;
case 0x57457a:c.instructions+=1;goto B57457a;
case 0x57457c:goto L57457c;
case 0x57457e:goto L57457e;
case 0x574580:c.instructions+=1;goto B574580;
case 0x574583:goto L574583;
case 0x574585:goto L574585;
case 0x574586:c.instructions+=5;goto B574586;
case 0x574587:c.instructions+=4;goto B574587;
case 0x57458a:c.instructions+=3;goto B57458a;
case 0x57458b:c.instructions+=2;goto B57458b;
case 0x57458c:c.instructions+=1;goto B57458c;
case 0x57458d:goto L57458d;
case 0x57458f:c.instructions+=1;goto B57458f;
case 0x574595:goto L574595;
case 0x574598:c.instructions+=1;goto B574598;
case 0x57459a:goto L57459a;
case 0x57459d:c.instructions+=6;goto B57459d;
case 0x5745a3:c.instructions+=5;goto B5745a3;
case 0x5745a5:c.instructions+=4;goto B5745a5;
case 0x5745a8:c.instructions+=3;goto B5745a8;
case 0x5745a9:c.instructions+=2;goto B5745a9;
case 0x5745ab:c.instructions+=1;goto B5745ab;
case 0x5745ac:goto L5745ac;
case 0x5745af:c.instructions+=5;goto B5745af;
case 0x5745b1:c.instructions+=4;goto B5745b1;
case 0x5745b3:c.instructions+=3;goto B5745b3;
case 0x5745b6:c.instructions+=2;goto B5745b6;
case 0x5745b9:c.instructions+=1;goto B5745b9;
case 0x5745c0:goto L5745c0;
case 0x5745c3:c.instructions+=1;goto B5745c3;
case 0x5745c5:goto L5745c5;
case 0x5745c8:c.instructions+=23;goto B5745c8;
case 0x5745cc:c.instructions+=22;goto B5745cc;
case 0x5745cd:c.instructions+=21;goto B5745cd;
case 0x5745cf:c.instructions+=20;goto B5745cf;
case 0x5745d5:c.instructions+=19;goto B5745d5;
case 0x5745d8:c.instructions+=18;goto B5745d8;
case 0x5745da:c.instructions+=17;goto B5745da;
case 0x5745dc:c.instructions+=16;goto B5745dc;
case 0x5745de:c.instructions+=15;goto B5745de;
case 0x5745e0:c.instructions+=14;goto B5745e0;
case 0x5745e1:c.instructions+=13;goto B5745e1;
case 0x5745e3:c.instructions+=12;goto B5745e3;
case 0x5745e6:c.instructions+=11;goto B5745e6;
case 0x5745e7:c.instructions+=10;goto B5745e7;
case 0x5745e8:c.instructions+=9;goto B5745e8;
case 0x5745ea:c.instructions+=8;goto B5745ea;
case 0x5745ed:c.instructions+=7;goto B5745ed;
case 0x5745ee:c.instructions+=6;goto B5745ee;
case 0x5745ef:c.instructions+=5;goto B5745ef;
case 0x5745f1:c.instructions+=4;goto B5745f1;
case 0x5745f2:c.instructions+=3;goto B5745f2;
case 0x5745f3:c.instructions+=2;goto B5745f3;
case 0x5745f6:c.instructions+=1;goto B5745f6;
case 0x5745f8:goto L5745f8;
case 0x5745fa:c.instructions+=5;goto B5745fa;
case 0x5745fc:c.instructions+=4;goto B5745fc;
case 0x5745fd:c.instructions+=3;goto B5745fd;
case 0x5745fe:c.instructions+=2;goto B5745fe;
case 0x5745ff:c.instructions+=1;goto B5745ff;
case 0x574601:goto L574601;
case 0x574603:goto L574603;
case 0x574605:c.instructions+=3;goto B574605;
case 0x574607:c.instructions+=2;goto B574607;
case 0x574608:c.instructions+=1;goto B574608;
case 0x574609:goto L574609;
case 0x57460b:c.instructions+=2;goto B57460b;
case 0x57460c:c.instructions+=1;goto B57460c;
case 0x57460e:goto L57460e;
case 0x574612:c.instructions+=2;goto B574612;
case 0x574614:c.instructions+=1;goto B574614;
case 0x57461a:goto L57461a;
case 0x57461e:goto L57461e;
case 0x57461f:c.instructions+=5;goto B57461f;
case 0x574620:c.instructions+=4;goto B574620;
case 0x574621:c.instructions+=3;goto B574621;
case 0x574623:c.instructions+=2;goto B574623;
case 0x574624:c.instructions+=1;goto B574624;
case 0x574625:goto L574625;
case 0x574626:c.instructions+=5;goto B574626;
case 0x574627:c.instructions+=4;goto B574627;
case 0x574628:c.instructions+=3;goto B574628;
case 0x57462a:c.instructions+=2;goto B57462a;
case 0x57462b:c.instructions+=1;goto B57462b;
case 0x574630:goto L574630;
case 0x574634:c.instructions+=3;goto B574634;
case 0x574636:c.instructions+=2;goto B574636;
case 0x57463b:c.instructions+=1;goto B57463b;
case 0x57463d:goto L57463d;
case 0x57463f:goto L57463f;
case 0x574644:c.instructions+=1;goto B574644;
case 0x574646:goto L574646;
case 0x57464b:c.instructions+=1;goto B57464b;
case 0x57464d:goto L57464d;
case 0x574650:c.instructions+=4;goto B574650;
case 0x574652:c.instructions+=3;goto B574652;
case 0x574655:c.instructions+=2;goto B574655;
case 0x574658:c.instructions+=1;goto B574658;
case 0x574659:goto L574659;
case 0x57465e:c.instructions+=1;goto B57465e;
case 0x574660:goto L574660;
case 0x574662:c.instructions+=1;goto B574662;
case 0x574663:goto L574663;
case 0x574666:c.instructions+=4;goto B574666;
case 0x574668:c.instructions+=3;goto B574668;
case 0x57466b:c.instructions+=2;goto B57466b;
case 0x57466e:c.instructions+=1;goto B57466e;
case 0x574670:goto L574670;
case 0x574674:c.instructions+=2;goto B574674;
case 0x574676:c.instructions+=1;goto B574676;
case 0x574678:goto L574678;
case 0x57467c:c.instructions+=2;goto B57467c;
case 0x57467e:c.instructions+=1;goto B57467e;
case 0x574680:goto L574680;
case 0x574682:c.instructions+=2;goto B574682;
case 0x574687:c.instructions+=1;goto B574687;
case 0x574689:goto L574689;
case 0x57468b:goto L57468b;
case 0x574690:c.instructions+=1;goto B574690;
case 0x574692:goto L574692;
case 0x574697:c.instructions+=1;goto B574697;
case 0x574699:goto L574699;
case 0x57469d:c.instructions+=2;goto B57469d;
case 0x5746a1:c.instructions+=1;goto B5746a1;
case 0x5746a6:goto L5746a6;
case 0x5746aa:c.instructions+=2;goto B5746aa;
case 0x5746ae:c.instructions+=1;goto B5746ae;
case 0x5746b3:goto L5746b3;
case 0x5746b7:c.instructions+=2;goto B5746b7;
case 0x5746bb:c.instructions+=1;goto B5746bb;
case 0x5746c0:goto L5746c0;
case 0x5746c5:c.instructions+=1;goto B5746c5;
case 0x5746c7:goto L5746c7;
case 0x5746cb:c.instructions+=2;goto B5746cb;
case 0x5746cf:c.instructions+=1;goto B5746cf;
case 0x5746d4:goto L5746d4;
case 0x5746d6:c.instructions+=1;goto B5746d6;
case 0x5746e0:goto L5746e0;
case 0x5746e4:c.instructions+=7;goto B5746e4;
case 0x5746e6:c.instructions+=6;goto B5746e6;
case 0x5746e8:c.instructions+=5;goto B5746e8;
case 0x5746eb:c.instructions+=4;goto B5746eb;
case 0x5746ed:c.instructions+=3;goto B5746ed;
case 0x5746ef:c.instructions+=2;goto B5746ef;
case 0x5746f2:c.instructions+=1;goto B5746f2;
case 0x5746f4:goto L5746f4;
case 0x5746f8:c.instructions+=7;goto B5746f8;
case 0x5746fb:c.instructions+=6;goto B5746fb;
case 0x5746fd:c.instructions+=5;goto B5746fd;
case 0x574700:c.instructions+=4;goto B574700;
case 0x574702:c.instructions+=3;goto B574702;
case 0x574704:c.instructions+=2;goto B574704;
case 0x574707:c.instructions+=1;goto B574707;
case 0x574709:goto L574709;
case 0x57470d:c.instructions+=7;goto B57470d;
case 0x574710:c.instructions+=6;goto B574710;
case 0x574712:c.instructions+=5;goto B574712;
case 0x574715:c.instructions+=4;goto B574715;
case 0x574717:c.instructions+=3;goto B574717;
case 0x574719:c.instructions+=2;goto B574719;
case 0x57471c:c.instructions+=1;goto B57471c;
case 0x57471e:goto L57471e;
case 0x574723:c.instructions+=1;goto B574723;
case 0x574726:goto L574726;
case 0x574728:c.instructions+=1;goto B574728;
case 0x574730:goto L574730;
case 0x574734:c.instructions+=10;goto B574734;
case 0x574738:c.instructions+=9;goto B574738;
case 0x574739:c.instructions+=8;goto B574739;
case 0x57473a:c.instructions+=7;goto B57473a;
case 0x57473b:c.instructions+=6;goto B57473b;
case 0x57473d:c.instructions+=5;goto B57473d;
case 0x57473f:c.instructions+=4;goto B57473f;
case 0x574740:c.instructions+=3;goto B574740;
case 0x574742:c.instructions+=2;goto B574742;
case 0x574746:c.instructions+=1;goto B574746;
case 0x574748:goto L574748;
case 0x57474c:c.instructions+=2;goto B57474c;
case 0x57474f:c.instructions+=1;goto B57474f;
case 0x574750:goto L574750;
case 0x574753:c.instructions+=12;goto B574753;
case 0x574757:c.instructions+=11;goto B574757;
case 0x57475a:c.instructions+=10;goto B57475a;
case 0x57475c:c.instructions+=9;goto B57475c;
case 0x57475f:c.instructions+=8;goto B57475f;
case 0x574761:c.instructions+=7;goto B574761;
case 0x574763:c.instructions+=6;goto B574763;
case 0x574765:c.instructions+=5;goto B574765;
case 0x574768:c.instructions+=4;goto B574768;
case 0x57476a:c.instructions+=3;goto B57476a;
case 0x57476c:c.instructions+=2;goto B57476c;
case 0x57476f:c.instructions+=1;goto B57476f;
case 0x574771:goto L574771;
case 0x574775:c.instructions+=7;goto B574775;
case 0x574778:c.instructions+=6;goto B574778;
case 0x57477a:c.instructions+=5;goto B57477a;
case 0x57477d:c.instructions+=4;goto B57477d;
case 0x57477f:c.instructions+=3;goto B57477f;
case 0x574781:c.instructions+=2;goto B574781;
case 0x574784:c.instructions+=1;goto B574784;
case 0x574786:goto L574786;
case 0x57478a:c.instructions+=7;goto B57478a;
case 0x57478d:c.instructions+=6;goto B57478d;
case 0x57478f:c.instructions+=5;goto B57478f;
case 0x574792:c.instructions+=4;goto B574792;
case 0x574794:c.instructions+=3;goto B574794;
case 0x574796:c.instructions+=2;goto B574796;
case 0x574799:c.instructions+=1;goto B574799;
case 0x57479b:goto L57479b;
case 0x5747a0:c.instructions+=1;goto B5747a0;
case 0x5747a2:goto L5747a2;
case 0x5747a6:c.instructions+=7;goto B5747a6;
case 0x5747aa:c.instructions+=6;goto B5747aa;
case 0x5747ab:c.instructions+=5;goto B5747ab;
case 0x5747ac:c.instructions+=4;goto B5747ac;
case 0x5747ad:c.instructions+=3;goto B5747ad;
case 0x5747ae:c.instructions+=2;goto B5747ae;
case 0x5747b0:c.instructions+=1;goto B5747b0;
case 0x5747b5:goto L5747b5;
case 0x5747b7:c.instructions+=1;goto B5747b7;
case 0x5747b9:goto L5747b9;
case 0x5747bd:goto L5747bd;
case 0x5747be:c.instructions+=3;goto B5747be;
case 0x5747c1:c.instructions+=2;goto B5747c1;
case 0x5747c3:c.instructions+=1;goto B5747c3;
case 0x5747c5:goto L5747c5;
case 0x5747c7:goto L5747c7;
case 0x5747c8:c.instructions+=4;goto B5747c8;
case 0x5747c9:c.instructions+=3;goto B5747c9;
case 0x5747ca:c.instructions+=2;goto B5747ca;
case 0x5747cb:c.instructions+=1;goto B5747cb;
case 0x5747ce:goto L5747ce;
case 0x5747cf:c.instructions+=5;goto B5747cf;
case 0x5747d0:c.instructions+=4;goto B5747d0;
case 0x5747d1:c.instructions+=3;goto B5747d1;
case 0x5747d3:c.instructions+=2;goto B5747d3;
case 0x5747d4:c.instructions+=1;goto B5747d4;
case 0x5747e0:goto L5747e0;
case 0x5747e1:c.instructions+=4;goto B5747e1;
case 0x5747e3:c.instructions+=3;goto B5747e3;
case 0x5747e5:c.instructions+=2;goto B5747e5;
case 0x5747e7:c.instructions+=1;goto B5747e7;
case 0x5747e9:goto L5747e9;
case 0x5747eb:c.instructions+=2;goto B5747eb;
case 0x5747ec:c.instructions+=1;goto B5747ec;
case 0x5747ef:goto L5747ef;
case 0x5747f3:c.instructions+=8;goto B5747f3;
case 0x5747f4:c.instructions+=7;goto B5747f4;
case 0x5747f8:c.instructions+=6;goto B5747f8;
case 0x5747f9:c.instructions+=5;goto B5747f9;
case 0x5747fd:c.instructions+=4;goto B5747fd;
case 0x5747fe:c.instructions+=3;goto B5747fe;
case 0x5747ff:c.instructions+=2;goto B5747ff;
case 0x574800:c.instructions+=1;goto B574800;
case 0x574805:goto L574805;
case 0x574807:c.instructions+=1;goto B574807;
case 0x574809:goto L574809;
case 0x57480a:c.instructions+=3;goto B57480a;
case 0x57480b:c.instructions+=2;goto B57480b;
case 0x57480c:c.instructions+=1;goto B57480c;
case 0x57480f:goto L57480f;
case 0x574814:c.instructions+=1;goto B574814;
case 0x574816:goto L574816;
case 0x574817:c.instructions+=4;goto B574817;
case 0x574818:c.instructions+=3;goto B574818;
case 0x57481a:c.instructions+=2;goto B57481a;
case 0x57481b:c.instructions+=1;goto B57481b;
case 0x57481e:goto L57481e;
case 0x57481f:c.instructions+=5;goto B57481f;
case 0x574820:c.instructions+=4;goto B574820;
case 0x574821:c.instructions+=3;goto B574821;
case 0x574822:c.instructions+=2;goto B574822;
case 0x574824:c.instructions+=1;goto B574824;
case 0x574829:goto L574829;
case 0x57482a:c.instructions+=3;goto B57482a;
case 0x57482b:c.instructions+=2;goto B57482b;
case 0x57482c:c.instructions+=1;goto B57482c;
case 0x574830:goto L574830;
case 0x574833:c.instructions+=18;goto B574833;
case 0x574836:c.instructions+=17;goto B574836;
case 0x574838:c.instructions+=16;goto B574838;
case 0x57483a:c.instructions+=15;goto B57483a;
case 0x57483d:c.instructions+=14;goto B57483d;
case 0x574840:c.instructions+=13;goto B574840;
case 0x574843:c.instructions+=12;goto B574843;
case 0x574846:c.instructions+=11;goto B574846;
case 0x574848:c.instructions+=10;goto B574848;
case 0x57484a:c.instructions+=9;goto B57484a;
case 0x57484c:c.instructions+=8;goto B57484c;
case 0x57484f:c.instructions+=7;goto B57484f;
case 0x574855:c.instructions+=6;goto B574855;
case 0x574858:c.instructions+=5;goto B574858;
case 0x57485b:c.instructions+=4;goto B57485b;
case 0x57485d:c.instructions+=3;goto B57485d;
case 0x57485f:c.instructions+=2;goto B57485f;
case 0x574862:c.instructions+=1;goto B574862;
case 0x574870:goto L574870;
case 0x574874:c.instructions+=7;goto B574874;
case 0x574877:c.instructions+=6;goto B574877;
case 0x57487a:c.instructions+=5;goto B57487a;
case 0x57487e:c.instructions+=4;goto B57487e;
case 0x574881:c.instructions+=3;goto B574881;
case 0x574885:c.instructions+=2;goto B574885;
case 0x574888:c.instructions+=1;goto B574888;
case 0x574890:goto L574890;
case 0x574894:c.instructions+=6;goto B574894;
case 0x574897:c.instructions+=5;goto B574897;
case 0x57489d:c.instructions+=4;goto B57489d;
case 0x5748a0:c.instructions+=3;goto B5748a0;
case 0x5748a2:c.instructions+=2;goto B5748a2;
case 0x5748a4:c.instructions+=1;goto B5748a4;
case 0x5748b0:goto L5748b0;
case 0x5748b3:c.instructions+=1;goto B5748b3;
case 0x5748c0:goto L5748c0;
case 0x5748c6:c.instructions+=19;goto B5748c6;
case 0x5748c9:c.instructions+=18;goto B5748c9;
case 0x5748cb:c.instructions+=17;goto B5748cb;
case 0x5748ce:c.instructions+=16;goto B5748ce;
case 0x5748d0:c.instructions+=15;goto B5748d0;
case 0x5748d3:c.instructions+=14;goto B5748d3;
case 0x5748d9:c.instructions+=13;goto B5748d9;
case 0x5748dc:c.instructions+=12;goto B5748dc;
case 0x5748de:c.instructions+=11;goto B5748de;
case 0x5748e0:c.instructions+=10;goto B5748e0;
case 0x5748e2:c.instructions+=9;goto B5748e2;
case 0x5748e5:c.instructions+=8;goto B5748e5;
case 0x5748e7:c.instructions+=7;goto B5748e7;
case 0x5748e9:c.instructions+=6;goto B5748e9;
case 0x5748eb:c.instructions+=5;goto B5748eb;
case 0x5748ed:c.instructions+=4;goto B5748ed;
case 0x5748f1:c.instructions+=3;goto B5748f1;
case 0x5748f3:c.instructions+=2;goto B5748f3;
case 0x5748f6:c.instructions+=1;goto B5748f6;
case 0x5748f8:goto L5748f8;
case 0x5748fa:c.instructions+=5;goto B5748fa;
case 0x5748fe:c.instructions+=4;goto B5748fe;
case 0x574901:c.instructions+=3;goto B574901;
case 0x574904:c.instructions+=2;goto B574904;
case 0x574906:c.instructions+=1;goto B574906;
case 0x574909:goto L574909;
case 0x57490b:c.instructions+=2;goto B57490b;
case 0x57490d:c.instructions+=1;goto B57490d;
case 0x574910:goto L574910;
case 0x574913:c.instructions+=33;goto B574913;
case 0x574919:c.instructions+=32;goto B574919;
case 0x57491b:c.instructions+=31;goto B57491b;
case 0x57491e:c.instructions+=30;goto B57491e;
case 0x574920:c.instructions+=29;goto B574920;
case 0x574923:c.instructions+=28;goto B574923;
case 0x574925:c.instructions+=27;goto B574925;
case 0x574929:c.instructions+=26;goto B574929;
case 0x57492f:c.instructions+=25;goto B57492f;
case 0x574931:c.instructions+=24;goto B574931;
case 0x574934:c.instructions+=23;goto B574934;
case 0x57493a:c.instructions+=22;goto B57493a;
case 0x57493e:c.instructions+=21;goto B57493e;
case 0x574940:c.instructions+=20;goto B574940;
case 0x574942:c.instructions+=19;goto B574942;
case 0x574946:c.instructions+=18;goto B574946;
case 0x574948:c.instructions+=17;goto B574948;
case 0x57494c:c.instructions+=16;goto B57494c;
case 0x57494e:c.instructions+=15;goto B57494e;
case 0x574952:c.instructions+=14;goto B574952;
case 0x574954:c.instructions+=13;goto B574954;
case 0x574957:c.instructions+=12;goto B574957;
case 0x57495a:c.instructions+=11;goto B57495a;
case 0x574960:c.instructions+=10;goto B574960;
case 0x574964:c.instructions+=9;goto B574964;
case 0x574966:c.instructions+=8;goto B574966;
case 0x574968:c.instructions+=7;goto B574968;
case 0x57496a:c.instructions+=6;goto B57496a;
case 0x57496c:c.instructions+=5;goto B57496c;
case 0x574970:c.instructions+=4;goto B574970;
case 0x574974:c.instructions+=3;goto B574974;
case 0x574976:c.instructions+=2;goto B574976;
case 0x574979:c.instructions+=1;goto B574979;
case 0x57497b:goto L57497b;
case 0x57497f:c.instructions+=4;goto B57497f;
case 0x574981:c.instructions+=3;goto B574981;
case 0x574985:c.instructions+=2;goto B574985;
case 0x574989:c.instructions+=1;goto B574989;
case 0x57498d:goto L57498d;
case 0x574991:c.instructions+=3;goto B574991;
case 0x574993:c.instructions+=2;goto B574993;
case 0x574996:c.instructions+=1;goto B574996;
case 0x574998:goto L574998;
case 0x57499a:c.instructions+=2;goto B57499a;
case 0x57499e:c.instructions+=1;goto B57499e;
case 0x5749a0:goto L5749a0;
case 0x5749a2:c.instructions+=2;goto B5749a2;
case 0x5749a4:c.instructions+=1;goto B5749a4;
case 0x5749a6:goto L5749a6;
case 0x5749a9:c.instructions+=13;goto B5749a9;
case 0x5749ab:c.instructions+=12;goto B5749ab;
case 0x5749ad:c.instructions+=11;goto B5749ad;
case 0x5749b1:c.instructions+=10;goto B5749b1;
case 0x5749b3:c.instructions+=9;goto B5749b3;
case 0x5749b9:c.instructions+=8;goto B5749b9;
case 0x5749bb:c.instructions+=7;goto B5749bb;
case 0x5749be:c.instructions+=6;goto B5749be;
case 0x5749c0:c.instructions+=5;goto B5749c0;
case 0x5749c2:c.instructions+=4;goto B5749c2;
case 0x5749c4:c.instructions+=3;goto B5749c4;
case 0x5749ca:c.instructions+=2;goto B5749ca;
case 0x5749cd:c.instructions+=1;goto B5749cd;
case 0x5749cf:goto L5749cf;
case 0x5749d1:c.instructions+=2;goto B5749d1;
case 0x5749d4:c.instructions+=1;goto B5749d4;
case 0x5749e0:goto L5749e0;
case 0x5749e4:c.instructions+=2;goto B5749e4;
case 0x5749e7:c.instructions+=1;goto B5749e7;
case 0x5749ed:goto L5749ed;
case 0x5749ee:c.instructions+=1;goto B5749ee;
case 0x5749f4:goto L5749f4;
case 0x5749f5:c.instructions+=1;goto B5749f5;
case 0x5749fb:goto L5749fb;
case 0x574a00:c.instructions+=2;goto B574a00;
case 0x574a07:c.instructions+=1;goto B574a07;
case 0x574a09:goto L574a09;
case 0x574a0f:goto L574a0f;
case 0x574a13:c.instructions+=4;goto B574a13;
case 0x574a19:c.instructions+=3;goto B574a19;
case 0x574a1b:c.instructions+=2;goto B574a1b;
case 0x574a1e:c.instructions+=1;goto B574a1e;
case 0x574a20:goto L574a20;
case 0x574a24:c.instructions+=2;goto B574a24;
case 0x574a25:c.instructions+=1;goto B574a25;
case 0x574a2a:goto L574a2a;
case 0x574a2d:c.instructions+=22;goto B574a2d;
case 0x574a2f:c.instructions+=21;goto B574a2f;
case 0x574a31:c.instructions+=20;goto B574a31;
case 0x574a34:c.instructions+=19;goto B574a34;
case 0x574a37:c.instructions+=18;goto B574a37;
case 0x574a3a:c.instructions+=17;goto B574a3a;
case 0x574a3d:c.instructions+=16;goto B574a3d;
case 0x574a40:c.instructions+=15;goto B574a40;
case 0x574a42:c.instructions+=14;goto B574a42;
case 0x574a44:c.instructions+=13;goto B574a44;
case 0x574a46:c.instructions+=12;goto B574a46;
case 0x574a49:c.instructions+=11;goto B574a49;
case 0x574a4f:c.instructions+=10;goto B574a4f;
case 0x574a52:c.instructions+=9;goto B574a52;
case 0x574a55:c.instructions+=8;goto B574a55;
case 0x574a57:c.instructions+=7;goto B574a57;
case 0x574a59:c.instructions+=6;goto B574a59;
case 0x574a5c:c.instructions+=5;goto B574a5c;
case 0x574a60:c.instructions+=4;goto B574a60;
case 0x574a66:c.instructions+=3;goto B574a66;
case 0x574a68:c.instructions+=2;goto B574a68;
case 0x574a6b:c.instructions+=1;goto B574a6b;
case 0x574a6d:goto L574a6d;
case 0x574a71:c.instructions+=2;goto B574a71;
case 0x574a72:c.instructions+=1;goto B574a72;
case 0x574a77:goto L574a77;
case 0x574a7a:c.instructions+=4;goto B574a7a;
case 0x574a80:c.instructions+=3;goto B574a80;
case 0x574a82:c.instructions+=2;goto B574a82;
case 0x574a85:c.instructions+=1;goto B574a85;
case 0x574a87:goto L574a87;
case 0x574a8b:c.instructions+=4;goto B574a8b;
case 0x574a8e:c.instructions+=3;goto B574a8e;
case 0x574a91:c.instructions+=2;goto B574a91;
case 0x574a94:c.instructions+=1;goto B574a94;
case 0x574a96:goto L574a96;
case 0x574a9d:goto L574a9d;
case 0x574aa0:c.instructions+=4;goto B574aa0;
case 0x574aa3:c.instructions+=3;goto B574aa3;
case 0x574aa5:c.instructions+=2;goto B574aa5;
case 0x574aa8:c.instructions+=1;goto B574aa8;
case 0x574aaa:goto L574aaa;
case 0x574aad:c.instructions+=5;goto B574aad;
case 0x574ab3:c.instructions+=4;goto B574ab3;
case 0x574ab9:c.instructions+=3;goto B574ab9;
case 0x574abb:c.instructions+=2;goto B574abb;
case 0x574abe:c.instructions+=1;goto B574abe;
case 0x574ac0:goto L574ac0;
case 0x574ac3:c.instructions+=4;goto B574ac3;
case 0x574ac6:c.instructions+=3;goto B574ac6;
case 0x574ac8:c.instructions+=2;goto B574ac8;
case 0x574acb:c.instructions+=1;goto B574acb;
case 0x574ace:goto L574ace;
case 0x574ad1:c.instructions+=17;goto B574ad1;
case 0x574ad3:c.instructions+=16;goto B574ad3;
case 0x574ad6:c.instructions+=15;goto B574ad6;
case 0x574ad8:c.instructions+=14;goto B574ad8;
case 0x574adb:c.instructions+=13;goto B574adb;
case 0x574add:c.instructions+=12;goto B574add;
case 0x574ae0:c.instructions+=11;goto B574ae0;
case 0x574ae2:c.instructions+=10;goto B574ae2;
case 0x574ae5:c.instructions+=9;goto B574ae5;
case 0x574ae7:c.instructions+=8;goto B574ae7;
case 0x574aed:c.instructions+=7;goto B574aed;
case 0x574af0:c.instructions+=6;goto B574af0;
case 0x574af2:c.instructions+=5;goto B574af2;
case 0x574af4:c.instructions+=4;goto B574af4;
case 0x574af6:c.instructions+=3;goto B574af6;
case 0x574af9:c.instructions+=2;goto B574af9;
case 0x574afc:c.instructions+=1;goto B574afc;
case 0x574afe:goto L574afe;
case 0x574b10:goto L574b10;
case 0x574b14:c.instructions+=8;goto B574b14;
case 0x574b17:c.instructions+=7;goto B574b17;
case 0x574b1c:c.instructions+=6;goto B574b1c;
case 0x574b1e:c.instructions+=5;goto B574b1e;
case 0x574b20:c.instructions+=4;goto B574b20;
case 0x574b23:c.instructions+=3;goto B574b23;
case 0x574b25:c.instructions+=2;goto B574b25;
case 0x574b28:c.instructions+=1;goto B574b28;
case 0x574b2a:goto L574b2a;
case 0x574b2e:goto L574b2e;
case 0x574b31:c.instructions+=4;goto B574b31;
case 0x574b34:c.instructions+=3;goto B574b34;
case 0x574b36:c.instructions+=2;goto B574b36;
case 0x574b39:c.instructions+=1;goto B574b39;
case 0x574b3b:goto L574b3b;
case 0x574b3f:goto L574b3f;
case 0x574b50:goto L574b50;
case 0x574b54:c.instructions+=8;goto B574b54;
case 0x574b57:c.instructions+=7;goto B574b57;
case 0x574b5c:c.instructions+=6;goto B574b5c;
case 0x574b5e:c.instructions+=5;goto B574b5e;
case 0x574b61:c.instructions+=4;goto B574b61;
case 0x574b64:c.instructions+=3;goto B574b64;
case 0x574b66:c.instructions+=2;goto B574b66;
case 0x574b69:c.instructions+=1;goto B574b69;
case 0x574b6b:goto L574b6b;
case 0x574b6f:goto L574b6f;
case 0x574b72:c.instructions+=4;goto B574b72;
case 0x574b75:c.instructions+=3;goto B574b75;
case 0x574b77:c.instructions+=2;goto B574b77;
case 0x574b7a:c.instructions+=1;goto B574b7a;
case 0x574b7c:goto L574b7c;
case 0x574b80:goto L574b80;
case 0x574b90:goto L574b90;
case 0x574b94:c.instructions+=8;goto B574b94;
case 0x574b97:c.instructions+=7;goto B574b97;
case 0x574b9c:c.instructions+=6;goto B574b9c;
case 0x574b9e:c.instructions+=5;goto B574b9e;
case 0x574ba1:c.instructions+=4;goto B574ba1;
case 0x574ba3:c.instructions+=3;goto B574ba3;
case 0x574ba5:c.instructions+=2;goto B574ba5;
case 0x574ba8:c.instructions+=1;goto B574ba8;
case 0x574baa:goto L574baa;
case 0x574bae:goto L574bae;
case 0x574bb1:c.instructions+=4;goto B574bb1;
case 0x574bb4:c.instructions+=3;goto B574bb4;
case 0x574bb6:c.instructions+=2;goto B574bb6;
case 0x574bb9:c.instructions+=1;goto B574bb9;
case 0x574bbb:goto L574bbb;
case 0x574bbf:goto L574bbf;
case 0x574bd0:goto L574bd0;
case 0x574bd4:c.instructions+=5;goto B574bd4;
case 0x574bd7:c.instructions+=4;goto B574bd7;
case 0x574bd9:c.instructions+=3;goto B574bd9;
case 0x574bdc:c.instructions+=2;goto B574bdc;
case 0x574bdf:c.instructions+=1;goto B574bdf;
case 0x574bf0:goto L574bf0;
case 0x574bf2:c.instructions+=5;goto B574bf2;
case 0x574bf6:c.instructions+=4;goto B574bf6;
case 0x574bf8:c.instructions+=3;goto B574bf8;
case 0x574bfb:c.instructions+=2;goto B574bfb;
case 0x574bfe:c.instructions+=1;goto B574bfe;
case 0x574c10:goto L574c10;
case 0x574c13:c.instructions+=5;goto B574c13;
case 0x574c17:c.instructions+=4;goto B574c17;
case 0x574c19:c.instructions+=3;goto B574c19;
case 0x574c1c:c.instructions+=2;goto B574c1c;
case 0x574c1f:c.instructions+=1;goto B574c1f;
case 0x574c30:goto L574c30;
case 0x574c34:c.instructions+=17;goto B574c34;
case 0x574c38:c.instructions+=16;goto B574c38;
case 0x574c3b:c.instructions+=15;goto B574c3b;
case 0x574c3e:c.instructions+=14;goto B574c3e;
case 0x574c42:c.instructions+=13;goto B574c42;
case 0x574c45:c.instructions+=12;goto B574c45;
case 0x574c49:c.instructions+=11;goto B574c49;
case 0x574c4c:c.instructions+=10;goto B574c4c;
case 0x574c4e:c.instructions+=9;goto B574c4e;
case 0x574c52:c.instructions+=8;goto B574c52;
case 0x574c55:c.instructions+=7;goto B574c55;
case 0x574c58:c.instructions+=6;goto B574c58;
case 0x574c5c:c.instructions+=5;goto B574c5c;
case 0x574c5f:c.instructions+=4;goto B574c5f;
case 0x574c63:c.instructions+=3;goto B574c63;
case 0x574c66:c.instructions+=2;goto B574c66;
case 0x574c69:c.instructions+=1;goto B574c69;
case 0x574c70:goto L574c70;
case 0x574c73:c.instructions+=5;goto B574c73;
case 0x574c77:c.instructions+=4;goto B574c77;
case 0x574c79:c.instructions+=3;goto B574c79;
case 0x574c7c:c.instructions+=2;goto B574c7c;
case 0x574c7f:c.instructions+=1;goto B574c7f;
case 0x574c90:goto L574c90;
case 0x574c94:c.instructions+=7;goto B574c94;
case 0x574c97:c.instructions+=6;goto B574c97;
case 0x574c98:c.instructions+=5;goto B574c98;
case 0x574c9b:c.instructions+=4;goto B574c9b;
case 0x574c9d:c.instructions+=3;goto B574c9d;
case 0x574c9e:c.instructions+=2;goto B574c9e;
case 0x574c9f:c.instructions+=1;goto B574c9f;
case 0x574ca4:goto L574ca4;
case 0x574cb0:goto L574cb0;
case 0x574cb4:c.instructions+=7;goto B574cb4;
case 0x574cb7:c.instructions+=6;goto B574cb7;
case 0x574cb8:c.instructions+=5;goto B574cb8;
case 0x574cbb:c.instructions+=4;goto B574cbb;
case 0x574cbd:c.instructions+=3;goto B574cbd;
case 0x574cbe:c.instructions+=2;goto B574cbe;
case 0x574cbf:c.instructions+=1;goto B574cbf;
case 0x574cc4:goto L574cc4;
case 0x574cd0:goto L574cd0;
case 0x574cd4:c.instructions+=7;goto B574cd4;
case 0x574cd7:c.instructions+=6;goto B574cd7;
case 0x574cd8:c.instructions+=5;goto B574cd8;
case 0x574cdb:c.instructions+=4;goto B574cdb;
case 0x574cdd:c.instructions+=3;goto B574cdd;
case 0x574cde:c.instructions+=2;goto B574cde;
case 0x574cdf:c.instructions+=1;goto B574cdf;
case 0x574ce4:goto L574ce4;
case 0x574cf0:goto L574cf0;
case 0x574cf4:c.instructions+=7;goto B574cf4;
case 0x574cf7:c.instructions+=6;goto B574cf7;
case 0x574cfa:c.instructions+=5;goto B574cfa;
case 0x574cfc:c.instructions+=4;goto B574cfc;
case 0x574cff:c.instructions+=3;goto B574cff;
case 0x574d02:c.instructions+=2;goto B574d02;
case 0x574d05:c.instructions+=1;goto B574d05;
case 0x574d10:goto L574d10;
case 0x574d14:c.instructions+=7;goto B574d14;
case 0x574d17:c.instructions+=6;goto B574d17;
case 0x574d1a:c.instructions+=5;goto B574d1a;
case 0x574d1c:c.instructions+=4;goto B574d1c;
case 0x574d1f:c.instructions+=3;goto B574d1f;
case 0x574d22:c.instructions+=2;goto B574d22;
case 0x574d28:c.instructions+=1;goto B574d28;
case 0x574d30:goto L574d30;
case 0x574d32:c.instructions+=7;goto B574d32;
case 0x574d36:c.instructions+=6;goto B574d36;
case 0x574d38:c.instructions+=5;goto B574d38;
case 0x574d3b:c.instructions+=4;goto B574d3b;
case 0x574d3e:c.instructions+=3;goto B574d3e;
case 0x574d41:c.instructions+=2;goto B574d41;
case 0x574d44:c.instructions+=1;goto B574d44;
case 0x574d50:goto L574d50;
case 0x574d53:c.instructions+=7;goto B574d53;
case 0x574d57:c.instructions+=6;goto B574d57;
case 0x574d59:c.instructions+=5;goto B574d59;
case 0x574d5c:c.instructions+=4;goto B574d5c;
case 0x574d5f:c.instructions+=3;goto B574d5f;
case 0x574d62:c.instructions+=2;goto B574d62;
case 0x574d65:c.instructions+=1;goto B574d65;
case 0x574d70:goto L574d70;
case 0x574d74:c.instructions+=25;goto B574d74;
case 0x574d78:c.instructions+=24;goto B574d78;
case 0x574d7b:c.instructions+=23;goto B574d7b;
case 0x574d7e:c.instructions+=22;goto B574d7e;
case 0x574d82:c.instructions+=21;goto B574d82;
case 0x574d85:c.instructions+=20;goto B574d85;
case 0x574d89:c.instructions+=19;goto B574d89;
case 0x574d8c:c.instructions+=18;goto B574d8c;
case 0x574d8e:c.instructions+=17;goto B574d8e;
case 0x574d92:c.instructions+=16;goto B574d92;
case 0x574d95:c.instructions+=15;goto B574d95;
case 0x574d98:c.instructions+=14;goto B574d98;
case 0x574d9c:c.instructions+=13;goto B574d9c;
case 0x574d9f:c.instructions+=12;goto B574d9f;
case 0x574da3:c.instructions+=11;goto B574da3;
case 0x574da6:c.instructions+=10;goto B574da6;
case 0x574da9:c.instructions+=9;goto B574da9;
case 0x574dad:c.instructions+=8;goto B574dad;
case 0x574db0:c.instructions+=7;goto B574db0;
case 0x574db3:c.instructions+=6;goto B574db3;
case 0x574db7:c.instructions+=5;goto B574db7;
case 0x574dba:c.instructions+=4;goto B574dba;
case 0x574dbe:c.instructions+=3;goto B574dbe;
case 0x574dc1:c.instructions+=2;goto B574dc1;
case 0x574dc4:c.instructions+=1;goto B574dc4;
case 0x574dd0:goto L574dd0;
case 0x574dd3:c.instructions+=7;goto B574dd3;
case 0x574dd7:c.instructions+=6;goto B574dd7;
case 0x574dd9:c.instructions+=5;goto B574dd9;
case 0x574ddc:c.instructions+=4;goto B574ddc;
case 0x574ddf:c.instructions+=3;goto B574ddf;
case 0x574de2:c.instructions+=2;goto B574de2;
case 0x574de5:c.instructions+=1;goto B574de5;
case 0x574df0:goto L574df0;
case 0x574df1:c.instructions+=11;goto B574df1;
case 0x574df5:c.instructions+=10;goto B574df5;
case 0x574df6:c.instructions+=9;goto B574df6;
case 0x574dfa:c.instructions+=8;goto B574dfa;
case 0x574dfb:c.instructions+=7;goto B574dfb;
case 0x574dfc:c.instructions+=6;goto B574dfc;
case 0x574e00:c.instructions+=5;goto B574e00;
case 0x574e01:c.instructions+=4;goto B574e01;
case 0x574e02:c.instructions+=3;goto B574e02;
case 0x574e03:c.instructions+=2;goto B574e03;
case 0x574e05:c.instructions+=1;goto B574e05;
case 0x574e0a:goto L574e0a;
case 0x574e0b:c.instructions+=4;goto B574e0b;
case 0x574e0c:c.instructions+=3;goto B574e0c;
case 0x574e0d:c.instructions+=2;goto B574e0d;
case 0x574e10:c.instructions+=1;goto B574e10;
case 0x574e15:goto L574e15;
case 0x574e16:c.instructions+=4;goto B574e16;
case 0x574e17:c.instructions+=3;goto B574e17;
case 0x574e18:c.instructions+=2;goto B574e18;
case 0x574e1b:c.instructions+=1;goto B574e1b;
case 0x574e20:goto L574e20;
case 0x574e21:c.instructions+=4;goto B574e21;
case 0x574e22:c.instructions+=3;goto B574e22;
case 0x574e23:c.instructions+=2;goto B574e23;
case 0x574e24:c.instructions+=1;goto B574e24;
case 0x574e30:goto L574e30;
case 0x574e34:c.instructions+=3;goto B574e34;
case 0x574e38:c.instructions+=2;goto B574e38;
case 0x574e3b:c.instructions+=1;goto B574e3b;
case 0x574e41:goto L574e41;
case 0x574e42:c.instructions+=1;goto B574e42;
case 0x574e48:goto L574e48;
case 0x574e49:c.instructions+=1;goto B574e49;
case 0x574e4f:goto L574e4f;
case 0x574e54:c.instructions+=2;goto B574e54;
case 0x574e5b:c.instructions+=1;goto B574e5b;
case 0x574e5d:goto L574e5d;
case 0x574e63:goto L574e63;
case 0x574e67:c.instructions+=4;goto B574e67;
case 0x574e6d:c.instructions+=3;goto B574e6d;
case 0x574e6f:c.instructions+=2;goto B574e6f;
case 0x574e72:c.instructions+=1;goto B574e72;
case 0x574e74:goto L574e74;
case 0x574e78:c.instructions+=2;goto B574e78;
case 0x574e79:c.instructions+=1;goto B574e79;
case 0x574e7e:goto L574e7e;
case 0x574e81:c.instructions+=22;goto B574e81;
case 0x574e83:c.instructions+=21;goto B574e83;
case 0x574e85:c.instructions+=20;goto B574e85;
case 0x574e88:c.instructions+=19;goto B574e88;
case 0x574e8b:c.instructions+=18;goto B574e8b;
case 0x574e8e:c.instructions+=17;goto B574e8e;
case 0x574e91:c.instructions+=16;goto B574e91;
case 0x574e94:c.instructions+=15;goto B574e94;
case 0x574e96:c.instructions+=14;goto B574e96;
case 0x574e98:c.instructions+=13;goto B574e98;
case 0x574e9a:c.instructions+=12;goto B574e9a;
case 0x574e9d:c.instructions+=11;goto B574e9d;
case 0x574ea3:c.instructions+=10;goto B574ea3;
case 0x574ea6:c.instructions+=9;goto B574ea6;
case 0x574ea9:c.instructions+=8;goto B574ea9;
case 0x574eab:c.instructions+=7;goto B574eab;
case 0x574ead:c.instructions+=6;goto B574ead;
case 0x574eb0:c.instructions+=5;goto B574eb0;
case 0x574eb4:c.instructions+=4;goto B574eb4;
case 0x574eba:c.instructions+=3;goto B574eba;
case 0x574ebc:c.instructions+=2;goto B574ebc;
case 0x574ebf:c.instructions+=1;goto B574ebf;
case 0x574ec1:goto L574ec1;
case 0x574ec5:c.instructions+=2;goto B574ec5;
case 0x574ec6:c.instructions+=1;goto B574ec6;
case 0x574ecb:goto L574ecb;
case 0x574ecf:c.instructions+=7;goto B574ecf;
case 0x574ed2:c.instructions+=6;goto B574ed2;
case 0x574ed5:c.instructions+=5;goto B574ed5;
case 0x574ed8:c.instructions+=4;goto B574ed8;
case 0x574edb:c.instructions+=3;goto B574edb;
case 0x574edd:c.instructions+=2;goto B574edd;
case 0x574ee0:c.instructions+=1;goto B574ee0;
case 0x574ee2:goto L574ee2;
case 0x574ee4:c.instructions+=6;goto B574ee4;
case 0x574eea:c.instructions+=5;goto B574eea;
case 0x574eed:c.instructions+=4;goto B574eed;
case 0x574ef3:c.instructions+=3;goto B574ef3;
case 0x574ef5:c.instructions+=2;goto B574ef5;
case 0x574ef8:c.instructions+=1;goto B574ef8;
case 0x574efa:goto L574efa;
case 0x574efd:c.instructions+=4;goto B574efd;
case 0x574f00:c.instructions+=3;goto B574f00;
case 0x574f02:c.instructions+=2;goto B574f02;
case 0x574f05:c.instructions+=1;goto B574f05;
case 0x574f06:goto L574f06;
case 0x574f08:c.instructions+=16;goto B574f08;
case 0x574f0b:c.instructions+=15;goto B574f0b;
case 0x574f0d:c.instructions+=14;goto B574f0d;
case 0x574f10:c.instructions+=13;goto B574f10;
case 0x574f12:c.instructions+=12;goto B574f12;
case 0x574f15:c.instructions+=11;goto B574f15;
case 0x574f17:c.instructions+=10;goto B574f17;
case 0x574f1a:c.instructions+=9;goto B574f1a;
case 0x574f1c:c.instructions+=8;goto B574f1c;
case 0x574f22:c.instructions+=7;goto B574f22;
case 0x574f25:c.instructions+=6;goto B574f25;
case 0x574f27:c.instructions+=5;goto B574f27;
case 0x574f29:c.instructions+=4;goto B574f29;
case 0x574f2b:c.instructions+=3;goto B574f2b;
case 0x574f2e:c.instructions+=2;goto B574f2e;
case 0x574f31:c.instructions+=1;goto B574f31;
case 0x574f33:goto L574f33;
case 0x574f40:goto L574f40;
case 0x574f41:c.instructions+=8;goto B574f41;
case 0x574f45:c.instructions+=7;goto B574f45;
case 0x574f46:c.instructions+=6;goto B574f46;
case 0x574f4a:c.instructions+=5;goto B574f4a;
case 0x574f4c:c.instructions+=4;goto B574f4c;
case 0x574f4e:c.instructions+=3;goto B574f4e;
case 0x574f4f:c.instructions+=2;goto B574f4f;
case 0x574f50:c.instructions+=1;goto B574f50;
case 0x574f55:goto L574f55;
case 0x574f57:c.instructions+=5;goto B574f57;
case 0x574f59:c.instructions+=4;goto B574f59;
case 0x574f5a:c.instructions+=3;goto B574f5a;
case 0x574f5d:c.instructions+=2;goto B574f5d;
case 0x574f5e:c.instructions+=1;goto B574f5e;
case 0x574f63:goto L574f63;
case 0x574f66:c.instructions+=3;goto B574f66;
case 0x574f67:c.instructions+=2;goto B574f67;
case 0x574f68:c.instructions+=1;goto B574f68;
case 0x574f70:goto L574f70;
case 0x574f71:c.instructions+=15;goto B574f71;
case 0x574f72:c.instructions+=14;goto B574f72;
case 0x574f73:c.instructions+=13;goto B574f73;
case 0x574f77:c.instructions+=12;goto B574f77;
case 0x574f79:c.instructions+=11;goto B574f79;
case 0x574f7a:c.instructions+=10;goto B574f7a;
case 0x574f7d:c.instructions+=9;goto B574f7d;
case 0x574f7f:c.instructions+=8;goto B574f7f;
case 0x574f81:c.instructions+=7;goto B574f81;
case 0x574f85:c.instructions+=6;goto B574f85;
case 0x574f88:c.instructions+=5;goto B574f88;
case 0x574f8a:c.instructions+=4;goto B574f8a;
case 0x574f8d:c.instructions+=3;goto B574f8d;
case 0x574f8f:c.instructions+=2;goto B574f8f;
case 0x574f91:c.instructions+=1;goto B574f91;
case 0x574f93:goto L574f93;
case 0x574f97:c.instructions+=1;goto B574f97;
case 0x574f98:goto L574f98;
case 0x574f9a:c.instructions+=15;goto B574f9a;
case 0x574f9c:c.instructions+=14;goto B574f9c;
case 0x574f9e:c.instructions+=13;goto B574f9e;
case 0x574fa0:c.instructions+=12;goto B574fa0;
case 0x574fa2:c.instructions+=11;goto B574fa2;
case 0x574fa4:c.instructions+=10;goto B574fa4;
case 0x574fa7:c.instructions+=9;goto B574fa7;
case 0x574fa9:c.instructions+=8;goto B574fa9;
case 0x574fab:c.instructions+=7;goto B574fab;
case 0x574fad:c.instructions+=6;goto B574fad;
case 0x574faf:c.instructions+=5;goto B574faf;
case 0x574fb1:c.instructions+=4;goto B574fb1;
case 0x574fb2:c.instructions+=3;goto B574fb2;
case 0x574fb5:c.instructions+=2;goto B574fb5;
case 0x574fb7:c.instructions+=1;goto B574fb7;
case 0x574fb9:goto L574fb9;
case 0x574fba:goto L574fba;
case 0x574fbe:c.instructions+=3;goto B574fbe;
case 0x574fbf:c.instructions+=2;goto B574fbf;
case 0x574fc1:c.instructions+=1;goto B574fc1;
case 0x574fc3:goto L574fc3;
case 0x574fc4:goto L574fc4;
case 0x574fc5:c.instructions+=3;goto B574fc5;
case 0x574fc6:c.instructions+=2;goto B574fc6;
case 0x574fc7:c.instructions+=1;goto B574fc7;
case 0x574fd0:goto L574fd0;
case 0x574fd1:c.instructions+=15;goto B574fd1;
case 0x574fd5:c.instructions+=14;goto B574fd5;
case 0x574fd7:c.instructions+=13;goto B574fd7;
case 0x574fd8:c.instructions+=12;goto B574fd8;
case 0x574fdb:c.instructions+=11;goto B574fdb;
case 0x574fdd:c.instructions+=10;goto B574fdd;
case 0x574fde:c.instructions+=9;goto B574fde;
case 0x574fe1:c.instructions+=8;goto B574fe1;
case 0x574fe2:c.instructions+=7;goto B574fe2;
case 0x574fe6:c.instructions+=6;goto B574fe6;
case 0x574fe8:c.instructions+=5;goto B574fe8;
case 0x574feb:c.instructions+=4;goto B574feb;
case 0x574fed:c.instructions+=3;goto B574fed;
case 0x574fef:c.instructions+=2;goto B574fef;
case 0x574ff1:c.instructions+=1;goto B574ff1;
case 0x574ff3:goto L574ff3;
case 0x574ff4:c.instructions+=5;goto B574ff4;
case 0x574ff7:c.instructions+=4;goto B574ff7;
case 0x574ff9:c.instructions+=3;goto B574ff9;
case 0x574ffb:c.instructions+=2;goto B574ffb;
case 0x574ffd:c.instructions+=1;goto B574ffd;
default:missing_instruction(c.pc);}
B574003:L574003:{c.instructions+=9;NFSU2_TR(0x574003);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B574007:{NFSU2_TR(0x574007);
__builtin_memmove((R+12),(R+0),1);
}
B574009:{NFSU2_TR(0x574009);
__builtin_memmove((R+13),(R+12),1);
}
B57400b:{NFSU2_TR(0x57400b);
__builtin_memmove((R+8),(R+4),4);
}
B57400d:{NFSU2_TR(0x57400d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B574010:{NFSU2_TR(0x574010);
__builtin_memmove((R+0),(R+12),4);
}
B574012:{NFSU2_TR(0x574012);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B574015:{NFSU2_TR(0x574015);
__builtin_memmove((R+0),(R+12),2);
}
B574018:{NFSU2_TR(0x574018);
__builtin_memmove((R+12),(R+8),4);
}
B57401a:L57401a:{c.instructions+=1;NFSU2_TR(0x57401a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L57401c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57401au);}goto L57401a;}
}
B57401c:L57401c:{c.instructions+=3;NFSU2_TR(0x57401c);
__builtin_memmove((R+4),(R+8),4);
}
B57401e:{NFSU2_TR(0x57401e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574022:{NFSU2_TR(0x574022);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B574025:L574025:{c.instructions+=1;NFSU2_TR(0x574025);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L574027;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574025u);}goto L574025;}
}
B574027:L574027:{c.instructions+=10;NFSU2_TR(0x574027);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57402b:{NFSU2_TR(0x57402b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57402f:{NFSU2_TR(0x57402f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B574033:{NFSU2_TR(0x574033);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B574035:{NFSU2_TR(0x574035);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B574037:{NFSU2_TR(0x574037);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57403b:{NFSU2_TR(0x57403b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57403f:{NFSU2_TR(0x57403f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B574043:{NFSU2_TR(0x574043);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574047:{NFSU2_TR(0x574047);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x573fb1u,573);}
}
B57404d:L57404d:{c.instructions+=8;NFSU2_TR(0x57404d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B574051:{NFSU2_TR(0x574051);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B574055:{NFSU2_TR(0x574055);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B574056:{NFSU2_TR(0x574056);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B574057:{NFSU2_TR(0x574057);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B574059:{NFSU2_TR(0x574059);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57405d:{NFSU2_TR(0x57405d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574061:{NFSU2_TR(0x574061);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x573f80u,573);}
}
B574067:L574067:{c.instructions+=1;NFSU2_TR(0x574067);
{goto L574070;}
}
B574070:L574070:{c.instructions+=5;NFSU2_TR(0x574070);
__builtin_memmove((R+12),(R+24),4);
}
B574072:{NFSU2_TR(0x574072);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B574075:{NFSU2_TR(0x574075);
u8 U[13];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B57407d:{NFSU2_TR(0x57407d);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B57407f:{NFSU2_TR(0x57407f);
if(r1(R+519)){{goto L57411c;}}
}
B574085:L574085:{c.instructions+=1;NFSU2_TR(0x574085);
{goto L574090;}
}
B574090:L574090:{c.instructions+=11;NFSU2_TR(0x574090);
u8 U[13];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B574097:{NFSU2_TR(0x574097);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57409b:{NFSU2_TR(0x57409b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B57409d:{NFSU2_TR(0x57409d);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B57409f:{NFSU2_TR(0x57409f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5740a0:{NFSU2_TR(0x5740a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5740a4:{NFSU2_TR(0x5740a4);
__builtin_memmove((R+12),(R+24),4);
}
B5740a6:{NFSU2_TR(0x5740a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B5740a9:{NFSU2_TR(0x5740a9);
u8 U[13];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B5740b1:{NFSU2_TR(0x5740b1);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B5740b3:{NFSU2_TR(0x5740b3);
if(r1(R+519)){{goto L57411c;}}
}
B5740b5:L5740b5:{c.instructions+=10;NFSU2_TR(0x5740b5);
u8 U[13];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B5740bc:{NFSU2_TR(0x5740bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B5740be:{NFSU2_TR(0x5740be);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B5740c0:{NFSU2_TR(0x5740c0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5740c1:{NFSU2_TR(0x5740c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5740c5:{NFSU2_TR(0x5740c5);
__builtin_memmove((R+12),(R+24),4);
}
B5740c7:{NFSU2_TR(0x5740c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B5740ca:{NFSU2_TR(0x5740ca);
u8 U[13];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B5740d2:{NFSU2_TR(0x5740d2);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B5740d4:{NFSU2_TR(0x5740d4);
if(r1(R+519)){{goto L57411c;}}
}
B5740d6:L5740d6:{c.instructions+=10;NFSU2_TR(0x5740d6);
u8 U[13];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B5740dd:{NFSU2_TR(0x5740dd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B5740df:{NFSU2_TR(0x5740df);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B5740e1:{NFSU2_TR(0x5740e1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5740e2:{NFSU2_TR(0x5740e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5740e6:{NFSU2_TR(0x5740e6);
__builtin_memmove((R+12),(R+24),4);
}
B5740e8:{NFSU2_TR(0x5740e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B5740eb:{NFSU2_TR(0x5740eb);
u8 U[13];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B5740f3:{NFSU2_TR(0x5740f3);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B5740f5:{NFSU2_TR(0x5740f5);
if(r1(R+519)){{goto L57411c;}}
}
B5740f7:L5740f7:{c.instructions+=10;NFSU2_TR(0x5740f7);
u8 U[13];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B5740fe:{NFSU2_TR(0x5740fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B574100:{NFSU2_TR(0x574100);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B574102:{NFSU2_TR(0x574102);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B574103:{NFSU2_TR(0x574103);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574107:{NFSU2_TR(0x574107);
__builtin_memmove((R+12),(R+24),4);
}
B574109:{NFSU2_TR(0x574109);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B57410c:{NFSU2_TR(0x57410c);
u8 U[13];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B574114:{NFSU2_TR(0x574114);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B574116:{NFSU2_TR(0x574116);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574090u);}goto L574090;}}
}
B57411c:L57411c:{c.instructions+=2;NFSU2_TR(0x57411c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B57411f:{NFSU2_TR(0x57411f);
if(r1(R+519)){{goto L57415c;}}
}
B574121:L574121:{c.instructions+=19;NFSU2_TR(0x574121);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574125:{NFSU2_TR(0x574125);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B574128:{NFSU2_TR(0x574128);
u8 U[13];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B57412f:{NFSU2_TR(0x57412f);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B574131:{NFSU2_TR(0x574131);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B574135:{NFSU2_TR(0x574135);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B574136:{NFSU2_TR(0x574136);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57413a:{NFSU2_TR(0x57413a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B57413d:{NFSU2_TR(0x57413d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B574140:{NFSU2_TR(0x574140);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B574142:{NFSU2_TR(0x574142);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B574145:{NFSU2_TR(0x574145);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B574147:{NFSU2_TR(0x574147);
w4(R+4,u32(0x10ull));
}
B57414c:{NFSU2_TR(0x57414c);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B57414e:{NFSU2_TR(0x57414e);
__builtin_memmove((R+0),(R+8),4);
}
B574150:{NFSU2_TR(0x574150);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B574153:{NFSU2_TR(0x574153);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B574155:{NFSU2_TR(0x574155);
__builtin_memmove((R+24),(R+0),4);
}
B574157:{NFSU2_TR(0x574157);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574070u);}goto L574070;}
}
B57415c:L57415c:{c.instructions+=3;NFSU2_TR(0x57415c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57415f:{NFSU2_TR(0x57415f);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B574163:{NFSU2_TR(0x574163);
if(r1(R+518)){{goto L57417e;}}
}
B574165:L574165:{c.instructions+=4;NFSU2_TR(0x574165);
__builtin_memmove((R+0),(R+24),4);
}
B574167:{NFSU2_TR(0x574167);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B57416a:{NFSU2_TR(0x57416a);
w4(R+12,u32(0x8ull));
}
B57416f:{NFSU2_TR(0x57416f);
}
B574170:L574170:{c.instructions+=4;NFSU2_TR(0x574170);
u8 U[16];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B574177:{NFSU2_TR(0x574177);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B574178:{NFSU2_TR(0x574178);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B57417a:{NFSU2_TR(0x57417a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574170u);}goto L574170;}}
}
B57417c:L57417c:{c.instructions+=1;NFSU2_TR(0x57417c);
{goto L574182;}
}
B57417e:L57417e:{c.instructions+=1;NFSU2_TR(0x57417e);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B574182:L574182:{c.instructions+=12;NFSU2_TR(0x574182);
w4(R+4,u32(0x20ull));
}
B574187:{NFSU2_TR(0x574187);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B574189:{NFSU2_TR(0x574189);
__builtin_memmove((R+0),(R+24),4);
}
B57418b:{NFSU2_TR(0x57418b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B57418d:{NFSU2_TR(0x57418d);
__builtin_memmove((R+4),(R+12),4);
}
B57418f:{NFSU2_TR(0x57418f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B574191:{NFSU2_TR(0x574191);
u8 U[16];
w4(U+0,u32(u32(u32(0x1d8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+12))));
}
B574198:{NFSU2_TR(0x574198);
u8 U[13];
w4(U+0,u32(u32(u32(0x318ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B57419f:{NFSU2_TR(0x57419f);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+12))));
}
B5741a1:{NFSU2_TR(0x5741a1);
u8 U[5];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5741a5:{NFSU2_TR(0x5741a5);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5741a7:{NFSU2_TR(0x5741a7);
if(r1(R+518)){{goto L5741bd;}}
}
B5741a9:L5741a9:{c.instructions+=2;NFSU2_TR(0x5741a9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5741ab:{NFSU2_TR(0x5741ab);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5741c1;}}
}
B5741ad:L5741ad:{c.instructions+=5;NFSU2_TR(0x5741ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5741b1:{NFSU2_TR(0x5741b1);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B5741b3:{NFSU2_TR(0x5741b3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5741b4:{NFSU2_TR(0x5741b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5741b8:{NFSU2_TR(0x5741b8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574070u);}goto L574070;}
}
B5741bd:L5741bd:{c.instructions+=2;NFSU2_TR(0x5741bd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5741bf:{NFSU2_TR(0x5741bf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5741e0;}}
}
B5741c1:L5741c1:{c.instructions+=12;NFSU2_TR(0x5741c1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B5741c4:{NFSU2_TR(0x5741c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5741c7:{NFSU2_TR(0x5741c7);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5741c9:{NFSU2_TR(0x5741c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5741cd:{NFSU2_TR(0x5741cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5741d0:{NFSU2_TR(0x5741d0);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5741d2:{NFSU2_TR(0x5741d2);
__builtin_memmove((R+4),(R+20),4);
}
B5741d4:{NFSU2_TR(0x5741d4);
w4(R+4,u32(0-u32(r4(R+4))));
}
B5741d6:{NFSU2_TR(0x5741d6);
__builtin_memmove((R+24),(R+8),4);
}
B5741d8:{NFSU2_TR(0x5741d8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B5741db:{NFSU2_TR(0x5741db);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B5741dd:{NFSU2_TR(0x5741dd);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B5741e0:L5741e0:{c.instructions+=2;NFSU2_TR(0x5741e0);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5741e2:{NFSU2_TR(0x5741e2);
if(r1(R+518)){{goto L5741f4;}}
}
B5741e4:L5741e4:{c.instructions+=5;NFSU2_TR(0x5741e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5741e8:{NFSU2_TR(0x5741e8);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B5741ea:{NFSU2_TR(0x5741ea);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5741eb:{NFSU2_TR(0x5741eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5741ef:{NFSU2_TR(0x5741ef);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574070u);}goto L574070;}
}
B5741f4:L5741f4:{c.instructions+=5;NFSU2_TR(0x5741f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5741f8:{NFSU2_TR(0x5741f8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5741fa:{NFSU2_TR(0x5741fa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5741fc:{NFSU2_TR(0x5741fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574200:{NFSU2_TR(0x574200);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L574236;}}
}
B574202:L574202:{c.instructions+=5;NFSU2_TR(0x574202);
__builtin_memmove((R+12),(R+24),4);
}
B574204:{NFSU2_TR(0x574204);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B574207:{NFSU2_TR(0x574207);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B57420a:{NFSU2_TR(0x57420a);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B57420d:{NFSU2_TR(0x57420d);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L57422e;}}
}
B57420f:L57420f:{c.instructions+=12;NFSU2_TR(0x57420f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B574212:{NFSU2_TR(0x574212);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B574215:{NFSU2_TR(0x574215);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B574217:{NFSU2_TR(0x574217);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B57421b:{NFSU2_TR(0x57421b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B57421e:{NFSU2_TR(0x57421e);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B574220:{NFSU2_TR(0x574220);
__builtin_memmove((R+4),(R+20),4);
}
B574222:{NFSU2_TR(0x574222);
w4(R+4,u32(0-u32(r4(R+4))));
}
B574224:{NFSU2_TR(0x574224);
__builtin_memmove((R+24),(R+8),4);
}
B574226:{NFSU2_TR(0x574226);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B574229:{NFSU2_TR(0x574229);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B57422b:{NFSU2_TR(0x57422b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B57422e:L57422e:{c.instructions+=2;NFSU2_TR(0x57422e);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x4ull))));
}
B574231:{NFSU2_TR(0x574231);
{goto L5743b5;}
}
B574236:L574236:{c.instructions+=3;NFSU2_TR(0x574236);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffff0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57423c:{NFSU2_TR(0x57423c);
w4(R+0,u32(0x2ull));
}
B574241:{NFSU2_TR(0x574241);
if(r1(R+518)){{goto L5742a0;}}
}
B574243:L574243:{c.instructions+=4;NFSU2_TR(0x574243);
w4(R+24,shl<u32>(r4(R+24),u64(u32(0x1ull))));
}
B574245:{NFSU2_TR(0x574245);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B574246:{NFSU2_TR(0x574246);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B574248:{NFSU2_TR(0x574248);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574243u);}goto L574243;}}
}
B57424a:L57424a:{c.instructions+=7;NFSU2_TR(0x57424a);
w4(R+4,u32(0x1ull));
}
B57424f:{NFSU2_TR(0x57424f);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B574251:{NFSU2_TR(0x574251);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+4))));
}
B574253:{NFSU2_TR(0x574253);
__builtin_memmove((R+4),gp(0x8650f8),4);
}
B574259:{NFSU2_TR(0x574259);
w4(R+24,shl<u32>(r4(R+24),u64(u32(0x1ull))));
}
B57425b:{NFSU2_TR(0x57425b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57425d:{NFSU2_TR(0x57425d);
if(r1(R+518)){{goto L57427a;}}
}
B57425f:L57425f:{c.instructions+=8;NFSU2_TR(0x57425f);
__builtin_memmove((R+12),gp(0x8650f8),4);
}
B574265:{NFSU2_TR(0x574265);
w4(R+4,u32(0x20ull));
}
B57426a:{NFSU2_TR(0x57426a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B57426c:{NFSU2_TR(0x57426c);
__builtin_memmove((R+12),(R+24),4);
}
B57426e:{NFSU2_TR(0x57426e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B574270:{NFSU2_TR(0x574270);
__builtin_memmove((R+4),gp(0x8650f8),4);
}
B574276:{NFSU2_TR(0x574276);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B574278:{NFSU2_TR(0x574278);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+4))));
}
B57427a:L57427a:{c.instructions+=2;NFSU2_TR(0x57427a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57427c:{NFSU2_TR(0x57427c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5742ce;}}
}
B57427e:L57427e:{c.instructions+=13;NFSU2_TR(0x57427e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B574281:{NFSU2_TR(0x574281);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B574284:{NFSU2_TR(0x574284);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B574286:{NFSU2_TR(0x574286);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B57428a:{NFSU2_TR(0x57428a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B57428d:{NFSU2_TR(0x57428d);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B57428f:{NFSU2_TR(0x57428f);
__builtin_memmove((R+4),(R+20),4);
}
B574291:{NFSU2_TR(0x574291);
w4(R+4,u32(0-u32(r4(R+4))));
}
B574293:{NFSU2_TR(0x574293);
__builtin_memmove((R+24),(R+8),4);
}
B574295:{NFSU2_TR(0x574295);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B574298:{NFSU2_TR(0x574298);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B57429a:{NFSU2_TR(0x57429a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B57429d:{NFSU2_TR(0x57429d);
{goto L5742ce;}
}
B5742a0:L5742a0:{c.instructions+=6;NFSU2_TR(0x5742a0);
__builtin_memmove((R+12),(R+24),4);
}
B5742a2:{NFSU2_TR(0x5742a2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5742a3:{NFSU2_TR(0x5742a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B5742a6:{NFSU2_TR(0x5742a6);
w4(R+24,shl<u32>(r4(R+24),u64(u32(0x1ull))));
}
B5742a8:{NFSU2_TR(0x5742a8);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B5742a9:{NFSU2_TR(0x5742a9);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5742ca;}}
}
B5742ab:L5742ab:{c.instructions+=12;NFSU2_TR(0x5742ab);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B5742ae:{NFSU2_TR(0x5742ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5742b1:{NFSU2_TR(0x5742b1);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5742b3:{NFSU2_TR(0x5742b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5742b7:{NFSU2_TR(0x5742b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5742ba:{NFSU2_TR(0x5742ba);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5742bc:{NFSU2_TR(0x5742bc);
__builtin_memmove((R+4),(R+20),4);
}
B5742be:{NFSU2_TR(0x5742be);
w4(R+4,u32(0-u32(r4(R+4))));
}
B5742c0:{NFSU2_TR(0x5742c0);
__builtin_memmove((R+24),(R+8),4);
}
B5742c2:{NFSU2_TR(0x5742c2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B5742c5:{NFSU2_TR(0x5742c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B5742c7:{NFSU2_TR(0x5742c7);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B5742ca:L5742ca:{c.instructions+=2;NFSU2_TR(0x5742ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5742cc:{NFSU2_TR(0x5742cc);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5742a0u);}goto L5742a0;}}
}
B5742ce:L5742ce:{c.instructions+=2;NFSU2_TR(0x5742ce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5742d1:{NFSU2_TR(0x5742d1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L574364;}}
}
B5742d7:L5742d7:{c.instructions+=3;NFSU2_TR(0x5742d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5742da:{NFSU2_TR(0x5742da);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5742dc:{NFSU2_TR(0x5742dc);
if(r1(R+518)){{goto L5742f7;}}
}
B5742de:L5742de:{c.instructions+=9;NFSU2_TR(0x5742de);
w4(R+4,u32(0x30ull));
}
B5742e3:{NFSU2_TR(0x5742e3);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5742e5:{NFSU2_TR(0x5742e5);
__builtin_memmove((R+12),(R+24),4);
}
B5742e7:{NFSU2_TR(0x5742e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B5742e9:{NFSU2_TR(0x5742e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5742ec:{NFSU2_TR(0x5742ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B5742ee:{NFSU2_TR(0x5742ee);
w4(R+4,u32(0x10ull));
}
B5742f3:{NFSU2_TR(0x5742f3);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5742f5:{NFSU2_TR(0x5742f5);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+4))));
}
B5742f7:L5742f7:{c.instructions+=2;NFSU2_TR(0x5742f7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5742f9:{NFSU2_TR(0x5742f9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57431a;}}
}
B5742fb:L5742fb:{c.instructions+=12;NFSU2_TR(0x5742fb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B5742fe:{NFSU2_TR(0x5742fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B574301:{NFSU2_TR(0x574301);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B574303:{NFSU2_TR(0x574303);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B574307:{NFSU2_TR(0x574307);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B57430a:{NFSU2_TR(0x57430a);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B57430c:{NFSU2_TR(0x57430c);
__builtin_memmove((R+4),(R+20),4);
}
B57430e:{NFSU2_TR(0x57430e);
w4(R+4,u32(0-u32(r4(R+4))));
}
B574310:{NFSU2_TR(0x574310);
__builtin_memmove((R+24),(R+8),4);
}
B574312:{NFSU2_TR(0x574312);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B574315:{NFSU2_TR(0x574315);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B574317:{NFSU2_TR(0x574317);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B57431a:L57431a:{c.instructions+=6;NFSU2_TR(0x57431a);
__builtin_memmove((R+4),(R+24),4);
}
B57431c:{NFSU2_TR(0x57431c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B57431f:{NFSU2_TR(0x57431f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B574322:{NFSU2_TR(0x574322);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B574325:{NFSU2_TR(0x574325);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574329:{NFSU2_TR(0x574329);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L57434a;}}
}
B57432b:L57432b:{c.instructions+=12;NFSU2_TR(0x57432b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B57432e:{NFSU2_TR(0x57432e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B574331:{NFSU2_TR(0x574331);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B574333:{NFSU2_TR(0x574333);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B574337:{NFSU2_TR(0x574337);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B57433a:{NFSU2_TR(0x57433a);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B57433c:{NFSU2_TR(0x57433c);
__builtin_memmove((R+4),(R+20),4);
}
B57433e:{NFSU2_TR(0x57433e);
w4(R+4,u32(0-u32(r4(R+4))));
}
B574340:{NFSU2_TR(0x574340);
__builtin_memmove((R+24),(R+8),4);
}
B574342:{NFSU2_TR(0x574342);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B574345:{NFSU2_TR(0x574345);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B574347:{NFSU2_TR(0x574347);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B57434a:L57434a:{c.instructions+=8;NFSU2_TR(0x57434a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57434e:{NFSU2_TR(0x57434e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B574351:{NFSU2_TR(0x574351);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B574353:{NFSU2_TR(0x574353);
w4(R+4,u32(0x1ull));
}
B574358:{NFSU2_TR(0x574358);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57435c:{NFSU2_TR(0x57435c);
__builtin_memmove((R+4),(R+0),4);
}
B57435e:{NFSU2_TR(0x57435e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574362:{NFSU2_TR(0x574362);
{goto L5743ab;}
}
B574364:L574364:{c.instructions+=2;NFSU2_TR(0x574364);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B574366:{NFSU2_TR(0x574366);
if(r1(R+518)){{goto L574379;}}
}
B574368:L574368:{c.instructions+=7;NFSU2_TR(0x574368);
w4(R+4,u32(0x20ull));
}
B57436d:{NFSU2_TR(0x57436d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B57436f:{NFSU2_TR(0x57436f);
__builtin_memmove((R+12),(R+24),4);
}
B574371:{NFSU2_TR(0x574371);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B574373:{NFSU2_TR(0x574373);
__builtin_memmove((R+4),(R+0),4);
}
B574375:{NFSU2_TR(0x574375);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B574377:{NFSU2_TR(0x574377);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+0))));
}
B574379:L574379:{c.instructions+=2;NFSU2_TR(0x574379);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57437b:{NFSU2_TR(0x57437b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57439c;}}
}
B57437d:L57437d:{c.instructions+=12;NFSU2_TR(0x57437d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B574380:{NFSU2_TR(0x574380);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B574383:{NFSU2_TR(0x574383);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B574385:{NFSU2_TR(0x574385);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B574389:{NFSU2_TR(0x574389);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B57438c:{NFSU2_TR(0x57438c);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B57438e:{NFSU2_TR(0x57438e);
__builtin_memmove((R+4),(R+20),4);
}
B574390:{NFSU2_TR(0x574390);
w4(R+4,u32(0-u32(r4(R+4))));
}
B574392:{NFSU2_TR(0x574392);
__builtin_memmove((R+24),(R+8),4);
}
B574394:{NFSU2_TR(0x574394);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B574397:{NFSU2_TR(0x574397);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B574399:{NFSU2_TR(0x574399);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B57439c:L57439c:{c.instructions+=4;NFSU2_TR(0x57439c);
w4(R+4,u32(0x1ull));
}
B5743a1:{NFSU2_TR(0x5743a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5743a5:{NFSU2_TR(0x5743a5);
__builtin_memmove((R+4),(R+0),4);
}
B5743a7:{NFSU2_TR(0x5743a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5743ab:L5743ab:{c.instructions+=3;NFSU2_TR(0x5743ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B5743ad:{NFSU2_TR(0x5743ad);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B5743b1:{NFSU2_TR(0x5743b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5743b5:L5743b5:{c.instructions+=2;NFSU2_TR(0x5743b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5743b7:{NFSU2_TR(0x5743b7);
if(r1(R+518)){{goto L5743d2;}}
}
B5743b9:L5743b9:{c.instructions+=3;NFSU2_TR(0x5743b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5743bd:{NFSU2_TR(0x5743bd);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B5743bf:{NFSU2_TR(0x5743bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5743c2:L5743c2:{c.instructions+=4;NFSU2_TR(0x5743c2);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B5743c4:{NFSU2_TR(0x5743c4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5743c5:{NFSU2_TR(0x5743c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5743c7:{NFSU2_TR(0x5743c7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5743c2u);}goto L5743c2;}}
}
B5743c9:L5743c9:{c.instructions+=2;NFSU2_TR(0x5743c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5743cd:{NFSU2_TR(0x5743cd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574070u);}goto L574070;}
}
B5743d2:L5743d2:{c.instructions+=5;NFSU2_TR(0x5743d2);
__builtin_memmove((R+0),(R+24),4);
}
B5743d4:{NFSU2_TR(0x5743d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5743d7:{NFSU2_TR(0x5743d7);
w4(R+24,shl<u32>(r4(R+24),u64(u32(0x1ull))));
}
B5743d9:{NFSU2_TR(0x5743d9);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B5743da:{NFSU2_TR(0x5743da);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5743fb;}}
}
B5743dc:L5743dc:{c.instructions+=12;NFSU2_TR(0x5743dc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B5743df:{NFSU2_TR(0x5743df);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5743e2:{NFSU2_TR(0x5743e2);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5743e4:{NFSU2_TR(0x5743e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5743e8:{NFSU2_TR(0x5743e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5743eb:{NFSU2_TR(0x5743eb);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5743ed:{NFSU2_TR(0x5743ed);
__builtin_memmove((R+4),(R+20),4);
}
B5743ef:{NFSU2_TR(0x5743ef);
w4(R+4,u32(0-u32(r4(R+4))));
}
B5743f1:{NFSU2_TR(0x5743f1);
__builtin_memmove((R+24),(R+8),4);
}
B5743f3:{NFSU2_TR(0x5743f3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B5743f6:{NFSU2_TR(0x5743f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B5743f8:{NFSU2_TR(0x5743f8);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B5743fb:L5743fb:{c.instructions+=2;NFSU2_TR(0x5743fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5743fd:{NFSU2_TR(0x5743fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57443b;}}
}
B5743ff:L5743ff:{c.instructions+=5;NFSU2_TR(0x5743ff);
__builtin_memmove((R+0),(R+24),4);
}
B574401:{NFSU2_TR(0x574401);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B574404:{NFSU2_TR(0x574404);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B574407:{NFSU2_TR(0x574407);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B57440a:{NFSU2_TR(0x57440a);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L57442b;}}
}
B57440c:L57440c:{c.instructions+=12;NFSU2_TR(0x57440c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B57440f:{NFSU2_TR(0x57440f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B574412:{NFSU2_TR(0x574412);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B574414:{NFSU2_TR(0x574414);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B574418:{NFSU2_TR(0x574418);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B57441b:{NFSU2_TR(0x57441b);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B57441d:{NFSU2_TR(0x57441d);
__builtin_memmove((R+4),(R+20),4);
}
B57441f:{NFSU2_TR(0x57441f);
w4(R+4,u32(0-u32(r4(R+4))));
}
B574421:{NFSU2_TR(0x574421);
__builtin_memmove((R+24),(R+8),4);
}
B574423:{NFSU2_TR(0x574423);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B574426:{NFSU2_TR(0x574426);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B574428:{NFSU2_TR(0x574428);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B57442b:L57442b:{c.instructions+=5;NFSU2_TR(0x57442b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57442f:{NFSU2_TR(0x57442f);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B574431:{NFSU2_TR(0x574431);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B574432:{NFSU2_TR(0x574432);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574436:{NFSU2_TR(0x574436);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574070u);}goto L574070;}
}
B57443b:L57443b:{c.instructions+=4;NFSU2_TR(0x57443b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57443f:{NFSU2_TR(0x57443f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x32fbull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B574444:{NFSU2_TR(0x574444);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B574445:{NFSU2_TR(0x574445);
if(r1(R+518)){{goto L57448d;}}
}
B574447:L574447:{c.instructions+=2;NFSU2_TR(0x574447);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb2fbull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57444c:{NFSU2_TR(0x57444c);
if(r1(R+518)){{goto L57448d;}}
}
B57444e:L57444e:{c.instructions+=2;NFSU2_TR(0x57444e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34fbull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B574453:{NFSU2_TR(0x574453);
if(r1(R+518)){{goto L57445c;}}
}
B574455:L574455:{c.instructions+=2;NFSU2_TR(0x574455);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb4fbull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57445a:{NFSU2_TR(0x57445a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5744ac;}}
}
B57445c:L57445c:{c.instructions+=7;NFSU2_TR(0x57445c);
u8 U[8];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574463:{NFSU2_TR(0x574463);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B574467:{NFSU2_TR(0x574467);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B574469:{NFSU2_TR(0x574469);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57446b:{NFSU2_TR(0x57446b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B57446d:{NFSU2_TR(0x57446d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B57446f:{NFSU2_TR(0x57446f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5744ac;}}
}
B574471:L574471:{c.instructions+=7;NFSU2_TR(0x574471);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+28,u32(r1(U+0)));
}
B574474:{NFSU2_TR(0x574474);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B574476:{NFSU2_TR(0x574476);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B574478:{NFSU2_TR(0x574478);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B57447a:{NFSU2_TR(0x57447a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B57447b:{NFSU2_TR(0x57447b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B57447d:{NFSU2_TR(0x57447d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574471u);}goto L574471;}}
}
B57447f:L57447f:{c.instructions+=6;NFSU2_TR(0x57447f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574483:{NFSU2_TR(0x574483);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B574484:{NFSU2_TR(0x574484);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B574485:{NFSU2_TR(0x574485);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B574486:{NFSU2_TR(0x574486);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x408ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x408ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x408ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57448c:{NFSU2_TR(0x57448c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57448d:L57448d:{c.instructions+=6;NFSU2_TR(0x57448d);
u8 U[8];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574494:{NFSU2_TR(0x574494);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574498:{NFSU2_TR(0x574498);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B57449a:{NFSU2_TR(0x57449a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57449c:{NFSU2_TR(0x57449c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B57449e:{NFSU2_TR(0x57449e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5744ac;}}
}
B5744a0:L5744a0:{c.instructions+=6;NFSU2_TR(0x5744a0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+24,u32(r1(U+0)));
}
B5744a3:{NFSU2_TR(0x5744a3);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B5744a5:{NFSU2_TR(0x5744a5);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B5744a7:{NFSU2_TR(0x5744a7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5744a8:{NFSU2_TR(0x5744a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5744aa:{NFSU2_TR(0x5744aa);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5744a0u);}goto L5744a0;}}
}
B5744ac:L5744ac:{c.instructions+=6;NFSU2_TR(0x5744ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5744b0:{NFSU2_TR(0x5744b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5744b1:{NFSU2_TR(0x5744b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5744b2:{NFSU2_TR(0x5744b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5744b3:{NFSU2_TR(0x5744b3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x408ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x408ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x408ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5744b9:{NFSU2_TR(0x5744b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5744c0:L5744c0:{c.instructions+=4;NFSU2_TR(0x5744c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5744c1:{NFSU2_TR(0x5744c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5744c5:{NFSU2_TR(0x5744c5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x46465548ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5744cb:{NFSU2_TR(0x5744cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5744e8;}}
}
B5744cd:L5744cd:{c.instructions+=2;NFSU2_TR(0x5744cd);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5744d1:{NFSU2_TR(0x5744d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5744e8;}}
}
B5744d3:L5744d3:{c.instructions+=4;NFSU2_TR(0x5744d3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5744d7:{NFSU2_TR(0x5744d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5744d8:{NFSU2_TR(0x5744d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5744db:{NFSU2_TR(0x5744db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5744e0ull));
TAIL_STATIC(0x573840u,573);
}
B5744e0:L5744e0:{c.instructions+=4;NFSU2_TR(0x5744e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5744e3:{NFSU2_TR(0x5744e3);
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
B5744e6:{NFSU2_TR(0x5744e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5744e7:{NFSU2_TR(0x5744e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5744e8:L5744e8:{c.instructions+=3;NFSU2_TR(0x5744e8);
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
B5744ea:{NFSU2_TR(0x5744ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5744eb:{NFSU2_TR(0x5744eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5744f0:L5744f0:{c.instructions+=3;NFSU2_TR(0x5744f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5744f4:{NFSU2_TR(0x5744f4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x57574152ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5744fa:{NFSU2_TR(0x5744fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L574522;}}
}
B5744fc:L5744fc:{c.instructions+=2;NFSU2_TR(0x5744fc);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B574500:{NFSU2_TR(0x574500);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L574522;}}
}
B574502:L574502:{c.instructions+=7;NFSU2_TR(0x574502);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B574505:{NFSU2_TR(0x574505);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574506:{NFSU2_TR(0x574506);
__builtin_memmove((R+8),(R+4),4);
}
B574508:{NFSU2_TR(0x574508);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574509:{NFSU2_TR(0x574509);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57450d:{NFSU2_TR(0x57450d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B574510:{NFSU2_TR(0x574510);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B574513:L574513:{c.instructions+=1;NFSU2_TR(0x574513);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L574515;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574513u);}goto L574513;}
}
B574515:L574515:{c.instructions+=2;NFSU2_TR(0x574515);
__builtin_memmove((R+4),(R+8),4);
}
B574517:{NFSU2_TR(0x574517);
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
B57451a:L57451a:{c.instructions+=1;NFSU2_TR(0x57451a);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L57451c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57451au);}goto L57451a;}
}
B57451c:L57451c:{c.instructions+=4;NFSU2_TR(0x57451c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57451f:{NFSU2_TR(0x57451f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B574520:{NFSU2_TR(0x574520);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B574521:{NFSU2_TR(0x574521);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574522:L574522:{c.instructions+=2;NFSU2_TR(0x574522);
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
B574524:{NFSU2_TR(0x574524);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574530:L574530:{c.instructions+=7;NFSU2_TR(0x574530);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B574534:{NFSU2_TR(0x574534);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B574536:{NFSU2_TR(0x574536);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574537:{NFSU2_TR(0x574537);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574538:{NFSU2_TR(0x574538);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574539:{NFSU2_TR(0x574539);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57453a:{NFSU2_TR(0x57453a);
if(r1(R+518)){{goto L574625;}}
}
B574540:L574540:{c.instructions+=3;NFSU2_TR(0x574540);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B574544:{NFSU2_TR(0x574544);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B574546:{NFSU2_TR(0x574546);
if(r1(R+518)){{goto L574625;}}
}
B57454c:L57454c:{c.instructions+=3;NFSU2_TR(0x57454c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x504d4f43ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B574552:{NFSU2_TR(0x574552);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B574555:{NFSU2_TR(0x574555);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L574625;}}
}
B57455b:L57455b:{c.instructions+=7;NFSU2_TR(0x57455b);
w4(R+8,u32(0x1ull));
}
B574560:{NFSU2_TR(0x574560);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B574564:{NFSU2_TR(0x574564);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B574567:{NFSU2_TR(0x574567);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57456a:{NFSU2_TR(0x57456a);
__builtin_memmove((R+0),(R+12),4);
}
B57456c:{NFSU2_TR(0x57456c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574570:{NFSU2_TR(0x574570);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57458d;}}
}
B574572:L574572:{c.instructions+=4;NFSU2_TR(0x574572);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B574575:{NFSU2_TR(0x574575);
__builtin_memmove((R+0),(R+4),4);
}
B574577:{NFSU2_TR(0x574577);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B57457a:{NFSU2_TR(0x57457a);
__builtin_memmove((R+28),(R+12),4);
}
B57457c:L57457c:{c.instructions+=1;NFSU2_TR(0x57457c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L57457e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57457cu);}goto L57457c;}
}
B57457e:L57457e:{c.instructions+=2;NFSU2_TR(0x57457e);
__builtin_memmove((R+4),(R+0),4);
}
B574580:{NFSU2_TR(0x574580);
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
B574583:L574583:{c.instructions+=1;NFSU2_TR(0x574583);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L574585;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574583u);}goto L574583;}
}
B574585:L574585:{c.instructions+=6;NFSU2_TR(0x574585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B574586:{NFSU2_TR(0x574586);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B574587:{NFSU2_TR(0x574587);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57458a:{NFSU2_TR(0x57458a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57458b:{NFSU2_TR(0x57458b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57458c:{NFSU2_TR(0x57458c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57458d:L57458d:{c.instructions+=2;NFSU2_TR(0x57458d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57458f:{NFSU2_TR(0x57458f);
if(r1(R+518)){{goto L57461e;}}
}
B574595:L574595:{c.instructions+=2;NFSU2_TR(0x574595);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B574598:{NFSU2_TR(0x574598);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5745ac;}}
}
B57459a:L57459a:{c.instructions+=7;NFSU2_TR(0x57459a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+8,u32(r1(U+0)));
}
B57459d:{NFSU2_TR(0x57459d);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x10000ull))));
}
B5745a3:{NFSU2_TR(0x5745a3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5745a5:{NFSU2_TR(0x5745a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+5),(U+4),1);
}
B5745a8:{NFSU2_TR(0x5745a8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5745a9:{NFSU2_TR(0x5745a9);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5745ab:{NFSU2_TR(0x5745ab);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5745ac:L5745ac:{c.instructions+=6;NFSU2_TR(0x5745ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5745af:{NFSU2_TR(0x5745af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B5745b1:{NFSU2_TR(0x5745b1);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(R+28))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5745b3:{NFSU2_TR(0x5745b3);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffff1ull))));
}
B5745b6:{NFSU2_TR(0x5745b6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5745b9:{NFSU2_TR(0x5745b9);
__builtin_memmove((R+16),(R+16),4);
}
B5745c0:L5745c0:{c.instructions+=2;NFSU2_TR(0x5745c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5745c3:{NFSU2_TR(0x5745c3);
if(r1(R+518)){{goto L574603;}}
}
B5745c5:L5745c5:{c.instructions+=24;NFSU2_TR(0x5745c5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+20,u32(r1(U+0)));
}
B5745c8:{NFSU2_TR(0x5745c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5745cc:{NFSU2_TR(0x5745cc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5745cd:{NFSU2_TR(0x5745cd);
__builtin_memmove((R+12),(R+20),4);
}
B5745cf:{NFSU2_TR(0x5745cf);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xf0ull))));
}
B5745d5:{NFSU2_TR(0x5745d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B5745d8:{NFSU2_TR(0x5745d8);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B5745da:{NFSU2_TR(0x5745da);
__builtin_memmove((R+4),(R+0),4);
}
B5745dc:{NFSU2_TR(0x5745dc);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B5745de:{NFSU2_TR(0x5745de);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+12),(U+0),1);
}
B5745e0:{NFSU2_TR(0x5745e0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5745e1:{NFSU2_TR(0x5745e1);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B5745e3:{NFSU2_TR(0x5745e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5745e6:{NFSU2_TR(0x5745e6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5745e7:{NFSU2_TR(0x5745e7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5745e8:{NFSU2_TR(0x5745e8);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B5745ea:{NFSU2_TR(0x5745ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5745ed:{NFSU2_TR(0x5745ed);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5745ee:{NFSU2_TR(0x5745ee);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5745ef:{NFSU2_TR(0x5745ef);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B5745f1:{NFSU2_TR(0x5745f1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5745f2:{NFSU2_TR(0x5745f2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5745f3:{NFSU2_TR(0x5745f3);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xfull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B5745f6:{NFSU2_TR(0x5745f6);
if(r1(R+518)){{goto L574609;}}
}
B5745f8:L5745f8:{c.instructions+=6;NFSU2_TR(0x5745f8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+12),(U+0),1);
}
B5745fa:{NFSU2_TR(0x5745fa);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B5745fc:{NFSU2_TR(0x5745fc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5745fd:{NFSU2_TR(0x5745fd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5745fe:{NFSU2_TR(0x5745fe);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B5745ff:{NFSU2_TR(0x5745ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5745f8u);}goto L5745f8;}}
}
B574601:L574601:{c.instructions+=1;NFSU2_TR(0x574601);
{goto L574609;}
}
B574603:L574603:{c.instructions+=4;NFSU2_TR(0x574603);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B574605:{NFSU2_TR(0x574605);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B574607:{NFSU2_TR(0x574607);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B574608:{NFSU2_TR(0x574608);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B574609:L574609:{c.instructions+=3;NFSU2_TR(0x574609);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B57460b:{NFSU2_TR(0x57460b);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B57460c:{NFSU2_TR(0x57460c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5745c0u);}goto L5745c0;}}
}
B57460e:L57460e:{c.instructions+=3;NFSU2_TR(0x57460e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B574612:{NFSU2_TR(0x574612);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B574614:{NFSU2_TR(0x574614);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574595u);}goto L574595;}}
}
B57461a:L57461a:{c.instructions+=1;NFSU2_TR(0x57461a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57461e:L57461e:{c.instructions+=6;NFSU2_TR(0x57461e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57461f:{NFSU2_TR(0x57461f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B574620:{NFSU2_TR(0x574620);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B574621:{NFSU2_TR(0x574621);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B574623:{NFSU2_TR(0x574623);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B574624:{NFSU2_TR(0x574624);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574625:L574625:{c.instructions+=6;NFSU2_TR(0x574625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B574626:{NFSU2_TR(0x574626);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B574627:{NFSU2_TR(0x574627);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B574628:{NFSU2_TR(0x574628);
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
B57462a:{NFSU2_TR(0x57462a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57462b:{NFSU2_TR(0x57462b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574630:L574630:{c.instructions+=4;NFSU2_TR(0x574630);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B574634:{NFSU2_TR(0x574634);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B574636:{NFSU2_TR(0x574636);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x57574152ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x57574152ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57463b:{NFSU2_TR(0x57463b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L574659;}}
}
B57463d:L57463d:{c.instructions+=1;NFSU2_TR(0x57463d);
if(r1(R+518)){{goto L57464d;}}
}
B57463f:L57463f:{c.instructions+=2;NFSU2_TR(0x57463f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x46465548ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B574644:{NFSU2_TR(0x574644);
if(r1(R+518)){{goto L57464d;}}
}
B574646:L574646:{c.instructions+=2;NFSU2_TR(0x574646);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x504d4f43ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57464b:{NFSU2_TR(0x57464b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L574660;}}
}
B57464d:L57464d:{c.instructions+=5;NFSU2_TR(0x57464d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B574650:{NFSU2_TR(0x574650);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B574652:{NFSU2_TR(0x574652);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x1ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B574655:{NFSU2_TR(0x574655);
__builtin_memmove((R+0),(R+518),1);
}
B574658:{NFSU2_TR(0x574658);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574659:L574659:{c.instructions+=2;NFSU2_TR(0x574659);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5a4c444aull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57465e:{NFSU2_TR(0x57465e);
if(r1(R+518)){{goto L574663;}}
}
B574660:L574660:{c.instructions+=2;NFSU2_TR(0x574660);
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
B574662:{NFSU2_TR(0x574662);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574663:L574663:{c.instructions+=5;NFSU2_TR(0x574663);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B574666:{NFSU2_TR(0x574666);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B574668:{NFSU2_TR(0x574668);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x2ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B57466b:{NFSU2_TR(0x57466b);
__builtin_memmove((R+0),(R+518),1);
}
B57466e:{NFSU2_TR(0x57466e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574670:L574670:{c.instructions+=3;NFSU2_TR(0x574670);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B574674:{NFSU2_TR(0x574674);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B574676:{NFSU2_TR(0x574676);
if(r1(R+518)){{goto L5746d4;}}
}
B574678:L574678:{c.instructions+=3;NFSU2_TR(0x574678);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57467c:{NFSU2_TR(0x57467c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57467e:{NFSU2_TR(0x57467e);
if(r1(R+518)){{goto L5746d4;}}
}
B574680:L574680:{c.instructions+=3;NFSU2_TR(0x574680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B574682:{NFSU2_TR(0x574682);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x57574152ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x57574152ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B574687:{NFSU2_TR(0x574687);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5746c0;}}
}
B574689:L574689:{c.instructions+=1;NFSU2_TR(0x574689);
if(r1(R+518)){{goto L5746b3;}}
}
B57468b:L57468b:{c.instructions+=2;NFSU2_TR(0x57468b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x46465548ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B574690:{NFSU2_TR(0x574690);
if(r1(R+518)){{goto L5746a6;}}
}
B574692:L574692:{c.instructions+=2;NFSU2_TR(0x574692);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x504d4f43ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B574697:{NFSU2_TR(0x574697);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5746d4;}}
}
B574699:L574699:{c.instructions+=3;NFSU2_TR(0x574699);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57469d:{NFSU2_TR(0x57469d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5746a1:{NFSU2_TR(0x5746a1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574530u);}goto L574530;}
}
B5746a6:L5746a6:{c.instructions+=3;NFSU2_TR(0x5746a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5746aa:{NFSU2_TR(0x5746aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5746ae:{NFSU2_TR(0x5746ae);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5744c0u);}goto L5744c0;}
}
B5746b3:L5746b3:{c.instructions+=3;NFSU2_TR(0x5746b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5746b7:{NFSU2_TR(0x5746b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5746bb:{NFSU2_TR(0x5746bb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5744f0u);}goto L5744f0;}
}
B5746c0:L5746c0:{c.instructions+=2;NFSU2_TR(0x5746c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5a4c444aull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5746c5:{NFSU2_TR(0x5746c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5746d4;}}
}
B5746c7:L5746c7:{c.instructions+=3;NFSU2_TR(0x5746c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5746cb:{NFSU2_TR(0x5746cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5746cf:{NFSU2_TR(0x5746cf);
TAIL_STATIC(0x573700u,573);
}
B5746d4:L5746d4:{c.instructions+=2;NFSU2_TR(0x5746d4);
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
B5746d6:{NFSU2_TR(0x5746d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5746e0:L5746e0:{c.instructions+=8;NFSU2_TR(0x5746e0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5746e4:{NFSU2_TR(0x5746e4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5746e6:{NFSU2_TR(0x5746e6);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5746e8:{NFSU2_TR(0x5746e8);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5746eb:{NFSU2_TR(0x5746eb);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5746ed:{NFSU2_TR(0x5746ed);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5746ef:{NFSU2_TR(0x5746ef);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5746f2:{NFSU2_TR(0x5746f2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L574726;}}
}
B5746f4:L5746f4:{c.instructions+=8;NFSU2_TR(0x5746f4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5746f8:{NFSU2_TR(0x5746f8);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5746fb:{NFSU2_TR(0x5746fb);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5746fd:{NFSU2_TR(0x5746fd);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574700:{NFSU2_TR(0x574700);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B574702:{NFSU2_TR(0x574702);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574704:{NFSU2_TR(0x574704);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B574707:{NFSU2_TR(0x574707);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L574726;}}
}
B574709:L574709:{c.instructions+=8;NFSU2_TR(0x574709);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57470d:{NFSU2_TR(0x57470d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B574710:{NFSU2_TR(0x574710);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B574712:{NFSU2_TR(0x574712);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574715:{NFSU2_TR(0x574715);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B574717:{NFSU2_TR(0x574717);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574719:{NFSU2_TR(0x574719);
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
B57471c:{NFSU2_TR(0x57471c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L574726;}}
}
B57471e:L57471e:{c.instructions+=2;NFSU2_TR(0x57471e);
w4(R+0,u32(0x1ull));
}
B574723:{NFSU2_TR(0x574723);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574726:L574726:{c.instructions+=2;NFSU2_TR(0x574726);
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
B574728:{NFSU2_TR(0x574728);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574730:L574730:{c.instructions+=11;NFSU2_TR(0x574730);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574734:{NFSU2_TR(0x574734);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B574738:{NFSU2_TR(0x574738);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574739:{NFSU2_TR(0x574739);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57473a:{NFSU2_TR(0x57473a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57473b:{NFSU2_TR(0x57473b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B57473d:{NFSU2_TR(0x57473d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57473f:{NFSU2_TR(0x57473f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574740:{NFSU2_TR(0x574740);
__builtin_memmove((R+24),(R+4),4);
}
B574742:{NFSU2_TR(0x574742);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574746:{NFSU2_TR(0x574746);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5747c5;}}
}
B574748:L574748:{c.instructions+=3;NFSU2_TR(0x574748);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B57474c:{NFSU2_TR(0x57474c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B57474f:{NFSU2_TR(0x57474f);
}
B574750:L574750:{c.instructions+=13;NFSU2_TR(0x574750);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B574753:{NFSU2_TR(0x574753);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574757:{NFSU2_TR(0x574757);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B57475a:{NFSU2_TR(0x57475a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57475c:{NFSU2_TR(0x57475c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B57475f:{NFSU2_TR(0x57475f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B574761:{NFSU2_TR(0x574761);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B574763:{NFSU2_TR(0x574763);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B574765:{NFSU2_TR(0x574765);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574768:{NFSU2_TR(0x574768);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B57476a:{NFSU2_TR(0x57476a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57476c:{NFSU2_TR(0x57476c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B57476f:{NFSU2_TR(0x57476f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5747bd;}}
}
B574771:L574771:{c.instructions+=8;NFSU2_TR(0x574771);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574775:{NFSU2_TR(0x574775);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B574778:{NFSU2_TR(0x574778);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B57477a:{NFSU2_TR(0x57477a);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57477d:{NFSU2_TR(0x57477d);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B57477f:{NFSU2_TR(0x57477f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574781:{NFSU2_TR(0x574781);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B574784:{NFSU2_TR(0x574784);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5747bd;}}
}
B574786:L574786:{c.instructions+=8;NFSU2_TR(0x574786);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57478a:{NFSU2_TR(0x57478a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B57478d:{NFSU2_TR(0x57478d);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B57478f:{NFSU2_TR(0x57478f);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574792:{NFSU2_TR(0x574792);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B574794:{NFSU2_TR(0x574794);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574796:{NFSU2_TR(0x574796);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B574799:{NFSU2_TR(0x574799);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5747bd;}}
}
B57479b:L57479b:{c.instructions+=2;NFSU2_TR(0x57479b);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
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
B5747a0:{NFSU2_TR(0x5747a0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5747ce;}}
}
B5747a2:L5747a2:{c.instructions+=8;NFSU2_TR(0x5747a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5747a6:{NFSU2_TR(0x5747a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5747aa:{NFSU2_TR(0x5747aa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5747ab:{NFSU2_TR(0x5747ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5747ac:{NFSU2_TR(0x5747ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5747ad:{NFSU2_TR(0x5747ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5747ae:{NFSU2_TR(0x5747ae);
__builtin_memmove((R+4),(R+24),4);
}
B5747b0:{NFSU2_TR(0x5747b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5747b5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574730u);}goto L574730;}
}
B5747b5:L5747b5:{c.instructions+=2;NFSU2_TR(0x5747b5);
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
B5747b7:{NFSU2_TR(0x5747b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5747c7;}}
}
B5747b9:L5747b9:{c.instructions+=1;NFSU2_TR(0x5747b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5747bd:L5747bd:{c.instructions+=4;NFSU2_TR(0x5747bd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5747be:{NFSU2_TR(0x5747be);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B5747c1:{NFSU2_TR(0x5747c1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5747c3:{NFSU2_TR(0x5747c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574750u);}goto L574750;}}
}
B5747c5:L5747c5:{c.instructions+=1;NFSU2_TR(0x5747c5);
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
B5747c7:L5747c7:{c.instructions+=5;NFSU2_TR(0x5747c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5747c8:{NFSU2_TR(0x5747c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5747c9:{NFSU2_TR(0x5747c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5747ca:{NFSU2_TR(0x5747ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5747cb:{NFSU2_TR(0x5747cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5747ce:L5747ce:{c.instructions+=6;NFSU2_TR(0x5747ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5747cf:{NFSU2_TR(0x5747cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5747d0:{NFSU2_TR(0x5747d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5747d1:{NFSU2_TR(0x5747d1);
__builtin_memmove((R+0),(R+4),4);
}
B5747d3:{NFSU2_TR(0x5747d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5747d4:{NFSU2_TR(0x5747d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5747e0:L5747e0:{c.instructions+=5;NFSU2_TR(0x5747e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5747e1:{NFSU2_TR(0x5747e1);
__builtin_memmove((R+12),(R+4),4);
}
B5747e3:{NFSU2_TR(0x5747e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5747e5:{NFSU2_TR(0x5747e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5747e7:{NFSU2_TR(0x5747e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5747ef;}}
}
B5747e9:L5747e9:{c.instructions+=3;NFSU2_TR(0x5747e9);
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
B5747eb:{NFSU2_TR(0x5747eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5747ec:{NFSU2_TR(0x5747ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5747ef:L5747ef:{c.instructions+=9;NFSU2_TR(0x5747ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5747f3:{NFSU2_TR(0x5747f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5747f4:{NFSU2_TR(0x5747f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5747f8:{NFSU2_TR(0x5747f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5747f9:{NFSU2_TR(0x5747f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5747fd:{NFSU2_TR(0x5747fd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5747fe:{NFSU2_TR(0x5747fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5747ff:{NFSU2_TR(0x5747ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574800:{NFSU2_TR(0x574800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x574805ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5746e0u);}goto L5746e0;}
}
B574805:L574805:{c.instructions+=2;NFSU2_TR(0x574805);
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
B574807:{NFSU2_TR(0x574807);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57480f;}}
}
B574809:L574809:{c.instructions+=4;NFSU2_TR(0x574809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57480a:{NFSU2_TR(0x57480a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57480b:{NFSU2_TR(0x57480b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57480c:{NFSU2_TR(0x57480c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57480f:L57480f:{c.instructions+=2;NFSU2_TR(0x57480f);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
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
B574814:{NFSU2_TR(0x574814);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L57481e;}}
}
B574816:L574816:{c.instructions+=5;NFSU2_TR(0x574816);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B574817:{NFSU2_TR(0x574817);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B574818:{NFSU2_TR(0x574818);
__builtin_memmove((R+0),(R+4),4);
}
B57481a:{NFSU2_TR(0x57481a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57481b:{NFSU2_TR(0x57481b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57481e:L57481e:{c.instructions+=6;NFSU2_TR(0x57481e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57481f:{NFSU2_TR(0x57481f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574820:{NFSU2_TR(0x574820);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574821:{NFSU2_TR(0x574821);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574822:{NFSU2_TR(0x574822);
__builtin_memmove((R+4),(R+12),4);
}
B574824:{NFSU2_TR(0x574824);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x574829ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574730u);}goto L574730;}
}
B574829:L574829:{c.instructions+=4;NFSU2_TR(0x574829);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57482a:{NFSU2_TR(0x57482a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57482b:{NFSU2_TR(0x57482b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57482c:{NFSU2_TR(0x57482c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574830:L574830:{c.instructions+=19;NFSU2_TR(0x574830);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574833:{NFSU2_TR(0x574833);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574836:{NFSU2_TR(0x574836);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B574838:{NFSU2_TR(0x574838);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B57483a:{NFSU2_TR(0x57483a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57483d:{NFSU2_TR(0x57483d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574840:{NFSU2_TR(0x574840);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574843:{NFSU2_TR(0x574843);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574846:{NFSU2_TR(0x574846);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B574848:{NFSU2_TR(0x574848);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B57484a:{NFSU2_TR(0x57484a);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B57484c:{NFSU2_TR(0x57484c);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57484f:{NFSU2_TR(0x57484f);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574855:{NFSU2_TR(0x574855);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B574858:{NFSU2_TR(0x574858);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57485b:{NFSU2_TR(0x57485b);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B57485d:{NFSU2_TR(0x57485d);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B57485f:{NFSU2_TR(0x57485f);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574862:{NFSU2_TR(0x574862);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574870:L574870:{c.instructions+=8;NFSU2_TR(0x574870);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574874:{NFSU2_TR(0x574874);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574877:{NFSU2_TR(0x574877);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B57487a:{NFSU2_TR(0x57487a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57487e:{NFSU2_TR(0x57487e);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574881:{NFSU2_TR(0x574881);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574885:{NFSU2_TR(0x574885);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574888:{NFSU2_TR(0x574888);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574890:L574890:{c.instructions+=7;NFSU2_TR(0x574890);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574894:{NFSU2_TR(0x574894);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574897:{NFSU2_TR(0x574897);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57489d:{NFSU2_TR(0x57489d);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5748a0:{NFSU2_TR(0x5748a0);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B5748a2:{NFSU2_TR(0x5748a2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5748a4:{NFSU2_TR(0x5748a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5748b0:L5748b0:{c.instructions+=2;NFSU2_TR(0x5748b0);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5748b3:{NFSU2_TR(0x5748b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5748c0:L5748c0:{c.instructions+=20;NFSU2_TR(0x5748c0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5748c6:{NFSU2_TR(0x5748c6);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5748c9:{NFSU2_TR(0x5748c9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5748cb:{NFSU2_TR(0x5748cb);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5748ce:{NFSU2_TR(0x5748ce);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5748d0:{NFSU2_TR(0x5748d0);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5748d3:{NFSU2_TR(0x5748d3);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5748d9:{NFSU2_TR(0x5748d9);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5748dc:{NFSU2_TR(0x5748dc);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B5748de:{NFSU2_TR(0x5748de);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5748e0:{NFSU2_TR(0x5748e0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5748e2:{NFSU2_TR(0x5748e2);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5748e5:{NFSU2_TR(0x5748e5);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B5748e7:{NFSU2_TR(0x5748e7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5748e9:{NFSU2_TR(0x5748e9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5748eb:{NFSU2_TR(0x5748eb);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5748ed:{NFSU2_TR(0x5748ed);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5748f1:{NFSU2_TR(0x5748f1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5748f3:{NFSU2_TR(0x5748f3);
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
B5748f6:{NFSU2_TR(0x5748f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L574909;}}
}
B5748f8:L5748f8:{c.instructions+=6;NFSU2_TR(0x5748f8);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5748fa:{NFSU2_TR(0x5748fa);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5748fe:{NFSU2_TR(0x5748fe);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574901:{NFSU2_TR(0x574901);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574904:{NFSU2_TR(0x574904);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B574906:{NFSU2_TR(0x574906);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574909:L574909:{c.instructions+=3;NFSU2_TR(0x574909);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B57490b:{NFSU2_TR(0x57490b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B57490d:{NFSU2_TR(0x57490d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574910:L574910:{c.instructions+=34;NFSU2_TR(0x574910);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B574913:{NFSU2_TR(0x574913);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574919:{NFSU2_TR(0x574919);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B57491b:{NFSU2_TR(0x57491b);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B57491e:{NFSU2_TR(0x57491e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B574920:{NFSU2_TR(0x574920);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574923:{NFSU2_TR(0x574923);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B574925:{NFSU2_TR(0x574925);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574929:{NFSU2_TR(0x574929);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57492f:{NFSU2_TR(0x57492f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B574931:{NFSU2_TR(0x574931);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574934:{NFSU2_TR(0x574934);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57493a:{NFSU2_TR(0x57493a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B57493e:{NFSU2_TR(0x57493e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B574940:{NFSU2_TR(0x574940);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B574942:{NFSU2_TR(0x574942);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574946:{NFSU2_TR(0x574946);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B574948:{NFSU2_TR(0x574948);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57494c:{NFSU2_TR(0x57494c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B57494e:{NFSU2_TR(0x57494e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574952:{NFSU2_TR(0x574952);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B574954:{NFSU2_TR(0x574954);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574957:{NFSU2_TR(0x574957);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57495a:{NFSU2_TR(0x57495a);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574960:{NFSU2_TR(0x574960);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574964:{NFSU2_TR(0x574964);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B574966:{NFSU2_TR(0x574966);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B574968:{NFSU2_TR(0x574968);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B57496a:{NFSU2_TR(0x57496a);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B57496c:{NFSU2_TR(0x57496c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574970:{NFSU2_TR(0x574970);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B574974:{NFSU2_TR(0x574974);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574976:{NFSU2_TR(0x574976);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B574979:{NFSU2_TR(0x574979);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57498d;}}
}
B57497b:L57497b:{c.instructions+=5;NFSU2_TR(0x57497b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57497f:{NFSU2_TR(0x57497f);
w1(R+8,u8(0x1ull));
}
B574981:{NFSU2_TR(0x574981);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B574985:{NFSU2_TR(0x574985);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574989:{NFSU2_TR(0x574989);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57498d:L57498d:{c.instructions+=4;NFSU2_TR(0x57498d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B574991:{NFSU2_TR(0x574991);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574993:{NFSU2_TR(0x574993);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B574996:{NFSU2_TR(0x574996);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5749a0;}}
}
B574998:L574998:{c.instructions+=3;NFSU2_TR(0x574998);
__asm__ volatile(".byte 0xde,0xf1":::"memory");
}
B57499a:{NFSU2_TR(0x57499a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57499e:{NFSU2_TR(0x57499e);
{goto L5749a6;}
}
B5749a0:L5749a0:{c.instructions+=3;NFSU2_TR(0x5749a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5749a2:{NFSU2_TR(0x5749a2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5749a4:{NFSU2_TR(0x5749a4);
if(r1(R+518)){{goto L5749cf;}}
}
B5749a6:L5749a6:{c.instructions+=14;NFSU2_TR(0x5749a6);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5749a9:{NFSU2_TR(0x5749a9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5749ab:{NFSU2_TR(0x5749ab);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5749ad:{NFSU2_TR(0x5749ad);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5749b1:{NFSU2_TR(0x5749b1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5749b3:{NFSU2_TR(0x5749b3);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5749b9:{NFSU2_TR(0x5749b9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5749bb:{NFSU2_TR(0x5749bb);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5749be:{NFSU2_TR(0x5749be);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5749c0:{NFSU2_TR(0x5749c0);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5749c2:{NFSU2_TR(0x5749c2);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5749c4:{NFSU2_TR(0x5749c4);
{u32 ea_=u32(u32(7892372u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5749ca:{NFSU2_TR(0x5749ca);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5749cd:{NFSU2_TR(0x5749cd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5749cf:L5749cf:{c.instructions+=3;NFSU2_TR(0x5749cf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5749d1:{NFSU2_TR(0x5749d1);
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
B5749d4:{NFSU2_TR(0x5749d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5749e0:L5749e0:{c.instructions+=3;NFSU2_TR(0x5749e0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5749e4:{NFSU2_TR(0x5749e4);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5749e7:{NFSU2_TR(0x5749e7);
if(r1(R+518)){{goto L574afe;}}
}
B5749ed:L5749ed:{c.instructions+=2;NFSU2_TR(0x5749ed);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5749ee:{NFSU2_TR(0x5749ee);
if(r1(R+518)){{goto L574a77;}}
}
B5749f4:L5749f4:{c.instructions+=2;NFSU2_TR(0x5749f4);
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
B5749f5:{NFSU2_TR(0x5749f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L574afe;}}
}
B5749fb:L5749fb:{c.instructions+=3;NFSU2_TR(0x5749fb);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B574a00:{NFSU2_TR(0x574a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B574a07:{NFSU2_TR(0x574a07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L574a0f;}}
}
B574a09:L574a09:{c.instructions+=1;NFSU2_TR(0x574a09);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B574a0f:L574a0f:{c.instructions+=5;NFSU2_TR(0x574a0f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574a13:{NFSU2_TR(0x574a13);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B574a19:{NFSU2_TR(0x574a19);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574a1b:{NFSU2_TR(0x574a1b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B574a1e:{NFSU2_TR(0x574a1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L574a2a;}}
}
B574a20:L574a20:{c.instructions+=3;NFSU2_TR(0x574a20);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574a24:{NFSU2_TR(0x574a24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574a25:{NFSU2_TR(0x574a25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x574a2aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5748c0u);}goto L5748c0;}
}
B574a2a:L574a2a:{c.instructions+=23;NFSU2_TR(0x574a2a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574a2d:{NFSU2_TR(0x574a2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B574a2f:{NFSU2_TR(0x574a2f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B574a31:{NFSU2_TR(0x574a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574a34:{NFSU2_TR(0x574a34);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574a37:{NFSU2_TR(0x574a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574a3a:{NFSU2_TR(0x574a3a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574a3d:{NFSU2_TR(0x574a3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574a40:{NFSU2_TR(0x574a40);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B574a42:{NFSU2_TR(0x574a42);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B574a44:{NFSU2_TR(0x574a44);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B574a46:{NFSU2_TR(0x574a46);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574a49:{NFSU2_TR(0x574a49);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574a4f:{NFSU2_TR(0x574a4f);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B574a52:{NFSU2_TR(0x574a52);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574a55:{NFSU2_TR(0x574a55);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B574a57:{NFSU2_TR(0x574a57);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B574a59:{NFSU2_TR(0x574a59);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574a5c:{NFSU2_TR(0x574a5c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574a60:{NFSU2_TR(0x574a60);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B574a66:{NFSU2_TR(0x574a66);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574a68:{NFSU2_TR(0x574a68);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B574a6b:{NFSU2_TR(0x574a6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L574a77;}}
}
B574a6d:L574a6d:{c.instructions+=3;NFSU2_TR(0x574a6d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574a71:{NFSU2_TR(0x574a71);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574a72:{NFSU2_TR(0x574a72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x574a77ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574910u);}goto L574910;}
}
B574a77:L574a77:{c.instructions+=5;NFSU2_TR(0x574a77);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574a7a:{NFSU2_TR(0x574a7a);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B574a80:{NFSU2_TR(0x574a80);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574a82:{NFSU2_TR(0x574a82);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B574a85:{NFSU2_TR(0x574a85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L574a96;}}
}
B574a87:L574a87:{c.instructions+=5;NFSU2_TR(0x574a87);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574a8b:{NFSU2_TR(0x574a8b);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B574a8e:{NFSU2_TR(0x574a8e);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574a91:{NFSU2_TR(0x574a91);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574a94:{NFSU2_TR(0x574a94);
{goto L574a9d;}
}
B574a96:L574a96:{c.instructions+=1;NFSU2_TR(0x574a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B574a9d:L574a9d:{c.instructions+=5;NFSU2_TR(0x574a9d);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574aa0:{NFSU2_TR(0x574aa0);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B574aa3:{NFSU2_TR(0x574aa3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574aa5:{NFSU2_TR(0x574aa5);
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
B574aa8:{NFSU2_TR(0x574aa8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L574ace;}}
}
B574aaa:L574aaa:{c.instructions+=6;NFSU2_TR(0x574aaa);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574aad:{NFSU2_TR(0x574aad);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B574ab3:{NFSU2_TR(0x574ab3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B574ab9:{NFSU2_TR(0x574ab9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574abb:{NFSU2_TR(0x574abb);
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
B574abe:{NFSU2_TR(0x574abe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L574afe;}}
}
B574ac0:L574ac0:{c.instructions+=5;NFSU2_TR(0x574ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574ac3:{NFSU2_TR(0x574ac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574ac6:{NFSU2_TR(0x574ac6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B574ac8:{NFSU2_TR(0x574ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574acb:{NFSU2_TR(0x574acb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574ace:L574ace:{c.instructions+=18;NFSU2_TR(0x574ace);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574ad1:{NFSU2_TR(0x574ad1);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B574ad3:{NFSU2_TR(0x574ad3);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574ad6:{NFSU2_TR(0x574ad6);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B574ad8:{NFSU2_TR(0x574ad8);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574adb:{NFSU2_TR(0x574adb);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B574add:{NFSU2_TR(0x574add);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574ae0:{NFSU2_TR(0x574ae0);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B574ae2:{NFSU2_TR(0x574ae2);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574ae5:{NFSU2_TR(0x574ae5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574ae7:{NFSU2_TR(0x574ae7);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574aed:{NFSU2_TR(0x574aed);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574af0:{NFSU2_TR(0x574af0);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B574af2:{NFSU2_TR(0x574af2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B574af4:{NFSU2_TR(0x574af4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B574af6:{NFSU2_TR(0x574af6);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574af9:{NFSU2_TR(0x574af9);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574afc:{NFSU2_TR(0x574afc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B574afe:L574afe:{c.instructions+=1;NFSU2_TR(0x574afe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574b10:L574b10:{c.instructions+=9;NFSU2_TR(0x574b10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574b14:{NFSU2_TR(0x574b14);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574b17:{NFSU2_TR(0x574b17);
w4(R+8,u32(0x2ull));
}
B574b1c:{NFSU2_TR(0x574b1c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574b1e:{NFSU2_TR(0x574b1e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B574b20:{NFSU2_TR(0x574b20);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B574b23:{NFSU2_TR(0x574b23);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574b25:{NFSU2_TR(0x574b25);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B574b28:{NFSU2_TR(0x574b28);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L574b2e;}}
}
B574b2a:L574b2a:{c.instructions+=1;NFSU2_TR(0x574b2a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B574b2e:L574b2e:{c.instructions+=5;NFSU2_TR(0x574b2e);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B574b31:{NFSU2_TR(0x574b31);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B574b34:{NFSU2_TR(0x574b34);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574b36:{NFSU2_TR(0x574b36);
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
B574b39:{NFSU2_TR(0x574b39);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L574b3f;}}
}
B574b3b:L574b3b:{c.instructions+=1;NFSU2_TR(0x574b3b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B574b3f:L574b3f:{c.instructions+=1;NFSU2_TR(0x574b3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574b50:L574b50:{c.instructions+=9;NFSU2_TR(0x574b50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574b54:{NFSU2_TR(0x574b54);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574b57:{NFSU2_TR(0x574b57);
w4(R+8,u32(0x2ull));
}
B574b5c:{NFSU2_TR(0x574b5c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574b5e:{NFSU2_TR(0x574b5e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B574b61:{NFSU2_TR(0x574b61);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B574b64:{NFSU2_TR(0x574b64);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574b66:{NFSU2_TR(0x574b66);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B574b69:{NFSU2_TR(0x574b69);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L574b6f;}}
}
B574b6b:L574b6b:{c.instructions+=1;NFSU2_TR(0x574b6b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B574b6f:L574b6f:{c.instructions+=5;NFSU2_TR(0x574b6f);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B574b72:{NFSU2_TR(0x574b72);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B574b75:{NFSU2_TR(0x574b75);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574b77:{NFSU2_TR(0x574b77);
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
B574b7a:{NFSU2_TR(0x574b7a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L574b80;}}
}
B574b7c:L574b7c:{c.instructions+=1;NFSU2_TR(0x574b7c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B574b80:L574b80:{c.instructions+=1;NFSU2_TR(0x574b80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574b90:L574b90:{c.instructions+=9;NFSU2_TR(0x574b90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574b94:{NFSU2_TR(0x574b94);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574b97:{NFSU2_TR(0x574b97);
w4(R+8,u32(0x2ull));
}
B574b9c:{NFSU2_TR(0x574b9c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574b9e:{NFSU2_TR(0x574b9e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B574ba1:{NFSU2_TR(0x574ba1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B574ba3:{NFSU2_TR(0x574ba3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574ba5:{NFSU2_TR(0x574ba5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B574ba8:{NFSU2_TR(0x574ba8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L574bae;}}
}
B574baa:L574baa:{c.instructions+=1;NFSU2_TR(0x574baa);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B574bae:L574bae:{c.instructions+=5;NFSU2_TR(0x574bae);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B574bb1:{NFSU2_TR(0x574bb1);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B574bb4:{NFSU2_TR(0x574bb4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574bb6:{NFSU2_TR(0x574bb6);
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
B574bb9:{NFSU2_TR(0x574bb9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L574bbf;}}
}
B574bbb:L574bbb:{c.instructions+=1;NFSU2_TR(0x574bbb);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B574bbf:L574bbf:{c.instructions+=1;NFSU2_TR(0x574bbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574bd0:L574bd0:{c.instructions+=6;NFSU2_TR(0x574bd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574bd4:{NFSU2_TR(0x574bd4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574bd7:{NFSU2_TR(0x574bd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B574bd9:{NFSU2_TR(0x574bd9);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574bdc:{NFSU2_TR(0x574bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574bdf:{NFSU2_TR(0x574bdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574bf0:L574bf0:{c.instructions+=6;NFSU2_TR(0x574bf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B574bf2:{NFSU2_TR(0x574bf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574bf6:{NFSU2_TR(0x574bf6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B574bf8:{NFSU2_TR(0x574bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B574bfb:{NFSU2_TR(0x574bfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574bfe:{NFSU2_TR(0x574bfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574c10:L574c10:{c.instructions+=6;NFSU2_TR(0x574c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574c13:{NFSU2_TR(0x574c13);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574c17:{NFSU2_TR(0x574c17);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B574c19:{NFSU2_TR(0x574c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B574c1c:{NFSU2_TR(0x574c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574c1f:{NFSU2_TR(0x574c1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574c30:L574c30:{c.instructions+=18;NFSU2_TR(0x574c30);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574c34:{NFSU2_TR(0x574c34);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574c38:{NFSU2_TR(0x574c38);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574c3b:{NFSU2_TR(0x574c3b);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574c3e:{NFSU2_TR(0x574c3e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574c42:{NFSU2_TR(0x574c42);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574c45:{NFSU2_TR(0x574c45);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574c49:{NFSU2_TR(0x574c49);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574c4c:{NFSU2_TR(0x574c4c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574c4e:{NFSU2_TR(0x574c4e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574c52:{NFSU2_TR(0x574c52);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574c55:{NFSU2_TR(0x574c55);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574c58:{NFSU2_TR(0x574c58);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574c5c:{NFSU2_TR(0x574c5c);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574c5f:{NFSU2_TR(0x574c5f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574c63:{NFSU2_TR(0x574c63);
{u32 ea_=u32(r4(R+4)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574c66:{NFSU2_TR(0x574c66);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574c69:{NFSU2_TR(0x574c69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574c70:L574c70:{c.instructions+=6;NFSU2_TR(0x574c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574c73:{NFSU2_TR(0x574c73);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574c77:{NFSU2_TR(0x574c77);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B574c79:{NFSU2_TR(0x574c79);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B574c7c:{NFSU2_TR(0x574c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574c7f:{NFSU2_TR(0x574c7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574c90:L574c90:{c.instructions+=8;NFSU2_TR(0x574c90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574c94:{NFSU2_TR(0x574c94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574c97:{NFSU2_TR(0x574c97);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574c98:{NFSU2_TR(0x574c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574c9b:{NFSU2_TR(0x574c9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B574c9d:{NFSU2_TR(0x574c9d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574c9e:{NFSU2_TR(0x574c9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574c9f:{NFSU2_TR(0x574c9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x574ca4ull));
TAIL_STATIC(0x570ae0u,570);
}
B574ca4:L574ca4:{c.instructions+=1;NFSU2_TR(0x574ca4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574cb0:L574cb0:{c.instructions+=8;NFSU2_TR(0x574cb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574cb4:{NFSU2_TR(0x574cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574cb7:{NFSU2_TR(0x574cb7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574cb8:{NFSU2_TR(0x574cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574cbb:{NFSU2_TR(0x574cbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B574cbd:{NFSU2_TR(0x574cbd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574cbe:{NFSU2_TR(0x574cbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574cbf:{NFSU2_TR(0x574cbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x574cc4ull));
TAIL_STATIC(0x570b40u,570);
}
B574cc4:L574cc4:{c.instructions+=1;NFSU2_TR(0x574cc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574cd0:L574cd0:{c.instructions+=8;NFSU2_TR(0x574cd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574cd4:{NFSU2_TR(0x574cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574cd7:{NFSU2_TR(0x574cd7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574cd8:{NFSU2_TR(0x574cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574cdb:{NFSU2_TR(0x574cdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B574cdd:{NFSU2_TR(0x574cdd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574cde:{NFSU2_TR(0x574cde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574cdf:{NFSU2_TR(0x574cdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x574ce4ull));
TAIL_STATIC(0x570ba0u,570);
}
B574ce4:L574ce4:{c.instructions+=1;NFSU2_TR(0x574ce4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574cf0:L574cf0:{c.instructions+=8;NFSU2_TR(0x574cf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574cf4:{NFSU2_TR(0x574cf4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574cf7:{NFSU2_TR(0x574cf7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574cfa:{NFSU2_TR(0x574cfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B574cfc:{NFSU2_TR(0x574cfc);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574cff:{NFSU2_TR(0x574cff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574d02:{NFSU2_TR(0x574d02);
{u32 ea_=u32(r4(R+4)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574d05:{NFSU2_TR(0x574d05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574d10:L574d10:{c.instructions+=8;NFSU2_TR(0x574d10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574d14:{NFSU2_TR(0x574d14);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574d17:{NFSU2_TR(0x574d17);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574d1a:{NFSU2_TR(0x574d1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B574d1c:{NFSU2_TR(0x574d1c);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574d1f:{NFSU2_TR(0x574d1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574d22:{NFSU2_TR(0x574d22);
{u32 ea_=u32(r4(R+4)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574d28:{NFSU2_TR(0x574d28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574d30:L574d30:{c.instructions+=8;NFSU2_TR(0x574d30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B574d32:{NFSU2_TR(0x574d32);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574d36:{NFSU2_TR(0x574d36);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B574d38:{NFSU2_TR(0x574d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574d3b:{NFSU2_TR(0x574d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574d3e:{NFSU2_TR(0x574d3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B574d41:{NFSU2_TR(0x574d41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574d44:{NFSU2_TR(0x574d44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574d50:L574d50:{c.instructions+=8;NFSU2_TR(0x574d50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574d53:{NFSU2_TR(0x574d53);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574d57:{NFSU2_TR(0x574d57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B574d59:{NFSU2_TR(0x574d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574d5c:{NFSU2_TR(0x574d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574d5f:{NFSU2_TR(0x574d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B574d62:{NFSU2_TR(0x574d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574d65:{NFSU2_TR(0x574d65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574d70:L574d70:{c.instructions+=26;NFSU2_TR(0x574d70);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574d74:{NFSU2_TR(0x574d74);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574d78:{NFSU2_TR(0x574d78);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574d7b:{NFSU2_TR(0x574d7b);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574d7e:{NFSU2_TR(0x574d7e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574d82:{NFSU2_TR(0x574d82);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574d85:{NFSU2_TR(0x574d85);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574d89:{NFSU2_TR(0x574d89);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574d8c:{NFSU2_TR(0x574d8c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574d8e:{NFSU2_TR(0x574d8e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574d92:{NFSU2_TR(0x574d92);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574d95:{NFSU2_TR(0x574d95);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574d98:{NFSU2_TR(0x574d98);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574d9c:{NFSU2_TR(0x574d9c);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574d9f:{NFSU2_TR(0x574d9f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574da3:{NFSU2_TR(0x574da3);
{u32 ea_=u32(r4(R+4)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574da6:{NFSU2_TR(0x574da6);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574da9:{NFSU2_TR(0x574da9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574dad:{NFSU2_TR(0x574dad);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574db0:{NFSU2_TR(0x574db0);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574db3:{NFSU2_TR(0x574db3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574db7:{NFSU2_TR(0x574db7);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574dba:{NFSU2_TR(0x574dba);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574dbe:{NFSU2_TR(0x574dbe);
{u32 ea_=u32(r4(R+4)+u32(124u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574dc1:{NFSU2_TR(0x574dc1);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574dc4:{NFSU2_TR(0x574dc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574dd0:L574dd0:{c.instructions+=8;NFSU2_TR(0x574dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574dd3:{NFSU2_TR(0x574dd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574dd7:{NFSU2_TR(0x574dd7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B574dd9:{NFSU2_TR(0x574dd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574ddc:{NFSU2_TR(0x574ddc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574ddf:{NFSU2_TR(0x574ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B574de2:{NFSU2_TR(0x574de2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574de5:{NFSU2_TR(0x574de5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574df0:L574df0:{c.instructions+=12;NFSU2_TR(0x574df0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574df1:{NFSU2_TR(0x574df1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B574df5:{NFSU2_TR(0x574df5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574df6:{NFSU2_TR(0x574df6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B574dfa:{NFSU2_TR(0x574dfa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574dfb:{NFSU2_TR(0x574dfb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574dfc:{NFSU2_TR(0x574dfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B574e00:{NFSU2_TR(0x574e00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574e01:{NFSU2_TR(0x574e01);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574e02:{NFSU2_TR(0x574e02);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574e03:{NFSU2_TR(0x574e03);
__builtin_memmove((R+24),(R+4),4);
}
B574e05:{NFSU2_TR(0x574e05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x574e0aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5749e0u);}goto L5749e0;}
}
B574e0a:L574e0a:{c.instructions+=5;NFSU2_TR(0x574e0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574e0b:{NFSU2_TR(0x574e0b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574e0c:{NFSU2_TR(0x574e0c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574e0d:{NFSU2_TR(0x574e0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B574e10:{NFSU2_TR(0x574e10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x574e15ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5749e0u);}goto L5749e0;}
}
B574e15:L574e15:{c.instructions+=5;NFSU2_TR(0x574e15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574e16:{NFSU2_TR(0x574e16);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574e17:{NFSU2_TR(0x574e17);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574e18:{NFSU2_TR(0x574e18);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B574e1b:{NFSU2_TR(0x574e1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x574e20ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5749e0u);}goto L5749e0;}
}
B574e20:L574e20:{c.instructions+=5;NFSU2_TR(0x574e20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B574e21:{NFSU2_TR(0x574e21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B574e22:{NFSU2_TR(0x574e22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B574e23:{NFSU2_TR(0x574e23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B574e24:{NFSU2_TR(0x574e24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574e30:L574e30:{c.instructions+=4;NFSU2_TR(0x574e30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B574e34:{NFSU2_TR(0x574e34);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B574e38:{NFSU2_TR(0x574e38);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B574e3b:{NFSU2_TR(0x574e3b);
if(r1(R+518)){{goto L574f33;}}
}
B574e41:L574e41:{c.instructions+=2;NFSU2_TR(0x574e41);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B574e42:{NFSU2_TR(0x574e42);
if(r1(R+518)){{goto L574ecb;}}
}
B574e48:L574e48:{c.instructions+=2;NFSU2_TR(0x574e48);
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
B574e49:{NFSU2_TR(0x574e49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L574f33;}}
}
B574e4f:L574e4f:{c.instructions+=3;NFSU2_TR(0x574e4f);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B574e54:{NFSU2_TR(0x574e54);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B574e5b:{NFSU2_TR(0x574e5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L574e63;}}
}
B574e5d:L574e5d:{c.instructions+=1;NFSU2_TR(0x574e5d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B574e63:L574e63:{c.instructions+=5;NFSU2_TR(0x574e63);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574e67:{NFSU2_TR(0x574e67);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B574e6d:{NFSU2_TR(0x574e6d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574e6f:{NFSU2_TR(0x574e6f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B574e72:{NFSU2_TR(0x574e72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L574e7e;}}
}
B574e74:L574e74:{c.instructions+=3;NFSU2_TR(0x574e74);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574e78:{NFSU2_TR(0x574e78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574e79:{NFSU2_TR(0x574e79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x574e7eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5748c0u);}goto L5748c0;}
}
B574e7e:L574e7e:{c.instructions+=23;NFSU2_TR(0x574e7e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574e81:{NFSU2_TR(0x574e81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B574e83:{NFSU2_TR(0x574e83);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B574e85:{NFSU2_TR(0x574e85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574e88:{NFSU2_TR(0x574e88);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574e8b:{NFSU2_TR(0x574e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574e8e:{NFSU2_TR(0x574e8e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574e91:{NFSU2_TR(0x574e91);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574e94:{NFSU2_TR(0x574e94);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B574e96:{NFSU2_TR(0x574e96);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B574e98:{NFSU2_TR(0x574e98);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B574e9a:{NFSU2_TR(0x574e9a);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574e9d:{NFSU2_TR(0x574e9d);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574ea3:{NFSU2_TR(0x574ea3);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B574ea6:{NFSU2_TR(0x574ea6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574ea9:{NFSU2_TR(0x574ea9);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B574eab:{NFSU2_TR(0x574eab);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B574ead:{NFSU2_TR(0x574ead);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574eb0:{NFSU2_TR(0x574eb0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574eb4:{NFSU2_TR(0x574eb4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B574eba:{NFSU2_TR(0x574eba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574ebc:{NFSU2_TR(0x574ebc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B574ebf:{NFSU2_TR(0x574ebf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L574ecb;}}
}
B574ec1:L574ec1:{c.instructions+=3;NFSU2_TR(0x574ec1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574ec5:{NFSU2_TR(0x574ec5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574ec6:{NFSU2_TR(0x574ec6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x574ecbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574910u);}goto L574910;}
}
B574ecb:L574ecb:{c.instructions+=8;NFSU2_TR(0x574ecb);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574ecf:{NFSU2_TR(0x574ecf);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B574ed2:{NFSU2_TR(0x574ed2);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574ed5:{NFSU2_TR(0x574ed5);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B574ed8:{NFSU2_TR(0x574ed8);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B574edb:{NFSU2_TR(0x574edb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574edd:{NFSU2_TR(0x574edd);
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
B574ee0:{NFSU2_TR(0x574ee0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L574f06;}}
}
B574ee2:L574ee2:{c.instructions+=7;NFSU2_TR(0x574ee2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B574ee4:{NFSU2_TR(0x574ee4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B574eea:{NFSU2_TR(0x574eea);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574eed:{NFSU2_TR(0x574eed);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B574ef3:{NFSU2_TR(0x574ef3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B574ef5:{NFSU2_TR(0x574ef5);
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
B574ef8:{NFSU2_TR(0x574ef8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L574f33;}}
}
B574efa:L574efa:{c.instructions+=5;NFSU2_TR(0x574efa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574efd:{NFSU2_TR(0x574efd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B574f00:{NFSU2_TR(0x574f00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B574f02:{NFSU2_TR(0x574f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B574f05:{NFSU2_TR(0x574f05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574f06:L574f06:{c.instructions+=17;NFSU2_TR(0x574f06);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B574f08:{NFSU2_TR(0x574f08);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574f0b:{NFSU2_TR(0x574f0b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B574f0d:{NFSU2_TR(0x574f0d);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574f10:{NFSU2_TR(0x574f10);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B574f12:{NFSU2_TR(0x574f12);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574f15:{NFSU2_TR(0x574f15);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B574f17:{NFSU2_TR(0x574f17);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574f1a:{NFSU2_TR(0x574f1a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574f1c:{NFSU2_TR(0x574f1c);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B574f22:{NFSU2_TR(0x574f22);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B574f25:{NFSU2_TR(0x574f25);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B574f27:{NFSU2_TR(0x574f27);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B574f29:{NFSU2_TR(0x574f29);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B574f2b:{NFSU2_TR(0x574f2b);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B574f2e:{NFSU2_TR(0x574f2e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B574f31:{NFSU2_TR(0x574f31);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B574f33:L574f33:{c.instructions+=1;NFSU2_TR(0x574f33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574f40:L574f40:{c.instructions+=9;NFSU2_TR(0x574f40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574f41:{NFSU2_TR(0x574f41);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B574f45:{NFSU2_TR(0x574f45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574f46:{NFSU2_TR(0x574f46);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B574f4a:{NFSU2_TR(0x574f4a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574f4c:{NFSU2_TR(0x574f4c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574f4e:{NFSU2_TR(0x574f4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574f4f:{NFSU2_TR(0x574f4f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574f50:{NFSU2_TR(0x574f50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x574f55ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574e30u);}goto L574e30;}
}
B574f55:L574f55:{c.instructions+=6;NFSU2_TR(0x574f55);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574f57:{NFSU2_TR(0x574f57);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574f59:{NFSU2_TR(0x574f59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574f5a:{NFSU2_TR(0x574f5a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B574f5d:{NFSU2_TR(0x574f5d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574f5e:{NFSU2_TR(0x574f5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x574f63ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574e30u);}goto L574e30;}
}
B574f63:L574f63:{c.instructions+=4;NFSU2_TR(0x574f63);
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
B574f66:{NFSU2_TR(0x574f66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B574f67:{NFSU2_TR(0x574f67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B574f68:{NFSU2_TR(0x574f68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574f70:L574f70:{c.instructions+=16;NFSU2_TR(0x574f70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574f71:{NFSU2_TR(0x574f71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574f72:{NFSU2_TR(0x574f72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574f73:{NFSU2_TR(0x574f73);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B574f77:{NFSU2_TR(0x574f77);
__builtin_memmove((R+0),(R+28),4);
}
B574f79:{NFSU2_TR(0x574f79);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B574f7a:{NFSU2_TR(0x574f7a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B574f7d:{NFSU2_TR(0x574f7d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B574f7f:{NFSU2_TR(0x574f7f);
__builtin_memmove((R+24),(R+0),4);
}
B574f81:{NFSU2_TR(0x574f81);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574f85:{NFSU2_TR(0x574f85);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B574f88:{NFSU2_TR(0x574f88);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B574f8a:{NFSU2_TR(0x574f8a);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x7ull))));
}
B574f8d:{NFSU2_TR(0x574f8d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B574f8f:{NFSU2_TR(0x574f8f);
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
B574f91:{NFSU2_TR(0x574f91);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L574fc4;}}
}
B574f93:L574f93:{c.instructions+=2;NFSU2_TR(0x574f93);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B574f97:{NFSU2_TR(0x574f97);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574f98:L574f98:{c.instructions+=16;NFSU2_TR(0x574f98);
__builtin_memmove((R+4),(R+20),4);
}
B574f9a:{NFSU2_TR(0x574f9a);
__builtin_memmove((R+8),(R+0),4);
}
B574f9c:{NFSU2_TR(0x574f9c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r1(U+0))));
}
B574f9e:{NFSU2_TR(0x574f9e);
__builtin_memmove((R+4),(R+28),4);
}
B574fa0:{NFSU2_TR(0x574fa0);
w1(R+12,u8(0x1ull));
}
B574fa2:{NFSU2_TR(0x574fa2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+12,shl<u8>(r1(R+12),u64(r1(U+0))));
}
B574fa4:{NFSU2_TR(0x574fa4);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B574fa7:{NFSU2_TR(0x574fa7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B574fa9:{NFSU2_TR(0x574fa9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B574fab:{NFSU2_TR(0x574fab);
w1(R+12,u8(~u32(r1(R+12))));
}
B574fad:{NFSU2_TR(0x574fad);
w1(R+12,u8(u32(r1(R+12))&u32(r1(R+4))));
}
B574faf:{NFSU2_TR(0x574faf);
w1(R+8,u8(u32(r1(R+8))|u32(r1(R+12))));
}
B574fb1:{NFSU2_TR(0x574fb1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B574fb2:{NFSU2_TR(0x574fb2);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x7ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B574fb5:{NFSU2_TR(0x574fb5);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B574fb7:{NFSU2_TR(0x574fb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L574fba;}}
}
B574fb9:L574fb9:{c.instructions+=1;NFSU2_TR(0x574fb9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B574fba:L574fba:{c.instructions+=4;NFSU2_TR(0x574fba);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B574fbe:{NFSU2_TR(0x574fbe);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B574fbf:{NFSU2_TR(0x574fbf);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B574fc1:{NFSU2_TR(0x574fc1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x574f98u);}goto L574f98;}}
}
B574fc3:L574fc3:{c.instructions+=1;NFSU2_TR(0x574fc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B574fc4:L574fc4:{c.instructions+=4;NFSU2_TR(0x574fc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B574fc5:{NFSU2_TR(0x574fc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B574fc6:{NFSU2_TR(0x574fc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B574fc7:{NFSU2_TR(0x574fc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B574fd0:L574fd0:{c.instructions+=16;NFSU2_TR(0x574fd0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574fd1:{NFSU2_TR(0x574fd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B574fd5:{NFSU2_TR(0x574fd5);
__builtin_memmove((R+0),(R+12),4);
}
B574fd7:{NFSU2_TR(0x574fd7);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B574fd8:{NFSU2_TR(0x574fd8);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B574fdb:{NFSU2_TR(0x574fdb);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B574fdd:{NFSU2_TR(0x574fdd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574fde:{NFSU2_TR(0x574fde);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B574fe1:{NFSU2_TR(0x574fe1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574fe2:{NFSU2_TR(0x574fe2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B574fe6:{NFSU2_TR(0x574fe6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B574fe8:{NFSU2_TR(0x574fe8);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x7ull))));
}
B574feb:{NFSU2_TR(0x574feb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B574fed:{NFSU2_TR(0x574fed);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B574fef:{NFSU2_TR(0x574fef);
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
B574ff1:{NFSU2_TR(0x574ff1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x575011u,575);}
}
B574ff3:L574ff3:{c.instructions+=6;NFSU2_TR(0x574ff3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B574ff4:{NFSU2_TR(0x574ff4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+20,u32(r1(U+0)));
}
B574ff7:{NFSU2_TR(0x574ff7);
__builtin_memmove((R+4),(R+12),1);
}
B574ff9:{NFSU2_TR(0x574ff9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shr<u32>(r4(R+20),u64(r1(U+0))));
}
B574ffb:{NFSU2_TR(0x574ffb);
__builtin_memmove((R+4),(R+24),4);
}
B574ffd:{NFSU2_TR(0x574ffd);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0x1ull))));
TAIL_STATIC(0x575000u,575);
}
XIT:NFSU2_TR_EXIT(0x574,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
