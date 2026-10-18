#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_524(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_53b(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_547(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55b(u8* __restrict R,Cpu& c);
u32 body_55c(u8* __restrict R,Cpu& c);
u32 body_563(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x562,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x562,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_562(u8* __restrict R,Cpu& c);
u32 page_562(Cpu& c){return body_562(c.regs.data(),c);}
__attribute__((noinline)) u32 body_562(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x562000:goto L562000;
case 0x562002:c.instructions+=1;goto B562002;
case 0x562008:goto L562008;
case 0x56200d:c.instructions+=1;goto B56200d;
case 0x562012:goto L562012;
case 0x562015:c.instructions+=2;goto B562015;
case 0x562017:c.instructions+=1;goto B562017;
case 0x56201d:goto L56201d;
case 0x562020:c.instructions+=5;goto B562020;
case 0x562022:c.instructions+=4;goto B562022;
case 0x562027:c.instructions+=3;goto B562027;
case 0x562028:c.instructions+=2;goto B562028;
case 0x56202d:c.instructions+=1;goto B56202d;
case 0x562032:goto L562032;
case 0x562035:c.instructions+=5;goto B562035;
case 0x562036:c.instructions+=4;goto B562036;
case 0x562037:c.instructions+=3;goto B562037;
case 0x562038:c.instructions+=2;goto B562038;
case 0x562039:c.instructions+=1;goto B562039;
case 0x56203c:goto L56203c;
case 0x56203f:c.instructions+=5;goto B56203f;
case 0x562041:c.instructions+=4;goto B562041;
case 0x562046:c.instructions+=3;goto B562046;
case 0x56204b:c.instructions+=2;goto B56204b;
case 0x56204c:c.instructions+=1;goto B56204c;
case 0x562051:goto L562051;
case 0x562054:c.instructions+=1;goto B562054;
case 0x562059:goto L562059;
case 0x56205f:c.instructions+=5;goto B56205f;
case 0x562061:c.instructions+=4;goto B562061;
case 0x562063:c.instructions+=3;goto B562063;
case 0x562064:c.instructions+=2;goto B562064;
case 0x562069:c.instructions+=1;goto B562069;
case 0x56206e:goto L56206e;
case 0x562073:c.instructions+=2;goto B562073;
case 0x56207a:c.instructions+=1;goto B56207a;
case 0x56207f:goto L56207f;
case 0x562081:c.instructions+=1;goto B562081;
case 0x562086:goto L562086;
case 0x562087:c.instructions+=4;goto B562087;
case 0x562088:c.instructions+=3;goto B562088;
case 0x562089:c.instructions+=2;goto B562089;
case 0x56208a:c.instructions+=1;goto B56208a;
case 0x56208d:goto L56208d;
case 0x562097:c.instructions+=1;goto B562097;
case 0x562099:goto L562099;
case 0x5620a0:c.instructions+=3;goto B5620a0;
case 0x5620a7:c.instructions+=2;goto B5620a7;
case 0x5620ae:c.instructions+=1;goto B5620ae;
case 0x5620b3:goto L5620b3;
case 0x5620b5:c.instructions+=1;goto B5620b5;
case 0x5620ba:goto L5620ba;
case 0x5620bb:c.instructions+=4;goto B5620bb;
case 0x5620bc:c.instructions+=3;goto B5620bc;
case 0x5620bd:c.instructions+=2;goto B5620bd;
case 0x5620be:c.instructions+=1;goto B5620be;
case 0x5620d0:goto L5620d0;
case 0x5620d3:c.instructions+=8;goto B5620d3;
case 0x5620d4:c.instructions+=7;goto B5620d4;
case 0x5620d5:c.instructions+=6;goto B5620d5;
case 0x5620d7:c.instructions+=5;goto B5620d7;
case 0x5620dd:c.instructions+=4;goto B5620dd;
case 0x5620e0:c.instructions+=3;goto B5620e0;
case 0x5620e1:c.instructions+=2;goto B5620e1;
case 0x5620e6:c.instructions+=1;goto B5620e6;
case 0x5620e8:goto L5620e8;
case 0x5620ea:c.instructions+=1;goto B5620ea;
case 0x5620ec:goto L5620ec;
case 0x5620f1:c.instructions+=2;goto B5620f1;
case 0x5620f3:c.instructions+=1;goto B5620f3;
case 0x5620f5:goto L5620f5;
case 0x5620fa:c.instructions+=3;goto B5620fa;
case 0x5620fb:c.instructions+=2;goto B5620fb;
case 0x562100:c.instructions+=1;goto B562100;
case 0x562105:goto L562105;
case 0x562107:c.instructions+=1;goto B562107;
case 0x562109:goto L562109;
case 0x56210c:c.instructions+=2;goto B56210c;
case 0x56210e:c.instructions+=1;goto B56210e;
case 0x562110:goto L562110;
case 0x562113:c.instructions+=2;goto B562113;
case 0x562115:c.instructions+=1;goto B562115;
case 0x562117:goto L562117;
case 0x562118:c.instructions+=5;goto B562118;
case 0x56211a:c.instructions+=4;goto B56211a;
case 0x56211c:c.instructions+=3;goto B56211c;
case 0x562121:c.instructions+=2;goto B562121;
case 0x562123:c.instructions+=1;goto B562123;
case 0x562128:goto L562128;
case 0x56212e:c.instructions+=2;goto B56212e;
case 0x562130:c.instructions+=1;goto B562130;
case 0x562132:goto L562132;
case 0x562138:c.instructions+=2;goto B562138;
case 0x562139:c.instructions+=1;goto B562139;
case 0x56213e:goto L56213e;
case 0x562145:goto L562145;
case 0x56214a:c.instructions+=3;goto B56214a;
case 0x56214b:c.instructions+=2;goto B56214b;
case 0x56214d:c.instructions+=1;goto B56214d;
case 0x562152:goto L562152;
case 0x562155:c.instructions+=4;goto B562155;
case 0x562156:c.instructions+=3;goto B562156;
case 0x56215b:c.instructions+=2;goto B56215b;
case 0x56215c:c.instructions+=1;goto B56215c;
case 0x562161:goto L562161;
case 0x562164:c.instructions+=4;goto B562164;
case 0x562167:c.instructions+=3;goto B562167;
case 0x56216a:c.instructions+=2;goto B56216a;
case 0x56216c:c.instructions+=1;goto B56216c;
case 0x56216e:goto L56216e;
case 0x562171:c.instructions+=1;goto B562171;
case 0x562173:goto L562173;
case 0x562175:goto L562175;
case 0x562178:c.instructions+=4;goto B562178;
case 0x562179:c.instructions+=3;goto B562179;
case 0x56217e:c.instructions+=2;goto B56217e;
case 0x56217f:c.instructions+=1;goto B56217f;
case 0x562184:goto L562184;
case 0x562187:c.instructions+=6;goto B562187;
case 0x56218a:c.instructions+=5;goto B56218a;
case 0x562190:c.instructions+=4;goto B562190;
case 0x562193:c.instructions+=3;goto B562193;
case 0x562196:c.instructions+=2;goto B562196;
case 0x562198:c.instructions+=1;goto B562198;
case 0x56219a:goto L56219a;
case 0x56219d:c.instructions+=6;goto B56219d;
case 0x56219e:c.instructions+=5;goto B56219e;
case 0x5621a3:c.instructions+=4;goto B5621a3;
case 0x5621a8:c.instructions+=3;goto B5621a8;
case 0x5621a9:c.instructions+=2;goto B5621a9;
case 0x5621af:c.instructions+=1;goto B5621af;
case 0x5621b4:goto L5621b4;
case 0x5621b7:c.instructions+=2;goto B5621b7;
case 0x5621b9:c.instructions+=1;goto B5621b9;
case 0x5621be:goto L5621be;
case 0x5621bf:c.instructions+=4;goto B5621bf;
case 0x5621c0:c.instructions+=3;goto B5621c0;
case 0x5621c1:c.instructions+=2;goto B5621c1;
case 0x5621c4:c.instructions+=1;goto B5621c4;
case 0x5621c5:goto L5621c5;
case 0x5621c7:c.instructions+=1;goto B5621c7;
case 0x5621cd:goto L5621cd;
case 0x5621d4:c.instructions+=3;goto B5621d4;
case 0x5621d9:c.instructions+=2;goto B5621d9;
case 0x5621db:c.instructions+=1;goto B5621db;
case 0x5621dd:goto L5621dd;
case 0x5621e2:c.instructions+=1;goto B5621e2;
case 0x5621e7:goto L5621e7;
case 0x5621ea:c.instructions+=2;goto B5621ea;
case 0x5621ec:c.instructions+=1;goto B5621ec;
case 0x5621ee:goto L5621ee;
case 0x5621f1:c.instructions+=5;goto B5621f1;
case 0x5621f3:c.instructions+=4;goto B5621f3;
case 0x5621f8:c.instructions+=3;goto B5621f8;
case 0x5621f9:c.instructions+=2;goto B5621f9;
case 0x5621fe:c.instructions+=1;goto B5621fe;
case 0x562203:goto L562203;
case 0x562206:goto L562206;
case 0x56220c:c.instructions+=1;goto B56220c;
case 0x56220e:goto L56220e;
case 0x562214:c.instructions+=1;goto B562214;
case 0x562216:goto L562216;
case 0x562219:c.instructions+=5;goto B562219;
case 0x56221a:c.instructions+=4;goto B56221a;
case 0x56221f:c.instructions+=3;goto B56221f;
case 0x562224:c.instructions+=2;goto B562224;
case 0x562225:c.instructions+=1;goto B562225;
case 0x562227:goto L562227;
case 0x56222a:c.instructions+=4;goto B56222a;
case 0x56222b:c.instructions+=3;goto B56222b;
case 0x562230:c.instructions+=2;goto B562230;
case 0x562235:c.instructions+=1;goto B562235;
case 0x562236:goto L562236;
case 0x56223b:goto L56223b;
case 0x562241:c.instructions+=4;goto B562241;
case 0x562244:c.instructions+=3;goto B562244;
case 0x562246:c.instructions+=2;goto B562246;
case 0x56224c:c.instructions+=1;goto B56224c;
case 0x562251:goto L562251;
case 0x562252:c.instructions+=4;goto B562252;
case 0x562253:c.instructions+=3;goto B562253;
case 0x562254:c.instructions+=2;goto B562254;
case 0x562257:c.instructions+=1;goto B562257;
case 0x562258:goto L562258;
case 0x56225e:c.instructions+=2;goto B56225e;
case 0x562260:c.instructions+=1;goto B562260;
case 0x562266:goto L562266;
case 0x562269:c.instructions+=5;goto B562269;
case 0x56226a:c.instructions+=4;goto B56226a;
case 0x56226f:c.instructions+=3;goto B56226f;
case 0x562274:c.instructions+=2;goto B562274;
case 0x562275:c.instructions+=1;goto B562275;
case 0x56227a:goto L56227a;
case 0x56227d:c.instructions+=2;goto B56227d;
case 0x56227f:c.instructions+=1;goto B56227f;
case 0x562284:goto L562284;
case 0x562285:c.instructions+=4;goto B562285;
case 0x562286:c.instructions+=3;goto B562286;
case 0x562287:c.instructions+=2;goto B562287;
case 0x56228a:c.instructions+=1;goto B56228a;
case 0x56228b:goto L56228b;
case 0x56228e:c.instructions+=1;goto B56228e;
case 0x562294:goto L562294;
case 0x562299:c.instructions+=3;goto B562299;
case 0x56229e:c.instructions+=2;goto B56229e;
case 0x5622a5:c.instructions+=1;goto B5622a5;
case 0x5622aa:goto L5622aa;
case 0x5622ac:c.instructions+=3;goto B5622ac;
case 0x5622ad:c.instructions+=2;goto B5622ad;
case 0x5622b2:c.instructions+=1;goto B5622b2;
case 0x5622b7:goto L5622b7;
case 0x5622bd:c.instructions+=6;goto B5622bd;
case 0x5622c0:c.instructions+=5;goto B5622c0;
case 0x5622c2:c.instructions+=4;goto B5622c2;
case 0x5622c7:c.instructions+=3;goto B5622c7;
case 0x5622c8:c.instructions+=2;goto B5622c8;
case 0x5622cd:c.instructions+=1;goto B5622cd;
case 0x5622d2:goto L5622d2;
case 0x5622d8:c.instructions+=2;goto B5622d8;
case 0x5622da:c.instructions+=1;goto B5622da;
case 0x5622dc:goto L5622dc;
case 0x5622de:c.instructions+=2;goto B5622de;
case 0x5622e1:c.instructions+=1;goto B5622e1;
case 0x5622e6:goto L5622e6;
case 0x5622e7:c.instructions+=3;goto B5622e7;
case 0x5622e8:c.instructions+=2;goto B5622e8;
case 0x5622ea:c.instructions+=1;goto B5622ea;
case 0x5622ef:goto L5622ef;
case 0x5622f2:c.instructions+=2;goto B5622f2;
case 0x5622f4:c.instructions+=1;goto B5622f4;
case 0x5622f6:goto L5622f6;
case 0x5622f9:c.instructions+=5;goto B5622f9;
case 0x5622fa:c.instructions+=4;goto B5622fa;
case 0x5622ff:c.instructions+=3;goto B5622ff;
case 0x562304:c.instructions+=2;goto B562304;
case 0x562305:c.instructions+=1;goto B562305;
case 0x56230a:goto L56230a;
case 0x56230d:goto L56230d;
case 0x56230f:c.instructions+=2;goto B56230f;
case 0x562315:c.instructions+=1;goto B562315;
case 0x56231a:goto L56231a;
case 0x56231b:c.instructions+=4;goto B56231b;
case 0x56231c:c.instructions+=3;goto B56231c;
case 0x56231d:c.instructions+=2;goto B56231d;
case 0x562320:c.instructions+=1;goto B562320;
case 0x562321:goto L562321;
case 0x562323:c.instructions+=1;goto B562323;
case 0x562329:goto L562329;
case 0x56232f:c.instructions+=3;goto B56232f;
case 0x562331:c.instructions+=2;goto B562331;
case 0x562338:c.instructions+=1;goto B562338;
case 0x56233a:goto L56233a;
case 0x56233d:c.instructions+=6;goto B56233d;
case 0x56233e:c.instructions+=5;goto B56233e;
case 0x562343:c.instructions+=4;goto B562343;
case 0x562348:c.instructions+=3;goto B562348;
case 0x562349:c.instructions+=2;goto B562349;
case 0x562350:c.instructions+=1;goto B562350;
case 0x562355:goto L562355;
case 0x562358:c.instructions+=3;goto B562358;
case 0x56235d:c.instructions+=2;goto B56235d;
case 0x56235e:c.instructions+=1;goto B56235e;
case 0x562363:goto L562363;
case 0x562366:goto L562366;
case 0x562369:c.instructions+=2;goto B562369;
case 0x56236c:c.instructions+=1;goto B56236c;
case 0x56236e:goto L56236e;
case 0x562371:c.instructions+=1;goto B562371;
case 0x562373:goto L562373;
case 0x562375:goto L562375;
case 0x562376:c.instructions+=2;goto B562376;
case 0x562378:c.instructions+=1;goto B562378;
case 0x56237d:goto L56237d;
case 0x562382:c.instructions+=1;goto B562382;
case 0x562387:goto L562387;
case 0x56238a:c.instructions+=2;goto B56238a;
case 0x56238d:c.instructions+=1;goto B56238d;
case 0x56238f:goto L56238f;
case 0x562392:c.instructions+=2;goto B562392;
case 0x562394:c.instructions+=1;goto B562394;
case 0x562396:goto L562396;
case 0x56239b:c.instructions+=3;goto B56239b;
case 0x56239c:c.instructions+=2;goto B56239c;
case 0x5623a1:c.instructions+=1;goto B5623a1;
case 0x5623a6:goto L5623a6;
case 0x5623a9:c.instructions+=3;goto B5623a9;
case 0x5623ac:c.instructions+=2;goto B5623ac;
case 0x5623ae:c.instructions+=1;goto B5623ae;
case 0x5623b0:goto L5623b0;
case 0x5623b3:c.instructions+=1;goto B5623b3;
case 0x5623b5:goto L5623b5;
case 0x5623b7:goto L5623b7;
case 0x5623b9:c.instructions+=1;goto B5623b9;
case 0x5623bb:goto L5623bb;
case 0x5623be:c.instructions+=1;goto B5623be;
case 0x5623c0:goto L5623c0;
case 0x5623c2:goto L5623c2;
case 0x5623c5:c.instructions+=9;goto B5623c5;
case 0x5623c7:c.instructions+=8;goto B5623c7;
case 0x5623cb:c.instructions+=7;goto B5623cb;
case 0x5623cc:c.instructions+=6;goto B5623cc;
case 0x5623d0:c.instructions+=5;goto B5623d0;
case 0x5623d1:c.instructions+=4;goto B5623d1;
case 0x5623d2:c.instructions+=3;goto B5623d2;
case 0x5623d3:c.instructions+=2;goto B5623d3;
case 0x5623d8:c.instructions+=1;goto B5623d8;
case 0x5623dd:goto L5623dd;
case 0x5623e3:c.instructions+=1;goto B5623e3;
case 0x5623e9:goto L5623e9;
case 0x5623ef:c.instructions+=1;goto B5623ef;
case 0x5623f5:goto L5623f5;
case 0x5623fa:c.instructions+=1;goto B5623fa;
case 0x5623ff:goto L5623ff;
case 0x562401:c.instructions+=1;goto B562401;
case 0x562403:goto L562403;
case 0x562408:c.instructions+=1;goto B562408;
case 0x56240d:goto L56240d;
case 0x562414:c.instructions+=1;goto B562414;
case 0x562416:goto L562416;
case 0x56241b:c.instructions+=1;goto B56241b;
case 0x562420:goto L562420;
case 0x562423:c.instructions+=4;goto B562423;
case 0x562424:c.instructions+=3;goto B562424;
case 0x562429:c.instructions+=2;goto B562429;
case 0x56242a:c.instructions+=1;goto B56242a;
case 0x56242c:goto L56242c;
case 0x562431:c.instructions+=1;goto B562431;
case 0x562436:goto L562436;
case 0x562439:c.instructions+=3;goto B562439;
case 0x56243a:c.instructions+=2;goto B56243a;
case 0x56243f:c.instructions+=1;goto B56243f;
case 0x562440:goto L562440;
case 0x562445:goto L562445;
case 0x562449:c.instructions+=3;goto B562449;
case 0x56244c:c.instructions+=2;goto B56244c;
case 0x56244e:c.instructions+=1;goto B56244e;
case 0x562450:goto L562450;
case 0x562451:c.instructions+=5;goto B562451;
case 0x562454:c.instructions+=4;goto B562454;
case 0x562459:c.instructions+=3;goto B562459;
case 0x56245e:c.instructions+=2;goto B56245e;
case 0x56245f:c.instructions+=1;goto B56245f;
case 0x562461:goto L562461;
case 0x562466:c.instructions+=1;goto B562466;
case 0x56246b:goto L56246b;
case 0x56246e:c.instructions+=3;goto B56246e;
case 0x56246f:c.instructions+=2;goto B56246f;
case 0x562474:c.instructions+=1;goto B562474;
case 0x562475:goto L562475;
case 0x56247a:goto L56247a;
case 0x56247e:c.instructions+=3;goto B56247e;
case 0x562481:c.instructions+=2;goto B562481;
case 0x562483:c.instructions+=1;goto B562483;
case 0x562485:goto L562485;
case 0x562488:c.instructions+=5;goto B562488;
case 0x562489:c.instructions+=4;goto B562489;
case 0x56248e:c.instructions+=3;goto B56248e;
case 0x562493:c.instructions+=2;goto B562493;
case 0x562494:c.instructions+=1;goto B562494;
case 0x562496:goto L562496;
case 0x56249b:c.instructions+=1;goto B56249b;
case 0x5624a0:goto L5624a0;
case 0x5624a1:c.instructions+=3;goto B5624a1;
case 0x5624a4:c.instructions+=2;goto B5624a4;
case 0x5624a9:c.instructions+=1;goto B5624a9;
case 0x5624aa:goto L5624aa;
case 0x5624af:goto L5624af;
case 0x5624b5:c.instructions+=7;goto B5624b5;
case 0x5624b8:c.instructions+=6;goto B5624b8;
case 0x5624bb:c.instructions+=5;goto B5624bb;
case 0x5624bc:c.instructions+=4;goto B5624bc;
case 0x5624c1:c.instructions+=3;goto B5624c1;
case 0x5624c6:c.instructions+=2;goto B5624c6;
case 0x5624c7:c.instructions+=1;goto B5624c7;
case 0x5624cc:goto L5624cc;
case 0x5624cf:c.instructions+=2;goto B5624cf;
case 0x5624d1:c.instructions+=1;goto B5624d1;
case 0x5624d6:goto L5624d6;
case 0x5624d7:c.instructions+=4;goto B5624d7;
case 0x5624d8:c.instructions+=3;goto B5624d8;
case 0x5624d9:c.instructions+=2;goto B5624d9;
case 0x5624dc:c.instructions+=1;goto B5624dc;
case 0x5624dd:goto L5624dd;
case 0x5624e0:c.instructions+=3;goto B5624e0;
case 0x5624e5:c.instructions+=2;goto B5624e5;
case 0x5624e6:c.instructions+=1;goto B5624e6;
case 0x5624eb:goto L5624eb;
case 0x5624ee:c.instructions+=3;goto B5624ee;
case 0x5624f3:c.instructions+=2;goto B5624f3;
case 0x5624f4:c.instructions+=1;goto B5624f4;
case 0x5624f9:goto L5624f9;
case 0x5624fc:c.instructions+=3;goto B5624fc;
case 0x562501:c.instructions+=2;goto B562501;
case 0x562502:c.instructions+=1;goto B562502;
case 0x562507:goto L562507;
case 0x56250a:c.instructions+=3;goto B56250a;
case 0x56250f:c.instructions+=2;goto B56250f;
case 0x562510:c.instructions+=1;goto B562510;
case 0x562515:goto L562515;
case 0x562518:goto L562518;
case 0x56251a:c.instructions+=1;goto B56251a;
case 0x56251f:goto L56251f;
case 0x562520:c.instructions+=4;goto B562520;
case 0x562521:c.instructions+=3;goto B562521;
case 0x562522:c.instructions+=2;goto B562522;
case 0x562525:c.instructions+=1;goto B562525;
case 0x562530:goto L562530;
case 0x562533:c.instructions+=5;goto B562533;
case 0x562534:c.instructions+=4;goto B562534;
case 0x562536:c.instructions+=3;goto B562536;
case 0x56253b:c.instructions+=2;goto B56253b;
case 0x562540:c.instructions+=1;goto B562540;
case 0x562545:goto L562545;
case 0x562547:c.instructions+=3;goto B562547;
case 0x562549:c.instructions+=2;goto B562549;
case 0x56254e:c.instructions+=1;goto B56254e;
case 0x562553:goto L562553;
case 0x562559:c.instructions+=3;goto B562559;
case 0x56255c:c.instructions+=2;goto B56255c;
case 0x56255e:c.instructions+=1;goto B56255e;
case 0x562560:goto L562560;
case 0x562563:c.instructions+=2;goto B562563;
case 0x562565:c.instructions+=1;goto B562565;
case 0x562567:goto L562567;
case 0x56256a:c.instructions+=2;goto B56256a;
case 0x56256c:c.instructions+=1;goto B56256c;
case 0x56256e:goto L56256e;
case 0x562570:c.instructions+=1;goto B562570;
case 0x562572:goto L562572;
case 0x562574:c.instructions+=1;goto B562574;
case 0x562576:goto L562576;
case 0x562578:goto L562578;
case 0x56257d:c.instructions+=3;goto B56257d;
case 0x56257e:c.instructions+=2;goto B56257e;
case 0x562583:c.instructions+=1;goto B562583;
case 0x562588:goto L562588;
case 0x56258d:c.instructions+=3;goto B56258d;
case 0x56258e:c.instructions+=2;goto B56258e;
case 0x562593:c.instructions+=1;goto B562593;
case 0x562598:goto L562598;
case 0x56259a:c.instructions+=1;goto B56259a;
case 0x56259c:goto L56259c;
case 0x56259f:c.instructions+=2;goto B56259f;
case 0x5625a1:c.instructions+=1;goto B5625a1;
case 0x5625a3:goto L5625a3;
case 0x5625a6:c.instructions+=2;goto B5625a6;
case 0x5625a8:c.instructions+=1;goto B5625a8;
case 0x5625aa:goto L5625aa;
case 0x5625ab:c.instructions+=5;goto B5625ab;
case 0x5625ad:c.instructions+=4;goto B5625ad;
case 0x5625af:c.instructions+=3;goto B5625af;
case 0x5625b4:c.instructions+=2;goto B5625b4;
case 0x5625b6:c.instructions+=1;goto B5625b6;
case 0x5625bb:goto L5625bb;
case 0x5625bc:c.instructions+=13;goto B5625bc;
case 0x5625c2:c.instructions+=12;goto B5625c2;
case 0x5625c4:c.instructions+=11;goto B5625c4;
case 0x5625c6:c.instructions+=10;goto B5625c6;
case 0x5625c8:c.instructions+=9;goto B5625c8;
case 0x5625c9:c.instructions+=8;goto B5625c9;
case 0x5625cb:c.instructions+=7;goto B5625cb;
case 0x5625cd:c.instructions+=6;goto B5625cd;
case 0x5625cf:c.instructions+=5;goto B5625cf;
case 0x5625d5:c.instructions+=4;goto B5625d5;
case 0x5625db:c.instructions+=3;goto B5625db;
case 0x5625df:c.instructions+=2;goto B5625df;
case 0x5625e4:c.instructions+=1;goto B5625e4;
case 0x5625e9:goto L5625e9;
case 0x5625ef:c.instructions+=7;goto B5625ef;
case 0x5625f5:c.instructions+=6;goto B5625f5;
case 0x5625fb:c.instructions+=5;goto B5625fb;
case 0x562601:c.instructions+=4;goto B562601;
case 0x562604:c.instructions+=3;goto B562604;
case 0x562606:c.instructions+=2;goto B562606;
case 0x562609:c.instructions+=1;goto B562609;
case 0x56260b:goto L56260b;
case 0x56260e:c.instructions+=1;goto B56260e;
case 0x562611:goto L562611;
case 0x562614:c.instructions+=4;goto B562614;
case 0x562617:c.instructions+=3;goto B562617;
case 0x562619:c.instructions+=2;goto B562619;
case 0x56261c:c.instructions+=1;goto B56261c;
case 0x56261e:goto L56261e;
case 0x562621:c.instructions+=1;goto B562621;
case 0x562624:goto L562624;
case 0x562626:c.instructions+=3;goto B562626;
case 0x562628:c.instructions+=2;goto B562628;
case 0x56262d:c.instructions+=1;goto B56262d;
case 0x562632:goto L562632;
case 0x562634:c.instructions+=3;goto B562634;
case 0x56263a:c.instructions+=2;goto B56263a;
case 0x56263c:c.instructions+=1;goto B56263c;
case 0x56263f:goto L56263f;
case 0x562641:c.instructions+=3;goto B562641;
case 0x562643:c.instructions+=2;goto B562643;
case 0x562648:c.instructions+=1;goto B562648;
case 0x56264d:goto L56264d;
case 0x562651:c.instructions+=4;goto B562651;
case 0x562653:c.instructions+=3;goto B562653;
case 0x562655:c.instructions+=2;goto B562655;
case 0x56265a:c.instructions+=1;goto B56265a;
case 0x56265f:goto L56265f;
case 0x562663:c.instructions+=3;goto B562663;
case 0x562666:c.instructions+=2;goto B562666;
case 0x56266c:c.instructions+=1;goto B56266c;
case 0x56266e:goto L56266e;
case 0x562674:goto L562674;
case 0x562678:c.instructions+=1;goto B562678;
case 0x56267d:goto L56267d;
case 0x56267f:c.instructions+=1;goto B56267f;
case 0x562681:goto L562681;
case 0x562686:c.instructions+=1;goto B562686;
case 0x56268b:goto L56268b;
case 0x56268c:c.instructions+=7;goto B56268c;
case 0x56268f:c.instructions+=6;goto B56268f;
case 0x562692:c.instructions+=5;goto B562692;
case 0x562695:c.instructions+=4;goto B562695;
case 0x56269a:c.instructions+=3;goto B56269a;
case 0x56269f:c.instructions+=2;goto B56269f;
case 0x5626a0:c.instructions+=1;goto B5626a0;
case 0x5626a5:goto L5626a5;
case 0x5626a8:c.instructions+=11;goto B5626a8;
case 0x5626aa:c.instructions+=10;goto B5626aa;
case 0x5626ac:c.instructions+=9;goto B5626ac;
case 0x5626ae:c.instructions+=8;goto B5626ae;
case 0x5626b0:c.instructions+=7;goto B5626b0;
case 0x5626b2:c.instructions+=6;goto B5626b2;
case 0x5626b4:c.instructions+=5;goto B5626b4;
case 0x5626ba:c.instructions+=4;goto B5626ba;
case 0x5626c0:c.instructions+=3;goto B5626c0;
case 0x5626c4:c.instructions+=2;goto B5626c4;
case 0x5626c9:c.instructions+=1;goto B5626c9;
case 0x5626ce:goto L5626ce;
case 0x5626d4:c.instructions+=7;goto B5626d4;
case 0x5626da:c.instructions+=6;goto B5626da;
case 0x5626e0:c.instructions+=5;goto B5626e0;
case 0x5626e6:c.instructions+=4;goto B5626e6;
case 0x5626e9:c.instructions+=3;goto B5626e9;
case 0x5626eb:c.instructions+=2;goto B5626eb;
case 0x5626ee:c.instructions+=1;goto B5626ee;
case 0x5626f0:goto L5626f0;
case 0x5626f3:c.instructions+=1;goto B5626f3;
case 0x5626f6:goto L5626f6;
case 0x5626f9:c.instructions+=4;goto B5626f9;
case 0x5626fc:c.instructions+=3;goto B5626fc;
case 0x5626fe:c.instructions+=2;goto B5626fe;
case 0x562701:c.instructions+=1;goto B562701;
case 0x562703:goto L562703;
case 0x562706:c.instructions+=1;goto B562706;
case 0x562709:goto L562709;
case 0x56270b:c.instructions+=3;goto B56270b;
case 0x56270d:c.instructions+=2;goto B56270d;
case 0x562712:c.instructions+=1;goto B562712;
case 0x562717:goto L562717;
case 0x562719:c.instructions+=3;goto B562719;
case 0x56271f:c.instructions+=2;goto B56271f;
case 0x562721:c.instructions+=1;goto B562721;
case 0x562724:goto L562724;
case 0x562726:c.instructions+=3;goto B562726;
case 0x562728:c.instructions+=2;goto B562728;
case 0x56272d:c.instructions+=1;goto B56272d;
case 0x562732:goto L562732;
case 0x562736:c.instructions+=4;goto B562736;
case 0x562738:c.instructions+=3;goto B562738;
case 0x56273a:c.instructions+=2;goto B56273a;
case 0x56273f:c.instructions+=1;goto B56273f;
case 0x562744:goto L562744;
case 0x562748:c.instructions+=4;goto B562748;
case 0x562749:c.instructions+=3;goto B562749;
case 0x56274c:c.instructions+=2;goto B56274c;
case 0x56274d:c.instructions+=1;goto B56274d;
case 0x56274f:goto L56274f;
case 0x562755:goto L562755;
case 0x562759:c.instructions+=1;goto B562759;
case 0x56275e:goto L56275e;
case 0x562760:c.instructions+=1;goto B562760;
case 0x562762:goto L562762;
case 0x562767:c.instructions+=1;goto B562767;
case 0x56276c:goto L56276c;
case 0x56276d:c.instructions+=7;goto B56276d;
case 0x562770:c.instructions+=6;goto B562770;
case 0x562773:c.instructions+=5;goto B562773;
case 0x562776:c.instructions+=4;goto B562776;
case 0x56277b:c.instructions+=3;goto B56277b;
case 0x562780:c.instructions+=2;goto B562780;
case 0x562781:c.instructions+=1;goto B562781;
case 0x562786:goto L562786;
case 0x562789:c.instructions+=3;goto B562789;
case 0x56278a:c.instructions+=2;goto B56278a;
case 0x56278d:c.instructions+=1;goto B56278d;
case 0x562790:goto L562790;
case 0x562793:c.instructions+=5;goto B562793;
case 0x562794:c.instructions+=4;goto B562794;
case 0x562795:c.instructions+=3;goto B562795;
case 0x562797:c.instructions+=2;goto B562797;
case 0x56279c:c.instructions+=1;goto B56279c;
case 0x56279d:goto L56279d;
case 0x5627a3:c.instructions+=4;goto B5627a3;
case 0x5627a5:c.instructions+=3;goto B5627a5;
case 0x5627a9:c.instructions+=2;goto B5627a9;
case 0x5627ae:c.instructions+=1;goto B5627ae;
case 0x5627b0:goto L5627b0;
case 0x5627b6:c.instructions+=2;goto B5627b6;
case 0x5627b8:c.instructions+=1;goto B5627b8;
case 0x5627ba:goto L5627ba;
case 0x5627c1:c.instructions+=1;goto B5627c1;
case 0x5627c3:goto L5627c3;
case 0x5627c8:goto L5627c8;
case 0x5627ca:c.instructions+=1;goto B5627ca;
case 0x5627d0:goto L5627d0;
case 0x5627d6:c.instructions+=3;goto B5627d6;
case 0x5627d8:c.instructions+=2;goto B5627d8;
case 0x5627da:c.instructions+=1;goto B5627da;
case 0x5627dc:goto L5627dc;
case 0x5627e2:goto L5627e2;
case 0x5627e4:c.instructions+=2;goto B5627e4;
case 0x5627ea:c.instructions+=1;goto B5627ea;
case 0x5627ec:goto L5627ec;
case 0x5627ef:c.instructions+=1;goto B5627ef;
case 0x5627f5:goto L5627f5;
case 0x5627f6:c.instructions+=3;goto B5627f6;
case 0x5627fc:c.instructions+=2;goto B5627fc;
case 0x5627fe:c.instructions+=1;goto B5627fe;
case 0x562800:goto L562800;
case 0x562802:goto L562802;
case 0x562805:c.instructions+=4;goto B562805;
case 0x562807:c.instructions+=3;goto B562807;
case 0x56280b:c.instructions+=2;goto B56280b;
case 0x56280f:c.instructions+=1;goto B56280f;
case 0x562812:goto L562812;
case 0x562816:c.instructions+=1;goto B562816;
case 0x56281c:goto L56281c;
case 0x562822:c.instructions+=4;goto B562822;
case 0x562824:c.instructions+=3;goto B562824;
case 0x562825:c.instructions+=2;goto B562825;
case 0x562826:c.instructions+=1;goto B562826;
case 0x56282b:goto L56282b;
case 0x56282c:c.instructions+=1;goto B56282c;
case 0x562831:goto L562831;
case 0x562834:c.instructions+=2;goto B562834;
case 0x562836:c.instructions+=1;goto B562836;
case 0x562838:goto L562838;
case 0x56283a:c.instructions+=1;goto B56283a;
case 0x56283f:goto L56283f;
case 0x562841:c.instructions+=3;goto B562841;
case 0x562844:c.instructions+=2;goto B562844;
case 0x562846:c.instructions+=1;goto B562846;
case 0x562848:goto L562848;
case 0x56284a:c.instructions+=10;goto B56284a;
case 0x562850:c.instructions+=9;goto B562850;
case 0x562851:c.instructions+=8;goto B562851;
case 0x562857:c.instructions+=7;goto B562857;
case 0x562858:c.instructions+=6;goto B562858;
case 0x56285e:c.instructions+=5;goto B56285e;
case 0x56285f:c.instructions+=4;goto B56285f;
case 0x562865:c.instructions+=3;goto B562865;
case 0x562866:c.instructions+=2;goto B562866;
case 0x562868:c.instructions+=1;goto B562868;
case 0x56286d:goto L56286d;
case 0x562873:c.instructions+=4;goto B562873;
case 0x562876:c.instructions+=3;goto B562876;
case 0x56287d:c.instructions+=2;goto B56287d;
case 0x562884:c.instructions+=1;goto B562884;
case 0x562886:goto L562886;
case 0x56288c:c.instructions+=3;goto B56288c;
case 0x562892:c.instructions+=2;goto B562892;
case 0x562894:c.instructions+=1;goto B562894;
case 0x562899:goto L562899;
case 0x56289b:goto L56289b;
case 0x56289c:c.instructions+=2;goto B56289c;
case 0x56289e:c.instructions+=1;goto B56289e;
case 0x5628a3:goto L5628a3;
case 0x5628a7:goto L5628a7;
case 0x5628a8:c.instructions+=4;goto B5628a8;
case 0x5628ab:c.instructions+=3;goto B5628ab;
case 0x5628ae:c.instructions+=2;goto B5628ae;
case 0x5628b2:c.instructions+=1;goto B5628b2;
case 0x5628b8:goto L5628b8;
case 0x5628bc:c.instructions+=2;goto B5628bc;
case 0x5628bd:c.instructions+=1;goto B5628bd;
case 0x5628c2:goto L5628c2;
case 0x5628c5:c.instructions+=4;goto B5628c5;
case 0x5628c8:c.instructions+=3;goto B5628c8;
case 0x5628ca:c.instructions+=2;goto B5628ca;
case 0x5628cb:c.instructions+=1;goto B5628cb;
case 0x5628cd:goto L5628cd;
case 0x5628cf:c.instructions+=2;goto B5628cf;
case 0x5628d6:c.instructions+=1;goto B5628d6;
case 0x5628db:goto L5628db;
case 0x5628dd:c.instructions+=3;goto B5628dd;
case 0x5628e0:c.instructions+=2;goto B5628e0;
case 0x5628e2:c.instructions+=1;goto B5628e2;
case 0x5628e4:goto L5628e4;
case 0x5628e6:c.instructions+=10;goto B5628e6;
case 0x5628ec:c.instructions+=9;goto B5628ec;
case 0x5628ed:c.instructions+=8;goto B5628ed;
case 0x5628f3:c.instructions+=7;goto B5628f3;
case 0x5628f4:c.instructions+=6;goto B5628f4;
case 0x5628fa:c.instructions+=5;goto B5628fa;
case 0x5628fb:c.instructions+=4;goto B5628fb;
case 0x562901:c.instructions+=3;goto B562901;
case 0x562902:c.instructions+=2;goto B562902;
case 0x562904:c.instructions+=1;goto B562904;
case 0x562909:goto L562909;
case 0x56290f:c.instructions+=3;goto B56290f;
case 0x562916:c.instructions+=2;goto B562916;
case 0x56291d:c.instructions+=1;goto B56291d;
case 0x56291f:goto L56291f;
case 0x562921:goto L562921;
case 0x562922:c.instructions+=2;goto B562922;
case 0x562924:c.instructions+=1;goto B562924;
case 0x562929:goto L562929;
case 0x56292b:c.instructions+=2;goto B56292b;
case 0x56292d:c.instructions+=1;goto B56292d;
case 0x562932:goto L562932;
case 0x562934:c.instructions+=4;goto B562934;
case 0x562935:c.instructions+=3;goto B562935;
case 0x562936:c.instructions+=2;goto B562936;
case 0x562939:c.instructions+=1;goto B562939;
case 0x562940:goto L562940;
case 0x562941:c.instructions+=6;goto B562941;
case 0x562942:c.instructions+=5;goto B562942;
case 0x562945:c.instructions+=4;goto B562945;
case 0x562947:c.instructions+=3;goto B562947;
case 0x562949:c.instructions+=2;goto B562949;
case 0x56294a:c.instructions+=1;goto B56294a;
case 0x56294c:goto L56294c;
case 0x56294d:c.instructions+=1;goto B56294d;
case 0x562952:goto L562952;
case 0x562955:c.instructions+=2;goto B562955;
case 0x562957:c.instructions+=1;goto B562957;
case 0x562959:goto L562959;
case 0x56295e:c.instructions+=2;goto B56295e;
case 0x562960:c.instructions+=1;goto B562960;
case 0x562965:goto L562965;
case 0x562967:c.instructions+=1;goto B562967;
case 0x562969:goto L562969;
case 0x56296e:c.instructions+=2;goto B56296e;
case 0x562970:c.instructions+=1;goto B562970;
case 0x562972:goto L562972;
case 0x562975:c.instructions+=3;goto B562975;
case 0x562976:c.instructions+=2;goto B562976;
case 0x56297b:c.instructions+=1;goto B56297b;
case 0x562980:goto L562980;
case 0x562982:c.instructions+=2;goto B562982;
case 0x562984:c.instructions+=1;goto B562984;
case 0x562986:goto L562986;
case 0x562989:c.instructions+=2;goto B562989;
case 0x56298b:c.instructions+=1;goto B56298b;
case 0x56298d:goto L56298d;
case 0x562990:goto L562990;
case 0x562995:c.instructions+=1;goto B562995;
case 0x56299a:goto L56299a;
case 0x56299d:c.instructions+=3;goto B56299d;
case 0x5629a0:c.instructions+=2;goto B5629a0;
case 0x5629a2:c.instructions+=1;goto B5629a2;
case 0x5629a4:goto L5629a4;
case 0x5629a7:c.instructions+=2;goto B5629a7;
case 0x5629a9:c.instructions+=1;goto B5629a9;
case 0x5629ab:goto L5629ab;
case 0x5629ad:goto L5629ad;
case 0x5629af:c.instructions+=1;goto B5629af;
case 0x5629b1:goto L5629b1;
case 0x5629b4:c.instructions+=1;goto B5629b4;
case 0x5629b6:goto L5629b6;
case 0x5629b8:c.instructions+=2;goto B5629b8;
case 0x5629bb:c.instructions+=1;goto B5629bb;
case 0x5629c0:goto L5629c0;
case 0x5629c3:c.instructions+=1;goto B5629c3;
case 0x5629c6:goto L5629c6;
case 0x5629c9:goto L5629c9;
case 0x5629cf:c.instructions+=3;goto B5629cf;
case 0x5629d0:c.instructions+=2;goto B5629d0;
case 0x5629d5:c.instructions+=1;goto B5629d5;
case 0x5629da:goto L5629da;
case 0x5629dc:c.instructions+=1;goto B5629dc;
case 0x5629de:goto L5629de;
case 0x5629e1:c.instructions+=2;goto B5629e1;
case 0x5629e3:c.instructions+=1;goto B5629e3;
case 0x5629e5:goto L5629e5;
case 0x5629e8:c.instructions+=2;goto B5629e8;
case 0x5629ea:c.instructions+=1;goto B5629ea;
case 0x5629ec:goto L5629ec;
case 0x5629ed:c.instructions+=5;goto B5629ed;
case 0x5629ee:c.instructions+=4;goto B5629ee;
case 0x5629ef:c.instructions+=3;goto B5629ef;
case 0x5629f4:c.instructions+=2;goto B5629f4;
case 0x5629f6:c.instructions+=1;goto B5629f6;
case 0x5629fb:goto L5629fb;
case 0x562a01:c.instructions+=2;goto B562a01;
case 0x562a02:c.instructions+=1;goto B562a02;
case 0x562a07:goto L562a07;
case 0x562a0a:c.instructions+=2;goto B562a0a;
case 0x562a0c:c.instructions+=1;goto B562a0c;
case 0x562a0e:goto L562a0e;
case 0x562a11:c.instructions+=3;goto B562a11;
case 0x562a14:c.instructions+=2;goto B562a14;
case 0x562a17:c.instructions+=1;goto B562a17;
case 0x562a1a:goto L562a1a;
case 0x562a1b:c.instructions+=3;goto B562a1b;
case 0x562a1c:c.instructions+=2;goto B562a1c;
case 0x562a1d:c.instructions+=1;goto B562a1d;
case 0x562a20:goto L562a20;
case 0x562a21:c.instructions+=4;goto B562a21;
case 0x562a24:c.instructions+=3;goto B562a24;
case 0x562a26:c.instructions+=2;goto B562a26;
case 0x562a27:c.instructions+=1;goto B562a27;
case 0x562a29:goto L562a29;
case 0x562a2a:c.instructions+=1;goto B562a2a;
case 0x562a2f:goto L562a2f;
case 0x562a32:c.instructions+=2;goto B562a32;
case 0x562a34:c.instructions+=1;goto B562a34;
case 0x562a36:goto L562a36;
case 0x562a3b:c.instructions+=2;goto B562a3b;
case 0x562a3d:c.instructions+=1;goto B562a3d;
case 0x562a42:goto L562a42;
case 0x562a44:c.instructions+=1;goto B562a44;
case 0x562a46:goto L562a46;
case 0x562a4b:c.instructions+=2;goto B562a4b;
case 0x562a4d:c.instructions+=1;goto B562a4d;
case 0x562a4f:goto L562a4f;
case 0x562a52:c.instructions+=3;goto B562a52;
case 0x562a53:c.instructions+=2;goto B562a53;
case 0x562a58:c.instructions+=1;goto B562a58;
case 0x562a5d:goto L562a5d;
case 0x562a5f:c.instructions+=2;goto B562a5f;
case 0x562a61:c.instructions+=1;goto B562a61;
case 0x562a63:goto L562a63;
case 0x562a66:c.instructions+=2;goto B562a66;
case 0x562a68:c.instructions+=1;goto B562a68;
case 0x562a6a:goto L562a6a;
case 0x562a70:goto L562a70;
case 0x562a75:c.instructions+=1;goto B562a75;
case 0x562a7a:goto L562a7a;
case 0x562a7d:c.instructions+=3;goto B562a7d;
case 0x562a80:c.instructions+=2;goto B562a80;
case 0x562a82:c.instructions+=1;goto B562a82;
case 0x562a84:goto L562a84;
case 0x562a87:c.instructions+=2;goto B562a87;
case 0x562a89:c.instructions+=1;goto B562a89;
case 0x562a8b:goto L562a8b;
case 0x562a8d:goto L562a8d;
case 0x562a8f:c.instructions+=1;goto B562a8f;
case 0x562a91:goto L562a91;
case 0x562a94:c.instructions+=1;goto B562a94;
case 0x562a96:goto L562a96;
case 0x562a98:c.instructions+=2;goto B562a98;
case 0x562a9b:c.instructions+=1;goto B562a9b;
case 0x562aa0:goto L562aa0;
case 0x562aa3:c.instructions+=1;goto B562aa3;
case 0x562aaa:goto L562aaa;
case 0x562ab1:goto L562ab1;
case 0x562ab7:c.instructions+=3;goto B562ab7;
case 0x562ab8:c.instructions+=2;goto B562ab8;
case 0x562abd:c.instructions+=1;goto B562abd;
case 0x562ac2:goto L562ac2;
case 0x562ac4:c.instructions+=3;goto B562ac4;
case 0x562ac5:c.instructions+=2;goto B562ac5;
case 0x562ac6:c.instructions+=1;goto B562ac6;
case 0x562ac8:goto L562ac8;
case 0x562acb:c.instructions+=2;goto B562acb;
case 0x562acd:c.instructions+=1;goto B562acd;
case 0x562acf:goto L562acf;
case 0x562ad2:c.instructions+=2;goto B562ad2;
case 0x562ad4:c.instructions+=1;goto B562ad4;
case 0x562ad6:goto L562ad6;
case 0x562ad7:c.instructions+=5;goto B562ad7;
case 0x562ad9:c.instructions+=4;goto B562ad9;
case 0x562adb:c.instructions+=3;goto B562adb;
case 0x562ae0:c.instructions+=2;goto B562ae0;
case 0x562ae2:c.instructions+=1;goto B562ae2;
case 0x562ae7:goto L562ae7;
case 0x562aed:c.instructions+=2;goto B562aed;
case 0x562aee:c.instructions+=1;goto B562aee;
case 0x562af3:goto L562af3;
case 0x562af6:c.instructions+=2;goto B562af6;
case 0x562af8:c.instructions+=1;goto B562af8;
case 0x562afa:goto L562afa;
case 0x562aff:c.instructions+=4;goto B562aff;
case 0x562b02:c.instructions+=3;goto B562b02;
case 0x562b05:c.instructions+=2;goto B562b05;
case 0x562b08:c.instructions+=1;goto B562b08;
case 0x562b0b:goto L562b0b;
case 0x562b10:goto L562b10;
case 0x562b11:c.instructions+=6;goto B562b11;
case 0x562b13:c.instructions+=5;goto B562b13;
case 0x562b16:c.instructions+=4;goto B562b16;
case 0x562b1b:c.instructions+=3;goto B562b1b;
case 0x562b1c:c.instructions+=2;goto B562b1c;
case 0x562b23:c.instructions+=1;goto B562b23;
case 0x562b28:goto L562b28;
case 0x562b2e:c.instructions+=4;goto B562b2e;
case 0x562b31:c.instructions+=3;goto B562b31;
case 0x562b33:c.instructions+=2;goto B562b33;
case 0x562b3a:c.instructions+=1;goto B562b3a;
case 0x562b3c:goto L562b3c;
case 0x562b3d:c.instructions+=2;goto B562b3d;
case 0x562b42:c.instructions+=1;goto B562b42;
case 0x562b47:goto L562b47;
case 0x562b49:c.instructions+=1;goto B562b49;
case 0x562b4b:goto L562b4b;
case 0x562b4e:c.instructions+=2;goto B562b4e;
case 0x562b50:c.instructions+=1;goto B562b50;
case 0x562b52:goto L562b52;
case 0x562b55:c.instructions+=2;goto B562b55;
case 0x562b57:c.instructions+=1;goto B562b57;
case 0x562b59:goto L562b59;
case 0x562b5a:c.instructions+=5;goto B562b5a;
case 0x562b5c:c.instructions+=4;goto B562b5c;
case 0x562b5e:c.instructions+=3;goto B562b5e;
case 0x562b63:c.instructions+=2;goto B562b63;
case 0x562b65:c.instructions+=1;goto B562b65;
case 0x562b6a:goto L562b6a;
case 0x562b74:goto L562b74;
case 0x562b77:c.instructions+=4;goto B562b77;
case 0x562b79:c.instructions+=3;goto B562b79;
case 0x562b7a:c.instructions+=2;goto B562b7a;
case 0x562b7c:c.instructions+=1;goto B562b7c;
case 0x562b81:goto L562b81;
case 0x562b82:c.instructions+=1;goto B562b82;
case 0x562b90:goto L562b90;
case 0x562b91:c.instructions+=3;goto B562b91;
case 0x562b93:c.instructions+=2;goto B562b93;
case 0x562b9a:c.instructions+=1;goto B562b9a;
case 0x562ba0:goto L562ba0;
case 0x562ba1:c.instructions+=4;goto B562ba1;
case 0x562ba4:c.instructions+=3;goto B562ba4;
case 0x562ba5:c.instructions+=2;goto B562ba5;
case 0x562baa:c.instructions+=1;goto B562baa;
case 0x562baf:goto L562baf;
case 0x562bb1:c.instructions+=1;goto B562bb1;
case 0x562bb3:goto L562bb3;
case 0x562bb6:c.instructions+=2;goto B562bb6;
case 0x562bb8:c.instructions+=1;goto B562bb8;
case 0x562bba:goto L562bba;
case 0x562bbd:c.instructions+=2;goto B562bbd;
case 0x562bbf:c.instructions+=1;goto B562bbf;
case 0x562bc1:goto L562bc1;
case 0x562bc2:c.instructions+=5;goto B562bc2;
case 0x562bc4:c.instructions+=4;goto B562bc4;
case 0x562bc6:c.instructions+=3;goto B562bc6;
case 0x562bcb:c.instructions+=2;goto B562bcb;
case 0x562bcd:c.instructions+=1;goto B562bcd;
case 0x562bd2:goto L562bd2;
case 0x562bdc:c.instructions+=1;goto B562bdc;
case 0x562bde:goto L562bde;
case 0x562be5:c.instructions+=1;goto B562be5;
case 0x562be7:goto L562be7;
case 0x562bec:goto L562bec;
case 0x562bee:c.instructions+=8;goto B562bee;
case 0x562bf3:c.instructions+=7;goto B562bf3;
case 0x562bf8:c.instructions+=6;goto B562bf8;
case 0x562bfd:c.instructions+=5;goto B562bfd;
case 0x562c02:c.instructions+=4;goto B562c02;
case 0x562c07:c.instructions+=3;goto B562c07;
case 0x562c0c:c.instructions+=2;goto B562c0c;
case 0x562c0d:c.instructions+=1;goto B562c0d;
case 0x562c12:goto L562c12;
case 0x562c15:c.instructions+=4;goto B562c15;
case 0x562c1f:c.instructions+=3;goto B562c1f;
case 0x562c20:c.instructions+=2;goto B562c20;
case 0x562c21:c.instructions+=1;goto B562c21;
case 0x562c24:goto L562c24;
case 0x562c29:c.instructions+=1;goto B562c29;
case 0x562c2b:goto L562c2b;
case 0x562c30:c.instructions+=3;goto B562c30;
case 0x562c35:c.instructions+=2;goto B562c35;
case 0x562c36:c.instructions+=1;goto B562c36;
case 0x562c3b:goto L562c3b;
case 0x562c3e:c.instructions+=2;goto B562c3e;
case 0x562c48:c.instructions+=1;goto B562c48;
case 0x562c49:goto L562c49;
case 0x562c4a:c.instructions+=1;goto B562c4a;
case 0x562c50:goto L562c50;
case 0x562c51:c.instructions+=15;goto B562c51;
case 0x562c53:c.instructions+=14;goto B562c53;
case 0x562c56:c.instructions+=13;goto B562c56;
case 0x562c57:c.instructions+=12;goto B562c57;
case 0x562c5a:c.instructions+=11;goto B562c5a;
case 0x562c5b:c.instructions+=10;goto B562c5b;
case 0x562c5c:c.instructions+=9;goto B562c5c;
case 0x562c5f:c.instructions+=8;goto B562c5f;
case 0x562c60:c.instructions+=7;goto B562c60;
case 0x562c62:c.instructions+=6;goto B562c62;
case 0x562c65:c.instructions+=5;goto B562c65;
case 0x562c66:c.instructions+=4;goto B562c66;
case 0x562c67:c.instructions+=3;goto B562c67;
case 0x562c68:c.instructions+=2;goto B562c68;
case 0x562c6a:c.instructions+=1;goto B562c6a;
case 0x562c6f:goto L562c6f;
case 0x562c75:c.instructions+=1;goto B562c75;
case 0x562c7b:goto L562c7b;
case 0x562c81:goto L562c81;
case 0x562c87:c.instructions+=1;goto B562c87;
case 0x562c8d:goto L562c8d;
case 0x562c8f:goto L562c8f;
case 0x562c95:c.instructions+=1;goto B562c95;
case 0x562c97:goto L562c97;
case 0x562c9d:c.instructions+=1;goto B562c9d;
case 0x562c9f:goto L562c9f;
case 0x562ca2:c.instructions+=1;goto B562ca2;
case 0x562ca8:goto L562ca8;
case 0x562caa:c.instructions+=1;goto B562caa;
case 0x562caf:goto L562caf;
case 0x562cb0:c.instructions+=4;goto B562cb0;
case 0x562cb1:c.instructions+=3;goto B562cb1;
case 0x562cb2:c.instructions+=2;goto B562cb2;
case 0x562cb3:c.instructions+=1;goto B562cb3;
case 0x562cb6:goto L562cb6;
case 0x562cb9:c.instructions+=4;goto B562cb9;
case 0x562cbe:c.instructions+=3;goto B562cbe;
case 0x562cc3:c.instructions+=2;goto B562cc3;
case 0x562cc4:c.instructions+=1;goto B562cc4;
case 0x562cc9:goto L562cc9;
case 0x562ccc:c.instructions+=2;goto B562ccc;
case 0x562cce:c.instructions+=1;goto B562cce;
case 0x562cd4:goto L562cd4;
case 0x562cd7:c.instructions+=3;goto B562cd7;
case 0x562cda:c.instructions+=2;goto B562cda;
case 0x562cdc:c.instructions+=1;goto B562cdc;
case 0x562ce2:goto L562ce2;
case 0x562ce5:c.instructions+=5;goto B562ce5;
case 0x562ce7:c.instructions+=4;goto B562ce7;
case 0x562cec:c.instructions+=3;goto B562cec;
case 0x562cf1:c.instructions+=2;goto B562cf1;
case 0x562cf2:c.instructions+=1;goto B562cf2;
case 0x562cf7:goto L562cf7;
case 0x562cfa:c.instructions+=5;goto B562cfa;
case 0x562cfb:c.instructions+=4;goto B562cfb;
case 0x562cfc:c.instructions+=3;goto B562cfc;
case 0x562cfd:c.instructions+=2;goto B562cfd;
case 0x562cfe:c.instructions+=1;goto B562cfe;
case 0x562d01:goto L562d01;
case 0x562d03:c.instructions+=2;goto B562d03;
case 0x562d08:c.instructions+=1;goto B562d08;
case 0x562d0d:goto L562d0d;
case 0x562d0f:c.instructions+=2;goto B562d0f;
case 0x562d14:c.instructions+=1;goto B562d14;
case 0x562d19:goto L562d19;
case 0x562d1a:c.instructions+=4;goto B562d1a;
case 0x562d1b:c.instructions+=3;goto B562d1b;
case 0x562d1c:c.instructions+=2;goto B562d1c;
case 0x562d1d:c.instructions+=1;goto B562d1d;
case 0x562d20:goto L562d20;
case 0x562d26:c.instructions+=1;goto B562d26;
case 0x562d28:goto L562d28;
case 0x562d2e:c.instructions+=1;goto B562d2e;
case 0x562d34:goto L562d34;
case 0x562d39:c.instructions+=1;goto B562d39;
case 0x562d3e:goto L562d3e;
case 0x562d45:c.instructions+=4;goto B562d45;
case 0x562d48:c.instructions+=3;goto B562d48;
case 0x562d4a:c.instructions+=2;goto B562d4a;
case 0x562d4b:c.instructions+=1;goto B562d4b;
case 0x562d50:goto L562d50;
case 0x562d55:c.instructions+=3;goto B562d55;
case 0x562d58:c.instructions+=2;goto B562d58;
case 0x562d5a:c.instructions+=1;goto B562d5a;
case 0x562d5c:goto L562d5c;
case 0x562d5d:c.instructions+=1;goto B562d5d;
case 0x562d62:goto L562d62;
case 0x562d67:c.instructions+=3;goto B562d67;
case 0x562d6a:c.instructions+=2;goto B562d6a;
case 0x562d6b:c.instructions+=1;goto B562d6b;
case 0x562d70:goto L562d70;
case 0x562d73:c.instructions+=5;goto B562d73;
case 0x562d74:c.instructions+=4;goto B562d74;
case 0x562d75:c.instructions+=3;goto B562d75;
case 0x562d76:c.instructions+=2;goto B562d76;
case 0x562d77:c.instructions+=1;goto B562d77;
case 0x562d7a:goto L562d7a;
case 0x562d7f:c.instructions+=1;goto B562d7f;
case 0x562d84:goto L562d84;
case 0x562d89:goto L562d89;
case 0x562d8b:c.instructions+=1;goto B562d8b;
case 0x562d90:goto L562d90;
case 0x562d91:c.instructions+=4;goto B562d91;
case 0x562d92:c.instructions+=3;goto B562d92;
case 0x562d93:c.instructions+=2;goto B562d93;
case 0x562d94:c.instructions+=1;goto B562d94;
case 0x562d97:goto L562d97;
case 0x562da1:c.instructions+=1;goto B562da1;
case 0x562da3:goto L562da3;
case 0x562da6:c.instructions+=10;goto B562da6;
case 0x562dab:c.instructions+=9;goto B562dab;
case 0x562dad:c.instructions+=8;goto B562dad;
case 0x562db2:c.instructions+=7;goto B562db2;
case 0x562db7:c.instructions+=6;goto B562db7;
case 0x562dbc:c.instructions+=5;goto B562dbc;
case 0x562dc1:c.instructions+=4;goto B562dc1;
case 0x562dc6:c.instructions+=3;goto B562dc6;
case 0x562dcb:c.instructions+=2;goto B562dcb;
case 0x562dcc:c.instructions+=1;goto B562dcc;
case 0x562dd1:goto L562dd1;
case 0x562dd4:c.instructions+=6;goto B562dd4;
case 0x562dd5:c.instructions+=5;goto B562dd5;
case 0x562dd6:c.instructions+=4;goto B562dd6;
case 0x562de0:c.instructions+=3;goto B562de0;
case 0x562de1:c.instructions+=2;goto B562de1;
case 0x562de2:c.instructions+=1;goto B562de2;
case 0x562de5:goto L562de5;
case 0x562de6:c.instructions+=1;goto B562de6;
case 0x562deb:goto L562deb;
case 0x562ded:c.instructions+=6;goto B562ded;
case 0x562df2:c.instructions+=5;goto B562df2;
case 0x562df7:c.instructions+=4;goto B562df7;
case 0x562dfa:c.instructions+=3;goto B562dfa;
case 0x562dff:c.instructions+=2;goto B562dff;
case 0x562e00:c.instructions+=1;goto B562e00;
case 0x562e05:goto L562e05;
case 0x562e08:c.instructions+=5;goto B562e08;
case 0x562e09:c.instructions+=4;goto B562e09;
case 0x562e0a:c.instructions+=3;goto B562e0a;
case 0x562e0b:c.instructions+=2;goto B562e0b;
case 0x562e0c:c.instructions+=1;goto B562e0c;
case 0x562e0f:goto L562e0f;
case 0x562e14:c.instructions+=2;goto B562e14;
case 0x562e19:c.instructions+=1;goto B562e19;
case 0x562e1e:goto L562e1e;
case 0x562e20:c.instructions+=3;goto B562e20;
case 0x562e22:c.instructions+=2;goto B562e22;
case 0x562e27:c.instructions+=1;goto B562e27;
case 0x562e2c:goto L562e2c;
case 0x562e2f:c.instructions+=2;goto B562e2f;
case 0x562e34:c.instructions+=1;goto B562e34;
case 0x562e39:goto L562e39;
case 0x562e40:c.instructions+=1;goto B562e40;
case 0x562e46:goto L562e46;
case 0x562e4b:goto L562e4b;
case 0x562e50:c.instructions+=1;goto B562e50;
case 0x562e55:goto L562e55;
case 0x562e56:c.instructions+=4;goto B562e56;
case 0x562e57:c.instructions+=3;goto B562e57;
case 0x562e58:c.instructions+=2;goto B562e58;
case 0x562e59:c.instructions+=1;goto B562e59;
case 0x562e5c:goto L562e5c;
case 0x562e62:c.instructions+=1;goto B562e62;
case 0x562e68:goto L562e68;
case 0x562e6e:goto L562e6e;
case 0x562e74:c.instructions+=1;goto B562e74;
case 0x562e7a:goto L562e7a;
case 0x562e80:c.instructions+=1;goto B562e80;
case 0x562e86:goto L562e86;
case 0x562e8c:c.instructions+=1;goto B562e8c;
case 0x562e92:goto L562e92;
case 0x562e95:c.instructions+=1;goto B562e95;
case 0x562e9a:goto L562e9a;
case 0x562e9d:c.instructions+=1;goto B562e9d;
case 0x562ea3:goto L562ea3;
case 0x562ea6:c.instructions+=4;goto B562ea6;
case 0x562ea9:c.instructions+=3;goto B562ea9;
case 0x562eac:c.instructions+=2;goto B562eac;
case 0x562eb1:c.instructions+=1;goto B562eb1;
case 0x562eb3:goto L562eb3;
case 0x562eb4:c.instructions+=1;goto B562eb4;
case 0x562eb6:goto L562eb6;
case 0x562ebb:c.instructions+=1;goto B562ebb;
case 0x562ebd:goto L562ebd;
case 0x562ec2:goto L562ec2;
case 0x562ec5:c.instructions+=10;goto B562ec5;
case 0x562ec6:c.instructions+=9;goto B562ec6;
case 0x562ec8:c.instructions+=8;goto B562ec8;
case 0x562ecd:c.instructions+=7;goto B562ecd;
case 0x562ed2:c.instructions+=6;goto B562ed2;
case 0x562ed7:c.instructions+=5;goto B562ed7;
case 0x562edc:c.instructions+=4;goto B562edc;
case 0x562ee1:c.instructions+=3;goto B562ee1;
case 0x562ee6:c.instructions+=2;goto B562ee6;
case 0x562ee7:c.instructions+=1;goto B562ee7;
case 0x562eec:goto L562eec;
case 0x562eef:c.instructions+=3;goto B562eef;
case 0x562ef1:c.instructions+=2;goto B562ef1;
case 0x562efb:c.instructions+=1;goto B562efb;
case 0x562f00:goto L562f00;
case 0x562f01:c.instructions+=4;goto B562f01;
case 0x562f02:c.instructions+=3;goto B562f02;
case 0x562f03:c.instructions+=2;goto B562f03;
case 0x562f04:c.instructions+=1;goto B562f04;
case 0x562f07:goto L562f07;
case 0x562f0e:c.instructions+=1;goto B562f0e;
case 0x562f10:goto L562f10;
case 0x562f13:c.instructions+=10;goto B562f13;
case 0x562f18:c.instructions+=9;goto B562f18;
case 0x562f1a:c.instructions+=8;goto B562f1a;
case 0x562f1f:c.instructions+=7;goto B562f1f;
case 0x562f24:c.instructions+=6;goto B562f24;
case 0x562f29:c.instructions+=5;goto B562f29;
case 0x562f2e:c.instructions+=4;goto B562f2e;
case 0x562f33:c.instructions+=3;goto B562f33;
case 0x562f38:c.instructions+=2;goto B562f38;
case 0x562f39:c.instructions+=1;goto B562f39;
case 0x562f3e:goto L562f3e;
case 0x562f41:c.instructions+=3;goto B562f41;
case 0x562f43:c.instructions+=2;goto B562f43;
case 0x562f4d:c.instructions+=1;goto B562f4d;
case 0x562f52:goto L562f52;
case 0x562f53:c.instructions+=4;goto B562f53;
case 0x562f54:c.instructions+=3;goto B562f54;
case 0x562f55:c.instructions+=2;goto B562f55;
case 0x562f56:c.instructions+=1;goto B562f56;
case 0x562f59:goto L562f59;
case 0x562f63:c.instructions+=1;goto B562f63;
case 0x562f65:goto L562f65;
case 0x562f68:c.instructions+=10;goto B562f68;
case 0x562f6d:c.instructions+=9;goto B562f6d;
case 0x562f6f:c.instructions+=8;goto B562f6f;
case 0x562f74:c.instructions+=7;goto B562f74;
case 0x562f79:c.instructions+=6;goto B562f79;
case 0x562f7e:c.instructions+=5;goto B562f7e;
case 0x562f83:c.instructions+=4;goto B562f83;
case 0x562f88:c.instructions+=3;goto B562f88;
case 0x562f8d:c.instructions+=2;goto B562f8d;
case 0x562f8e:c.instructions+=1;goto B562f8e;
case 0x562f93:goto L562f93;
case 0x562f96:c.instructions+=3;goto B562f96;
case 0x562f98:c.instructions+=2;goto B562f98;
case 0x562fa2:c.instructions+=1;goto B562fa2;
case 0x562fa7:goto L562fa7;
case 0x562fa8:c.instructions+=4;goto B562fa8;
case 0x562fa9:c.instructions+=3;goto B562fa9;
case 0x562faa:c.instructions+=2;goto B562faa;
case 0x562fab:c.instructions+=1;goto B562fab;
case 0x562fae:goto L562fae;
case 0x562fb1:c.instructions+=4;goto B562fb1;
case 0x562fb6:c.instructions+=3;goto B562fb6;
case 0x562fbb:c.instructions+=2;goto B562fbb;
case 0x562fbc:c.instructions+=1;goto B562fbc;
case 0x562fc1:goto L562fc1;
case 0x562fc4:c.instructions+=2;goto B562fc4;
case 0x562fc6:c.instructions+=1;goto B562fc6;
case 0x562fcc:goto L562fcc;
case 0x562fcf:c.instructions+=5;goto B562fcf;
case 0x562fd1:c.instructions+=4;goto B562fd1;
case 0x562fd6:c.instructions+=3;goto B562fd6;
case 0x562fdb:c.instructions+=2;goto B562fdb;
case 0x562fdc:c.instructions+=1;goto B562fdc;
case 0x562fe1:goto L562fe1;
case 0x562fe4:c.instructions+=5;goto B562fe4;
case 0x562fe5:c.instructions+=4;goto B562fe5;
case 0x562fe6:c.instructions+=3;goto B562fe6;
case 0x562fe7:c.instructions+=2;goto B562fe7;
case 0x562fe8:c.instructions+=1;goto B562fe8;
case 0x562feb:goto L562feb;
case 0x562fed:c.instructions+=1;goto B562fed;
case 0x562ff2:goto L562ff2;
case 0x562ff7:c.instructions+=1;goto B562ff7;
case 0x562ffc:goto L562ffc;
case 0x562fff:c.instructions+=1;goto B562fff;
default:missing_instruction(c.pc);}
B562000:L562000:{c.instructions+=2;NFSU2_TR(0x562000);
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
B562002:{NFSU2_TR(0x562002);
if(r1(R+518)){{goto L5620ba;}}
}
B562008:L562008:{c.instructions+=2;NFSU2_TR(0x562008);
u8 U[4];
w4(U+0,u32(0x799cd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56200d:{NFSU2_TR(0x56200d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562012ull));
TAIL_STATIC(0x52cf60u,52c);
}
B562012:L562012:{c.instructions+=3;NFSU2_TR(0x562012);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B562015:{NFSU2_TR(0x562015);
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
B562017:{NFSU2_TR(0x562017);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5620ba;}}
}
B56201d:L56201d:{c.instructions+=6;NFSU2_TR(0x56201d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B562020:{NFSU2_TR(0x562020);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562022:{NFSU2_TR(0x562022);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562027:{NFSU2_TR(0x562027);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562028:{NFSU2_TR(0x562028);
u8 U[4];
w4(U+0,u32(0x799cd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56202d:{NFSU2_TR(0x56202d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562032ull));
TAIL_STATIC(0x555f10u,555);
}
B562032:L562032:{c.instructions+=6;NFSU2_TR(0x562032);
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
B562035:{NFSU2_TR(0x562035);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B562036:{NFSU2_TR(0x562036);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562037:{NFSU2_TR(0x562037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B562038:{NFSU2_TR(0x562038);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B562039:{NFSU2_TR(0x562039);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56203c:L56203c:{c.instructions+=6;NFSU2_TR(0x56203c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56203f:{NFSU2_TR(0x56203f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562041:{NFSU2_TR(0x562041);
u8 U[4];
w4(U+0,u32(0x79d7d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562046:{NFSU2_TR(0x562046);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56204b:{NFSU2_TR(0x56204b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56204c:{NFSU2_TR(0x56204c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562051ull));
TAIL_STATIC(0x537c00u,537);
}
B562051:L562051:{c.instructions+=2;NFSU2_TR(0x562051);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B562054:{NFSU2_TR(0x562054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562059ull));
TAIL_STATIC(0x53b6c0u,53b);
}
B562059:L562059:{c.instructions+=6;NFSU2_TR(0x562059);
__builtin_memmove((R+4),gp(0x838994),4);
}
B56205f:{NFSU2_TR(0x56205f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562061:{NFSU2_TR(0x562061);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562063:{NFSU2_TR(0x562063);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562064:{NFSU2_TR(0x562064);
w4(R+4,u32(0x838980ull));
}
B562069:{NFSU2_TR(0x562069);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56206eull));
TAIL_STATIC(0x521a20u,521);
}
B56206e:L56206e:{c.instructions+=3;NFSU2_TR(0x56206e);
w4(R+4,u32(0x838980ull));
}
B562073:{NFSU2_TR(0x562073);
s1(0x83855e,u8(0x0ull));
}
B56207a:{NFSU2_TR(0x56207a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56207full));
TAIL_STATIC(0x530140u,530);
}
B56207f:L56207f:{c.instructions+=2;NFSU2_TR(0x56207f);
__builtin_memmove((R+4),(R+24),4);
}
B562081:{NFSU2_TR(0x562081);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562086ull));
TAIL_STATIC(0x54ff90u,54f);
}
B562086:L562086:{c.instructions+=5;NFSU2_TR(0x562086);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B562087:{NFSU2_TR(0x562087);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562088:{NFSU2_TR(0x562088);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B562089:{NFSU2_TR(0x562089);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56208a:{NFSU2_TR(0x56208a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56208d:L56208d:{c.instructions+=2;NFSU2_TR(0x56208d);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x911ab364ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B562097:{NFSU2_TR(0x562097);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5620ba;}}
}
B562099:L562099:{c.instructions+=4;NFSU2_TR(0x562099);
s1(0x83855b,u8(0x1ull));
}
B5620a0:{NFSU2_TR(0x5620a0);
s1(0x83855c,u8(0x1ull));
}
B5620a7:{NFSU2_TR(0x5620a7);
s1(0x83855d,u8(0x0ull));
}
B5620ae:{NFSU2_TR(0x5620ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5620b3ull));
TAIL_STATIC(0x54f980u,54f);
}
B5620b3:L5620b3:{c.instructions+=2;NFSU2_TR(0x5620b3);
__builtin_memmove((R+4),(R+0),4);
}
B5620b5:{NFSU2_TR(0x5620b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5620baull));
TAIL_STATIC(0x55bdf0u,55b);
}
B5620ba:L5620ba:{c.instructions+=5;NFSU2_TR(0x5620ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5620bb:{NFSU2_TR(0x5620bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5620bc:{NFSU2_TR(0x5620bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5620bd:{NFSU2_TR(0x5620bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5620be:{NFSU2_TR(0x5620be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5620d0:L5620d0:{c.instructions+=9;NFSU2_TR(0x5620d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5620d3:{NFSU2_TR(0x5620d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5620d4:{NFSU2_TR(0x5620d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5620d5:{NFSU2_TR(0x5620d5);
__builtin_memmove((R+24),(R+4),4);
}
B5620d7:{NFSU2_TR(0x5620d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5620dd:{NFSU2_TR(0x5620dd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffff6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5620e0:{NFSU2_TR(0x5620e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5620e1:{NFSU2_TR(0x5620e1);
w4(R+12,u32(0x1ull));
}
B5620e6:{NFSU2_TR(0x5620e6);
if(r1(R+518)){{goto L5620ec;}}
}
B5620e8:L5620e8:{c.instructions+=2;NFSU2_TR(0x5620e8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5620ea:{NFSU2_TR(0x5620ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L562145;}}
}
B5620ec:L5620ec:{c.instructions+=3;NFSU2_TR(0x5620ec);
__builtin_memmove((R+0),gp(0x83855d),1);
}
B5620f1:{NFSU2_TR(0x5620f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5620f3:{NFSU2_TR(0x5620f3);
if(r1(R+518)){{goto L562145;}}
}
B5620f5:L5620f5:{c.instructions+=4;NFSU2_TR(0x5620f5);
__builtin_memmove((R+0),gp(0x7fa1c8),4);
}
B5620fa:{NFSU2_TR(0x5620fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5620fb:{NFSU2_TR(0x5620fb);
w4(R+4,u32(0x8637b0ull));
}
B562100:{NFSU2_TR(0x562100);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562105ull));
TAIL_STATIC(0x51bb70u,51b);
}
B562105:L562105:{c.instructions+=2;NFSU2_TR(0x562105);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562107:{NFSU2_TR(0x562107);
if(r1(R+518)){{goto L562128;}}
}
B562109:L562109:{c.instructions+=3;NFSU2_TR(0x562109);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56210c:{NFSU2_TR(0x56210c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56210e:{NFSU2_TR(0x56210e);
if(r1(R+518)){{goto L562128;}}
}
B562110:L562110:{c.instructions+=3;NFSU2_TR(0x562110);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562113:{NFSU2_TR(0x562113);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562115:{NFSU2_TR(0x562115);
if(r1(R+518)){{goto L562128;}}
}
B562117:L562117:{c.instructions+=6;NFSU2_TR(0x562117);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562118:{NFSU2_TR(0x562118);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56211a:{NFSU2_TR(0x56211a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56211c:{NFSU2_TR(0x56211c);
u8 U[4];
w4(U+0,u32(0x8577e0a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562121:{NFSU2_TR(0x562121);
__builtin_memmove((R+4),(R+0),4);
}
B562123:{NFSU2_TR(0x562123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562128ull));
TAIL_STATIC(0x55b5c0u,55b);
}
B562128:L562128:{c.instructions+=3;NFSU2_TR(0x562128);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B56212e:{NFSU2_TR(0x56212e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562130:{NFSU2_TR(0x562130);
if(r1(R+518)){{goto L56213e;}}
}
B562132:L562132:{c.instructions+=3;NFSU2_TR(0x562132);
__builtin_memmove((R+8),gp(0x7fa1cc),4);
}
B562138:{NFSU2_TR(0x562138);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562139:{NFSU2_TR(0x562139);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56213eull));
TAIL_STATIC(0x5376f0u,537);
}
B56213e:L56213e:{c.instructions+=1;NFSU2_TR(0x56213e);
s1(0x83855d,u8(0x0ull));
}
B562145:L562145:{c.instructions+=4;NFSU2_TR(0x562145);
__builtin_memmove((R+0),gp(0x838994),4);
}
B56214a:{NFSU2_TR(0x56214a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56214b:{NFSU2_TR(0x56214b);
__builtin_memmove((R+4),(R+24),4);
}
B56214d:{NFSU2_TR(0x56214d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562152ull));
TAIL_STATIC(0x50f1e0u,50f);
}
B562152:L562152:{c.instructions+=5;NFSU2_TR(0x562152);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B562155:{NFSU2_TR(0x562155);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562156:{NFSU2_TR(0x562156);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56215b:{NFSU2_TR(0x56215b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56215c:{NFSU2_TR(0x56215c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562161ull));
TAIL_STATIC(0x495460u,495);
}
B562161:L562161:{c.instructions+=5;NFSU2_TR(0x562161);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562164:{NFSU2_TR(0x562164);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B562167:{NFSU2_TR(0x562167);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B56216a:{NFSU2_TR(0x56216a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56216c:{NFSU2_TR(0x56216c);
if(r1(R+518)){{goto L562173;}}
}
B56216e:L56216e:{c.instructions+=2;NFSU2_TR(0x56216e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562171:{NFSU2_TR(0x562171);
{goto L562175;}
}
B562173:L562173:{c.instructions+=1;NFSU2_TR(0x562173);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B562175:L562175:{c.instructions+=5;NFSU2_TR(0x562175);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B562178:{NFSU2_TR(0x562178);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562179:{NFSU2_TR(0x562179);
u8 U[4];
w4(U+0,u32(0x666176bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56217e:{NFSU2_TR(0x56217e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56217f:{NFSU2_TR(0x56217f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562184ull));
TAIL_STATIC(0x495460u,495);
}
B562184:L562184:{c.instructions+=7;NFSU2_TR(0x562184);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562187:{NFSU2_TR(0x562187);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56218a:{NFSU2_TR(0x56218a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B562190:{NFSU2_TR(0x562190);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B562193:{NFSU2_TR(0x562193);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B562196:{NFSU2_TR(0x562196);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B562198:{NFSU2_TR(0x562198);
if(r1(R+518)){{goto L5621c5;}}
}
B56219a:L56219a:{c.instructions+=7;NFSU2_TR(0x56219a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56219d:{NFSU2_TR(0x56219d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56219e:{NFSU2_TR(0x56219e);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5621a3:{NFSU2_TR(0x5621a3);
u8 U[4];
w4(U+0,u32(0x3d3f9f04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5621a8:{NFSU2_TR(0x5621a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5621a9:{NFSU2_TR(0x5621a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5621af:{NFSU2_TR(0x5621af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5621b4ull));
TAIL_STATIC(0x537c00u,537);
}
B5621b4:L5621b4:{c.instructions+=3;NFSU2_TR(0x5621b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5621b7:{NFSU2_TR(0x5621b7);
__builtin_memmove((R+4),(R+24),4);
}
B5621b9:{NFSU2_TR(0x5621b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5621beull));
TAIL_STATIC(0x54ff90u,54f);
}
B5621be:L5621be:{c.instructions+=5;NFSU2_TR(0x5621be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5621bf:{NFSU2_TR(0x5621bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5621c0:{NFSU2_TR(0x5621c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5621c1:{NFSU2_TR(0x5621c1);
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
B5621c4:{NFSU2_TR(0x5621c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5621c5:L5621c5:{c.instructions+=2;NFSU2_TR(0x5621c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5621c7:{NFSU2_TR(0x5621c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56228b;}}
}
B5621cd:L5621cd:{c.instructions+=4;NFSU2_TR(0x5621cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xa0f26827ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5621d4:{NFSU2_TR(0x5621d4);
__builtin_memmove((R+0),gp(0x83855d),1);
}
B5621d9:{NFSU2_TR(0x5621d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5621db:{NFSU2_TR(0x5621db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L562258;}}
}
B5621dd:L5621dd:{c.instructions+=2;NFSU2_TR(0x5621dd);
u8 U[4];
w4(U+0,u32(0x799cd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5621e2:{NFSU2_TR(0x5621e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5621e7ull));
TAIL_STATIC(0x52cf60u,52c);
}
B5621e7:L5621e7:{c.instructions+=3;NFSU2_TR(0x5621e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5621ea:{NFSU2_TR(0x5621ea);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5621ec:{NFSU2_TR(0x5621ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L562206;}}
}
B5621ee:L5621ee:{c.instructions+=6;NFSU2_TR(0x5621ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5621f1:{NFSU2_TR(0x5621f1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5621f3:{NFSU2_TR(0x5621f3);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5621f8:{NFSU2_TR(0x5621f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5621f9:{NFSU2_TR(0x5621f9);
u8 U[4];
w4(U+0,u32(0x799cd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5621fe:{NFSU2_TR(0x5621fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562203ull));
TAIL_STATIC(0x555f10u,555);
}
B562203:L562203:{c.instructions+=1;NFSU2_TR(0x562203);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B562206:L562206:{c.instructions+=2;NFSU2_TR(0x562206);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56220c:{NFSU2_TR(0x56220c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L562227;}}
}
B56220e:L56220e:{c.instructions+=2;NFSU2_TR(0x56220e);
u8 U[8];
__builtin_memmove((U+0),gp(0x83898c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B562214:{NFSU2_TR(0x562214);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L562227;}}
}
B562216:L562216:{c.instructions+=6;NFSU2_TR(0x562216);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B562219:{NFSU2_TR(0x562219);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56221a:{NFSU2_TR(0x56221a);
u8 U[4];
w4(U+0,u32(0x79d7e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56221f:{NFSU2_TR(0x56221f);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562224:{NFSU2_TR(0x562224);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562225:{NFSU2_TR(0x562225);
{goto L562236;}
}
B562227:L562227:{c.instructions+=5;NFSU2_TR(0x562227);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56222a:{NFSU2_TR(0x56222a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56222b:{NFSU2_TR(0x56222b);
u8 U[4];
w4(U+0,u32(0x79d7f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562230:{NFSU2_TR(0x562230);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562235:{NFSU2_TR(0x562235);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562236:L562236:{c.instructions+=1;NFSU2_TR(0x562236);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56223bull));
TAIL_STATIC(0x537c00u,537);
}
B56223b:L56223b:{c.instructions+=5;NFSU2_TR(0x56223b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B562241:{NFSU2_TR(0x562241);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B562244:{NFSU2_TR(0x562244);
__builtin_memmove((R+4),(R+24),4);
}
B562246:{NFSU2_TR(0x562246);
__builtin_memmove(gp(0x83855d),(R+12),1);
}
B56224c:{NFSU2_TR(0x56224c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562251ull));
TAIL_STATIC(0x54ff90u,54f);
}
B562251:L562251:{c.instructions+=5;NFSU2_TR(0x562251);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B562252:{NFSU2_TR(0x562252);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562253:{NFSU2_TR(0x562253);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B562254:{NFSU2_TR(0x562254);
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
B562257:{NFSU2_TR(0x562257);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562258:L562258:{c.instructions+=3;NFSU2_TR(0x562258);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x161ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56225e:{NFSU2_TR(0x56225e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B562260:{NFSU2_TR(0x562260);
if(r1(R+518)){{goto L562518;}}
}
B562266:L562266:{c.instructions+=6;NFSU2_TR(0x562266);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B562269:{NFSU2_TR(0x562269);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56226a:{NFSU2_TR(0x56226a);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56226f:{NFSU2_TR(0x56226f);
u8 U[4];
w4(U+0,u32(0x3d3f9f04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562274:{NFSU2_TR(0x562274);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562275:{NFSU2_TR(0x562275);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56227aull));
TAIL_STATIC(0x537c00u,537);
}
B56227a:L56227a:{c.instructions+=3;NFSU2_TR(0x56227a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B56227d:{NFSU2_TR(0x56227d);
__builtin_memmove((R+4),(R+24),4);
}
B56227f:{NFSU2_TR(0x56227f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562284ull));
TAIL_STATIC(0x54ff90u,54f);
}
B562284:L562284:{c.instructions+=5;NFSU2_TR(0x562284);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B562285:{NFSU2_TR(0x562285);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562286:{NFSU2_TR(0x562286);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B562287:{NFSU2_TR(0x562287);
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
B56228a:{NFSU2_TR(0x56228a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56228b:L56228b:{c.instructions+=2;NFSU2_TR(0x56228b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56228e:{NFSU2_TR(0x56228e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L562321;}}
}
B562294:L562294:{c.instructions+=4;NFSU2_TR(0x562294);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562299:{NFSU2_TR(0x562299);
w4(R+4,u32(0x8389d0ull));
}
B56229e:{NFSU2_TR(0x56229e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x8109153dull));
s4(u32(r4(U+0)),r4(U+4));
}
B5622a5:{NFSU2_TR(0x5622a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5622aaull));
TAIL_STATIC(0x413440u,413);
}
B5622aa:L5622aa:{c.instructions+=4;NFSU2_TR(0x5622aa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5622ac:{NFSU2_TR(0x5622ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5622ad:{NFSU2_TR(0x5622ad);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5622b2:{NFSU2_TR(0x5622b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5622b7ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B5622b7:L5622b7:{c.instructions+=7;NFSU2_TR(0x5622b7);
__builtin_memmove((R+8),gp(0x838994),4);
}
B5622bd:{NFSU2_TR(0x5622bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5622c0:{NFSU2_TR(0x5622c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5622c2:{NFSU2_TR(0x5622c2);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5622c7:{NFSU2_TR(0x5622c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5622c8:{NFSU2_TR(0x5622c8);
w4(R+4,u32(0x838980ull));
}
B5622cd:{NFSU2_TR(0x5622cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5622d2ull));
TAIL_STATIC(0x521a20u,521);
}
B5622d2:L5622d2:{c.instructions+=3;NFSU2_TR(0x5622d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5622d8:{NFSU2_TR(0x5622d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5622da:{NFSU2_TR(0x5622da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56230d;}}
}
B5622dc:L5622dc:{c.instructions+=3;NFSU2_TR(0x5622dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5622de:{NFSU2_TR(0x5622de);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5622e1:{NFSU2_TR(0x5622e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5622e6ull));
TAIL_STATIC(0x43be80u,43b);
}
B5622e6:L5622e6:{c.instructions+=4;NFSU2_TR(0x5622e6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5622e7:{NFSU2_TR(0x5622e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5622e8:{NFSU2_TR(0x5622e8);
__builtin_memmove((R+4),(R+28),4);
}
B5622ea:{NFSU2_TR(0x5622ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5622efull));
TAIL_STATIC(0x512e20u,512);
}
B5622ef:L5622ef:{c.instructions+=3;NFSU2_TR(0x5622ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5622f2:{NFSU2_TR(0x5622f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5622f4:{NFSU2_TR(0x5622f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56230d;}}
}
B5622f6:L5622f6:{c.instructions+=6;NFSU2_TR(0x5622f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5622f9:{NFSU2_TR(0x5622f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5622fa:{NFSU2_TR(0x5622fa);
u8 U[4];
w4(U+0,u32(0x79d7f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5622ff:{NFSU2_TR(0x5622ff);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562304:{NFSU2_TR(0x562304);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562305:{NFSU2_TR(0x562305);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56230aull));
TAIL_STATIC(0x537c00u,537);
}
B56230a:L56230a:{c.instructions+=1;NFSU2_TR(0x56230a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B56230d:L56230d:{c.instructions+=3;NFSU2_TR(0x56230d);
__builtin_memmove((R+4),(R+24),4);
}
B56230f:{NFSU2_TR(0x56230f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B562315:{NFSU2_TR(0x562315);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56231aull));
TAIL_STATIC(0x54ff90u,54f);
}
B56231a:L56231a:{c.instructions+=5;NFSU2_TR(0x56231a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56231b:{NFSU2_TR(0x56231b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56231c:{NFSU2_TR(0x56231c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56231d:{NFSU2_TR(0x56231d);
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
B562320:{NFSU2_TR(0x562320);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562321:L562321:{c.instructions+=2;NFSU2_TR(0x562321);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B562323:{NFSU2_TR(0x562323);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L562518;}}
}
B562329:L562329:{c.instructions+=4;NFSU2_TR(0x562329);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56232f:{NFSU2_TR(0x56232f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B562331:{NFSU2_TR(0x562331);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x8109153dull));
s4(u32(r4(U+0)),r4(U+4));
}
B562338:{NFSU2_TR(0x562338);
if(r1(R+518)){{goto L562366;}}
}
B56233a:L56233a:{c.instructions+=7;NFSU2_TR(0x56233a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56233d:{NFSU2_TR(0x56233d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56233e:{NFSU2_TR(0x56233e);
u8 U[4];
w4(U+0,u32(0x79d7e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562343:{NFSU2_TR(0x562343);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562348:{NFSU2_TR(0x562348);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562349:{NFSU2_TR(0x562349);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B562350:{NFSU2_TR(0x562350);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562355ull));
TAIL_STATIC(0x537c00u,537);
}
B562355:L562355:{c.instructions+=4;NFSU2_TR(0x562355);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B562358:{NFSU2_TR(0x562358);
u8 U[4];
w4(U+0,u32(0x3d3f9f04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56235d:{NFSU2_TR(0x56235d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56235e:{NFSU2_TR(0x56235e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562363ull));
TAIL_STATIC(0x495520u,495);
}
B562363:L562363:{c.instructions+=1;NFSU2_TR(0x562363);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B562366:L562366:{c.instructions+=3;NFSU2_TR(0x562366);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562369:{NFSU2_TR(0x562369);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56236c:{NFSU2_TR(0x56236c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L562373;}}
}
B56236e:L56236e:{c.instructions+=2;NFSU2_TR(0x56236e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562371:{NFSU2_TR(0x562371);
{goto L562375;}
}
B562373:L562373:{c.instructions+=1;NFSU2_TR(0x562373);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B562375:L562375:{c.instructions+=3;NFSU2_TR(0x562375);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562376:{NFSU2_TR(0x562376);
__builtin_memmove((R+4),(R+24),4);
}
B562378:{NFSU2_TR(0x562378);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56237dull));
TAIL_STATIC(0x547b60u,547);
}
B56237d:L56237d:{c.instructions+=2;NFSU2_TR(0x56237d);
w4(R+4,u32(0x838980ull));
}
B562382:{NFSU2_TR(0x562382);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562387ull));
TAIL_STATIC(0x530140u,530);
}
B562387:L562387:{c.instructions+=3;NFSU2_TR(0x562387);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56238a:{NFSU2_TR(0x56238a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56238d:{NFSU2_TR(0x56238d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5623a6;}}
}
B56238f:L56238f:{c.instructions+=3;NFSU2_TR(0x56238f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562392:{NFSU2_TR(0x562392);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562394:{NFSU2_TR(0x562394);
if(r1(R+518)){{goto L5623a6;}}
}
B562396:L562396:{c.instructions+=4;NFSU2_TR(0x562396);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56239b:{NFSU2_TR(0x56239b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56239c:{NFSU2_TR(0x56239c);
w4(R+4,u32(0x838980ull));
}
B5623a1:{NFSU2_TR(0x5623a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5623a6ull));
TAIL_STATIC(0x521340u,521);
}
B5623a6:L5623a6:{c.instructions+=4;NFSU2_TR(0x5623a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5623a9:{NFSU2_TR(0x5623a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5623ac:{NFSU2_TR(0x5623ac);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5623ae:{NFSU2_TR(0x5623ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5623b5;}}
}
B5623b0:L5623b0:{c.instructions+=2;NFSU2_TR(0x5623b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5623b3:{NFSU2_TR(0x5623b3);
{goto L5623b7;}
}
B5623b5:L5623b5:{c.instructions+=1;NFSU2_TR(0x5623b5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5623b7:L5623b7:{c.instructions+=2;NFSU2_TR(0x5623b7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5623b9:{NFSU2_TR(0x5623b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5623c0;}}
}
B5623bb:L5623bb:{c.instructions+=2;NFSU2_TR(0x5623bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5623be:{NFSU2_TR(0x5623be);
{goto L5623c2;}
}
B5623c0:L5623c0:{c.instructions+=1;NFSU2_TR(0x5623c0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5623c2:L5623c2:{c.instructions+=10;NFSU2_TR(0x5623c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5623c5:{NFSU2_TR(0x5623c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5623c7:{NFSU2_TR(0x5623c7);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5623cb:{NFSU2_TR(0x5623cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5623cc:{NFSU2_TR(0x5623cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5623d0:{NFSU2_TR(0x5623d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5623d1:{NFSU2_TR(0x5623d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5623d2:{NFSU2_TR(0x5623d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5623d3:{NFSU2_TR(0x5623d3);
w4(R+4,u32(0x85ad40ull));
}
B5623d8:{NFSU2_TR(0x5623d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5623ddull));
TAIL_STATIC(0x5415e0u,541);
}
B5623dd:L5623dd:{c.instructions+=2;NFSU2_TR(0x5623dd);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5623e3:{NFSU2_TR(0x5623e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5624dd;}}
}
B5623e9:L5623e9:{c.instructions+=2;NFSU2_TR(0x5623e9);
u8 U[8];
__builtin_memmove((U+0),gp(0x83898c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5623ef:{NFSU2_TR(0x5623ef);
if(r1(R+518)){{goto L5624dd;}}
}
B5623f5:L5623f5:{c.instructions+=2;NFSU2_TR(0x5623f5);
w4(R+4,u32(0x85ad40ull));
}
B5623fa:{NFSU2_TR(0x5623fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5623ffull));
TAIL_STATIC(0x458340u,458);
}
B5623ff:L5623ff:{c.instructions+=2;NFSU2_TR(0x5623ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562401:{NFSU2_TR(0x562401);
if(r1(R+518)){{goto L56242c;}}
}
B562403:L562403:{c.instructions+=2;NFSU2_TR(0x562403);
w4(R+4,u32(0x85ad40ull));
}
B562408:{NFSU2_TR(0x562408);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56240dull));
TAIL_STATIC(0x458340u,458);
}
B56240d:L56240d:{c.instructions+=2;NFSU2_TR(0x56240d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7fc8d0d0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B562414:{NFSU2_TR(0x562414);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56242c;}}
}
B562416:L562416:{c.instructions+=2;NFSU2_TR(0x562416);
u8 U[4];
w4(U+0,u32(0x66559034ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56241b:{NFSU2_TR(0x56241b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562420ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B562420:L562420:{c.instructions+=5;NFSU2_TR(0x562420);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B562423:{NFSU2_TR(0x562423);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562424:{NFSU2_TR(0x562424);
u8 U[4];
w4(U+0,u32(0x6e0c9a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562429:{NFSU2_TR(0x562429);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56242a:{NFSU2_TR(0x56242a);
{goto L562440;}
}
B56242c:L56242c:{c.instructions+=2;NFSU2_TR(0x56242c);
u8 U[4];
w4(U+0,u32(0x6da17a25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562431:{NFSU2_TR(0x562431);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562436ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B562436:L562436:{c.instructions+=4;NFSU2_TR(0x562436);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B562439:{NFSU2_TR(0x562439);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56243a:{NFSU2_TR(0x56243a);
u8 U[4];
w4(U+0,u32(0x6e0c9a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56243f:{NFSU2_TR(0x56243f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562440:L562440:{c.instructions+=1;NFSU2_TR(0x562440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562445ull));
TAIL_STATIC(0x537b80u,537);
}
B562445:L562445:{c.instructions+=4;NFSU2_TR(0x562445);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562449:{NFSU2_TR(0x562449);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B56244c:{NFSU2_TR(0x56244c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56244e:{NFSU2_TR(0x56244e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L562461;}}
}
B562450:L562450:{c.instructions+=6;NFSU2_TR(0x562450);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562451:{NFSU2_TR(0x562451);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562454:{NFSU2_TR(0x562454);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562459:{NFSU2_TR(0x562459);
u8 U[4];
w4(U+0,u32(0xbe8693e1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56245e:{NFSU2_TR(0x56245e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56245f:{NFSU2_TR(0x56245f);
{goto L562475;}
}
B562461:L562461:{c.instructions+=2;NFSU2_TR(0x562461);
u8 U[4];
w4(U+0,u32(0xa4c02484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562466:{NFSU2_TR(0x562466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56246bull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B56246b:L56246b:{c.instructions+=4;NFSU2_TR(0x56246b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56246e:{NFSU2_TR(0x56246e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56246f:{NFSU2_TR(0x56246f);
u8 U[4];
w4(U+0,u32(0xbe8693e1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562474:{NFSU2_TR(0x562474);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562475:L562475:{c.instructions+=1;NFSU2_TR(0x562475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56247aull));
TAIL_STATIC(0x537b80u,537);
}
B56247a:L56247a:{c.instructions+=4;NFSU2_TR(0x56247a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56247e:{NFSU2_TR(0x56247e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B562481:{NFSU2_TR(0x562481);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562483:{NFSU2_TR(0x562483);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L562496;}}
}
B562485:L562485:{c.instructions+=6;NFSU2_TR(0x562485);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B562488:{NFSU2_TR(0x562488);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562489:{NFSU2_TR(0x562489);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56248e:{NFSU2_TR(0x56248e);
u8 U[4];
w4(U+0,u32(0x380b632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562493:{NFSU2_TR(0x562493);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562494:{NFSU2_TR(0x562494);
{goto L5624aa;}
}
B562496:L562496:{c.instructions+=2;NFSU2_TR(0x562496);
u8 U[4];
w4(U+0,u32(0xa4c02484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56249b:{NFSU2_TR(0x56249b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5624a0ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B5624a0:L5624a0:{c.instructions+=4;NFSU2_TR(0x5624a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5624a1:{NFSU2_TR(0x5624a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5624a4:{NFSU2_TR(0x5624a4);
u8 U[4];
w4(U+0,u32(0x380b632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5624a9:{NFSU2_TR(0x5624a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5624aa:L5624aa:{c.instructions+=1;NFSU2_TR(0x5624aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5624afull));
TAIL_STATIC(0x537b80u,537);
}
B5624af:L5624af:{c.instructions+=8;NFSU2_TR(0x5624af);
__builtin_memmove((R+4),gp(0x861e74),4);
}
B5624b5:{NFSU2_TR(0x5624b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5624b8:{NFSU2_TR(0x5624b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5624bb:{NFSU2_TR(0x5624bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5624bc:{NFSU2_TR(0x5624bc);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5624c1:{NFSU2_TR(0x5624c1);
u8 U[4];
w4(U+0,u32(0xeb3a688aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5624c6:{NFSU2_TR(0x5624c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5624c7:{NFSU2_TR(0x5624c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5624ccull));
TAIL_STATIC(0x537b80u,537);
}
B5624cc:L5624cc:{c.instructions+=3;NFSU2_TR(0x5624cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5624cf:{NFSU2_TR(0x5624cf);
__builtin_memmove((R+4),(R+24),4);
}
B5624d1:{NFSU2_TR(0x5624d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5624d6ull));
TAIL_STATIC(0x54ff90u,54f);
}
B5624d6:L5624d6:{c.instructions+=5;NFSU2_TR(0x5624d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5624d7:{NFSU2_TR(0x5624d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5624d8:{NFSU2_TR(0x5624d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5624d9:{NFSU2_TR(0x5624d9);
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
B5624dc:{NFSU2_TR(0x5624dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5624dd:L5624dd:{c.instructions+=4;NFSU2_TR(0x5624dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5624e0:{NFSU2_TR(0x5624e0);
u8 U[4];
w4(U+0,u32(0x6e0c9a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5624e5:{NFSU2_TR(0x5624e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5624e6:{NFSU2_TR(0x5624e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5624ebull));
TAIL_STATIC(0x4954e0u,495);
}
B5624eb:L5624eb:{c.instructions+=4;NFSU2_TR(0x5624eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5624ee:{NFSU2_TR(0x5624ee);
u8 U[4];
w4(U+0,u32(0xbe8693e1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5624f3:{NFSU2_TR(0x5624f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5624f4:{NFSU2_TR(0x5624f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5624f9ull));
TAIL_STATIC(0x4954e0u,495);
}
B5624f9:L5624f9:{c.instructions+=4;NFSU2_TR(0x5624f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5624fc:{NFSU2_TR(0x5624fc);
u8 U[4];
w4(U+0,u32(0x380b632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562501:{NFSU2_TR(0x562501);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562502:{NFSU2_TR(0x562502);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562507ull));
TAIL_STATIC(0x4954e0u,495);
}
B562507:L562507:{c.instructions+=4;NFSU2_TR(0x562507);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56250a:{NFSU2_TR(0x56250a);
u8 U[4];
w4(U+0,u32(0x89ca4fdbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56250f:{NFSU2_TR(0x56250f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562510:{NFSU2_TR(0x562510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562515ull));
TAIL_STATIC(0x4954e0u,495);
}
B562515:L562515:{c.instructions+=1;NFSU2_TR(0x562515);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B562518:L562518:{c.instructions+=2;NFSU2_TR(0x562518);
__builtin_memmove((R+4),(R+24),4);
}
B56251a:{NFSU2_TR(0x56251a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56251full));
TAIL_STATIC(0x54ff90u,54f);
}
B56251f:L56251f:{c.instructions+=5;NFSU2_TR(0x56251f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B562520:{NFSU2_TR(0x562520);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562521:{NFSU2_TR(0x562521);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B562522:{NFSU2_TR(0x562522);
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
B562525:{NFSU2_TR(0x562525);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562530:L562530:{c.instructions+=6;NFSU2_TR(0x562530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B562533:{NFSU2_TR(0x562533);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562534:{NFSU2_TR(0x562534);
__builtin_memmove((R+28),(R+4),4);
}
B562536:{NFSU2_TR(0x562536);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56253b:{NFSU2_TR(0x56253b);
w4(R+4,u32(0x8389d0ull));
}
B562540:{NFSU2_TR(0x562540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562545ull));
TAIL_STATIC(0x413440u,413);
}
B562545:L562545:{c.instructions+=4;NFSU2_TR(0x562545);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562547:{NFSU2_TR(0x562547);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562549:{NFSU2_TR(0x562549);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56254e:{NFSU2_TR(0x56254e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562553ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B562553:L562553:{c.instructions+=4;NFSU2_TR(0x562553);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1e5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B562559:{NFSU2_TR(0x562559);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B56255c:{NFSU2_TR(0x56255c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56255e:{NFSU2_TR(0x56255e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L562588;}}
}
B562560:L562560:{c.instructions+=3;NFSU2_TR(0x562560);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562563:{NFSU2_TR(0x562563);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562565:{NFSU2_TR(0x562565);
if(r1(R+518)){{goto L562588;}}
}
B562567:L562567:{c.instructions+=3;NFSU2_TR(0x562567);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56256a:{NFSU2_TR(0x56256a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56256c:{NFSU2_TR(0x56256c);
if(r1(R+518)){{goto L562588;}}
}
B56256e:L56256e:{c.instructions+=2;NFSU2_TR(0x56256e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562570:{NFSU2_TR(0x562570);
if(r1(R+518)){{goto L562576;}}
}
B562572:L562572:{c.instructions+=2;NFSU2_TR(0x562572);
__builtin_memmove((R+0),(R+4),4);
}
B562574:{NFSU2_TR(0x562574);
{goto L562578;}
}
B562576:L562576:{c.instructions+=1;NFSU2_TR(0x562576);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B562578:L562578:{c.instructions+=4;NFSU2_TR(0x562578);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56257d:{NFSU2_TR(0x56257d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56257e:{NFSU2_TR(0x56257e);
w4(R+4,u32(0x838980ull));
}
B562583:{NFSU2_TR(0x562583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562588ull));
TAIL_STATIC(0x5213d0u,521);
}
B562588:L562588:{c.instructions+=4;NFSU2_TR(0x562588);
__builtin_memmove((R+0),gp(0x7fa1c8),4);
}
B56258d:{NFSU2_TR(0x56258d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56258e:{NFSU2_TR(0x56258e);
w4(R+4,u32(0x8637b0ull));
}
B562593:{NFSU2_TR(0x562593);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562598ull));
TAIL_STATIC(0x51bb70u,51b);
}
B562598:L562598:{c.instructions+=2;NFSU2_TR(0x562598);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56259a:{NFSU2_TR(0x56259a);
if(r1(R+518)){{goto L5625bb;}}
}
B56259c:L56259c:{c.instructions+=3;NFSU2_TR(0x56259c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56259f:{NFSU2_TR(0x56259f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5625a1:{NFSU2_TR(0x5625a1);
if(r1(R+518)){{goto L5625bb;}}
}
B5625a3:L5625a3:{c.instructions+=3;NFSU2_TR(0x5625a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5625a6:{NFSU2_TR(0x5625a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5625a8:{NFSU2_TR(0x5625a8);
if(r1(R+518)){{goto L5625bb;}}
}
B5625aa:L5625aa:{c.instructions+=6;NFSU2_TR(0x5625aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5625ab:{NFSU2_TR(0x5625ab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5625ad:{NFSU2_TR(0x5625ad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5625af:{NFSU2_TR(0x5625af);
u8 U[4];
w4(U+0,u32(0xc516cd37ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5625b4:{NFSU2_TR(0x5625b4);
__builtin_memmove((R+4),(R+0),4);
}
B5625b6:{NFSU2_TR(0x5625b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5625bbull));
TAIL_STATIC(0x55b5c0u,55b);
}
B5625bb:L5625bb:{c.instructions+=14;NFSU2_TR(0x5625bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5625bc:{NFSU2_TR(0x5625bc);
__builtin_memmove((R+12),gp(0x83aa1a),1);
}
B5625c2:{NFSU2_TR(0x5625c2);
__builtin_memmove((R+4),(R+12),1);
}
B5625c4:{NFSU2_TR(0x5625c4);
w1(R+4,u8(u32(r1(R+4))-u32(u8(0x1ull))));
}
B5625c6:{NFSU2_TR(0x5625c6);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B5625c8:{NFSU2_TR(0x5625c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5625c9:{NFSU2_TR(0x5625c9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5625cb:{NFSU2_TR(0x5625cb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5625cd:{NFSU2_TR(0x5625cd);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5625cf:{NFSU2_TR(0x5625cf);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x513709e0ull))));
}
B5625d5:{NFSU2_TR(0x5625d5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5b81d613ull))));
}
B5625db:{NFSU2_TR(0x5625db);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5625df:{NFSU2_TR(0x5625df);
w4(R+4,u32(0x8392d0ull));
}
B5625e4:{NFSU2_TR(0x5625e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5625e9ull));
TAIL_STATIC(0x5b5810u,5b5);
}
B5625e9:L5625e9:{c.instructions+=8;NFSU2_TR(0x5625e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5625ef:{NFSU2_TR(0x5625ef);
{u32 ea_=u32(r4(R+28)+u32(380u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5625f5:{NFSU2_TR(0x5625f5);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5625fb:{NFSU2_TR(0x5625fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14cull))));
__builtin_memmove((R+24),(U+0),4);
}
B562601:{NFSU2_TR(0x562601);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B562604:{NFSU2_TR(0x562604);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B562606:{NFSU2_TR(0x562606);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B562609:{NFSU2_TR(0x562609);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L562611;}}
}
B56260b:L56260b:{c.instructions+=2;NFSU2_TR(0x56260b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56260e:{NFSU2_TR(0x56260e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B562611:L562611:{c.instructions+=5;NFSU2_TR(0x562611);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B562614:{NFSU2_TR(0x562614);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B562617:{NFSU2_TR(0x562617);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B562619:{NFSU2_TR(0x562619);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56261c:{NFSU2_TR(0x56261c);
if(r1(R+514)){{goto L562624;}}
}
B56261e:L56261e:{c.instructions+=2;NFSU2_TR(0x56261e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B562621:{NFSU2_TR(0x562621);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B562624:L562624:{c.instructions+=4;NFSU2_TR(0x562624);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562626:{NFSU2_TR(0x562626);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562628:{NFSU2_TR(0x562628);
w4(R+4,u32(0x8389e0ull));
}
B56262d:{NFSU2_TR(0x56262d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562632ull));
TAIL_STATIC(0x5b5810u,5b5);
}
B562632:L562632:{c.instructions+=4;NFSU2_TR(0x562632);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B562634:{NFSU2_TR(0x562634);
{u32 ea_=u32(r4(R+28)+u32(404u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56263a:{NFSU2_TR(0x56263a);
__builtin_memmove((R+4),(R+24),4);
}
B56263c:{NFSU2_TR(0x56263c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56263full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B56263f:L56263f:{c.instructions+=4;NFSU2_TR(0x56263f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562641:{NFSU2_TR(0x562641);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562643:{NFSU2_TR(0x562643);
w4(R+4,u32(0x8392d0ull));
}
B562648:{NFSU2_TR(0x562648);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56264dull));
TAIL_STATIC(0x5b5810u,5b5);
}
B56264d:L56264d:{c.instructions+=5;NFSU2_TR(0x56264d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B562651:{NFSU2_TR(0x562651);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562653:{NFSU2_TR(0x562653);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562655:{NFSU2_TR(0x562655);
w4(R+4,u32(0x8389e0ull));
}
B56265a:{NFSU2_TR(0x56265a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56265full));
TAIL_STATIC(0x5b5810u,5b5);
}
B56265f:L56265f:{c.instructions+=4;NFSU2_TR(0x56265f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B562663:{NFSU2_TR(0x562663);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B562666:{NFSU2_TR(0x562666);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56266c:{NFSU2_TR(0x56266c);
if(r1(R+518)){{goto L562674;}}
}
B56266e:L56266e:{c.instructions+=1;NFSU2_TR(0x56266e);
{u32 ea_=u32(u32(7978748u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B562674:L562674:{c.instructions+=2;NFSU2_TR(0x562674);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B562678:{NFSU2_TR(0x562678);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56267dull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B56267d:L56267d:{c.instructions+=2;NFSU2_TR(0x56267d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56267f:{NFSU2_TR(0x56267f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56268b;}}
}
B562681:L562681:{c.instructions+=2;NFSU2_TR(0x562681);
w4(R+8,u32(0xc01a6f63ull));
}
B562686:{NFSU2_TR(0x562686);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56268bull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B56268b:L56268b:{c.instructions+=8;NFSU2_TR(0x56268b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56268c:{NFSU2_TR(0x56268c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56268f:{NFSU2_TR(0x56268f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B562692:{NFSU2_TR(0x562692);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B562695:{NFSU2_TR(0x562695);
u8 U[4];
w4(U+0,u32(0x79d800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56269a:{NFSU2_TR(0x56269a);
u8 U[4];
w4(U+0,u32(0x18531358ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56269f:{NFSU2_TR(0x56269f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5626a0:{NFSU2_TR(0x5626a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5626a5ull));
TAIL_STATIC(0x537b80u,537);
}
B5626a5:L5626a5:{c.instructions+=12;NFSU2_TR(0x5626a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5626a8:{NFSU2_TR(0x5626a8);
__builtin_memmove((R+4),(R+12),1);
}
B5626aa:{NFSU2_TR(0x5626aa);
w1(R+4,u8(u32(r1(R+4))-u32(u8(0x1ull))));
}
B5626ac:{NFSU2_TR(0x5626ac);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B5626ae:{NFSU2_TR(0x5626ae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5626b0:{NFSU2_TR(0x5626b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5626b2:{NFSU2_TR(0x5626b2);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5626b4:{NFSU2_TR(0x5626b4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x703a8f58ull))));
}
B5626ba:{NFSU2_TR(0x5626ba);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5b81d5baull))));
}
B5626c0:{NFSU2_TR(0x5626c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5626c4:{NFSU2_TR(0x5626c4);
w4(R+4,u32(0x8392d0ull));
}
B5626c9:{NFSU2_TR(0x5626c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5626ceull));
TAIL_STATIC(0x5b56e0u,5b5);
}
B5626ce:L5626ce:{c.instructions+=8;NFSU2_TR(0x5626ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5626d4:{NFSU2_TR(0x5626d4);
{u32 ea_=u32(r4(R+28)+u32(456u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5626da:{NFSU2_TR(0x5626da);
{u32 ea_=u32(r4(R+28)+u32(444u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5626e0:{NFSU2_TR(0x5626e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x198ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5626e6:{NFSU2_TR(0x5626e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5626e9:{NFSU2_TR(0x5626e9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5626eb:{NFSU2_TR(0x5626eb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5626ee:{NFSU2_TR(0x5626ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5626f6;}}
}
B5626f0:L5626f0:{c.instructions+=2;NFSU2_TR(0x5626f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5626f3:{NFSU2_TR(0x5626f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5626f6:L5626f6:{c.instructions+=5;NFSU2_TR(0x5626f6);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5626f9:{NFSU2_TR(0x5626f9);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5626fc:{NFSU2_TR(0x5626fc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5626fe:{NFSU2_TR(0x5626fe);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B562701:{NFSU2_TR(0x562701);
if(r1(R+514)){{goto L562709;}}
}
B562703:L562703:{c.instructions+=2;NFSU2_TR(0x562703);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B562706:{NFSU2_TR(0x562706);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B562709:L562709:{c.instructions+=4;NFSU2_TR(0x562709);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56270b:{NFSU2_TR(0x56270b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56270d:{NFSU2_TR(0x56270d);
w4(R+4,u32(0x8389e0ull));
}
B562712:{NFSU2_TR(0x562712);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562717ull));
TAIL_STATIC(0x5b56e0u,5b5);
}
B562717:L562717:{c.instructions+=4;NFSU2_TR(0x562717);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B562719:{NFSU2_TR(0x562719);
{u32 ea_=u32(r4(R+28)+u32(480u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56271f:{NFSU2_TR(0x56271f);
__builtin_memmove((R+4),(R+24),4);
}
B562721:{NFSU2_TR(0x562721);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562724ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B562724:L562724:{c.instructions+=4;NFSU2_TR(0x562724);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562726:{NFSU2_TR(0x562726);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562728:{NFSU2_TR(0x562728);
w4(R+4,u32(0x8392d0ull));
}
B56272d:{NFSU2_TR(0x56272d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562732ull));
TAIL_STATIC(0x5b56e0u,5b5);
}
B562732:L562732:{c.instructions+=5;NFSU2_TR(0x562732);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B562736:{NFSU2_TR(0x562736);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562738:{NFSU2_TR(0x562738);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56273a:{NFSU2_TR(0x56273a);
w4(R+4,u32(0x8389e0ull));
}
B56273f:{NFSU2_TR(0x56273f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562744ull));
TAIL_STATIC(0x5b56e0u,5b5);
}
B562744:L562744:{c.instructions+=5;NFSU2_TR(0x562744);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B562748:{NFSU2_TR(0x562748);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562749:{NFSU2_TR(0x562749);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B56274c:{NFSU2_TR(0x56274c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56274d:{NFSU2_TR(0x56274d);
if(r1(R+518)){{goto L562755;}}
}
B56274f:L56274f:{c.instructions+=1;NFSU2_TR(0x56274f);
{u32 ea_=u32(u32(7978736u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B562755:L562755:{c.instructions+=2;NFSU2_TR(0x562755);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B562759:{NFSU2_TR(0x562759);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56275eull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B56275e:L56275e:{c.instructions+=2;NFSU2_TR(0x56275e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562760:{NFSU2_TR(0x562760);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56276c;}}
}
B562762:L562762:{c.instructions+=2;NFSU2_TR(0x562762);
w4(R+8,u32(0xc01a6f63ull));
}
B562767:{NFSU2_TR(0x562767);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56276cull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B56276c:L56276c:{c.instructions+=8;NFSU2_TR(0x56276c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56276d:{NFSU2_TR(0x56276d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562770:{NFSU2_TR(0x562770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B562773:{NFSU2_TR(0x562773);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B562776:{NFSU2_TR(0x562776);
u8 U[4];
w4(U+0,u32(0x79d800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56277b:{NFSU2_TR(0x56277b);
u8 U[4];
w4(U+0,u32(0x6bb32446ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562780:{NFSU2_TR(0x562780);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562781:{NFSU2_TR(0x562781);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562786ull));
TAIL_STATIC(0x537b80u,537);
}
B562786:L562786:{c.instructions+=4;NFSU2_TR(0x562786);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B562789:{NFSU2_TR(0x562789);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56278a:{NFSU2_TR(0x56278a);
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
B56278d:{NFSU2_TR(0x56278d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562790:L562790:{c.instructions+=6;NFSU2_TR(0x562790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B562793:{NFSU2_TR(0x562793);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562794:{NFSU2_TR(0x562794);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562795:{NFSU2_TR(0x562795);
__builtin_memmove((R+28),(R+4),4);
}
B562797:{NFSU2_TR(0x562797);
w4(R+24,u32(0x1ull));
}
B56279c:{NFSU2_TR(0x56279c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56279d:L56279d:{c.instructions+=5;NFSU2_TR(0x56279d);
__builtin_memmove((R+4),gp(0x863444),4);
}
B5627a3:{NFSU2_TR(0x5627a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5627a5:{NFSU2_TR(0x5627a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5627a9:{NFSU2_TR(0x5627a9);
w4(R+0,u32(0x4ull));
}
B5627ae:{NFSU2_TR(0x5627ae);
if(r1(R+518)){{goto L5627c8;}}
}
B5627b0:L5627b0:{c.instructions+=3;NFSU2_TR(0x5627b0);
__builtin_memmove((R+4),gp(0x86344c),4);
}
B5627b6:{NFSU2_TR(0x5627b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5627b8:{NFSU2_TR(0x5627b8);
if(r1(R+518)){{goto L5627c8;}}
}
B5627ba:L5627ba:{c.instructions+=2;NFSU2_TR(0x5627ba);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7fc8d0d0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5627c1:{NFSU2_TR(0x5627c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5627c8;}}
}
B5627c3:L5627c3:{c.instructions+=1;NFSU2_TR(0x5627c3);
w4(R+0,u32(0x3ull));
}
B5627c8:L5627c8:{c.instructions+=2;NFSU2_TR(0x5627c8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5627ca:{NFSU2_TR(0x5627ca);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5628c2;}}
}
B5627d0:L5627d0:{c.instructions+=4;NFSU2_TR(0x5627d0);
__builtin_memmove((R+8),gp(0x8383fc),4);
}
B5627d6:{NFSU2_TR(0x5627d6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5627d8:{NFSU2_TR(0x5627d8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5627da:{NFSU2_TR(0x5627da);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L562800;}}
}
B5627dc:L5627dc:{c.instructions+=1;NFSU2_TR(0x5627dc);
__builtin_memmove((R+4),gp(0x8383f8),4);
}
B5627e2:L5627e2:{c.instructions+=3;NFSU2_TR(0x5627e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5627e4:{NFSU2_TR(0x5627e4);
u8 U[8];
__builtin_memmove((U+0),gp(0x838994),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5627ea:{NFSU2_TR(0x5627ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5627f5;}}
}
B5627ec:L5627ec:{c.instructions+=2;NFSU2_TR(0x5627ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5627ef:{NFSU2_TR(0x5627ef);
if(r1(R+518)){{goto L562886;}}
}
B5627f5:L5627f5:{c.instructions+=4;NFSU2_TR(0x5627f5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5627f6:{NFSU2_TR(0x5627f6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x17cull))));
}
B5627fc:{NFSU2_TR(0x5627fc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5627fe:{NFSU2_TR(0x5627fe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5627e2u);}goto L5627e2;}}
}
B562800:L562800:{c.instructions+=1;NFSU2_TR(0x562800);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B562802:L562802:{c.instructions+=5;NFSU2_TR(0x562802);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B562805:{NFSU2_TR(0x562805);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B562807:{NFSU2_TR(0x562807);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56280b:{NFSU2_TR(0x56280b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56280f:{NFSU2_TR(0x56280f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+12),(U+0),4);
}
B562812:L562812:{c.instructions+=2;NFSU2_TR(0x562812);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B562816:{NFSU2_TR(0x562816);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5628b8;}}
}
B56281c:L56281c:{c.instructions+=5;NFSU2_TR(0x56281c);
__builtin_memmove((R+8),gp(0x8389b0),4);
}
B562822:{NFSU2_TR(0x562822);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B562824:{NFSU2_TR(0x562824);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562825:{NFSU2_TR(0x562825);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562826:{NFSU2_TR(0x562826);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56282bull));
TAIL_STATIC(0x50f0d0u,50f);
}
B56282b:L56282b:{c.instructions+=2;NFSU2_TR(0x56282b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56282c:{NFSU2_TR(0x56282c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562831ull));
TAIL_STATIC(0x52a090u,52a);
}
B562831:L562831:{c.instructions+=3;NFSU2_TR(0x562831);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B562834:{NFSU2_TR(0x562834);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B562836:{NFSU2_TR(0x562836);
if(r1(R+518)){{goto L5628a7;}}
}
B562838:L562838:{c.instructions+=2;NFSU2_TR(0x562838);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56283a:{NFSU2_TR(0x56283a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56283full));
TAIL_STATIC(0x575620u,575);
}
B56283f:L56283f:{c.instructions+=4;NFSU2_TR(0x56283f);
__builtin_memmove((R+24),(R+0),4);
}
B562841:{NFSU2_TR(0x562841);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B562844:{NFSU2_TR(0x562844);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562846:{NFSU2_TR(0x562846);
if(r1(R+518)){{goto L562899;}}
}
B562848:L562848:{c.instructions+=11;NFSU2_TR(0x562848);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56284a:{NFSU2_TR(0x56284a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B562850:{NFSU2_TR(0x562850);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562851:{NFSU2_TR(0x562851);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B562857:{NFSU2_TR(0x562857);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562858:{NFSU2_TR(0x562858);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B56285e:{NFSU2_TR(0x56285e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56285f:{NFSU2_TR(0x56285f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B562865:{NFSU2_TR(0x562865);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562866:{NFSU2_TR(0x562866);
__builtin_memmove((R+4),(R+24),4);
}
B562868:{NFSU2_TR(0x562868);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56286dull));
TAIL_STATIC(0x51e1b0u,51e);
}
B56286d:L56286d:{c.instructions+=5;NFSU2_TR(0x56286d);
u8 U[4];
w4(U+0,u32(0x79b620ull));
s4(u32(r4(R+24)),r4(U+0));
}
B562873:{NFSU2_TR(0x562873);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B562876:{NFSU2_TR(0x562876);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0xc3878000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56287d:{NFSU2_TR(0x56287d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0xc1200000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B562884:{NFSU2_TR(0x562884);
{goto L56289b;}
}
B562886:L562886:{c.instructions+=4;NFSU2_TR(0x562886);
__builtin_memmove((R+4),gp(0x8383f8),4);
}
B56288c:{NFSU2_TR(0x56288c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x17cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B562892:{NFSU2_TR(0x562892);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B562894:{NFSU2_TR(0x562894);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x562802u);}goto L562802;}
}
B562899:L562899:{c.instructions+=1;NFSU2_TR(0x562899);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B56289b:L56289b:{c.instructions+=3;NFSU2_TR(0x56289b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56289c:{NFSU2_TR(0x56289c);
__builtin_memmove((R+4),(R+28),4);
}
B56289e:{NFSU2_TR(0x56289e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5628a3ull));
TAIL_STATIC(0x54f820u,54f);
}
B5628a3:L5628a3:{c.instructions+=1;NFSU2_TR(0x5628a3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5628a7:L5628a7:{c.instructions+=5;NFSU2_TR(0x5628a7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5628a8:{NFSU2_TR(0x5628a8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x5cull))));
}
B5628ab:{NFSU2_TR(0x5628ab);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5628ae:{NFSU2_TR(0x5628ae);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5628b2:{NFSU2_TR(0x5628b2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x562812u);}goto L562812;}}
}
B5628b8:L5628b8:{c.instructions+=3;NFSU2_TR(0x5628b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5628bc:{NFSU2_TR(0x5628bc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5628bd:{NFSU2_TR(0x5628bd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56279du);}goto L56279d;}
}
B5628c2:L5628c2:{c.instructions+=5;NFSU2_TR(0x5628c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5628c5:{NFSU2_TR(0x5628c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5628c8:{NFSU2_TR(0x5628c8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5628ca:{NFSU2_TR(0x5628ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5628cb:{NFSU2_TR(0x5628cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L562929;}}
}
B5628cd:L5628cd:{c.instructions+=3;NFSU2_TR(0x5628cd);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5628cf:{NFSU2_TR(0x5628cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1e5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5628d6:{NFSU2_TR(0x5628d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5628dbull));
TAIL_STATIC(0x575620u,575);
}
B5628db:L5628db:{c.instructions+=4;NFSU2_TR(0x5628db);
__builtin_memmove((R+24),(R+0),4);
}
B5628dd:{NFSU2_TR(0x5628dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5628e0:{NFSU2_TR(0x5628e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5628e2:{NFSU2_TR(0x5628e2);
if(r1(R+518)){{goto L56291f;}}
}
B5628e4:L5628e4:{c.instructions+=11;NFSU2_TR(0x5628e4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5628e6:{NFSU2_TR(0x5628e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5628ec:{NFSU2_TR(0x5628ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5628ed:{NFSU2_TR(0x5628ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5628f3:{NFSU2_TR(0x5628f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5628f4:{NFSU2_TR(0x5628f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5628fa:{NFSU2_TR(0x5628fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5628fb:{NFSU2_TR(0x5628fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B562901:{NFSU2_TR(0x562901);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562902:{NFSU2_TR(0x562902);
__builtin_memmove((R+4),(R+24),4);
}
B562904:{NFSU2_TR(0x562904);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562909ull));
TAIL_STATIC(0x51e1b0u,51e);
}
B562909:L562909:{c.instructions+=4;NFSU2_TR(0x562909);
u8 U[4];
w4(U+0,u32(0x79b660ull));
s4(u32(r4(R+24)),r4(U+0));
}
B56290f:{NFSU2_TR(0x56290f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0xc3878000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B562916:{NFSU2_TR(0x562916);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0xc1200000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56291d:{NFSU2_TR(0x56291d);
{goto L562921;}
}
B56291f:L56291f:{c.instructions+=1;NFSU2_TR(0x56291f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B562921:L562921:{c.instructions+=3;NFSU2_TR(0x562921);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562922:{NFSU2_TR(0x562922);
__builtin_memmove((R+4),(R+28),4);
}
B562924:{NFSU2_TR(0x562924);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562929ull));
TAIL_STATIC(0x54f820u,54f);
}
B562929:L562929:{c.instructions+=3;NFSU2_TR(0x562929);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56292b:{NFSU2_TR(0x56292b);
__builtin_memmove((R+4),(R+28),4);
}
B56292d:{NFSU2_TR(0x56292d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562932ull));
TAIL_STATIC(0x539650u,539);
}
B562932:L562932:{c.instructions+=5;NFSU2_TR(0x562932);
__builtin_memmove((R+4),(R+28),4);
}
B562934:{NFSU2_TR(0x562934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B562935:{NFSU2_TR(0x562935);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562936:{NFSU2_TR(0x562936);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B562939:{NFSU2_TR(0x562939);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x562530u);}goto L562530;}
}
B562940:L562940:{c.instructions+=7;NFSU2_TR(0x562940);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562941:{NFSU2_TR(0x562941);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562942:{NFSU2_TR(0x562942);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B562945:{NFSU2_TR(0x562945);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B562947:{NFSU2_TR(0x562947);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B562949:{NFSU2_TR(0x562949);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56294a:{NFSU2_TR(0x56294a);
if(r1(R+518)){{goto L562969;}}
}
B56294c:L56294c:{c.instructions+=2;NFSU2_TR(0x56294c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56294d:{NFSU2_TR(0x56294d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562952ull));
TAIL_STATIC(0x52cef0u,52c);
}
B562952:L562952:{c.instructions+=3;NFSU2_TR(0x562952);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B562955:{NFSU2_TR(0x562955);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B562957:{NFSU2_TR(0x562957);
if(r1(R+518)){{goto L562969;}}
}
B562959:L562959:{c.instructions+=3;NFSU2_TR(0x562959);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56295e:{NFSU2_TR(0x56295e);
__builtin_memmove((R+4),(R+0),4);
}
B562960:{NFSU2_TR(0x562960);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562965ull));
TAIL_STATIC(0x517f80u,517);
}
B562965:L562965:{c.instructions+=2;NFSU2_TR(0x562965);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B562967:{NFSU2_TR(0x562967);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L562980;}}
}
B562969:L562969:{c.instructions+=3;NFSU2_TR(0x562969);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B56296e:{NFSU2_TR(0x56296e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B562970:{NFSU2_TR(0x562970);
if(r1(R+518)){{goto L5629c9;}}
}
B562972:L562972:{c.instructions+=4;NFSU2_TR(0x562972);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B562975:{NFSU2_TR(0x562975);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562976:{NFSU2_TR(0x562976);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56297b:{NFSU2_TR(0x56297b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562980ull));
TAIL_STATIC(0x52c570u,52c);
}
B562980:L562980:{c.instructions+=3;NFSU2_TR(0x562980);
__builtin_memmove((R+28),(R+0),4);
}
B562982:{NFSU2_TR(0x562982);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B562984:{NFSU2_TR(0x562984);
if(r1(R+518)){{goto L5629c9;}}
}
B562986:L562986:{c.instructions+=3;NFSU2_TR(0x562986);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B562989:{NFSU2_TR(0x562989);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56298b:{NFSU2_TR(0x56298b);
if(r1(R+518)){{goto L5629c9;}}
}
B56298d:L56298d:{c.instructions+=1;NFSU2_TR(0x56298d);
__builtin_memmove((R+4),(R+4),4);
}
B562990:L562990:{c.instructions+=2;NFSU2_TR(0x562990);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562995:{NFSU2_TR(0x562995);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56299aull));
TAIL_STATIC(0x505450u,505);
}
B56299a:L56299a:{c.instructions+=4;NFSU2_TR(0x56299a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56299d:{NFSU2_TR(0x56299d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5629a0:{NFSU2_TR(0x5629a0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5629a2:{NFSU2_TR(0x5629a2);
if(r1(R+518)){{goto L5629ad;}}
}
B5629a4:L5629a4:{c.instructions+=3;NFSU2_TR(0x5629a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5629a7:{NFSU2_TR(0x5629a7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5629a9:{NFSU2_TR(0x5629a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x562990u);}goto L562990;}}
}
B5629ab:L5629ab:{c.instructions+=1;NFSU2_TR(0x5629ab);
{goto L5629c9;}
}
B5629ad:L5629ad:{c.instructions+=2;NFSU2_TR(0x5629ad);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5629af:{NFSU2_TR(0x5629af);
if(r1(R+518)){{goto L5629c9;}}
}
B5629b1:L5629b1:{c.instructions+=2;NFSU2_TR(0x5629b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5629b4:{NFSU2_TR(0x5629b4);
if(r1(R+518)){{goto L5629c6;}}
}
B5629b6:L5629b6:{c.instructions+=3;NFSU2_TR(0x5629b6);
__builtin_memmove((R+4),(R+28),4);
}
B5629b8:{NFSU2_TR(0x5629b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5629bb:{NFSU2_TR(0x5629bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5629c0ull));
TAIL_STATIC(0x517720u,517);
}
B5629c0:L5629c0:{c.instructions+=2;NFSU2_TR(0x5629c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5629c3:{NFSU2_TR(0x5629c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5629c6:L5629c6:{c.instructions+=1;NFSU2_TR(0x5629c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5629c9:L5629c9:{c.instructions+=4;NFSU2_TR(0x5629c9);
__builtin_memmove((R+4),gp(0x7fa1c4),4);
}
B5629cf:{NFSU2_TR(0x5629cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5629d0:{NFSU2_TR(0x5629d0);
w4(R+4,u32(0x8637b0ull));
}
B5629d5:{NFSU2_TR(0x5629d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5629daull));
TAIL_STATIC(0x51bb70u,51b);
}
B5629da:L5629da:{c.instructions+=2;NFSU2_TR(0x5629da);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5629dc:{NFSU2_TR(0x5629dc);
if(r1(R+518)){{goto L5629fb;}}
}
B5629de:L5629de:{c.instructions+=3;NFSU2_TR(0x5629de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5629e1:{NFSU2_TR(0x5629e1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5629e3:{NFSU2_TR(0x5629e3);
if(r1(R+518)){{goto L5629fb;}}
}
B5629e5:L5629e5:{c.instructions+=3;NFSU2_TR(0x5629e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5629e8:{NFSU2_TR(0x5629e8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5629ea:{NFSU2_TR(0x5629ea);
if(r1(R+518)){{goto L5629fb;}}
}
B5629ec:L5629ec:{c.instructions+=6;NFSU2_TR(0x5629ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5629ed:{NFSU2_TR(0x5629ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5629ee:{NFSU2_TR(0x5629ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5629ef:{NFSU2_TR(0x5629ef);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5629f4:{NFSU2_TR(0x5629f4);
__builtin_memmove((R+4),(R+0),4);
}
B5629f6:{NFSU2_TR(0x5629f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5629fbull));
TAIL_STATIC(0x55b5c0u,55b);
}
B5629fb:L5629fb:{c.instructions+=3;NFSU2_TR(0x5629fb);
__builtin_memmove((R+8),gp(0x7fa1c4),4);
}
B562a01:{NFSU2_TR(0x562a01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562a02:{NFSU2_TR(0x562a02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562a07ull));
TAIL_STATIC(0x52cef0u,52c);
}
B562a07:L562a07:{c.instructions+=3;NFSU2_TR(0x562a07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B562a0a:{NFSU2_TR(0x562a0a);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B562a0c:{NFSU2_TR(0x562a0c);
if(r1(R+518)){{goto L562a1a;}}
}
B562a0e:L562a0e:{c.instructions+=4;NFSU2_TR(0x562a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B562a11:{NFSU2_TR(0x562a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B562a14:{NFSU2_TR(0x562a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B562a17:{NFSU2_TR(0x562a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B562a1a:L562a1a:{c.instructions+=4;NFSU2_TR(0x562a1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B562a1b:{NFSU2_TR(0x562a1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562a1c:{NFSU2_TR(0x562a1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B562a1d:{NFSU2_TR(0x562a1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562a20:L562a20:{c.instructions+=5;NFSU2_TR(0x562a20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562a21:{NFSU2_TR(0x562a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B562a24:{NFSU2_TR(0x562a24);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562a26:{NFSU2_TR(0x562a26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562a27:{NFSU2_TR(0x562a27);
if(r1(R+518)){{goto L562a46;}}
}
B562a29:L562a29:{c.instructions+=2;NFSU2_TR(0x562a29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562a2a:{NFSU2_TR(0x562a2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562a2full));
TAIL_STATIC(0x52cef0u,52c);
}
B562a2f:L562a2f:{c.instructions+=3;NFSU2_TR(0x562a2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B562a32:{NFSU2_TR(0x562a32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562a34:{NFSU2_TR(0x562a34);
if(r1(R+518)){{goto L562a46;}}
}
B562a36:L562a36:{c.instructions+=3;NFSU2_TR(0x562a36);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562a3b:{NFSU2_TR(0x562a3b);
__builtin_memmove((R+4),(R+0),4);
}
B562a3d:{NFSU2_TR(0x562a3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562a42ull));
TAIL_STATIC(0x517f80u,517);
}
B562a42:L562a42:{c.instructions+=2;NFSU2_TR(0x562a42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562a44:{NFSU2_TR(0x562a44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L562a5d;}}
}
B562a46:L562a46:{c.instructions+=3;NFSU2_TR(0x562a46);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B562a4b:{NFSU2_TR(0x562a4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562a4d:{NFSU2_TR(0x562a4d);
if(r1(R+518)){{goto L562ab1;}}
}
B562a4f:L562a4f:{c.instructions+=4;NFSU2_TR(0x562a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B562a52:{NFSU2_TR(0x562a52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562a53:{NFSU2_TR(0x562a53);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562a58:{NFSU2_TR(0x562a58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562a5dull));
TAIL_STATIC(0x52c570u,52c);
}
B562a5d:L562a5d:{c.instructions+=3;NFSU2_TR(0x562a5d);
__builtin_memmove((R+28),(R+0),4);
}
B562a5f:{NFSU2_TR(0x562a5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562a61:{NFSU2_TR(0x562a61);
if(r1(R+518)){{goto L562ab1;}}
}
B562a63:L562a63:{c.instructions+=3;NFSU2_TR(0x562a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B562a66:{NFSU2_TR(0x562a66);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562a68:{NFSU2_TR(0x562a68);
if(r1(R+518)){{goto L562ab1;}}
}
B562a6a:L562a6a:{c.instructions+=1;NFSU2_TR(0x562a6a);
__builtin_memmove((R+12),(R+12),4);
}
B562a70:L562a70:{c.instructions+=2;NFSU2_TR(0x562a70);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562a75:{NFSU2_TR(0x562a75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562a7aull));
TAIL_STATIC(0x505450u,505);
}
B562a7a:L562a7a:{c.instructions+=4;NFSU2_TR(0x562a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B562a7d:{NFSU2_TR(0x562a7d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B562a80:{NFSU2_TR(0x562a80);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B562a82:{NFSU2_TR(0x562a82);
if(r1(R+518)){{goto L562a8d;}}
}
B562a84:L562a84:{c.instructions+=3;NFSU2_TR(0x562a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B562a87:{NFSU2_TR(0x562a87);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562a89:{NFSU2_TR(0x562a89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x562a70u);}goto L562a70;}}
}
B562a8b:L562a8b:{c.instructions+=1;NFSU2_TR(0x562a8b);
{goto L562ab1;}
}
B562a8d:L562a8d:{c.instructions+=2;NFSU2_TR(0x562a8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562a8f:{NFSU2_TR(0x562a8f);
if(r1(R+518)){{goto L562ab1;}}
}
B562a91:L562a91:{c.instructions+=2;NFSU2_TR(0x562a91);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B562a94:{NFSU2_TR(0x562a94);
if(r1(R+518)){{goto L562aaa;}}
}
B562a96:L562a96:{c.instructions+=3;NFSU2_TR(0x562a96);
__builtin_memmove((R+4),(R+28),4);
}
B562a98:{NFSU2_TR(0x562a98);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B562a9b:{NFSU2_TR(0x562a9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562aa0ull));
TAIL_STATIC(0x517720u,517);
}
B562aa0:L562aa0:{c.instructions+=2;NFSU2_TR(0x562aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562aa3:{NFSU2_TR(0x562aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B562aaa:L562aaa:{c.instructions+=1;NFSU2_TR(0x562aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B562ab1:L562ab1:{c.instructions+=4;NFSU2_TR(0x562ab1);
__builtin_memmove((R+4),gp(0x7fa1c4),4);
}
B562ab7:{NFSU2_TR(0x562ab7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562ab8:{NFSU2_TR(0x562ab8);
w4(R+4,u32(0x8637b0ull));
}
B562abd:{NFSU2_TR(0x562abd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562ac2ull));
TAIL_STATIC(0x51bb70u,51b);
}
B562ac2:L562ac2:{c.instructions+=4;NFSU2_TR(0x562ac2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562ac4:{NFSU2_TR(0x562ac4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B562ac5:{NFSU2_TR(0x562ac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562ac6:{NFSU2_TR(0x562ac6);
if(r1(R+518)){{goto L562ae7;}}
}
B562ac8:L562ac8:{c.instructions+=3;NFSU2_TR(0x562ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B562acb:{NFSU2_TR(0x562acb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562acd:{NFSU2_TR(0x562acd);
if(r1(R+518)){{goto L562ae7;}}
}
B562acf:L562acf:{c.instructions+=3;NFSU2_TR(0x562acf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562ad2:{NFSU2_TR(0x562ad2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562ad4:{NFSU2_TR(0x562ad4);
if(r1(R+518)){{goto L562ae7;}}
}
B562ad6:L562ad6:{c.instructions+=6;NFSU2_TR(0x562ad6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562ad7:{NFSU2_TR(0x562ad7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562ad9:{NFSU2_TR(0x562ad9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562adb:{NFSU2_TR(0x562adb);
u8 U[4];
w4(U+0,u32(0x251bf83eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562ae0:{NFSU2_TR(0x562ae0);
__builtin_memmove((R+4),(R+0),4);
}
B562ae2:{NFSU2_TR(0x562ae2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562ae7ull));
TAIL_STATIC(0x55b5c0u,55b);
}
B562ae7:L562ae7:{c.instructions+=3;NFSU2_TR(0x562ae7);
__builtin_memmove((R+8),gp(0x7fa1c4),4);
}
B562aed:{NFSU2_TR(0x562aed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562aee:{NFSU2_TR(0x562aee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562af3ull));
TAIL_STATIC(0x52cef0u,52c);
}
B562af3:L562af3:{c.instructions+=3;NFSU2_TR(0x562af3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B562af6:{NFSU2_TR(0x562af6);
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
B562af8:{NFSU2_TR(0x562af8);
if(r1(R+518)){{goto L562b0b;}}
}
B562afa:L562afa:{c.instructions+=5;NFSU2_TR(0x562afa);
w4(R+4,u32(0xffull));
}
B562aff:{NFSU2_TR(0x562aff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B562b02:{NFSU2_TR(0x562b02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B562b05:{NFSU2_TR(0x562b05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B562b08:{NFSU2_TR(0x562b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B562b0b:L562b0b:{c.instructions+=1;NFSU2_TR(0x562b0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562b10:L562b10:{c.instructions+=7;NFSU2_TR(0x562b10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562b11:{NFSU2_TR(0x562b11);
__builtin_memmove((R+24),(R+4),4);
}
B562b13:{NFSU2_TR(0x562b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562b16:{NFSU2_TR(0x562b16);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562b1b:{NFSU2_TR(0x562b1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562b1c:{NFSU2_TR(0x562b1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x71345941ull));
s4(u32(r4(U+0)),r4(U+4));
}
B562b23:{NFSU2_TR(0x562b23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562b28ull));
TAIL_STATIC(0x495520u,495);
}
B562b28:L562b28:{c.instructions+=5;NFSU2_TR(0x562b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562b2e:{NFSU2_TR(0x562b2e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B562b31:{NFSU2_TR(0x562b31);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562b33:{NFSU2_TR(0x562b33);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x159ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B562b3a:{NFSU2_TR(0x562b3a);
if(r1(R+518)){{goto L562b74;}}
}
B562b3c:L562b3c:{c.instructions+=3;NFSU2_TR(0x562b3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562b3d:{NFSU2_TR(0x562b3d);
w4(R+4,u32(0x8637b0ull));
}
B562b42:{NFSU2_TR(0x562b42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562b47ull));
TAIL_STATIC(0x51bb70u,51b);
}
B562b47:L562b47:{c.instructions+=2;NFSU2_TR(0x562b47);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562b49:{NFSU2_TR(0x562b49);
if(r1(R+518)){{goto L562b6a;}}
}
B562b4b:L562b4b:{c.instructions+=3;NFSU2_TR(0x562b4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B562b4e:{NFSU2_TR(0x562b4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562b50:{NFSU2_TR(0x562b50);
if(r1(R+518)){{goto L562b6a;}}
}
B562b52:L562b52:{c.instructions+=3;NFSU2_TR(0x562b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562b55:{NFSU2_TR(0x562b55);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562b57:{NFSU2_TR(0x562b57);
if(r1(R+518)){{goto L562b6a;}}
}
B562b59:L562b59:{c.instructions+=6;NFSU2_TR(0x562b59);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562b5a:{NFSU2_TR(0x562b5a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562b5c:{NFSU2_TR(0x562b5c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562b5e:{NFSU2_TR(0x562b5e);
u8 U[4];
w4(U+0,u32(0x81f0b71aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562b63:{NFSU2_TR(0x562b63);
__builtin_memmove((R+4),(R+0),4);
}
B562b65:{NFSU2_TR(0x562b65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562b6aull));
TAIL_STATIC(0x55b5c0u,55b);
}
B562b6a:L562b6a:{c.instructions+=1;NFSU2_TR(0x562b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B562b74:L562b74:{c.instructions+=5;NFSU2_TR(0x562b74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B562b77:{NFSU2_TR(0x562b77);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562b79:{NFSU2_TR(0x562b79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562b7a:{NFSU2_TR(0x562b7a);
__builtin_memmove((R+4),(R+24),4);
}
B562b7c:{NFSU2_TR(0x562b7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562b81ull));
TAIL_STATIC(0x50f290u,50f);
}
B562b81:L562b81:{c.instructions+=2;NFSU2_TR(0x562b81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562b82:{NFSU2_TR(0x562b82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562b90:L562b90:{c.instructions+=4;NFSU2_TR(0x562b90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562b91:{NFSU2_TR(0x562b91);
__builtin_memmove((R+20),(R+16),4);
}
B562b93:{NFSU2_TR(0x562b93);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B562b9a:{NFSU2_TR(0x562b9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L562c49;}}
}
B562ba0:L562ba0:{c.instructions+=5;NFSU2_TR(0x562ba0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562ba1:{NFSU2_TR(0x562ba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B562ba4:{NFSU2_TR(0x562ba4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562ba5:{NFSU2_TR(0x562ba5);
w4(R+4,u32(0x8637b0ull));
}
B562baa:{NFSU2_TR(0x562baa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562bafull));
TAIL_STATIC(0x51bb70u,51b);
}
B562baf:L562baf:{c.instructions+=2;NFSU2_TR(0x562baf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562bb1:{NFSU2_TR(0x562bb1);
if(r1(R+518)){{goto L562bd2;}}
}
B562bb3:L562bb3:{c.instructions+=3;NFSU2_TR(0x562bb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B562bb6:{NFSU2_TR(0x562bb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562bb8:{NFSU2_TR(0x562bb8);
if(r1(R+518)){{goto L562bd2;}}
}
B562bba:L562bba:{c.instructions+=3;NFSU2_TR(0x562bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562bbd:{NFSU2_TR(0x562bbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562bbf:{NFSU2_TR(0x562bbf);
if(r1(R+518)){{goto L562bd2;}}
}
B562bc1:L562bc1:{c.instructions+=6;NFSU2_TR(0x562bc1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562bc2:{NFSU2_TR(0x562bc2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562bc4:{NFSU2_TR(0x562bc4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562bc6:{NFSU2_TR(0x562bc6);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562bcb:{NFSU2_TR(0x562bcb);
__builtin_memmove((R+4),(R+0),4);
}
B562bcd:{NFSU2_TR(0x562bcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562bd2ull));
TAIL_STATIC(0x55b5c0u,55b);
}
B562bd2:L562bd2:{c.instructions+=2;NFSU2_TR(0x562bd2);
u8 U[8];
__builtin_memmove((U+0),gp(0x8389c8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8389c8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B562bdc:{NFSU2_TR(0x562bdc);
if(r1(R+518)){{goto L562c2b;}}
}
B562bde:L562bde:{c.instructions+=2;NFSU2_TR(0x562bde);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B562be5:{NFSU2_TR(0x562be5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L562c24;}}
}
B562be7:L562be7:{c.instructions+=1;NFSU2_TR(0x562be7);
u8 U[4];
w4(U+0,u32(0xa0c16cabull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562bec:L562bec:{c.instructions+=9;NFSU2_TR(0x562bec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562bee:{NFSU2_TR(0x562bee);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562bf3:{NFSU2_TR(0x562bf3);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562bf8:{NFSU2_TR(0x562bf8);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562bfd:{NFSU2_TR(0x562bfd);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562c02:{NFSU2_TR(0x562c02);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562c07:{NFSU2_TR(0x562c07);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562c0c:{NFSU2_TR(0x562c0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562c0d:{NFSU2_TR(0x562c0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562c12ull));
TAIL_STATIC(0x558790u,558);
}
B562c12:L562c12:{c.instructions+=5;NFSU2_TR(0x562c12);
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
B562c15:{NFSU2_TR(0x562c15);
s4(0x838970,u32(0x34dc1bcfull));
}
B562c1f:{NFSU2_TR(0x562c1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562c20:{NFSU2_TR(0x562c20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B562c21:{NFSU2_TR(0x562c21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562c24:L562c24:{c.instructions+=2;NFSU2_TR(0x562c24);
u8 U[4];
w4(U+0,u32(0x7f24787ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562c29:{NFSU2_TR(0x562c29);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x562becu);}goto L562bec;}
}
B562c2b:L562c2b:{c.instructions+=4;NFSU2_TR(0x562c2b);
u8 U[4];
w4(U+0,u32(0x51e3f647ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562c30:{NFSU2_TR(0x562c30);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562c35:{NFSU2_TR(0x562c35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562c36:{NFSU2_TR(0x562c36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562c3bull));
TAIL_STATIC(0x558430u,558);
}
B562c3b:L562c3b:{c.instructions+=3;NFSU2_TR(0x562c3b);
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
B562c3e:{NFSU2_TR(0x562c3e);
s4(0x838970,u32(0x34dc1becull));
}
B562c48:{NFSU2_TR(0x562c48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562c49:L562c49:{c.instructions+=2;NFSU2_TR(0x562c49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B562c4a:{NFSU2_TR(0x562c4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562c50:L562c50:{c.instructions+=16;NFSU2_TR(0x562c50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562c51:{NFSU2_TR(0x562c51);
__builtin_memmove((R+20),(R+16),4);
}
B562c53:{NFSU2_TR(0x562c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562c56:{NFSU2_TR(0x562c56);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562c57:{NFSU2_TR(0x562c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B562c5a:{NFSU2_TR(0x562c5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562c5b:{NFSU2_TR(0x562c5b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562c5c:{NFSU2_TR(0x562c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B562c5f:{NFSU2_TR(0x562c5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562c60:{NFSU2_TR(0x562c60);
__builtin_memmove((R+24),(R+4),4);
}
B562c62:{NFSU2_TR(0x562c62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B562c65:{NFSU2_TR(0x562c65);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562c66:{NFSU2_TR(0x562c66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562c67:{NFSU2_TR(0x562c67);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562c68:{NFSU2_TR(0x562c68);
__builtin_memmove((R+4),(R+24),4);
}
B562c6a:{NFSU2_TR(0x562c6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562c6full));
TAIL_STATIC(0x543d40u,543);
}
B562c6f:L562c6f:{c.instructions+=2;NFSU2_TR(0x562c6f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x562f5dacull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x562f5dacull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B562c75:{NFSU2_TR(0x562c75);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L562e5c;}}
}
B562c7b:L562c7b:{c.instructions+=1;NFSU2_TR(0x562c7b);
if(r1(R+518)){{goto L562e0f;}}
}
B562c81:L562c81:{c.instructions+=2;NFSU2_TR(0x562c81);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x35f8620bull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B562c87:{NFSU2_TR(0x562c87);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L562d20;}}
}
B562c8d:L562c8d:{c.instructions+=1;NFSU2_TR(0x562c8d);
if(r1(R+518)){{goto L562d01;}}
}
B562c8f:L562c8f:{c.instructions+=2;NFSU2_TR(0x562c8f);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B562c95:{NFSU2_TR(0x562c95);
if(r1(R+518)){{goto L562cb6;}}
}
B562c97:L562c97:{c.instructions+=2;NFSU2_TR(0x562c97);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x289ba9bfull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B562c9d:{NFSU2_TR(0x562c9d);
if(r1(R+518)){{goto L562ca8;}}
}
B562c9f:L562c9f:{c.instructions+=2;NFSU2_TR(0x562c9f);
u8 U[6];
w1(R+512,u8((r4(R+28))<(u32(0x1dull))));
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1dull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1dull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B562ca2:{NFSU2_TR(0x562ca2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5630f2u,563);}
}
B562ca8:L562ca8:{c.instructions+=2;NFSU2_TR(0x562ca8);
__builtin_memmove((R+4),(R+24),4);
}
B562caa:{NFSU2_TR(0x562caa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562cafull));
TAIL_STATIC(0x538ca0u,538);
}
B562caf:L562caf:{c.instructions+=5;NFSU2_TR(0x562caf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B562cb0:{NFSU2_TR(0x562cb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562cb1:{NFSU2_TR(0x562cb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B562cb2:{NFSU2_TR(0x562cb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B562cb3:{NFSU2_TR(0x562cb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562cb6:L562cb6:{c.instructions+=5;NFSU2_TR(0x562cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562cb9:{NFSU2_TR(0x562cb9);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562cbe:{NFSU2_TR(0x562cbe);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562cc3:{NFSU2_TR(0x562cc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562cc4:{NFSU2_TR(0x562cc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562cc9ull));
TAIL_STATIC(0x537d40u,537);
}
B562cc9:L562cc9:{c.instructions+=3;NFSU2_TR(0x562cc9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B562ccc:{NFSU2_TR(0x562ccc);
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
B562cce:{NFSU2_TR(0x562cce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5630f2u,563);}
}
B562cd4:L562cd4:{c.instructions+=4;NFSU2_TR(0x562cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B562cd7:{NFSU2_TR(0x562cd7);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B562cda:{NFSU2_TR(0x562cda);
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
B562cdc:{NFSU2_TR(0x562cdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5630f2u,563);}
}
B562ce2:L562ce2:{c.instructions+=6;NFSU2_TR(0x562ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562ce5:{NFSU2_TR(0x562ce5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562ce7:{NFSU2_TR(0x562ce7);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562cec:{NFSU2_TR(0x562cec);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562cf1:{NFSU2_TR(0x562cf1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562cf2:{NFSU2_TR(0x562cf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562cf7ull));
TAIL_STATIC(0x537c60u,537);
}
B562cf7:L562cf7:{c.instructions+=6;NFSU2_TR(0x562cf7);
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
B562cfa:{NFSU2_TR(0x562cfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B562cfb:{NFSU2_TR(0x562cfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562cfc:{NFSU2_TR(0x562cfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B562cfd:{NFSU2_TR(0x562cfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B562cfe:{NFSU2_TR(0x562cfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562d01:L562d01:{c.instructions+=3;NFSU2_TR(0x562d01);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562d03:{NFSU2_TR(0x562d03);
w4(R+4,u32(0x8635bcull));
}
B562d08:{NFSU2_TR(0x562d08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562d0dull));
TAIL_STATIC(0x5243d0u,524);
}
B562d0d:L562d0d:{c.instructions+=3;NFSU2_TR(0x562d0d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562d0f:{NFSU2_TR(0x562d0f);
w4(R+4,u32(0x83a9d0ull));
}
B562d14:{NFSU2_TR(0x562d14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562d19ull));
TAIL_STATIC(0x52a460u,52a);
}
B562d19:L562d19:{c.instructions+=5;NFSU2_TR(0x562d19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B562d1a:{NFSU2_TR(0x562d1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562d1b:{NFSU2_TR(0x562d1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B562d1c:{NFSU2_TR(0x562d1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B562d1d:{NFSU2_TR(0x562d1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562d20:L562d20:{c.instructions+=2;NFSU2_TR(0x562d20);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x51123592ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B562d26:{NFSU2_TR(0x562d26);
if(r1(R+518)){{goto L562d97;}}
}
B562d28:L562d28:{c.instructions+=2;NFSU2_TR(0x562d28);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x51a33f36ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x51a33f36ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x51a33f36ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B562d2e:{NFSU2_TR(0x562d2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5630f2u,563);}
}
B562d34:L562d34:{c.instructions+=2;NFSU2_TR(0x562d34);
w4(R+4,u32(0x838980ull));
}
B562d39:{NFSU2_TR(0x562d39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562d3eull));
TAIL_STATIC(0x547570u,547);
}
B562d3e:L562d3e:{c.instructions+=5;NFSU2_TR(0x562d3e);
s1(0x838982,u8(0x0ull));
}
B562d45:{NFSU2_TR(0x562d45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B562d48:{NFSU2_TR(0x562d48);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562d4a:{NFSU2_TR(0x562d4a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562d4b:{NFSU2_TR(0x562d4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562d50ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B562d50:L562d50:{c.instructions+=4;NFSU2_TR(0x562d50);
__builtin_memmove((R+0),gp(0x83898c),4);
}
B562d55:{NFSU2_TR(0x562d55);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B562d58:{NFSU2_TR(0x562d58);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B562d5a:{NFSU2_TR(0x562d5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L562d7a;}}
}
B562d5c:L562d5c:{c.instructions+=2;NFSU2_TR(0x562d5c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562d5d:{NFSU2_TR(0x562d5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562d62ull));
TAIL_STATIC(0x50d2a0u,50d);
}
B562d62:L562d62:{c.instructions+=4;NFSU2_TR(0x562d62);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B562d67:{NFSU2_TR(0x562d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B562d6a:{NFSU2_TR(0x562d6a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562d6b:{NFSU2_TR(0x562d6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562d70ull));
TAIL_STATIC(0x552c80u,552);
}
B562d70:L562d70:{c.instructions+=6;NFSU2_TR(0x562d70);
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
B562d73:{NFSU2_TR(0x562d73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B562d74:{NFSU2_TR(0x562d74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562d75:{NFSU2_TR(0x562d75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B562d76:{NFSU2_TR(0x562d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B562d77:{NFSU2_TR(0x562d77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562d7a:L562d7a:{c.instructions+=2;NFSU2_TR(0x562d7a);
w4(R+4,u32(0x838980ull));
}
B562d7f:{NFSU2_TR(0x562d7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562d84ull));
TAIL_STATIC(0x55c460u,55c);
}
B562d84:L562d84:{c.instructions+=1;NFSU2_TR(0x562d84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562d89ull));
TAIL_STATIC(0x54f980u,54f);
}
B562d89:L562d89:{c.instructions+=2;NFSU2_TR(0x562d89);
__builtin_memmove((R+4),(R+0),4);
}
B562d8b:{NFSU2_TR(0x562d8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562d90ull));
TAIL_STATIC(0x55bdf0u,55b);
}
B562d90:L562d90:{c.instructions+=5;NFSU2_TR(0x562d90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B562d91:{NFSU2_TR(0x562d91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562d92:{NFSU2_TR(0x562d92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B562d93:{NFSU2_TR(0x562d93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B562d94:{NFSU2_TR(0x562d94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562d97:L562d97:{c.instructions+=2;NFSU2_TR(0x562d97);
u8 U[8];
__builtin_memmove((U+0),gp(0x8389c8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8389c8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B562da1:{NFSU2_TR(0x562da1);
if(r1(R+518)){{goto L562de5;}}
}
B562da3:L562da3:{c.instructions+=11;NFSU2_TR(0x562da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562da6:{NFSU2_TR(0x562da6);
u8 U[4];
w4(U+0,u32(0xa6c0d334ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562dab:{NFSU2_TR(0x562dab);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562dad:{NFSU2_TR(0x562dad);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562db2:{NFSU2_TR(0x562db2);
u8 U[4];
w4(U+0,u32(0x562f5dacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562db7:{NFSU2_TR(0x562db7);
u8 U[4];
w4(U+0,u32(0x51a33f36ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562dbc:{NFSU2_TR(0x562dbc);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562dc1:{NFSU2_TR(0x562dc1);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562dc6:{NFSU2_TR(0x562dc6);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562dcb:{NFSU2_TR(0x562dcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562dcc:{NFSU2_TR(0x562dcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562dd1ull));
TAIL_STATIC(0x558790u,558);
}
B562dd1:L562dd1:{c.instructions+=7;NFSU2_TR(0x562dd1);
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
B562dd4:{NFSU2_TR(0x562dd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B562dd5:{NFSU2_TR(0x562dd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562dd6:{NFSU2_TR(0x562dd6);
s4(0x838970,u32(0x562f5dacull));
}
B562de0:{NFSU2_TR(0x562de0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B562de1:{NFSU2_TR(0x562de1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B562de2:{NFSU2_TR(0x562de2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562de5:L562de5:{c.instructions+=2;NFSU2_TR(0x562de5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562de6:{NFSU2_TR(0x562de6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562debull));
TAIL_STATIC(0x50d2a0u,50d);
}
B562deb:L562deb:{c.instructions+=7;NFSU2_TR(0x562deb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562ded:{NFSU2_TR(0x562ded);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562df2:{NFSU2_TR(0x562df2);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B562df7:{NFSU2_TR(0x562df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B562dfa:{NFSU2_TR(0x562dfa);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562dff:{NFSU2_TR(0x562dff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562e00:{NFSU2_TR(0x562e00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562e05ull));
TAIL_STATIC(0x537c60u,537);
}
B562e05:L562e05:{c.instructions+=6;NFSU2_TR(0x562e05);
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
B562e08:{NFSU2_TR(0x562e08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B562e09:{NFSU2_TR(0x562e09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562e0a:{NFSU2_TR(0x562e0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B562e0b:{NFSU2_TR(0x562e0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B562e0c:{NFSU2_TR(0x562e0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562e0f:L562e0f:{c.instructions+=3;NFSU2_TR(0x562e0f);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562e14:{NFSU2_TR(0x562e14);
w4(R+4,u32(0x8389d0ull));
}
B562e19:{NFSU2_TR(0x562e19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562e1eull));
TAIL_STATIC(0x413440u,413);
}
B562e1e:L562e1e:{c.instructions+=4;NFSU2_TR(0x562e1e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562e20:{NFSU2_TR(0x562e20);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562e22:{NFSU2_TR(0x562e22);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562e27:{NFSU2_TR(0x562e27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562e2cull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B562e2c:L562e2c:{c.instructions+=3;NFSU2_TR(0x562e2c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B562e2f:{NFSU2_TR(0x562e2f);
w4(R+4,u32(0x838980ull));
}
B562e34:{NFSU2_TR(0x562e34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562e39ull));
TAIL_STATIC(0x53b3f0u,53b);
}
B562e39:L562e39:{c.instructions+=2;NFSU2_TR(0x562e39);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B562e40:{NFSU2_TR(0x562e40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x562d84u);}goto L562d84;}}
}
B562e46:L562e46:{c.instructions+=1;NFSU2_TR(0x562e46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562e4bull));
TAIL_STATIC(0x5404a0u,540);
}
B562e4b:L562e4b:{c.instructions+=2;NFSU2_TR(0x562e4b);
w4(R+4,u32(0x838980ull));
}
B562e50:{NFSU2_TR(0x562e50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562e55ull));
TAIL_STATIC(0x54fd40u,54f);
}
B562e55:L562e55:{c.instructions+=5;NFSU2_TR(0x562e55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B562e56:{NFSU2_TR(0x562e56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562e57:{NFSU2_TR(0x562e57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B562e58:{NFSU2_TR(0x562e58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B562e59:{NFSU2_TR(0x562e59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562e5c:L562e5c:{c.instructions+=2;NFSU2_TR(0x562e5c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xd05fc3a3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd05fc3a3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B562e62:{NFSU2_TR(0x562e62);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x56303eu,563);}
}
B562e68:L562e68:{c.instructions+=1;NFSU2_TR(0x562e68);
if(r1(R+518)){{goto L562feb;}}
}
B562e6e:L562e6e:{c.instructions+=2;NFSU2_TR(0x562e6e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B562e74:{NFSU2_TR(0x562e74);
if(r1(R+518)){{goto L562f07;}}
}
B562e7a:L562e7a:{c.instructions+=2;NFSU2_TR(0x562e7a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb4edeb6dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B562e80:{NFSU2_TR(0x562e80);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x562ca8u);}goto L562ca8;}}
}
B562e86:L562e86:{c.instructions+=2;NFSU2_TR(0x562e86);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xc519bfc0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc519bfc0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc519bfc0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B562e8c:{NFSU2_TR(0x562e8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5630f2u,563);}
}
B562e92:L562e92:{c.instructions+=2;NFSU2_TR(0x562e92);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B562e95:{NFSU2_TR(0x562e95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562e9aull));
TAIL_STATIC(0x495910u,495);
}
B562e9a:L562e9a:{c.instructions+=2;NFSU2_TR(0x562e9a);
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
B562e9d:{NFSU2_TR(0x562e9d);
if(r1(R+518)){TAIL_STATIC(0x5630f2u,563);}
}
B562ea3:L562ea3:{c.instructions+=5;NFSU2_TR(0x562ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B562ea6:{NFSU2_TR(0x562ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562ea9:{NFSU2_TR(0x562ea9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B562eac:{NFSU2_TR(0x562eac);
w4(R+4,u32(0x1a311489ull));
}
B562eb1:{NFSU2_TR(0x562eb1);
if(r1(R+518)){{goto L562ebd;}}
}
B562eb3:L562eb3:{c.instructions+=2;NFSU2_TR(0x562eb3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B562eb4:{NFSU2_TR(0x562eb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L562ec2;}}
}
B562eb6:L562eb6:{c.instructions+=2;NFSU2_TR(0x562eb6);
w4(R+4,u32(0x449a9dd9ull));
}
B562ebb:{NFSU2_TR(0x562ebb);
{goto L562ec2;}
}
B562ebd:L562ebd:{c.instructions+=1;NFSU2_TR(0x562ebd);
w4(R+4,u32(0x6ee64972ull));
}
B562ec2:L562ec2:{c.instructions+=11;NFSU2_TR(0x562ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562ec5:{NFSU2_TR(0x562ec5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562ec6:{NFSU2_TR(0x562ec6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562ec8:{NFSU2_TR(0x562ec8);
u8 U[4];
w4(U+0,u32(0xb4edeb6dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562ecd:{NFSU2_TR(0x562ecd);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562ed2:{NFSU2_TR(0x562ed2);
u8 U[4];
w4(U+0,u32(0xe75749d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562ed7:{NFSU2_TR(0x562ed7);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562edc:{NFSU2_TR(0x562edc);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562ee1:{NFSU2_TR(0x562ee1);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562ee6:{NFSU2_TR(0x562ee6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562ee7:{NFSU2_TR(0x562ee7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562eecull));
TAIL_STATIC(0x558790u,558);
}
B562eec:L562eec:{c.instructions+=4;NFSU2_TR(0x562eec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B562eef:{NFSU2_TR(0x562eef);
__builtin_memmove((R+4),(R+24),4);
}
B562ef1:{NFSU2_TR(0x562ef1);
s4(0x838970,u32(0xb4edeb6dull));
}
B562efb:{NFSU2_TR(0x562efb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562f00ull));
TAIL_STATIC(0x538c00u,538);
}
B562f00:L562f00:{c.instructions+=5;NFSU2_TR(0x562f00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B562f01:{NFSU2_TR(0x562f01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562f02:{NFSU2_TR(0x562f02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B562f03:{NFSU2_TR(0x562f03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B562f04:{NFSU2_TR(0x562f04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562f07:L562f07:{c.instructions+=2;NFSU2_TR(0x562f07);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B562f0e:{NFSU2_TR(0x562f0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L562f59;}}
}
B562f10:L562f10:{c.instructions+=11;NFSU2_TR(0x562f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B562f13:{NFSU2_TR(0x562f13);
u8 U[4];
w4(U+0,u32(0xd76e0b5aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562f18:{NFSU2_TR(0x562f18);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562f1a:{NFSU2_TR(0x562f1a);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562f1f:{NFSU2_TR(0x562f1f);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562f24:{NFSU2_TR(0x562f24);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562f29:{NFSU2_TR(0x562f29);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562f2e:{NFSU2_TR(0x562f2e);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562f33:{NFSU2_TR(0x562f33);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562f38:{NFSU2_TR(0x562f38);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562f39:{NFSU2_TR(0x562f39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562f3eull));
TAIL_STATIC(0x558790u,558);
}
B562f3e:L562f3e:{c.instructions+=4;NFSU2_TR(0x562f3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B562f41:{NFSU2_TR(0x562f41);
__builtin_memmove((R+4),(R+24),4);
}
B562f43:{NFSU2_TR(0x562f43);
s4(0x838970,u32(0x34dc1bcfull));
}
B562f4d:{NFSU2_TR(0x562f4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562f52ull));
TAIL_STATIC(0x538c00u,538);
}
B562f52:L562f52:{c.instructions+=5;NFSU2_TR(0x562f52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B562f53:{NFSU2_TR(0x562f53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562f54:{NFSU2_TR(0x562f54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B562f55:{NFSU2_TR(0x562f55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B562f56:{NFSU2_TR(0x562f56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562f59:L562f59:{c.instructions+=2;NFSU2_TR(0x562f59);
u8 U[8];
__builtin_memmove((U+0),gp(0x8389c8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8389c8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B562f63:{NFSU2_TR(0x562f63);
if(r1(R+518)){{goto L562fae;}}
}
B562f65:L562f65:{c.instructions+=11;NFSU2_TR(0x562f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B562f68:{NFSU2_TR(0x562f68);
u8 U[4];
w4(U+0,u32(0x511cca10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562f6d:{NFSU2_TR(0x562f6d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562f6f:{NFSU2_TR(0x562f6f);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562f74:{NFSU2_TR(0x562f74);
u8 U[4];
w4(U+0,u32(0x562f5dacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562f79:{NFSU2_TR(0x562f79);
u8 U[4];
w4(U+0,u32(0x51a33f36ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562f7e:{NFSU2_TR(0x562f7e);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562f83:{NFSU2_TR(0x562f83);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562f88:{NFSU2_TR(0x562f88);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562f8d:{NFSU2_TR(0x562f8d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562f8e:{NFSU2_TR(0x562f8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562f93ull));
TAIL_STATIC(0x558790u,558);
}
B562f93:L562f93:{c.instructions+=4;NFSU2_TR(0x562f93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B562f96:{NFSU2_TR(0x562f96);
__builtin_memmove((R+4),(R+24),4);
}
B562f98:{NFSU2_TR(0x562f98);
s4(0x838970,u32(0x562f5dacull));
}
B562fa2:{NFSU2_TR(0x562fa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562fa7ull));
TAIL_STATIC(0x538c00u,538);
}
B562fa7:L562fa7:{c.instructions+=5;NFSU2_TR(0x562fa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B562fa8:{NFSU2_TR(0x562fa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562fa9:{NFSU2_TR(0x562fa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B562faa:{NFSU2_TR(0x562faa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B562fab:{NFSU2_TR(0x562fab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562fae:L562fae:{c.instructions+=5;NFSU2_TR(0x562fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562fb1:{NFSU2_TR(0x562fb1);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562fb6:{NFSU2_TR(0x562fb6);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562fbb:{NFSU2_TR(0x562fbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562fbc:{NFSU2_TR(0x562fbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562fc1ull));
TAIL_STATIC(0x537d40u,537);
}
B562fc1:L562fc1:{c.instructions+=3;NFSU2_TR(0x562fc1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B562fc4:{NFSU2_TR(0x562fc4);
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
B562fc6:{NFSU2_TR(0x562fc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5630f2u,563);}
}
B562fcc:L562fcc:{c.instructions+=6;NFSU2_TR(0x562fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B562fcf:{NFSU2_TR(0x562fcf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562fd1:{NFSU2_TR(0x562fd1);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562fd6:{NFSU2_TR(0x562fd6);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562fdb:{NFSU2_TR(0x562fdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B562fdc:{NFSU2_TR(0x562fdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562fe1ull));
TAIL_STATIC(0x537c60u,537);
}
B562fe1:L562fe1:{c.instructions+=6;NFSU2_TR(0x562fe1);
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
B562fe4:{NFSU2_TR(0x562fe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B562fe5:{NFSU2_TR(0x562fe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B562fe6:{NFSU2_TR(0x562fe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B562fe7:{NFSU2_TR(0x562fe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B562fe8:{NFSU2_TR(0x562fe8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B562feb:L562feb:{c.instructions+=2;NFSU2_TR(0x562feb);
__builtin_memmove((R+4),(R+24),4);
}
B562fed:{NFSU2_TR(0x562fed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562ff2ull));
TAIL_STATIC(0x538ca0u,538);
}
B562ff2:L562ff2:{c.instructions+=2;NFSU2_TR(0x562ff2);
w4(R+4,u32(0x838980ull));
}
B562ff7:{NFSU2_TR(0x562ff7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x562ffcull));
TAIL_STATIC(0x547570u,547);
}
B562ffc:L562ffc:{c.instructions+=2;NFSU2_TR(0x562ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B562fff:{NFSU2_TR(0x562fff);
w4(R+4,u32(0x838980ull));
TAIL_STATIC(0x563004u,563);
}
XIT:NFSU2_TR_EXIT(0x562,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
