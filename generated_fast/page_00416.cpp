#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_405(u8* __restrict R,Cpu& c);
u32 body_406(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_410(u8* __restrict R,Cpu& c);
u32 body_415(u8* __restrict R,Cpu& c);
u32 body_417(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x416,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x416,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_416(u8* __restrict R,Cpu& c);
u32 page_416(Cpu& c){return body_416(c.regs.data(),c);}
__attribute__((noinline)) u32 body_416(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x416004:goto L416004;
case 0x416008:c.instructions+=6;goto B416008;
case 0x41600e:c.instructions+=5;goto B41600e;
case 0x416011:c.instructions+=4;goto B416011;
case 0x416014:c.instructions+=3;goto B416014;
case 0x416017:c.instructions+=2;goto B416017;
case 0x41601a:c.instructions+=1;goto B41601a;
case 0x41601c:goto L41601c;
case 0x416021:goto L416021;
case 0x416024:c.instructions+=5;goto B416024;
case 0x416028:c.instructions+=4;goto B416028;
case 0x416029:c.instructions+=3;goto B416029;
case 0x41602e:c.instructions+=2;goto B41602e;
case 0x416032:c.instructions+=1;goto B416032;
case 0x416034:goto L416034;
case 0x416039:goto L416039;
case 0x41603c:c.instructions+=4;goto B41603c;
case 0x416040:c.instructions+=3;goto B416040;
case 0x416041:c.instructions+=2;goto B416041;
case 0x416046:c.instructions+=1;goto B416046;
case 0x41604a:goto L41604a;
case 0x41604d:c.instructions+=1;goto B41604d;
case 0x416052:goto L416052;
case 0x416056:c.instructions+=5;goto B416056;
case 0x41605a:c.instructions+=4;goto B41605a;
case 0x41605d:c.instructions+=3;goto B41605d;
case 0x41605f:c.instructions+=2;goto B41605f;
case 0x416062:c.instructions+=1;goto B416062;
case 0x416064:goto L416064;
case 0x41606a:c.instructions+=10;goto B41606a;
case 0x416070:c.instructions+=9;goto B416070;
case 0x416074:c.instructions+=8;goto B416074;
case 0x41607a:c.instructions+=7;goto B41607a;
case 0x41607b:c.instructions+=6;goto B41607b;
case 0x41607c:c.instructions+=5;goto B41607c;
case 0x41607e:c.instructions+=4;goto B41607e;
case 0x416081:c.instructions+=3;goto B416081;
case 0x416085:c.instructions+=2;goto B416085;
case 0x416086:c.instructions+=1;goto B416086;
case 0x416088:goto L416088;
case 0x41608d:goto L41608d;
case 0x41608f:goto L41608f;
case 0x416094:goto L416094;
case 0x416096:c.instructions+=6;goto B416096;
case 0x416099:c.instructions+=5;goto B416099;
case 0x41609c:c.instructions+=4;goto B41609c;
case 0x4160a0:c.instructions+=3;goto B4160a0;
case 0x4160aa:c.instructions+=2;goto B4160aa;
case 0x4160b4:c.instructions+=1;goto B4160b4;
case 0x4160b6:goto L4160b6;
case 0x4160ba:c.instructions+=6;goto B4160ba;
case 0x4160be:c.instructions+=5;goto B4160be;
case 0x4160bf:c.instructions+=4;goto B4160bf;
case 0x4160c5:c.instructions+=3;goto B4160c5;
case 0x4160c6:c.instructions+=2;goto B4160c6;
case 0x4160c7:c.instructions+=1;goto B4160c7;
case 0x4160cc:goto L4160cc;
case 0x4160d0:goto L4160d0;
case 0x4160d4:c.instructions+=8;goto B4160d4;
case 0x4160da:c.instructions+=7;goto B4160da;
case 0x4160e0:c.instructions+=6;goto B4160e0;
case 0x4160e6:c.instructions+=5;goto B4160e6;
case 0x4160ed:c.instructions+=4;goto B4160ed;
case 0x4160ee:c.instructions+=3;goto B4160ee;
case 0x4160f0:c.instructions+=2;goto B4160f0;
case 0x4160f1:c.instructions+=1;goto B4160f1;
case 0x416100:goto L416100;
case 0x416101:c.instructions+=2;goto B416101;
case 0x416103:c.instructions+=1;goto B416103;
case 0x416108:goto L416108;
case 0x41610d:c.instructions+=1;goto B41610d;
case 0x41610f:goto L41610f;
case 0x416110:c.instructions+=1;goto B416110;
case 0x416115:goto L416115;
case 0x416118:goto L416118;
case 0x41611a:c.instructions+=2;goto B41611a;
case 0x41611b:c.instructions+=1;goto B41611b;
case 0x416120:goto L416120;
case 0x416121:c.instructions+=14;goto B416121;
case 0x416123:c.instructions+=13;goto B416123;
case 0x416126:c.instructions+=12;goto B416126;
case 0x416129:c.instructions+=11;goto B416129;
case 0x41612a:c.instructions+=10;goto B41612a;
case 0x41612b:c.instructions+=9;goto B41612b;
case 0x41612d:c.instructions+=8;goto B41612d;
case 0x416133:c.instructions+=7;goto B416133;
case 0x416139:c.instructions+=6;goto B416139;
case 0x41613a:c.instructions+=5;goto B41613a;
case 0x41613d:c.instructions+=4;goto B41613d;
case 0x416141:c.instructions+=3;goto B416141;
case 0x416144:c.instructions+=2;goto B416144;
case 0x41614c:c.instructions+=1;goto B41614c;
case 0x416152:goto L416152;
case 0x416155:c.instructions+=3;goto B416155;
case 0x416156:c.instructions+=2;goto B416156;
case 0x416158:c.instructions+=1;goto B416158;
case 0x41615d:goto L41615d;
case 0x41615f:c.instructions+=9;goto B41615f;
case 0x416165:c.instructions+=8;goto B416165;
case 0x41616b:c.instructions+=7;goto B41616b;
case 0x41616f:c.instructions+=6;goto B41616f;
case 0x416171:c.instructions+=5;goto B416171;
case 0x416177:c.instructions+=4;goto B416177;
case 0x41617d:c.instructions+=3;goto B41617d;
case 0x41617f:c.instructions+=2;goto B41617f;
case 0x416182:c.instructions+=1;goto B416182;
case 0x416184:goto L416184;
case 0x416186:c.instructions+=1;goto B416186;
case 0x41618c:goto L41618c;
case 0x416192:c.instructions+=4;goto B416192;
case 0x416194:c.instructions+=3;goto B416194;
case 0x416196:c.instructions+=2;goto B416196;
case 0x416199:c.instructions+=1;goto B416199;
case 0x41619b:goto L41619b;
case 0x4161a1:c.instructions+=3;goto B4161a1;
case 0x4161a3:c.instructions+=2;goto B4161a3;
case 0x4161a7:c.instructions+=1;goto B4161a7;
case 0x4161a9:goto L4161a9;
case 0x4161ad:goto L4161ad;
case 0x4161b1:c.instructions+=7;goto B4161b1;
case 0x4161b7:c.instructions+=6;goto B4161b7;
case 0x4161bb:c.instructions+=5;goto B4161bb;
case 0x4161bc:c.instructions+=4;goto B4161bc;
case 0x4161bd:c.instructions+=3;goto B4161bd;
case 0x4161be:c.instructions+=2;goto B4161be;
case 0x4161c0:c.instructions+=1;goto B4161c0;
case 0x4161c5:goto L4161c5;
case 0x4161cb:c.instructions+=6;goto B4161cb;
case 0x4161cf:c.instructions+=5;goto B4161cf;
case 0x4161d3:c.instructions+=4;goto B4161d3;
case 0x4161d9:c.instructions+=3;goto B4161d9;
case 0x4161db:c.instructions+=2;goto B4161db;
case 0x4161de:c.instructions+=1;goto B4161de;
case 0x4161e0:goto L4161e0;
case 0x4161e2:c.instructions+=1;goto B4161e2;
case 0x4161e8:goto L4161e8;
case 0x4161ee:c.instructions+=4;goto B4161ee;
case 0x4161f0:c.instructions+=3;goto B4161f0;
case 0x4161f2:c.instructions+=2;goto B4161f2;
case 0x4161f5:c.instructions+=1;goto B4161f5;
case 0x4161f7:goto L4161f7;
case 0x4161fc:c.instructions+=3;goto B4161fc;
case 0x4161fe:c.instructions+=2;goto B4161fe;
case 0x416202:c.instructions+=1;goto B416202;
case 0x416204:goto L416204;
case 0x416208:goto L416208;
case 0x41620c:c.instructions+=7;goto B41620c;
case 0x416212:c.instructions+=6;goto B416212;
case 0x416216:c.instructions+=5;goto B416216;
case 0x416217:c.instructions+=4;goto B416217;
case 0x416218:c.instructions+=3;goto B416218;
case 0x416219:c.instructions+=2;goto B416219;
case 0x41621b:c.instructions+=1;goto B41621b;
case 0x416220:goto L416220;
case 0x416224:c.instructions+=13;goto B416224;
case 0x416228:c.instructions+=12;goto B416228;
case 0x41622c:c.instructions+=11;goto B41622c;
case 0x416230:c.instructions+=10;goto B416230;
case 0x416234:c.instructions+=9;goto B416234;
case 0x416238:c.instructions+=8;goto B416238;
case 0x41623c:c.instructions+=7;goto B41623c;
case 0x416240:c.instructions+=6;goto B416240;
case 0x416244:c.instructions+=5;goto B416244;
case 0x416245:c.instructions+=4;goto B416245;
case 0x416249:c.instructions+=3;goto B416249;
case 0x41624a:c.instructions+=2;goto B41624a;
case 0x41624e:c.instructions+=1;goto B41624e;
case 0x416253:goto L416253;
case 0x416256:c.instructions+=6;goto B416256;
case 0x41625a:c.instructions+=5;goto B41625a;
case 0x41625d:c.instructions+=4;goto B41625d;
case 0x416261:c.instructions+=3;goto B416261;
case 0x416267:c.instructions+=2;goto B416267;
case 0x41626b:c.instructions+=1;goto B41626b;
case 0x41626d:goto L41626d;
case 0x416272:c.instructions+=4;goto B416272;
case 0x416273:c.instructions+=3;goto B416273;
case 0x416277:c.instructions+=2;goto B416277;
case 0x416278:c.instructions+=1;goto B416278;
case 0x41627d:goto L41627d;
case 0x416280:goto L416280;
case 0x416284:c.instructions+=12;goto B416284;
case 0x416288:c.instructions+=11;goto B416288;
case 0x41628e:c.instructions+=10;goto B41628e;
case 0x416294:c.instructions+=9;goto B416294;
case 0x41629a:c.instructions+=8;goto B41629a;
case 0x4162a0:c.instructions+=7;goto B4162a0;
case 0x4162a3:c.instructions+=6;goto B4162a3;
case 0x4162a6:c.instructions+=5;goto B4162a6;
case 0x4162aa:c.instructions+=4;goto B4162aa;
case 0x4162b0:c.instructions+=3;goto B4162b0;
case 0x4162b3:c.instructions+=2;goto B4162b3;
case 0x4162b6:c.instructions+=1;goto B4162b6;
case 0x4162bb:goto L4162bb;
case 0x4162be:c.instructions+=9;goto B4162be;
case 0x4162c2:c.instructions+=8;goto B4162c2;
case 0x4162c5:c.instructions+=7;goto B4162c5;
case 0x4162c9:c.instructions+=6;goto B4162c9;
case 0x4162cf:c.instructions+=5;goto B4162cf;
case 0x4162d5:c.instructions+=4;goto B4162d5;
case 0x4162d7:c.instructions+=3;goto B4162d7;
case 0x4162dd:c.instructions+=2;goto B4162dd;
case 0x4162e1:c.instructions+=1;goto B4162e1;
case 0x4162e6:goto L4162e6;
case 0x4162ea:c.instructions+=5;goto B4162ea;
case 0x4162ee:c.instructions+=4;goto B4162ee;
case 0x4162f2:c.instructions+=3;goto B4162f2;
case 0x4162f4:c.instructions+=2;goto B4162f4;
case 0x4162f7:c.instructions+=1;goto B4162f7;
case 0x4162f9:goto L4162f9;
case 0x4162ff:goto L4162ff;
case 0x416305:c.instructions+=15;goto B416305;
case 0x41630b:c.instructions+=14;goto B41630b;
case 0x416312:c.instructions+=13;goto B416312;
case 0x416314:c.instructions+=12;goto B416314;
case 0x416316:c.instructions+=11;goto B416316;
case 0x41631a:c.instructions+=10;goto B41631a;
case 0x41631c:c.instructions+=9;goto B41631c;
case 0x416320:c.instructions+=8;goto B416320;
case 0x416322:c.instructions+=7;goto B416322;
case 0x416326:c.instructions+=6;goto B416326;
case 0x41632c:c.instructions+=5;goto B41632c;
case 0x416330:c.instructions+=4;goto B416330;
case 0x416336:c.instructions+=3;goto B416336;
case 0x41633c:c.instructions+=2;goto B41633c;
case 0x416340:c.instructions+=1;goto B416340;
case 0x416343:goto L416343;
case 0x416345:c.instructions+=1;goto B416345;
case 0x416347:goto L416347;
case 0x41634d:c.instructions+=3;goto B41634d;
case 0x416353:c.instructions+=2;goto B416353;
case 0x416357:c.instructions+=1;goto B416357;
case 0x416359:goto L416359;
case 0x41635d:goto L41635d;
case 0x416361:c.instructions+=6;goto B416361;
case 0x416365:c.instructions+=5;goto B416365;
case 0x41636b:c.instructions+=4;goto B41636b;
case 0x41636d:c.instructions+=3;goto B41636d;
case 0x416373:c.instructions+=2;goto B416373;
case 0x416377:c.instructions+=1;goto B416377;
case 0x41637c:goto L41637c;
case 0x416380:c.instructions+=5;goto B416380;
case 0x416384:c.instructions+=4;goto B416384;
case 0x416388:c.instructions+=3;goto B416388;
case 0x41638a:c.instructions+=2;goto B41638a;
case 0x41638d:c.instructions+=1;goto B41638d;
case 0x41638f:goto L41638f;
case 0x416395:goto L416395;
case 0x41639b:c.instructions+=7;goto B41639b;
case 0x41639d:c.instructions+=6;goto B41639d;
case 0x41639f:c.instructions+=5;goto B41639f;
case 0x4163a1:c.instructions+=4;goto B4163a1;
case 0x4163a3:c.instructions+=3;goto B4163a3;
case 0x4163a5:c.instructions+=2;goto B4163a5;
case 0x4163a8:c.instructions+=1;goto B4163a8;
case 0x4163aa:goto L4163aa;
case 0x4163ac:c.instructions+=1;goto B4163ac;
case 0x4163ae:goto L4163ae;
case 0x4163b0:goto L4163b0;
case 0x4163b6:c.instructions+=4;goto B4163b6;
case 0x4163bc:c.instructions+=3;goto B4163bc;
case 0x4163be:c.instructions+=2;goto B4163be;
case 0x4163c1:c.instructions+=1;goto B4163c1;
case 0x4163c3:goto L4163c3;
case 0x4163c8:c.instructions+=1;goto B4163c8;
case 0x4163ca:goto L4163ca;
case 0x4163cc:goto L4163cc;
case 0x4163ce:c.instructions+=3;goto B4163ce;
case 0x4163d4:c.instructions+=2;goto B4163d4;
case 0x4163d6:c.instructions+=1;goto B4163d6;
case 0x4163d8:goto L4163d8;
case 0x4163dd:c.instructions+=2;goto B4163dd;
case 0x4163df:c.instructions+=1;goto B4163df;
case 0x4163e4:goto L4163e4;
case 0x4163e9:c.instructions+=2;goto B4163e9;
case 0x4163eb:c.instructions+=1;goto B4163eb;
case 0x4163f0:goto L4163f0;
case 0x4163f5:c.instructions+=3;goto B4163f5;
case 0x4163f7:c.instructions+=2;goto B4163f7;
case 0x4163f9:c.instructions+=1;goto B4163f9;
case 0x4163fe:goto L4163fe;
case 0x416400:c.instructions+=3;goto B416400;
case 0x416402:c.instructions+=2;goto B416402;
case 0x416404:c.instructions+=1;goto B416404;
case 0x416407:goto L416407;
case 0x41640c:goto L41640c;
case 0x41640e:c.instructions+=1;goto B41640e;
case 0x416414:goto L416414;
case 0x41641a:c.instructions+=5;goto B41641a;
case 0x416420:c.instructions+=4;goto B416420;
case 0x416424:c.instructions+=3;goto B416424;
case 0x416426:c.instructions+=2;goto B416426;
case 0x416429:c.instructions+=1;goto B416429;
case 0x41642f:goto L41642f;
case 0x416435:c.instructions+=5;goto B416435;
case 0x416438:c.instructions+=4;goto B416438;
case 0x41643b:c.instructions+=3;goto B41643b;
case 0x41643c:c.instructions+=2;goto B41643c;
case 0x41643d:c.instructions+=1;goto B41643d;
case 0x416442:goto L416442;
case 0x416448:c.instructions+=8;goto B416448;
case 0x41644b:c.instructions+=7;goto B41644b;
case 0x41644f:c.instructions+=6;goto B41644f;
case 0x416452:c.instructions+=5;goto B416452;
case 0x416455:c.instructions+=4;goto B416455;
case 0x416459:c.instructions+=3;goto B416459;
case 0x41645f:c.instructions+=2;goto B41645f;
case 0x416463:c.instructions+=1;goto B416463;
case 0x416468:goto L416468;
case 0x41646c:c.instructions+=4;goto B41646c;
case 0x41646d:c.instructions+=3;goto B41646d;
case 0x416473:c.instructions+=2;goto B416473;
case 0x416476:c.instructions+=1;goto B416476;
case 0x41647b:goto L41647b;
case 0x41647e:c.instructions+=27;goto B41647e;
case 0x416482:c.instructions+=26;goto B416482;
case 0x416485:c.instructions+=25;goto B416485;
case 0x41648b:c.instructions+=24;goto B41648b;
case 0x41648f:c.instructions+=23;goto B41648f;
case 0x416495:c.instructions+=22;goto B416495;
case 0x41649b:c.instructions+=21;goto B41649b;
case 0x41649f:c.instructions+=20;goto B41649f;
case 0x4164a5:c.instructions+=19;goto B4164a5;
case 0x4164ab:c.instructions+=18;goto B4164ab;
case 0x4164af:c.instructions+=17;goto B4164af;
case 0x4164b5:c.instructions+=16;goto B4164b5;
case 0x4164bb:c.instructions+=15;goto B4164bb;
case 0x4164bf:c.instructions+=14;goto B4164bf;
case 0x4164c3:c.instructions+=13;goto B4164c3;
case 0x4164c9:c.instructions+=12;goto B4164c9;
case 0x4164cf:c.instructions+=11;goto B4164cf;
case 0x4164d3:c.instructions+=10;goto B4164d3;
case 0x4164d9:c.instructions+=9;goto B4164d9;
case 0x4164df:c.instructions+=8;goto B4164df;
case 0x4164e3:c.instructions+=7;goto B4164e3;
case 0x4164e9:c.instructions+=6;goto B4164e9;
case 0x4164ed:c.instructions+=5;goto B4164ed;
case 0x4164f3:c.instructions+=4;goto B4164f3;
case 0x4164f9:c.instructions+=3;goto B4164f9;
case 0x4164fb:c.instructions+=2;goto B4164fb;
case 0x4164fe:c.instructions+=1;goto B4164fe;
case 0x416503:goto L416503;
case 0x416507:c.instructions+=23;goto B416507;
case 0x41650b:c.instructions+=22;goto B41650b;
case 0x41650f:c.instructions+=21;goto B41650f;
case 0x416513:c.instructions+=20;goto B416513;
case 0x416515:c.instructions+=19;goto B416515;
case 0x416518:c.instructions+=18;goto B416518;
case 0x416519:c.instructions+=17;goto B416519;
case 0x41651f:c.instructions+=16;goto B41651f;
case 0x416520:c.instructions+=15;goto B416520;
case 0x416523:c.instructions+=14;goto B416523;
case 0x416524:c.instructions+=13;goto B416524;
case 0x416528:c.instructions+=12;goto B416528;
case 0x416529:c.instructions+=11;goto B416529;
case 0x41652f:c.instructions+=10;goto B41652f;
case 0x416531:c.instructions+=9;goto B416531;
case 0x416534:c.instructions+=8;goto B416534;
case 0x416535:c.instructions+=7;goto B416535;
case 0x416539:c.instructions+=6;goto B416539;
case 0x41653a:c.instructions+=5;goto B41653a;
case 0x416540:c.instructions+=4;goto B416540;
case 0x416541:c.instructions+=3;goto B416541;
case 0x416547:c.instructions+=2;goto B416547;
case 0x41654a:c.instructions+=1;goto B41654a;
case 0x41654f:goto L41654f;
case 0x416553:c.instructions+=5;goto B416553;
case 0x416557:c.instructions+=4;goto B416557;
case 0x41655a:c.instructions+=3;goto B41655a;
case 0x41655e:c.instructions+=2;goto B41655e;
case 0x416561:c.instructions+=1;goto B416561;
case 0x416566:goto L416566;
case 0x41656a:c.instructions+=2;goto B41656a;
case 0x41656d:c.instructions+=1;goto B41656d;
case 0x416572:goto L416572;
case 0x416576:c.instructions+=16;goto B416576;
case 0x41657c:c.instructions+=15;goto B41657c;
case 0x41657f:c.instructions+=14;goto B41657f;
case 0x416580:c.instructions+=13;goto B416580;
case 0x416584:c.instructions+=12;goto B416584;
case 0x416588:c.instructions+=11;goto B416588;
case 0x416589:c.instructions+=10;goto B416589;
case 0x41658f:c.instructions+=9;goto B41658f;
case 0x416591:c.instructions+=8;goto B416591;
case 0x416594:c.instructions+=7;goto B416594;
case 0x416595:c.instructions+=6;goto B416595;
case 0x41659b:c.instructions+=5;goto B41659b;
case 0x41659c:c.instructions+=4;goto B41659c;
case 0x4165a0:c.instructions+=3;goto B4165a0;
case 0x4165a1:c.instructions+=2;goto B4165a1;
case 0x4165a4:c.instructions+=1;goto B4165a4;
case 0x4165a9:goto L4165a9;
case 0x4165ad:c.instructions+=5;goto B4165ad;
case 0x4165b1:c.instructions+=4;goto B4165b1;
case 0x4165b4:c.instructions+=3;goto B4165b4;
case 0x4165b8:c.instructions+=2;goto B4165b8;
case 0x4165bb:c.instructions+=1;goto B4165bb;
case 0x4165c0:goto L4165c0;
case 0x4165c4:c.instructions+=2;goto B4165c4;
case 0x4165c7:c.instructions+=1;goto B4165c7;
case 0x4165cc:goto L4165cc;
case 0x4165d0:c.instructions+=3;goto B4165d0;
case 0x4165d3:c.instructions+=2;goto B4165d3;
case 0x4165d6:c.instructions+=1;goto B4165d6;
case 0x4165db:goto L4165db;
case 0x4165df:c.instructions+=7;goto B4165df;
case 0x4165e3:c.instructions+=6;goto B4165e3;
case 0x4165e7:c.instructions+=5;goto B4165e7;
case 0x4165eb:c.instructions+=4;goto B4165eb;
case 0x4165ee:c.instructions+=3;goto B4165ee;
case 0x4165f4:c.instructions+=2;goto B4165f4;
case 0x4165f7:c.instructions+=1;goto B4165f7;
case 0x4165fc:goto L4165fc;
case 0x4165ff:c.instructions+=15;goto B4165ff;
case 0x416603:c.instructions+=14;goto B416603;
case 0x416609:c.instructions+=13;goto B416609;
case 0x41660c:c.instructions+=12;goto B41660c;
case 0x416610:c.instructions+=11;goto B416610;
case 0x416611:c.instructions+=10;goto B416611;
case 0x416615:c.instructions+=9;goto B416615;
case 0x416616:c.instructions+=8;goto B416616;
case 0x41661c:c.instructions+=7;goto B41661c;
case 0x41661e:c.instructions+=6;goto B41661e;
case 0x416620:c.instructions+=5;goto B416620;
case 0x416624:c.instructions+=4;goto B416624;
case 0x416628:c.instructions+=3;goto B416628;
case 0x41662e:c.instructions+=2;goto B41662e;
case 0x416631:c.instructions+=1;goto B416631;
case 0x416636:goto L416636;
case 0x41663a:c.instructions+=6;goto B41663a;
case 0x41663e:c.instructions+=5;goto B41663e;
case 0x416644:c.instructions+=4;goto B416644;
case 0x416648:c.instructions+=3;goto B416648;
case 0x41664a:c.instructions+=2;goto B41664a;
case 0x41664d:c.instructions+=1;goto B41664d;
case 0x41664f:goto L41664f;
case 0x416653:c.instructions+=2;goto B416653;
case 0x416655:c.instructions+=1;goto B416655;
case 0x416659:goto L416659;
case 0x41665d:c.instructions+=6;goto B41665d;
case 0x416661:c.instructions+=5;goto B416661;
case 0x416667:c.instructions+=4;goto B416667;
case 0x41666b:c.instructions+=3;goto B41666b;
case 0x41666d:c.instructions+=2;goto B41666d;
case 0x416670:c.instructions+=1;goto B416670;
case 0x416672:goto L416672;
case 0x416676:c.instructions+=2;goto B416676;
case 0x416678:c.instructions+=1;goto B416678;
case 0x41667c:goto L41667c;
case 0x416682:c.instructions+=7;goto B416682;
case 0x416686:c.instructions+=6;goto B416686;
case 0x41668c:c.instructions+=5;goto B41668c;
case 0x416690:c.instructions+=4;goto B416690;
case 0x416696:c.instructions+=3;goto B416696;
case 0x416698:c.instructions+=2;goto B416698;
case 0x41669b:c.instructions+=1;goto B41669b;
case 0x4166a1:goto L4166a1;
case 0x4166a5:c.instructions+=5;goto B4166a5;
case 0x4166ab:c.instructions+=4;goto B4166ab;
case 0x4166af:c.instructions+=3;goto B4166af;
case 0x4166b1:c.instructions+=2;goto B4166b1;
case 0x4166b4:c.instructions+=1;goto B4166b4;
case 0x4166b6:goto L4166b6;
case 0x4166b8:c.instructions+=1;goto B4166b8;
case 0x4166be:goto L4166be;
case 0x4166c4:c.instructions+=7;goto B4166c4;
case 0x4166c8:c.instructions+=6;goto B4166c8;
case 0x4166ce:c.instructions+=5;goto B4166ce;
case 0x4166d2:c.instructions+=4;goto B4166d2;
case 0x4166d8:c.instructions+=3;goto B4166d8;
case 0x4166da:c.instructions+=2;goto B4166da;
case 0x4166dd:c.instructions+=1;goto B4166dd;
case 0x4166e3:goto L4166e3;
case 0x4166e7:c.instructions+=5;goto B4166e7;
case 0x4166ed:c.instructions+=4;goto B4166ed;
case 0x4166f1:c.instructions+=3;goto B4166f1;
case 0x4166f3:c.instructions+=2;goto B4166f3;
case 0x4166f6:c.instructions+=1;goto B4166f6;
case 0x4166f8:goto L4166f8;
case 0x4166fa:c.instructions+=1;goto B4166fa;
case 0x416700:goto L416700;
case 0x416702:c.instructions+=8;goto B416702;
case 0x416706:c.instructions+=7;goto B416706;
case 0x41670c:c.instructions+=6;goto B41670c;
case 0x416712:c.instructions+=5;goto B416712;
case 0x416716:c.instructions+=4;goto B416716;
case 0x41671c:c.instructions+=3;goto B41671c;
case 0x41671e:c.instructions+=2;goto B41671e;
case 0x416721:c.instructions+=1;goto B416721;
case 0x416727:goto L416727;
case 0x41672b:c.instructions+=5;goto B41672b;
case 0x416731:c.instructions+=4;goto B416731;
case 0x416735:c.instructions+=3;goto B416735;
case 0x416737:c.instructions+=2;goto B416737;
case 0x41673a:c.instructions+=1;goto B41673a;
case 0x41673c:goto L41673c;
case 0x41673e:c.instructions+=1;goto B41673e;
case 0x416744:goto L416744;
case 0x416746:c.instructions+=5;goto B416746;
case 0x416747:c.instructions+=4;goto B416747;
case 0x416749:c.instructions+=3;goto B416749;
case 0x41674c:c.instructions+=2;goto B41674c;
case 0x41674e:c.instructions+=1;goto B41674e;
case 0x416753:goto L416753;
case 0x416759:c.instructions+=4;goto B416759;
case 0x41675f:c.instructions+=3;goto B41675f;
case 0x416761:c.instructions+=2;goto B416761;
case 0x416764:c.instructions+=1;goto B416764;
case 0x416766:goto L416766;
case 0x41676c:c.instructions+=2;goto B41676c;
case 0x41676e:c.instructions+=1;goto B41676e;
case 0x416770:goto L416770;
case 0x416775:c.instructions+=2;goto B416775;
case 0x416777:c.instructions+=1;goto B416777;
case 0x41677c:goto L41677c;
case 0x41677e:c.instructions+=2;goto B41677e;
case 0x416780:c.instructions+=1;goto B416780;
case 0x416785:goto L416785;
case 0x416787:c.instructions+=3;goto B416787;
case 0x416789:c.instructions+=2;goto B416789;
case 0x41678b:c.instructions+=1;goto B41678b;
case 0x41678e:goto L41678e;
case 0x416793:goto L416793;
case 0x416799:c.instructions+=1;goto B416799;
case 0x41679e:goto L41679e;
case 0x4167a4:c.instructions+=1;goto B4167a4;
case 0x4167a9:goto L4167a9;
case 0x4167af:c.instructions+=1;goto B4167af;
case 0x4167b1:goto L4167b1;
case 0x4167b5:c.instructions+=9;goto B4167b5;
case 0x4167ba:c.instructions+=8;goto B4167ba;
case 0x4167c0:c.instructions+=7;goto B4167c0;
case 0x4167c2:c.instructions+=6;goto B4167c2;
case 0x4167c7:c.instructions+=5;goto B4167c7;
case 0x4167c9:c.instructions+=4;goto B4167c9;
case 0x4167cf:c.instructions+=3;goto B4167cf;
case 0x4167d0:c.instructions+=2;goto B4167d0;
case 0x4167d3:c.instructions+=1;goto B4167d3;
case 0x4167d8:goto L4167d8;
case 0x4167db:c.instructions+=8;goto B4167db;
case 0x4167df:c.instructions+=7;goto B4167df;
case 0x4167e3:c.instructions+=6;goto B4167e3;
case 0x4167e8:c.instructions+=5;goto B4167e8;
case 0x4167ee:c.instructions+=4;goto B4167ee;
case 0x4167f0:c.instructions+=3;goto B4167f0;
case 0x4167f1:c.instructions+=2;goto B4167f1;
case 0x4167f4:c.instructions+=1;goto B4167f4;
case 0x4167f9:goto L4167f9;
case 0x4167fd:c.instructions+=7;goto B4167fd;
case 0x416803:c.instructions+=6;goto B416803;
case 0x416806:c.instructions+=5;goto B416806;
case 0x416808:c.instructions+=4;goto B416808;
case 0x41680e:c.instructions+=3;goto B41680e;
case 0x416812:c.instructions+=2;goto B416812;
case 0x416815:c.instructions+=1;goto B416815;
case 0x41681a:goto L41681a;
case 0x41681d:c.instructions+=3;goto B41681d;
case 0x416820:c.instructions+=2;goto B416820;
case 0x416822:c.instructions+=1;goto B416822;
case 0x416827:goto L416827;
case 0x416829:c.instructions+=2;goto B416829;
case 0x41682b:c.instructions+=1;goto B41682b;
case 0x416830:goto L416830;
case 0x416832:c.instructions+=3;goto B416832;
case 0x416834:c.instructions+=2;goto B416834;
case 0x416836:c.instructions+=1;goto B416836;
case 0x416839:goto L416839;
case 0x41683e:goto L41683e;
case 0x416844:c.instructions+=5;goto B416844;
case 0x416846:c.instructions+=4;goto B416846;
case 0x41684c:c.instructions+=3;goto B41684c;
case 0x41684e:c.instructions+=2;goto B41684e;
case 0x416851:c.instructions+=1;goto B416851;
case 0x416853:goto L416853;
case 0x416858:c.instructions+=3;goto B416858;
case 0x41685a:c.instructions+=2;goto B41685a;
case 0x41685c:c.instructions+=1;goto B41685c;
case 0x416861:goto L416861;
case 0x416863:c.instructions+=1;goto B416863;
case 0x416865:goto L416865;
case 0x416869:c.instructions+=5;goto B416869;
case 0x41686d:c.instructions+=4;goto B41686d;
case 0x416873:c.instructions+=3;goto B416873;
case 0x416875:c.instructions+=2;goto B416875;
case 0x416878:c.instructions+=1;goto B416878;
case 0x41687e:goto L41687e;
case 0x416882:c.instructions+=5;goto B416882;
case 0x416888:c.instructions+=4;goto B416888;
case 0x41688c:c.instructions+=3;goto B41688c;
case 0x41688e:c.instructions+=2;goto B41688e;
case 0x416891:c.instructions+=1;goto B416891;
case 0x416897:goto L416897;
case 0x41689f:goto L41689f;
case 0x4168a1:c.instructions+=3;goto B4168a1;
case 0x4168a3:c.instructions+=2;goto B4168a3;
case 0x4168a5:c.instructions+=1;goto B4168a5;
case 0x4168aa:goto L4168aa;
case 0x4168ae:c.instructions+=1;goto B4168ae;
case 0x4168af:goto L4168af;
case 0x4168b1:c.instructions+=1;goto B4168b1;
case 0x4168b6:goto L4168b6;
case 0x4168b8:c.instructions+=2;goto B4168b8;
case 0x4168ba:c.instructions+=1;goto B4168ba;
case 0x4168bf:goto L4168bf;
case 0x4168c1:c.instructions+=7;goto B4168c1;
case 0x4168c3:c.instructions+=6;goto B4168c3;
case 0x4168c5:c.instructions+=5;goto B4168c5;
case 0x4168c8:c.instructions+=4;goto B4168c8;
case 0x4168ca:c.instructions+=3;goto B4168ca;
case 0x4168cb:c.instructions+=2;goto B4168cb;
case 0x4168cc:c.instructions+=1;goto B4168cc;
case 0x4168cf:goto L4168cf;
case 0x4168d3:c.instructions+=4;goto B4168d3;
case 0x4168d7:c.instructions+=3;goto B4168d7;
case 0x4168d8:c.instructions+=2;goto B4168d8;
case 0x4168db:c.instructions+=1;goto B4168db;
case 0x4168e0:goto L4168e0;
case 0x4168e3:c.instructions+=3;goto B4168e3;
case 0x4168e7:c.instructions+=2;goto B4168e7;
case 0x4168e9:c.instructions+=1;goto B4168e9;
case 0x4168eb:goto L4168eb;
case 0x4168ef:c.instructions+=2;goto B4168ef;
case 0x4168f1:c.instructions+=1;goto B4168f1;
case 0x4168f5:goto L4168f5;
case 0x4168f8:c.instructions+=5;goto B4168f8;
case 0x4168fc:c.instructions+=4;goto B4168fc;
case 0x4168fd:c.instructions+=3;goto B4168fd;
case 0x4168fe:c.instructions+=2;goto B4168fe;
case 0x416900:c.instructions+=1;goto B416900;
case 0x416905:goto L416905;
case 0x41690a:c.instructions+=2;goto B41690a;
case 0x41690c:c.instructions+=1;goto B41690c;
case 0x416912:goto L416912;
case 0x416917:c.instructions+=2;goto B416917;
case 0x416919:c.instructions+=1;goto B416919;
case 0x41691f:goto L41691f;
case 0x416924:c.instructions+=2;goto B416924;
case 0x416926:c.instructions+=1;goto B416926;
case 0x416928:goto L416928;
case 0x41692d:c.instructions+=2;goto B41692d;
case 0x41692f:c.instructions+=1;goto B41692f;
case 0x416931:goto L416931;
case 0x416936:c.instructions+=2;goto B416936;
case 0x416938:c.instructions+=1;goto B416938;
case 0x41693a:goto L41693a;
case 0x416940:c.instructions+=2;goto B416940;
case 0x416944:c.instructions+=1;goto B416944;
case 0x416946:goto L416946;
case 0x41694c:c.instructions+=6;goto B41694c;
case 0x41694f:c.instructions+=5;goto B41694f;
case 0x416952:c.instructions+=4;goto B416952;
case 0x416958:c.instructions+=3;goto B416958;
case 0x41695a:c.instructions+=2;goto B41695a;
case 0x41695d:c.instructions+=1;goto B41695d;
case 0x41695f:goto L41695f;
case 0x416961:c.instructions+=7;goto B416961;
case 0x416964:c.instructions+=6;goto B416964;
case 0x416965:c.instructions+=5;goto B416965;
case 0x416966:c.instructions+=4;goto B416966;
case 0x416967:c.instructions+=3;goto B416967;
case 0x416969:c.instructions+=2;goto B416969;
case 0x41696a:c.instructions+=1;goto B41696a;
case 0x41696d:goto L41696d;
case 0x416973:goto L416973;
case 0x416979:c.instructions+=4;goto B416979;
case 0x41697d:c.instructions+=3;goto B41697d;
case 0x41697f:c.instructions+=2;goto B41697f;
case 0x416982:c.instructions+=1;goto B416982;
case 0x416988:goto L416988;
case 0x416989:c.instructions+=4;goto B416989;
case 0x41698b:c.instructions+=3;goto B41698b;
case 0x41698d:c.instructions+=2;goto B41698d;
case 0x416990:c.instructions+=1;goto B416990;
case 0x416995:goto L416995;
case 0x416997:c.instructions+=1;goto B416997;
case 0x41699c:goto L41699c;
case 0x41699e:c.instructions+=1;goto B41699e;
case 0x4169a1:goto L4169a1;
case 0x4169a2:c.instructions+=5;goto B4169a2;
case 0x4169a3:c.instructions+=4;goto B4169a3;
case 0x4169a4:c.instructions+=3;goto B4169a4;
case 0x4169a6:c.instructions+=2;goto B4169a6;
case 0x4169a7:c.instructions+=1;goto B4169a7;
case 0x4169b0:goto L4169b0;
case 0x4169b2:c.instructions+=11;goto B4169b2;
case 0x4169b7:c.instructions+=10;goto B4169b7;
case 0x4169bd:c.instructions+=9;goto B4169bd;
case 0x4169be:c.instructions+=8;goto B4169be;
case 0x4169c5:c.instructions+=7;goto B4169c5;
case 0x4169c6:c.instructions+=6;goto B4169c6;
case 0x4169c7:c.instructions+=5;goto B4169c7;
case 0x4169c9:c.instructions+=4;goto B4169c9;
case 0x4169cd:c.instructions+=3;goto B4169cd;
case 0x4169d3:c.instructions+=2;goto B4169d3;
case 0x4169db:c.instructions+=1;goto B4169db;
case 0x4169e0:goto L4169e0;
case 0x4169e6:c.instructions+=2;goto B4169e6;
case 0x4169eb:c.instructions+=1;goto B4169eb;
case 0x4169f0:goto L4169f0;
case 0x4169f2:c.instructions+=2;goto B4169f2;
case 0x4169fa:c.instructions+=1;goto B4169fa;
case 0x4169ff:goto L4169ff;
case 0x416a03:c.instructions+=4;goto B416a03;
case 0x416a04:c.instructions+=3;goto B416a04;
case 0x416a0b:c.instructions+=2;goto B416a0b;
case 0x416a0e:c.instructions+=1;goto B416a0e;
case 0x416a10:goto L416a10;
case 0x416a16:c.instructions+=2;goto B416a16;
case 0x416a18:c.instructions+=1;goto B416a18;
case 0x416a20:goto L416a20;
case 0x416a26:c.instructions+=2;goto B416a26;
case 0x416a2c:c.instructions+=1;goto B416a2c;
case 0x416a30:goto L416a30;
case 0x416a36:c.instructions+=2;goto B416a36;
case 0x416a3c:c.instructions+=1;goto B416a3c;
case 0x416a40:goto L416a40;
case 0x416a46:c.instructions+=2;goto B416a46;
case 0x416a48:c.instructions+=1;goto B416a48;
case 0x416a50:goto L416a50;
case 0x416a56:c.instructions+=2;goto B416a56;
case 0x416a5c:c.instructions+=1;goto B416a5c;
case 0x416a60:goto L416a60;
case 0x416a66:c.instructions+=2;goto B416a66;
case 0x416a68:c.instructions+=1;goto B416a68;
case 0x416a70:goto L416a70;
case 0x416a76:c.instructions+=2;goto B416a76;
case 0x416a7c:c.instructions+=1;goto B416a7c;
case 0x416a80:goto L416a80;
case 0x416a86:c.instructions+=2;goto B416a86;
case 0x416a88:c.instructions+=1;goto B416a88;
case 0x416a90:goto L416a90;
case 0x416a96:c.instructions+=2;goto B416a96;
case 0x416a9c:c.instructions+=1;goto B416a9c;
case 0x416aa0:goto L416aa0;
case 0x416aa1:c.instructions+=7;goto B416aa1;
case 0x416aa5:c.instructions+=6;goto B416aa5;
case 0x416aa6:c.instructions+=5;goto B416aa6;
case 0x416aab:c.instructions+=4;goto B416aab;
case 0x416aad:c.instructions+=3;goto B416aad;
case 0x416aaf:c.instructions+=2;goto B416aaf;
case 0x416ab1:c.instructions+=1;goto B416ab1;
case 0x416ab6:goto L416ab6;
case 0x416abc:c.instructions+=3;goto B416abc;
case 0x416ac2:c.instructions+=2;goto B416ac2;
case 0x416ac3:c.instructions+=1;goto B416ac3;
case 0x416ac6:goto L416ac6;
case 0x416ac7:c.instructions+=2;goto B416ac7;
case 0x416ac9:c.instructions+=1;goto B416ac9;
case 0x416ace:goto L416ace;
case 0x416ad0:c.instructions+=6;goto B416ad0;
case 0x416ad2:c.instructions+=5;goto B416ad2;
case 0x416ad4:c.instructions+=4;goto B416ad4;
case 0x416ada:c.instructions+=3;goto B416ada;
case 0x416adb:c.instructions+=2;goto B416adb;
case 0x416add:c.instructions+=1;goto B416add;
case 0x416ae2:goto L416ae2;
case 0x416ae4:c.instructions+=6;goto B416ae4;
case 0x416ae6:c.instructions+=5;goto B416ae6;
case 0x416ae8:c.instructions+=4;goto B416ae8;
case 0x416aee:c.instructions+=3;goto B416aee;
case 0x416aef:c.instructions+=2;goto B416aef;
case 0x416af1:c.instructions+=1;goto B416af1;
case 0x416af6:goto L416af6;
case 0x416af8:c.instructions+=1;goto B416af8;
case 0x416afd:goto L416afd;
case 0x416afe:c.instructions+=2;goto B416afe;
case 0x416aff:c.instructions+=1;goto B416aff;
case 0x416b10:goto L416b10;
case 0x416b11:c.instructions+=4;goto B416b11;
case 0x416b13:c.instructions+=3;goto B416b13;
case 0x416b19:c.instructions+=2;goto B416b19;
case 0x416b1f:c.instructions+=1;goto B416b1f;
case 0x416b22:goto L416b22;
case 0x416b28:c.instructions+=2;goto B416b28;
case 0x416b2a:c.instructions+=1;goto B416b2a;
case 0x416b2c:goto L416b2c;
case 0x416b2e:c.instructions+=5;goto B416b2e;
case 0x416b2f:c.instructions+=4;goto B416b2f;
case 0x416b34:c.instructions+=3;goto B416b34;
case 0x416b39:c.instructions+=2;goto B416b39;
case 0x416b3b:c.instructions+=1;goto B416b3b;
case 0x416b3e:goto L416b3e;
case 0x416b3f:c.instructions+=1;goto B416b3f;
case 0x416b44:goto L416b44;
case 0x416b46:c.instructions+=6;goto B416b46;
case 0x416b49:c.instructions+=5;goto B416b49;
case 0x416b4a:c.instructions+=4;goto B416b4a;
case 0x416b4f:c.instructions+=3;goto B416b4f;
case 0x416b54:c.instructions+=2;goto B416b54;
case 0x416b56:c.instructions+=1;goto B416b56;
case 0x416b59:goto L416b59;
case 0x416b5a:c.instructions+=1;goto B416b5a;
case 0x416b5f:goto L416b5f;
case 0x416b61:c.instructions+=6;goto B416b61;
case 0x416b64:c.instructions+=5;goto B416b64;
case 0x416b65:c.instructions+=4;goto B416b65;
case 0x416b6a:c.instructions+=3;goto B416b6a;
case 0x416b6f:c.instructions+=2;goto B416b6f;
case 0x416b71:c.instructions+=1;goto B416b71;
case 0x416b74:goto L416b74;
case 0x416b75:c.instructions+=1;goto B416b75;
case 0x416b7a:goto L416b7a;
case 0x416b7c:c.instructions+=6;goto B416b7c;
case 0x416b7f:c.instructions+=5;goto B416b7f;
case 0x416b80:c.instructions+=4;goto B416b80;
case 0x416b85:c.instructions+=3;goto B416b85;
case 0x416b8a:c.instructions+=2;goto B416b8a;
case 0x416b8c:c.instructions+=1;goto B416b8c;
case 0x416b8f:goto L416b8f;
case 0x416b90:c.instructions+=1;goto B416b90;
case 0x416b95:goto L416b95;
case 0x416b98:c.instructions+=1;goto B416b98;
case 0x416b9f:goto L416b9f;
case 0x416ba0:c.instructions+=1;goto B416ba0;
case 0x416bb0:goto L416bb0;
case 0x416bb5:c.instructions+=5;goto B416bb5;
case 0x416bb8:c.instructions+=4;goto B416bb8;
case 0x416bba:c.instructions+=3;goto B416bba;
case 0x416bbb:c.instructions+=2;goto B416bbb;
case 0x416bbd:c.instructions+=1;goto B416bbd;
case 0x416bbf:goto L416bbf;
case 0x416bc4:c.instructions+=2;goto B416bc4;
case 0x416bc6:c.instructions+=1;goto B416bc6;
case 0x416bc8:goto L416bc8;
case 0x416bcd:c.instructions+=2;goto B416bcd;
case 0x416bcf:c.instructions+=1;goto B416bcf;
case 0x416bd1:goto L416bd1;
case 0x416bd6:c.instructions+=2;goto B416bd6;
case 0x416bd8:c.instructions+=1;goto B416bd8;
case 0x416bda:goto L416bda;
case 0x416bdf:c.instructions+=2;goto B416bdf;
case 0x416be1:c.instructions+=1;goto B416be1;
case 0x416be3:goto L416be3;
case 0x416be8:c.instructions+=2;goto B416be8;
case 0x416bea:c.instructions+=1;goto B416bea;
case 0x416bec:goto L416bec;
case 0x416bf1:c.instructions+=2;goto B416bf1;
case 0x416bf3:c.instructions+=1;goto B416bf3;
case 0x416bf5:goto L416bf5;
case 0x416bfa:c.instructions+=3;goto B416bfa;
case 0x416bfc:c.instructions+=2;goto B416bfc;
case 0x416c01:c.instructions+=1;goto B416c01;
case 0x416c03:goto L416c03;
case 0x416c08:goto L416c08;
case 0x416c0c:c.instructions+=4;goto B416c0c;
case 0x416c0d:c.instructions+=3;goto B416c0d;
case 0x416c10:c.instructions+=2;goto B416c10;
case 0x416c17:c.instructions+=1;goto B416c17;
case 0x416c1c:goto L416c1c;
case 0x416c20:c.instructions+=9;goto B416c20;
case 0x416c24:c.instructions+=8;goto B416c24;
case 0x416c28:c.instructions+=7;goto B416c28;
case 0x416c2c:c.instructions+=6;goto B416c2c;
case 0x416c32:c.instructions+=5;goto B416c32;
case 0x416c36:c.instructions+=4;goto B416c36;
case 0x416c3c:c.instructions+=3;goto B416c3c;
case 0x416c3e:c.instructions+=2;goto B416c3e;
case 0x416c41:c.instructions+=1;goto B416c41;
case 0x416c43:goto L416c43;
case 0x416c47:c.instructions+=2;goto B416c47;
case 0x416c4d:c.instructions+=1;goto B416c4d;
case 0x416c51:goto L416c51;
case 0x416c53:c.instructions+=6;goto B416c53;
case 0x416c56:c.instructions+=5;goto B416c56;
case 0x416c5c:c.instructions+=4;goto B416c5c;
case 0x416c61:c.instructions+=3;goto B416c61;
case 0x416c63:c.instructions+=2;goto B416c63;
case 0x416c67:c.instructions+=1;goto B416c67;
case 0x416c69:goto L416c69;
case 0x416c6e:c.instructions+=2;goto B416c6e;
case 0x416c70:c.instructions+=1;goto B416c70;
case 0x416c72:goto L416c72;
case 0x416c77:c.instructions+=2;goto B416c77;
case 0x416c79:c.instructions+=1;goto B416c79;
case 0x416c7b:goto L416c7b;
case 0x416c80:c.instructions+=2;goto B416c80;
case 0x416c82:c.instructions+=1;goto B416c82;
case 0x416c84:goto L416c84;
case 0x416c89:c.instructions+=2;goto B416c89;
case 0x416c8b:c.instructions+=1;goto B416c8b;
case 0x416c8d:goto L416c8d;
case 0x416c91:c.instructions+=5;goto B416c91;
case 0x416c97:c.instructions+=4;goto B416c97;
case 0x416c9d:c.instructions+=3;goto B416c9d;
case 0x416c9f:c.instructions+=2;goto B416c9f;
case 0x416ca2:c.instructions+=1;goto B416ca2;
case 0x416ca4:goto L416ca4;
case 0x416caa:c.instructions+=7;goto B416caa;
case 0x416cab:c.instructions+=6;goto B416cab;
case 0x416cad:c.instructions+=5;goto B416cad;
case 0x416cb1:c.instructions+=4;goto B416cb1;
case 0x416cb4:c.instructions+=3;goto B416cb4;
case 0x416cb5:c.instructions+=2;goto B416cb5;
case 0x416cba:c.instructions+=1;goto B416cba;
case 0x416cbf:goto L416cbf;
case 0x416cc3:c.instructions+=2;goto B416cc3;
case 0x416cc7:c.instructions+=1;goto B416cc7;
case 0x416ccb:goto L416ccb;
case 0x416ccc:c.instructions+=10;goto B416ccc;
case 0x416cd0:c.instructions+=9;goto B416cd0;
case 0x416cd1:c.instructions+=8;goto B416cd1;
case 0x416cd5:c.instructions+=7;goto B416cd5;
case 0x416cd6:c.instructions+=6;goto B416cd6;
case 0x416cda:c.instructions+=5;goto B416cda;
case 0x416cdb:c.instructions+=4;goto B416cdb;
case 0x416cdc:c.instructions+=3;goto B416cdc;
case 0x416cdd:c.instructions+=2;goto B416cdd;
case 0x416cdf:c.instructions+=1;goto B416cdf;
case 0x416ce4:goto L416ce4;
case 0x416ce8:c.instructions+=6;goto B416ce8;
case 0x416cec:c.instructions+=5;goto B416cec;
case 0x416cf0:c.instructions+=4;goto B416cf0;
case 0x416cf6:c.instructions+=3;goto B416cf6;
case 0x416cf8:c.instructions+=2;goto B416cf8;
case 0x416cfb:c.instructions+=1;goto B416cfb;
case 0x416cfd:goto L416cfd;
case 0x416d01:c.instructions+=5;goto B416d01;
case 0x416d07:c.instructions+=4;goto B416d07;
case 0x416d0b:c.instructions+=3;goto B416d0b;
case 0x416d0d:c.instructions+=2;goto B416d0d;
case 0x416d10:c.instructions+=1;goto B416d10;
case 0x416d12:goto L416d12;
case 0x416d14:c.instructions+=2;goto B416d14;
case 0x416d1c:c.instructions+=1;goto B416d1c;
case 0x416d1e:goto L416d1e;
case 0x416d24:goto L416d24;
case 0x416d28:goto L416d28;
case 0x416d29:c.instructions+=4;goto B416d29;
case 0x416d2a:c.instructions+=3;goto B416d2a;
case 0x416d2b:c.instructions+=2;goto B416d2b;
case 0x416d2d:c.instructions+=1;goto B416d2d;
case 0x416d32:goto L416d32;
case 0x416d36:c.instructions+=13;goto B416d36;
case 0x416d37:c.instructions+=12;goto B416d37;
case 0x416d38:c.instructions+=11;goto B416d38;
case 0x416d3c:c.instructions+=10;goto B416d3c;
case 0x416d40:c.instructions+=9;goto B416d40;
case 0x416d41:c.instructions+=8;goto B416d41;
case 0x416d43:c.instructions+=7;goto B416d43;
case 0x416d47:c.instructions+=6;goto B416d47;
case 0x416d4b:c.instructions+=5;goto B416d4b;
case 0x416d4f:c.instructions+=4;goto B416d4f;
case 0x416d51:c.instructions+=3;goto B416d51;
case 0x416d53:c.instructions+=2;goto B416d53;
case 0x416d56:c.instructions+=1;goto B416d56;
case 0x416d58:goto L416d58;
case 0x416d5a:c.instructions+=1;goto B416d5a;
case 0x416d5e:goto L416d5e;
case 0x416d62:c.instructions+=4;goto B416d62;
case 0x416d64:c.instructions+=3;goto B416d64;
case 0x416d66:c.instructions+=2;goto B416d66;
case 0x416d69:c.instructions+=1;goto B416d69;
case 0x416d6b:goto L416d6b;
case 0x416d6d:c.instructions+=1;goto B416d6d;
case 0x416d71:goto L416d71;
case 0x416d75:c.instructions+=5;goto B416d75;
case 0x416d77:c.instructions+=4;goto B416d77;
case 0x416d7d:c.instructions+=3;goto B416d7d;
case 0x416d7f:c.instructions+=2;goto B416d7f;
case 0x416d82:c.instructions+=1;goto B416d82;
case 0x416d84:goto L416d84;
case 0x416d8a:c.instructions+=1;goto B416d8a;
case 0x416d8c:goto L416d8c;
case 0x416d90:goto L416d90;
case 0x416d96:c.instructions+=1;goto B416d96;
case 0x416d9b:goto L416d9b;
case 0x416d9f:c.instructions+=12;goto B416d9f;
case 0x416da1:c.instructions+=11;goto B416da1;
case 0x416da6:c.instructions+=10;goto B416da6;
case 0x416da8:c.instructions+=9;goto B416da8;
case 0x416daa:c.instructions+=8;goto B416daa;
case 0x416dad:c.instructions+=7;goto B416dad;
case 0x416daf:c.instructions+=6;goto B416daf;
case 0x416db2:c.instructions+=5;goto B416db2;
case 0x416db4:c.instructions+=4;goto B416db4;
case 0x416db8:c.instructions+=3;goto B416db8;
case 0x416db9:c.instructions+=2;goto B416db9;
case 0x416dbc:c.instructions+=1;goto B416dbc;
case 0x416dc0:goto L416dc0;
case 0x416dc1:c.instructions+=2;goto B416dc1;
case 0x416dc3:c.instructions+=1;goto B416dc3;
case 0x416dc8:goto L416dc8;
case 0x416dcd:c.instructions+=1;goto B416dcd;
case 0x416dcf:goto L416dcf;
case 0x416dd0:c.instructions+=1;goto B416dd0;
case 0x416dd5:goto L416dd5;
case 0x416dd8:goto L416dd8;
case 0x416dda:c.instructions+=2;goto B416dda;
case 0x416ddb:c.instructions+=1;goto B416ddb;
case 0x416de0:goto L416de0;
case 0x416de1:c.instructions+=6;goto B416de1;
case 0x416de2:c.instructions+=5;goto B416de2;
case 0x416de6:c.instructions+=4;goto B416de6;
case 0x416dec:c.instructions+=3;goto B416dec;
case 0x416dee:c.instructions+=2;goto B416dee;
case 0x416df0:c.instructions+=1;goto B416df0;
case 0x416df2:goto L416df2;
case 0x416df8:c.instructions+=6;goto B416df8;
case 0x416dfe:c.instructions+=5;goto B416dfe;
case 0x416e04:c.instructions+=4;goto B416e04;
case 0x416e0e:c.instructions+=3;goto B416e0e;
case 0x416e0f:c.instructions+=2;goto B416e0f;
case 0x416e10:c.instructions+=1;goto B416e10;
case 0x416e11:goto L416e11;
case 0x416e15:c.instructions+=2;goto B416e15;
case 0x416e1a:c.instructions+=1;goto B416e1a;
case 0x416e20:goto L416e20;
case 0x416e21:c.instructions+=1;goto B416e21;
case 0x416e23:goto L416e23;
case 0x416e24:c.instructions+=1;goto B416e24;
case 0x416e2a:goto L416e2a;
case 0x416e2f:c.instructions+=6;goto B416e2f;
case 0x416e35:c.instructions+=5;goto B416e35;
case 0x416e39:c.instructions+=4;goto B416e39;
case 0x416e3f:c.instructions+=3;goto B416e3f;
case 0x416e42:c.instructions+=2;goto B416e42;
case 0x416e46:c.instructions+=1;goto B416e46;
case 0x416e48:goto L416e48;
case 0x416e4e:goto L416e4e;
case 0x416e54:c.instructions+=4;goto B416e54;
case 0x416e56:c.instructions+=3;goto B416e56;
case 0x416e58:c.instructions+=2;goto B416e58;
case 0x416e5b:c.instructions+=1;goto B416e5b;
case 0x416e5d:goto L416e5d;
case 0x416e5f:c.instructions+=1;goto B416e5f;
case 0x416e65:goto L416e65;
case 0x416e6a:goto L416e6a;
case 0x416e70:c.instructions+=1;goto B416e70;
case 0x416e72:goto L416e72;
case 0x416e77:c.instructions+=6;goto B416e77;
case 0x416e7d:c.instructions+=5;goto B416e7d;
case 0x416e81:c.instructions+=4;goto B416e81;
case 0x416e82:c.instructions+=3;goto B416e82;
case 0x416e86:c.instructions+=2;goto B416e86;
case 0x416e8a:c.instructions+=1;goto B416e8a;
case 0x416e8f:goto L416e8f;
case 0x416e92:c.instructions+=2;goto B416e92;
case 0x416e94:c.instructions+=1;goto B416e94;
case 0x416e96:goto L416e96;
case 0x416e9c:c.instructions+=3;goto B416e9c;
case 0x416ea3:c.instructions+=2;goto B416ea3;
case 0x416ea5:c.instructions+=1;goto B416ea5;
case 0x416ea7:goto L416ea7;
case 0x416ead:c.instructions+=2;goto B416ead;
case 0x416eb1:c.instructions+=1;goto B416eb1;
case 0x416eb3:goto L416eb3;
case 0x416eb9:c.instructions+=2;goto B416eb9;
case 0x416ebd:c.instructions+=1;goto B416ebd;
case 0x416ebf:goto L416ebf;
case 0x416ec3:goto L416ec3;
case 0x416ec9:c.instructions+=4;goto B416ec9;
case 0x416ecb:c.instructions+=3;goto B416ecb;
case 0x416ecd:c.instructions+=2;goto B416ecd;
case 0x416ed0:c.instructions+=1;goto B416ed0;
case 0x416ed2:goto L416ed2;
case 0x416ed4:c.instructions+=1;goto B416ed4;
case 0x416eda:goto L416eda;
case 0x416edf:goto L416edf;
case 0x416ee5:c.instructions+=1;goto B416ee5;
case 0x416ee7:goto L416ee7;
case 0x416eeb:c.instructions+=1;goto B416eeb;
case 0x416ef1:goto L416ef1;
case 0x416ef7:c.instructions+=2;goto B416ef7;
case 0x416ef9:c.instructions+=1;goto B416ef9;
case 0x416efb:goto L416efb;
case 0x416f01:c.instructions+=3;goto B416f01;
case 0x416f07:c.instructions+=2;goto B416f07;
case 0x416f09:c.instructions+=1;goto B416f09;
case 0x416f0b:goto L416f0b;
case 0x416f0d:goto L416f0d;
case 0x416f13:c.instructions+=9;goto B416f13;
case 0x416f16:c.instructions+=8;goto B416f16;
case 0x416f1a:c.instructions+=7;goto B416f1a;
case 0x416f1e:c.instructions+=6;goto B416f1e;
case 0x416f24:c.instructions+=5;goto B416f24;
case 0x416f28:c.instructions+=4;goto B416f28;
case 0x416f2e:c.instructions+=3;goto B416f2e;
case 0x416f34:c.instructions+=2;goto B416f34;
case 0x416f37:c.instructions+=1;goto B416f37;
case 0x416f39:goto L416f39;
case 0x416f3b:c.instructions+=6;goto B416f3b;
case 0x416f3f:c.instructions+=5;goto B416f3f;
case 0x416f43:c.instructions+=4;goto B416f43;
case 0x416f44:c.instructions+=3;goto B416f44;
case 0x416f45:c.instructions+=2;goto B416f45;
case 0x416f4a:c.instructions+=1;goto B416f4a;
case 0x416f4c:goto L416f4c;
case 0x416f51:goto L416f51;
case 0x416f56:goto L416f56;
case 0x416f5a:c.instructions+=1;goto B416f5a;
case 0x416f60:goto L416f60;
case 0x416f61:c.instructions+=2;goto B416f61;
case 0x416f62:c.instructions+=1;goto B416f62;
case 0x416f66:goto L416f66;
case 0x416f67:c.instructions+=28;goto B416f67;
case 0x416f68:c.instructions+=27;goto B416f68;
case 0x416f69:c.instructions+=26;goto B416f69;
case 0x416f6a:c.instructions+=25;goto B416f6a;
case 0x416f6b:c.instructions+=24;goto B416f6b;
case 0x416f6c:c.instructions+=23;goto B416f6c;
case 0x416f6d:c.instructions+=22;goto B416f6d;
case 0x416f6e:c.instructions+=21;goto B416f6e;
case 0x416f6f:c.instructions+=20;goto B416f6f;
case 0x416f70:c.instructions+=19;goto B416f70;
case 0x416f73:c.instructions+=18;goto B416f73;
case 0x416f74:c.instructions+=17;goto B416f74;
case 0x416f75:c.instructions+=16;goto B416f75;
case 0x416f76:c.instructions+=15;goto B416f76;
case 0x416f77:c.instructions+=14;goto B416f77;
case 0x416f7b:c.instructions+=13;goto B416f7b;
case 0x416f7d:c.instructions+=12;goto B416f7d;
case 0x416f83:c.instructions+=11;goto B416f83;
case 0x416f87:c.instructions+=10;goto B416f87;
case 0x416f8e:c.instructions+=9;goto B416f8e;
case 0x416f90:c.instructions+=8;goto B416f90;
case 0x416f93:c.instructions+=7;goto B416f93;
case 0x416f95:c.instructions+=6;goto B416f95;
case 0x416f98:c.instructions+=5;goto B416f98;
case 0x416f9c:c.instructions+=4;goto B416f9c;
case 0x416f9e:c.instructions+=3;goto B416f9e;
case 0x416fa3:c.instructions+=2;goto B416fa3;
case 0x416fa7:c.instructions+=1;goto B416fa7;
case 0x416faa:goto L416faa;
case 0x416fac:c.instructions+=7;goto B416fac;
case 0x416fae:c.instructions+=6;goto B416fae;
case 0x416fb1:c.instructions+=5;goto B416fb1;
case 0x416fb2:c.instructions+=4;goto B416fb2;
case 0x416fb4:c.instructions+=3;goto B416fb4;
case 0x416fb8:c.instructions+=2;goto B416fb8;
case 0x416fba:c.instructions+=1;goto B416fba;
case 0x416fbc:goto L416fbc;
case 0x416fbf:c.instructions+=3;goto B416fbf;
case 0x416fc1:c.instructions+=2;goto B416fc1;
case 0x416fc5:c.instructions+=1;goto B416fc5;
case 0x416fc7:goto L416fc7;
case 0x416fc8:c.instructions+=6;goto B416fc8;
case 0x416fc9:c.instructions+=5;goto B416fc9;
case 0x416fca:c.instructions+=4;goto B416fca;
case 0x416fcc:c.instructions+=3;goto B416fcc;
case 0x416fcd:c.instructions+=2;goto B416fcd;
case 0x416fd0:c.instructions+=1;goto B416fd0;
case 0x416fd3:goto L416fd3;
case 0x416fd8:c.instructions+=2;goto B416fd8;
case 0x416fda:c.instructions+=1;goto B416fda;
case 0x416fe0:goto L416fe0;
case 0x416fe5:c.instructions+=2;goto B416fe5;
case 0x416fe7:c.instructions+=1;goto B416fe7;
case 0x416fed:goto L416fed;
case 0x416ff3:c.instructions+=3;goto B416ff3;
case 0x416ff8:c.instructions+=2;goto B416ff8;
case 0x416ffb:c.instructions+=1;goto B416ffb;
default:missing_instruction(c.pc);}
B416004:L416004:{c.instructions+=7;NFSU2_TR(0x416004);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416008:{NFSU2_TR(0x416008);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41600e:{NFSU2_TR(0x41600e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B416011:{NFSU2_TR(0x416011);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416014:{NFSU2_TR(0x416014);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B416017:{NFSU2_TR(0x416017);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41601a:{NFSU2_TR(0x41601a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416034;}}
}
B41601c:L41601c:{c.instructions+=1;NFSU2_TR(0x41601c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416021ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B416021:L416021:{c.instructions+=6;NFSU2_TR(0x416021);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B416024:{NFSU2_TR(0x416024);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B416028:{NFSU2_TR(0x416028);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416029:{NFSU2_TR(0x416029);
w4(R+4,u32(0x7e9df8ull));
}
B41602e:{NFSU2_TR(0x41602e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B416032:{NFSU2_TR(0x416032);
{goto L41604a;}
}
B416034:L416034:{c.instructions+=1;NFSU2_TR(0x416034);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416039ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B416039:L416039:{c.instructions+=5;NFSU2_TR(0x416039);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B41603c:{NFSU2_TR(0x41603c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B416040:{NFSU2_TR(0x416040);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416041:{NFSU2_TR(0x416041);
w4(R+4,u32(0x7e9de4ull));
}
B416046:{NFSU2_TR(0x416046);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41604a:L41604a:{c.instructions+=2;NFSU2_TR(0x41604a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41604d:{NFSU2_TR(0x41604d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416052ull));
TAIL_STATIC(0x5764d0u,576);
}
B416052:L416052:{c.instructions+=6;NFSU2_TR(0x416052);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416056:{NFSU2_TR(0x416056);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41605a:{NFSU2_TR(0x41605a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41605d:{NFSU2_TR(0x41605d);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B41605f:{NFSU2_TR(0x41605f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B416062:{NFSU2_TR(0x416062);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4160b6;}}
}
B416064:L416064:{c.instructions+=11;NFSU2_TR(0x416064);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41606a:{NFSU2_TR(0x41606a);
{u32 ea_=u32(r4(R+4)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416070:{NFSU2_TR(0x416070);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B416074:{NFSU2_TR(0x416074);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41607a:{NFSU2_TR(0x41607a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41607b:{NFSU2_TR(0x41607b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41607c:{NFSU2_TR(0x41607c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41607e:{NFSU2_TR(0x41607e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B416081:{NFSU2_TR(0x416081);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B416085:{NFSU2_TR(0x416085);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416086:{NFSU2_TR(0x416086);
if(r1(R+514)){{goto L41608f;}}
}
B416088:L416088:{c.instructions+=1;NFSU2_TR(0x416088);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41608dull));
TAIL_STATIC(0x403af0u,403);
}
B41608d:L41608d:{c.instructions+=1;NFSU2_TR(0x41608d);
{goto L416094;}
}
B41608f:L41608f:{c.instructions+=1;NFSU2_TR(0x41608f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416094ull));
TAIL_STATIC(0x403ba0u,403);
}
B416094:L416094:{c.instructions+=7;NFSU2_TR(0x416094);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B416096:{NFSU2_TR(0x416096);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416099:{NFSU2_TR(0x416099);
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
B41609c:{NFSU2_TR(0x41609c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4160a0:{NFSU2_TR(0x4160a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4160aa:{NFSU2_TR(0x4160aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4160b4:{NFSU2_TR(0x4160b4);
{goto L4160d0;}
}
B4160b6:L4160b6:{c.instructions+=7;NFSU2_TR(0x4160b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4160ba:{NFSU2_TR(0x4160ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4160be:{NFSU2_TR(0x4160be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4160bf:{NFSU2_TR(0x4160bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4160c5:{NFSU2_TR(0x4160c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4160c6:{NFSU2_TR(0x4160c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4160c7:{NFSU2_TR(0x4160c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4160ccull));
TAIL_STATIC(0x415630u,415);
}
B4160cc:L4160cc:{c.instructions+=1;NFSU2_TR(0x4160cc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4160d0:L4160d0:{c.instructions+=9;NFSU2_TR(0x4160d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4160d4:{NFSU2_TR(0x4160d4);
{u32 ea_=u32(r4(R+24)+u32(552u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4160da:{NFSU2_TR(0x4160da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4160e0:{NFSU2_TR(0x4160e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x27cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4160e6:{NFSU2_TR(0x4160e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4160ed:{NFSU2_TR(0x4160ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4160ee:{NFSU2_TR(0x4160ee);
__builtin_memmove((R+16),(R+20),4);
}
B4160f0:{NFSU2_TR(0x4160f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4160f1:{NFSU2_TR(0x4160f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B416100:L416100:{c.instructions+=3;NFSU2_TR(0x416100);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416101:{NFSU2_TR(0x416101);
__builtin_memmove((R+24),(R+4),4);
}
B416103:{NFSU2_TR(0x416103);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416108ull));
TAIL_STATIC(0x4101e0u,410);
}
B416108:L416108:{c.instructions+=2;NFSU2_TR(0x416108);
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
B41610d:{NFSU2_TR(0x41610d);
if(r1(R+518)){{goto L416118;}}
}
B41610f:L41610f:{c.instructions+=2;NFSU2_TR(0x41610f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416110:{NFSU2_TR(0x416110);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416115ull));
TAIL_STATIC(0x575630u,575);
}
B416115:L416115:{c.instructions+=1;NFSU2_TR(0x416115);
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
B416118:L416118:{c.instructions+=3;NFSU2_TR(0x416118);
__builtin_memmove((R+0),(R+24),4);
}
B41611a:{NFSU2_TR(0x41611a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41611b:{NFSU2_TR(0x41611b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B416120:L416120:{c.instructions+=15;NFSU2_TR(0x416120);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416121:{NFSU2_TR(0x416121);
__builtin_memmove((R+20),(R+16),4);
}
B416123:{NFSU2_TR(0x416123);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B416126:{NFSU2_TR(0x416126);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
}
B416129:{NFSU2_TR(0x416129);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41612a:{NFSU2_TR(0x41612a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41612b:{NFSU2_TR(0x41612b);
__builtin_memmove((R+24),(R+4),4);
}
B41612d:{NFSU2_TR(0x41612d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416133:{NFSU2_TR(0x416133);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B416139:{NFSU2_TR(0x416139);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41613a:{NFSU2_TR(0x41613a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41613d:{NFSU2_TR(0x41613d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B416141:{NFSU2_TR(0x416141);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+523,sborrow<u8>(r1(U+1),u8(0x0ull)));
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+2))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B416144:{NFSU2_TR(0x416144);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41614c:{NFSU2_TR(0x41614c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41626d;}}
}
B416152:L416152:{c.instructions+=4;NFSU2_TR(0x416152);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B416155:{NFSU2_TR(0x416155);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416156:{NFSU2_TR(0x416156);
__builtin_memmove((R+4),(R+28),4);
}
B416158:{NFSU2_TR(0x416158);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41615dull));
TAIL_STATIC(0x404af0u,404);
}
B41615d:L41615d:{c.instructions+=10;NFSU2_TR(0x41615d);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41615f:{NFSU2_TR(0x41615f);
{u32 ea_=u32(u32(7879336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416165:{NFSU2_TR(0x416165);
{u32 ea_=u32(u32(7879328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41616b:{NFSU2_TR(0x41616b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41616f:{NFSU2_TR(0x41616f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B416171:{NFSU2_TR(0x416171);
{u32 ea_=u32(u32(7879324u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B416177:{NFSU2_TR(0x416177);
{u32 ea_=u32(u32(7879308u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B41617d:{NFSU2_TR(0x41617d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41617f:{NFSU2_TR(0x41617f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B416182:{NFSU2_TR(0x416182);
if(r1(R+518)){{goto L41618c;}}
}
B416184:L416184:{c.instructions+=2;NFSU2_TR(0x416184);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B416186:{NFSU2_TR(0x416186);
{u32 ea_=u32(u32(7879308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41618c:L41618c:{c.instructions+=5;NFSU2_TR(0x41618c);
{u32 ea_=u32(u32(7879312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416192:{NFSU2_TR(0x416192);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B416194:{NFSU2_TR(0x416194);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B416196:{NFSU2_TR(0x416196);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B416199:{NFSU2_TR(0x416199);
if(r1(R+514)){{goto L4161a9;}}
}
B41619b:L41619b:{c.instructions+=4;NFSU2_TR(0x41619b);
__builtin_memmove((R+8),gp(0x783a90),4);
}
B4161a1:{NFSU2_TR(0x4161a1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4161a3:{NFSU2_TR(0x4161a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4161a7:{NFSU2_TR(0x4161a7);
{goto L4161ad;}
}
B4161a9:L4161a9:{c.instructions+=1;NFSU2_TR(0x4161a9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4161ad:L4161ad:{c.instructions+=8;NFSU2_TR(0x4161ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4161b1:{NFSU2_TR(0x4161b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4161b7:{NFSU2_TR(0x4161b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4161bb:{NFSU2_TR(0x4161bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4161bc:{NFSU2_TR(0x4161bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4161bd:{NFSU2_TR(0x4161bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4161be:{NFSU2_TR(0x4161be);
__builtin_memmove((R+4),(R+28),4);
}
B4161c0:{NFSU2_TR(0x4161c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4161c5ull));
TAIL_STATIC(0x415630u,415);
}
B4161c5:L4161c5:{c.instructions+=7;NFSU2_TR(0x4161c5);
{u32 ea_=u32(u32(7879332u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4161cb:{NFSU2_TR(0x4161cb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4161cf:{NFSU2_TR(0x4161cf);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4161d3:{NFSU2_TR(0x4161d3);
{u32 ea_=u32(u32(7879316u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4161d9:{NFSU2_TR(0x4161d9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4161db:{NFSU2_TR(0x4161db);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4161de:{NFSU2_TR(0x4161de);
if(r1(R+518)){{goto L4161e8;}}
}
B4161e0:L4161e0:{c.instructions+=2;NFSU2_TR(0x4161e0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4161e2:{NFSU2_TR(0x4161e2);
{u32 ea_=u32(u32(7879316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4161e8:L4161e8:{c.instructions+=5;NFSU2_TR(0x4161e8);
{u32 ea_=u32(u32(7879320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4161ee:{NFSU2_TR(0x4161ee);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4161f0:{NFSU2_TR(0x4161f0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4161f2:{NFSU2_TR(0x4161f2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4161f5:{NFSU2_TR(0x4161f5);
if(r1(R+514)){{goto L416204;}}
}
B4161f7:L4161f7:{c.instructions+=4;NFSU2_TR(0x4161f7);
__builtin_memmove((R+0),gp(0x783a98),4);
}
B4161fc:{NFSU2_TR(0x4161fc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4161fe:{NFSU2_TR(0x4161fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B416202:{NFSU2_TR(0x416202);
{goto L416208;}
}
B416204:L416204:{c.instructions+=1;NFSU2_TR(0x416204);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416208:L416208:{c.instructions+=8;NFSU2_TR(0x416208);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41620c:{NFSU2_TR(0x41620c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416212:{NFSU2_TR(0x416212);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B416216:{NFSU2_TR(0x416216);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416217:{NFSU2_TR(0x416217);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416218:{NFSU2_TR(0x416218);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416219:{NFSU2_TR(0x416219);
__builtin_memmove((R+4),(R+28),4);
}
B41621b:{NFSU2_TR(0x41621b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416220ull));
TAIL_STATIC(0x415630u,415);
}
B416220:L416220:{c.instructions+=14;NFSU2_TR(0x416220);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416224:{NFSU2_TR(0x416224);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B416228:{NFSU2_TR(0x416228);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41622c:{NFSU2_TR(0x41622c);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B416230:{NFSU2_TR(0x416230);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416234:{NFSU2_TR(0x416234);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B416238:{NFSU2_TR(0x416238);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41623c:{NFSU2_TR(0x41623c);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B416240:{NFSU2_TR(0x416240);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416244:{NFSU2_TR(0x416244);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416245:{NFSU2_TR(0x416245);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B416249:{NFSU2_TR(0x416249);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41624a:{NFSU2_TR(0x41624a);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41624e:{NFSU2_TR(0x41624e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416253ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B416253:L416253:{c.instructions+=7;NFSU2_TR(0x416253);
w4(R+0,u32(r2(R+0)));
}
B416256:{NFSU2_TR(0x416256);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41625a:{NFSU2_TR(0x41625a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B41625d:{NFSU2_TR(0x41625d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B416261:{NFSU2_TR(0x416261);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416267:{NFSU2_TR(0x416267);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41626b:{NFSU2_TR(0x41626b);
{goto L416280;}
}
B41626d:L41626d:{c.instructions+=5;NFSU2_TR(0x41626d);
u8 U[4];
w4(U+0,u32(0x41200000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416272:{NFSU2_TR(0x416272);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416273:{NFSU2_TR(0x416273);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B416277:{NFSU2_TR(0x416277);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416278:{NFSU2_TR(0x416278);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41627dull));
TAIL_STATIC(0x403af0u,403);
}
B41627d:L41627d:{c.instructions+=1;NFSU2_TR(0x41627d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B416280:L416280:{c.instructions+=13;NFSU2_TR(0x416280);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B416284:{NFSU2_TR(0x416284);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B416288:{NFSU2_TR(0x416288);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41628e:{NFSU2_TR(0x41628e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B416294:{NFSU2_TR(0x416294);
{u32 ea_=u32(r4(R+24)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41629a:{NFSU2_TR(0x41629a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4162a0:{NFSU2_TR(0x4162a0);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4162a3:{NFSU2_TR(0x4162a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4162a6:{NFSU2_TR(0x4162a6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4162aa:{NFSU2_TR(0x4162aa);
{u32 ea_=u32(r4(R+24)+u32(548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4162b0:{NFSU2_TR(0x4162b0);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4162b3:{NFSU2_TR(0x4162b3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4162b6:{NFSU2_TR(0x4162b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4162bbull));
TAIL_STATIC(0x43e6d0u,43e);
}
B4162bb:L4162bb:{c.instructions+=10;NFSU2_TR(0x4162bb);
w4(R+0,u32(r2(R+0)));
}
B4162be:{NFSU2_TR(0x4162be);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4162c2:{NFSU2_TR(0x4162c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4162c5:{NFSU2_TR(0x4162c5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4162c9:{NFSU2_TR(0x4162c9);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4162cf:{NFSU2_TR(0x4162cf);
{u32 ea_=u32(u32(7881880u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4162d5:{NFSU2_TR(0x4162d5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4162d7:{NFSU2_TR(0x4162d7);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4162dd:{NFSU2_TR(0x4162dd);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4162e1:{NFSU2_TR(0x4162e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4162e6ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4162e6:L4162e6:{c.instructions+=6;NFSU2_TR(0x4162e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4162ea:{NFSU2_TR(0x4162ea);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4162ee:{NFSU2_TR(0x4162ee);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4162f2:{NFSU2_TR(0x4162f2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4162f4:{NFSU2_TR(0x4162f4);
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
B4162f7:{NFSU2_TR(0x4162f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4162ff;}}
}
B4162f9:L4162f9:{c.instructions+=1;NFSU2_TR(0x4162f9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4162ff:L4162ff:{c.instructions+=16;NFSU2_TR(0x4162ff);
{u32 ea_=u32(u32(7881868u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416305:{NFSU2_TR(0x416305);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41630b:{NFSU2_TR(0x41630b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B416312:{NFSU2_TR(0x416312);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B416314:{NFSU2_TR(0x416314);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B416316:{NFSU2_TR(0x416316);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41631a:{NFSU2_TR(0x41631a);
__builtin_memmove((R+4),(R+24),4);
}
B41631c:{NFSU2_TR(0x41631c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416320:{NFSU2_TR(0x416320);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B416322:{NFSU2_TR(0x416322);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B416326:{NFSU2_TR(0x416326);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41632c:{NFSU2_TR(0x41632c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416330:{NFSU2_TR(0x416330);
{u32 ea_=u32(u32(7879276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416336:{NFSU2_TR(0x416336);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41633c:{NFSU2_TR(0x41633c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416340:{NFSU2_TR(0x416340);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416343ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B416343:L416343:{c.instructions+=2;NFSU2_TR(0x416343);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B416345:{NFSU2_TR(0x416345);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416359;}}
}
B416347:L416347:{c.instructions+=4;NFSU2_TR(0x416347);
{u32 ea_=u32(u32(7879280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41634d:{NFSU2_TR(0x41634d);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416353:{NFSU2_TR(0x416353);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B416357:{NFSU2_TR(0x416357);
{goto L41635d;}
}
B416359:L416359:{c.instructions+=1;NFSU2_TR(0x416359);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41635d:L41635d:{c.instructions+=7;NFSU2_TR(0x41635d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416361:{NFSU2_TR(0x416361);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B416365:{NFSU2_TR(0x416365);
{u32 ea_=u32(u32(7881880u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41636b:{NFSU2_TR(0x41636b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B41636d:{NFSU2_TR(0x41636d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B416373:{NFSU2_TR(0x416373);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B416377:{NFSU2_TR(0x416377);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41637cull));
TAIL_STATIC(0x75bed4u,75b);
}
B41637c:L41637c:{c.instructions+=6;NFSU2_TR(0x41637c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B416380:{NFSU2_TR(0x416380);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B416384:{NFSU2_TR(0x416384);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B416388:{NFSU2_TR(0x416388);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41638a:{NFSU2_TR(0x41638a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41638d:{NFSU2_TR(0x41638d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416395;}}
}
B41638f:L41638f:{c.instructions+=1;NFSU2_TR(0x41638f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B416395:L416395:{c.instructions+=8;NFSU2_TR(0x416395);
{u32 ea_=u32(u32(7881868u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41639b:{NFSU2_TR(0x41639b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B41639d:{NFSU2_TR(0x41639d);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41639f:{NFSU2_TR(0x41639f);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4163a1:{NFSU2_TR(0x4163a1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4163a3:{NFSU2_TR(0x4163a3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4163a5:{NFSU2_TR(0x4163a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4163a8:{NFSU2_TR(0x4163a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4163ae;}}
}
B4163aa:L4163aa:{c.instructions+=2;NFSU2_TR(0x4163aa);
w1(R+12,u8(0x1ull));
}
B4163ac:{NFSU2_TR(0x4163ac);
{goto L4163b0;}
}
B4163ae:L4163ae:{c.instructions+=1;NFSU2_TR(0x4163ae);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4163b0:L4163b0:{c.instructions+=5;NFSU2_TR(0x4163b0);
{u32 ea_=u32(r4(R+24)+u32(556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4163b6:{NFSU2_TR(0x4163b6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4163bc:{NFSU2_TR(0x4163bc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4163be:{NFSU2_TR(0x4163be);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4163c1:{NFSU2_TR(0x4163c1);
if(r1(R+514)){{goto L4163ca;}}
}
B4163c3:L4163c3:{c.instructions+=2;NFSU2_TR(0x4163c3);
w4(R+0,u32(0x1ull));
}
B4163c8:{NFSU2_TR(0x4163c8);
{goto L4163cc;}
}
B4163ca:L4163ca:{c.instructions+=1;NFSU2_TR(0x4163ca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4163cc:L4163cc:{c.instructions+=4;NFSU2_TR(0x4163cc);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B4163ce:{NFSU2_TR(0x4163ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4163d4:{NFSU2_TR(0x4163d4);
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
B4163d6:{NFSU2_TR(0x4163d6);
if(r1(R+518)){{goto L41640c;}}
}
B4163d8:L4163d8:{c.instructions+=3;NFSU2_TR(0x4163d8);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4163dd:{NFSU2_TR(0x4163dd);
__builtin_memmove((R+4),(R+24),4);
}
B4163df:{NFSU2_TR(0x4163df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4163e4ull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B4163e4:L4163e4:{c.instructions+=3;NFSU2_TR(0x4163e4);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4163e9:{NFSU2_TR(0x4163e9);
__builtin_memmove((R+4),(R+24),4);
}
B4163eb:{NFSU2_TR(0x4163eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4163f0ull));
TAIL_STATIC(0x5eb910u,5eb);
}
B4163f0:L4163f0:{c.instructions+=4;NFSU2_TR(0x4163f0);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4163f5:{NFSU2_TR(0x4163f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4163f7:{NFSU2_TR(0x4163f7);
__builtin_memmove((R+4),(R+24),4);
}
B4163f9:{NFSU2_TR(0x4163f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4163feull));
TAIL_STATIC(0x405990u,405);
}
B4163fe:L4163fe:{c.instructions+=4;NFSU2_TR(0x4163fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B416400:{NFSU2_TR(0x416400);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416402:{NFSU2_TR(0x416402);
__builtin_memmove((R+4),(R+24),4);
}
B416404:{NFSU2_TR(0x416404);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416407ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B416407:L416407:{c.instructions+=1;NFSU2_TR(0x416407);
{goto L416905;}
}
B41640c:L41640c:{c.instructions+=2;NFSU2_TR(0x41640c);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41640e:{NFSU2_TR(0x41640e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41683e;}}
}
B416414:L416414:{c.instructions+=6;NFSU2_TR(0x416414);
{u32 ea_=u32(u32(7879268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41641a:{NFSU2_TR(0x41641a);
{u32 ea_=u32(u32(7881384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416420:{NFSU2_TR(0x416420);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B416424:{NFSU2_TR(0x416424);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B416426:{NFSU2_TR(0x416426);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B416429:{NFSU2_TR(0x416429);
if(r1(R+518)){{goto L41683e;}}
}
B41642f:L41642f:{c.instructions+=6;NFSU2_TR(0x41642f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416435:{NFSU2_TR(0x416435);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B416438:{NFSU2_TR(0x416438);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41643b:{NFSU2_TR(0x41643b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41643c:{NFSU2_TR(0x41643c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41643d:{NFSU2_TR(0x41643d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416442ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B416442:L416442:{c.instructions+=9;NFSU2_TR(0x416442);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B416448:{NFSU2_TR(0x416448);
w4(R+0,u32(r2(R+0)));
}
B41644b:{NFSU2_TR(0x41644b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41644f:{NFSU2_TR(0x41644f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B416452:{NFSU2_TR(0x416452);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B416455:{NFSU2_TR(0x416455);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B416459:{NFSU2_TR(0x416459);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41645f:{NFSU2_TR(0x41645f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416463:{NFSU2_TR(0x416463);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416468ull));
TAIL_STATIC(0x591d90u,591);
}
B416468:L416468:{c.instructions+=5;NFSU2_TR(0x416468);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41646c:{NFSU2_TR(0x41646c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41646d:{NFSU2_TR(0x41646d);
{u32 ea_=u32(r4(R+24)+u32(560u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B416473:{NFSU2_TR(0x416473);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416476:{NFSU2_TR(0x416476);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41647bull));
TAIL_STATIC(0x405940u,405);
}
B41647b:L41647b:{c.instructions+=28;NFSU2_TR(0x41647b);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B41647e:{NFSU2_TR(0x41647e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B416482:{NFSU2_TR(0x416482);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B416485:{NFSU2_TR(0x416485);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41648b:{NFSU2_TR(0x41648b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41648f:{NFSU2_TR(0x41648f);
{u32 ea_=u32(u32(7879300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416495:{NFSU2_TR(0x416495);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41649b:{NFSU2_TR(0x41649b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41649f:{NFSU2_TR(0x41649f);
{u32 ea_=u32(u32(7879304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4164a5:{NFSU2_TR(0x4164a5);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4164ab:{NFSU2_TR(0x4164ab);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4164af:{NFSU2_TR(0x4164af);
{u32 ea_=u32(u32(7879260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4164b5:{NFSU2_TR(0x4164b5);
{u32 ea_=u32(r4(R+24)+u32(556u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4164bb:{NFSU2_TR(0x4164bb);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4164bf:{NFSU2_TR(0x4164bf);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4164c3:{NFSU2_TR(0x4164c3);
{u32 ea_=u32(u32(7879288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4164c9:{NFSU2_TR(0x4164c9);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4164cf:{NFSU2_TR(0x4164cf);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4164d3:{NFSU2_TR(0x4164d3);
{u32 ea_=u32(u32(7879284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4164d9:{NFSU2_TR(0x4164d9);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4164df:{NFSU2_TR(0x4164df);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4164e3:{NFSU2_TR(0x4164e3);
{u32 ea_=u32(u32(7879296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4164e9:{NFSU2_TR(0x4164e9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4164ed:{NFSU2_TR(0x4164ed);
{u32 ea_=u32(u32(7879292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4164f3:{NFSU2_TR(0x4164f3);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4164f9:{NFSU2_TR(0x4164f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4164fb:{NFSU2_TR(0x4164fb);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4164fe:{NFSU2_TR(0x4164fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416503ull));
TAIL_STATIC(0x401090u,401);
}
B416503:L416503:{c.instructions+=24;NFSU2_TR(0x416503);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416507:{NFSU2_TR(0x416507);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41650b:{NFSU2_TR(0x41650b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41650f:{NFSU2_TR(0x41650f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416513:{NFSU2_TR(0x416513);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B416515:{NFSU2_TR(0x416515);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B416518:{NFSU2_TR(0x416518);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416519:{NFSU2_TR(0x416519);
__builtin_memmove((R+8),gp(0x783ab8),4);
}
B41651f:{NFSU2_TR(0x41651f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416520:{NFSU2_TR(0x416520);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416523:{NFSU2_TR(0x416523);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416524:{NFSU2_TR(0x416524);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416528:{NFSU2_TR(0x416528);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416529:{NFSU2_TR(0x416529);
__builtin_memmove((R+4),gp(0x783abc),4);
}
B41652f:{NFSU2_TR(0x41652f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B416531:{NFSU2_TR(0x416531);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416534:{NFSU2_TR(0x416534);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416535:{NFSU2_TR(0x416535);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416539:{NFSU2_TR(0x416539);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41653a:{NFSU2_TR(0x41653a);
{u32 ea_=u32(u32(7879364u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B416540:{NFSU2_TR(0x416540);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416541:{NFSU2_TR(0x416541);
{u32 ea_=u32(u32(7879360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416547:{NFSU2_TR(0x416547);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41654a:{NFSU2_TR(0x41654a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41654full));
TAIL_STATIC(0x401090u,401);
}
B41654f:L41654f:{c.instructions+=6;NFSU2_TR(0x41654f);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416553:{NFSU2_TR(0x416553);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416557:{NFSU2_TR(0x416557);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B41655a:{NFSU2_TR(0x41655a);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41655e:{NFSU2_TR(0x41655e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416561:{NFSU2_TR(0x416561);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416566ull));
TAIL_STATIC(0x405940u,405);
}
B416566:L416566:{c.instructions+=3;NFSU2_TR(0x416566);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41656a:{NFSU2_TR(0x41656a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41656d:{NFSU2_TR(0x41656d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416572ull));
TAIL_STATIC(0x401090u,401);
}
B416572:L416572:{c.instructions+=17;NFSU2_TR(0x416572);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416576:{NFSU2_TR(0x416576);
__builtin_memmove((R+8),gp(0x783aac),4);
}
B41657c:{NFSU2_TR(0x41657c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B41657f:{NFSU2_TR(0x41657f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416580:{NFSU2_TR(0x416580);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416584:{NFSU2_TR(0x416584);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416588:{NFSU2_TR(0x416588);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416589:{NFSU2_TR(0x416589);
__builtin_memmove((R+4),gp(0x783ab0),4);
}
B41658f:{NFSU2_TR(0x41658f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B416591:{NFSU2_TR(0x416591);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416594:{NFSU2_TR(0x416594);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416595:{NFSU2_TR(0x416595);
{u32 ea_=u32(u32(7879348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41659b:{NFSU2_TR(0x41659b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41659c:{NFSU2_TR(0x41659c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4165a0:{NFSU2_TR(0x4165a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4165a1:{NFSU2_TR(0x4165a1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4165a4:{NFSU2_TR(0x4165a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4165a9ull));
TAIL_STATIC(0x401090u,401);
}
B4165a9:L4165a9:{c.instructions+=6;NFSU2_TR(0x4165a9);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4165ad:{NFSU2_TR(0x4165ad);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4165b1:{NFSU2_TR(0x4165b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4165b4:{NFSU2_TR(0x4165b4);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4165b8:{NFSU2_TR(0x4165b8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4165bb:{NFSU2_TR(0x4165bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4165c0ull));
TAIL_STATIC(0x405940u,405);
}
B4165c0:L4165c0:{c.instructions+=3;NFSU2_TR(0x4165c0);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4165c4:{NFSU2_TR(0x4165c4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4165c7:{NFSU2_TR(0x4165c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4165ccull));
TAIL_STATIC(0x401090u,401);
}
B4165cc:L4165cc:{c.instructions+=4;NFSU2_TR(0x4165cc);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4165d0:{NFSU2_TR(0x4165d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4165d3:{NFSU2_TR(0x4165d3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4165d6:{NFSU2_TR(0x4165d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4165dbull));
TAIL_STATIC(0x401090u,401);
}
B4165db:L4165db:{c.instructions+=8;NFSU2_TR(0x4165db);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4165df:{NFSU2_TR(0x4165df);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4165e3:{NFSU2_TR(0x4165e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4165e7:{NFSU2_TR(0x4165e7);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4165eb:{NFSU2_TR(0x4165eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4165ee:{NFSU2_TR(0x4165ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4165f4:{NFSU2_TR(0x4165f4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4165f7:{NFSU2_TR(0x4165f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4165fcull));
TAIL_STATIC(0x405940u,405);
}
B4165fc:L4165fc:{c.instructions+=16;NFSU2_TR(0x4165fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4165ff:{NFSU2_TR(0x4165ff);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416603:{NFSU2_TR(0x416603);
{u32 ea_=u32(u32(7879264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416609:{NFSU2_TR(0x416609);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B41660c:{NFSU2_TR(0x41660c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416610:{NFSU2_TR(0x416610);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416611:{NFSU2_TR(0x416611);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416615:{NFSU2_TR(0x416615);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416616:{NFSU2_TR(0x416616);
{u32 ea_=u32(u32(7885072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41661c:{NFSU2_TR(0x41661c);
__builtin_memmove((R+4),(R+24),4);
}
B41661e:{NFSU2_TR(0x41661e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B416620:{NFSU2_TR(0x416620);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416624:{NFSU2_TR(0x416624);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416628:{NFSU2_TR(0x416628);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41662e:{NFSU2_TR(0x41662e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416631:{NFSU2_TR(0x416631);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416636ull));
TAIL_STATIC(0x405990u,405);
}
B416636:L416636:{c.instructions+=7;NFSU2_TR(0x416636);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41663a:{NFSU2_TR(0x41663a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41663e:{NFSU2_TR(0x41663e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B416644:{NFSU2_TR(0x416644);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B416648:{NFSU2_TR(0x416648);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41664a:{NFSU2_TR(0x41664a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41664d:{NFSU2_TR(0x41664d);
if(r1(R+514)){{goto L416659;}}
}
B41664f:L41664f:{c.instructions+=3;NFSU2_TR(0x41664f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416653:{NFSU2_TR(0x416653);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B416655:{NFSU2_TR(0x416655);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416659:L416659:{c.instructions+=7;NFSU2_TR(0x416659);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41665d:{NFSU2_TR(0x41665d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416661:{NFSU2_TR(0x416661);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B416667:{NFSU2_TR(0x416667);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41666b:{NFSU2_TR(0x41666b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41666d:{NFSU2_TR(0x41666d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B416670:{NFSU2_TR(0x416670);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41667c;}}
}
B416672:L416672:{c.instructions+=3;NFSU2_TR(0x416672);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416676:{NFSU2_TR(0x416676);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B416678:{NFSU2_TR(0x416678);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41667c:L41667c:{c.instructions+=8;NFSU2_TR(0x41667c);
{u32 ea_=u32(u32(7885068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416682:{NFSU2_TR(0x416682);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B416686:{NFSU2_TR(0x416686);
{u32 ea_=u32(u32(7885064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41668c:{NFSU2_TR(0x41668c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B416690:{NFSU2_TR(0x416690);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B416696:{NFSU2_TR(0x416696);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B416698:{NFSU2_TR(0x416698);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41669b:{NFSU2_TR(0x41669b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416793;}}
}
B4166a1:L4166a1:{c.instructions+=6;NFSU2_TR(0x4166a1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4166a5:{NFSU2_TR(0x4166a5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4166ab:{NFSU2_TR(0x4166ab);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4166af:{NFSU2_TR(0x4166af);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4166b1:{NFSU2_TR(0x4166b1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4166b4:{NFSU2_TR(0x4166b4);
if(r1(R+514)){{goto L4166be;}}
}
B4166b6:L4166b6:{c.instructions+=2;NFSU2_TR(0x4166b6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4166b8:{NFSU2_TR(0x4166b8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4166be:L4166be:{c.instructions+=8;NFSU2_TR(0x4166be);
{u32 ea_=u32(u32(7885060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4166c4:{NFSU2_TR(0x4166c4);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4166c8:{NFSU2_TR(0x4166c8);
{u32 ea_=u32(u32(7885056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4166ce:{NFSU2_TR(0x4166ce);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4166d2:{NFSU2_TR(0x4166d2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4166d8:{NFSU2_TR(0x4166d8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4166da:{NFSU2_TR(0x4166da);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4166dd:{NFSU2_TR(0x4166dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41679e;}}
}
B4166e3:L4166e3:{c.instructions+=6;NFSU2_TR(0x4166e3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4166e7:{NFSU2_TR(0x4166e7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4166ed:{NFSU2_TR(0x4166ed);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4166f1:{NFSU2_TR(0x4166f1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4166f3:{NFSU2_TR(0x4166f3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4166f6:{NFSU2_TR(0x4166f6);
if(r1(R+514)){{goto L416700;}}
}
B4166f8:L4166f8:{c.instructions+=2;NFSU2_TR(0x4166f8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4166fa:{NFSU2_TR(0x4166fa);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416700:L416700:{c.instructions+=9;NFSU2_TR(0x416700);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B416702:{NFSU2_TR(0x416702);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416706:{NFSU2_TR(0x416706);
{u32 ea_=u32(u32(7882088u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41670c:{NFSU2_TR(0x41670c);
{u32 ea_=u32(u32(7885052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416712:{NFSU2_TR(0x416712);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B416716:{NFSU2_TR(0x416716);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41671c:{NFSU2_TR(0x41671c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41671e:{NFSU2_TR(0x41671e);
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
B416721:{NFSU2_TR(0x416721);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4167a9;}}
}
B416727:L416727:{c.instructions+=6;NFSU2_TR(0x416727);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41672b:{NFSU2_TR(0x41672b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416731:{NFSU2_TR(0x416731);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B416735:{NFSU2_TR(0x416735);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B416737:{NFSU2_TR(0x416737);
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
B41673a:{NFSU2_TR(0x41673a);
if(r1(R+514)){{goto L416744;}}
}
B41673c:L41673c:{c.instructions+=2;NFSU2_TR(0x41673c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41673e:{NFSU2_TR(0x41673e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416744:L416744:{c.instructions+=6;NFSU2_TR(0x416744);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B416746:{NFSU2_TR(0x416746);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416747:{NFSU2_TR(0x416747);
__builtin_memmove((R+4),(R+24),4);
}
B416749:{NFSU2_TR(0x416749);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41674c:{NFSU2_TR(0x41674c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41674e:{NFSU2_TR(0x41674e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416753ull));
TAIL_STATIC(0x5eb900u,5eb);
}
B416753:L416753:{c.instructions+=5;NFSU2_TR(0x416753);
{u32 ea_=u32(r4(R+24)+u32(556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416759:{NFSU2_TR(0x416759);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41675f:{NFSU2_TR(0x41675f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B416761:{NFSU2_TR(0x416761);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B416764:{NFSU2_TR(0x416764);
if(r1(R+514)){{goto L4167b1;}}
}
B416766:L416766:{c.instructions+=3;NFSU2_TR(0x416766);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41676c:{NFSU2_TR(0x41676c);
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
B41676e:{NFSU2_TR(0x41676e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4167b1;}}
}
B416770:L416770:{c.instructions+=3;NFSU2_TR(0x416770);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416775:{NFSU2_TR(0x416775);
__builtin_memmove((R+4),(R+24),4);
}
B416777:{NFSU2_TR(0x416777);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41677cull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B41677c:L41677c:{c.instructions+=3;NFSU2_TR(0x41677c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41677e:{NFSU2_TR(0x41677e);
__builtin_memmove((R+4),(R+24),4);
}
B416780:{NFSU2_TR(0x416780);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416785ull));
TAIL_STATIC(0x5eb910u,5eb);
}
B416785:L416785:{c.instructions+=4;NFSU2_TR(0x416785);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B416787:{NFSU2_TR(0x416787);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416789:{NFSU2_TR(0x416789);
__builtin_memmove((R+4),(R+24),4);
}
B41678b:{NFSU2_TR(0x41678b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41678eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41678e:L41678e:{c.instructions+=1;NFSU2_TR(0x41678e);
{goto L416905;}
}
B416793:L416793:{c.instructions+=2;NFSU2_TR(0x416793);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416799:{NFSU2_TR(0x416799);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4166beu);}goto L4166be;}
}
B41679e:L41679e:{c.instructions+=2;NFSU2_TR(0x41679e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4167a4:{NFSU2_TR(0x4167a4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x416700u);}goto L416700;}
}
B4167a9:L4167a9:{c.instructions+=2;NFSU2_TR(0x4167a9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4167af:{NFSU2_TR(0x4167af);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x416744u);}goto L416744;}
}
B4167b1:L4167b1:{c.instructions+=10;NFSU2_TR(0x4167b1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4167b5:{NFSU2_TR(0x4167b5);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4167ba:{NFSU2_TR(0x4167ba);
{u32 ea_=u32(u32(7885048u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4167c0:{NFSU2_TR(0x4167c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4167c2:{NFSU2_TR(0x4167c2);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4167c7:{NFSU2_TR(0x4167c7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4167c9:{NFSU2_TR(0x4167c9);
{u32 ea_=u32(u32(7885052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4167cf:{NFSU2_TR(0x4167cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4167d0:{NFSU2_TR(0x4167d0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4167d3:{NFSU2_TR(0x4167d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4167d8ull));
TAIL_STATIC(0x401090u,401);
}
B4167d8:L4167d8:{c.instructions+=9;NFSU2_TR(0x4167d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4167db:{NFSU2_TR(0x4167db);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4167df:{NFSU2_TR(0x4167df);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4167e3:{NFSU2_TR(0x4167e3);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4167e8:{NFSU2_TR(0x4167e8);
{u32 ea_=u32(u32(7885052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4167ee:{NFSU2_TR(0x4167ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4167f0:{NFSU2_TR(0x4167f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4167f1:{NFSU2_TR(0x4167f1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4167f4:{NFSU2_TR(0x4167f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4167f9ull));
TAIL_STATIC(0x401090u,401);
}
B4167f9:L4167f9:{c.instructions+=8;NFSU2_TR(0x4167f9);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4167fd:{NFSU2_TR(0x4167fd);
{u32 ea_=u32(u32(7885044u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B416803:{NFSU2_TR(0x416803);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B416806:{NFSU2_TR(0x416806);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B416808:{NFSU2_TR(0x416808);
{u32 ea_=u32(u32(7885040u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41680e:{NFSU2_TR(0x41680e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B416812:{NFSU2_TR(0x416812);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416815:{NFSU2_TR(0x416815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41681aull));
TAIL_STATIC(0x401090u,401);
}
B41681a:L41681a:{c.instructions+=4;NFSU2_TR(0x41681a);
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
B41681d:{NFSU2_TR(0x41681d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416820:{NFSU2_TR(0x416820);
__builtin_memmove((R+4),(R+24),4);
}
B416822:{NFSU2_TR(0x416822);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416827ull));
TAIL_STATIC(0x5eb910u,5eb);
}
B416827:L416827:{c.instructions+=3;NFSU2_TR(0x416827);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416829:{NFSU2_TR(0x416829);
__builtin_memmove((R+4),(R+24),4);
}
B41682b:{NFSU2_TR(0x41682b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416830ull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B416830:L416830:{c.instructions+=4;NFSU2_TR(0x416830);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B416832:{NFSU2_TR(0x416832);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416834:{NFSU2_TR(0x416834);
__builtin_memmove((R+4),(R+24),4);
}
B416836:{NFSU2_TR(0x416836);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416839ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B416839:L416839:{c.instructions+=1;NFSU2_TR(0x416839);
{goto L416905;}
}
B41683e:L41683e:{c.instructions+=6;NFSU2_TR(0x41683e);
{u32 ea_=u32(r4(R+24)+u32(556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416844:{NFSU2_TR(0x416844);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B416846:{NFSU2_TR(0x416846);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B41684c:{NFSU2_TR(0x41684c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41684e:{NFSU2_TR(0x41684e);
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
B416851:{NFSU2_TR(0x416851);
if(r1(R+514)){{goto L416865;}}
}
B416853:L416853:{c.instructions+=4;NFSU2_TR(0x416853);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416858:{NFSU2_TR(0x416858);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41685a:{NFSU2_TR(0x41685a);
__builtin_memmove((R+4),(R+24),4);
}
B41685c:{NFSU2_TR(0x41685c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416861ull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B416861:L416861:{c.instructions+=2;NFSU2_TR(0x416861);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416863:{NFSU2_TR(0x416863);
{goto L4168af;}
}
B416865:L416865:{c.instructions+=6;NFSU2_TR(0x416865);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B416869:{NFSU2_TR(0x416869);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41686d:{NFSU2_TR(0x41686d);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B416873:{NFSU2_TR(0x416873);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B416875:{NFSU2_TR(0x416875);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B416878:{NFSU2_TR(0x416878);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41696d;}}
}
B41687e:L41687e:{c.instructions+=6;NFSU2_TR(0x41687e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416882:{NFSU2_TR(0x416882);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416888:{NFSU2_TR(0x416888);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41688c:{NFSU2_TR(0x41688c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41688e:{NFSU2_TR(0x41688e);
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
B416891:{NFSU2_TR(0x416891);
if(r1(R+514)){{goto L416973;}}
}
B416897:L416897:{c.instructions+=1;NFSU2_TR(0x416897);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41689f:L41689f:{c.instructions+=4;NFSU2_TR(0x41689f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4168a1:{NFSU2_TR(0x4168a1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4168a3:{NFSU2_TR(0x4168a3);
__builtin_memmove((R+4),(R+24),4);
}
B4168a5:{NFSU2_TR(0x4168a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4168aaull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B4168aa:L4168aa:{c.instructions+=2;NFSU2_TR(0x4168aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4168ae:{NFSU2_TR(0x4168ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4168af:L4168af:{c.instructions+=2;NFSU2_TR(0x4168af);
__builtin_memmove((R+4),(R+24),4);
}
B4168b1:{NFSU2_TR(0x4168b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4168b6ull));
TAIL_STATIC(0x5eb910u,5eb);
}
B4168b6:L4168b6:{c.instructions+=3;NFSU2_TR(0x4168b6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4168b8:{NFSU2_TR(0x4168b8);
__builtin_memmove((R+4),(R+24),4);
}
B4168ba:{NFSU2_TR(0x4168ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4168bfull));
TAIL_STATIC(0x5eb900u,5eb);
}
B4168bf:L4168bf:{c.instructions+=8;NFSU2_TR(0x4168bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4168c1:{NFSU2_TR(0x4168c1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4168c3:{NFSU2_TR(0x4168c3);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4168c5:{NFSU2_TR(0x4168c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4168c8:{NFSU2_TR(0x4168c8);
__builtin_memmove((R+4),(R+24),4);
}
B4168ca:{NFSU2_TR(0x4168ca);
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
B4168cb:{NFSU2_TR(0x4168cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4168cc:{NFSU2_TR(0x4168cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4168cfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4168cf:L4168cf:{c.instructions+=5;NFSU2_TR(0x4168cf);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4168d3:{NFSU2_TR(0x4168d3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4168d7:{NFSU2_TR(0x4168d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4168d8:{NFSU2_TR(0x4168d8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4168db:{NFSU2_TR(0x4168db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4168e0ull));
TAIL_STATIC(0x405940u,405);
}
B4168e0:L4168e0:{c.instructions+=4;NFSU2_TR(0x4168e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4168e3:{NFSU2_TR(0x4168e3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4168e7:{NFSU2_TR(0x4168e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4168e9:{NFSU2_TR(0x4168e9);
if(r1(R+518)){{goto L4168f5;}}
}
B4168eb:L4168eb:{c.instructions+=3;NFSU2_TR(0x4168eb);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4168ef:{NFSU2_TR(0x4168ef);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4168f1:{NFSU2_TR(0x4168f1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4168f5:L4168f5:{c.instructions+=6;NFSU2_TR(0x4168f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4168f8:{NFSU2_TR(0x4168f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4168fc:{NFSU2_TR(0x4168fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4168fd:{NFSU2_TR(0x4168fd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4168fe:{NFSU2_TR(0x4168fe);
__builtin_memmove((R+4),(R+24),4);
}
B416900:{NFSU2_TR(0x416900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416905ull));
TAIL_STATIC(0x405990u,405);
}
B416905:L416905:{c.instructions+=3;NFSU2_TR(0x416905);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B41690a:{NFSU2_TR(0x41690a);
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
B41690c:{NFSU2_TR(0x41690c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4169a1;}}
}
B416912:L416912:{c.instructions+=3;NFSU2_TR(0x416912);
__builtin_memmove((R+0),gp(0x890108),4);
}
B416917:{NFSU2_TR(0x416917);
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
B416919:{NFSU2_TR(0x416919);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4169a1;}}
}
B41691f:L41691f:{c.instructions+=3;NFSU2_TR(0x41691f);
__builtin_memmove((R+0),gp(0x890114),4);
}
B416924:{NFSU2_TR(0x416924);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B416926:{NFSU2_TR(0x416926);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41693a;}}
}
B416928:L416928:{c.instructions+=3;NFSU2_TR(0x416928);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B41692d:{NFSU2_TR(0x41692d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41692f:{NFSU2_TR(0x41692f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41693a;}}
}
B416931:L416931:{c.instructions+=3;NFSU2_TR(0x416931);
__builtin_memmove((R+0),gp(0x890104),4);
}
B416936:{NFSU2_TR(0x416936);
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
B416938:{NFSU2_TR(0x416938);
if(r1(R+518)){{goto L4169a1;}}
}
B41693a:L41693a:{c.instructions+=3;NFSU2_TR(0x41693a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416940:{NFSU2_TR(0x416940);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
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
B416944:{NFSU2_TR(0x416944);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4169a1;}}
}
B416946:L416946:{c.instructions+=7;NFSU2_TR(0x416946);
{u32 ea_=u32(r4(R+24)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41694c:{NFSU2_TR(0x41694c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41694f:{NFSU2_TR(0x41694f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B416952:{NFSU2_TR(0x416952);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B416958:{NFSU2_TR(0x416958);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41695a:{NFSU2_TR(0x41695a);
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
B41695d:{NFSU2_TR(0x41695d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41699c;}}
}
B41695f:L41695f:{c.instructions+=8;NFSU2_TR(0x41695f);
w1(R+0,u8(0x1ull));
}
B416961:{NFSU2_TR(0x416961);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B416964:{NFSU2_TR(0x416964);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B416965:{NFSU2_TR(0x416965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B416966:{NFSU2_TR(0x416966);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B416967:{NFSU2_TR(0x416967);
__builtin_memmove((R+16),(R+20),4);
}
B416969:{NFSU2_TR(0x416969);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41696a:{NFSU2_TR(0x41696a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41696d:L41696d:{c.instructions+=1;NFSU2_TR(0x41696d);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416973:L416973:{c.instructions+=5;NFSU2_TR(0x416973);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B416979:{NFSU2_TR(0x416979);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41697d:{NFSU2_TR(0x41697d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41697f:{NFSU2_TR(0x41697f);
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
B416982:{NFSU2_TR(0x416982);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41689fu);}goto L41689f;}}
}
B416988:L416988:{c.instructions+=5;NFSU2_TR(0x416988);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416989:{NFSU2_TR(0x416989);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B41698b:{NFSU2_TR(0x41698b);
__builtin_memmove((R+4),(R+24),4);
}
B41698d:{NFSU2_TR(0x41698d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416990:{NFSU2_TR(0x416990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416995ull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B416995:L416995:{c.instructions+=2;NFSU2_TR(0x416995);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416997:{NFSU2_TR(0x416997);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4168afu);}goto L4168af;}
}
B41699c:L41699c:{c.instructions+=2;NFSU2_TR(0x41699c);
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
B41699e:{NFSU2_TR(0x41699e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4169a1:L4169a1:{c.instructions+=6;NFSU2_TR(0x4169a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4169a2:{NFSU2_TR(0x4169a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4169a3:{NFSU2_TR(0x4169a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4169a4:{NFSU2_TR(0x4169a4);
__builtin_memmove((R+16),(R+20),4);
}
B4169a6:{NFSU2_TR(0x4169a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4169a7:{NFSU2_TR(0x4169a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4169b0:L4169b0:{c.instructions+=12;NFSU2_TR(0x4169b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4169b2:{NFSU2_TR(0x4169b2);
u8 U[4];
w4(U+0,u32(0x7714e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4169b7:{NFSU2_TR(0x4169b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4169bd:{NFSU2_TR(0x4169bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4169be:{NFSU2_TR(0x4169be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4169c5:{NFSU2_TR(0x4169c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4169c6:{NFSU2_TR(0x4169c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4169c7:{NFSU2_TR(0x4169c7);
__builtin_memmove((R+24),(R+4),4);
}
B4169c9:{NFSU2_TR(0x4169c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4169cd:{NFSU2_TR(0x4169cd);
u8 U[4];
w4(U+0,u32(0x785118ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4169d3:{NFSU2_TR(0x4169d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4169db:{NFSU2_TR(0x4169db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4169e0ull));
TAIL_STATIC(0x405be0u,405);
}
B4169e0:L4169e0:{c.instructions+=3;NFSU2_TR(0x4169e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x470ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4169e6:{NFSU2_TR(0x4169e6);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4169eb:{NFSU2_TR(0x4169eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4169f0ull));
TAIL_STATIC(0x4103a0u,410);
}
B4169f0:L4169f0:{c.instructions+=3;NFSU2_TR(0x4169f0);
__builtin_memmove((R+4),(R+24),4);
}
B4169f2:{NFSU2_TR(0x4169f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4169fa:{NFSU2_TR(0x4169fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4169ffull));
TAIL_STATIC(0x40fea0u,40f);
}
B4169ff:L4169ff:{c.instructions+=5;NFSU2_TR(0x4169ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B416a03:{NFSU2_TR(0x416a03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B416a04:{NFSU2_TR(0x416a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B416a0b:{NFSU2_TR(0x416a0b);
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
B416a0e:{NFSU2_TR(0x416a0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B416a10:L416a10:{c.instructions+=3;NFSU2_TR(0x416a10);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x470ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x470ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x470ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B416a16:{NFSU2_TR(0x416a16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B416a18:{NFSU2_TR(0x416a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B416a20:L416a20:{c.instructions+=3;NFSU2_TR(0x416a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x470ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416a26:{NFSU2_TR(0x416a26);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x470ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x470ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x470ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B416a2c:{NFSU2_TR(0x416a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B416a30:L416a30:{c.instructions+=3;NFSU2_TR(0x416a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x470ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416a36:{NFSU2_TR(0x416a36);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x470ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x470ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x470ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B416a3c:{NFSU2_TR(0x416a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B416a40:L416a40:{c.instructions+=3;NFSU2_TR(0x416a40);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x470ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x470ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x470ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B416a46:{NFSU2_TR(0x416a46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B416a48:{NFSU2_TR(0x416a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B416a50:L416a50:{c.instructions+=3;NFSU2_TR(0x416a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x470ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416a56:{NFSU2_TR(0x416a56);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x470ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x470ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x470ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B416a5c:{NFSU2_TR(0x416a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B416a60:L416a60:{c.instructions+=3;NFSU2_TR(0x416a60);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x470ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x470ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x470ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B416a66:{NFSU2_TR(0x416a66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B416a68:{NFSU2_TR(0x416a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B416a70:L416a70:{c.instructions+=3;NFSU2_TR(0x416a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x470ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416a76:{NFSU2_TR(0x416a76);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x470ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x470ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x470ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B416a7c:{NFSU2_TR(0x416a7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B416a80:L416a80:{c.instructions+=3;NFSU2_TR(0x416a80);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x470ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x470ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x470ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B416a86:{NFSU2_TR(0x416a86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B416a88:{NFSU2_TR(0x416a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B416a90:L416a90:{c.instructions+=3;NFSU2_TR(0x416a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x470ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416a96:{NFSU2_TR(0x416a96);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x470ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x470ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x470ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B416a9c:{NFSU2_TR(0x416a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B416aa0:L416aa0:{c.instructions+=8;NFSU2_TR(0x416aa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416aa1:{NFSU2_TR(0x416aa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B416aa5:{NFSU2_TR(0x416aa5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416aa6:{NFSU2_TR(0x416aa6);
u8 U[4];
w4(U+0,u32(0x7851a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416aab:{NFSU2_TR(0x416aab);
__builtin_memmove((R+28),(R+4),4);
}
B416aad:{NFSU2_TR(0x416aad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416aaf:{NFSU2_TR(0x416aaf);
__builtin_memmove((R+4),(R+24),4);
}
B416ab1:{NFSU2_TR(0x416ab1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416ab6ull));
TAIL_STATIC(0x578ce0u,578);
}
B416ab6:L416ab6:{c.instructions+=4;NFSU2_TR(0x416ab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x470ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416abc:{NFSU2_TR(0x416abc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x470ull))));
__builtin_memmove((R+4),(U+0),4);
}
B416ac2:{NFSU2_TR(0x416ac2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416ac3:{NFSU2_TR(0x416ac3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416ac6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B416ac6:L416ac6:{c.instructions+=3;NFSU2_TR(0x416ac6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416ac7:{NFSU2_TR(0x416ac7);
__builtin_memmove((R+4),(R+28),4);
}
B416ac9:{NFSU2_TR(0x416ac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416aceull));
TAIL_STATIC(0x415dd0u,415);
}
B416ace:L416ace:{c.instructions+=7;NFSU2_TR(0x416ace);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416ad0:{NFSU2_TR(0x416ad0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416ad2:{NFSU2_TR(0x416ad2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416ad4:{NFSU2_TR(0x416ad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x790ull))));
__builtin_memmove((R+4),(U+0),4);
}
B416ada:{NFSU2_TR(0x416ada);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416adb:{NFSU2_TR(0x416adb);
__builtin_memmove((R+4),(R+24),4);
}
B416add:{NFSU2_TR(0x416add);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416ae2ull));
TAIL_STATIC(0x571640u,571);
}
B416ae2:L416ae2:{c.instructions+=7;NFSU2_TR(0x416ae2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416ae4:{NFSU2_TR(0x416ae4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416ae6:{NFSU2_TR(0x416ae6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416ae8:{NFSU2_TR(0x416ae8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x791ull))));
}
B416aee:{NFSU2_TR(0x416aee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416aef:{NFSU2_TR(0x416aef);
__builtin_memmove((R+4),(R+24),4);
}
B416af1:{NFSU2_TR(0x416af1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416af6ull));
TAIL_STATIC(0x571640u,571);
}
B416af6:L416af6:{c.instructions+=2;NFSU2_TR(0x416af6);
__builtin_memmove((R+4),(R+24),4);
}
B416af8:{NFSU2_TR(0x416af8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416afdull));
TAIL_STATIC(0x578d90u,578);
}
B416afd:L416afd:{c.instructions+=3;NFSU2_TR(0x416afd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B416afe:{NFSU2_TR(0x416afe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B416aff:{NFSU2_TR(0x416aff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B416b10:L416b10:{c.instructions+=5;NFSU2_TR(0x416b10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416b11:{NFSU2_TR(0x416b11);
__builtin_memmove((R+24),(R+4),4);
}
B416b13:{NFSU2_TR(0x416b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x470ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416b19:{NFSU2_TR(0x416b19);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x470ull))));
__builtin_memmove((R+4),(U+0),4);
}
B416b1f:{NFSU2_TR(0x416b1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416b22ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B416b22:L416b22:{c.instructions+=3;NFSU2_TR(0x416b22);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x460ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B416b28:{NFSU2_TR(0x416b28);
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
B416b2a:{NFSU2_TR(0x416b2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416b9f;}}
}
B416b2c:L416b2c:{c.instructions+=6;NFSU2_TR(0x416b2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B416b2e:{NFSU2_TR(0x416b2e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416b2f:{NFSU2_TR(0x416b2f);
u8 U[4];
w4(U+0,u32(0x4102b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416b34:{NFSU2_TR(0x416b34);
u8 U[4];
w4(U+0,u32(0xb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416b39:{NFSU2_TR(0x416b39);
__builtin_memmove((R+4),(R+24),4);
}
B416b3b:{NFSU2_TR(0x416b3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416b3eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B416b3e:L416b3e:{c.instructions+=2;NFSU2_TR(0x416b3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416b3f:{NFSU2_TR(0x416b3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416b44ull));
TAIL_STATIC(0x579410u,579);
}
B416b44:L416b44:{c.instructions+=7;NFSU2_TR(0x416b44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B416b46:{NFSU2_TR(0x416b46);
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
B416b49:{NFSU2_TR(0x416b49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416b4a:{NFSU2_TR(0x416b4a);
u8 U[4];
w4(U+0,u32(0x4102b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416b4f:{NFSU2_TR(0x416b4f);
u8 U[4];
w4(U+0,u32(0xb9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416b54:{NFSU2_TR(0x416b54);
__builtin_memmove((R+4),(R+24),4);
}
B416b56:{NFSU2_TR(0x416b56);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416b59ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B416b59:L416b59:{c.instructions+=2;NFSU2_TR(0x416b59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416b5a:{NFSU2_TR(0x416b5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416b5full));
TAIL_STATIC(0x579410u,579);
}
B416b5f:L416b5f:{c.instructions+=7;NFSU2_TR(0x416b5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B416b61:{NFSU2_TR(0x416b61);
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
B416b64:{NFSU2_TR(0x416b64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416b65:{NFSU2_TR(0x416b65);
u8 U[4];
w4(U+0,u32(0x4102b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416b6a:{NFSU2_TR(0x416b6a);
u8 U[4];
w4(U+0,u32(0xbaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416b6f:{NFSU2_TR(0x416b6f);
__builtin_memmove((R+4),(R+24),4);
}
B416b71:{NFSU2_TR(0x416b71);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416b74ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B416b74:L416b74:{c.instructions+=2;NFSU2_TR(0x416b74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416b75:{NFSU2_TR(0x416b75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416b7aull));
TAIL_STATIC(0x579410u,579);
}
B416b7a:L416b7a:{c.instructions+=7;NFSU2_TR(0x416b7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B416b7c:{NFSU2_TR(0x416b7c);
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
B416b7f:{NFSU2_TR(0x416b7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416b80:{NFSU2_TR(0x416b80);
u8 U[4];
w4(U+0,u32(0x4102b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416b85:{NFSU2_TR(0x416b85);
u8 U[4];
w4(U+0,u32(0xbbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416b8a:{NFSU2_TR(0x416b8a);
__builtin_memmove((R+4),(R+24),4);
}
B416b8c:{NFSU2_TR(0x416b8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416b8full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B416b8f:L416b8f:{c.instructions+=2;NFSU2_TR(0x416b8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416b90:{NFSU2_TR(0x416b90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416b95ull));
TAIL_STATIC(0x579410u,579);
}
B416b95:L416b95:{c.instructions+=2;NFSU2_TR(0x416b95);
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
B416b98:{NFSU2_TR(0x416b98);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x460ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B416b9f:L416b9f:{c.instructions+=2;NFSU2_TR(0x416b9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B416ba0:{NFSU2_TR(0x416ba0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B416bb0:L416bb0:{c.instructions+=6;NFSU2_TR(0x416bb0);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B416bb5:{NFSU2_TR(0x416bb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B416bb8:{NFSU2_TR(0x416bb8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B416bba:{NFSU2_TR(0x416bba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416bbb:{NFSU2_TR(0x416bbb);
__builtin_memmove((R+24),(R+4),4);
}
B416bbd:{NFSU2_TR(0x416bbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416be3;}}
}
B416bbf:L416bbf:{c.instructions+=3;NFSU2_TR(0x416bbf);
__builtin_memmove((R+0),gp(0x890108),4);
}
B416bc4:{NFSU2_TR(0x416bc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B416bc6:{NFSU2_TR(0x416bc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416be3;}}
}
B416bc8:L416bc8:{c.instructions+=3;NFSU2_TR(0x416bc8);
__builtin_memmove((R+0),gp(0x890114),4);
}
B416bcd:{NFSU2_TR(0x416bcd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B416bcf:{NFSU2_TR(0x416bcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416c03;}}
}
B416bd1:L416bd1:{c.instructions+=3;NFSU2_TR(0x416bd1);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B416bd6:{NFSU2_TR(0x416bd6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B416bd8:{NFSU2_TR(0x416bd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416c03;}}
}
B416bda:L416bda:{c.instructions+=3;NFSU2_TR(0x416bda);
__builtin_memmove((R+0),gp(0x890104),4);
}
B416bdf:{NFSU2_TR(0x416bdf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B416be1:{NFSU2_TR(0x416be1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416c03;}}
}
B416be3:L416be3:{c.instructions+=3;NFSU2_TR(0x416be3);
__builtin_memmove((R+0),gp(0x89e7e2),1);
}
B416be8:{NFSU2_TR(0x416be8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B416bea:{NFSU2_TR(0x416bea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416c03;}}
}
B416bec:L416bec:{c.instructions+=3;NFSU2_TR(0x416bec);
__builtin_memmove((R+0),gp(0x890100),4);
}
B416bf1:{NFSU2_TR(0x416bf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B416bf3:{NFSU2_TR(0x416bf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416c03;}}
}
B416bf5:L416bf5:{c.instructions+=4;NFSU2_TR(0x416bf5);
__builtin_memmove((R+0),gp(0x890110),4);
}
B416bfa:{NFSU2_TR(0x416bfa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B416bfc:{NFSU2_TR(0x416bfc);
w4(R+0,u32(0x1ull));
}
B416c01:{NFSU2_TR(0x416c01);
if(r1(R+518)){{goto L416c08;}}
}
B416c03:L416c03:{c.instructions+=1;NFSU2_TR(0x416c03);
w4(R+0,u32(0x4ull));
}
B416c08:L416c08:{c.instructions+=5;NFSU2_TR(0x416c08);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B416c0c:{NFSU2_TR(0x416c0c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416c0d:{NFSU2_TR(0x416c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B416c10:{NFSU2_TR(0x416c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7e9e4cull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B416c17:{NFSU2_TR(0x416c17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416c1cull));
TAIL_STATIC(0x5764d0u,576);
}
B416c1c:L416c1c:{c.instructions+=10;NFSU2_TR(0x416c1c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416c20:{NFSU2_TR(0x416c20);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B416c24:{NFSU2_TR(0x416c24);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B416c28:{NFSU2_TR(0x416c28);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B416c2c:{NFSU2_TR(0x416c2c);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416c32:{NFSU2_TR(0x416c32);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B416c36:{NFSU2_TR(0x416c36);
{u32 ea_=u32(u32(7882000u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B416c3c:{NFSU2_TR(0x416c3c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B416c3e:{NFSU2_TR(0x416c3e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B416c41:{NFSU2_TR(0x416c41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416c51;}}
}
B416c43:L416c43:{c.instructions+=3;NFSU2_TR(0x416c43);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416c47:{NFSU2_TR(0x416c47);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B416c4d:{NFSU2_TR(0x416c4d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416c51:L416c51:{c.instructions+=7;NFSU2_TR(0x416c51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B416c53:{NFSU2_TR(0x416c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416c56:{NFSU2_TR(0x416c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B416c5c:{NFSU2_TR(0x416c5c);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B416c61:{NFSU2_TR(0x416c61);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B416c63:{NFSU2_TR(0x416c63);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B416c67:{NFSU2_TR(0x416c67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416ccb;}}
}
B416c69:L416c69:{c.instructions+=3;NFSU2_TR(0x416c69);
__builtin_memmove((R+0),gp(0x890108),4);
}
B416c6e:{NFSU2_TR(0x416c6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B416c70:{NFSU2_TR(0x416c70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416ccb;}}
}
B416c72:L416c72:{c.instructions+=3;NFSU2_TR(0x416c72);
__builtin_memmove((R+0),gp(0x890114),4);
}
B416c77:{NFSU2_TR(0x416c77);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B416c79:{NFSU2_TR(0x416c79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416c8d;}}
}
B416c7b:L416c7b:{c.instructions+=3;NFSU2_TR(0x416c7b);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B416c80:{NFSU2_TR(0x416c80);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B416c82:{NFSU2_TR(0x416c82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416c8d;}}
}
B416c84:L416c84:{c.instructions+=3;NFSU2_TR(0x416c84);
__builtin_memmove((R+0),gp(0x890104),4);
}
B416c89:{NFSU2_TR(0x416c89);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B416c8b:{NFSU2_TR(0x416c8b);
if(r1(R+518)){{goto L416ccb;}}
}
B416c8d:L416c8d:{c.instructions+=6;NFSU2_TR(0x416c8d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416c91:{NFSU2_TR(0x416c91);
{u32 ea_=u32(r4(R+4)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416c97:{NFSU2_TR(0x416c97);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B416c9d:{NFSU2_TR(0x416c9d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B416c9f:{NFSU2_TR(0x416c9f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B416ca2:{NFSU2_TR(0x416ca2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416ccb;}}
}
B416ca4:L416ca4:{c.instructions+=8;NFSU2_TR(0x416ca4);
{u32 ea_=u32(r4(R+4)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416caa:{NFSU2_TR(0x416caa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416cab:{NFSU2_TR(0x416cab);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B416cad:{NFSU2_TR(0x416cad);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B416cb1:{NFSU2_TR(0x416cb1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416cb4:{NFSU2_TR(0x416cb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416cb5:{NFSU2_TR(0x416cb5);
w4(R+4,u32(0x7e9f50ull));
}
B416cba:{NFSU2_TR(0x416cba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416cbfull));
TAIL_STATIC(0x40c840u,40c);
}
B416cbf:L416cbf:{c.instructions+=3;NFSU2_TR(0x416cbf);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416cc3:{NFSU2_TR(0x416cc3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416cc7:{NFSU2_TR(0x416cc7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416ccb:L416ccb:{c.instructions+=11;NFSU2_TR(0x416ccb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416ccc:{NFSU2_TR(0x416ccc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B416cd0:{NFSU2_TR(0x416cd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416cd1:{NFSU2_TR(0x416cd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B416cd5:{NFSU2_TR(0x416cd5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416cd6:{NFSU2_TR(0x416cd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B416cda:{NFSU2_TR(0x416cda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416cdb:{NFSU2_TR(0x416cdb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416cdc:{NFSU2_TR(0x416cdc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416cdd:{NFSU2_TR(0x416cdd);
__builtin_memmove((R+4),(R+24),4);
}
B416cdf:{NFSU2_TR(0x416cdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416ce4ull));
TAIL_STATIC(0x405dc0u,405);
}
B416ce4:L416ce4:{c.instructions+=7;NFSU2_TR(0x416ce4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416ce8:{NFSU2_TR(0x416ce8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416cec:{NFSU2_TR(0x416cec);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B416cf0:{NFSU2_TR(0x416cf0);
{u32 ea_=u32(u32(7881948u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B416cf6:{NFSU2_TR(0x416cf6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B416cf8:{NFSU2_TR(0x416cf8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B416cfb:{NFSU2_TR(0x416cfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416d1e;}}
}
B416cfd:L416cfd:{c.instructions+=6;NFSU2_TR(0x416cfd);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416d01:{NFSU2_TR(0x416d01);
{u32 ea_=u32(u32(7881940u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416d07:{NFSU2_TR(0x416d07);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B416d0b:{NFSU2_TR(0x416d0b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B416d0d:{NFSU2_TR(0x416d0d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B416d10:{NFSU2_TR(0x416d10);
if(r1(R+514)){{goto L416d24;}}
}
B416d12:L416d12:{c.instructions+=3;NFSU2_TR(0x416d12);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B416d14:{NFSU2_TR(0x416d14);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x42340000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B416d1c:{NFSU2_TR(0x416d1c);
{goto L416d28;}
}
B416d1e:L416d1e:{c.instructions+=1;NFSU2_TR(0x416d1e);
{u32 ea_=u32(u32(7881948u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416d24:L416d24:{c.instructions+=1;NFSU2_TR(0x416d24);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416d28:L416d28:{c.instructions+=5;NFSU2_TR(0x416d28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416d29:{NFSU2_TR(0x416d29);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416d2a:{NFSU2_TR(0x416d2a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416d2b:{NFSU2_TR(0x416d2b);
__builtin_memmove((R+4),(R+24),4);
}
B416d2d:{NFSU2_TR(0x416d2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416d32ull));
TAIL_STATIC(0x4060e0u,406);
}
B416d32:L416d32:{c.instructions+=14;NFSU2_TR(0x416d32);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416d36:{NFSU2_TR(0x416d36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B416d37:{NFSU2_TR(0x416d37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B416d38:{NFSU2_TR(0x416d38);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416d3c:{NFSU2_TR(0x416d3c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416d40:{NFSU2_TR(0x416d40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B416d41:{NFSU2_TR(0x416d41);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B416d43:{NFSU2_TR(0x416d43);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416d47:{NFSU2_TR(0x416d47);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B416d4b:{NFSU2_TR(0x416d4b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416d4f:{NFSU2_TR(0x416d4f);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B416d51:{NFSU2_TR(0x416d51);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B416d53:{NFSU2_TR(0x416d53);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B416d56:{NFSU2_TR(0x416d56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416d5e;}}
}
B416d58:L416d58:{c.instructions+=2;NFSU2_TR(0x416d58);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B416d5a:{NFSU2_TR(0x416d5a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416d5e:L416d5e:{c.instructions+=5;NFSU2_TR(0x416d5e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416d62:{NFSU2_TR(0x416d62);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B416d64:{NFSU2_TR(0x416d64);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B416d66:{NFSU2_TR(0x416d66);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B416d69:{NFSU2_TR(0x416d69);
if(r1(R+514)){{goto L416d71;}}
}
B416d6b:L416d6b:{c.instructions+=2;NFSU2_TR(0x416d6b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B416d6d:{NFSU2_TR(0x416d6d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416d71:L416d71:{c.instructions+=6;NFSU2_TR(0x416d71);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B416d75:{NFSU2_TR(0x416d75);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B416d77:{NFSU2_TR(0x416d77);
{u32 ea_=u32(u32(7879412u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B416d7d:{NFSU2_TR(0x416d7d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B416d7f:{NFSU2_TR(0x416d7f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B416d82:{NFSU2_TR(0x416d82);
if(r4(MODV+64)){goto L416d8c;}
if(r1(R+514)){{goto L416d8c;}}
}
B416d84:L416d84:{c.instructions+=2;NFSU2_TR(0x416d84);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416d8a:{NFSU2_TR(0x416d8a);
{goto L416d90;}
}
B416d8c:L416d8c:{c.instructions+=1;NFSU2_TR(0x416d8c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416d90:L416d90:{c.instructions+=2;NFSU2_TR(0x416d90);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416d96:{NFSU2_TR(0x416d96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416d9bull));
TAIL_STATIC(0x75bed4u,75b);
}
B416d9b:L416d9b:{c.instructions+=13;NFSU2_TR(0x416d9b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416d9f:{NFSU2_TR(0x416d9f);
__builtin_memmove((R+4),(R+0),4);
}
B416da1:{NFSU2_TR(0x416da1);
w4(R+0,u32(0xb60b60b7ull));
}
B416da6:{NFSU2_TR(0x416da6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B416da8:{NFSU2_TR(0x416da8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B416daa:{NFSU2_TR(0x416daa);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B416dad:{NFSU2_TR(0x416dad);
__builtin_memmove((R+4),(R+8),4);
}
B416daf:{NFSU2_TR(0x416daf);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B416db2:{NFSU2_TR(0x416db2);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B416db4:{NFSU2_TR(0x416db4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B416db8:{NFSU2_TR(0x416db8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B416db9:{NFSU2_TR(0x416db9);
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
B416dbc:{NFSU2_TR(0x416dbc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B416dc0:L416dc0:{c.instructions+=3;NFSU2_TR(0x416dc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416dc1:{NFSU2_TR(0x416dc1);
__builtin_memmove((R+24),(R+4),4);
}
B416dc3:{NFSU2_TR(0x416dc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416dc8ull));
TAIL_STATIC(0x4103a0u,410);
}
B416dc8:L416dc8:{c.instructions+=2;NFSU2_TR(0x416dc8);
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
B416dcd:{NFSU2_TR(0x416dcd);
if(r1(R+518)){{goto L416dd8;}}
}
B416dcf:L416dcf:{c.instructions+=2;NFSU2_TR(0x416dcf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416dd0:{NFSU2_TR(0x416dd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416dd5ull));
TAIL_STATIC(0x575630u,575);
}
B416dd5:L416dd5:{c.instructions+=1;NFSU2_TR(0x416dd5);
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
B416dd8:L416dd8:{c.instructions+=3;NFSU2_TR(0x416dd8);
__builtin_memmove((R+0),(R+24),4);
}
B416dda:{NFSU2_TR(0x416dda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B416ddb:{NFSU2_TR(0x416ddb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B416de0:L416de0:{c.instructions+=7;NFSU2_TR(0x416de0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416de1:{NFSU2_TR(0x416de1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416de2:{NFSU2_TR(0x416de2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B416de6:{NFSU2_TR(0x416de6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2fbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B416dec:{NFSU2_TR(0x416dec);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B416dee:{NFSU2_TR(0x416dee);
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
B416df0:{NFSU2_TR(0x416df0);
if(r1(R+518)){{goto L416e11;}}
}
B416df2:L416df2:{c.instructions+=7;NFSU2_TR(0x416df2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B416df8:{NFSU2_TR(0x416df8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B416dfe:{NFSU2_TR(0x416dfe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B416e04:{NFSU2_TR(0x416e04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B416e0e:{NFSU2_TR(0x416e0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B416e0f:{NFSU2_TR(0x416e0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B416e10:{NFSU2_TR(0x416e10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B416e11:L416e11:{c.instructions+=3;NFSU2_TR(0x416e11);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416e15:{NFSU2_TR(0x416e15);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x91ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B416e1a:{NFSU2_TR(0x416e1a);
if(r1(R+518)){{goto L416ee7;}}
}
B416e20:L416e20:{c.instructions+=2;NFSU2_TR(0x416e20);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B416e21:{NFSU2_TR(0x416e21);
if(r1(R+518)){{goto L416e72;}}
}
B416e23:L416e23:{c.instructions+=2;NFSU2_TR(0x416e23);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B416e24:{NFSU2_TR(0x416e24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416ef1;}}
}
B416e2a:L416e2a:{c.instructions+=7;NFSU2_TR(0x416e2a);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B416e2f:{NFSU2_TR(0x416e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B416e35:{NFSU2_TR(0x416e35);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B416e39:{NFSU2_TR(0x416e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416e3f:{NFSU2_TR(0x416e3f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B416e42:{NFSU2_TR(0x416e42);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B416e46:{NFSU2_TR(0x416e46);
if(r1(R+518)){{goto L416e4e;}}
}
B416e48:L416e48:{c.instructions+=1;NFSU2_TR(0x416e48);
{u32 ea_=u32(u32(7879452u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416e4e:L416e4e:{c.instructions+=5;NFSU2_TR(0x416e4e);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416e54:{NFSU2_TR(0x416e54);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B416e56:{NFSU2_TR(0x416e56);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B416e58:{NFSU2_TR(0x416e58);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B416e5b:{NFSU2_TR(0x416e5b);
if(r1(R+514)){{goto L416e65;}}
}
B416e5d:L416e5d:{c.instructions+=2;NFSU2_TR(0x416e5d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B416e5f:{NFSU2_TR(0x416e5f);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416e65:L416e65:{c.instructions+=1;NFSU2_TR(0x416e65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416e6aull));
TAIL_STATIC(0x75bed4u,75b);
}
B416e6a:L416e6a:{c.instructions+=2;NFSU2_TR(0x416e6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B416e70:{NFSU2_TR(0x416e70);
{goto L416ef1;}
}
B416e72:L416e72:{c.instructions+=7;NFSU2_TR(0x416e72);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B416e77:{NFSU2_TR(0x416e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416e7d:{NFSU2_TR(0x416e7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B416e81:{NFSU2_TR(0x416e81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416e82:{NFSU2_TR(0x416e82);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B416e86:{NFSU2_TR(0x416e86);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416e8a:{NFSU2_TR(0x416e8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416e8full));
TAIL_STATIC(0x404800u,404);
}
B416e8f:L416e8f:{c.instructions+=3;NFSU2_TR(0x416e8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B416e92:{NFSU2_TR(0x416e92);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B416e94:{NFSU2_TR(0x416e94);
if(r1(R+518)){{goto L416ebf;}}
}
B416e96:L416e96:{c.instructions+=4;NFSU2_TR(0x416e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B416e9c:{NFSU2_TR(0x416e9c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B416ea3:{NFSU2_TR(0x416ea3);
w1(R+12,u8(0x1ull));
}
B416ea5:{NFSU2_TR(0x416ea5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416eb3;}}
}
B416ea7:L416ea7:{c.instructions+=3;NFSU2_TR(0x416ea7);
{u32 ea_=u32(u32(7879460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416ead:{NFSU2_TR(0x416ead);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416eb1:{NFSU2_TR(0x416eb1);
{goto L416ec3;}
}
B416eb3:L416eb3:{c.instructions+=3;NFSU2_TR(0x416eb3);
{u32 ea_=u32(u32(7879456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416eb9:{NFSU2_TR(0x416eb9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416ebd:{NFSU2_TR(0x416ebd);
{goto L416ec3;}
}
B416ebf:L416ebf:{c.instructions+=1;NFSU2_TR(0x416ebf);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416ec3:L416ec3:{c.instructions+=5;NFSU2_TR(0x416ec3);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416ec9:{NFSU2_TR(0x416ec9);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B416ecb:{NFSU2_TR(0x416ecb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B416ecd:{NFSU2_TR(0x416ecd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B416ed0:{NFSU2_TR(0x416ed0);
if(r1(R+514)){{goto L416eda;}}
}
B416ed2:L416ed2:{c.instructions+=2;NFSU2_TR(0x416ed2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B416ed4:{NFSU2_TR(0x416ed4);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B416eda:L416eda:{c.instructions+=1;NFSU2_TR(0x416eda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416edfull));
TAIL_STATIC(0x75bed4u,75b);
}
B416edf:L416edf:{c.instructions+=2;NFSU2_TR(0x416edf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B416ee5:{NFSU2_TR(0x416ee5);
{goto L416ef1;}
}
B416ee7:L416ee7:{c.instructions+=2;NFSU2_TR(0x416ee7);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B416eeb:{NFSU2_TR(0x416eeb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B416ef1:L416ef1:{c.instructions+=3;NFSU2_TR(0x416ef1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B416ef7:{NFSU2_TR(0x416ef7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B416ef9:{NFSU2_TR(0x416ef9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416f0d;}}
}
B416efb:L416efb:{c.instructions+=4;NFSU2_TR(0x416efb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B416f01:{NFSU2_TR(0x416f01);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B416f07:{NFSU2_TR(0x416f07);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+0))));
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B416f09:{NFSU2_TR(0x416f09);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L416f0d;}}
}
B416f0b:L416f0b:{c.instructions+=1;NFSU2_TR(0x416f0b);
__builtin_memmove((R+0),(R+4),1);
}
B416f0d:L416f0d:{c.instructions+=10;NFSU2_TR(0x416f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B416f13:{NFSU2_TR(0x416f13);
w4(R+0,u32(r1(R+0)));
}
B416f16:{NFSU2_TR(0x416f16);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B416f1a:{NFSU2_TR(0x416f1a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B416f1e:{NFSU2_TR(0x416f1e);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B416f24:{NFSU2_TR(0x416f24);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B416f28:{NFSU2_TR(0x416f28);
{u32 ea_=u32(r4(R+24)+u32(724u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B416f2e:{NFSU2_TR(0x416f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416f34:{NFSU2_TR(0x416f34);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B416f37:{NFSU2_TR(0x416f37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416f60;}}
}
B416f39:L416f39:{c.instructions+=7;NFSU2_TR(0x416f39);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B416f3b:{NFSU2_TR(0x416f3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B416f3f:{NFSU2_TR(0x416f3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B416f43:{NFSU2_TR(0x416f43);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416f44:{NFSU2_TR(0x416f44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416f45:{NFSU2_TR(0x416f45);
w4(R+4,u32(0x7ea00cull));
}
B416f4a:{NFSU2_TR(0x416f4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416f51;}}
}
B416f4c:L416f4c:{c.instructions+=1;NFSU2_TR(0x416f4c);
w4(R+4,u32(0x7ea004ull));
}
B416f51:L416f51:{c.instructions+=1;NFSU2_TR(0x416f51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416f56ull));
TAIL_STATIC(0x40c840u,40c);
}
B416f56:L416f56:{c.instructions+=2;NFSU2_TR(0x416f56);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B416f5a:{NFSU2_TR(0x416f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B416f60:L416f60:{c.instructions+=3;NFSU2_TR(0x416f60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B416f61:{NFSU2_TR(0x416f61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B416f62:{NFSU2_TR(0x416f62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B416f66:L416f66:{c.instructions+=29;NFSU2_TR(0x416f66);
}
B416f67:{NFSU2_TR(0x416f67);
}
B416f68:{NFSU2_TR(0x416f68);
}
B416f69:{NFSU2_TR(0x416f69);
}
B416f6a:{NFSU2_TR(0x416f6a);
}
B416f6b:{NFSU2_TR(0x416f6b);
}
B416f6c:{NFSU2_TR(0x416f6c);
}
B416f6d:{NFSU2_TR(0x416f6d);
}
B416f6e:{NFSU2_TR(0x416f6e);
}
B416f6f:{NFSU2_TR(0x416f6f);
}
B416f70:{NFSU2_TR(0x416f70);
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
B416f73:{NFSU2_TR(0x416f73);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416f74:{NFSU2_TR(0x416f74);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416f75:{NFSU2_TR(0x416f75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416f76:{NFSU2_TR(0x416f76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B416f77:{NFSU2_TR(0x416f77);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B416f7b:{NFSU2_TR(0x416f7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+20),(U+0),4);
}
B416f7d:{NFSU2_TR(0x416f7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x31cull))));
__builtin_memmove((R+0),(U+0),4);
}
B416f83:{NFSU2_TR(0x416f83);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B416f87:{NFSU2_TR(0x416f87);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B416f8e:{NFSU2_TR(0x416f8e);
__builtin_memmove((R+12),(R+4),4);
}
B416f90:{NFSU2_TR(0x416f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B416f93:{NFSU2_TR(0x416f93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B416f95:{NFSU2_TR(0x416f95);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B416f98:{NFSU2_TR(0x416f98);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B416f9c:{NFSU2_TR(0x416f9c);
__builtin_memmove((R+4),(R+12),4);
}
B416f9e:{NFSU2_TR(0x416f9e);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B416fa3:{NFSU2_TR(0x416fa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B416fa7:{NFSU2_TR(0x416fa7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416faaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B416faa:L416faa:{c.instructions+=8;NFSU2_TR(0x416faa);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B416fac:{NFSU2_TR(0x416fac);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B416fae:{NFSU2_TR(0x416fae);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B416fb1:{NFSU2_TR(0x416fb1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B416fb2:{NFSU2_TR(0x416fb2);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B416fb4:{NFSU2_TR(0x416fb4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B416fb8:{NFSU2_TR(0x416fb8);
__builtin_memmove((R+24),(R+4),4);
}
B416fba:{NFSU2_TR(0x416fba);
if(r1(R+518)){{goto L416fc7;}}
}
B416fbc:L416fbc:{c.instructions+=4;NFSU2_TR(0x416fbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B416fbf:{NFSU2_TR(0x416fbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B416fc1:{NFSU2_TR(0x416fc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B416fc5:{NFSU2_TR(0x416fc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L416fd3;}}
}
B416fc7:L416fc7:{c.instructions+=7;NFSU2_TR(0x416fc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B416fc8:{NFSU2_TR(0x416fc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B416fc9:{NFSU2_TR(0x416fc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B416fca:{NFSU2_TR(0x416fca);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B416fcc:{NFSU2_TR(0x416fcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B416fcd:{NFSU2_TR(0x416fcd);
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
B416fd0:{NFSU2_TR(0x416fd0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B416fd3:L416fd3:{c.instructions+=3;NFSU2_TR(0x416fd3);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B416fd8:{NFSU2_TR(0x416fd8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B416fda:{NFSU2_TR(0x416fda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4172adu,417);}
}
B416fe0:L416fe0:{c.instructions+=3;NFSU2_TR(0x416fe0);
__builtin_memmove((R+0),gp(0x890108),4);
}
B416fe5:{NFSU2_TR(0x416fe5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B416fe7:{NFSU2_TR(0x416fe7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4172adu,417);}
}
B416fed:L416fed:{c.instructions+=4;NFSU2_TR(0x416fed);
__builtin_memmove((R+8),gp(0x89e7b0),4);
}
B416ff3:{NFSU2_TR(0x416ff3);
__builtin_memmove((R+0),gp(0x890118),4);
}
B416ff8:{NFSU2_TR(0x416ff8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B416ffb:{NFSU2_TR(0x416ffb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
TAIL_STATIC(0x417002u,417);
}
XIT:NFSU2_TR_EXIT(0x416,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
